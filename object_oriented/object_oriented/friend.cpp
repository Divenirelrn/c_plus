// friend.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>

/*
* ��Ԫ
*
* ��Щ˽�����ԣ�Ҳ�������������һЩ����������з��ʣ�����Ҫ�õ���Ԫ����
*
* ȫ�ֺ�������Ԫ
* ������Ԫ
* ��Ա��������Ԫ
*
* ȫ�ֺ�������Ԫ��
*   class Building
*   {
*       friend Friend(Buiding *building); //������Ԫȫ�ֺ���
*
*   public:
*       Building()
*       {
*           m_sittingRoom = "����";
*           m_bedroom = "����";
*       }
*
*   public:
*       string m_SittingRoom;
*
*   private:
*       string m_BedRoom;
*   }
*
*   //ȫ�ֺ���
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
* ������Ԫ��
*   class Building; //������
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
*       friend class MyFriend; //������Ԫ��
*
*   public:
*       Building();
*
*   public:
*       Building()
*       {
*           m_sittingRoom = "����";
*           m_bedroom = "����";
*       }
*
*   public:
*       string m_SittingRoom;
*
*   private:
*       string m_BedRoom;
*   }
*
*   //����ʵ�ֳ�Ա����
*   Building::Building()
*   {
*       m_sittingRoom = "����";
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
* ��Ա��������Ԫ:
*   class Building
*   {
*
*       friend void MyFriend::visit(); //������Ԫ��Ա����
*
*   public:
*       Building();
*
*   public:
*       Building()
*       {
*           m_sittingRoom = "����";
*           m_bedroom = "����";
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