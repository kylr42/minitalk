#include "minitalk.h"

static void	ft_issend(int pid, int sig)
{
	if (kill(pid, sig) == -1)
	{
		ft_putstr_fd(RED"Fail, packages not delivered!\n"RESET, 1);
		exit(1);
	}
}

static void	ft_send_char(int pid, char c)
{
	int	i;

	i = 128;
	while (i >= 1)
	{
		if (i & c)
			ft_issend(pid, SIGUSR1);
		else
			ft_issend(pid, SIGUSR2);
		i = i >> 1;
		usleep(150);
	}
}

static int	ft_isnumeric(char *str)
{
	while (*str)
		if (!ft_isdigit(*str++))
			return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
	{
		ft_putstr_fd(RED"Ex.: ./client [pid] [message]\n"RESET, 2);
		return (1);
	}
	else if (!ft_isnumeric(argv[1]))
	{
		ft_putstr_fd(RED"Enter correct PID!!!\n"RESET, 2);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	while (*(argv[2]))
		ft_send_char(pid, *argv[2]++);
	ft_send_char(pid, 10);
	return (0);
}
