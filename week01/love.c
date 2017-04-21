/* love.c   A first look program   */

int main()
{
	int value;
	int nFields;

	printf("Enter an int\n");

	nFields = scanf("%d", &value);

	if (nFields == 1)
	{
		printf("You entered: %d\n", value);
	}
	else
	{
		printf("You did not enter an integer!\n");
	}
} 
