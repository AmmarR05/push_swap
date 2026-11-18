#include "push_swap.h"
static void swap_stack(t_stack *stack)
{
	if (stack->size < 2)
        return;
    int temp = stack->data[0];
    stack->data[0] = stack->data[1];
    stack->data[1] = temp; 
}
void	sa(t_stack *a)
{
    if (a->size < 2)
		return;
	swap_stack(a);
	write(1,"sa\n",3);
}
void    sb(t_stack *b)
{
    if (b->size < 2)
        return;
    swap_stack(b);
	write(1,"sb\n",3); 
}
void ss(t_stack *a, t_stack *b)
{
    if (a->size < 2 && b->size < 2)
        return;
    swap_stack(a);
    swap_stack(b);
    write(1, "ss\n", 3);
}