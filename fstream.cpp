#include <iostream>
#include <fstream>
#include <string>
//包括ifstream读取文件 和ofstream写入文件
//open()为fstream ifstream ofstream的member function
//std::ios::app 为append 追加模式
//std::ios::in
//std::ios::out 不会清空文件的内容 为覆盖模式
//std::ios::trunc 如果文件存在，将截断，文件不存在，则创建
//std::getline(std::cin,str)//读取一行到str中
//seekp(0,std::ios::beg)//偏移量为0，移动到开头
//seekg(10,std::ios::beg)//以开头为基准，偏移量为10
//seekg(0,std::ios::end)//移动到最后
//clear()//当文件指针移动到最后时，需要用clear()清除错误

int main()
{
    std::fstream ioFile;
    ioFile.open("io.cpp",std::ios::in|std::ios::out|std::ios::trunc);
    if (ioFile.is_open())
    {
        std::cout << "Please enter the code" << std::endl;
        std::string str;
        std::getline(std::cin,str);
        ioFile << str;  //write flie
        
        ioFile.seekp(0,std::ios::beg);
        std::cout << "output file:" << std::endl;
        while(std::getline(ioFile,str))//read file getline
        {
            std::cout << str << std::endl;
        }
        ioFile.clear();//当文件指针移动到文件末时，只能使用clear()函数来清楚错误，不能直接使用seekp()
        ioFile.seekp(3,std::ios::beg);
        while(std::getline(ioFile,str))//read file getline
        {
            std::cout << str << std::endl;
        }
    }
    else
    {
        std::cout << "Can't find file , a flie has been created" << std::endl;
    }
    ioFile.close();

    
}
