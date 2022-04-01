#include "Myheaderfile.h"  //User Defined Header File 

//////////////////////////////////////////////////////////////////////////////////////
//User Defined Header File:"Myheaderfile.h"
//Description:This program Demonstrate how we can create our own header file and include in our prorgram in C
//@Author:Kishan Jawale
//Date: 01/04/2022
//IMPORTANT:
//      Both files should be in same folder.
//      when we include user defined header file its name should be in double codes " ". 
///////////////////////////////////////////////////////////////////////////////////////

int main()//Entry point Function
{ 
    
    //initializing variable to 0 to avoid garbage value
    int iNo1=0;
    int iNo2=0;
    
    int Addition=0;
    int Substraction=0;
    int Multiplication=0;
    int Division=0;

    printf("Enter First Number");
    scanf("%d",&iNo1);

    printf("Enter Second Number");
    scanf("%d",&iNo2);
    
    
    //Calling the function which is defined in header file
    Addition = Add(iNo1,iNo2);
    Substraction=Sub(iNo1,iNo2);
    Multiplication=Mul(iNo1,iNo2);
    Division=Div(iNo1,iNo2);    

    printf("Addition =%d\n",Addition);
    printf("Substraction =%d\n",Substraction);
    printf("Multiplication=%d\n",Multiplication);
    printf("Division=%d\n",Division);
    
    return 0;
}
