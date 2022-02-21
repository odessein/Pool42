//header
#include <stdio.h>
#include <stdlib.h>

int	ft_check(char *charset, char c);
int	ft_count_word(char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	int	lenght_of_res;
	char	**res;

	lenght_of_res = ft_count_word(str, charset);
	printf("%i", lenght_of_res);
	return NULL;
	
}

int	ft_count_word(char *str, char *charset)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (str[j] != '\0')
	{
		if (ft_check(charset, str[j]) && j != 0)
		{
			if (!ft_check(charset, str[j + 1]) && str[j + 1] != 0)
			{

				printf("%c %c\n", str[j], str[j+1]);
				count++;
			}
		}
		j++;
	}
	return (count);
}

int	ft_check(char *charset, char c)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
	charset++;
	}
	return (0);
}

int	main(void)
{
	char **test = ft_split(" Bonjour, les bleus ! Aujourd'hui c'est maaatch ", " ,");
	return (0);
}
