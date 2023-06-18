#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		virtual ~Brain(void);
		Brain & operator=(Brain const & src);
		std::string ideas[100];
		virtual void idea(void) const;
};

#endif