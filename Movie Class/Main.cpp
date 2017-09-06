#include <string>
#include <iostream>
#include "Movie.h"
using namespace std;

void main() {
	cout << "Creating new object.." << endl;
	Movie movie1;

	cout << "Creating new object using overloaded constructor" <<
		"(Title = 2001: A Space Odyssey, Year = 2001)..." << endl;
	Movie movie2("2001: A Space Odyssey", 2001);

	cout << "Changing year of second movie to 1968..." << endl;
	movie2.setYear(1968);

	// Printing new name of second movie
	cout << "New year of second movie: " << movie2.getYear() << endl;

	cout << "Changing title of first movie to \"Interstellar\"..." << endl;
	movie1.setMovieTitle("Interstellar");

	// Printing new title of first movie
	cout << "New title of first movie: " << movie1.getMovieTitle() << endl;

	// Using print function on both movies
	movie1.print();
	movie2.print();

	system("Pause");
}