// ? ASSIGNMENT 2

// SECJ1013 Programming Technique I

// Section: 9
// Member 1's Name: _____________ 
// Member 2's Name: _____________ 

// Log the time(s) your pair programming sessions
//  Date         Time (From)   To             Duration (in minutes)
//  _________    ___________   ___________    ________
//  _________    ___________   ___________    ________

// Video link:
//   _________


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

string getInputFile(){
    string name;
    cout << "Please enter the file name: ";
    cin >> name;
    return name;
}

string grade(double a){
    string b;
    if(90 <= a <= 100){
        b = 'A+';
    }else if(80 <= a <= 89){
        b = 'A';
    }else if(75 <= a <= 79){
        b = 'A-';
    }else if(70 <= a <= 74){
        b = 'B+';
    }else if(65 <= a <= 69){
        b = 'B';  
    }else if(60 <= a <= 64){
        b = 'B-';  
    }else if(55 <= a <= 59){
        b = 'C+'; 
    }else if(50 <= a <= 54){
        b = 'C'; 
    }else if(45 <= a <= 49){
        b = 'C-';
    }else if(40 <= a <= 44){
        b = 'D+';
    }else if(35 <= a <= 39){
        b = 'D';
    }else if(30 <= a <= 34){
        b = 'D-';
    }else{
        b = 'E'; 
    }
    return b;
}

int main()
{
    char ave_grade;
    double exammark, courseworkmark, totalmark, ave_exam, ave_course, ave_total, total_course, total_exam, total;
    int i = 1, Total_Student;
    string a, filename, course_code, course_name, matricno;
    ifstream file1("oop.txt");
    ifstream file2("pt1.txt");

    while(i){
        filename = getInputFile();
        fstream file1(filename);
        fstream file2(filename);
        i = 0;
        if(file1.fail() || file2.fail()){
            cout << "Sorry! Unable to open the file. Please try again." << endl;
            i = 1;
        }
    }

    if(filename == "oop.txt"){
        file1 >> course_code;
        getline(file1, course_name);
        file1 >> Total_Student;
        cout << "Performance for Report " << course_code << " - " << course_name << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "No" << setw(15) << "Student Matric No." << setw(10) << "Exam Mark" << setw(10) << "Total Mark" 
            << setw(10) << "Grade" << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        for(i; i < Total_Student; i++){
            file1 >> matricno >> courseworkmark >> exammark ;
            totalmark = exammark + courseworkmark;
            total_course += courseworkmark;
            total_exam += exammark;
            total += totalmark;
            grade(totalmark);
            cout << left << setw(5) << i << setw(15) << matricno << setw(20) << courseworkmark << setw(10) << exammark << setw(10)
                << totalmark << grade << endl;
        }
        ave_course = total_course / Total_Student;
        ave_exam = total_exam / Total_Student;
        ave_total = total / Total_Student;
        ave_grade = grade(ave_total);
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "Class Average" << fixed << setprecision(2) << ave_course << setw(5) << ave_exam << setw(5) << ave_total
            << setw(5) << ave_grade;
    }else{
        file2 >> course_code;
        getline(file2, course_name);
        file2 >> Total_Student;
        cout << "Performance for Report " << course_code << " - " << course_name << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "No" << setw(15) << "Student Matric No." << setw(10) << "Exam Mark" << setw(10) << "Total Mark" 
            << setw(10) << "Grade" << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        for(i; i < Total_Student; i++){
            file1 >> matricno >> courseworkmark >> exammark ;
            totalmark = exammark + courseworkmark;
            total_course += courseworkmark;
            total_exam += exammark;
            total += totalmark;
            grade(totalmark);
            cout << left << i << setw(15) << matricno << setw(20) << courseworkmark << setw(10) << exammark << setw(10)
                << totalmark << grade << endl;
        }
        ave_course = total_course / Total_Student;
        ave_exam = total_exam / Total_Student;
        ave_total = total / Total_Student;
        ave_grade = grade(ave_total);
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "Class Average" << fixed << setprecision(2) << ave_course << setw(5) << ave_exam << setw(5) << ave_total
            << setw(5) << ave_grade;
    }
    
    file1.close();
    file2.close();
    cout << endl
         << endl;
    system("pause");
    return 0;
}