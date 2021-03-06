首先介绍一下GCC：GNU Compiler Collection(GNU 编译器集合)，
在为Linux开发应用程序时，绝大多数情况下使用的都是C语言，
因此几乎每一位Linux程序员面临的首要问题都是如何灵活运用C编译器。
目前 Linux下最常用的C语言编译器是GCC（GNU Compiler Collection），
它是GNU项目中符合ANSI C标准的编译系统，能够编译用C、C++和Object C等语言编写的程序。
GCC不仅功能非常强大，结构也异常灵活。
最值得称道的一点就是它可以通过不同的前端模块来支持各种语言，如Java、 Fortran、Pascal、Modula-3和Ada等。

gcc与g++区别：    
gcc是GCC中的GUNC Compiler（C 编译器）
g++是GCC中的GUN C++ Compiler（C++编译器）
更准确的说法是：gcc调用了Ccompiler，而g++调用了C++ compiler

gcc和g++的主要区别:
1.对于 *.c和*.cpp文件，gcc分别当做c和cpp文件编译（c和cpp的语法强度是不一样的）; g++则统一当做cpp文件编译
2. 使用g++编译文件时，g++会自动链接标准库STL，而gcc不会自动链接STL，在用gcc编译c++文件时，为了能够使用STL，
    需要加参数 –lstdc++ ，但这并不代表 gcc –lstdc++ 和 g++等价
3.gcc在编译C文件时，可使用的预定义宏是比较少的
4.gcc在编译cpp文件时/g++在编译c文件和cpp文件时（这时候gcc和g++调用的都是cpp文件的编译器），会加入一些额外的宏，这些宏如下：
#define__GXX_WEAK__ 1
#define __cplusplus 1
#define __DEPRECATED 1
#define __GNUG__ 4
#define __EXCEPTIONS 1

#define __private_extern__ extern

gcc/g++与make区别：
当你的程序只有一个源文件时，直接就可以用gcc命令编译它。但是当你的程序包含很多个源文件时，
用gcc命令逐个去编译时，你就很容易混乱而且工作量大.
所以出现了make工具！make工具可以看成是一个智能的批处理工具，它本身并没有编译和链接的功能，
而是用类似于批处理的方式—通过调用makefile文件中用户指定的命令来进行编译和链接的。
makefile是什么？简单的说就像一首歌的乐谱，make工具就像指挥家，指挥家根据乐谱指挥整个乐团怎么样演奏，
make工具就根据makefile中的命令进行编译和链接的。makefile命令中就包含了调用gcc（也可以是别的编译器）去编译某个源文件的命令。

make与cmake区别：
makefile在一些简单的工程完全可以人工手下，但是当工程非常大的时候，手写makefile也是非常麻烦的，
如果换了个平台makefile又要重新修改。
这时候就出现了Cmake这个工具，cmake就可以更加简单的生成makefile文件给上面那个make用。
当然cmake还有其他功能，就是可以跨平台生成对应平台能用的makefile，你不用再自己去修改了。
可是cmake根据什么生成makefile呢？它又要根据一个叫CMakeLists.txt文件（学名：组态档）去生成makefile。
