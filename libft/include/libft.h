/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glatega <glatega@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:41:20 by glatega           #+#    #+#             */
/*   Updated: 2018/09/22 00:54:58 by glatega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 1
# define ENDL		'\n'
# define RED		"\x1B[31m"
# define GRN		"\x1B[32m"
# define YEL		"\x1B[33m"
# define BLU		"\x1B[34m"
# define MAG		"\x1B[35m"
# define CYN		"\x1B[36m"
# define WHT		"\x1B[37m"
# define B_RED		"\x1B[1;31m"
# define B_GRN		"\x1B[1;32m"
# define B_YEL		"\x1B[1;33m"
# define B_BLU		"\x1B[1;34m"
# define B_MAG		"\x1B[1;35m"
# define B_CYN		"\x1B[1;36m"
# define B_WHT		"\x1B[1;37m"
# define RESET		"\x1B[0m"
# define BACK_RED	"\e[48;5;124m"
# define BACK_LRED	"\e[48;5;160m"
# define BACK_BLU	"\e[48;5;019m"
# define BACK_LBLU	"\e[48;5;021m"
# define BACK_GRY	"\e[48;5;235m"
# define BACK_GRN	"\e[48;5;028m"
# define BACK_BLK	"\e[48;5;0m"
# define BACK_RST	"\e[0m"
# define TOP_LEFT	"\033[H"
# define CLEAR		"\033[2J"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	s_vector
{
	void			**content;
	int				capacity;
	int				count;
}				t_vector;

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_fd_data
{
	char			*storage;
	int				fd;
	int				nli;
}				t_fd_data;

size_t			ft_strlen(const char *str);

char			*ft_strdup(const char *str);

char			*ft_strcpy(char *dst, const char *src);

char			*ft_strncpy(char *dst, const char *src, size_t len);

char			*ft_strcat(char *s1, const char *s2);

char			*ft_strncat(char *s1, const char *s2, size_t n);

size_t			ft_strlcat(char *s1, const char *s2, size_t dstsize);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

char			*ft_strstr(const char *haystack, const char *needle);

char			*ft_strnstr(const char *hay, const char *needle, size_t len);

int				ft_atoi(const char *str);

int				ft_strcmp(const char *s1, const char *s2);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

void			*ft_memset(void *b, int c, size_t len);

void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *dst, const void *src, size_t n);

void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

void			*ft_memmove(void *dst, const void *src, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

void			*ft_memalloc(size_t size);

void			ft_memdel(void **ap);

char			*ft_strnew(size_t size);

void			ft_strdel(char **as);

void			ft_strclr(char *s);

void			ft_striter(char *s, void (*f)(char*));

void			ft_striteri(char *s, void (*f)(unsigned int, char *));

char			*ft_strmap(const char *s, char (*f)(char));

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int				ft_strequ(const char *s1, const char *s2);

int				ft_strnequ(const char *s1, const char *s2, size_t n);

char			*ft_strsub(const char *s, unsigned int start, size_t len);

char			*ft_strjoin(const char *s1, const char *s2);

char			*ft_strtrim(const char *s);

char			**ft_strsplit(const char *s, char c);

char			*ft_itoa(int n);

void			ft_putchar(char c);

void			ft_putstr(const char *s);

void			ft_putendl(const char *s);

void			ft_putnbr(int n);

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(const char *s, int fd);

void			ft_putendl_fd(const char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

t_list			*ft_lstnew(void const *content, size_t content_size);

void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));

void			ft_lstdel(t_list **alst, void (*del)(void*, size_t));

void			ft_lstprepend(t_list **alst, t_list *newlist);

void			ft_lstappend(t_list *alst, t_list *newlist);

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int				ft_isupper(int c);

int				ft_islower(int c);

int				ft_nbrlen(size_t nbr);

void			ft_putnstr_fd(const char *str, size_t n, int fd);

void			ft_putnstr(const char *str, size_t n);

char			*ft_frontcut(char *begin, int n);

int				get_next_line(const int fd, char **line);

unsigned int	ft_abs(int n);

char			**arrappend(char ***array, char *string);

int				ft_wordcount(char *str);

int				valid_int(char *str);

void			free_array(char ***stack);

char			**copy_array(char **array);

int				ft_arrlen(char **array);

#endif
