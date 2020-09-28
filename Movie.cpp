#include <iostream>
#include "Movie.h"

// Implementation of the constructor
Movie::Movie(std::string movie_name, std::string movie_rating, int watch_count)
	:movie_name(movie_name), movie_rating(movie_rating), watch_count(watch_count) {
}

// Implementation of the copy constructor
Movie::Movie(const Movie& source) 
	: Movie{ source.movie_name, source.movie_rating, source.watch_count } {
}

// Implementation of the destructor
Movie::~Movie() {
}

// Implementation of set_movie_name
void Movie::set_movie_name(std::string movie_name) {
	this->movie_name = movie_name;
};
// Implementation of get_movie_name
std::string Movie::get_movie_name() const {
	return movie_name;
};

// Implementation of set_movie_rating
void Movie::set_movie_rating(std::string movie_rating) {
	this->movie_rating = movie_rating;
};
// Implementation of get_movie_rating
std::string Movie::get_movie_rating() const {
	return movie_rating;
};

// Implementation of set_watch_count
void Movie::set_watch_count(int watch_count) {
	this->watch_count = watch_count;
};
// Implementation of get_watch_count
int Movie::get_watch_count() const {
	return watch_count;
};

// Implementation of increment_watch_count
void Movie::increment_watch_count() {
	watch_count++;
}

// Implementation of display_movie_details
void Movie::display_movie_details() const {
	std::cout << movie_name << " " << movie_rating << " " << watch_count << std::endl;
}
