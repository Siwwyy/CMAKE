#include "head.hpp"

#include <iostream>

void Hello::say_hello() noexcept
{
	std::cout << "HELLO WORLD\n";
	std::cout << "Say hello from lib: " << SAY_HELLO_VERSION << '\n';
}