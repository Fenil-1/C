#include<stdio.h>
int main(){
int n1,n2,n3;

printf("Enter a number : ");
scanf("%d",&n1);
printf("Enter a number : ");
scanf("%d",&n2);
printf("Enter a number : ");
scanf("%d",&n3);

    if(n1>n2 && n1>n3){
        printf("%d is the greatest",n1);
    }
    else if(n2>n1 && n2>n3){
        printf("%d is the greatest",n2);
    }
    else{
        printf("%d is the greatest",n3);
    }


return 0;
}