#include<stdio.h>
int main(){
int n=5;
int i,j,space;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        if(j%2==0){
            printf("1");
        }
        else{
            printf("0");
        }
    }

    for(space=1;space<=2*(n-i);space++){

    printf(" ");
    }

    for(j=1;j<=i;j++){
       if(j%2==0) {
        printf("1");
        }
    else{
        printf("0");
    }
    }
printf("\n");
}
return 0;

}