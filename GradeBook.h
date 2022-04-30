#include <string>
#include <iomanip>
using namespace std;

class GradeBook
{
    public:
        GradeBook( string );
        void setCourseName( string );
        string getCourseName();
        void displayMessage();
        void inputGrades();
        void displayGradeReport();
    private:
        string courseName;
        double aCount;
        double bCount;
        double cCount;
        double dCount;
        double fCount;
        double sum;
};