#include<iostream>
using namespace std;

class Vehical{
    private :
       int model=2000;
       string company ="TATA";

       public :

       void showData(){
       cout<<"Model is :"<<model<<endl;
       cout<<"Company is : "<<company<<endl;
    }
};


class Car : public  Vehical{


    private :
     int seatingCapicity;
     string type;

     public :

     void setSeatingCapicity(int seater){
        seatingCapicity=seater;
     }
     
     void settype(string fuel){
        type=fuel;
     }
     

     void showCar(){
       cout<<"Seating Capicity  is :"<<seatingCapicity<<endl;
       cout<<"Fuel Type  is : "<<type<<endl;
    }

};


class Bike : public  Vehical {


    private :
     int engineCapicity;
     string geartype;

     public :

     void setEngineCapicity(int ec){
        engineCapicity=ec;
     }
     
    
     void settype(string type){
        geartype=type;
     }

     void showBike(){
       cout<<"Engine  Capicity  is :"<< engineCapicity<<endl;
       cout<<"Bike Type  is : "<<geartype<<endl;
    }

};



int main(){


    Car c1;
    Bike b1;

    c1.setSeatingCapicity(5);
    c1.settype("Petrol");
    
    c1.showCar();

    b1.setEngineCapicity(150);
    b1.settype("Gear");
    b1.showBike();
}
