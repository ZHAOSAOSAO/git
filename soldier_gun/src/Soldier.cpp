#include "Soldier.h"

Soldier::Soldier(std::string name) {
    this->_name = name;
    this->_ptr_gun = nullptr;
}

void Soldier::addBulletToGun(int num) {
    this->_ptr_gun->addBullet(num);
}

void Soldier::addGun(std::unique_ptr<Gun> &ptr_gun) {
    this->_ptr_gun = std::move(ptr_gun);
}

bool Soldier::fire(){
    this->_ptr_gun->shoot();
}