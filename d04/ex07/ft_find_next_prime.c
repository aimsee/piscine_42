int     ft_is_prime(int nb)
{
        int     i;
        int     racine;
        int     hnb;

        i = 0;
        racine = 0;
        hnb = nb / 2;
        if (nb == 0 || nb == 1) /* 0 and 1 are not prime numbers */
        {
                return(0);
        }
        if ((nb % 2) == 0) /* Pair numbers are not prime numbers */
        {
                return(0);
        }
        while (i <= hnb) /* Calculate the square root of nb */
        {
                if ((i * i) == nb)
                {
                        racine = i;
                }
                i++;
        }
        i = 2;
        while (i <= racine) /* testing if nb is prime from 2 to square root of nb */
        {
                if ((nb % i) == 0)
                {
                        return(0);
                }
                i++;
        }

        return(1); /* Finally return true when all other options are excluded */
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}

	return(nb);
}
