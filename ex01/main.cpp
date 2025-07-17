#include"Contact.hpp"
#include"PhoneBook.hpp"
#include<iostream>

int main(){

	PhoneBook myPhonebook;

	int count = 0;
	int i = 0;

	while(1)
	{
		std::string buffer;
		if (i >= 8)
			i = 0;
		//print prompt

		//add contact

		if (count != 8)
			count++;
		else if (buffer == "SEARCH")
			myPhonebook.searchContact(count);

	}
}
