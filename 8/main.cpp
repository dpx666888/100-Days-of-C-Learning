#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;
    
    // 获取用户输入
    cout << "请输入一个整数：";
    cin >> num;
    
    int originalNum = num;  // 保存原始值用于输出
    
    // 处理负数：先记录符号，转为正数处理
    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num;  // 转为正数
    }
    
    // 核心反转逻辑：逐位取出并构建新数字
    while (num > 0) {
        int digit = num % 10;           // 取出最后一位
        reversedNum = reversedNum * 10 + digit;  // 构建反转数字
        num = num / 10;                 // 去掉最后一位
    }
    
    // 如果是负数，恢复负号
    if (isNegative) {
        reversedNum = -reversedNum;
    }
    
    // 输出结果
    cout << originalNum << " 反转后是：" << reversedNum << endl;
    
    system("pause");
    return 0;
}