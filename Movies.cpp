#include <iostream>
#include <vector>
#include <string>
#include "Movies.h"

//Implementation of the constructor
Movies::Movies() {
}

//Implementation of the destructor
Movies::~Movies() {
}

//Implementation of add_movie
bool Movies::add_movie(std::string movie_name, std::string movie_rating, int watch_count) {
	for (const Movie &movie : movies_list) {
		if (movie.get_movie_name() == movie_name) {
			return false;
		}
	}
	Movie temp{ movie_name, movie_rating, watch_count };
	movies_list.push_back(temp);
	return true;
}

// Implementation of increment_watch_count
bool Movies::increment_watch_count(std::string movie_name) {
	for (Movie &movie : movies_list) {
		if (movie.get_movie_name() == movie_name) {
			movie.increment_watch_count();
			return true;
		}
		else {
			std::cout << movie_name << " does not exist in the movies list." << std::endl;
			return false;
		}
	}
}

// Implementation of display_movies_list
void Movies::display_movies_list() const {
	if (movies_list.size() == 0) {
		std::cout << "Sorry there are no movies in the list to display." << std::endl;
	}
	else {
		std::cout << std::endl;
		for (const Movie& movie : movies_list) {
			movie.display_movie_details();
		}
		std::cout << std::endl;
	}
}

