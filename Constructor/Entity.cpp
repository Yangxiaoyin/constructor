#include<iostream>

class Entity{
    public:
      float X,Y;
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
void Function(){
    Entity e;
    e.print();
}

int main(){
   
    Function();
    std::cin.get();
    
}