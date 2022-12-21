#include <stdio.h>

int main()
{
	char *compo[5] = {"CPU", "HABRD DISK", "lANGUAGE", "RAM", "RUM"}, i;

	for(i = 0; i < 5; i++)
	{
		printf("%s\n", compo[i]);
	}

	return 0;
}
