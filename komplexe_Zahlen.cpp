#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

#include "komplexe_Zahlen_Klassen.hpp"

KomplexeZahl eingabe ()
{
	// Abfrage, ob die komplexe Zahl in polarer oder algebraischer Form eingegeben werden soll:
	std::cout << "Wie soll die Komplexe Zahl eingelesen werden? (polar/karthesisch)\n";
	std::string auswahl;
	std::getline(std::cin, auswahl);
	
	// Eingabe:
	KomplexeZahl c(0.0, 0.0);//ToBeDone
	std::cin >> c;

	// je nach Abfrage s.o.
	if (auswahl == "p" || auswahl == "polar")
	{
		// c.real = radius, c.imag = angle
		c = KomplexeZahl::fromPolar(c.real, c.imag);
	}

	return c;
}

int main()
{
	std::cout << "\n ~~~ Programm \"Komplexe Zahlen\" startet ~~~ \n\n";

//	std::istringstream iss("[ 1.0 2.0 ]");
	
	std::cout << eingabe() << "\n";

	// Abfrage, was gemacht
	
	// TestMain:
//	std::istringstream iss("[ 2.0 -1.5 ]");
/*	KomplexeZahl complex(0.0, 0.0);
	iss >> complex;
	std::cout << complex << "\n";
	std::cout << KomplexeZahl::fromPolar(2,M_PI) << "\n";
	std::cout << KomplexeZahl::addition( KomplexeZahl(2.0, -1.5), KomplexeZahl(-2.0, 1.5)) << "\n";
	std::cout << KomplexeZahl::multiplikation( KomplexeZahl(2.0, -1.5), KomplexeZahl( -2.0, 1.5 )) << "\n";
*/
	return 0;
}
 
