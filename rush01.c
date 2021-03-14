void	ft_putchar(char c);

void	rectangle(int x, int y)
{
	int row;
	int col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && row == 1) || (col == x && row == y))
				ft_putchar('/');
			else if ((col == x && row == 1) || (col == 1 && row == y))
				ft_putchar('\\');
			else if ((col > 1 && col < x) && (row == 1 || row == y))
				ft_putchar('*');
			else if ((row > 1 && row < y) && (col == 1 || col == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	rush(int x, int y)
{
	if ((x <= 0) || (y <= 0))
		return ;
	else
		rectangle(x, y);
}
