/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:57:17 by dmeurant          #+#    #+#             */
/*   Updated: 2024/01/20 18:57:18 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "main.hpp"

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phonenb;
        std::string darksecret;
    public:

        Contact(void);
        ~Contact(void);
        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;
        std::string get_phone_nb(void) const;
        std::string get_dark_secret(void) const;
        void ft_print(void) const;
        void add_contact_in_class (std::string f_n, std::string l_n, std::string nick, std::string phone, std::string dark);
};

#endif
