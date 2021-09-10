#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;
/*
Student data should be stored in a struct variable of type studentType, which has four components: 
studentFName and studentLName of type string, testScore of type int (testScore is between 0 and 100), 
and grade of type char.  Suppose that the class has 20 students. 
Use an studentsay of 20 components of type studentType.
*/ 



struct studentType{ 

string studentFName;
string studentLName;
int testScore; 
char grade; 

};


/*
Your program must contain at least the following functions:

a.  A function to read the students’ data into the studentsay.

b.  A function to assign the relevant grade to each student.

c.  A function to find the highest test score.

d.  A function to print the names of the students having the highest test score.
*/ 

void setData(studentType students[]){

     
        for(int i = 0; i < 5 ; i++)
        {   cout<<"enter first name: ";
            cin>>students[i].studentFName; 
            cout<<"enter last name: ";
            cin >> students[i].studentLName; 
            cout<<"enter test score: ";
            cin >> students[i].testScore ; 

        }

}


void setGrades(studentType students[]){
 for (int i = 0; i<5; i++)

     {
           int score = students[i].testScore;
           if (score >= 90)

           {
                students[i].grade = 'A';
           }

           else if (score >= 80)
           {
                students[i].grade = 'B';
           }

           else if (score >= 70)
           {
                students[i].grade = 'C';
           }

           else if (score >= 60)
           {
                students[i].grade = 'D';
           }

           else

           {
                students[i].grade = 'F';

           }

     }

}



int highScore(studentType students[]){

    int high = -1; 
// stores largest number to high[0]
    for(int i = 0;i < 5; ++i)
    {
       if( high < students[i].testScore)
         high = students[i].testScore;
    }
     return high;
}

void printHighest(studentType students[], int highest){

cout << left <<"Student(s) with highest score: " << endl; 
for(int i = 0;i < 5; ++i)
    {
       if(students[i].testScore == highest){
           
           cout<<students[i].studentFName << ", "<<students[i].studentLName <<endl;
           }
    }
    
}

void printData(studentType students[]){

     cout << left << setw(30) << "Student Names" << setw(10) << "Test Score" << setw(4)<< "  Grade" <<endl;

     for (int i = 0; i < 5; i++) 
     {

           cout << left << setw(30) << students[i].studentLName + ", " + students[i].studentFName;

           cout << right << setw(7) << students[i].testScore;

           cout << right << setw(7) << students[i].grade;

           cout << endl;

     }
}


int main(){

 studentType students[5];
 setData(students); 
 setGrades(students); 
 printData(students); 
 int highest = highScore(students);
 printHighest(students,highest); 
    
}
