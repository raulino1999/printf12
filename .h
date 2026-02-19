#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

/* main */
int	ft_printf(const char *format, ...);

/* format */
int	ft_format(char c, va_list args);

/* utils */
int	ft_putchar(char c);
int	ft_putstr(char *str);

/* numbers */
int	ft_putnbr(long n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_puthex(unsigned long n, int uppercase);
int	ft_putptr(unsigned long ptr);

#endif
