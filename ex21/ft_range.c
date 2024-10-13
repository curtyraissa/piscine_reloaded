#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int	*range;

	i = 0;
	range = ft_range(0, 9);
	while (i < 9)
	{
		printf("%d", range[i]);
		i++;
	}
	return (0);
}*/