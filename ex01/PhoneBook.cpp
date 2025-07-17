#include "PhoneBook.hpp"
#include<iostream>

void PhoneBook::addContact(size_t i){

	while(1)
	{
		std::string fname;
		std::cout << "Please enter First Name";
			std::getline(std::cin, fname);
			if (std::cin.eof()){
				std::cout << "EOF DETECTED" << std::endl;
			}
			else if (fname.empty()){
				std::cout
			}
		contacts[i].setFirstName(fname);
	}
}
