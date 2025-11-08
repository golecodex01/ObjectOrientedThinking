#include<iostream>
using namespace std ;

class Distance {
		int feet;
		float inche;
	public:	
	void setDistance(int feet,int inche){
		this->feet=feet;
		this->inche=inche;	
	}
	
	void showDistance(){
		cout<<"Feet"<<feet<<endl;
		cout<<"Inches"<<inche<<endl;
	}
	
	void getDistance(){
		cout<<"Enter Feet "<<endl;
		cin>>feet;
		
		cout<<"Enter Inch "<<endl;
		cin>>inche;
		
	}
	
};


int main (){
	
	Distance d1,d2;
	d1.setDistance(4,5)	;
	d1.showDistance();
	d2.getDistance();
	d2.showDistance();	
}
