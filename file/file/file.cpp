// file.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 文件操作
* 
* #include <fstream>
* 
* 文本文件：以ASCII码存储到计算机中
* 二进制文件：以二进制形式存储
* 
* 操作文件的三大类：
*   ofstream:写操作
*   ifstream：读操作
*   fstream：读写操作
* 
* 文本文件：
*   写文件：
*       #include <fstream>
*       ofstream ofs; //创建流对象
*       ofs.open("文件路径", 打开方式);
*       ofs << "写入的内容"; //文件输出流
*       ofs.close(); //关闭文件
* 
*   文件打开方式：
*       ios::in  为读文件而打开文件
*       ios::out 为写文件而打开文件
*       ios::ate 初始位置为文件尾
*       ios::app 追加写
*       ios::trunc 如果文件存在，先删除，再创建
*       ios::binary 二进制方式
*       *文件打开方式配合使用：利用|,例如：ios::binary | ios::out（二进制写）
* 
*   读文件：
*       #include <fstream>
*       ifstream ifs; //创建流对象
*       ifs.open("文件路径", 打开方式);
*       四种方式读取
*       ifs.close(); //关闭文件
* 
*       if(ifs.is_open()) //判断文件是否打开成功
* 
*       四种读取方式：
*       方式一：
*           char buf[1024] = {0};
            while (ifs >> buf)
            {
                cout << buf << endl;
             }
*       方式二：
*           char buf[1024] = {0};
*           while(ifs.getline(buf, sizeof(buf)))
*           {
*               cout << buf << endl;
*           }
*       方式三：
*           string buf;
*           while(getline(ifs, buf))
*           {
*               cout << buf << endl;
*           }
*       方式四（不推荐）：
*           char c;
*           while((c = ifs.get()) != EOF) //EOF：end of file
*           {
*               cout << c << endl;
*           }
* 
* 二进制文件：
*   写文件：
*       #include <fstream>
*       ofstream ofs; //创建流对象
*       ofs.open("文件路径", 打开方式);
*       ofs.write((const char*) &p, sizeof(Person)); //Person p = {"liruonan", 18};
*       ofs.close(); //关闭文件
* 
*   读文件：
*       #include <fstream>
*       ifstream ifs; //创建流对象
*       ifs.open("文件路径", 打开方式);
*       ifs.read((const char) &p, sizeof(Person)); //Person p;
*       ifs.close(); //关闭文件
* 
* 
* 
* 
*/

int main()
{
    std::cout << "Hello World!\n";
}
