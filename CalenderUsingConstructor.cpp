#include<iostream>
using namespace std;

class Date {
    
 private :
    int day;
    int month;
    int year;
    
    public :
    
     Date(){
        day=01;
        month=01;
        year=2001;
        
        cout<<"your Old Date : "<<endl;
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
    
    void setDate(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    }
    
    void displayDate(){
        cout<<"Date is : "<<day<<"-"<<month<<"-"<<year<<endl;
    }
  
};

int main(){
    
    Date D1;
    D1.displayDate();
    D1.setDate(12,3,2005);
    D1.displayDate();
    
    return 0;
    
    
    
}
