#include "Karen.hpp"

void	_other_comments_()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int main(int argc, char **argv)
{
	Karen 		karen;
	std::string *addr;
	std::string comments;
	std::string	levels[4] = {"WARNING", "ERROR", "INFO", "DEBUG"};

	if (argc != 2)
	{
		std::cout << "Wrong arguments ." << std::endl;
		return (1);
	}
	comments = argv[1];
	if ((addr = std::find(levels, levels + 4, comments)) != (levels + 4))
		karen.complain(levels[addr - levels]);
	else
		_other_comments_();
	return (0);
}