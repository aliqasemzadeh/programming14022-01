// Use struct to get student and grades
#include <iostream>
using namespace std;
struct Grade
{
    int unit;
    float value;
};
struct Student
{
    int id;
    char name[10];
    Grade grades[2];
    void setName()
    {
        cin >> name;
    }
    void getName()
    {
        cout << "Name:" << name;
    }
    float calAvg()
    {
        float avg = 0;
        int sumUnits = 0;
        for (int i = 0; i < 2; i++) {
            sumUnits += grades[i].unit;
            avg += grades[i].unit * grades[i].value;
        }
        return avg / sumUnits;
    }
    float findMaxGrade()
    {
        float max = grades[0].value;
        for (int i = 0; i < 2; i++) {
            if (max < grades[i].value) {
                max = grades[i].value;
            }
        }
        return max;
    }
};

Student getStudent()
{
    Student student;
    cout << "ID Name:" << endl;
    cin >> student.id >> student.name;
    for (int i = 0; i < 2; i++) {
        cout << "Unit Value:[" << i << "]" << endl;
        cin >> student.grades[i].unit >> student.grades[i].value;
    }
    return student;
}

int main()
{
    int a;
    Student temp = getStudent();
    temp.getName();
    cout << endl;
    cout << "Avg:" << temp.calAvg();
    cout << endl;
    cout << "Max:" << temp.findMaxGrade();
    cin >> a;
    return 0;
}
