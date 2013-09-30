#include <stdio.h>

int main()
{
	int a;
	printf("What's your age? ");
	if(scanf("%d", &a) != 1 && a > 0 && a < 120)
	{
		printf("Invalid input!\n");
		return 1;
	}
	printf("Hello, you are %d years old.\n",
		a);
	return 0;
}

