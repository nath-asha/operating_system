#include<stdio.h>
#include<unistd.h>
int main()
{
    int loc = 6;
    int pid = vfork();
    if(pid == 0) {
        printf("Child process pid = %d \n",getpid());
        printf("Its parent process pid = %d \n",getppid());
        loc++;
    }else{
        sleep(2);
        printf("Parents process pid = %d \n",getpid());
        printf("Its aprent process pid = %d \n",getppid());
    }
    printf("loc = %d \n", loc);
    _exit(2);
}
