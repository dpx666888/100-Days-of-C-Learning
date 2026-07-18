#include <iostream>
using namespace std;

int main()
{
    double num1, num2;  // 使用 double 以支持小数运算
    char op;
    
    cout << "********** 简易计算器 **********" << endl;
    cout << "请输入第一个数字：";
    cin >> num1;
    
    cout << "请输入运算符 (+, -, *, /)：";
    cin >> op;
    
    cout << "请输入第二个数字：";
    cin >> num2;
    
    cout << "\n计算结果：" << endl;
    cout << num1 << " " << op << " " << num2 << " = ";

    
    
    
    // 使用 switch 根据运算符执行不同操作
    switch(op)
    {
        case '+':
            cout << num1 + num2 << endl;
            break;
            
        case '-':
            cout << num1 - num2 << endl;
            break;
            
        case '*':
            cout << num1 * num2 << endl;
            break;
            
        case '/':
            // 处理除零错误
            if (num2 == 0)
                cout << "错误：除数不能为 0！" << endl;
            else
                cout << num1 / num2 << endl;
            break;
            
        default:
            cout << "错误：无效的运算符！" << endl;
            break;
    }
    
    cout << "*******************************" << endl;
    return 0;
}