/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:58:24 by dmeurant          #+#    #+#             */
/*   Updated: 2024/01/20 18:58:25 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void Phonebook::welcomeMsg (void) const
{
    std::cout << "Command info:" << std::endl;
    std::cout << "command ADD: add a contact to the phonebook" << std::endl;
    std::cout << "command SEARCH: search for a contact in the phonebook" << std::endl;
    std::cout << "command EXIT: quit the program" << std::endl;
}

void Phonebook::createContact(int i, std::string f_n, std::string l_n, std::string nick, std::string phone, std::string dark)
{
    phonebook[i].add_contact_in_class(f_n, l_n, nick, phone, dark);
}

int Phonebook::get_total_contacts(void) const 
{
        return total_contacts;
}

void Phonebook::increment_total_contacts(void) 
{
        total_contacts++;
}

Contact Phonebook::get_contact(int i)
{
    return(phonebook[i]);
}

std::string Phonebook::get_first_name(int i)
{
    return(phonebook[i].get_first_name());
}

std::string Phonebook::get_last_name(int i)
{
    return(phonebook[i].get_last_name());
}

std::string Phonebook::get_nickname(int i)
{
    return(phonebook[i].get_nickname());
}

std::string Phonebook::get_phone_nb(int i)
{
    return(phonebook[i].get_phone_nb());
}

std::string Phonebook::get_dark_secret(int i)
{
    return(phonebook[i].get_dark_secret());
}

Phonebook::~Phonebook(void)
{

}
