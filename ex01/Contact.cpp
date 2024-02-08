/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:57:09 by dmeurant          #+#    #+#             */
/*   Updated: 2024/01/20 18:57:11 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact( void )
{

}

Contact::~Contact( void )
{

}

void Contact::ft_print(void) const
{
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "Information of your index :" << std::endl;
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " <<  nickname << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
}

void Contact::add_contact_in_class (std::string f_n, std::string l_n, std::string nick, std::string phone, std::string dark)
{
    first_name = f_n;
    last_name = l_n;
    nickname = nick;
    phonenb = phone;
    darksecret = dark;
}

std::string Contact::get_first_name(void) const
{
    return (first_name);
}

std::string Contact::get_last_name(void) const
{
    return (last_name);
}

std::string Contact::get_nickname(void) const
{
    return (nickname);
}

std::string Contact::get_phone_nb(void) const
{
    return (phonenb);
}

std::string Contact::get_dark_secret(void) const
{
    return (darksecret);
}
