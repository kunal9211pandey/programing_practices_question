#include<iostream>
using namespace std;

class person{
	private:
		int a,b,c;
	public:
		int d ,e;
		
		// this mean decleration , then compiler is finding this funcation setData()
		void setData(int a1,int b1,int c1); // we can set the data after that any time , once we are define
	    void getData(){
	    	cout<<"the value of a is "<<a<<endl;
	    	cout<<"the value of b is "<<b<<endl;
	    	cout<<"the value of c is "<<c<<endl;
	    	cout<<"the value of d is "<<d<<endl;
	    	cout<<"the value of e is "<<e<<endl;
	    	
		}
};

void person :: setData(int a1,int b1, int c1){
	 a=a1;
	 b=b1;
	 c=c1;
}


// this is also valid syntex to declear the class
/*
class employee{
	
} vicky , kunal , shivam;
*/


int main(){
	//create a object
	person kunal;
	kunal.setData(2,3,4);
	kunal.d=4;
	kunal.e=9;
	kunal.getData();
	
	cout<<"---------------------------------------------"<<endl;
	//Anothe object
	person vicky;
//	vicky.a=15;  -- a is private so we can't access directly
	vicky.d=12;
	vicky.e=13;
	vicky.setData(15,67,4);
	vicky.getData();
}
