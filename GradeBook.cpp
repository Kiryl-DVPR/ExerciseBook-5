#include <iostream>
#include  "GradeBook.h"

using namespace std;

GradeBook::GradeBook( string name )
{
    setCourseName( name );
    aCount = 0;
    bCount = 0;
    cCount = 0;
    dCount = 0;
    fCount = 0;
}

void GradeBook::setCourseName( string name)
{
    if ( name.length() <= 25 )
        courseName = name;
    else
    {
        courseName = name.substr( 0, 25 );
        cout << "Name\"" << name <<"\" exceeds maximum length (25). \n" << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName()
{
        return courseName;
}

void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}

void GradeBook::inputGrades()
{
    int grade;
    cout << "Enter the letter grades." << endl << "Enter the EOF character to end input." << endl;
    while( ( grade = cin.get() ) != EOF ) // EOF - ctr + z - означает конец файла
    {
        switch ( grade ) // В скобках вводимая буква
        {
            case 'A':  // Проверяет на равенство введённой буквы
            case 'a':
                aCount++; // Если совпадает, то + 1 к счётчику
                break; // Возвращает к началу цикла 

            case 'B':
            case 'b':
                bCount++;
                break;

            case 'C':
            case 'c':
                cCount++;
                break;

            case 'D':
            case 'd':
                dCount++;
                break;
            
            case 'F':
            case 'f':
                fCount++;
                break;

            case '\n': // новая строка
            case '\t': // табуляция
            case ' ':  // пробел
                break;

            default: //Если не найдётся ни одного совпадение с case, то исполняется default
                cout << "Incorrect letter grade entered." << "Enter a new grade." << endl;
            break;

        }
    }
}

void GradeBook::displayGradeReport()
{
    cout << "\n\nNumber of students who received each letter grade:"
        << "\nA: " << aCount
        << "\nB: " << bCount
        << "\nC: " << cCount
        << "\nD: " << dCount
        << "\nF: " << fCount
        << endl;

    sum = ( aCount*4 + bCount*3 + cCount*2 + dCount*1 + fCount*0 ) / (aCount + bCount + cCount + dCount + fCount);

    cout << endl  << "Average grade: " << fixed << setprecision(2) << sum;
}
