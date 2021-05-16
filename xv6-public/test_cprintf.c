#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "x86.h"
#include "proc.h"
#include "spinlock.h"

//extern struct cpu;
//extern struct proc;
//extern struct cpu* mycpu(void);
extern uint ticks;

int
main(int argc, char** argv)
{	
	//struct cpu *c = mycpu();
	//struct proc *p = c->proc;
	while(1)
		printf(1, "tickds = %d, pid = , name = \n", ticks);
	exit();
}
