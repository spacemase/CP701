#include <string.h>
#include <stdio.h>

int f()
{
	char c = "0123456789"[4];

	c = *("0123456789" + 4);
	c = *(4 + "0123456789");

	c = 4["0123456789"];

	printf("%c\n", c);
}

void myStrCpy(char* d, char* s)
{
	while (*d++ = *s++);
}

int myStrCmp(char s1[], char s2[])
{
	int i;
	for (i = 0; s1[i] && s2[i]; ++i)
	{
		if (s1[i] < s2[i])
		{
			return -1;
		}
		else if (s1[i] > s2[i])
		{
			return 1;
		}
	}

	if (s1[i])
	{
		return 1;
	}

	if (s2[i])
	{
		return -1;
	}

	return 0;
}

int main()
{
	f();
#if 0
	char Name[256];
	int result;

	myStrCpy(Name, "David");

	printf("%s\n", Name);

	strcat(Name, " Nielsen");
	printf("%s\n", Name);

	result = strcmp("Monkey", "Gorilla");

	if (result > 0)
	{
		printf("Monkey is greater than Gorilla\n");
	}
	else if (result < 0)
	{
		printf("Monkey is less than Gorilla\n");
	}
	else
	{
		printf("Monkey equals Gorilla\n");
	}

	if (myStrCmp("Monk", "Monkey") == 0)
	{
		printf("error Monk and Monkey are not equal\n");
	}
#endif
}