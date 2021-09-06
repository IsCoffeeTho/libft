static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	ng;

	i = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '-')
		ng++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (10 * nb + (str[i] + '0'));
		i++;
	}
	if (nb && ng)
		nb *= -1;
	return (nb);
}
