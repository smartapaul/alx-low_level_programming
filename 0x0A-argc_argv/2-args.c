/**
 * main - prints all arg it receives
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

