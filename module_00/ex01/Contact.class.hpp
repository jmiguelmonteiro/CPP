/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:41:28 by josemigu          #+#    #+#             */
/*   Updated: 2025/12/19 16:43:13 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact {

private:

	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
	
public:

	Contact(void);
	~Contact(void);

	std::string	get_firstName(void) const;
	std::string	get_lastName(void) const;
	std::string	get_nickName(void) const;
	std::string	get_phoneNumber(void) const;
	std::string	get_darkestSecret(void) const;

	void	set_firstName(std::string firstName);
	void	set_lastName(std::string lastName);
	void	set_nickName(std::string nickName);
	void	set_phoneNumber(std::string phoneNumber);
	void	set_darkestSecret(std::string darkestSecret);

	void	DisplayContactLine(int index);
	void	DisplayContactDetails(int index);
	
};

#endif
