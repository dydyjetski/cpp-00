/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:58:27 by dmeurant          #+#    #+#             */
/*   Updated: 2024/01/20 18:58:28 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "main.hpp"

class Phonebook
{
public:

    int total_contacts;
    Phonebook() : total_contacts(0) {};
    ~Phonebook( void );
    void welcomeMsg (void) const;
    void createContact(int i, std::string f_n, std::string l_n, std::string nick, std::string phone, std::string dark);
    std::string get_first_name(int i);
    std::string get_last_name(int i);
    std::string get_nickname(int i);
    std::string get_phone_nb(int i);
    std::string get_dark_secret(int i);
    Contact get_contact(int i);
    int get_total_contacts(void) const;
    void increment_total_contacts(void);

private:
    Contact phonebook[8];
};

#endif
