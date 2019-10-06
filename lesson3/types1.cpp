# include <iostream>

using namespace std;

int main(){
    string x = "My ";
    string y = "name";

    cout <<x+y <<endl;
    cout <<x  <<y <<endl;


    bool t = 0; // true
    bool f = 0; // false

    cin >> t;
    cin >> f;

    cout << boolalpha << t << " " << f <<endl;
    cout << noboolalpha << t << " " << f <<endl;

    return 0;
}