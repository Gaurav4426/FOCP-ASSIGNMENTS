#include<stdio.h>
#include<math.h>
int main()
{
int sum=0;
int num,rev,x;
printf("Enter a number\n");
scanf("%d",&num);
x=num;
while(num!=0)
{
sum+=pow(num%10,3);
num=num/10;

}
if(sum==x){
    printf("Armstrong number");
}
else{
    printf("Not Armstrong");
}
return 0;
}