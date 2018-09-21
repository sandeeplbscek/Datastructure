#include "stack.h"
#include<string.h>
char output[100];
int precedence(char p)
{
 if(p=='+'||p=='-')
	return 1;
 else if(p=='*'||p=='/')
	return 2;
 else if(p=='^')
	return 3;
 else if(p=='(')
	return 0;

}



char* infix_postfix(char a[])
{
	int len=strlen(a);
	int i=0,j=0;
	createstack(len);
	while(a[i]!='\0')
			{
			char t=a[i];
			if (t=='(')
				 push(a[i]);
			else if ((t=='+')||(t=='-')||(t=='*')||(t=='/')||(t=='^'))
					{
					if(!isempty())
					{
					while(precedence(t)<precedence(peek()))
						{
			 				output[j]=pop();
			  				j++;		 
						}
					}
					push(t);
					} 
	  		else if(t==')')
			{
                              
				while(!isempty())
					{
					 char temp=pop();
						
			 			 if(temp!='(')
							{
				 			output[j]=temp;
				  			j++;
							}
			 			else
							break;	
					}
			}
	  		else
				{
				output[j]=t;
				j++;	
                 		}
			  i++; 
			}
  	while(!isempty())
			{
			  output[j]=pop();
	  			j++;
			}
    output[j]='$';

return output;	

}

int postfix_evaluation(char a[])
{
	int i=0;
	while(a[i]!='$')
			{
			char t=a[i];
			

			if ((t=='+'))
				{
				
				int value2=pop()-'0';
				int value1=pop()-'0';
				int result=value1+value2;
				char temp=result+'0';
				
				push(temp);

				}
			else if ((t=='-'))
				{
				int value2=pop()-'0';
				int value1=pop()-'0';
				int result=value1-value2;
				char temp=result+'0';
				push(temp);
				}
			else if ((t=='*'))
				{
				int value2=pop()-'0';
				int value1=pop()-'0';
				int result=value1*value2;
				char temp=result+'0';
				push(temp);
				}
			else if ((t=='/'))
				{
				int value2=pop()-'0';
				int value1=pop()-'0';
				int result=value1/value2;
				char temp=result+'0';
				push(temp);
				}
			else if ((t=='^'))
				{
				int value2=pop()-'0';
				int value1=pop()-'0';
				int result=value1^value2;
				char temp=result+'0';
				push(temp);
				}
			else
				push(t);
			i++;
			}
	
  int p=pop()-'0';
  return p;
}

