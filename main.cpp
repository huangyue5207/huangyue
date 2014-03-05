//测试函数文件 
#include <iostream>
#include "mystring.h"
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    cout<<"            *************** welcome to Mystring ***************"<<endl<<endl;
    cout<<"            *********************  MENU  **********************"<<endl;
    cout<<"本程序执行的功能有：1.strcpy函数，2.strcat函数，3.strlen函数，4.strncpy函数，"<<
           "                       5.strncat函数，6.strlwr函数，7.strupt函数"<<endl; 
    cout<<"退出程序请按0号键"<<endl; 
    while(1){
    cout<<"请输入选择的函数序号"<<endl;
    int a; 
    cin>>a;      
    if(a==0) break;
    switch(a){
    case 1: {
         mystring str1(" "),str2(" ");
         loop1:cout<<"请向str1中输入内容"<<endl<<"str1:" ;
         try{
             char a[10];cin>>a;str1=a;
             (checkstring(str1));  }
         catch(int ) { goto loop1;  }
         cout<<"将str1中的内容复制到str2中并输出str2"<<endl<<"str2:"; 
         str2=str1; cout<<str2<<endl;
         break;  
         }
    case 2: {
         mystring str1(" "),str2(" "),str3(" ");
         loop2:cout<<"请向str1中输入内容"<<endl<<"str1:";
         try { char a[10];cin>>a; str1=a;
         checkstring(str1);}
         catch(int){ goto loop2; }
         loop3:cout<<"请向str2中输入内容"<<endl<<"str2:";
         try{ char b[10];cin>>b; str2=b;
         checkstring(str2);  }
         catch(int) { goto loop3; }
         cout<<"将str1和str2连接后复制给str3并输出str3"<<endl<<"str3:";
         str3=str1+str2;
         cout<<str3<<endl;
         break;
         } 
    case 3: {     
         mystring str1(" ");
         loop4: cout<<"请向str1中输入内容"<<endl<<"str1:";
         try {char a[10];cin>>a;str1=a;
         checkstring(str1);}
         catch(int) { goto loop4; }
         cout<<"计算出str1的长度："<< mystrlen(str1)<<endl;
         break;
         }
    case 4: {
         mystring str1(" "),str2(" ");
         loop5:cout<<"请向str1中输入内容"<<endl<<"str1:";
         try { char a[10];cin>>a;str1=a;
         checkstring(str1); }
         catch(int) { goto loop5; }
         cout<<"请输入需要从str1中复制至str2中内容的位数：";
         int i;cin>>i;
         cout<<"输出str2的内容："; 
         mystrncpy(str2,str1,i);
         break;
         }   
    case 5: {
         mystring str1(" "),str2(" ");
         loop6:cout<<"请向str1中输入内容"<<endl<<"str1:";
         try { char a[10];cin>>a;str1=a;
         checkstring(str1); }
         catch(int) { goto loop6; }
         loop7:cout<<"请向str2中输入内容"<<endl<<"str2:";
         try { char b[10];cin>>b;str2=b;
         checkstring(str2);  }
         catch(int) { goto loop7; }
         cout<<"请输入需要从str2连接到str1末尾的内容的位数：";
         int i;cin>>i;
         cout<<"输出str1的内容： ";
         mystrncat(str1,str2,i);
         break;
         } 
    case 6: {
         mystring str1(" ");
         loop8:cout<<"请向str1中输入内容"<<endl<<"str1:";
         try { char a[10];cin>>a;str1=a;
         checkstring(str1); }
         catch(int) { goto loop8; }
         cout<<"将str1中的大写字母换成小写字母后输出"<<endl<<"str1：";
         mystrlwr(str1);
         break;
         }        
    case 7: {
         mystring str1(" ");
         loop9:cout<<"请向str1中输入内容"<<endl<<"str1：";
         try{ char a[10];cin>>a;str1=a;
         checkstring(str1);}
         catch(int) {  goto loop9; }
         cout<<"将str1中的小写字母换成大写字母后输出"<<endl<<"str2：";
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
