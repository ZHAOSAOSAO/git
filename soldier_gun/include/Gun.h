//#pragma once
#ifndef GUN_H
#define GUN_H

#include <string>

class Gun
{
private:
    std::string _type;
    int _bullet_count;
public:
    Gun(std::string type) {
        this->_bullet_count = 0;
        this->_type = type;
    };
    
    void addBullet(int bullet_num);
    bool shoot();
};

#endif