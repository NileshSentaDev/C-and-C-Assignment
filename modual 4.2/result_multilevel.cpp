/*
Assume that the test results of a batch of students are stored in three different classes.
Class Students are storing the roll number.
Class Test stores the marks obtained in two subjects and
class result contains the total marks obtained in the test.
The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)  */

#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_roll_num()
    {
        cout << "\n Enter student roll number : ";
        cin >> roll_number;
    }
};
class test : public student
{
protected:
    int state, account;

public:
    void marks()
    {
        cout << "\n Enter state marks : ";
        cin >> state;
        cout << "\n Enter account marks : ";
        cin >> account;
    }
};
class result : public test
{
private:
    int total_mark;

public:
    void total_marks()
    {
        total_mark = state + account;
    }

    void detail()
    {
        cout << "\n______Student Detail_____";
        cout << "\n";
        cout << "\n Roll number of student : " << roll_number;
        cout << "\n State marks : " << state;
        cout << "\n Account marks : " << account;
        cout << "\n________________________";
        cout << "\n Total marks of two subject : " << total_mark;
    }
};
int main()
{
    result r;
    r.get_roll_num();
    r.marks();
    r.total_marks();
    r.detail();
}