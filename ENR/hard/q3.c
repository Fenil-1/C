#include<stdio.h>
int main(){
    printf("**********CALCULATOR***********\n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");

    int select;
    printf("Enter 1/2/3/4 to select the operation : ");
    scanf("%d",&select);

    if(select == 1 ){
        int n1,n2,sum;

        printf("Enter a number : ");
        scanf("%d",&n1);

        printf("Enter another number : ");
        scanf("%d",&n2);

        sum=n1+n2;
        printf("Addition of %d and %d is %d",n1,n2,sum);

    }
    else if(select == 2){
        int n1,n2,dif;

        printf("Enter a number : ");
        scanf("%d",&n1);

        printf("Enter another number : ");
        scanf("%d",&n2);

        dif=n1-n2;
        printf("Subtraction of %d and %d is %d",n1,n2,dif);

    }
    else if(select == 3){
        int n1,n2,mul;

        printf("Enter a number : ");
        scanf("%d",&n1);

        printf("Enter another number : ");
        scanf("%d",&n2);

        mul=n1*n2;
        printf("Multiplication of %d and %d is %d",n1,n2,mul);
    }
    else if(select == 4){
        float n1,n2;
        float div;
        printf("Enter a number : ");
        scanf("%d",&n1);

        printf("Enter another number : ");
        scanf("%d",&n2);

        div=n1/n2;
        printf("Division of %f and %f is %f",n1,n2,div);
    }



return 0;
}