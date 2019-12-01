# include <iostream>

using namespace std;



int main(){

 int day=0;

    do
    {
    cout << "Input day (1-7): ";
    cin >> day;
    }
    while (day< 1 || day>7);

    switch (day)
    {
     case 1: ;
     case 2: ;
     case 3: ;
     case 4: ;
     case 5: cout << "Рабочий день \n"; break;
     default: cout << "Выходной \n";
    }

    return 0;
}