#include "push_swap.h"
static void    deletefisrt(t_stack *b)
{
    int count = 0;
    while(b->size - 1 > count)
    {
        b->data[count] = b->data[count + 1];
        count++;
    }
    if(b->size != 0)
        b->size--;
}
static void addfirst(t_stack *a ,int val)
{
    if (a->size >= a->capacity)
        return;
    int size = a->size;
    while (size > 0)
    {
        a->data[size] = a->data[size - 1];
        size--;
    }
    a->data[0] = val;
    a->size++;
}
void	pa(t_stack *a, t_stack *b, t_stats *stats)
{
    if(b->size == 0 || a->size >= a->capacity)
        return;
    int top_b = b->data[0];
    deletefisrt(b);
    addfirst(a,top_b);
    stats->pa++;
	write(1,"pa\n",3);
}
void    pb(t_stack *a, t_stack *b,t_stats *stats)
{
    if(a->size == 0 || b->size >= b->capacity)
        return;
    int top_a = a->data[0];
    deletefisrt(a);
    addfirst(b,top_a);
    stats->pb++;
	write(1,"pb\n",3);
}


