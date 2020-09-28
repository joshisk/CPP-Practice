#include<iostream>
#include "Movies.h"

using namespace std;

int main() {
	
	Movies movies;

	movies.display_movies_list();

	movies.add_movie("HARRY POTTER", "5", 100);
	movies.add_movie("LORD OF THE RINGS", "3", 1);
	movies.add_movie("GAME OF THRONES", "4", 2);

	movies.display_movies_list();

	movies.increment_watch_count("HARRY POTTER");

	movies.display_movies_list();

	movies.increment_watch_count("WIZARD OF OZ");

	return 0;
}