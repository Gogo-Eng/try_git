#include <stdio.h>
#include <string.h>

int main(void)
{
	char f[23];  /* Define a character to store the username */
	int password;

	printf("Enter your username: ");
	fgets(f, sizeof(f), stdin); /* reads the entire line for your input ie even with white spaces */
	f[strcspn(f, "\n")] = '\0'; /* removes the newline character if it's present in the buffer */
	printf("Password: ");
	scanf("%d", &password);
	printf(	"Welcome to the frontman experience\n" );
	return(0);
}
