/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:01:51 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 12:05:51 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
		return (1);
	karen.filter(argv[1]);
	return (0);
}