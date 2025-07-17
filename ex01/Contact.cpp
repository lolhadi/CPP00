#include"Contact.hpp"

//This just assigning what the setter will do, it just stores what has been input
//into the private string

void Contact::setFirstName(std::string str){
	this->firstName = str;
}
void Contact::setLastName(std::string str){
	this->lastName = str;
}
void Contact::setNickName(std::string str){
	this->nickName = str;
}
void Contact::setPhoneNumber(std::string str){

	this->phoneNumber = str;
}
void Contact::setDarkestSecret(std::string str){
	this->darkestSecret = str;
}

//This getter use the function to return the value store in private
std::string Contact::getFirstName() const {return (firstName);}
std::string Contact::getLastName() const {return (lastName);}
std::string Contact::getNickName() const {return (nickName);}
std::string Contact::getPhoneNumber() const {return(phoneNumber);}
std::string Contact::getDarkestSecret() const {return(darkestSecret);}
