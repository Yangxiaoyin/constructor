#include<iostream>
#include<string>

class Printable
{
    virtual std::string GetName2()=0; //force to have a implementation

};

class Entity
{
    public:
       virtual std::string GetName(){return "entity";} //store a vTable to dispatch the relation
       std::string GetName2(){return "Entity";} //force to have a implementation
};

class Player: public Entity
{
    private:
      std::string m_name;
    public:
      Player(const std::string& name):m_name(name){}
      std::string GetName() override {return m_name;}
      std::string GetName2()  {return m_name;}
};

int main(){
    Entity *e=new Entity();
    std::cout<<e->GetName()<<std::endl;
    Player *p = new Player("cherno2");
    std::cout<<p->GetName2()<<std::endl;
    //std::cout<<"Hello world"<<std::endl;
    std::cin.get();
}
