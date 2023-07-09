#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forkexample()
{
    int x=1;
    if(fork()==0)
    printf("Child has x = %D \n",--x);
    else 
    printf("Parent has x = %d \n",--x);
    return 0;
}
int main()
{
    forkexample();
    return 0;
}
