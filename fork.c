#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>

int main(){

    pid_t fork(void);
    int id;
    printf("Before fork\n");

    id=fork();

    if(0==id){
        printf("Child: PID:%d  PPID:%d\n",getpid(),getppid());
    }
    else{
        printf("Parent: PID:%d PPID:%d\n",getpid(),getppid());
    }
    printf("After fork\n");
 return 0;   
}