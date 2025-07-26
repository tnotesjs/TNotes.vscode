#include <stdio.h>

// 未声明的函数
extern void undefined_function(); 

int main() {
    // 错误 1: 未定义变量
    printf("%d\n", undefined_variable); 
    
    // 错误 2: 类型不匹配
    char* str = 123; 
    
    // 警告: 未使用变量
    int unused = 42;
    
    return 0;
}
