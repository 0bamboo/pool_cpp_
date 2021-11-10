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
	addr = std::find(levels, levels + 4, comments);
	switch (addr - levels)
	{
		case 0:
			std::cout << "[ "<< levels[0] << " ]" << std::endl;
			karen.complain(levels[addr - levels]);
		case 1:
			std::cout << "[ "<< levels[1] << " ]" << std::endl;
			karen.complain(levels[addr - levels]);
		case 2:
			std::cout << "[ "<< levels[2] << " ]" << std::endl;
			karen.complain(levels[addr - levels]);
		case 3:
			std::cout << "[ "<< levels[3] << " ]" << std::endl;
			karen.complain(levels[addr - levels]);
			break ;
		default:
			_other_comments_();
			break;
	}
	return (0);
}