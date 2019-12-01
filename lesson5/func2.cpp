# include <iostream>
using namespace std;

int returnInt(){
    return 8;
}



int main(void){

    cout << "Start main()" << endl;
// v1
    cout << returnInt() << endl;
    cout << returnInt() + 2 << endl;
//v2
    int x = returnInt();
    cout << x  << endl;
    cout << "end main()" << endl;

    return 0;
    cout << "after returnInt()" << endl;

}