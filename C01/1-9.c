#include <stdio.h>

main()
{
	int c, b;

	b = 0;
	while((c=getchar()) != EOF)
	{
		if (!(b == ' ' && c == ' '))
			putchar(c);
		b = c;
	}
}
