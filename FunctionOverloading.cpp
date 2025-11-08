#include<iostream>
using namespace std;

class Shape{

private :

   int side;
   int length, breadth;
   float radius;

   
   public :

   int Area(int side){
         return side*side;

   }
   int Area(int length,int breadth){
    return length*breadth;
   }

   float Area(float radius){
    return 3.14*radius*radius; 
 }

};

int main(){

Shape o1,o2,o3;

int area1=o1.Area(12);

// float area2=o1.Area(3.1);

int area3 =o1.Area(2,4);

//cout<<"Area OF Cirlce is :"<<area2<<endl;

cout<<"Area OF Square is :"<<area1<<endl;
cout<<"Area OF Rectanlge is :"<<area3<<endl;

}


