//Implement stack operations using array
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define SIZE 50
int top=-1, len;
int stack[SIZE];
void push(int e)
{
    if(top+1==len)
        printf("\nStack is full!\n");
    else
        stack[++top]=e;
}

int pop(){
    if(top==-1)
        return;                
    return stack[top--];
}
int isOperator(char op){
    int isOp = 0;
    switch(op){
        case '^': 
        case '*':
        case '/':
        case '+':
        case '-':    isOp = 1;
                    break;
    }
    
    return isOp;
}
void evalPostfix(char*postfixStr){
    int i;        
    for(i=0; i<strlen(postfixStr); i++){        
        char c = postfixStr[i];
        if(isOperator(c)==0){                    
            push(atoi(&c));
        }
        else{                                    
            int a=pop(),b=pop(),result;                        
                        
            switch(c)
			{
                case '+':   result=b+a;                        
                            break;
                
                case '-':   result=b-a;
                            break;
                
                case '*':   result=b*a;
                            break;
                
                case '/':   result=b/a;
                            break;
                
                case '^':   result=pow(b,a);
                            break;
            }
            push(result);                                        
        }
    }
    
    printf("\nThe resultant value is: %d", stack[top]);
}

void main(){
    char str[50];
    
    printf("Enter the postfix expression:");
    gets(str);
    
    len = strlen(str);
    evalPostfix(str);            
}
