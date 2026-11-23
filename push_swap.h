#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int	*data;
	int	size;	
	int	capacity;
}	t_stack;

/* Swap */
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

/* Push */
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

/* Rotate */
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

/* Reverse Rotate */
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

double	compute_disorder(t_stack *a);


/*sort algo*/
void min_max_sort(t_stack *a, t_stack *b);

/*flag*/
int number_of_flag(int argc ,char **argv);
int get_strategy(int argc, char **argv);
int valid_flags(int argc, char **argv);

#endif