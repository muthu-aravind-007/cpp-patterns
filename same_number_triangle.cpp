#include <iostream>
using namespace std;

int main() {

    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            int count = 1;
            int result = count + i;
            cout << result << " ";
        }
        cout << endl;
    }
    return 0;
}