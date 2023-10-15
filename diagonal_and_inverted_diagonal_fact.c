#include <stdio.h>
#include <stdlib.h>

int main() {
	int t, y, space;
	t = 0;
	while (t < 5)
	{
		space = 0;
		while (space < 5 - t + 2)  /* the space<5 -t makes the diagonal inverted with the range of t to be t<5.
					      then the -2 reduces the range by 2 ie for t<5 reduced by 2 becomes t<3 which is
					      0,1,2. But if it was +2 it will increase the range by 2 and when printing it starts from
					      the 3rd line ie instead of printing 01234 it then prints 01234
					      0123                 0123
					      012                  012
					      01
					      0
					      if space = 1 with t<5 range it implies the range is 0,1,2,3,4 if you print space it will 
					      display 1
					      12
					      123
					      1234*/
		{
			printf(" ");
			space++;
		}
		y = 0;
		while (y <= t)
		{
			printf("%d", y);
			y++;
		}

	
		printf("\n");
		t++;
	}


	return 0;
}

