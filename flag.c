#include "push_swap.h"

int number_of_flag(int argc ,char **argv)
{
    int count = 0;
    if (ft_strncmp(argv[1] ,"--simple" ,9) == 0 || ft_strncmp(argv[1] ,"--medium" ,9) == 0 || ft_strncmp(argv[1] ,"--complex" ,10) == 0 || ft_strncmp(argv[1] ,"--adaptive" ,11) == 0)
    {
        if(argc > 2 && ft_strncmp(argv[2] ,"--bench" ,8) == 0)
            count++;
        count++;
    }
    else if(ft_strncmp(argv[1] ,"--bench" ,8) == 0)
    {
        if (argc > 2 && (ft_strncmp(argv[2] ,"--simple" ,9) == 0 || ft_strncmp(argv[2] ,"--medium" ,9) == 0 || ft_strncmp(argv[2] ,"--complex" ,10) == 0  || ft_strncmp(argv[2] ,"--adaptive" ,11) == 0))
            count++;
        count++;
    }
    return count;
}
int get_strategy(int argc, char **argv)//0 = Adaptive , 1 = Simple , 2 = Medium , 3 = Complex
{
    int flag = 0;
    if (argc < 2)
        return (0);
    if (ft_strncmp(argv[1] ,"--simple",9) == 0 || (argc > 2 && ft_strncmp(argv[2] ,"--simple",9) == 0))
        flag = 1;
    else if (ft_strncmp(argv[1] ,"--medium",9) == 0 || (argc > 2 && ft_strncmp(argv[2] ,"--medium",9) == 0))
        flag = 2;
    else if (ft_strncmp(argv[1] ,"--complex",10) == 0 || (argc > 2 && ft_strncmp(argv[2] ,"--complex",10) == 0 ))
        flag = 3;
    return flag;
}

int valid_flags(int argc, char **argv)
{
    int i;
    int strategy_count;
    int bench_count;

    i = 1;
    strategy_count = 0;
    bench_count = 0;
    while (i < argc && argv[i][0] == '-'
        && argv[i][1] == '-')
    {
        if (ft_strncmp(argv[i], "--simple", 9) == 0
            || ft_strncmp(argv[i], "--medium", 9) == 0
            || ft_strncmp(argv[i], "--complex", 10) == 0
            || ft_strncmp(argv[i], "--adaptive", 11) == 0)
            strategy_count++;
        else if (ft_strncmp(argv[i], "--bench", 8) == 0)
            bench_count++;
        else
            return (0);
        if (strategy_count > 1 || bench_count > 1)
            return (0);
        i++;
    }
    return (1);
}
// Disorder: 0.00%
// Strategy: Adaptive / Simple / O(n²)
// Total operations: 0
// sa: 0
// sb: 0
// ss: 0
// pa: 0
// pb: 0
// ra: 0
// rb: 0
// rr: 0
// rra: 0
// rrb: 0
// rrr: 0