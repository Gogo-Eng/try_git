#include <stdio.h>
#include <string.h>

int main(void)
{
	char f[23];  /* Define a character to store the username i*/
	int password;

	printf("Enter your username: ");
	fgets(f, sizeof(f), stdin);
	f[strcspn(f, "\n")] = '\0';
	printf("Password: ");
	scanf("%d", &password);
	printf(	"Welcome to the frontman experience\n" );
	return(0);
}
