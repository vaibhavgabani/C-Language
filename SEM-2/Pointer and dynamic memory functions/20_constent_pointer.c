#include<stdio.h>
int main()
{
	char *p="hello";
	*p='m';
	p="bye";

	const char *q="hello";
	//*q='m';
	q="bye";

	char const *s="hello";
	//*s='m';
	s="bye";

	char * const t="hello";
	*t='m';
	//t="bye";

	const char * const u="hello";
	//*u='m';
	//u="bye";

	return 0;
}
