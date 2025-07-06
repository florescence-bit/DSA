// reverse the string
#include <iostream>
using namespace std;

int main() {
    char s [] = "florecsencebit";
    int len = 0;
    for (char c:s) if(c != '\0') len++; else break;
    int start = 0, end = len - 1;
    while (start < end) {
        swap(s[start++], s[end--]);
    }
    cout << "reverse :" << s;
    return 0;
}
