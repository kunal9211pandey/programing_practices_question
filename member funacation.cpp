#include<iostream>
#include<string>
using namespace std;

class binary{
	private:
		string s;
	    void che_bin(void);
	public:
		void read(void);
	//  void che_bin(void);
		void ones(void);
		void display(void);
}; 


void binary::read(void){
	cout<<"enter the binary number "<<endl;
	cin>>s;
}

void binary::che_bin(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"they are not binary number"<<endl;
			exit(0);
		}
		else{
			cout<<"they are binary number"<<endl;
		}
	}
}

void binary::ones(void){
	che_bin();  // they are called member funcation , no need to declearin the object
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0'){
			s.at(i)='1';
		}
		else if(s.at(i)=='1'){
			s.at(i)='0';
		}
	}
}
void binary::display(void){
	for(int i=0;i<s.length();i++)
	{
	cout<<s.at(i)<<endl;
   }
}

int main(){
	// Drived class
	binary b , c;
	b.read();
//	b.che_bin();  -- we can't access direcltly because they are private
	b.ones();
	b.display();	
}
