#ifndef Hero_h
#define Hero_h
#include <string>


class Hero{
private:
    const std::string name;
    int hp;
    const int dmg;
    
public:
    //Ctor, Dtor
    Hero(const std::string&, int, const int);
    //Karakter Alapadatok, Get-Set - Név, HP, DMG
    const std::string& getName() const;
    int getHP() const;
    int getDmg() const;
    bool isDead();
    void damaging(Hero *enemy);
    
};

#endif /* Hero_h */
