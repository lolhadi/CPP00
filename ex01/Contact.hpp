#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<string>

class Contact{

	private:
			// this can only be access using setter and getter
			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string phoneNumber;
			std::string darkestSecret;

	public:
			//This is what we call setter : we set the value of each field
			void setFirstName(std::string);
			void setLastName(std::string);
			void setNickName(std::string);
			void setPhoneNumber(std::string);
			void setDarkestSecret(std::string);
			//This is what we call a getter: that get what has been store from the setter
			//Const is use since in not gonna modify anything
			std::string getFirstName() const;
			std::string getLastName() const;
			std::string getNickName() const;
			std::string getPhoneNumber() const;
			std::string getDarkestSecret() const;
};
#endif
