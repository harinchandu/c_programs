#include<stdio.h>

int Change_Value = 10;
int add (int, int);
void error_with_code (void);

int main (void)
 {
    int Arg_1 = 20, Arg_2 = 40;
    int i;

     for (i = 0; i < 10; i++) 
      {
		if (Arg_1 > Arg_2)
             		Arg_2 = add (Arg_1, Arg_2);
		else
            		Arg_1 = add (Arg_1, Arg_2);
     }
     error_with_code ();
 }   /* End of main() */

int add (int a, int b)
 {
     return a+b;
 } /* End of Sum_it */

void error_with_code(void)
 {
    int divide_value;
    int result;

    divide_value = Change_Value;
    result = 10 / divide_value;
    return ;

 } /* End of error_with_code() */
