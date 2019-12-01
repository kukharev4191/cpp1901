# include <iostream>

using namespace std;



int main(){

int a=1;
int b=1;
int c=2;
int d=0;


 if ( a == b && c != a || b >= d ){
       cout << "condition - 1" << "\n";
   } else cout << "condition - 0" << "\n";

a=0; b=2; c=1; d=2;
 if ( a != d || b > (a || c) && !a ){
       cout << "condition - 1" << "\n";
   } else cout << "condition - 0" << "\n";

a=1; b=0; c=1; d=0;
 if ( a != b || !b && !c < d && a == b){
       cout << "condition - 1" << "\n";
   } else cout << "condition - 0" << "\n";

a=1; b=0; c=1; d=0;
 if ( a == b && b != c || !d || !a && b >= c){
       cout << "condition - 1" << "\n";
   } else cout << "condition - 0" << "\n";

a=1; b=0; c=5; d=0;
 if ( !c ){
       cout << "c = "<< c << " !c condition - 1" << "\n";
   } else cout << "c = "<< c << " !c condition - 0" << "\n";
   if ( !a ){
       cout << "a = "<< a << " !a condition - 1" << "\n";
   } else cout << "a = "<< a << " !a condition - 0" << "\n";
if ( !b ){
       cout << "b = "<< b << " !b condition - 1" << "\n";
   } else cout << "b = "<< b << " !b condition - 0" << "\n";

if ( a || b && d ){
       cout << "a || b && d condition - 1" << "\n";
   } else cout << "a || b && d condition - 0" << "\n";

    return 0;
}