#include <iostream>
#include <iomanip>  // 用于格式化输出
using namespace std; // 使用全局std命名空间

int main() {
    // 外层循环控制行数（乘数1，从1到9）
    for (int i = 1; i <= 9; ++i) {
        // 内层循环控制列数（乘数2，从1到i，确保下三角格式）
        for (int j = 1; j <= i; ++j) {
            // 格式化输出：每个算式占8个字符宽度，左对齐，使表格对齐
            // 输出格式：j × i = (i*j)，其中j是列，i是行
            cout << left << setw(8) 
                 << (to_string(j) + "×" + to_string(i) + "=" + to_string(i * j));
        }
        // 每行结束后换行
        cout << endl;
    }

    // 防止控制台一闪而过（在Windows环境下有效）
    system("pause");
    return 0;
}