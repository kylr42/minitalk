#include "minitalk.h"

t_data	g_data;

void	signal_handler(int signal)
{
	if (signal == SIGUSR1) // 1
	{
		g_data.c += g_data.count;
		g_data.count >>= 1;
	}
	else if (signal == SIGUSR2) // 0
		g_data.count >>= 1;
	if (g_data.count < 1)
	{
		ft_putchar_fd((unsigned char)g_data.c, 1);
		g_data.count = 128;
		g_data.c = 0;
	}
}

int	main(void)
{
	g_data.c = 0;
	g_data.count = 128;
	ft_putstr_fd(MAG"Server Running!\n"GRN"PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd(RESET"\n", 1);
	while (1)
	{
		signal(SIGUSR2, signal_handler);
		signal(SIGUSR1, signal_handler);
	}
}
