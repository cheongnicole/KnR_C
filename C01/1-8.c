#include <stdio.h>

main()
{
	int c, blanks, tabs, newlines;

	blanks = 0;
	tabs = 0;
	newlines = 0;
	while((c=getchar()) != EOF)
		if (c == ' ')
			++blanks;
		else if (c == '\t')
			++tabs;
		else if (c == '\n')
			++newlines;
	printf("Blanks: %d Tabs: %d Newlines %d\n", blanks, tabs, newlines);
}
