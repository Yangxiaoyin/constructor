#include<iostream>
#include<string>

class Entity{
    public:
       virtual std::string GetName(){return "entity";}
};

class Player: public Entity{
    private:
      std::string m_name;
    public:
      Player(const std::string& name):m_name(name){}
      std::string GetName() override {return m_name;}
};

int main(){
    Entity *e=new Entity();
    std::cout<<e->GetName()<<std::endl;
    Player *p = new Player("cherno2");
    std::cout<<p->GetName()<<std::endl;
    //std::cout<<"Hello world"<<std::endl;
    std::cin.get();
}
