#pragma once
#include "Movie.h"
#include <vector>

class Movies {
private:
	std::vector<movie>movies;

public:
	Movies();

	~Movies();

	bool add_movie(std::string name, std::string rating, int watched);

	bool incremet_watched(std::string name);

	void display()const;


};