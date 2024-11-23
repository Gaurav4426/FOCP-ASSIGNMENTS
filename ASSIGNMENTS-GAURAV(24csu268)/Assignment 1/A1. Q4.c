#include<stdio.h>

int usingthirdvariable(int a, int b){
int c=a;
a=b;
b=c;
return printf("afterswap: a=%d and b=%d" ,a,b);
}

int usingaddorsub(int a,int b){
a=a+b;
b=a-b;
a=a-b;
return printf("after swap: a=%d and b=%d",a,b);
}

int mulordiv(int a,int b){
a=a/b;
b=b*a;
a=b/a;
return printf("after swap: a=%d and b=%d",a,b);
}


int main() {
    int num1, num2;
    int choice;
    printf("Enter the First Integer for Swap--> ");
    scanf("%d", &num1);
    printf("Enter the Second Integer for Swap--> ");
    scanf("%d", &num2);

scanf("%d",&choice);

    printf("Which Method do you want to Use: \n\n");


    printf("Enter 1 for Swapping Two Numbers Using a Temporary Variable\n");
    printf("Enter 2 for Swapping Two Numbers Using Arithmetic Operators + and –\n");
    printf("Enter 3 for Swapping Two Numbers Using Arithmetic Operators x and /\n");
    

    printf("Old : a=%d, b=%d\n",num1,num2);

    switch(choice) {
        case 1:
        usingthirdvariable(num1,num2);
        break;
        //
        case 2:
        usingaddorsub(num1,num2);
        break;
        //
        case 3:
        mulordiv(num1,num2);
        break;
        //
        default:
        printf("Please Give a valid Input");
        break;
    }

}