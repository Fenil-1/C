#include<stdio.h>
int main(){
int n=4,dec=10;
for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){
        printf("%d ",dec);
        dec--;
    }
    printf("\n");
}

return 0;
}