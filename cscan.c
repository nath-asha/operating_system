#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,j,n,TotalHeadMovement = 0 ,initial,size,move,index;
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
        if(move==1){
        printf("Sequence of request access:\n");
        for(i=index; i < n; i++)
        {
            printf("%d",RQ[i]);
            TotalHeadMovement = TotalHeadMovement + abs(RQ[i] - initial);
            initial = RQ[i];
        }
        TotalHeadMovement = TotalHeadMovement + abs(size - RQ[i-1] - 1);
        TotalHeadMovement = TotalHeadMovement + abs(size - 1- 0);
        initial =0;
        for(i = 0; i < index; i++)
        {
            printf("%d",RQ[i]);
            TotalHeadMovement = TotalHeadMovement + abs(RQ[i] - initial);
            initial = RQ[i];
        }
        }
else {
    printf("Sequence of request access:\n");
    for(i = index -1 ;i >= 0 ;i++){
        printf("%d",RQ[i]);
               TotalHeadMovement = TotalHeadMovement + abs(RQ[i] - initial);
               initial =RQ[i];
    }
}
printf("\nTotal head movement is %d ",TotalHeadMovement);
return 0;
 }
