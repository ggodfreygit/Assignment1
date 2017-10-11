/* 
 * File:   CrazyRandomSword.h
 * Author: Gage Godfrey
 *
 * 
 */

#include <string>
#include <stdlib.h>
#include <time.h>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("CrazyRandomSword", (rand() % 90 + 10)) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

