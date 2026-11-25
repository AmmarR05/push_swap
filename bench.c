#include "push_swap.h"
int get_bench(int argc, char **argv)
{
    int bench;

    bench = 0;
    if (argc < 2)
        return (0);
    if (ft_strncmp(argv[1], "--bench", 8) == 0 || (argc > 2 && ft_strncmp(argv[2], "--bench", 8) == 0))
        bench = 1;
    return (bench);
}
static void print_double(double disorder)
{
    (void)disorder;
}

static void print_flag(int flag, int real_flag)
{
    ft_printf("[bench] strategy: ");
    if (real_flag == 0)
        ft_printf("Adaptive");
    else if (real_flag == 1)
        ft_printf("Simple");
    else if (real_flag == 2)
        ft_printf("Medium");
    else if (real_flag == 3)
        ft_printf("Complex");
    if (flag == 1)
        ft_printf(" / O(n²)\n");
    else if (flag == 2)
        ft_printf(" / O(n√n)\n");
    else if (flag == 3)
        ft_printf(" / O(n log n)\n");
}
static void    print_operation(t_stats *stats)
{
    stats->total = stats->sa + stats->sb + stats->ss + stats->pa + stats->pb + stats->ra + stats->rb + stats->rr + stats->rra + stats->rrb + stats->rrr;
    ft_printf("[bench] total_ops: %d\n", stats->total);
    ft_printf("[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n",stats->sa, stats->sb, stats->ss, stats->pa, stats->pb);
    ft_printf("[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n",stats->ra, stats->rb, stats->rr,stats->rra, stats->rrb, stats->rrr);
}

void    print_benchmark(double disorder, int flag, int real_flag, t_stats *stats)
{
    print_double(disorder);
    print_flag(flag ,real_flag);
    print_operation(stats);
}