#include<stdio.h>
int main(){
    int n1,count=0;

    printf("Enter a number : ");
    scanf("%d",&n1);

    for(int i=2;i<n1;i++){
        if(n1%i==0){
            count++;
        }
       
    }

    if(count>0){
        printf("%d is not prime",n1);
    }
    else{
        printf("%d is  prime",n1);
    }

return 0;
}