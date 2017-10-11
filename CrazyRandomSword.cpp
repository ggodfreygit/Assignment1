/* 
 * File:   CrazyRandomSword.cpp
 * Author: Gage Godfrey
 * 
 * 
 */

#include "CrazyRandomSword.h"
#include <stdlib.h>
#include <time.h>

double CrazyRandomSword::hit(double armor) {
	int damage = hitPoints;
	srand(time(NULL)%rand()); //new seed = new random number
	int ignore = rand() % ((int)armor/2);
	if(damage-ignore < 0)
		return 0;
	else
		return damage-ignore;
}
