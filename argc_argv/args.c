#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	int t;
	int sum = 0;
	
	printf("argc = %d\n", argc);
	printf("lets see what is in argv[]\n");
	if (argc > 1)
	{
		for(t = 1; t < argc; t++)
		{
			printf("argv[%d] = %s\n", t, argv[t]);
			sum += atoi(argv[t]);
		}
		printf("Total = %d\n", sum);
	}
		return 0;
}
