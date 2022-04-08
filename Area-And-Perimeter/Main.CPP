#include<iostream>

#include"Perimeter.h"//User-Defined Header File
#include"Area.h"    //User-Defined Header File

using namespace std;

//////////////////////////////////////////////////////////////////////////
//@Author:Kishan Jawale
//Date: 08/04/2022
//Description:
//In this application i have  used 2 user defined header files
//                   1.Perimeter.h(This file contain logic to find perimeter of shapes)
//                   2.Area.h(This file contain logic to find Area of shapes)   
//
// This Application Takes the input from user and perform Various 
//            Operations like:
//                    find Area of Rectangle
//                    find Area of Square
//                    find Area of Circle
//                    find Perimeter of Rectangle
//                    find Perimeter of Square
//                    find Perimeter of Circle
//
///////////////////////////////////////////////////////////////////////////



int main() //Entry point Function
{
    int No1=0;
    cout<<"Enter 1 To find Area of Rectangle"<<"\n";
    cout<<"Enter 2 To find Area of Square"<<"\n";
    cout<<"Enter 3 To find Area of Circle"<<"\n";
    cout<<"Enter 4 To find Perimeter of Rectangle"<<"\n";
    cout<<"Enter 5 To find Perimeter of Square"<<"\n";
    cout<<"Enter 6 To find Perimeter of Circle"<<"\n";
    
    cin>>No1;  //Accepting the Number of Operation User wants to perform

    switch (No1)
    {
        case 1:
            RectArea();     //Calling Function RectArea() 
        break;
            
        case 2:
            SquareArea();   //Calling Function SquareArea()
        break;

        case 3:
            CircleArea();//Calling Function CircleArea()
        break;

        case 4:
            RectPerimeter();//Calling Function RectPerimeter()
        break;
            
        case 5:
            SquarePerimeter();//Calling Function SquarePerimeter()
        break;

        case 6:
            CirclePerimeter();//Calling Function Circleperimeter()
        break;

        default: //Default Statement
        cout<<"You have entered invalid choice"<<"\n";
        break;
    }
   
   return 0;
}
