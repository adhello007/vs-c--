 #include <iostream>
 using namespace std;
 int main()
 {
     int age;
     cin >> age;

     switch(age)
     {
         case 16:
         cout << "go drive brr" << endl;
         break;//this exits the switch case and doesnt check 
         //the rest of the cases.  
         case 18:
         cout << "whoa you can buy lottery ticks" << endl;
         break;
         case 21:
         cout << "congo go have a beer ;)" << endl;
         break;
         default: 
         cout << "lol its just a normal age" << endl;

     }
 }