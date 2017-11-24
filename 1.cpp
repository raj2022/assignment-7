#include <iostream>
using namespace std;

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

int main() {
   Box Box1;        // Declare Box1 of type Box
   Box Box2;        // Declare Box2 of type Box
   double volume = 0;   // here Store the volume of a box 
 
   // Box 1 specification
   Box1.height = 7.0; 
   Box1.length = 9.0; 
   Box1.breadth = 6.0;

   // box 2 specification
   Box2.height = 14.0;
   Box2.length = 18.0;
   Box2.breadth = 12.0;
   
   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 is : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 is : " << volume <<endl;
   return 0;
}
