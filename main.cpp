//���Ժ����ļ� 
#include <iostream>
#include "mystring.h"
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    cout<<"            *************** welcome to Mystring ***************"<<endl<<endl;
    cout<<"            *********************  MENU  **********************"<<endl;
    cout<<"������ִ�еĹ����У�1.strcpy������2.strcat������3.strlen������4.strncpy������"<<
           "                       5.strncat������6.strlwr������7.strupt����"<<endl; 
    cout<<"�˳������밴0�ż�"<<endl; 
    while(1){
    cout<<"������ѡ��ĺ������"<<endl;
    int a; 
    cin>>a;      
    if(a==0) break;
    switch(a){
    case 1: {
         mystring str1(" "),str2(" ");
         loop1:cout<<"����str1����������"<<endl<<"str1:" ;
         try{
             char a[10];cin>>a;str1=a;
             (checkstring(str1));  }
         catch(int ) { goto loop1;  }
         cout<<"��str1�е����ݸ��Ƶ�str2�в����str2"<<endl<<"str2:"; 
         str2=str1; cout<<str2<<endl;
         break;  
         }
    case 2: {
         mystring str1(" "),str2(" "),str3(" ");
         loop2:cout<<"����str1����������"<<endl<<"str1:";
         try { char a[10];cin>>a; str1=a;
         checkstring(str1);}
         catch(int){ goto loop2; }
         loop3:cout<<"����str2����������"<<endl<<"str2:";
         try{ char b[10];cin>>b; str2=b;
         checkstring(str2);  }
         catch(int) { goto loop3; }
         cout<<"��str1��str2���Ӻ��Ƹ�str3�����str3"<<endl<<"str3:";
         str3=str1+str2;
         cout<<str3<<endl;
         break;
         } 
    case 3: {     
         mystring str1(" ");
         loop4: cout<<"����str1����������"<<endl<<"str1:";
         try {char a[10];cin>>a;str1=a;
         checkstring(str1);}
         catch(int) { goto loop4; }
         cout<<"�����str1�ĳ��ȣ�"<< mystrlen(str1)<<endl;
         break;
         }
    case 4: {
         mystring str1(" "),str2(" ");
         loop5:cout<<"����str1����������"<<endl<<"str1:";
         try { char a[10];cin>>a;str1=a;
         checkstring(str1); }
         catch(int) { goto loop5; }
         cout<<"��������Ҫ��str1�и�����str2�����ݵ�λ����";
         int i;cin>>i;
         cout<<"���str2�����ݣ�"; 
         mystrncpy(str2,str1,i);
         break;
         }   
    case 5: {
         mystring str1(" "),str2(" ");
         loop6:cout<<"����str1����������"<<endl<<"str1:";
         try { char a[10];cin>>a;str1=a;
         checkstring(str1); }
         catch(int) { goto loop6; }
         loop7:cout<<"����str2����������"<<endl<<"str2:";
         try { char b[10];cin>>b;str2=b;
         checkstring(str2);  }
         catch(int) { goto loop7; }
         cout<<"��������Ҫ��str2���ӵ�str1ĩβ�����ݵ�λ����";
         int i;cin>>i;
         cout<<"���str1�����ݣ� ";
         mystrncat(str1,str2,i);
         break;
         } 
    case 6: {
         mystring str1(" ");
         loop8:cout<<"����str1����������"<<endl<<"str1:";
         try { char a[10];cin>>a;str1=a;
         checkstring(str1); }
         catch(int) { goto loop8; }
         cout<<"��str1�еĴ�д��ĸ����Сд��ĸ�����"<<endl<<"str1��";
         mystrlwr(str1);
         break;
         }        
    case 7: {
         mystring str1(" ");
         loop9:cout<<"����str1����������"<<endl<<"str1��";
         try{ char a[10];cin>>a;str1=a;
         checkstring(str1);}
         catch(int) {  goto loop9; }
         cout<<"��str1�е�Сд��ĸ���ɴ�д��ĸ�����"<<endl<<"str2��";
         mystrupt(str1);
         break;
         }          
    default : {
         cout<<"Your have a input error"<<endl;
         break;
         }
} 
}
    system("PAUSE");
    return EXIT_SUCCESS;
}
