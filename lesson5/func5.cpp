# include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int multipiy(int c=1, int d=5){
    return c*d;
}

int main(void){

    cout << add(3, 7) << endl;
    cout << multipiy(3, 7) << endl;
    cout << multipiy(3) << endl;
    cout << multipiy() << endl;

    return 0;

}