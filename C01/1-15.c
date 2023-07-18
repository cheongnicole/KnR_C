#include <stdio.h>

float	f_to_c(float f)
{
	return ((5.0/9.0) * (f-32.0));
}

main()
{
	printf("F: %3.1f C: %6.1f\n", 0.0, f_to_c(0.0));
}
