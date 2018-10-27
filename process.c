#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
pid_t myPid;
pid_t myParentPid;
gid_t myGid;
uid_t myUid;

myPid = getpid();
myParentPid = getppid();
myGid = getgid();
myUid = getuid();

printf ("My Process ID is   : %d\n",myPid);
printf ("My Parent ID is    : %d\n",myParentPid);
printf ("My Group ID is     : %d\n",myGid);
printf ("My User ID is      : %d\n",myUid);

return 0;

}
