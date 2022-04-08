#include<iostream>
using namespace std;

float PeriRectangle(float Length,float Width)
{
    float PeriRect=0;
    PeriRect= 2*(Length+Width);
    
    return PeriRect; 
}

float PeriSquare(float Side)
{
    float PeriSqa=0;
    PeriSqa=(4*Side);

    return PeriSqa; 
}

float PeriCircle(float Radius)
{
    float PeriCircle=0;
    float PI=3.14;
    PeriCircle = (2*PI*Radius);
    return PeriCircle; 
}



float SquarePerimeter()
{
    float fSide=0;
    float fArea=0;
    cout<<"Enter Side of Square"<<"\n";
    cin>>fSide;
    fArea=PeriSquare(fSide);    //Calling Function PeriSquare()
    cout<<"Perimeter of Square="<<fArea<<"\n";
}


float RectPerimeter()
{
    float fLenghth=0;
    float fWidth=0;
    float fArea=0;
    cout<<"Enter Length of Rectangle"<<"\n";
    cin>>fLenghth;
    cout<<"Enter Width of Rectangle"<<"\n";
    cin>>fWidth;
    fArea=PeriRectangle(fLenghth,fWidth);   //Calling Function PeriRectangle()
    cout<<"Perimeter of Rectangele="<<fArea<<"\n";
}
    

float CirclePerimeter()
{
    float fRadius=0;
    float fArea=0;
    cout<<"Enter Radius of Circle"<<"\n";
    cin>>fRadius;
    fArea=PeriCircle(fRadius);  //Calling Function PeriCircle()
    cout<<"Perimeter of Circle="<<fArea<<"\n";
}


