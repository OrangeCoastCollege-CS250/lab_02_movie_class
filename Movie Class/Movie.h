#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

class Movie {
public:
	Movie();
	Movie(const string& title, const int year);

	string getMovieTitle() const;
	int getYear() const;

	void setMovieTitle(const string& title);
	void setYear(const int year);

	void print() const;
	bool sameYear(const Movie& otherMovie);

	~Movie();

private:
	string title;
	int year;
};



#endif
