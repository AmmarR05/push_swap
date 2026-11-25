#include "push_swap.h"
static int find_min(t_stack *a)
{
	if(a->size == 0)
		return 0;
	int min = a->data[0];
	int count = 1;
	while(a->size > count)
	{
		if(a->data[count] < min)
			min = a->data[count];
		count++;
	}
	return min;
}

void min_max_sort(t_stack *a, t_stack *b , t_stats *stats)
{
	int min;
	if(a->size == 0)
		return;
	min = find_min(a);
	while (a->size > 0)
	{
		if(a->data[0] == min)
		{
			pb(a, b,stats);
			if(a->size != 0)
				min = find_min(a);
		}
		else
			ra(a,stats);
	}
	while (b->size > 0)
		pa(a,b,stats);
}
