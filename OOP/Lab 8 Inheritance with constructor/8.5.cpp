//lab 8.5
#include <iostream>
using namespace std;

class College
{
  public:
  	string name, location;
    void getCollegeDetail()
    {
        cout << "College Name: ";
        cin>>name;
        cout << "College Location: ";
        cin>>location;
    }
    virtual void displayC(){
    	cout<<"Collge Name: "<<name;
    	cout<<"\tCollege Location: "<<location;
	}
};

class Student : public College
{
  public:
    string studentName,stream;

	void studentDetail()
    {
        cout << "Student Name: ";
        cin>>studentName;
        cout << "Student Course: ";
        cin>>stream;
    }
    void display()
    {
        cout << "Student Name: " << studentName;
        cout << "\tStudent Stream: " << stream << endl;
    }

    
};

int main()
{
    Student s;
    College *ptr;
    ptr = &s;
    s.studentDetail();
    ptr->getCollegeDetail();
    s.display();
    ptr->displayC();
    return 0;
}

