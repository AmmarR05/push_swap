#include "push_swap.h"
static void swap_stack(t_stack *stack)
{
	if (stack->size < 2)
        return;
    int temp = stack->data[0];
    stack->data[0] = stack->data[1];
    stack->data[1] = temp; 
}
void	sa(t_stack *a, t_stats *stats)
{
    if (a->size < 2)
		return;
	swap_stack(a);
    stats->sa++;
	write(1,"sa\n",3);
}
void    sb(t_stack *b,t_stats *stats)
{
    if (b->size < 2)
        return;
    swap_stack(b);
    stats->sb++;
	write(1,"sb\n",3); 
}
void ss(t_stack *a, t_stack *b,t_stats *stats)
{
    if (a->size < 2 && b->size < 2)
        return;
    swap_stack(a);
    swap_stack(b);
    stats->ss++;
    write(1, "ss\n", 3);
}