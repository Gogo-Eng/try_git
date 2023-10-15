#include <stdio.h>
#include <string.h>

int main(void)
{
	char f[23];  /* Define a character to store the username i*/
	char newline = '\n';
	int password;

	printf("Enter your username: ");
	fgets(f, sizeof(f), stdin);
	
	char a_newline = strchr(f, '\n');
	if (newline != NULL) {
	   a_newline = '\0';
	
	}

	printf("Password: ");
	scanf("%d", &password);
	printf(	"Welcome to the frontman experience\n" );
	return(0);
}
