1    #include <stdlib.h>
2    #include <time.h>
3    #include <stdio.h>
4    /**
5    * main - Determine if a random number is positive, negative or zero.
6    (*
7    * Return: 0 on success
8     */
9     int main(void)
10    {
11	       int n;
12
13	       srand(time(0));
14	       n = rand() - RAND_MAX / 2;
15	       /* your code goes there */
16	       if (n < 0)
17	       {  
18	        	printf("%d is %s\n", n, "negative");
19	}
20	else if (n > 0)
21	{
22		printf("%d is %s\n", n, "positive");
23	}
24	else
25	{
26		printf("%d is %s\n", n, "zero");
27	}
28	return (0);
29                                                                                     30    }
