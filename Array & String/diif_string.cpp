// compare the string and char array
#include <iostream>
#include <string>
using namespace std;

int main() {
    char s1 [] = "florecsence\0bit";
    string s2 = "florecsence\0bit";
    cout << "char string :" << s1 << endl;
    cout << "inbuilt string :" << s2 << endl;
    return 0;
}
