#include<iostream>
using namespace std;
float AreaRectangle(float Length,float Width)
{
    float AreaRect=0;
    AreaRect=Length*Width;
    
    return AreaRect; 

}

float AreaSquare(float Side)
{
    float AreaSqa=0;
    AreaSqa=Side*Side;

    return AreaSqa; 
}

float AreaCircle(float Radius)
{
    float AreaCircle=0;
    float PI=3.14;
    AreaCircle=PI*(Radius*Radius);

    return AreaCircle; 
}


float SquareArea()
{
    float fSide=0;
    float fArea=0;
    cout<<"Enter Side of Square"<<"\n";
    cin>>fSide;
    fArea=AreaSquare(fSide);    //Calling Function AreaSquare()
    cout<<"Area of Square="<<fArea<<"\n";
}


float RectArea()
{
    float fLenghth=0;
    float fWidth=0;
    float fArea=0;
    cout<<"Enter Length of Rectangle"<<"\n";
    cin>>fLenghth;
    cout<<"Enter Width of Rectangle"<<"\n";
    cin>>fWidth;
    fArea=AreaRectangle(fLenghth,fWidth);   //Calling Function AreaRectangle()
    cout<<"Area of Rectangele="<<fArea<<"\n";
}
    

float CircleArea()
{
    float fRadius=0;
    float fArea=0;
    cout<<"Enter Radius of Circle"<<"\n";
    cin>>fRadius;
    fArea=AreaCircle(fRadius);  //Calling Function AreaCircle()
    cout<<"Area of Circle="<<fArea<<"\n";
}
