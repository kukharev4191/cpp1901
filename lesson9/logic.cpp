# include <iostream>
# include <iomanip>

using namespace std;

// && - and
// || - or
// !  - not

int main(){

   setprecision (10);

   bool t = true;
   bool f = false;

   short a = 1;
   short b = 2;
   short c = 3;

   if ( (a<b) && f || !t && (c>=a) ){

       cout << "condition - 1" << "\n";
   } else cout << "condition - 0" << "\n";


//   int x = a < b ? a : b; // тернарный оператор true x = a, false x = b

//   cout << ( a > b ? a : b ) << endl;


   double d1 (100-99.99);
   double d2 (10-9.99);

   if (d1==d2)
      cout << "d1 = d2\n";
      else if (d1>d2) cout << "d1 > d2\n";
           else cout << "d1 < d2\n";

cout << "d1 = "<< d1 <<", d2 = " << d2 << endl;
double d = 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1;
cout << boolalpha << (d1 == 1.0) << endl;


   cout << "end\n";


   return 0;
}