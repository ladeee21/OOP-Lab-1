#pragma once
//interface

//declaring functions
struct Location {
	double latitude, longitude;
};

void swap(Location* Loc1, Location* Loc2);
void swap(Location& Loc1, Location& Loc2);

