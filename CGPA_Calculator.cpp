#include<iostream>
#include<stdlib.h>
using namespace std;
void CalculateCGPA();
void method();

int main()
{
    system("cls");
    int input;
    cout<<"------------------------------------------------"<<endl;
    cout<<"                CGPA Calculator                 "<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout <<"                   MENU:" <<endl;
    cout<<"                          1.  Calculate CGPA(Cummulative Grade Point Average)"<<endl;
    cout<<"                          2.  Method applied to find CGPA "<<endl;
    cout<<"                          3. Exit Application"<<endl;
    sub:
    cin>>input;
    switch(input)
    {
        case 1:
                CalculateCGPA();
                break;
        case 2:
                method();
                break;
        case 3:
                exit(EXIT_SUCCESS);
                break;
        default:
                cout<<"Wrong Input. Try Again! \n"<<endl;
                goto sub;
                break;

    }
}


void CalculateCGPA()
{
    system("cls");
    int l;
    cout<<"...................Calculating CGPA...................\n \n"<<endl;
    cout<<"How many semester results do you want as input? :";
    cin >> l;
    cout << " \n\n" <<endl;

    float sems[100];
    int i;

    for(int i=0; i<l; i++) 
    {
        cout<< "Enter Semester " << i+1 << " Results(CGPA): ";
        cin >> sems[i];
        cout<<"\n"<<endl;
    }

    float semTotal = 0;
    for(int j=0; j<l; j++) 
    {
        semTotal = semTotal + sems[j];

    }

    cout<< " _____________Your CGPA is " << (semTotal/l/9.5) << "_____________"<<endl;


    sub:
    int inmenu;
    cout<<"\n\n 1.Calculate Again"<<endl;
    cout<<"2.Go Back to Main Menu"<<endl;
    cout<<"3.Exit this Application.\n\n" <<endl;
    cout<<"Your Input: "<<endl;
    cin>> inmenu;

    switch(inmenu)
    {
        case 1:
                CalculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);
        default:
                cout<<"\n\nYou have entered Wrong Input! Please Try Again: "<<endl;
                goto sub;
    }

}


void method()
{
    system("cls");
    cout<<"-----------------Method Of Calculation-----------------\n\n"<<endl;
    cout<<"     CGPA = (Sum of Percentage in each Semester / Number of semester) / 9.5 "<<endl;
    cout<<"-------------------------------------------------------\n\n"<<endl;
    sub:
    int inmenu;
    cout<<"1. Go Back to Main Menu"<< endl;
    cout<<"2. Exit This Application"<<endl;
    cout<<"Your Input: "<<endl;
    cin >> inmenu;

    switch(inmenu)
    {
        case 1:
                main();
                break;
        case 2:
                exit(EXIT_SUCCESS);
        defaut: 
                cout<<"\n\nYou Have Enter Wrong Input! Please Try Again.\n\n" <<endl;
                goto sub;
    }
}