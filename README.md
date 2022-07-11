# <span style="font-family : monospace;">libft</span> - Full Library

<span style="font-family : monospace;">libft</span> is a library written by all 42 Students meant to replace a lot of the `stdlib`, `stdio` and `string` libraries.

### Usage

Running make in the directory will create a `libft.a` in the directory above.

```sh
user@machine:projectRoot$ make -C libft
made libft.a
user@machine:projectRoot$ ls
... libft libft.a ...
```

### Installation

```sh
git clone https://github.com/IsCoffeeTho/libft.git
cd libft
./clean.sh
```

### Norminette
The whole library is norminette compliant

```
$> norm
ft_atoi.c: OK!
ft_bzero.c: OK!
ft_calloc.c: OK!
ft_gnl.c: OK!
ft_internal_print_a.c: OK!
ft_internal_print_b.c: OK!
ft_isalnum.c: OK!
ft_isalpha.c: OK!
ft_isascii.c: OK!
ft_isdigit.c: OK!
ft_isprint.c: OK!
ft_itoa.c: OK!
ft_memchr.c: OK!
ft_memcmp.c: OK!
ft_memcpy.c: OK!
ft_memmove.c: OK!
ft_memset.c: OK!
ft_printf.c: OK!
ft_putchar_fd.c: OK!
ft_putendl_fd.c: OK!
ft_putnbr_fd.c: OK!
ft_putstr_fd.c: OK!
ft_split.c: OK!
ft_strchr.c: OK!
ft_strdup.c: OK!
ft_striteri.c: OK!
ft_strjoin.c: OK!
ft_strlcat.c: OK!
ft_strlcpy.c: OK!
ft_strlen.c: OK!
ft_strmapi.c: OK!
ft_strncmp.c: OK!
ft_strnstr.c: OK!
ft_strrchr.c: OK!
ft_strtrim.c: OK!
ft_substr.c: OK!
ft_tolower.c: OK!
ft_toupper.c: OK!
libft.h: OK!
```