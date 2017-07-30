#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
kmain()
{
	isr_install();
	clearScreen();
	print("Hello and Welcome to mini operating system\nPlease enter a command\n");
    launch_shell(0);    
}
