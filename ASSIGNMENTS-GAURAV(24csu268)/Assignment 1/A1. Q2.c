#include<stdio.h>
int main(){
int a,b,rem;
printf("ENter two numbers\n");
scanf("%d %d",&a,&b);
while(a%b>0){
rem=a%b;
a=b;
b=rem;
}
printf("The HCF is: %d\n",b);
return 0;
}









