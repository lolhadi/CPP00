#include "PhoneBook.hpp"
#include<iostream>

void PhoneBook::addContact(size_t i){

	while(1)
	{
		std::string fname;
		std::cout << "Pwishh Enter First Name";
			std::getline(std::cin, fname);
			if (std::cin.eof()){
				std::cout << "EOF DETECTED" << std::endl;
				exit(1);
			}
			else if (fname.empty())
				std::cout << "Cannot be Empty" << std::endl;
			else{
				contacts[i].setFirstName(fname);
				break;
			}
	}
	while(1)
	{
		std:: string lname;
		std::cout << "Pwishh Enter Last Name ";
			std::getline(std::cin, lname);
			if (lname.empty())
				std::cout << "NONE SHALL BE EMPTY" << std::endl;
			else {
				contacts[i].setLastName(lname);
				break;
			}
	}
	while(1)
	{
		std::string nname;
		std::cout << "Pwishh Enter Nickname ";
			std::getline(std::cin, nname);
			if (nname.empty())
				std::cout << "NONE SHALL BE EMPTY" << std::endl;
			else {
				contacts[i].setNickName(nname);
				break;
			}
	}
	while(1)
	{
		std::string pnum;
		std::cout << "Pwishh Enter PhoneNumber ";
			std::getline(std::cin, pnum);
			if (pnum.empty())
				std::cout << "NONE SHALL BE EMPTY" << std::endl;
			else {
				contacts[i].setPhoneNumber(pnum);
				break;
			}
	}
	while(1)
	{
		std::string secrets;
		std::cout << "Pwishh Share me your Darkest Secrets ";
			std::getline(std::cin, secrets);
			if (secrets.empty())
				std::cout << "NONE SHALL BE EMPTY" << std::endl;
			else {
				contacts[i].setDarkestSecret(secrets);
				break;
			}
	}
}

void PhoneBook::searchContact(int i){

	if (i == 0){
		std::cout << "There is no such Contact exist yet";
		return;
	}
	else
	//starts here

}
