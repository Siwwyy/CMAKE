#include <iostream>

#include <say_hello/head.hpp>

int main(int argc, char* argv[])
{
	Hello::say_hello();

	std::cout << "say hello from main: " << SAY_HELLO_VERSION << '\n';

	std::cin.get();
	return EXIT_SUCCESS;
}