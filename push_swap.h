#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int	*data;
	int	size;	
	int	capacity;
}	t_stack;

typedef struct s_stats
{
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	total;
}	t_stats;

/* Swap */
void	sa(t_stack *a, t_stats *stats);
void	sb(t_stack *b, t_stats *stats);
void	ss(t_stack *a, t_stack *b, t_stats *stats);

/* Push */
void	pa(t_stack *a, t_stack *b, t_stats *stats);
void	pb(t_stack *a, t_stack *b, t_stats *stats);

/* Rotate */
void	ra(t_stack *a, t_stats *stats);
void	rb(t_stack *b, t_stats *stats);
void	rr(t_stack *a, t_stack *b, t_stats *stats);

/* Reverse Rotate */
void	rra(t_stack *a, t_stats *stats);
void	rrb(t_stack *b, t_stats *stats);
void	rrr(t_stack *a, t_stack *b, t_stats *stats);

double	compute_disorder(t_stack *a);


/*sort algo*/
void min_max_sort(t_stack *a, t_stack *b, t_stats *stats);
/*flag*/
int number_of_flag(int argc ,char **argv);
int get_strategy(int argc, char **argv);
int valid_flags(int argc, char **argv);

/*bench*/
void    print_benchmark(double disorder, int flag, int real_flag, t_stats *stats);
int get_bench(int argc, char **argv);


#endif