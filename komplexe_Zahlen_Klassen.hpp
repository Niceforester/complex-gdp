#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <optional>

class KomplexeZahl
{


	public:					

	//öffentliche Methoden

		KomplexeZahl (double a, double b) : real(a), imag(b) {}

		static KomplexeZahl fromPolar (double radius, double angle)		//Radius = Betrag
		{
			double a = radius*cos(angle);
			double b = radius*sin(angle);
			if (abs(a) < 0.00000000001) {a = 0.0;}		//Rundungsfehler ausmerzen
			if (abs(b) < 0.00000000001) {b = 0.0;}
			return KomplexeZahl( a, b );
		}

		// lese aus String "[ a b ]" die zwei Teile einer komplexen Zahl heraus (a und b sollen Fließkommazahlen sein)

		// Addition:
		static KomplexeZahl addition (KomplexeZahl c1, KomplexeZahl c2)
		{
			return KomplexeZahl(c1.real + c2.real, c1.imag + c2.imag);
		}
		

		// Multiplikation:
		static KomplexeZahl multiplikation (KomplexeZahl c1, KomplexeZahl c2)
		{
			return KomplexeZahl(c1.real*c2.real - c1.imag*c2.imag, c1.real*c2.imag + c2.real*c1.imag);
		}
		
		
		// Multiplikation mit einem Skalar:
		KomplexeZahl skalarMultiplikation (double alpha, KomplexeZahl complex)
		{
			return KomplexeZahl(alpha*complex.real, alpha*complex.imag);
		}

		double real;
		double imag;
};


/*class KomplexeZahl_Polar
{
	public:
		KomplexeZahl_Polar (double r, double phi) : betrag(r), winkel(phi) {}

		double betrag;
		double winkel;
};*/

std::istream& operator>>( std::istream& input, KomplexeZahl& complex )
{
	try
	{
		// [ 0.0 30.457 ]
		// ignore first '['
		input.get();

		double a, b;
		input >> a >> b;
		
		// ignore ending ']'
		input.get();

		complex = KomplexeZahl(a, b);
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Ungültiges Argument: " << e.what() << "\n";
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "Wert außerhalb des gültigen Bereichs: " << e.what() << "\n";
	}
	return input;
}

std::ostream& operator<<( std::ostream& output, const KomplexeZahl& complex )
{
	return output << "[ " << complex.real << " " << complex.imag << " ]";
}


class KomplexND
{
	public:
	// Methoden
	void push (KomplexeZahl complex)
	{
		complexVector.push_back(complex);
	}

	void pop ()
	{
		complexVector.pop_back();
	}
	
	KomplexeZahl at (size_t index)
	{
		return complexVector.at(index);
	}

	size_t size ()
	{
		return complexVector.size();
	}

	void scale (KomplexeZahl complex)
	{
		for(size_t i = 0; i < complexVector.size(); i++)
		{
			KomplexeZahl::multiplikation( complex, complexVector.at(i) );
		}
	}

	private:
	std::vector<KomplexeZahl> complexVector;
};
