#include <string.h>
#include <stdio.h>

int main(void)
{
	char *s = "happy";
	char *a;

	a = strchr(s, 'P');
	printf("%s\n", a);
}	
