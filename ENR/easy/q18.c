#include<stdio.h>
int main(){
int m1[3][3],m2[3][3],n,m,m3[3][3];

//M1
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("ENter m1[%d][%d]: ",i,j);
        scanf("%d",&n);
        m1[i][j]=n;
    }
}

//printing the matrix ONE;;;

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         printf("%d ",m1[i][j]);
//     }
//     printf("\n");
// }

// M2 
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("ENter m2[%d][%d]: ",i,j);
        scanf("%d",&m);
        m2[i][j]=m;
    }
}

//printing the matrix TWO ;;;

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         printf("%d ",m2[i][j]);
//     }
//     printf("\n");
// }



// ADDING THE TWO MATRIX
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        m3[i][j]=m1[i][j]+m2[i][j];

    }
}
printf("The sumation of two matrix is : \n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",m1[i][j]);
    }
    printf(" + ");
    for(int j=0;j<3;j++){
        printf("%d ",m2[i][j]);
    }
    printf("= ");
    for(int j=0;j<3;j++){
        printf("%d ",m3[i][j]);
    }
    printf("\n");
}


return 0;
}   