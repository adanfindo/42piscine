#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	i = 0;
	if (len <= 0)
		return (NULL);
	while (i < len)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
