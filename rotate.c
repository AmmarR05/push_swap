#include "push_swap.h"
void    ra(t_stack *a)
{
    if (a->size < 2)
        return;
    int temp = a->data[0];
    int count = 0;
    while (a->size - 1 > count)
    {
        a->data[count] = a->data[count + 1];
        count++;
    }
    a->data[a-> size - 1] = temp;
}
void    rb(t_stack *b)
{
    if (b->size < 2)
        return;
    int temp = b->data[0];
    int count = 0;
    while (b->size - 1 > count)
    {
        b->data[count] = b->data[count + 1];
        count++;
    }
    b->data[b-> size - 1] = temp;  
}
void    rr(t_stack *a, t_stack *b)
{
    ra(a);
    rb(b);
}