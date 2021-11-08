#include "Karen.hpp"

Karen::Karen()
{
	complains[0] = &Karen::debug;
	complains[1] = &Karen::info;
	complains[2] = &Karen::warning;
	complains[3] = &Karen::error;
}

Karen::~Karen() {}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	int	i;
	std::string karen_comments[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < 4)
		if (karen_comments[i] == level)
			(this->*complains[i])();
}
