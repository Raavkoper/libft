# Libft_42

## Description
<img width="199" alt="Screen Shot 2023-04-24 at 2 10 07 PM" src="https://user-images.githubusercontent.com/94134595/233992107-56e6674f-5a30-4744-8ac0-a574df983b3d.png">

This is a project from 42 school. The goal is to code a C library regrouping usual functions that we’ll be allowed to use in all our other projects. Because usually we are obligated to write all the code we use from scratch, we made our own library to avoid rewriting the same code over and over again. This project is a good way to get familiar with the C language and to learn how to use the standard library. In addition I have implemented some extra functions that I found useful. 
for example;

* get_next_line() - a function that reads a line ending with a newline character from a file descriptor.
* ft_printf() - a function that mimics the real printf function.
* ft_split() - a function that splits a string using a character as a delimiter.

## Functions and their descriptions
* ft_atoi.c - converts the initial portion of the string pointed to by str to int representation.

* ft_bzero.c - writes n zeroed bytes to the string s. If n is zero, bzero() does nothing.

* ft_calloc.c - allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero.

* ft_isalnum.c - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

* ft_isalpha.c - checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).

* ft_isascii.c - checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
* ft_isdigit.c - checks for a digit (0 through 9).

* ft_isprint.c - checks for any printable character including space.

* ft_itoa.c - allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

* ft_memchr.c - locates the first occurrence of c (converted to an unsigned char) in string s.

* ft_memcmp.c - compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.

* ft_memcpy.c - copies n bytes from memory area src to memory area dest. The memory areas must not overlap. 
Use memmove(3) if the memory areas do overlap.

* ft_memmove.c - copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.

* ft_memset.c - fills the first n bytes of the memory area pointed to by s with the constant byte c.

* ft_putchar_fd.c - outputs the character c to the given file descriptor.

* ft_putendl_fd.c - outputs the string s to the given file descriptor, followed by a newline.

* ft_putnbr_fd.c - outputs the integer n to the given file descriptor.

* ft_putstr_fd.c - outputs the string s to the given file descriptor.

* ft_split.c - allocates (with malloc(3)) and returns an array of strings obtained by splitting s using the character c as a delimiter. The array must be ended by a NULL pointer.

* ft_strchr.c - locates the first occurrence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

* ft_strdup.c - allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. The pointer may subsequently be used as an argument to the function free(3).

* ft_strjoin.c - allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of 's1' and 's2'.

* ft_strlcat.c - appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 bytes, NULL-terminating the result.

* ft_strlcpy.c - copies up to dstsize - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

* ft_strlen.c - computes the length of the string s.

* ft_strmapi.c - applies the function f to each character of the string passed as argument by giving its index as first argument to create a "fresh" new string (with malloc(3)) resulting from successive applications of f.

* ft_strncmp.c - compares not more than n characters. Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a `\0' character are not compared.

* ft_strnstr.c - locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a `\0' character are not searched.

* ft_strrchr.c - locates the last occurrence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

* ft_strtrim.c - allocates (with malloc(3)) and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.

* ft_substr.c - allocates (with malloc(3)) and returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.

* ft_tolower.c - converts an upper-case letter to the corresponding lower-case letter. The argument must be representable as an unsigned char or the value of EOF.

* ft_toupper.c - converts a lower-case letter to the corresponding upper-case letter. The argument must be representable as an unsigned char or the value of EOF.
