#include <iostream>
#include <cmath>
using namespace std;

void one();
void two();
void three();
void four();
void five();
void six();

int main()
{
	int choose;

	cout<<"歡迎使用國立清華大學普通物理(二)Chp34自動解題系統"<<endl;
	cout<<"請注意,本程式無法處理例外的輸入"<<endl;
	cout<<"如果輸入錯誤,將可能陷入無窮迴圈！"<<endl;
	cout<<"請自行取近似值"<<endl;
	do{
		cout<<"1.Find λ medium(μm) for Earth, considered a _?_K blackbody."<<endl<<endl; 
		cout<<"2.The human eyes is ...What's the correspoding energy of photon..."<<endl<<endl;
		cout<<"3.At what energy level does the Bohr hydrogen atom have diameter _?_nm?"<<endl<<endl;
		cout<<"4.How slowly must an electron be moving for its de Brogile wavelength to be _?_mm?"<<endl<<endl;
		cout<<"5.Find the minimum energy for a neutron in a certain nucleus whose diameter is _?_fm?"<<endl<<endl;
		cout<<"6.Find the rate of photon production by a radio antenna broadcasting _?_kW at _?_MHz"<<endl<<endl;
		cout<<"若要結束,請輸入0"<<endl;
		cout<<"請選擇題目：";
		cin>>choose;
		switch(choose){
			case 0:			break;
			case 1:one(); 	break;
			case 2:two(); 	break;
			case 3:three();	break;
			case 4:four(); 	break;
			case 5:five();	break;
			case 6:six();	break;
			default: cout<<"不要鬧！"<<endl<<endl;
		}
	}while(choose!=0);

	cout<<"謝謝您的使用,祝您有愉快的一天:D"<<endl;
	
	return 0;
}
void one(){
	int blackbody;
	double answer;	

	cout<<"請輸入黑體之溫度(k)：";
	cin>>blackbody;
	answer=(4.11/blackbody)*pow(10,3);
	cout<<"波長為 "<<answer<<" um"<<endl<<endl;
}
void two(){
	double answer,waveleng,temp;

	cout<<"請輸入波長（nm）:";
	cin>>waveleng;
	temp=1240.0/waveleng;
	answer=temp*1.6;
	cout<<"能量為："<<answer<<"*10^-19 J"<<endl<<endl;
}
void three(){
	double answer,diameter,temp;

	cout<<"請輸入直徑（nm）:";
	cin>>diameter;
	temp=diameter/(2*0.0529);	
	answer=sqrt(temp);
	cout<<"Energy level = "<<answer<<endl<<endl;
}
void four(){
	double answer,waveleng,temp,temp1;

	cout<<"請輸入波長（mm）:";
	cin>>waveleng;
	temp=waveleng*pow(10,-3);
	temp1=(6.63*pow(10,-34))/(9.11*pow(10,-31));
	answer=(temp1/temp);
	cout<<"波速為 "<<answer<<" m/s"<<endl<<endl;
}
void five(){
	double answer,diameter,temp,temp1,temp2;

	cout<<"請輸入直徑（fm）:";
	cin>>diameter;
	temp=(197.3*pow(10,6))/(2*diameter*pow(10,-15));
	temp1=pow(temp,2);
	temp2=1/(2*940*pow(10,6));
	answer=(temp1*temp2)/pow(10,33);
	cout<<"能量為："<<answer<<" KeV"<<endl<<endl;

}
void six(){
	double answer,energy,freq,temp;
	
	cout<<"請輸入能量（kW）:";
	cin>>energy;
	cout<<"請輸入頻率（MHz）:";
	cin>>freq;
	temp=(6.626*pow(10,-34))*(freq*pow(10,6));
	answer=((energy*pow(10,3))/temp)/pow(10,28);
	cout<<"rate = "<<answer<<endl<<endl;
}
