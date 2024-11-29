#include "libft.h"

	ptr = (unsigned char *)s;
	i = 0;

	while (i < n)
	{
		*(ptr + i) = 0;
		i++;
	}
}
