
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    int ret;
    ret = fork();
    int i,j;
    if(ret > 0){
        for(i =0; i<10; i++){
         printf("%d I'm Parent \n",i);  
         sleep(1);  
        }
    }
    if(ret ==0){
        for(j =0; j<10; j++){
         printf("%d I'm Child \n",j);
         sleep(1);    
        }
    }
    return 0;
}
