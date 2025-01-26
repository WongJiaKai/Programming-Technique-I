#include <iostream>
#include <iomanip> // For std::setw
using namespace std;

struct Person {
    string name;
    double score[4];
    double a;
};

int main(){
    double b;
    double weights[] = {0.15, 0.2, 0.3, 0.35};
    Person people[5] = {
        {"Aina Faris", {85.5, 90, 78.5}},
        {"Amirul Hakim", {88, 76.5, 92}},
        {"Siti Nur Aisyah", {91, 89.5, 85}},
        {"Muhammad Irfan", {77, 82.5, 79.5}},
        {"Nurul Izzati", {84, 87, 90.5}}
    };

    for(int i=0; i < 5; i++){
        cout << "Enter the Exam Mark for the student " << people[i].name << " => ";
        cin >> b;
        people[i].score[3] = b;
        cout << endl;
    }
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "No." << setw(5) << "Name" << setw(24) << "Exercise" << setw(17) << "Assignment" << setw(9) 
        << "Test" << setw(15) << "Exam" << setw(16) << "Total" << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    int x = 0;
    for(int i = 1; i <= 5; i++){
        while(x <= 4){
            double a = people[i-1].score[0];
            double b = people[i-1].score[1];
            double c = people[i-1].score[2];
            double d = people[i-1].score[3];
            people[i-1].a = (a*weights[0])+(b*weights[1])+(c*weights[2])+(d*weights[3]);
            cout << left << setw(4) << i << fixed << setprecision(2) << setw(20) << people[x].name << setw(15) 
                << a << setw(15) << b << setw(15) << c << setw(15) << d << setw(15) << people[i-1].a << endl;
            x++;
            break;
        }
    }
    
    system("pause");
    return 0;
}