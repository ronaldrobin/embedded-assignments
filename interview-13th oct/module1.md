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
