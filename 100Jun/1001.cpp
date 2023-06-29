#include <iostream>

using namespace std;

int main(){

    int x = 0;
    int y = 0;
    if (x>0 && y<10)
        cout << "두 정수를 입력하세요!" << endl;
        cin >> x;
        cin >> y;
        cout << x - y << endl;
    return 0;
}