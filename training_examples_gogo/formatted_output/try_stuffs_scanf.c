#include <stdio.h>

int main(void)
{
	char f; /* define a character to store the username*/
	int password;

	printf("Enter your username: ");
	scanf("%s", &f); /* use %s to read a string (username) without a whitespace character */
	printf("Password: ");
	scanf("%d", &password);
	printf(	"Welcome %s, to the frontman experience\n", &f);
	return(0);
}
