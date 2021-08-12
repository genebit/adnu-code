#include <iostream>
#include <vector>

int main()
{
	/*
		   #
		  ##
	     ###
		####
	*/

	int steps;

	char step = '#';
	vector<char> stair = {};

	std::cin >> steps;

	for (int i = 0; i < steps; ++i)
	{
		stair.push_back(i);
		// std::cout << i << std::endl;
		// std::cout << step << std::endl;
	}
	return 0;
}