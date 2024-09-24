#include <stdio.h>

int main() {
    char operator;
    float num1,num2,result;
    
    int i=1;
    while (i!=0){
        printf("choose an operation(+,-,/,*,a)=");
        scanf("%c",&operator);
        if(operator== '+' || operator=='-' || operator=='/'|| operator=='*' ||operator=='a'){
        printf("Give two integer value=");
        scanf("%f %f",&num1,&num2);
        }
        else{
        printf("Choose correct operation\n");
        
        }
    }
    
    
    
    switch(operator){
        case'+':
            result=num1+num2;
            printf("result=%.2f",result);
            break;
        case'-':
            result=num1-num2;
            printf("result=%.2f",result);
            break;
        case'*':
            result=num1*num2;
            printf("result=%.2f",result);
            break;
        case'/':
            if(num2!=0){
              result=num1/num2;
              printf("result=%.2f",result);
              break;   
            }
            else{
                printf("denominator cannot be zero");
            }
        case'a':
            result=num1+num2;
            printf("Addition=%.2f\n",result);
            result=num1-num2;
            printf("Subtraction=%.2f\n",result);
            result=num1*num2;
            printf("Multiply=%.2f\n",result);
            if(num2!=0){
              result=num1/num2;
              printf("result=%.2f\n",result);
            }
            else{
                printf("denominator cannot be zero");
            }
            break;
           
        
        
    }

    return 0;
}