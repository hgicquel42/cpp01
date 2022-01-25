/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:07:15 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 11:47:36 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		void	rename(std::string name);
};
