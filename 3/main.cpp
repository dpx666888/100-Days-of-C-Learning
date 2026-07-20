#include <iostream>
#include <iomanip>  // 用于格式化输出
using namespace std;
int main() {
    const double RATIO = 9.0 / 5.0;  // 定义常量：转换比率
    const int OFFSET = 32;           // 定义常量：偏移量
    
    int celsius_int;                 // 整型变量，存储整数摄氏度
    double celsius_double;           // 双精度变量，存储小数摄氏度
    double fahrenheit_from_int;      // 由整数摄氏度转换的华氏度
    double fahrenheit_from_double;   // 由小数摄氏度转换的华氏度
    
    // 1. 整数摄氏度转换
    cout << "请输入一个整数摄氏度温度：";
    cin >> celsius_int;
    fahrenheit_from_int = celsius_int * RATIO + OFFSET;
    
    // 2. 小数摄氏度转换（强制类型转换练习）
    celsius_double = static_cast<double>(celsius_int);  // 显式类型转换
    fahrenheit_from_double = celsius_double * RATIO + OFFSET;
    
    // 3. 格式化输出结果
    cout << fixed << setprecision(2);  // 设置保留两位小数
    cout << "\n========== 转换结果 ==========" << endl;
    cout << "整数计算：" << celsius_int << "°C = " << fahrenheit_from_int << "°F" << endl;
    cout << "浮点计算：" << celsius_double << "°C = " << fahrenheit_from_double << "°F" << endl;
    
    // 4. 验证两种计算结果是否相等
    bool is_equal = (fahrenheit_from_int == fahrenheit_from_double);
    cout << "\n两种计算结果相等吗？" << boolalpha << is_equal << endl;
    cout << "按任意键继续...";
    cin.get();
    return 0;               
}