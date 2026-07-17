#include <iostream>
#include <random>  // 用于生成高质量的随机数
#include <limits>  // 用于处理输入错误
using namespace std;
int main() {
    // --- 1. 设置随机数生成器 ---
    // 创建一个真正的随机种子，基于硬件熵源
    random_device rd;
    // 使用梅森旋转算法生成伪随机数
    mt19937 gen(rd());
    // 定义一个在 1 到 100 之间均匀分布的整数范围
    uniform_int_distribution<> distrib(1, 100);

    // 生成目标数字
    int secretNumber = distrib(gen);
    int guess = 0;           // 存储玩家的猜测
    int attempts = 0;        // 记录猜测次数

    cout << "====================================" << endl;
    cout << "  欢迎来到猜数字游戏！ (1-100)  " << endl;
    cout << "====================================" << endl;

    // --- 2. 游戏主循环 ---
    // 使用 while(true) 创造无限循环，直到猜对才跳出
    while (true) {
        cout << "请输入你的猜测: ";
        cin >> guess;

        // --- 3. 输入验证 (处理非数字输入) ---
        // 如果用户输入了非数字（比如字母），cin 会进入错误状态
        if (cin.fail()) {
            cout << ">>> 警告：请输入一个有效的数字！" << endl;
            
            // 清除错误状态标志
            cin.clear();
            // 忽略输入缓冲区中所有字符，直到遇到换行符，防止死循环
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            // 跳过本次循环剩余部分，重新开始
            continue;
        }

        // 有效猜测，次数加一
        attempts++;

        // --- 4. 核心判断逻辑 (if/else if/else) ---
        if (guess < 1 || guess > 100) {
            cout << ">>> 提示：数字范围是 1 到 100，请重试。" << endl;
        } else if (guess > secretNumber) {
            cout << ">>> 太大了！再试一次。" << endl;
        } else if (guess < secretNumber) {
            cout << ">>> 太小了！再试一次。" << endl;
        } else {
            // 猜对了！
            cout << "\n====================================" << endl;
            cout << "  恭喜！你猜对了！" << endl;
            cout << "  目标数字就是 " << secretNumber << endl;
            cout << "  你总共猜了 " << attempts << " 次。" << endl;
            cout << "====================================" << endl;
            
            // 使用 break 跳出 while 循环，结束游戏
            break;
        }
    }

    return 0;
}