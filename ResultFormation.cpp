#include<iostream>
using namespace std;

class AcademicMarks{
 
    protected :
    int mathmarks;
    int phymarks;
    int chemmarks;
    

    public :

    void getMarks(){
        cout<<"Enter Maths MArks : "<<endl;
        cin>>mathmarks;

        cout<<"Enter Physics  MArks : "<<endl;
        cin>>phymarks;

        cout<<"Enter Chemistry  MArks : "<<endl;
        cin>>chemmarks;
    }
     


};

class Sports{

    protected :
           int sportmarks;

    public :
          void getSports(){
            cout<<"Enter Sports marks : "<<endl;
            cin>>sportmarks;
          }       

};


class Result  : public AcademicMarks ,public Sports{

    int totalmarks;
    
    float avgmarks;
    


    public :

     void displayResult(){
   

        totalmarks= mathmarks + phymarks + chemmarks;

         avgmarks=totalmarks/3;

         
        cout<<"Total Marks : "<< totalmarks<<endl;

        cout<<"Average Marks : "<< avgmarks<< endl;
     }

};

int main(){
 
    Result s1,s2;

    s1.getMarks();
    s1.getSports();
    s1.displayResult();




}
