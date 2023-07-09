#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forkexample()
{
   // int x=1;
    if(fork()==0)
    printf("Hello from child");
    else 
    printf("Hello from parent");
    return 0;
}
int main()
{
    forkexample();
    return 0;
}
