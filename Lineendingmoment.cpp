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

/* 

//For people who wanna use input instead of declaring it in the for loop :))))))))))))))))

int main()
{
    int input1;

	std::cout << "Enter Number of Rows: ";
	std::cin >> input1;

	for (int i = 0; i < input1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << "*";
	    }
		std::cout << std::endl;
	}
}


*/
