#ifndef COMPILER_DRIVER_H
#define COMPILER_DRIVER_H

enum options
{
	l_num = 1,
	a_num = 2,
	v_num = 4
};

#include <string.h>

#include "scanner.h"
#include "parser.h"
#include "code_generator.h"
#include "virtual_machine.h"

int cdRun(int options, char * filename);
int getOptionNum(char * option);

int cdRun(int options, char * filename)
{
	// Run Scanner
	
	// Run Parser
	
	// Run Code Generator
	
	// Run Virtual Machine
	vmRun(options, filename);
}

int getOptionNum(char * option)
{
	if(strcmp(option, "-l") == 0)
	{
		return l_num;
	} else if(strcmp(option, "-a") == 0)
	{
		return a_num;
	} else if(strcmp(option, "-v") == 0)
	{
		return v_num;
	} else
	{
		printf("ERROR: Invalid Option");
		exit(1);
	}
}

#endif