# include <iostream>

using namespace std;

int add (){
    int a;
    cout << "Введите число: ";
    cin >> a;

    return a;
}

int main(){
   int x = add();


   switch (x)
   {
   case 0: ;
   case 1: cout << "You picked 0 or 1 \n"; break;
   default: cout << "Error \n";
   }

    return 0;
}