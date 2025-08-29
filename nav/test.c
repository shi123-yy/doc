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


//固件升级
void fileware()
{
    /*
    1.使用手机线连接

    2.使用串口助手进入系统
    用户名：root
    密码：huacenav


    3. cd /


    4.
    */
}

//32位环境下编译将 gcc-linaro-5.3.1-2016.05-x86_64_arm-linux-gnueabihf 工具链安装到 /opt/ 并使其生效
void huanjing32()
{
    /*
    1.将 gcc-linaro-5.3.1-2016.05-x86_64_arm-linux-gnueabihf 工具链安装到 /opt/ 并使其生效
    sudo mv gcc-linaro-5.3.1-2016.05-x86_64_arm-linux-gnueabihf /opt/
    sudo chown -R root:root /opt/gcc-linaro-5.3.1-2016.05-x86_64_arm-linux-gnueabihf

    2.添加环境变量
    nano ~/.bashrc         # 仅对当前用户生效
    在文件末尾添加：
    # Linaro ARM GCC Toolchain
    export PATH="/opt/gcc-linaro-5.3.1-2016.05-x86_64_arm-linux-gnueabihf/bin:$PATH"
    export CROSS_COMPILE=arm-linux-gnueabihf-
    export ARCH=arm
    生效：
    source /etc/profile
    source ~/.bashrc       # 如果修改的是.bashrc，需要重新登录或执行source命令生效

    4.创建软链接
    sudo ln -s /opt/gcc-linaro-5.3.1-2016.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc /usr/local/bin/arm-gcc
    */
}

//文件测试，将文件推入接收机内部
void jishouji()
{
    // 1.使用FILEzila将文件放入指定目录，在/data/app/bin下面;
    // 2.使用ssh方式进入；
    // ssh root@192.168.1.1
    // 3.密码：huacenav;
}


//程序自动重启
void kill()
{
    // root@SPRING2-PRO:~# systemctl stop lovolrun
    // root@SPRING2-PRO:~# ps aux | display
    // bash: display: command not found
    // root@SPRING2-PRO:~# ps aux | grep display
    // root        9675  0.0  0.0   5904   688 pts/0    S+   09:52   0:00 grep display
    // root@SPRING2-PRO:~# ps aux | grep test
    // root        9679  0.0  0.0   5904   656 pts/0    S+   09:52   0:00 grep test

}