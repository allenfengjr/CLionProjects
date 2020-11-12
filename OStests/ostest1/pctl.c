#include"pctl.h"
int main(int argc,char *argv[]){
    int i;
    int pid;
    int status;
    char *args[]={"/bin/ls","-a",NULL};
    signal(SIGINT,(sighandler_t)sigcat);
    pid=fork();
    if(pid<0){
        printf("Create Process fail!\n");
        exit(EXIT_FAILURE);
    }
    if(pid==0){
        printf("I am Child process %d\nMy father is%d\n",getpid(),getppid());
        pause();
        printf("%d child will Running: \n",getpid());
        if(argv[1]!=NULL){
            for(int i=1;argv[i]!=NULL;i++)printf("%s",argv[i]);
            printf("\n");
            status=execve(argv[1])
        }
    }

}
