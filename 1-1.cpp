#include <iostream>
struct Rectangle {
    float length, width;
};

void InitRectangle(Rectangle& r, float len, float wid);
float Circumference(Rectangle& r);
float Area(Rectangle& r);

int main() {
    float x, y;
    float p, s;
    Rectangle a;
    std::cout << "plase input long and width" << std::endl;
    std::cin>>x>>y;
    InitRectangle(a,x,y);
    p=Circumference(a);
    s=Area(a);
    std::cout<<std::endl;
    std::cout<<"width:"<<p<<std::endl;
    std::cout<<"long:"<<s<<std::endl;
}

void InitRectangle(Rectangle& r, float len, float wid) {
    r.length=len;
    r.width=wid;
}

float Circumference(Rectangle& r) {
    return 2*(r.length+r.width);
}

float Area(Rectangle& r) {
    return r.length*r.width;
}
