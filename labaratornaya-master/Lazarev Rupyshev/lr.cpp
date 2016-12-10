#include <conio.h>
#include <iostream>

using namespace std;  



 int summ(int a, int b){ 
	 return a+b; 
 }

 int minus(int a, int b) {
	 return a-b;
 }

 int umnozhenie(int a, int b){
	 int sum = 0;
	 for (int i = 0; i< b; ++i){
		 sum=sum+a;
	 }
	 return sum;
 }
 
 int delenie (int a, int b){
 int zn=0;
 for (int i=0; a !=0; ++i) {
	 int z=a;
	 a=a-b;
	 if (a<=0) {
		 break;
	 }
	 else {
		 ++zn; }
 }
 return zn;
 }
 
	 
	 
	 void main( ){
	 int a,b;
	 cout<<"Vvedite dva 4isla"<<endl;
	 cin>>a;
     cin >>b;
	 cout <<"Summa:"<<summ(a,b) << endl; 
	 cout <<"Minus:"<< minus(a,b)<< endl;
	 cout <<"Umnozhit:"<< umnozhenie(a,b)<<endl;
	 cout <<"Delenie:" <<delenie(a,b)<<endl;
	 system("pause");
 }

    