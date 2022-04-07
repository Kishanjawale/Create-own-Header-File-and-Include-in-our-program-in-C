#include<stdio.h>
#include"Percentage.H"      //User Defined Header File 




//////////////////////////////////////////////////////////////////////////
//@Author:Kishan Jawale
//Date: 05/04/2022
//Description:This Applicatio is  used to Demonstrate the concept of 
//Creating user Defined Header file and  Using it in  our program to get expected output
///////////////////////////////////////////////////////////////////////////


int main()  //Entry Point Function
{
    //Varible Declarations
    float fChem=0.0;
    float fEng=0.0;
    float fMath=0.0;
    float fBio=0.0;
    float fTotalMarks=0.0;
    float fpercentage=0.0;

    //Accept The Marks of Student
    printf("Enter the Marks of Chememistry\n");
    scanf("%f",&fChem);

    printf("Enter the Marks of English\n");
    scanf("%f",&fEng);

    printf("Enter the Marks of Biology\n");
    scanf("%f",&fBio);

    printf("Enter the Marks of Mathematics\n");
    scanf("%f",&fMath);

    
    //Calculating total  of Marks and Displaying Total Marks
    fTotalMarks = fBio+fChem+fMath+fEng;       
    printf("Total Marks of All Subject:%f\n",fTotalMarks);

    fpercentage = CalculatePer(fTotalMarks);  //Calling Function CalculatePer

    printf("Total Percentage=%f\n",fpercentage); 
    
    CheckGrade(fpercentage);        //Calling Function CheckGrade
    
    return 0; 
}