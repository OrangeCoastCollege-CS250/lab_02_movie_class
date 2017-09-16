/*
Badajoz, Severiano

CS A250
September 15, 2017

Lab 02
*/

#include <string>
#include <iostream>
#include "Movie.h"
using namespace std;

Movie::Movie() {
	title = "no name";
	year = 0;
}
Movie::Movie(const string& newTitle, const int newYear) {
	title = newTitle;
	year = newYear;
}

string Movie::getMovieTitle() const{
	return this->title;
}
int Movie::getYear() const {
	return this->year;
}

void Movie::setMovieTitle(const string& newTitle) {
	title = newTitle;
}
void Movie::setYear(const int newYear) {
	year = newYear;
}

void Movie::print() const {
	cout << title << " (" << year << ")" << endl;
}
bool Movie::sameYear(const Movie& otherMovie) {
	if (otherMovie.getYear() == getYear()) return true;
	return false;
}

Movie::~Movie() {}

