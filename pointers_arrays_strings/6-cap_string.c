#include<stdio.h>

char *cap_string(char *s)
{
		int i;

	if(s[0]>=97&&s[0]<=122)
	{
		s[0]-=32;
	}
	for(i=1;s[i]!='\0';i++)
	{
		if(s[i-1]==32)
		{
				if(s[i]>=97 &&s[i]<=122)
				{
					 s[i]-=32;
				}
		}
	}

	return 0;
}