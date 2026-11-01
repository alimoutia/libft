#include <stdio.h>

typedef struct ssize
{
	int i;
	char *c;
	char cc;
}	t_ssize;

int main()
{
	printf("%s", "the size is : ");
	printf("%d", sizeof(t_ssize));
}