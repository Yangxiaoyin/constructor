#include<iostream>
#include<string>

class Entity
{

private:
    int X,Y; // only* entity  a friend would have access to private data
    void print(){}; // private members cannot be accessed from outside the class, protected
    // members cannot be accessed from outside class, however they can be accessed in inherited classes
public:
    Entity()
    {
        X =0;
        print();

    }
};

class Player:public Entity
{



};

int main()
{
    Entity e;
    //e.print();//
}


