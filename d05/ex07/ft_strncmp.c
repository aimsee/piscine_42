int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int     val1;
        int     val2;
        int     i;

        val1 = 0;
        val2 = 0;
        i = 0;
        /* Value of n bits of the first string */
        while((s1[i] != '\0)' && (s1[i] < n))
        {
                val1 = val1 + s1[i];
                i++;
        }
        i = 0;
        /* Value of n bits of the second string */
        while(s2[i] != '\0' && (s2[i] < n))
        {
                val2 = val2 + s2[i];
                i++;
        }
        /* Compare and return the result */
        return(val1 - val2);
}
