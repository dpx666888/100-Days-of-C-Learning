#include <iostream>
#include <iomanip>  // 用于格式化输出
using namespace std;

// 函数声明
unsigned long long factorialLoop(int n);

int main() {
    int num;
    char choice;
    
    do {
        cout << "\n========================================" << endl;
        cout << "       阶乘计算器" << endl;
        cout << "========================================" << endl;
        cout << "   n! = n × (n-1) × (n-2) × ... × 1" << endl;
        cout << "========================================" << endl;
        
        // 输入数字
        cout << "\n请输入一个非负整数（0-20）: ";
        cin >> num;
        
        // 输入验证
        while (cin.fail() || num < 0 || num > 20) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "输入无效！请输入 0-20 之间的整数: ";
            cin >> num;
        }
        
        // 显示计算过程
        cout << "\n----------------------------------------" << endl;
        cout << "【计算过程】" << endl;
        
        if (num == 0) {
            cout << "  0! = 1（数学定义）" << endl;
        } else {
            cout << "  " << num << "! = ";
            // 显示乘法序列
            for (int i = num; i >= 1; --i) {
                cout << i;
                if (i > 1) {
                    cout << " × ";
                }
            }
            cout << " = " << factorialLoop(num) << endl;
        }
        
        // 计算结果
        cout << "\n----------------------------------------" << endl;
        cout << "【计算结果】" << endl;
        unsigned long long result = factorialLoop(num);
        cout << "  " << num << "! = " << result << endl;
        
        // 特殊说明
        if (num == 0) {
            cout << "\n  【特别说明】0! = 1（数学定义）" << endl;
        }
        
        // 显示阶乘的增长速度（可选）
        if (num >= 3) {
            cout << "\n----------------------------------------" << endl;
            cout << "【阶乘增长速度】" << endl;
            for (int i = 1; i <= num; i += (num > 10 ? 2 : 1)) {
                cout << "  " << setw(2) << i << "! = " 
                     << setw(15) << factorialLoop(i) << endl;
            }
        }
        
        // 询问是否继续
        cout << "\n----------------------------------------" << endl;
        cout << "是否继续计算？(y/n): ";
        cin >> choice;
        
        while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
            cout << "请输入 y 或 n: ";
            cin >> choice;
        }
        
    } while (choice == 'y' || choice == 'Y');
    
    cout << "\n感谢使用阶乘计算器！再见！" << endl;
    cout << "========================================" << endl;
    system("pause");
    return 0;
}

// ============================================
// 循环方式计算阶乘
// ============================================
unsigned long long factorialLoop(int n) {
    unsigned long long result = 1;
    
    // 从 1 乘到 n
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    
    return result;
}