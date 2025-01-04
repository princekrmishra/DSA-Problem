#include<iostream>
using namespace std;

float area(float radius){
    float areaofC = 3.12 * radius * radius;
    return areaofC;
}

int area(int length, int breadth){
    int areaofR = length * breadth;
    return areaofR;
}

float area(double base, double height){
    float areaT = (base * height)/2;
    return areaT;
}
int main() {
    int length, breadth, radius, base, height;

    cout<<"Enter Length: "<<endl;
    cin>>length;
    cout<<"Enter Breadth: "<<endl;
    cin>>breadth;
    cout<<"Enter Radius: "<<endl;
    cin>>radius;
    cout<<"Enter Base: "<<endl;
    cin>>base;
    cout<<"Enter Height: "<<endl;
    cin>>height;

    float areaCircle = area(radius);
    cout<<"Area of Circle: "<<areaCircle<<endl;
    int areaRectangle = area(length, breadth);
    cout<<"Area of Rectangle: "<<areaRectangle<<endl;
    float areaTriangle = area(static_cast<double>(base), static_cast<double>(height));
    cout<<"Area of Triangle: "<<areaTriangle<<endl;
    return 0;
}