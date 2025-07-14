#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>



void test()
{
    /*打印test输出数据到文本文件*/
    /*
    关闭test;
    ./pubtest
    a30; a-1;

    test > data.log
    
    
    */

}

//设置环境变量
void setlibpath()
{
    /*
    export LD_LIBRARY_PATH=/path/to/libs:$LD_LIBRARY_PATH
    */
}

//动态库生成
void libtest()
{
    /*
    # 编译 + 链接分步执行
    gcc -c -fPIC mylib.c -o mylib.o
    gcc -shared -o libmylib.so mylib.o

    多文件：
    gcc -shared -o libyourlibrary.so file1.o file2.o
    # 或一步完成
    gcc -shared -fPIC -o libmylib.so mylib.c

    ### 生成动态库（.so）
    1. **编译位置无关的目标文件**：
        ```bash
        aarch64-none-linux-gnu-gcc -c -fPIC your_source.c -o your_source.o
        ```
    2. **链接生成动态库**：
        ```bash
        aarch64-none-linux-gnu-gcc -shared -o libyourlibrary.so your_source.o
        ```
    或者一步完成：
        ```bash
        aarch64-none-linux-gnu-gcc -shared -fPIC -o libyourlibrary.so your_source.c
    
    # 查看库信息
    ldd libmylib.so

    # 运行程序
    LD_LIBRARY_PATH=. ./myprogram
    */
}