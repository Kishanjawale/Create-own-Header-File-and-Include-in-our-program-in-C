#include<stdio.h> //Predefined Header File By the Compilor

//////////////////////////////////////////////////////////////////////////
//Function Name : CalculatePer
//@Author:Kishan Jawale
//Date: 07/04/2022
//Description:This Function Takes fMarks as Arguments/Input And returns Percentage   
///////////////////////////////////////////////////////////////////////////
float CalculatePer(float fMarks)
{
    float percentage;
    percentage = ((fMarks/400)*100);
    return percentage;
}

/////////////////////////////////////////////////////////////////////////
//Function Name : CheckGrade
//@Author:Kishan Jawale
//Date: 05/04/2022
//Description:This Function Takes Percentage as Arguments/Input and Returns the grade Of student
///////////////////////////////////////////////////////////////////////////

 CheckGrade( float Per)
{
    if(Per>=40 && Per<60)
    {
        printf("Grade D\n");
    }
    else if (Per>=60 && Per<70)
    {
        printf("Grade C\n");
        
    }
    
    else if (Per>=70 && Per<80)
    {
        printf("Grade B\n");
           
    }
    
    else if (Per>=80 && Per<90)
    {
        printf("Grade A\n");

    }
    
    else if (Per>=90 && Per<=100)
    {
        
        printf("Grade A++\n");
    }

    else if(Per<40)
    {
        printf("TRY HARDER NEXT TIME\n YOU CAN DO IT\n");
            
    }
    else 
    {
        printf("Invalid Percentage \n");
    }
}
