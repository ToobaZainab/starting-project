#include<iostream>
using namespace std;

class Grade{
  private:
 int rollNo;
	char grade;
	float marks;
  public:
	Grade(){
	grade=' ';
	marks=0.0;
  }
void takeMarks(){
 cout<<"Enter Rollno of tuba:";cin>>rollNo;
	cout<<"Enter Marks of tuba:";	cin>>marks;
}
void calGrade(){
	if(marks>=80)
    grade='A';
	else if(marks>=65)
    grade='B';
	else if(marks>=50)
    grade='C';
	else if(marks>=45)
    grade='D';
	else
    grade='F';

}
void showGrade(){
  cout <<"  RollNo of tuba is = "<<rollNo<<endl;
	cout<<" Grade of tuba is:"<<grade;
	}
};
class Department{
private:
	int departid;
	
public:
	Department(){
	cout<<"enter department id:";
	cin>>departid;
	}
	void showDepartinfo(){
	
	cout<<"\n Department  id:"<<departid<<endl;
	}
};
class Student{
private:
	int rollNo;
	Grade g;
	Department d;
public:
	Student(){
	rollNo=0;
	}
	void takeData(){
	g.takeMarks();
	}
	void showGradeStd(){
	g.calGrade();
	g.showGrade();
	}
	void showDepart(){
	d.showDepartinfo();
	}
};
int main(){

Student tuba;
tuba.takeData();
tuba.showGradeStd();
tuba.showDepart();
    
     }
