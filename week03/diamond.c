#include <stdio.h>

/* Prints a diamond */

int main()
{
	int i = 0;
	int j = 0;
	int x;
	int y;
	int size;

	for ( ; ; )
	{
		printf("Enter size of diamond to draw (must be an odd number): ");
		scanf("%d", &size);

		/*
		** Make sure the user entered an odd number
		*/
		if ((size % 2) != 0)
		{
			break;
		}

		/*
		** Number was not odd, ask the user to enter another number
		*/
		printf("%d is not an odd number\nPlease Re");
	}

	/*
	** Loop over rows (y direction)
	*/
	for (i = 0; i < size; i++)
	{
		/*
		** Loop over columns (x direction)
		*/
		for (j = 0; j < size; j++)
		{
			/*
			** Transform coordinates so center of diamond is at 0, 0
			*/
			x = i - size / 2;
			y = j - size / 2;

			/*
			** find absolute value of x and y
			*/
			if (x < 0)
			{
				x = -x;
			}

			if (y < 0)
			{
				y = -y;
			}

			/*
			** If the sum of the x and y coordinate is less than size / 2
			** the coordinate is within the diamond, so draw an asterisk
			*/
			if (x + y <= size / 2)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}
