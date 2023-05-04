#include <iostream>

void printCir() {
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 10; j++) {
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	std::cout << "Project Singularity" << std::endl << std::endl;
	printCir();
}
