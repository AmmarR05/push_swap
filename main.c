#include "push_swap.h"
#include <stdio.h>
static int valid_number(char *num)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	if (!num || !num[0])
		return (0);
	while (num[i] == ' ' || (num[i] >= 9 && num[i] <= 13))
		i++;
	if (num[i] == '+' || num[i] == '-')
	{
		if (num[i] == '-')
			sign = -1;
		i++;
	}
	if (!ft_isdigit(num[i]))
		return (0);
    while (ft_isdigit(num[i]))
    {
        if (sign == 1 && number > (2147483647 - (num[i] - '0')) / 10)
            return (0);
        if (sign == -1 && number > (2147483648 - (num[i] - '0')) / 10)
            return (0);
        number = number * 10 + (num[i] - '0');
        i++;
    }
	return (num[i] == '\0');
}

int main(int argc ,char **argv)
{
    if(argc == 1)
        return 0;
    t_stack a;
    //t_stack b;
    int i = 0;
    int j = 0;
    a.capacity = argc - 1;
    a.data = malloc(sizeof(int) * a.capacity);
    if (!a.data)
        return 0;
    a.size = 0;
    while (argc - 1 > i)
    {
    if (!valid_number(argv[i + 1]))
    {
        free(a.data);
        write(2, "Error\n", 6);
        return (1);
    }
        a.data[i] = ft_atoi(argv[i + 1]);
        i++;
        a.size++;
    }
    i = 0;
    while(a.size > i)
    {
        j = i + 1;
        while (a.size > j)
        {
            if (a.data[i] == a.data[j])
            {
                free(a.data);
                write(2, "Error\n", 6);
                return 1;
            }
            j++;
        }
        i++;
    }
    free(a.data);
    return 0;
}
