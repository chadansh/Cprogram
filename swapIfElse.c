#include <stdio.h>

int main() {
    //
    int num1,num2,swap;
    printf("Enter the two integer value=");
    scanf("%d %d",&num1,&num2);
    
    printf("The value we got from user num1=%d \n num2=%d\n",num1,num2);
    
    if(num1 && num2 >= 18){
        swap=num2;
        num2=num1;
        num1=swap;
        printf("The value of num1=%d \nnum2=%d after swap",num1,num2);
    }
    else{
        printf("both numbers are not above 18");
    }
    
    return 0;
}