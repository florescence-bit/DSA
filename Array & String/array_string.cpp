// length of the string
#include <iostream>
using namespace std;

int main() {
    char s [] = "hello\0world"; // string terminate when it got first null char (\0)
    int cnt = 0;
    for (char c:s) if(c != '\0') cnt++; else break;
    cout << "length : " << cnt;
    return 0;
}
