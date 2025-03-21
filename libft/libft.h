#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>

typedef struct		s_list
{
    void			*content;
    size_t			content_size;
    struct s_list	*next;
}					t_list;

int ft_atoi(const char *str);
void	ft_bzero(void *s, size_t len);
void	*ft_calloc(size_t nb, size_t len);
int ft_counttab(char **tab);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void *b, int c, size_t len);
int ft_power(int nb, int power);
void    ft_putchar(char c);
void    ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void    ft_putnbr(int n);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr(char *str);
void    ft_putstr_fd(char const *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, char *src, size_t size);
int ft_sqrt(int nb);
char    *ft_strcat(char *s1, const char *s2);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strncpy(char *dst, const char *src, size_t len);
char    *ft_strrev(char *str);
char    *ft_strstr(const char *haystack, const char *needle);
void    ft_swap(int *a, int *b);
size_t  ft_strlen(const char *s);
char    *ft_strncat(char *s1, const char *s2, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);

#endif
