#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie {
private:
	std::string movie_name;
	std::string movie_rating;
	int watch_count;
public:
	// Constructor
	Movie(std::string movie_name, std::string movie_rating, int watch_count);
	
	// Copy constructor
	Movie(const Movie& source);
	
	// Destructor
	~Movie();

	// Set movie name
	void set_movie_name(std::string movie_name);
	//Get movie name
	std::string get_movie_name() const;

	// Set movie rating
	void set_movie_rating(std::string movie_rating);
	// Get movie rating
	std::string get_movie_rating() const;

	// Set watch count
	void set_watch_count(int watch_count);
	// Get watch count
	int get_watch_count() const;

	// Method to increment watch count
	void increment_watch_count();

	// Method to display movie details
	void display_movie_details() const;

};

#endif // _MOVIE_H_

