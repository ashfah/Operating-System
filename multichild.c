#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf( "[parent] pid %d\n", getpid() );

    for ( int i = 0; i < 10; i++ ){
        if ( fork() == 0 )
        {
            printf( "[child%d] pid %d from pid %d\n", i, getpid(), getppid() );
            exit( 0 );
        }
        sleep(1);
        
    }
}
