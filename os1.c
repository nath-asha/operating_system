#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
   pid_t pid;
    pid =vfork();
    if(pid == -1) {
        perror("vfork");
        return 1;
    } else if(pid==0){
        printf("Child process : Hello,I'm the child\n");
        printf("Child process : My PID is %d \n",getpid());
        printf("Child Process : My Parent's PID is is %d \n",getppid());

        exit(0);
    }else{
        printf("Parent Process : Hello,I'm the parent\n");
        printf("PArent process : My PID is %d \n",getpid());
        printf("Parent process : My child's PID is%d \n",pid);
    }
    int status;
    waitpid(pid,&status,0);
    if(WIFEXITED(status)){
        printf("Parent process : Child process terminated normally:\n");
    }else{
        printf("Parent process: Child process terminated abnormally:\n");
    }
}
