#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,j,n,TotalHeadMovement = 0 ,initial,size,move;
    printf("Enter the number of Requests \n");
    scanf("%d",&n);
    printf("Enter the Requests sequence \n");
    for(i=0;i<n;i++){
        scanf("%d",&RQ[i]);
    }
        printf("Enter initial head position \n");
        scanf("%d",&initial);
        printf("Enter total disk size\n");
        scanf("%d",&size);
        printf("Enter the head movement direction for high 1 and low 0 \n");
        scanf("%d",&move);
