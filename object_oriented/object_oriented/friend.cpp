// friend.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

/*
* 友元
*
* 有些私有属性，也想让类外特殊的一些函数或类进行访问，就需要用到友元技术
*
* 全局函数做友元
* 类做友元
* 成员函数做友元
*
* 全局函数做友元：
*   class Building
*   {
*       friend Friend(Buiding *building); //声明友元全局函数
*
*   public:
*       Building()
*       {
*           m_sittingRoom = "客厅";
*           m_bedroom = "卧室";
*       }
*
*   public:
*       string m_SittingRoom;
*
*   private:
*       string m_BedRoom;
*   }
*
*   //全局函数
*   void myFriend(Buiding *building)
*   {
*
*   }
*
*   void test()
*   {
*       Building building;
*       myFriend(& building);
*   }
*
* 类做友元：
*   class Building; //声明类
*   class MyFriend
*   {
*   public:
*       MyFriend();
*
*       void visit();
*
*       Building *building;
*
*   }
*
*   class Building
*   {
*
*       friend class MyFriend; //声明友元类
*
*   public:
*       Building();
*
*   public:
*       Building()
*       {
*           m_sittingRoom = "客厅";
*           m_bedroom = "卧室";
*       }
*
*   public:
*       string m_SittingRoom;
*
*   private:
*       string m_BedRoom;
*   }
*
*   //类外实现成员函数
*   Building::Building()
*   {
*       m_sittingRoom = "客厅";
*    }
*
*   MyFriend::MyFriend()
*   {
*       building = new Building;
*   }
*
*   void MyFriend::visit()
*   {
*       cout << building -> sitting_room << endl;
*   }
*
* 成员函数做友元:
*   class Building
*   {
*
*       friend void MyFriend::visit(); //声明友元成员函数
*
*   public:
*       Building();
*
*   public:
*       Building()
*       {
*           m_sittingRoom = "客厅";
*           m_bedroom = "卧室";
*       }
*
*   public:
*       string m_SittingRoom;
*
*   private:
*       string m_BedRoom;
*   }
*
*
*/