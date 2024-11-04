#include<stdio.h>
int main(){
int n,sum=0,a;
printf("Enter till you want to add the numbers : ");
scanf("%d",&n);

for(int i=0; i<n;i++){
    printf("Enter number to add : ");
    scanf("%d",&a);

    sum+=a;
}

printf("The total sum is %d",sum);
return 0;
}