/* 
 * File:   PaperKatana.cpp
 * Author: Gage Godfrey
 * 
 * 
 */

#include "PaperKatana.h"

double PaperKatana::hit(double armor) {
	int damage = hitPoints - (armor*armor);
	if(damage < 0)
		return 0;
	else
    return damage;
}
