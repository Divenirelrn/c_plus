/*
* �̳�
* 
*	�����ظ�����
* 
*	class ���ࣺ�̳з�ʽ ����
*	���ࡢ������
* 
* class Java: public BasePage
* {
* 
* };
* 
* �̳з�ʽ��
*	�����̳�
*	�����̳У�����public��Ϊprotected
*	˽�м̳�: ����public��protected��Ϊprivate
* 
*	*�����е�˽���������಻�ܷ��ʣ��������ּ̳з�ʽ
*	
* �̳��еĶ���ģ�ͣ��̳й�ϵ����
*	�����еķǾ�̬��Ա���ᱻ����̳У�����˽�У�
* 
*	CMD�鿴����ģ��
* 
* �̳��еĹ���������������
*	����˳��
*		Base����
*		Son����
*		Son����
*		Base����
* 
* �̳���ͬ����Ա������ʽ��
*	��������������
*	��������ͬ����Ա��ֱ�ӷ���
*	���ʸ���ͬ����Ա����Ҫ��������
*		s.Base::m_A
*		s.Base::func();
* 
* �̳���ͬ����̬��Ա������ʽ��
*	��������ͬ����Ա��ֱ�ӷ���
*	���ʸ���ͬ����Ա����Ҫ��������
*		Son::Base::m_A; //ͨ����������
*		Son::Base::func();
* 
* ��̳��﷨��C++�����в�����ʹ�ö�̳У���
*	class ����:�̳з�ʽ ����1, �̳з�ʽ ����2, ...
*	
*	class Son :public Base1, public Base2
*	{

*	};
* 
*	��̳��е��������⣬��Ҫ��������
* 
* ���μ̳У���ʯ�̳У���
*	�����ԣ���������ӵ����ͬ�����ݣ���Ҫ���������������
*	���Ӽ̳�����������үү�����ݣ�������̳������
*		class Alpaca: virtual public Animal {}; //�����
*		�����ʹ���ݱ�Ϊһ��
*		vbptr:�����ָ�룬ָ��vbtable(������)
* 
* 
* 
* 
* 
* 
* 
* 
*/