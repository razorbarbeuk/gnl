#include "../get_next_line.h"

int main(int argc, char **argv)
{
	char *line;
	int  fd;
	int ret;

	ret = 1;
	(void)argc;
	fd = open(argv[1], O_RDONLY);
    while ((ret = (get_next_line(0, &line))) == 1)
	{
        if(line)
        {
		  ft_putendl(line);
          line = NULL;
        }
    }
    ft_putnbr(n);
	return (0);
}
