#include<iostream>
#include<string>

void ConvUP(std::string str){
	for(size_t i = 0; i < str.length(); i++)
		std::cout << (char)std::toupper(str[i]);
}
int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return 0;
	}
	for (int i=1; argv[i]; i++)
		ConvUP(argv[i]);
	std::cout << std::endl;
	return 0;
}
