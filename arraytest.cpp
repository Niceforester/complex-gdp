#include <iostream>
#include <array>

int main()
{
	std::array<double, 5> realwert;
	std::array<double, 5> imagwert;

	realwert.at(0) = 3.14;
	realwert.at(1) = 0;
	realwert.at(2) = 0;
	realwert.at(3) = 1;
	realwert.at(4) = 1;
	
	imagwert.at(0) = 2.71;
	imagwert.at(1) = 0;
	imagwert.at(2) = -1;
	imagwert.at(3) = 0;
	imagwert.at(4) = -1;

	for(unsigned int i=0; i < realwert.size(); i++)
	{
		if(realwert.at(i) != 0.0)
		{
			std::cout << realwert.at(i);
			if(imagwert.at(i) != 0.0)
			{
				std::cout << " +";
				if(imagwert.at(i) != 1.0)
				{
					std::cout << imagwert.at(i);
				}
				std::cout << "i ";
			}
		}
		if(realwert.at(i) == 0.0)
		{
			if(imagwert.at(i) != 0.0)
			{
				if(imagwert.at(i) != 1.0 || imagwert.at(i) != -1.0)
				{
					std::cout << imagwert.at(i);
				}
				if(imagwert.at(i) == -1.0)
				{
					std::cout << " -";
				}
				std::cout << "i";
			}
		else{std::cout << "0";}
		}
		std::cout << std::endl;
	}


}
