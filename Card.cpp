#include "Card.h"

int Card::counter=0;	

Card::Card()
{
	fugure = counter%13;
	colour = counter/13;

}

result Card::compare()
{

	return win;
}

result Card::description()
{
	static char colours[]= "KPTR"
	static char figure[]= "234567890JQKA"

	return string(1,colours[colour])+string(1,figures[figure]);

}