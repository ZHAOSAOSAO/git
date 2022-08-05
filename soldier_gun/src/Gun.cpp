#include "Gun.h"
#include <iostream> 


void Gun::addBullet(int bullet_num) {
    this->_bullet_count += bullet_num; 
}

bool Gun::shoot(){
    if (this->_bullet_count <= 0)
    {
        std::cout << "子弹没了" << std::endl;
        return false;
    }

    this->_bullet_count -= 1;
    std::cout << "发射+1" << std::endl; 
    return true;
}