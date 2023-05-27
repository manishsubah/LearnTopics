#include<iostream>
using std::string;
using std::cout;
using std::endl;

struct HindiTest {
    string testName;
    string date;
    int studentCount;
};
struct EnglishTest {
    string testName;
    string date;
    int studentCount;
};
struct ScienceTest {
    string testName;
    string date;
    int studentCount;
};

int main() {
    HindiTest hindiTest; //hindi
    hindiTest.testName = "Hindi Quarterly Exam";
    hindiTest.date = "May 10, 2023";
    hindiTest.studentCount = 30;
    EnglishTest englishTest; //english
    englishTest.testName = "English Midterm Exam";
    englishTest.date = "May 12, 2023";
    englishTest.studentCount = 35;
    ScienceTest scienceTest; //science
    scienceTest.testName = "Science Final Exam";
    scienceTest.date = "May 15, 2023";
    scienceTest.studentCount = 32;

    cout<<"Hindi Test Details:-";
    cout<<"Test Name: "<<hindiTest.testName<<endl;
    cout<<"Date: "<<hindiTest.date<<endl;
    cout<<"Total Student: "<<hindiTest.studentCount<<endl;
    cout<<"English Test Details:-";
    cout<<"Test Name: "<<englishTest.testName<<endl;
    cout<<"Date: "<<englishTest.date<<endl;
    cout<<"Total Student: "<<englishTest.studentCount<<endl;
    cout<<"Science Test Details:-";
    cout<<"Test Name: "<<scienceTest.testName<<endl;
    cout<<"Date: "<<scienceTest.date<<endl;
    cout<<"Total Student: "<<scienceTest.studentCount<<endl;

    return 0;
}
