#include<iostream>
#include<string>

struct Vector2
{
    float x,y;
};

class String
{

private:
   char* m_Buffer;
   unsigned int m_size;
public :
   String(const char* string)
   {
    m_size=sizeof(string);
    m_Buffer= new char[m_size+1];
    memcpy(m_Buffer,string,m_size);
    m_Buffer[m_size]=0;

   };
   ~String()
   {
    delete[] m_Buffer;
   };
   friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;

};


int main()
{
    Vector2* a = new Vector2();
    Vector2* b = a; //change underlying thing it point to
    b->x =2;//will affect both a and b
    String string="cherno";
    std::cout<<string<<std::endl;
    return 0;
}