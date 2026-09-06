#ifndef	libft_h
#define	libft_h
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct t_list
{
	void		*constent;
	size_t		constent_size;
	struct s_list	*next;
}			t_list;
//###########################
int	ft_tolower(int c);
int   ft_tolower(int c);
int   ft_atoi(char *str);
int   ft_isalnum(int c);
int   ft_isalpha(int c);
int   ft_isascii(int c);
int   ft_isdigit(int c);
int   ft_isprint(int c);
int   ft_strlcat(char *dst, char *src, size_t size);
int   ft_strcmp(char *s1, char *s2);
int   ft_strlen(const char *a);
int   ft_strncmp(char *s1, char *s2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strequ(char const *s1, char const *s2);
int   ft_strnequ(char const *s1, char const *s2, size_t n);
//#################################################
char	*ft_strdup(char *s);
char	*ft_strcat(char *dst, const char *src);
char  *ft_strcpy(char *dst, char *src);
char  *ft_strchr(char *s, int c);
char  *ft_strncpy(char *dest, char *src, size_t n);
char  *ft_strnstr(char *big, char *little, size_t len);
char  *ft_strrchr(char *s, int c);
char  *ft_strncat(char *dst, char *src, size_t size);
char	*ft_strmap(char const *s, char (*f)(char));
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_itoa(int n);
char  *ft_strstr(char *haystack, char *needle);
char	*ft_strnew(size_t size);
//###################################
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s,void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c,int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_memdel(void **ap);
void  ft_bzero(void *s, size_t n);
void  *ft_memccpy(void *dest, const void *src, int c, size_t n);
void  *ft_memalloc(size_t size);
void  *ft_memcpy(void *dest, void *src, size_t n);
void  *ft_memmove(void *dest, const void *src, size_t n);
void  *ft_memset(void *s, int c, size_t n);
void  *ft_memchr(void *str, int c, size_t n);
//###########################################
//t_list  *ft_lstnew(void const *constent, size_t constent_size);


#endif
