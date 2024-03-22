#include<stdio.h>

#include<string.h>

int main()

{

	char s[120];

	scanf("%s", s);

	int len = strlen(s);

	int i;

	int a;

	int b[150] = { 0 };

	for (i = 0; i < len; i++)

	{

		a = s[i];

		b[a]++;

	}

	int max=0;

	int min=101;

	for (i = 0; i < 150; i++)

	{

		if (b[i] != 0)

		{

			if (max < b[i])

				max = b[i];

			if (min > b[i])

				min = b[i];

		}

	}

	int num = max - min;

	if (num < 2)

	{

		printf("No Answer\n");

		printf("0");

	}

	if (num >= 2)

	{

		for (i = 2; i <= num; i++)

		{

			if (num % i == 0)

			{

				break;

			}

		}

		if (num == i)

		{

			printf("Lucky Word\n");

			printf("%d", num);

		}

		else

		{

			printf("No Answer\n");

			printf("0");

		}

	}

	return 0;

}
