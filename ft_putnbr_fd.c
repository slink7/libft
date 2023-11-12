/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:36:00 by scambier          #+#    #+#             */
/*   Updated: 2023/11/12 15:55:07 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	static char	*dict = "0123456789";

	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n / 10, fd);
		write(fd, dict + n % 10, 1);
		return ;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	write(fd, dict + n % 10, 1);
}
