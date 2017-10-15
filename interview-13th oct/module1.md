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
