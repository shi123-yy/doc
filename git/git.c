#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>




//创建空白分支
void create_branch(const char *branch_name) 
{
    /*
    # 1. 创建空白孤儿分支
    git checkout --orphan 新分支名

    # 2. 清除所有暂存文件（保持分支空白）
    git rm -rf .  # 注意：此操作不会删除实际文件

    # 3. 创建初始空提交
    git commit --allow-empty -m "初始化空白分支"

    # 4. 推送到远程
    git push origin 新分支名

    # 5 git push 失败
    fatal: 当前分支 jishouji 没有对应的上游分支。
    为推送当前分支并建立与远程上游的跟踪，使用

    git push --set-upstream origin jishouji


    首次推送（本地无仓库）

    初始化本地仓库
    git init
    关联远程仓库
    git remote add origin https://github.com/用户名/仓库名.git
    添加文件并提交
    git add .
    git commit -m "首次提交"
    首次推送
    git push -u origin main  # -u 设置上游分支，后续只需 git push
       
    */
}


//can数据使用与解析

void can()
{
    /*
    1.sudo apt install can-utils;
    
    sudo ip link set can0 type can bitrate 500000
    sudo ip link set up can0

    2.socketcan
    sudo modprobe can
    sudo modprobe can_raw

    3.启动can0
    sudo ifconfig -a

    4.监听数据
    candump can0
    发送：
    cansend can0 123#1122334455667788

    */
  
}


void dbc()
{
    /*
    1.安装cantools
    2.python3 -m cantools generate_c_source transplanter.dbc
    
    总结（十进制整数转二进制）：​​

    ​​除2取余：​​ 十进制数一直除以2，记录每次的余数（0或1）。
    ​​商为0停：​​ 当商等于0时，停止除法。
    ​​倒读余数：​​ 将所有记录的余数​​从最后得到的那个开始（也就是除法过程的​​自下而上​​），依次写到最前面那个（最先得到的）​​，组合起来就是二进制数。

    二进制 转十六进制

    ​​分组：​​ 将二进制数从​​右向左​​（从最低有效位开始）每 ​​4 位​​分成一组。
        如果最左边的组不足 4 位，则在左边​​补 0​​ 凑足 4 位。
    ​​转换：​​ 将每组 4 位的二进制数转换成对应的十六进制数。
    ​​拼接：​​ 将所有转换后的十六进制数字拼接起来，就是最终结果。

    二进制	十六进制  二进制   十六进制
    0000	0	    1000	8
    0001	1	    1001	9
    0010	2	    1010	A
    0011	3	    1011	B
    0100	4	    1100	C
    0101	5	    1101	D
    0110	6	    1110	E
    0111	7	    1111	F

    示例： ​​10​​ 1011 1010（二进制）
    分组 (右向左):
    第1组 (最右4位): 1 0 1 0 -
    第2组 (中间4位): 1 0 1 1
    第3组 (最左不足4位): 1 0 -> 补零成 0 0 1 0

    ​转换每组：​​

    第一组 (0010) -> 看表或计算： 0010 = 0 * 8 + 0 * 4 + 1 * 2 + 0 * 1 = 2 -> 2
    第二组 (1011) -> 1011 = 1 * 8 + 0 * 4 + 1 * 2 + 1 * 1 = 8+0+2+1=11 -> B (11 的十六进制)
    第三组 (1010) -> 1010 = 1 * 8 + 0 * 4 + 1 * 2 + 0 * 1 = 8+0+2+0=10 -> A (10 的十六进制)

    ​​拼接：​​ 将转换结果从最左边组到最右边组拼接起来： 2 B A
    ​​结果：​​ 二进制 1010111010 = 十六进制 2BA
    
    */
}

void protobuf()
{
    /*
    1.需要pbtool.h
    2.pbtools generate_c_source spray_msg.proto 
    */
}

//将printf输出到文本
void stdio()
{
    /*
    #include <stdio.h>

    int main() {
        // 保存原始标准输出
        FILE *original_stdout = stdout;
        
        // 重定向stdout到文件
        stdout = fopen("output.txt", "w");
        if (stdout == NULL) {
            fprintf(stderr, "无法打开文件\n");
            return 1;
        }

        // 所有printf自动输出到文件
        printf("这行文字会写入文件\n");
        printf("计算：%d + %d = %d\n", 5, 3, 5+3);

        // 恢复标准输出并关闭文件
        fclose(stdout);
        stdout = original_stdout;  // 恢复控制台输出

        // 现在printf会输出到控制台
        printf("已恢复控制台输出\n");
        return 0;
    }
    */
}


void sougou()
{
    /*
    1.安装搜狗输入法
    sudo apt install libqt5qml5 libqt5quick5 libqt5quickwidgets5 qml-module-qtquick2

    sudo apt install libgsettings-qt1
    */
}


//安装谷歌输入法
void google()
{
    /*
    1.安装好 Ubuntu22.04
    安装 Fcitx

    在Ubuntu 下，谷歌拼音输入法是基于Fcitx输入法的。因此，我们需要首先安装Fcitx。
    sudo apt install fcitx

    配置Fcitx
    im-config

    安装谷歌拼音输入法
    sudo apt install fcitx-googlepinyin

    //重启电脑
    sudo reboot

    //配置Fcitx
    fcitx-config-gtk3


    */
}
