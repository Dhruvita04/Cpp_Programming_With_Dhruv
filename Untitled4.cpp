#include<stdio.h>
main()
{
	int x=10;
	int y=(x++,x++,x++);
	printf("%d %d\n");
	return 0;
}
