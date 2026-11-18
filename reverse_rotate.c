#include "push_swap.h"

void    rra(t_stack *a)
{
    if (a->size < 2)
        return;
    int temp = a->data[a->size - 1];
    int size = a->size - 1;
    while (size > 0)
    {
        a->data[size] = a->data[size - 1];
        size--;
    }
    a->data[0] = temp;
}
void    rrb(t_stack *b)
{
    if (b->size < 2)
        return;
    int temp = b->data[b->size - 1];
    int size = b->size - 1;
    while (size > 0)
    {
        b->data[size] = b->data[size - 1];
        size--;
    }
    b->data[0] = temp;
}
void    rrr(t_stack *a, t_stack *b)
{
    rra(a);
    rrb(b);
}