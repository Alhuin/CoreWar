/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_utf8_1.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: clcreuso <clcreuso@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/28 16:35:19 by clcreuso     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/28 16:35:19 by clcreuso    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_utf8_1(wchar_t w, int fd)
{
	write(fd, &w, 1);
	return (1);
}
