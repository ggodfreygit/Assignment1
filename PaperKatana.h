/* 
 * File:   PaperKatana.h
 * Author: Gage Godfrey
 *
 * 
 */

#include <string>
#include "Weapon.h"

#ifndef PAPERKATANA_H
#define PAPERKATANA_H
/**
If the enemy is wearing no armor, the Paper Katana will do devastating damage! However, even a little armor goes a long way to protect you! (the effectiveness of armor is squared)
 */
class PaperKatana : public Weapon {
public:

    PaperKatana() : Weapon("Paper Katana", 500) {
    }
    virtual ~PaperKatana() {}; 
    virtual double hit(double armor);

};

#endif /* PAPERKATANA_H */

