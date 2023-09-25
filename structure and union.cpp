#include<iostream>
using namespace std;

/*
struct person{
	float Salary;
	int age;
	char sex;
};
*/


// also give the structure like that
typedef struct person{
	// data
	float Salary;
	int age;
	char sex;
	
}ep;

// create union :- they are use for memory management
union money{
	int rice; // kilo of the rice
	char car; // color of the car( 1st letter )
	float pounds; 
};

int main(){
	struct person kunal,vicky;
	kunal.Salary=10000;
	kunal.age=21;
	kunal.sex='M';
	cout<<"Enter the salary of kunal is : "<<kunal.Salary<<endl;
	cout<<"Enter the age of kunal is : "<<kunal.age<<endl;
	cout<<"enter the sex of kunal is : "<<kunal.sex<<endl;
	
	// anothe employee of our company
	vicky.Salary=20000;
	vicky.age=21;
	vicky.sex='M';
	cout<<"salary of Vicky : "<<vicky.Salary<<endl;
	
	// anothe employee of our company
	struct person kaushal;
	kaushal.age=22;
	cout<<"age of kaushal is :"<<kaushal.age<<endl;
	
	// take another structure 
	ep shivam;
	shivam.Salary=5000;
	cout<<"enter the shivam salary : "<<shivam.Salary<<endl;
	
	// use union 
	union money bank;
	bank.rice=22;
	cout<<bank.rice<<endl;
	bank.pounds=34.5;  // when we are use  this then rice  value is override , we can got garbage value
	cout<<bank.pounds<<endl;
	bank.car='c';   // when we are use  this then rice and pound value is override , we can got garbage value
	cout<<bank.car<<endl;
	
	// enum
	enum meal{
		breakfast,
		lunch,
		dinner
	};
	cout<<breakfast;
	cout<<lunch;
	cout<<dinner<<endl;
	
	// we can also use like that
	meal m1=breakfast;
	cout<<m1<<endl;
	
	cout<<(m1==1)<<endl;
	cout<<(m1==0);
	
	
}
