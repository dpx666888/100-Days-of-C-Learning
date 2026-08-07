#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "斐波那契数列是数列从 0 和 1 开始，之后的每一项都是前两项之和 " << endl;
    cout << "请输入要生成的斐波那契数列项数: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "请输入正数!" << endl;
        return 0;
    }
    
    long long a = 0, b = 1;  // 前两项
    
    cout << "斐波那契数列前 " << n << " 项: " << endl;
    
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << a << " ";  // 第1项: 0
        } else if (i == 2) {
            cout << b << " ";  // 第2项: 1
        } else {
            long long next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
    }
    
    cout << endl;
    return 0;
}