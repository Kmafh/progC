/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kama <kama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 00:22:46 by kama              #+#    #+#             */
/*   Updated: 2022/04/11 15:07:09 by kama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

/*función para mostrar*/
void ft_putchar(char c)
{
	write(1,&c,1);
}

/*funcion para ver si se repiten*/
int ft_compare(char *cad,int pos)
{
	int i=0;
	while (i<pos)
	{
		if(cad[i]==cad[pos])
			return (1);
		
		
		
		i++;
	}
return(0);
}

/*Medir cadenas*/
int ft_strlen(char *str)
{
	int i;
	i=0;

	while(str[i]!='\0')
		{
			i++;
		}
	return(i);

}
/*funcion para concatenar*/

char *ft_concat(char *dest, char *str)
{
	int i;
	int j;

	i=0;
	j=ft_strlen(dest);
	while(str[i]!='\0')
		{
			dest[j]=str[i];
			i++;
			j++;
		}
		dest[j]='\0';
	return(dest);
}



int main(int argc, char *argv[])
{
	if(argc==3)
		{
			int i;
			int j;
			j=0;
			i=0;
			char *cad=ft_concat(argv[1],argv[2]);
		while(cad[i]!='\0')
		{
			
			
			if(ft_compare(cad,i)==0)
				{
					ft_putchar(cad[i]);
				}
			i++;
		}
	}
	
	ft_putchar('\n');	
}
