
#include "../libft_eval.h"

void	test_ft_putstr_fd(void)
{
	char s[] = "Hellooo";
	ft_putstr_fd("User		: ", 1);
	ft_putstr_fd(s, 1);
	printf("\n");
	printf("Expected	: Hellooo\n\n");
}

void	test_ft_putstr_fd_null(void)
{
	ft_putstr_fd("User		: ", 1);
	ft_putstr_fd(NULL, 1);
	printf("\n");
	printf("Expected	: \n\n");
}

int		main(void)
{
	printf("===== 1. Basic =====\n");
	test_ft_putstr_fd();
	printf("===== 2. NULL parameter =====\n");
	test_ft_putstr_fd_null();
	return (0);
}
