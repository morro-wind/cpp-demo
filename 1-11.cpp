#include <iostream>
using namespace std;
struct Rectangle {
    float length, width;
};

void InitRectangle(Rectangle& r, float len, float wid);
float Circumference(Rectangle& r);
float Area(Rectangle& r);

int main(void) {
    float x, y;
    float p, s;
    Rectangle a;
    cout << "plase input long and width" << endl;
    cin>>x>>y;
    InitRectangle(a,x,y);
    p=Circumference(a);
    s=Area(a);
    cout<<endl;
    cout<<"width:"<<p<<endl;
    cout<<"long:"<<s<<endl;
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
