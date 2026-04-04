/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:41:28 by josemigu          #+#    #+#             */
/*   Updated: 2026/01/07 14:20:39 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "utils.hpp"
# include "Contact.class.hpp"

# define NUMBER_CONTACTS 8

class PhoneBook {

private:

	Contact	phoneBookArray[NUMBER_CONTACTS];
	int		newestContactIndex;
	
public:

	PhoneBook(void);
	~PhoneBook(void);

	void	SearchPhoneBook(void);
	void	DisplayPhoneBook(void);
	void	AddContact(void);
};

#endif
