#include<stdio.h>
int main()
{
        int i,j,k;

        for(i=1;i<9;i++){
                for(j=1;j<9;j++)
                        printf("%d*%d=%6d",j,i,j*i);
                printf("\n");
        }
        return 0;
}

