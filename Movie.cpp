#include "Movie.h"
#include <iostream>
#include <string>
using namespace std;

void movie::set_watched_nums(int nums) {
	watched_nums = nums;
}

int movie::get_wtahced_nums() const {
	return watched_nums;
}

std::string movie::get_rating() const {
	return rating;
}

void movie::set_rating(std::string rating) {
	this->rating = rating;
}

std::string movie::get_name() const {
	return name;
}

void movie::set_name(std::string n) {
	name = n;
}


movie::movie(std::string name, std::string rating, int watched_nums) {
	this->name = name;
	this->rating = rating;
	this->watched_nums = watched_nums;
}

//copy consturctor
//movie::movie(std::string name, std::string rating, int watched) 
//:name(name), rating(rating), watched_nums(watched){
//}

//move constructor
movie::movie(movie&& value) {

}

//display
void movie::display()const {
	movie temp;
	std::cout << "Name: " << temp.get_name() << "rating: " << temp.get_rating() << " " << watched_nums << "times watched";
}