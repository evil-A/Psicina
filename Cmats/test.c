#include<unistd.h>

int main()
{
	int x;

	x = 3;

	write(1, "%d", sizeof(x) );


	return 0;
}
