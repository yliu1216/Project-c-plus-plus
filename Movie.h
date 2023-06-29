#pragma once
#include <string>
class movie {
public:
	//constructor
	movie();

	//constructor with 
	movie(std::string name, std::string rating, int watched_nums);

	//copy consturctor
	movie(const movie& value);

	//move constructor
	movie(movie&& value);

	void set_name(std::string n);

	std::string get_name() const;


	void set_rating(std::string rating);


	std::string get_rating() const;


	void set_watched_nums(int nums);


	int get_wtahced_nums() const;

	void display() const;

	~movie();

private:
	std::string name;
	std::string rating;
	int watched_nums = 0;



};