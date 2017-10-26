ans1.>
A scope is a region of a program. Variable Scope is a region in a program where a variable is declared and used. 
So, we can have three types of scopes depending on the region where these are declared and used – 
Local variables are defined inside a function or a block
Global variables are outside all functions
Formal parameters are defined in function parameters

ans2.>
Declaration of a variable in C means that the variable is only declared and allocated a block of memory but still has no value.
Definition of a variable means to assign or initialize it with some specific value.

Declaration specifies the properties of a variable.
    int x;              /* x is an integer */
    int roll_no[];      /* roll_no is an array of integers */

Definition declares a variable and causes the storage to be allocated.
    int x = 10;         /* x is declared as an integer and allocated space and initialized to 10 */
    int roll_no[100];
    
ans3.>
Array variables are declared identically to variables of their data type, except that the variable name is followed by one pair of square [ ] brackets for each dimension of the array.
Uninitialized arrays must have the dimensions of their rows, columns, etc. listed within the square brackets.
Dimensions used when declaring arrays in C must be positive integral constants or constant expressions.
An array when declared gets allocated in contigious memory locations,whereas the variables when declared get different locations.

ans4.>
when an array is declared it is allocated with memory in the stack i.e. the array is created in the stack.

ans5.>
There are 4 storage class specifiers available in C language. They are,
auto
extern
static
register. 

AUTO:
Storage place: CPU Memory
Initial/default value: Garbage value
Scope: local
Life: Within the function only.
EXTERN:
Storage place: CPU memory
Initial/default value: Zero
Scope: Global
Life: Till the end of the main program. Variable definition might be anywhere in the C program.
STATIC:
Storage place: CPU memory
Initial/default value: Zero
Scope: local
Life: Retains the value of the variable between different function calls.
REGISTER:
Storage place: Register memory
Initial/default value: Garbage value
Scope: local
Life: Within the function only.

ans6.>
do while() is used when we need to execute the statements atleast once irrespective of the condition.
while() is used to execute the statements only when the conditions are satisfied strictly.

ans7.>
malloc() and calloc() are used in dynamic memory allocation.
The name malloc stands for "memory allocation".
The function malloc() reserves a block of memory of specified size and return a pointer of type void which can be casted into pointer of any form.
syntax:ptr = (cast-type*) malloc(byte-size)

The name calloc stands for "contiguous allocation".
The only difference between malloc() and calloc() is that, malloc() allocates single block of memory whereas calloc() allocates multiple blocks of memory each of same size and sets all bytes to zero.
syntax:ptr = (cast-type*)calloc(n, element-size);
This statement will allocate contiguous space in memory for an array of n elements.

ans8.>
A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location.
Yes we have used pointers in many occasions
eg:Dynamic memory allocation

ans9.>
Dangling pointers arise during object destruction, when an object that has an incoming reference is deleted or deallocated, without modifying the value of the pointer, so that the pointer still points to the memory location of the deallocated memory.

ans10.>
Void pointer or generic pointer is a special type of pointer that can be pointed at objects of any data type. A void pointer is declared like a normal pointer, using the void keyword as the pointer’s type.The pointer defined in this manner do not have any type associated with them and can hold the address of any type of variable.One of the main uses of void pointer is when you need to return a dynamic data type that isn't known ahead of time.  For example, malloc().

ans11.>Modular programming is the process of subdividing a computer program into separate sub-programs. A module is a separate software component.Modular programming is subdividing your program into separate subprograms such as functions and subroutines.


ans12.>Switch case statement is an substitute for long if else statements.When a case constant is found that matches the switch expression, control of the program passes to the block of code associated with that case.The break statement is used to prevent the code running into the next case

ans13.>No the compiler will not give any error,because the position of the default statement has no effect in execution process.

ans14.>There is no need for a break in the default case. It runs smack into a closing brace. 

ans15.>We have to check if the file pointer is pointing to an null value.

ans16.>The function call for opening a file is FILE *fopen(const char *filename, const char *mode)

Filename is the name of the file that has to be opened.

Mode is the type of operation that is performed on the file i.e. read or write.

ans17.>Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants.
   enum is the key word used.
   
ans18.>If the first parameter is replaced with STDOUT then it prints the output to the screen.

ans19.>Bit wise operators are used to perform bit level operations.

There are 6 operators

Symbol	Operator
&	     bitwise AND
|	     bitwise inclusive OR
^	     bitwise XOR (eXclusive OR)
<<	     left shift
>>	     right shift
~	     bitwise NOT (one's complement) (unary)

ans20.> Recurssive functions are those which are called by the function itself again and again untill an exit condition is satisfied.
