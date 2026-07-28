#include <iostream>
#include <cmath>     // 用于sqrt()函数
using namespace std;

int main() {
    int num;
    bool isPrime = true;  // 假设输入的是质数
    
    // 获取用户输入
    cout << "请输入一个正整数：";
    cin >> num;
    
    // 输入验证：小于2的数不是质数
    if (num < 2) {
        isPrime = false;
    } else {
        // 核心判断：从2到sqrt(num)逐个检查是否能整除
        // 使用sqrt()可以大幅减少循环次数，提升效率
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {  // 如果能整除，说明不是质数
                isPrime = false;
                break;           // 找到因数后立即退出循环
            }
        }
    }
    
    // 输出结果
    if (isPrime) {
        cout << num << " 是质数" << endl;
    } else {
        cout << num << " 不是质数" << endl;
    }
    
    system("pause");
    return 0;
}