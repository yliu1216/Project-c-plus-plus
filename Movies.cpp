#include "Movies.h"
#include "Movie.h"
#include <iostream>
#include <string>



bool Movies::add_movie(std::string name, std::string rating, int watched) {
	for (const movie &movie_1 : movies) {
		if (movie_1.get_name() == name) {
			printf("Movie already in the list");
			return false;
		}
		else {
			movie new_movie(name, rating, watched);
			movies.push_back(new_movie);
			return true;

		}
	}
}

bool Movies::incremet_watched(std::string name) {
	for (movie& movie_1 : movies) {
		if (movie_1.get_name() == name) {
			return true;
		}
	}
	return false;
}

void Movies::display()const {
	if (movies.size() == 0) {
		std::cout << "sorry, no movies to display/n"<<std::endl;
	}
	else {
		std::cout << "\n================================" << std::endl;

		for (auto movie : movies) {
			movie.display();
			std::cout << "\n==================================" << std::endl;
		}
	}
}