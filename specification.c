#include <stdio.h>

int main(void)
{
	printf("%010d %s\n", 12345, "%010d");
	printf("%+010d %s\n\n", 1234, "%+010d");
	pirntf("%10o %s\n", 271, "%10o");
	printf("%0#10o %s\n", 271, "%010o");
	printf("%-#10o %s\n\n", 271, "0#-10o");
	printf("%0#10x %s\n", 271, "0#10X");
	printf("%-#10x %s\n\n", 271, "%-#10x");

	printf("%d %s\n", 32768, "%d");
	printf("%hd %s\n", 32768, "%hd");

	return 0;
}