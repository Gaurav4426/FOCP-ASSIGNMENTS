#include<stdio.h>
int main(){
int i,n,x;
int sum=0;
printf("ENter a number\n");
scanf("%d",&n);
x=n;
for(i=1;i<n;i++){
if(n%i==0){
    sum+=i;
}
}
if(sum==x){
    printf("Perfect Number");
}
else{
    printf("Not Perfect Number");
}
return 0;

}