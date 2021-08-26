#include <iostream>

int main()
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << "*";
		}
		if (int j = i)                  //made this so if you wanted to add it at the end of * each time it ends the line. to dumb to do it a easier way so I did it my way.
		{                      
			std::cout << "Test";
		}
		std::cout << std::endl;
	}
}
