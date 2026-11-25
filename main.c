#include "push_swap.h"
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
    if (valid_flags(argc, argv) == 0)
    {
        write(2, "Error\n", 6);
        return (1);
    }
    t_stack a;
    t_stack b;
    int i = 0;
    int j = 0;
    int flag;
    int bench;
	double disorder;
    t_stats stats = {0}; 
    a.capacity = argc - number_of_flag(argc , argv) - 1;
    if (a.capacity <= 0)
    {
        write(2, "Error\n", 6);
        return (1);
    }
    a.data = malloc(sizeof(int) * a.capacity);
    if (!a.data)
        return 1;
    a.size = 0;
    b.capacity = a.capacity;
    b.data = malloc(sizeof(int) * b.capacity);
    if(!b.data)
    {
        free(a.data);
        return 1;
    }
    b.size = 0;
    while (a.capacity > i)
    {
    if (!valid_number(argv[i + 1 + number_of_flag(argc , argv)]))
    {
        free(a.data);
        free(b.data);
        write(2, "Error\n", 6);
        return (1);
    }
        a.data[i] = ft_atoi(argv[i + 1 + number_of_flag(argc , argv)]);
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
                free(b.data);
                write(2, "Error\n", 6);
                return 1;
            }
            j++;
        }
        i++;
    }
    disorder = compute_disorder(&a);
    flag = get_strategy(argc, argv);
    int real_flag = flag;
    bench = get_bench(argc, argv);
    if (flag == 0)
    {
        if(disorder < 0.2)
           flag = 1;
        else if(disorder < 0.5)
            flag = 2;
        else
            flag = 3;
    }
    if (disorder == 0.0)
	{
        if (bench == 1){}
            //print_benchmark(disorder ,flag,real_flag,&stats);
    	free(a.data);
    	free(b.data);
    	return (0);
	}
    if(flag == 1)
        min_max_sort(&a, &b, &stats);//the simple sort
    else if (flag == 2){}
        //the med sort
    else{}
        //the complex sort
    if(bench == 1)
        print_benchmark(disorder , flag, real_flag, &stats);
    free(a.data);
    free(b.data);
    return 0;
}
