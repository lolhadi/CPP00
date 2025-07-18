#include"Contact.hpp"
#include"PhoneBook.hpp"
#include<iostream>

int main(){

	PhoneBook myPhonebook;

	int count = 0;
	int index = 0;
	std::string input;

	while(1)
	{
		std::cout << "Enter Command (ADD, SEARCH, EXIT):";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (input == "ADD"){

			myPhonebook.addContact(index);
			index = (index + 1) % 8;
			if (count < 8)
				count++;
		}
		else if (input == "SEARCH")
			myPhonebook.searchContact(count);
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command!!!! Use ADD, SEARCH, EXIT"<< std::endl;
	}
}
