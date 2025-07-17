#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"Contact.hpp"

class PhoneBook{

	private:
			Contact contacts[8]; //store up to 8 contact only

	public:
			void addContact(size_t);
			void searchContact();
			void printContact(int index);
};
#endif
