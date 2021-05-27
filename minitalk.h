#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <fcntl.h>
# include "libft/libft.h"

# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define MAG   "\x1B[35m"
# define RESET "\x1B[0m"

typedef struct s_data
{
	int	c;
	int	count;
}	t_data;

#endif //MINITALK_H
