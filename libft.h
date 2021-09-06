#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
unsigned long	ft_strlen(char *str);
void*			ft_memset(void *b, int c, unsigned long len);
void			ft_bzero(void *s, unsigned long n);
unsigned long	ft_memcpy(void *dst, const void *src, unsinged long n);
unsigned long	ft_memmove(void *dst, const void *src, unsigned long len);
unsigned long	ft_strlcpy(void *dst, const char *src, unsigned long dstsize);
unsigned long	ft_strlcat(void *dst, const char *src, unsigned long dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char*			ft_strchr(const char *s, int c);
char*			ft_strrchr(const char *s, int c);
int				strncmp(const char *s1, const char *s2, unsigned long n);
void*			ft_memchr(const void *s, int c, unsigned long n);
int				ft_memcmp(const void *s1, const void *s2, unsigned long);
char*			ft_strnstr(const char *haystack, const char *needle, unsigned long len);
int				ft_atoi(const char *str);
void*			calloc()

#endif
