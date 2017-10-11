/* 
 * File:   SimpleAxe.cpp
 * Author: Gage Godfrey
 * 
 * 
 */

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
    if(armor > 0 && armor < 20)
	{
		return hitPoints;
	}
	else
		return hitPoints-armor;
}
