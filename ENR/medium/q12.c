#include<stdio.h>
int main(){
    int aayush;
    printf("Enter number : ");
    scanf("%d",&aayush);
    for(int i=1;i<=aayush;i++){
        for(int j=6;j>=i;j--){
            printf("  ");
        }
        for(int k=1;k<i+1;k++){
            printf("%d ",k);
        }
        for(int x=i-1;x>0;x--){
            printf("%d ",x);
        }
    printf("\n");
    }

return 0;

}