#include "PhoneBook.hpp"
#include<iostream>
#include<iomanip>

void PhoneBook::addContact(size_t i){

	while(1)
	{
		std::string fname;
		std::cout << "Pwishh Enter First Name: ";
			std::getline(std::cin, fname);
			if (std::cin.eof()){
				std::cout << "EOF DETECTED!" << std::endl;
					return;
			}
			else if (fname.empty())
				std::cout << "Cannot be Empty!" << std::endl;
			else{
				contacts[i].setFirstName(fname);
				break;
			}
	}
	while(1)
	{
		std:: string lname;
		std::cout << "Pwishh Enter Last Name: ";
			std::getline(std::cin, lname);
			if (lname.empty())
				std::cout << "NONE SHALL BE EMPTY!" << std::endl;
			else {
				contacts[i].setLastName(lname);
				break;
			}
	}
	while(1)
	{
		std::string nname;
		std::cout << "Pwishh Enter Nickname: ";
			std::getline(std::cin, nname);
			if (nname.empty())
				std::cout << "NONE SHALL BE EMPTY!" << std::endl;
			else {
				contacts[i].setNickName(nname);
				break;
			}
	}
	while(1)
	{
		std::string pnum;
		std::cout << "Pwishh Enter PhoneNumber: ";
			std::getline(std::cin, pnum);
			if (pnum.empty())
				std::cout << "NONE SHALL BE EMPTY!" << std::endl;
			else {
				contacts[i].setPhoneNumber(pnum);
				break;
			}
	}
	while(1)
	{
		std::string secrets;
		std::cout << "Pwishh Share me your Darkest Secrets: ";
			std::getline(std::cin, secrets);
			if (secrets.empty())
				std::cout << "NONE SHALL BE EMPTY!" << std::endl;
			else {
				contacts[i].setDarkestSecret(secrets);
				break;
			}
	}
}
std::string formatInput(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return str;
}
void PhoneBook::searchContact(int i){

	if (i == 0){
		std::cout << "There is no such Contact exist yet \n";
		return;
	}
	else
	//starts here
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "Firstname" << "|"
			<< std::setw(10) << "Lastname" << "|"
			<< std::setw(10) << "Nickname" << "|"
			<< std::endl;
	std::cout << "----------------------------------" << std::endl;

	for (int j = 0; j < i; j++){
		std::cout << std::setw(10) << j << "|";
		std::cout << std::setw(10) << formatInput(contacts[j].getFirstName()) << "|";
		std::cout << std::setw(10) << formatInput(contacts[j].getLastName()) << "|";
		std::cout << std::setw(10) << formatInput(contacts[j].getNickName()) << std::endl;
	}
	std::string input;
	std::cout << "Choose your Index: ";
	while (1){

		std::getline(std::cin, input);
		if (std::cin.eof()){
			std::cout << "EOF DETECTED" << std::endl;
				return;
			}
		if (input.length() == 1 && isdigit(input[0])){
			int index = input[0] - '0';
			if (index >= 0 && index < i){
				printContact(index);
				break;
			}
			else
				std::cout << "Index out of range, try again: ";
		}
		else
			std::cout << "Invalid input, try again: ";
	}
}

void PhoneBook::printContact(int index){

	std::cout << "========== CONTACT INFO ==========\n";
	std::cout << "First name: " << contacts[index].getFirstName()<<std::endl;
	std::cout << "Last name: " << contacts[index].getLastName()<<std::endl;
	std::cout << "Nickname: " << contacts[index].getNickName()<<std::endl;
	std::cout << "Phone Number: "<< contacts[index].getPhoneNumber()<<std::endl;
	std::cout << "Darkest Secret: "<< contacts[index].getDarkestSecret()<< std::endl;
	std::cout << "----------------------------------" << std::endl;

}
