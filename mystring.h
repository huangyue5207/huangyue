//��ͷ�ļ� 
// Class automatically generated by Dev-C++ New Class wizard
#include <iostream>
#ifndef MYSTRING_H
#define MYSTRING_H
using namespace std;
class mystring
{
    char* a;
    public:
		mystring(char* const);
		~mystring();
	char* returner();
	char* operator+(mystring&); //���ء�+������� ����Ϊstrcat���� 
    void operator=(char* const j);//���ء�=���������������mystring���е�˽�г�Աa��ֵ�� 
    void operator=(mystring& );//���� ��=�����������Ϊstrcpy���� 
    friend int mystrlen(mystring& );//mystrlen���� ���ͱ�׼strlen������������ 
    friend void mystrlwr(mystring& );//mystrlwt�������ͱ�׼strlwt������������ 
    friend void mystrupt(mystring& );//mystrupt�������ͱ�׼strupt������������  
    friend void mystrncpy(mystring& ,mystring& ,int );//mystrncpy�������ͱ�׼strncpy������������  
    friend void mystrncat(mystring& ,mystring& ,int );  //mystrncat �������ͱ�׼strncat������������ 
    friend void checkstring(mystring& );//�쳣�������� 
};
 ostream& operator<< (ostream& ,mystring& );//���صġ�<<������� 
 
 
#endif // MYSTRING_H