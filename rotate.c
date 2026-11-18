#include "push_swap.h"
static void rotate(t_stack *stack)
{
	if (stack->size < 2)
        return;
    int temp = stack->data[0];
    int count = 0;
    while (stack->size - 1 > count)
    {
        stack->data[count] = stack->data[count + 1];
        count++;
    }
    stack->data[stack-> size - 1] = temp;
}
void    ra(t_stack *a)
{
    if (a->size < 2)
        return;
    rotate(a);
	write(1,"ra\n",3);
}
void    rb(t_stack *b)
{
    if (b->size < 2)
        return;
    rotate(b);
	write(1,"rb\n",3);  
}
void    rr(t_stack *a, t_stack *b)
{
	if(a->size < 2 && b->size < 2)
		return;
    rotate(a);
    rotate(b);
	write(1,"rr\n",3);
}