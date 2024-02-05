#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

#include "komplexe_Zahlen_Klassen.hpp"


// TestMain:

int main()
{
	std::cout << "\n ~~~ Programm \"Komplexe Zahlen\" startet ~~~ \n\n";
	//KomplexeZahl c;
//	std::cout << c.AdditionReal(3,4) << "\n";
//	std::cout << c.PolarBetrag(-4,-4) << "\n";

	std::istringstream iss("[ 2.0 -1.5 ]");
	KomplexeZahl complex(0.0, 0.0);
	iss >> complex;
	std::cout << complex << "\n";
	std::cout << KomplexeZahl::fromPolar(2,M_PI) << "\n";
	std::cout << KomplexeZahl::addition( KomplexeZahl(2.0, -1.5), KomplexeZahl(-2.0, 1.5)) << "\n";
	std::cout << KomplexeZahl::multiplikation( KomplexeZahl(2.0, -1.5), KomplexeZahl( -2.0, 1.5 )) << "\n";

	return 0;
}
 
