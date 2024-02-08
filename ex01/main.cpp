/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:35:58 by dmeurant          #+#    #+#             */
/*   Updated: 2023/11/27 09:35:59 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int add_contact (Phonebook *book, int i)
{
    std::string addreponse;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phonenb;
    std::string darksecret;

    std::cout << "First name:";
    std::getline(std::cin, first_name);
    if (std::cin.eof())
        return 0;
    if (first_name.empty())
    {
        std::cout << "ERROR: Fields cant be empty" << std::endl;
        std::cout << "> Exit phonebook" << std::endl;
        return 0;
    }

    std::cout << "Last name:";
    std::getline(std::cin, last_name);
    if (std::cin.eof())
        return 0;
    if (last_name.empty())
    {
        std::cout << "ERROR: Fields cant be empty" << std::endl;
        std::cout << "> Exit phonebook" << std::endl;
        return 0;
    }

    std::cout << "Nickname:";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
        return 0;
    if (nickname.empty())
    {
        std::cout << "ERROR: Fields cant be empty" << std::endl;
        std::cout << "> Exit phonebook" << std::endl;
        return 0;
    }

    std::cout << "Phone number:";
    std::getline(std::cin, phonenb);
    if (std::cin.eof())
        return 0;
    if (phonenb.empty())
    {
        std::cout << "ERROR: Fields cant be empty" << std::endl;
        std::cout << "> Exit phonebook" << std::endl;
        return 0;
    }

    std::cout << "Dark Secret:";
    std::getline(std::cin, darksecret);
    if (std::cin.eof())
        return 0;
    if (darksecret.empty())
    {
        std::cout << "ERROR: Fields cant be empty" << std::endl;
        std::cout << "> Exit phonebook" << std::endl;
        return 0;
    }

    (*book).createContact(i, first_name, last_name, nickname, phonenb, darksecret);
    return 1;
}

void search_contact (Phonebook *book, int i)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string u_index;
    int index;
    index = 0;
    int j;

    j = 0;
    std::cout << std::endl;
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
    while (j++ < i)
    {
        first_name = (*book).get_first_name(j - 1);
        last_name = (*book).get_last_name(j - 1);
        nickname = (*book).get_nickname(j - 1);
        if (first_name.length() >= 10)
        {
            first_name.resize(9);
            first_name.resize(10, '.');
        }
        if (last_name.length() >= 10)
        {
            last_name.resize(9);
            last_name.resize(10, '.');
        }
        if (nickname.length() >= 10)
        {
            nickname.resize(9);
            nickname.resize(10, '.');
        }
        std::cout << std::setw(10) << j << "|" << std::setw(10) << first_name << "|" << std::setw(10) << last_name << "|" << std::setw(10) << nickname << "|" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter the name of your contact to have more details about it." << std::endl;
    std::cout << "> ";
    std::getline(std::cin, u_index);
    if (std::cin.eof())
        return;
    std::stringstream index_ss(u_index);
    if (index_ss >> index && index >= 1 && index <= i)
        (*book).get_contact(index - 1).ft_print();
    else
        std::cout << "Wrong Index" << std::endl;
    return ;
}

int main ()
{
    Phonebook book;
    int i;
    int j;
    int testVoid;
    std::string reponse;

    testVoid = 0;
    i = 0;
    j = 0;
    book.welcomeMsg();
    while(!std::cin.eof())
    {
        std::getline(std::cin, reponse);
        if (reponse == "EXIT")
            return 0;
        else if (reponse == "ADD")
        {
            testVoid = add_contact(&book, i % 8);
            if (testVoid == 0)
                return 0;
            else
            {
                i++;
                j++;
            }
            book.welcomeMsg();
        }
        else if (reponse == "SEARCH")
        {
            search_contact(&book, std::min(j, 8));
        }
        else
            std::cout << "Only this command are accepted: ADD/SEARCH/EXIT" << std::endl;
    }
    return 0;
}
