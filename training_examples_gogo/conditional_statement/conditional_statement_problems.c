#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int f;
	int password;
	char n[50];


	printf("%s %s", "Hello you are welcome to the frontman experience\n","Please type 1/0 to continue: ");
	scanf("%d", &f);
	
	while (getchar() !='\n'); /* Clear the input buffer after ready f, ensuring that the newline
				     character from the previous input doesn't interfere with fgets */
	
	if (f == 1) {
	   printf("Enter Name: ");
	   fgets(n, sizeof(n), stdin); /* reads the entire line for your input ie even with white spaces */
	   n[strcspn(n, "\n")] = '\0'; /* removes the newline character if it's present in the buffer */
	   printf("Password: ");
	   scanf("%d", &password);
	   printf("Check-in successful");
	}
	
	else if (f == 0) {
		printf("Thank you Bye !");
	}
	
	else {
		printf("Wrong input");
	}
		return(0);
}
