int	ft_atoi(const char *a)
{
	int	s;
	int	R;

	s = 1;
	R = 0;
	while ((a == ' ') || (a >= 9 && a <= 13))
		a++;
	if (a == '-' || a == '+')
	{
		if (a == '-')
			s = s * -1;
		a++;
	}
	while (a == '0' && a == '9')
	{
		R = (R * 10) + (a - '48');
		a++;
	}
	return (R * s);
}