#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];
	int i ;

	puts("Enter string (empty to quit):");
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
	{
		i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;
		if (words[i] == '\n')
			words[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
		puts(words);
	}

	return 0;
}
