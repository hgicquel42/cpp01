/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:01:47 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/25 12:00:42 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	ft_replace(std::string& line, std::string src, std::string dst)
{
	int	i;
	int	l;

	i = 0;
	l = src.length();
	while (line[i])
	{
		if (!line.compare(i, l, src))
		{
			line.erase(i, l);
			line.insert(i, dst);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	std::string		ifname;
	std::string		ofname;
	std::ifstream	ifstream;
	std::ofstream	ofstream;
	std::string		line;
	
	if (argc != 4)
		return (1);
	if (std::string(argv[2]).empty())
		return (1);
	if (std::string(argv[3]).empty())
		return (1);
	ifname = argv[1];
	ofname = ifname + ".replace";
	ifstream = std::ifstream(ifname);
	ofstream = std::ofstream(ofname);
	while (std::getline(ifstream, line))
	{
		ft_replace(line, argv[2], argv[3]);
		ofstream << line << "\n";
	}
	ifstream.close();
	ofstream.close();
	return (0);	
}