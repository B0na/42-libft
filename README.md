<div align="center">
	<a href="https://www.42sp.org.br/">
		<img src="https://static.wixstatic.com/media/1b540d_3141ceec765a45f4954e1e725e536a72~mv2.png/v1/fill/w_148,h_50,al_c,q_85,usm_0.66_1.00_0.01/42sp_logo_preto.webp">
	</a>
</div>

<h1 align="center"> Libft </h1>
<h1 align="center">
<p align="center">This project aims to code a C library regrouping usual functions that we will use in the next projects of the course.</p>



<h2 align="center">
	Project develop for <a href="https://github.com/LucasDatilioCarderelli/42Cursus"> 42Cursus </a>
</h2>

<p align="center">
  	<a href="https://www.linkedin.com/in/eduardo-bonamico-viana-2b23b721b/">
    	<img alt="Linkedin" src="https://img.shields.io/badge/Eduardo Bonamico Viana-blue?style=flat&logo=Linkedin&logoColor=white" />
</p>

## List of Functions

### Functions from `<ctype.h>`

- [`ft_isalpha`](srcs/ft_isalpha.c)	- checks for an alphabetic character.
- [`ft_isdigit`](srcs/ft_isdigit.c)	- check for a digit (0 through 9).
- [`ft_isalnum`](srcs/ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](srcs/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](srcs/ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](srcs/ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](srcs/ft_tolower.c)	- convert char to lowercase.

### Functions from `<string.h>`

- [`ft_strlen`](srcs/ft_strlen.c)	- calculate the length of a string.
- [`ft_memset`](srcs/ft_memset.c)	- fill memory with a constant byte.
- [`ft_bzero`](srcs/ft_bzero.c)	- zero a byte string.
- [`ft_memcpy`](srcs/ft_memcpy.c)	- copy memory area.
- [`ft_memmove`](srcs/ft_memmove.c)	- copy memory area.
- [`ft_strlcpy`](srcs/ft_strlcpy.c)	- copy string to a specific size.
- [`ft_strlcat`](srcs/ft_strlcat.c)	- concatenate a string to a specific size.
- [`ft_strchr`](srcs/ft_strchr.c)	- locate character in a string.
- [`ft_strrchr`](srcs/ft_strrchr.c)	- locate character in a string.
- [`ft_strncmp`](srcs/ft_strncmp.c)	- compare two strings.
- [`ft_memchr`](srcs/ft_memchr.c)	- scan memory for a character.
- [`ft_memcmp`](srcs/ft_memcmp.c)	- compare memory areas.
- [`ft_strnstr`](srcs/ft_strnstr.c)	- locate a substring in a string.
- [`ft_strdup`](srcs/ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

### Functions from `<stdlib.h>`
- [`ft_atoi`](srcs/ft_atoi.c)	- convert a string to an integer.
- [`ft_calloc`](srcs/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

### Non-standard functions
- [`ft_substr`](srcs/ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](srcs/ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](srcs/ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [`ft_split`](srcs/ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](srcs/ft_itoa.c)	- converts a number into a string.
- [`ft_strmapi`](srcs/ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](srcs/ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](srcs/ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](srcs/ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](srcs/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](srcs/ft_putnbr_fd.c)	- output a number to a file descriptor.
