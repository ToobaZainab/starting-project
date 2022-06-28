#include<iostream>
using namespace std;
class Grade{
	private:
		int rollNo;
		char grade;
		float marks;
		public:
			Grade(){
				grade='';
				marks=0.0;
			}
			void takeMarks(){
				cout<<"Enter Rollno of Rehan";
				cin>>rollNo;
				cout<<"Enter Marks of Rehan:";
				cin>>marks;
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
			cout<<"Rehan RollNo is="<<rollNo<<endl;
			cout<<"rehan Grade is:"<<grade;
		}
		};
class Department{
	private:
		int departid;
		public:
			Depatment(){
				cout<<"enter department id:";
				cin>>departid;
			}
			void showDepartinfo(){
				cout<<"\nDepartment id:"<<departid<<endl;
			}
};

class Student{
	private:
		int rollNo;
		Grade g;
		Department d;
		public:
			student(){
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
	Student rehan;
	rehan.takeData();
	rehan.showGrade();
	rehan.showDepart();
}






