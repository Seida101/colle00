/*
 # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Rush00                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samaeza <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/15 11:46:30 by samaeza           #+#    #+#              #
#    Updated: 2020/07/15 11:59:09 by samaeza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
*/

#include "ft_putchar.c"

void rush(int x, int y)
{
  char t;
  int s = 0;
  while ( s < y)
  {
	  int m =0;
      while ( m < x)
	  {
        if ((s == 0 || s == y-1) && (m == 0 || m == x-1))
		{
          t ='o';
		}
        else if (s == 0 || s == y-1)
		{
          t = '-';
		}
        else if (m ==0 || m == x-1)
		{
          t = '|';
		}
        else
		{
		   	t = ' ';
		}
          ft_putchar(t);
		  m++;
	  }
	  s++;
      ft_putchar('\n');
  }
}
