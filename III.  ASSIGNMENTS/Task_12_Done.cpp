#include<iostream>
#include<string>
using namespace std;

class Person{
	protected:
		string name;
		string gender;
	public:
        Person(string name = "", string gender = "") : name(name), gender(gender)   
        {}
		void setPersonInfo(string n, string g){
			name = n;
			gender = g;
		}
		
		void display(){
			cout << "Person Name  : " << name <<endl;
			cout << "Person Gender: " << gender <<endl;
		}
};

class Student:public Person{
	protected:
		int rollno;
		float gpa;
	public:
        Student(string name = "", string gender = "", int rollno = 0, float gpa = 0.0) : Person(name, gender), rollno(rollno), gpa(gpa)   
        {}
        void setStudentInfo(string n, string g, int roll, float gp){
			name = n;
			gender = g;
			rollno = roll;
			gpa = gp;
		}
		
		void display(){
			cout << "Student Name     : " << name <<endl;
			cout << "Student Gender   : " << gender <<endl;
			cout << "Student Roll no  : " << rollno <<endl;
			cout << "Student GPA      : " << gpa <<endl;
		}
};

class GraduateStudent:public Student{
	protected:
	string thesisTitle;	
	public:
        GraduateStudent(string name = "", string gender = "", int rollno = 0, float gpa = 0.0, string thesisTitle = "") : Student(name, gender, rollno, gpa), thesisTitle(thesisTitle)   
        {}

		void setGraduateStudentInfo(string n, string g, int roll, float gp, string thesis){
			name = n;
			gender = g;
			rollno = roll;
			gpa = gp;
			thesisTitle = thesis;
		}	

		void display(){
			cout << "Graduate Student Name     : " << name <<endl;
			cout << "Graduate Student Gender   : " << gender <<endl;
			cout << "Graduate Student Roll no  : " << rollno <<endl;
			cout << "Graduate Student GPA      : " << gpa <<endl;
			cout << "Graduate Student Thesis   : " << thesisTitle <<endl;
		}

};

int main(){
	Person p1;  
	p1.setPersonInfo("Kaisar", "Male");
	p1.display();
	
	cout<<"-------------------" <<endl;
	
	Student s1;
	s1.setStudentInfo("Kamal", "Male", 102, 3.2);
	s1.display();
	
	cout<<"-------------------" <<endl;
	GraduateStudent g1;
	g1.setGraduateStudentInfo("Kamal", "Male", 102, 3.2, "AI in Healthcare");
	g1.display();

	return 0;
}
