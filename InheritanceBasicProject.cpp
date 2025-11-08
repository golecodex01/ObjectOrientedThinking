#include<iostream>
using namespace std;

class Employee
{
    char name[20];
    double emID;
     
    public :
     void getData(){
		cout<<"Enter Name "<<endl;
		cin>>name;
		
		cout<<"Enter Employee ID  "<<endl;
		cin>>emID;
		
	}
    
    void putData(){
		cout<<"Name of Employee "<<name<<endl;
		cout<<"Employee ID "<<emID<<endl;
	}

};

class Manager  : public Employee
{
    private :
    char departmentname [40];
    
    double due;

    public :
      
    void getData(){ 
		Employee::getData();         
		cout<<"Enter Department Name "<<endl;
		cin>>departmentname;
		
		cout<<"Enter Dues   "<<endl;
		cin>>due;
		
	}
     void putData(){
		Employee::putData();    
		cout<<"Department Name "<<departmentname<<endl;
		cout<<"Dues "<<due<<endl;
	}



};

class Scientist : public Employee
{
	private :
            int publications;

   public:
       void getData(){
		Employee::getData();
         cout<<"Enter Publication year : "<<endl;
		 cin>>publications;
	   }

      void putData(){
		Employee ::putData();
		cout<<"Publication year is : "<<publications<<endl;
	  }



};

int main (){


Manager m1;
Scientist s1;

m1.getData();
m1.putData();


s1.getData();
s1.putData();



return 0;


}
