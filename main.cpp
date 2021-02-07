/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#define HIGH        1;

const int Z1 = 1;
const int Z2 = 2;
const int Z3 = 3;
const int Z4 = 4;
const int Z5 = 5;
const int Z6 = 6;
const int Z7 = 7;
const int Z8 = 8;
const int Z9 = 9;
const int Z10 = 10;
const int Z11 = 11;
const int Z12 = 12;
const int Z13 = 13;
const int Z14 = 14;
const int Z15 = 15;
const int Z16 = 16;
const int Z17 = 17;
const int Z18 = 18;
const int Z19 = 19;
const int Z20 = 20;

int Current_Case = 1;

const int Maximal_Spalte = 3;
const int Maximal_Reihe = 3;

const int Num_Cases = 3;

void Zeros1D(int Num_Cases, int Matriz[]);
void Zeros2D(int Spalte, int Reihe, int Matriz[Maximal_Spalte][Maximal_Reihe]);
void Setting_Inputs(int Counter_Intern, int *Input_A, int *Input_B, int *Input_C, int *Input_D, int *Not_Input_A, int *Not_Input_B, int *Not_Input_C, int *Not_Input_D);

void Setting_Cases(int Num_Cases, int Cases[]);

int main()
{
    int Cases[Num_Cases];
    Zeros1D(Num_Cases, Cases);
    Setting_Cases(Num_Cases, Cases);
    
    int Num_Correct_Cases[Num_Cases];
    Zeros1D(Num_Cases, Num_Correct_Cases);
    
    int Matriz_Completa[Maximal_Spalte][Maximal_Reihe];
    
    
    int Input_A;
    int Input_B;
    int Input_C;
    int Input_D;
    int Not_Input_A;
    int Not_Input_B;
    int Not_Input_C;
    int Not_Input_D;
    
    Input_A = 0;
    Input_B = 0;
    Input_C = 0;
    Input_D = 0;
    Not_Input_A = 0;
    Not_Input_B = 0;
    Not_Input_C = 0;
    Not_Input_D = 0;
    
    int Counter_Extern;
    
    Zeros2D(Maximal_Spalte, Maximal_Reihe, Matriz_Completa);
    int External_External_Count = 0;
    int Extra_Count_Z1 = 0;
    int Extra_Count_Z2 = 0;
    int Extra_Count_Z3 = 0;
    int Counter_Interno = 0;

    while(External_External_Count < Num_Cases )
    {

        switch (Current_Case)
        {
            
            case 1:
            Counter_Interno = 0;
            
            for(int Counter_Intern = 0; Counter_Intern < Maximal_Reihe; Counter_Intern++)
            {
                Counter_Extern = 0;
                
                
                Setting_Inputs(Counter_Intern, &Input_A, &Input_B, &Input_C, &Input_D, &Not_Input_A, &Not_Input_B, &Not_Input_C, &Not_Input_D);
                Extra_Count_Z1++;
                
                if((Input_A || Input_B) && Input_C)
                {
                    Matriz_Completa[Counter_Extern][Counter_Intern] = 1;
                    Num_Correct_Cases[0] = Num_Correct_Cases[0] +1;  
                }
                else
                {
                    Matriz_Completa[Counter_Extern][Counter_Intern] = 0;
                }
                Counter_Interno++;
            }
            Current_Case = Z2;
            break;
            
            case 2: 
            Counter_Interno = 0;
            
            for(int Counter_Intern = 0; Counter_Intern < Maximal_Reihe; Counter_Intern ++)
            {
                Counter_Extern = 1;
                
                Setting_Inputs(Counter_Intern, &Input_A, &Input_B, &Input_C, &Input_D, &Not_Input_A, &Not_Input_B, &Not_Input_C, &Not_Input_D);
                Extra_Count_Z2++;
                
                if((Input_A || Input_C) && Input_D)
                {
                    Matriz_Completa[Counter_Extern][Counter_Intern] = 1;
                    Num_Correct_Cases[1] = Num_Correct_Cases[1] +1; 
                }
                else
                {
                    
                }
                Counter_Interno++;
            }
            Current_Case = Z3;
            break;
            
            case 3: 
            Counter_Interno = 0;
            
            for(int Counter_Intern = 0; Counter_Intern < Maximal_Reihe; Counter_Intern++)
            {
                Counter_Extern = 2;
                
                Setting_Inputs(Counter_Intern, &Input_A, &Input_B, &Input_C, &Input_D, &Not_Input_A, &Not_Input_B, &Not_Input_C, &Not_Input_D);
                Extra_Count_Z3++;
                
                if((Input_A || Input_B) || Input_D)
                {
                    Matriz_Completa[Counter_Extern][Counter_Intern] = 1;
                    Num_Correct_Cases[2] = Num_Correct_Cases[2] +1; 
                }
                else
                {
                    Matriz_Completa[Counter_Extern][Counter_Intern] = 0;
                }
                Counter_Interno++;
            }
            break;
            
        }
        External_External_Count++;
    }
    
    //Printing Matrix
    cout << "CaseNumber   Condition1   Condition2   Condition3"<< endl; 
   if (External_External_Count == Num_Cases )
        {
            for (int i = 0; i < Maximal_Spalte; i++ )
            {
                cout << "Case " << i+1 << "           ";
                for (int j = 0; j < Maximal_Reihe; j++ )
                {
                    cout << Matriz_Completa[i][j];
                }
                cout << endl;
            }
            cout <<endl;
        }
    
    for (int i = 0; i< Num_Cases; i++)
    {
        cout << "Case "<<Cases[i] << ": has "<<Num_Correct_Cases[i] <<" Correct Answers"<<endl;
        
    }
    return 0;
}

void Zeros2D(int Spalte, int Reihe, int Matriz[Maximal_Spalte][Maximal_Reihe])
{
    for (int Count_Extern = 0; Count_Extern < Spalte; Count_Extern++ )
    {
        for (int Count_Intern = 0; Count_Intern < Reihe; Count_Intern++ )
        {
            Matriz[Count_Extern][Count_Intern] = 0;
        }
        
    }
        
}

void Setting_Inputs(int Boolean_Case, int *Input_A, int *Input_B, int *Input_C, int *Input_D, int *Not_Input_A, int *Not_Input_B, int *Not_Input_C, int *Not_Input_D)
{
    *Input_A = 0;
    *Input_B = 0;
    *Input_C = 0;
    *Input_D = 0;
    *Not_Input_A = 0;
    *Not_Input_B = 0;
    *Not_Input_D = 0;
    *Not_Input_C = 0;
    
    
        switch(Boolean_Case)
        {
        case 0:
            *Input_A = 1;
            *Input_B = 1;
            *Input_C = 1;
        break;
        
        case 1:
        
            *Input_A = 1;
            *Input_D = 1;
            *Input_C = 1;
        break;
        
        case 2:
            
            *Not_Input_A = 1;
            *Not_Input_D = 1;
            *Not_Input_C = 1;
        
        break;
    }
}
void Setting_Cases(int Num_Cases, int Cases[])
{
    for (int i = 0; i < Num_Cases; i++)
    {
        Cases[i] = i+1;
    }
}
void Zeros1D(int Num_Cases, int Matriz[])
{
    for (int i = 0; i< Num_Cases; i++)
    {
        Matriz[i] = 0; 
    }
}
