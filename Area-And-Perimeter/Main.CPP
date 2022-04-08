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
    cout<<"Enter 1 To Perform operation on Rectangle shape"<<"\n";
    cout<<"Enter 2 To Perform operation on Square shape"<<"\n";
    cout<<"Enter 3  To Perform operation on Circle shape"<<"\n";
    
    cin>>No1;  //Accepting the Number of Operation User wants to perform

    switch (No1)
    {   
        
        case 1:
                int ino1;
                cout<<"Enter 1 To find Area of Rectangle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Rectangle"<<"\n";
                
                cin>>ino1;

                switch (ino1)
                {
                    case 1:
                            RectArea();  //Calling the Function from header file
                            abort();
                    break;

                    
                    case 2:
                        RectPerimeter();//Calling the Function from header file
                        abort(); 
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";                
                        abort();
                    break;
                
                }


        case 2:
                int ino2;            
                cout<<"Enter 1 To find Area of Square"<<"\n";
                cout<<"Enter 2 To find Perimeter of Square"<<"\n";

                cin>>ino2;

                switch (ino2)
                {
                    case 1:
                            SquareArea(); //Calling the Function from header file
                            abort();
                    break;


                    case 2:
                        SquarePerimeter(); //Calling the Function from header file
                        abort(); 
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                    break;
                    abort();
                }


        case 3:
                int ino3;  
                cout<<"Enter 1 To find Area of Circle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Circle"<<"\n";
            
                cin>>ino3;

                switch (ino3)
                {
                    case 1 :
                            CircleArea();  //Calling the Function from header file
                            abort();
                    break;
                    
                    
                    case 2 :
                        CirclePerimeter(); //Calling the Function from header file
                        abort();  
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    break;
                }

        default: //Default Statement
            cout<<"!!!!!! invalid choice  !!!!!!"<<"\n";
            abort();
        break;
    }
    
   return 0;
}
