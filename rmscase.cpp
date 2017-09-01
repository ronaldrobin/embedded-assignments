# include <stdio.h>
# include <math.h>

main()
{
	int i; //number of peak values
	int flag;
	int plinenum; //phase line number
	int p;
	float pv; //peak value
	float sum; //sum of peak values
	float avg; // average of summed values
	float rms; //rms value of the peak values
	
   	printf("enter the number of peak values=");
	scanf("%d",&i);	
   	p=0;
	flag=1;
	while (flag=1)
	{
		printf(" \nenter the phase line number");
		scanf("%d",&plinenum);
		switch(plinenum)
		{
			case 1:
				{
				while (p<i)
				{
				
				printf("phase line is 1 and peak value is");
				scanf("%f",&pv);
				sum+= pv*pv;
				p++;
                
		}
		        break;
				}
		    case 2:
		    	{
		    			while (p<i)
				{
				
				printf("phase line is 2 and peak value is");
				scanf("%f",&pv);
				sum+= pv*pv;
				p++;
                
		    		
				}
				break;
		}
		    case 3:
		    	{
		    			while (p<i)
				{
				
				printf("phase line is 3 and peak value is");
				scanf("%f",&pv);
				sum+= pv*pv;
				p++;
                
				}
				break;
	       	}
	       	default: printf("error\n");
}
	            avg=sum/i;
				rms=sqrt(avg);
				printf(" the rms value is %f\n",rms);
				
}
}


