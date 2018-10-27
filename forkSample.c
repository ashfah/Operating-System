#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    /* code */
    int ret;
    ret = fork();
    if(ret > 0){
        printf("I'm Parent \n");
        printf("Parent ID : %d\n",getpid());
    }
    if(ret ==0){
        printf("I'm child\n");
        printf("Child ID = %d\n",getpid());
        printf("Parent ID = %d \n",getppid());
    }
    return 0;
}
