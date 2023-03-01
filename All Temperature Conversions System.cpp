#include<iostream>
using namespace std;

int main()
	
{	
	system("color 4F");
	cout<<endl;
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"All Temperature Conversions System" <<endl;
	cout<<endl;
	cout<<"From which temperature you want to convert?\n";
	cout<<endl;
	cout<<"1. Celsius\n";
	cout<<"2. Fahreheit\n";
	cout<<"3. Kelvin\n";
	cout<<endl;
	int select;
	cout<<"Select your conversion = ";
	cin>>select;
	
	switch(select){
		case 1:
			cout<<endl;
			cout<<"To which temperature you want to convert?\n";
			cout<<endl;
			cout<<"1. Celsius\n";
			cout<<"2. Fahreheit\n";
			cout<<"3. Kelvin\n";
			cout<<endl;
			cout<<"Select your operation = ";
			cin>>select;
			cout<<endl;
			float temp;
			cout<<"Enter your temperature in Celsius = ";
			cin>>temp;
			if(select==1){
				cout<<endl;
				cout<<"Your conversion from Celsius to Celsius = " << temp;
			} else if(select==2){
				float celtofah= (9*temp)/5+32;
				cout<<endl;
				cout<<"Your Conversion from Celsius to fahrenheit = " <<celtofah;
				cout<<endl;
			} else if(select==3){
				float celtokel=temp+273;
				cout<<endl;
				cout<<"Your Conversion from Celsius to Kelvin = " <<celtokel;
			}
			break;
			
			case 2:
			cout<<endl;
			cout<<"To which temperature you want to convert?\n";
			cout<<endl;
			cout<<"1. Celsius\n";
			cout<<"2. Fahreheit\n";
			cout<<"3. Kelvin\n";
			cout<<endl;
			cout<<"Select your operation = ";
			cin>>select;
			cout<<endl;
			if(select==0 || select>3){
				cout<<"Enter valid operation.";
				break;
			}
			float temp1;
			cout<<"Enter your temperature in Fahrenheit = ";
			cin>>temp1;
			if(select==1){
				cout<<endl;
				float fahtocel=(temp1-32)*0.5555;
				cout<<"Your conversion from Fahrenheit to Celsius = " << fahtocel;
			} else if(select==2){
				cout<<endl;
				cout<<"Your Conversion from Fahrenheit to fahrenheit = " <<temp1;
				cout<<endl;
			} else if(select==3){
				float fahtokel=((temp1-32)/180)*100+273;
				cout<<endl;
				cout<<"Your Conversion from Fahrenhiet to Kelvin = " <<fahtokel;
			} 
			break;
			case 3:
				cout<<endl;
			cout<<"To which temperature you want to convert?\n";
			cout<<endl;
			cout<<"1. Celsius\n";
			cout<<"2. Fahreheit\n";
			cout<<"3. Kelvin\n";
			cout<<endl;
			cout<<"Select your operation = ";
			cin>>select;
			cout<<endl;
			if(select==0 || select>3){
				cout<<"Enter valid operation.";
				break;
			}
			cout<<endl;
			float temp2;
			cout<<"Enter your temperature in Kelvin = ";
			cin>>temp2;
			if(select==1){
				cout<<endl;
				float keltocel=temp2-273;
				cout<<"Your conversion from Kelvin to Celsius = " << keltocel;
			} else if(select==2){
				float keltofah= ((temp2-273)/100)*180+32;
				cout<<endl;
				cout<<"Your Conversion from Kelvin to fahrenheit = " <<keltofah;
				cout<<endl;
			} else if(select==3){
				cout<<endl;
				cout<<"Your Conversion from Kelvin to Kelvin = " <<temp2;
			} 
			break;
				default:
					cout<<endl;
					cout<<"Enter valid operation";
	}
	
	return 0;
}	
