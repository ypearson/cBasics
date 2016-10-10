#include <stdio.h>

#include "module1.h"
#include "module2.h"

int main(int argc, char **argv)
{
	if(argc==1)
	{
        printf("%s\n","no args");
	}

    fnc1(0);
    fnc2(0);

    return 0;

}