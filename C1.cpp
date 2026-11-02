#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
public:
    // Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Student object created" << endl;
    }

    // Member function
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Student object destroyed" << endl;
    }
};

int main()
{
    int roll;
    string name;

    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter Name: ";
    cin >> name;

    cout << endl;
    Student s1(roll, name);
    s1.display();
    return 0;
}

/*
Sample Output:

Enter Roll Number: 101
Enter Name: Arun

Student object created
Roll Number: 101
Name: Arun
Student object destroyed
*/
