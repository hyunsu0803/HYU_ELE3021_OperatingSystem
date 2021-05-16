#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char* argv[])
{
	int pid;
	pid = fork();
	
	while(1) {
		if(pid != 0) // parent
		{
			printf(1, "parent\n");
			yield();
		}
		else if (pid == 0) // child
		{
			printf(1, "child\n");
			yield();
		}
	}
	//kill(getpid());

	if(pid > 0){
		while(wait() != -1);
		exit();
	}
	else
		exit();
}
