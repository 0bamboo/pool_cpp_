#include "Karen.hpp"

int main()
{
	Karen karen;
	std::string karen_comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;

	while (++i < 4)
		karen.complain(karen_comments[i]);

	std::cout << std::endl;
	std::cout << "DEBUG :" << std::endl;
	karen.complain("DEBUG");
	std::cout << "ERROR :" << std::endl;
	karen.complain("ERROR");
	std::cout << "WARNING :" << std::endl;
	karen.complain("WARNING");
	std::cout << "INFO :" << std::endl;
	karen.complain("DEBUG");

	return (0);
}