#include "header.h"
//implementation


//function to swap two location structs using pointers
void swap(Location* Loc1, Location* Loc2)
{
	Location temp = *Loc1;
	*Loc1 = *Loc2;
	*Loc2 = temp;

}


//function to swap two location structs using reference
void swap(Location& Loc1, Location& Loc2)
{
	Location temp = Loc1;
	Loc1 = Loc2;
	Loc2 = temp;
}


