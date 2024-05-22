#include <iostream>
#include "header.h"
using namespace std;



//Using pointers

void swap(Location* Loc1, Location* Loc2)
{
	Location temp = *Loc1;
	*Loc1 = *Loc2;
	*Loc2 = temp;

}

//Using references

void swap(Location& Loc1, Location& Loc2)
{
	Location temp = Loc1;
	Loc1 = Loc2;
	Loc2 = temp;
}


