#ifndef WEAPON
#define WEAPON

# include <iostream>
#include <cstddef>

class Weapon{

	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string&	getType(void);
		void				setType(std::string type);
};

#endif
