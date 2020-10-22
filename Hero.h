/**
 * \class Hero
 *
 * \brief Hero class
 *
 * This class declares the Hero object, which has four parameters at the moment. The Hero has many functions and datas, including his/her healthpoint, damage, name, attackspeed. He can take a damage, or set to an automatized Battle with his/her target according to the attackspeed. The Hero class can also read from a JSON file.
 *
 * \author NullPointerException
 *
 * \version 1.0
 *
 * \date 2020/10/15 15:00
 *
 */

#ifndef Hero_h
#define Hero_h
#include <string>

//This is the class of the Heroes
class Hero{
private:
    const std::string name; ///< This is the name of the Hero
    int hp; ///< The health of the Hero, always changing during the fight
    const int dmg; ///< The amount of damage he can hits with
    const double attackspeed; ///< This is the attackspeed of the Hero

    /**
     * \brief Taking damage to a target Hero
     *
     * \param He waits for a Hero type enemy
     */
    void damaging(Hero *enemy); ///< This method can take a damage to another Hero if his/her Health is not zero
    
public:
    Hero(const std::string&, int, const int, const double); ///< This is the constructor. The constructor sets the parameters of the Hero

    const std::string& getName() const; ///< Const getter of the Hero's name
    int getHP() const; ///< Const getter of the Hero's health
    int getDmg() const; ///< Const getter of the Hero's damage
    double getAttackSpeed() const; ///< Const getter of the Hero's attackspeed
    
    /**
     * \brief This checks if the unit is dead or not
     *
     * \return If unit health point is zero or lower. If lower than zero, it sets to default zero. (returns with true or false)
     */
    bool isDead();
    
    /**
     * \brief This is an automatized Battle method. It takes damages to the target (with the damaging method) depending on the Hero's attackspeed.
     *
     * \param Target hero
     */
    void Battle(Hero*);
    
    /**
     * \brief Unit parsing from a JSON file.
     *
     * \param The string of the filename
     *
     * \return Returns with a Hero type, with Hero parameters.
     */
    static Hero parseUnit(const std::string& fileName);
    
};

#endif /* Hero_h */