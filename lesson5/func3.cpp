# include <iostream>
using namespace std;

int getValueFromUser(){
    cout << "Enter an integer: ";
    int x = 0;
    cin >> x;
    return x;
}



int main(void){

//    cout << "Start main()" << endl;

    int a = getValueFromUser();
    int b = getValueFromUser();

    cout << endl << "a + b = " << a+b << endl;

//    cout << "end main()" << endl;

    return 0;

}