#include "infix_postfix.h"
#include<stdio.h>
void main()
{
char infix[100];
int i=0;
printf("enter the infix expression");
scanf("%s",infix);


char *output;
output=infix_postfix(infix);
printf("\npostfix expression");
i=0;
while(*(output+i)!='$')
{
 printf("%c",*(output+i));
 i++;
}
int output1;
output1=postfix_evaluation(output);
printf("\nResult%d\n",output1);

}