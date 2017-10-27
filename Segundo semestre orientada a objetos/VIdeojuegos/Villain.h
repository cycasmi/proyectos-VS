#pragma once

class Villain : public Character
{
protected:
    Villain(){}

public:
    Villain(string name, int strength) : Character(name, strength) { }
    
    virtual void attack()
    {
        cout << "Villain Attacking the hero" << endl;
    }
    
    void defense()
    {
        
    }
};