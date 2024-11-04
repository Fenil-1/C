#include<stdio.h>
int main(){
int n,fact=1;
printf("Enter number to calculate the factorial : ");
scanf("%d",&n);

for(int i=2;i<=n;i++){
    fact*=i;
}

printf("The factorial of %d is %d",n,fact);

return 0;
}