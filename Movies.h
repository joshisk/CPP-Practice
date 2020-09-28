#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies {
private:
	std::vector<Movie> movies_list;
public:
	// Constructor
	Movies();

	// Destructor
	~Movies();

	// Method to add a movie
	bool add_movie(std::string movie_name, std::string movie_rating, int watch_count);

	// Method to increment watch count
	bool increment_watch_count(std::string movie_name);

	// Method to display movies list
	void display_movies_list() const;
};

#endif // _MOVIES_H_