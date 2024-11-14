#include<stdio.h>
int main(){
int n1,n2,rem=1,quo;

printf("Enter a number : ");
scanf("%d",&n1);

printf("Enter another number : ");
scanf("%d",&n2);

if(n1>n2){
    while(rem!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("GCD of the two numbers is %d",n1);

}
else{
    while(rem!=0){
        rem=n2%n1;
        n2=n1;
        n1=rem;
    }
    printf("GCD of the two numbers is %d",n2);
}

return 0;
}