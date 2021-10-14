#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	range = (int **)malloc(sizeof(int *));
	*range = (int *)malloc(sizeof(int) * len);
	i = 0;
	if (len <= 0)
		return (NULL);
	while (i < len)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (len);
}
