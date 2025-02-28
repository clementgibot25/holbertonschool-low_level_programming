#include "main.h"
/**
 *
 */

char *leet(char *s)
{
	int i = 0;/*parcoureur de tableau */
	int j = 0;/*boucler tableau*/
	char min[] = {'a','e', 'o', 't', 'l'};
	char maj[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {4, 3, 0, 7, 1};

	while(s[i] != '\0')
	{
	i++;
	for (i = 1; s[i] != '\0'; i++)
	{
		if(s[i] == min[i] || s[i] == maj[i])
			{
				s[i] = num[j];
			}
	}
	i++;
	}
	return (s);
}
