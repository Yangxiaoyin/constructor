#include<iostream>

class Entity{
    public:
      float X,Y;
      void Move(float xa,float ya){
        X+=xa;
        Y+=ya;
      }
      Entity(){
        std::cout<<"constructor called"<<std::endl;

      }
      Entity(float x, float y){
        X=x;
        Y=y;
      }

      ~Entity(){ 
        
            std::cout<<"destructor called"<<std::endl;
      };
      void print()
      {
        std::cout<<X <<" , "<<Y <<std::endl;
      }

};
class Player : public Entity //is-a relationship, polymorphism
{
  public:
  const char* Name;
  
  void PrintName(){
    std::cout<<Name<<std::endl;
  }

};

void Function(){
    Entity e;
    e.print();
}

int main(){
    Player player;
    player.Move(3,4);
    player.X=2;
    std::cout<<sizeof(Entity)<<std::endl;
    std::cout<<sizeof(Player)<<std::endl;
   
    //Function();
    std::cin.get();
    
}