# include <iostream>
# include <typeinfo>

using namespace std;

int main(){

int x=6
cout << typeid (x).name << endl;

   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;

   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    return 0;
}