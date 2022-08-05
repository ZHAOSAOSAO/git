#include "Soldier.h"
#include "Gun.h"

#include <memory>

using namespace std;

void test() {
    std::unique_ptr<Soldier> zss(new Soldier("zss"));
    std::unique_ptr<Gun> AK47(new Gun("AK47"));

    zss->addGun(AK47);
    zss->addBulletToGun(10);
    while(zss->fire()) {} 
    
}

int main(int argv, char **argc) {

    test();
    return 0;
}