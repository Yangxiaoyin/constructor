#include<iostream>
#include<vector>
#include<string>

struct Vertex
{
    float x,y,z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x<<", "<<vertex.y<<", "<<vertex.z;
    return stream;

};

int main()
{
    std::vector<Vertex> vertices;
    Vertex v={1,2,3};
    vertices.push_back(v);
    Vertex v2={4,5,6};
    vertices.push_back(v2);
    //vertices.push_back({1,2,3});
    

    // vertices.push_back(Vertex{1,2,3});
    // vertices.push_back(Vertex{4,5,6});

    // std::vector<int> trial;
    // trial.push_back(2);

    for (int i = 0;i < vertices.size(); i++)
        std::cout<<vertices[i] <<std::endl;
    for(Vertex& v : vertices)
        std::cout << v << std::endl;
    std::cin.get();

}


