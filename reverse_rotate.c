#include "push_swap.h"
static void reverse_rotate(t_stack *stack)
{
	int temp;
    int size;

    if (stack->size < 2)
        return;
    temp = stack->data[stack->size - 1];
    size = stack->size - 1;
    while (size > 0)
    {
        stack->data[size] = stack->data[size - 1];
        size--;
    }
    stack->data[0] = temp;
}
void    rra(t_stack *a, t_stats *stats)
{
    if (a->size < 2)
        return;
    reverse_rotate(a);
    stats->rra++;
	write(1,"rra\n",4);
}
void    rrb(t_stack *b, t_stats *stats)
{
    if (b->size < 2)
        return;
    reverse_rotate(b);
    stats->rrb++;
	write(1,"rrb\n",4);
}
void rrr(t_stack *a, t_stack *b, t_stats *stats)
{
    if (a->size < 2 && b->size < 2)
        return;
    reverse_rotate(a);
    reverse_rotate(b);
    stats->rrr++;
    write(1, "rrr\n", 4);
}