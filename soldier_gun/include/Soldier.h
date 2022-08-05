#ifndef SOLDIER_H
#define SOLDIER_H

#include <string>
#include <memory>
#include "Gun.h"
using namespace std;

class Soldier
{
private:
    std::string _name;
    std::unique_ptr<Gun> _ptr_gun;
public:
    Soldier(std::string name);
    void addBulletToGun(int num);
    void addGun(std::unique_ptr<Gun> &ptr_gun);
    bool fire();

};

#endif //SOLDIER_H
/*
unique_ptr独占管理对象，只有移动语义。
unique_ptr可以不占用对象，即为空。可以通过reset()或者赋值nullptr释放管理对象。
标准库早期版本中定了auto_ptr，它具有unique_ptr的部分特征，但不是全部。例如不能在容器中保存auto_ptr，不能从函数中返回auto_ptr等等，这也是unique_ptr主要的使用场景。
*/