#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstring>
class persontype{
	char name[25];
	int age;
	public:
		persontype();
		void getperson();
		void printperson();
		bool isregistered(char pn[]);
};
persontype::persontype(){
	strcpy(name,"unknown");
	age=0;
}
void persontype::getperson(){
	cout<<"enter your name please"<<endl;
	cin>>name;
	cout<<"enter your age please"<<endl;
	cin>>age;
}
void persontype::printperson(){
	cout<<strupr(name)<<"/t/t/t"<<age;
}
bool isregistered(char surname[]){
	if(strcmp(name,surname)==0){
	return true;
	}
	else 
	return false;
}

int main(){
	char uchoice;
	char pname[25];
	int counter=0,loc=-1;
ofstream outfile;
ifstream infile;
fstream iofile;
bool ismodified=false;
do{
	cout<<"1.REGISTER NEW PERSON"<<endl;
	cout<<"2.SHOW LIST OF PERSON"<<endl;
	cout<<"3.MODIFY AN EXISTING PERSONS FILE"<<endl;
	cout<<"4.EXIT"<<endl;
	cout<<"enter your choice "<<endl;
	uchoice=getche();
	switch(uhcoice){
		case'1':
			outfile.open("peoplelist.dat",ios::out|ios::binary|ios::app); 
			if(outfile.is_open()){
				cout<<"NEW PERSONS REGISTRATION"<<endl;
				person.getperson();
				outfile.write((char*)&person,sizeof (person));
                cout<<"saved succesfully"<<endl;
                outfile.close();
			}
			else{
				cout<<"unable to open a file registration system!";
			}
			break;
			case'2':
				infile.open("peoplelist.dat",ios::in|ios::binary);
				if(infile.is_open()){
					cout<<"LIST OF REGISTERED PERSONS ARE HERE"<<ENDL;
					cout<<"no. /t name /t/t age";
					counter=0;
					while(infile.read((chat*)&person,sizeof (person))){
						cout<<++counter<</t;
						person.printperson();
					}
					cout<<"total number of registered individuals are"<<counter;
					infile.close();
				}
				else
				cout<<"*********************************************************";
				getch();
				break;
				case'3':
					cout<<"MODIFY AN EXISTING PERSONS REGISTERED FILE"<<endl;
					cout<<endl;
					cout<<"enter the name of the person to modify"<<endl;
					cin>>pname;
					iofile.open("peoplelist.dat",ios::in|ios::out|ios::binary);
					iofile.seekg(0,ios::beg);
                    loc=-1;				
					if (iofile.is_open()){
					 while(iofile.read((char*)&person,sizeof(person))){
					 	loc++;
					 	ismodified=person.isregistered(pname);
					if(ismodified){
						person.getperson();
						iofile.seekp(loc*,size(person));
						iofile.write((char*)&person,sizeof (people));
						break;
					}
					 }
					 if(ismodified){
					 	cout<<"person is modified";
					 }
					 else{
					 	cout<<pname<<"  is not registered";
					 	iofile.close();
					 }
					 }
					 else{
					 	cout<<"unable to open file";
					 	getch();
					 	break;
					 }
					 case'4':
					 	cout<<"THE PROGRAM IS NOW CLOSING"<,endl;
					 	getch();
					 	break;
					 	default:
					 		cout<<"invalid input"<<endl;
					 		getch();
					 		break;
					
	}
}while(uchoice!='4');
return 0;
}