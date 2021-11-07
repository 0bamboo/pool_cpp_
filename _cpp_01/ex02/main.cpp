# include <iostream>
# include <string>

int main(void)
{
	std::string test = "HI THIS IS BRAIN";
	std::string *stringPTR = &test;
	std::string &stringREF = test;

	std::cout << "The memory address of the string :" << std::endl;
	std::cout << "test      : " << &test << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The display of the content of the string : " << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl; 
	std::cout << "stringREF : " << stringREF << std::endl; 
}
