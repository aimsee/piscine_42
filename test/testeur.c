#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

char    *ft_strcpy(char *dest, char *src)
{       
        int     index;

        index = 0;
        while (src[index])
        {
                dest[index] = src[index];
                index++;
        }
        dest[index] = src[index];

        return(dest);
} 

int     main()
{
	char	src[] = "Hello";
	char	dest[] = "Yello";

	ft_strcpy(dest, src);
        ft_putchar('\n');

        return (0);
}
