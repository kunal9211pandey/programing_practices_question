#include<iostream>
using namespace std;

// create a class using array
class shop{
	// they are by defult private
	int item_id[100];   // assume 100 itme are there
	int price_item[100];
	int counter;
	public:
		void incounter(void){ 
		counter=0;
		}
		void setprice(void);
		void displayprice(void);
			
};

void shop::setprice(void){
	cout<<"enter id of your itme "<< counter +1<<endl;
	cin>>item_id[counter];
	cout<<"enter price of your item"<<endl;
	cin>>price_item[counter];
	counter++;	
}

void shop::displayprice(void){
	for(int i=0;i<=counter;i++){
		cout<<"the price of itme with id "<<item_id[i]<<" is "<<price_item[i]<<endl;
	}
}

int main(){
	shop p;
	p.incounter();
	p.setprice();
	p.setprice();
	p.setprice();
	p.setprice(); 
	p.displayprice();
	
}
