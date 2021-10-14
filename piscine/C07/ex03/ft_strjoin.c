#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*arr;
	int		len;

	i = 1;
	while (i < size)
		len += ft_strlen(strs[i++]) + ft_strlen(sep);
	len -= ft_strlen(sep);
	arr = (char *)malloc(sizeof(char) * len + 1);
	arr[0] = '\0';
	i = 1;
	while (i < size - 1)
	{
		ft_strcat(arr, strs[i++]);
		ft_strcat(arr, sep);
	}
	ft_strcat(arr, strs[i]);
	return (arr);
}

int	main(int argc, char **argv)
{
	char	*s;
	char	**m;
/*	m = (char **)malloc(sizeof(char*) * 5);
	char *pr = "AAAAAAAA";
	char *s1 = "ciaooooo";
	char *s2 = "coglione";
	char *s3 = "dimmerda";
	char *s4 = "----";

	m[0] = pr; m[1] = s1; m[2] = s2; m[3] = s3; m[4] = s4;*/
	s = ft_strjoin(argc, argv, argv[argc - 1]);
	printf("%s\n", s);
}
