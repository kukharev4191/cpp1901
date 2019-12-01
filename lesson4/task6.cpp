# include <iostream>

// using namespace std;

int main(){

   int a = 6;
       a = a - 3;
   std::cout << a << std::endl; // №1
   int b = a;
   std::cout << b << std::endl; // №2
    // в этом случае a + b является r-value
   std::cout << a + b << std::endl; // №3
   std::cout << a << std::endl; // №4
   int c;
   std::cout << c << std::endl; // №5



    return 0;
}