#ifndef FT_FUNCTION_H
#define FT_FUNCTION_H
void	ft_nulo(char *src, int size);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char (*str));
char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int     ft_str_is_alpha(char *str);
int     ft_is_not_alphabetic(char c);
int     ft_is_not_numeric(char c);
int     ft_str_is_alpha(char *str);
int     ft_str_is_lowercase(char *str);
int     ft_str_is_uppercase(char *str);
int     ft_is_not_upercase(char c);
int     ft_is_not_printable(char c);
int     ft_str_is_printable(char *str);
char    *ft_strupcase(char *str);
char    *ft_strlowcase(char *str);
char    *ft_strcapitalize(char *str);
void    ft_putstr_non_printable(char *str);
#endif
