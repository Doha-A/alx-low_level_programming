/**
 * times_table - prints the 9 times table
 * Return: void
*/
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = (i * j);
			_putchar(res',');
		}
		_putchar('\n');
	}
}
