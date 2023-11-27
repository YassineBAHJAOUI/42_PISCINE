/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:01:27 by ybahjaou          #+#    #+#             */
/*   Updated: 2022/11/24 18:34:03 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*pointers to memory location should 
be of type "void * by default.
https://www.educative.io/answers/what-is-a-buffer-in-c 
buffer and to clear it
return the adress of pointer 
using write withour %p or print 
https://stackoverflow.com/questions
/48066271/how-to-print-a-pointer-address-without-printf
undestand the bytes with the 
bitwise expression : 
https://medium.com/android-news/
java-when-to-use-n-8-0xff-and-
when-to-use-byte-n-8-2efd82ae7dd7
the use of the code between int 
j = in above in medium website
unsigned char is a character 
datatype where the variable consumes 
all the 8 bits of the memory and there 
is no sign bit (which is there in signed 
char). So it means that the range of 
unsigned char data type ranges from 0 
to 255.
check 
https://www.geeksforgeeks.org/unsigned-char-in-c-with-examples/#
:~:text=unsigned%20char%20is%20a%20character
,ranges%20from%200%20to%20255.
we use unsigned char in the 
ft_hex, because we are dealing 
with binary data Use char when 
you are dealing with ascii 
characters.
Use unsigned char when 
you are dealing with binary 
data (say, the contents of a 
binary file or raster image).*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_print_data(char *s, unsigned int size)
{
	unsigned int	i;

	i = -1;
	while (++i < size)
	{
		if (!(i % 2))
			ft_putchar(' ');
		ft_hex(s[i]);
	}
	while (i < 16)
	{
		if (i++ % 2)
			write(1, "   ", 2);
		else
			write(1, "   ", 3);
	}
	ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (s[i] < ' ' || s[i] == 127)
			ft_putchar('.');
		else
			ft_putchar(s[i]);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < size)
	{
		j = 56;
		j -= 8;
		while (j >= 0)
			ft_hex((unsigned long int)(addr + i) >> j & 0xff);
		ft_putchar(':');
		if (size - i < 16)
			ft_print_data(addr + i, size - i);
		else
			ft_print_data(addr + i, 16);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
/*int  main(){
   void *addr = "qwerf  tyuioplk
mnjhhffr jlkuilosdkjjskld
lkdsklsdlkdkkdskklds
kldkdskldskmn    
joaihuwipjed 
bedwwd   io
wiejdn jsdddd";
ft_print_memory(addr, 40);
int j = 56;
while ((j -= 8) >= 0)
ft_puthex(4461326225 >> j & 0xff);  
printf("%lu\n", 123 >> j & 0xff);
printf("%d", sizeof((unsigned long int)(addr)));    
ft_print_memory(addr, 200);
}*/
