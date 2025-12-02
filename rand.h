/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scambier <scambier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 03:25:30 by scambier          #+#    #+#             */
/*   Updated: 2025/12/02 05:00:54 by scambier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAND_H
# define RAND_H

# include "color.h"

unsigned int	*ft_get_seed(void);
void			ft_set_seed(unsigned int seed);
unsigned int	ft_lehmer(void);
t_color			ft_random_color(void);

#endif
