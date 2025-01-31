#include <iostream>
#include <fstream>
#include<cstring>
#include<iomanip>

using namespace std;
class tourist{
    public:
 string name;
 string country;
 string address;
 string email;
 string nationality;
 string language;
 void hotel(int n);
 void tour_service(int m);
 void trans();
 double sum=0;
 double total_cost(double cost){
    sum+=cost;
    return sum;
 
}
void payment();
void receipt(){
    fstream check;
    char resp;
    string line;
    cout<<"do you want to see your receipt? (y/n) : ";
    cin>>resp;
    if(resp=='Y'|| resp=='y'){
    check.open("registration.txt",ios::in);
    while(!check.eof()){
        getline(check,line);
        cout<<endl<<line<<endl;
        }

        check.close();}

}
};
tourist tour;
void registration();
void reservation();

int main() {
    int choice,choice1;
    Again:
    cout <<setw(10)<< "\n\t************  WELCOME TO ETHIO-TOURIST RESERVATION SYSTEM  *********************** \n\n";
    cout<<"CHOOSE FROM THE FOLLOW TO PROCEED: "<<endl;
    cout<<setw(10)<<"\n\t\t 1. DESCRITION FOR ETHIOPIA TOURIST ATTRACTIONS "<<endl;
    cout<<setw(10)<<"\n\t\t 2. REGISTRATION "<<endl;
    cout<<setw(10)<<"\n\t\t 3. EXIT "<<endl;
    cin>>choice1;
    switch (choice1){
        case 1:{
             do{
       
    cout <<setw(5)<< "\n What do you want to vist from the following options: \n";
    cout <<setw(12)<< "\t  1. Historical Heritages.\n";
    cout <<setw(12)<< "\t  2. National Parks.\n";
        cout <<setw(12)<<"\t3. Natural Resources.\n";
        cout<<setw(12)<<"\t 4. Exit \n";
    cin >> choice;
    switch (choice) { // FOR DESCRIPTION...........
        case 1:
            {   // DISPLAYS THE DESCRIPTIONS OF HISTORICAL HERITAGE.........
                fstream desc;
                desc.open("Historical_heritage.txt", ios::in);
                string file;
                while (getline(desc, file)) {
                    cout << file << endl;
                }
                desc.close();
                break;
            }
        case 2:
            { // DISPLAYS THE DESCRIPTIONS OF NATIONAL PARKS
                fstream desc2;
                desc2.open("National_park.txt", ios::in);
                string file2;
                while (getline(desc2, file2)) {
                    cout << file2 << endl;
                }
                desc2.close();
                break;
                
            }
        case 3:
            {// DISPLAYS THE DESCRIPTIONS OF NATURAL RESOURCES...............
                fstream desc3;
                desc3.open("Natural_resource.txt", ios::in);
                string file3;
                while (getline(desc3, file3)) {
                    cout << file3 << endl;
                }
                desc3.close();
                break;
            }
            case 4:
            
            goto Again;
        
            
        default:
            cout << "Invalid input!" << endl;
            break;
    }
    }while(choice!=4);
        }
      
    
     case 2:
       {
    registration();
     goto Again;

       }
       case 3:
       cout<<"\t******** THANK YOU FOR VISITING US ******* "<<endl;
        break;
        default:
     cout<<"IN VALID INPUT !!"<<endl;
    }
    return 0;
}

void registration(){ //REGISTRATION FUNCTION DEFITIONS...........
    edit:
     cout<<setw(10)<<" WELCOME TO OUR RESGISTRATION PAGE !!!"<<endl;

 cout<<setw(20)<<"Enter your full name "<<endl;
 cin.ignore();
     getline(cin,tour.name);
     
     cout<<setw(20)<<"Enter your country"<<endl;
     getline(cin,tour.country);
   
     cout<<setw(20)<<"What language do you speak "<<endl;
     getline(cin,tour.language);
     
     cout<<setw(20)<<"Enter your nationality"<<endl;
     getline(cin,tour.nationality);
     
     cout<<setw(20)<<"Enter your address"<<endl;
     getline(cin,tour.address);
     
    cout<<"Enter you email address"<<endl;
    getline(cin,tour.email);

ofstream file;
 file.open("registration.txt");
   file<<"NAME : "<< tour.name<<endl;
   file<<"COUNTRY : "<<tour.country<<endl;
   file<<"LANGUAGE: "<<tour.language<<endl;
   file<<"NATIONALITY : "<<tour.nationality<<endl;
   file<<" ADDERSS: "<<tour.address<<endl;
   file<<"EMAIL ADDERSS: "<<tour.email<<endl;
 file.close();
ifstream file2;
string information;
cout<<setw(5)<<" HERE IS YOUR INFORMATION "<<endl;
file2.open("registration.txt");
while(!file2.eof()){
getline(file2,information);

cout<<information<<endl;

}
file2.close();
char ch;
int con;
cout<<"DO YOU CONFIRM THE INPUTED  YOUR INFORMATION IS CORRECT ? Y/N"<<endl;
cin>>ch;
switch (ch){
    case 'y':
    case 'Y':
    cout<<" CONGRADULATIONS,YOUR HAVE  REGISTERED SUCCESSFULLY !!!!"<<endl;
    cout<<"TO CONTINUE PRESS 1 or to exit press any number "<<endl;
    cin>>con;
    if (con==1){
        reservation();

    }

    break;
    case 'n':
    case 'N':
    cout<<" please edit your information again "<<endl;
    goto edit;

}
}
void reservation()//RESERVATION FUNCTION DEFITIONS..........
{ 
     int choice3;
     
    cout<<"************************************************************************************************************************"<<endl;
 cout<<" CHOOSE A PLACE TO VIST         "<<endl;
 cout<< " FROM HISTORICAL HERITAGES    "<<endl;
 cout<<"1. Abba Jifar          "<<endl;
 cout<<"2. Aksum             "<<endl;
 cout<<"3. lalibela               "<<endl;
 cout<<"4. Harar jugol               "<<endl;
 cout<<"5. Konso Cultural Landscape     "<<endl;
cout<<"**********************************************************************************************************************************"<<endl;
 cout<< " FROM NATIONAL PARKS    "<<endl;
 cout<<"******************************************************************************************************************************"<<endl;
 cout<<"6. BALE MOUNTIANS NATIONAL PARK  "<<endl;
 cout<<"7. SEMAIN MOUNTIAN NATIONAL PARK "<<endl;
 cout<<"8. AWASH NATIONAL PARK "<<endl;
 cout<<"9. GAMBELLA NATIONAL PARK  "<<endl;
 cout<<"10. ABIJATA SHALLA NATIONAL PARK  "<<endl;
cout<<"********************************************************************************************************************************"<<endl;
cout<<" FROM NATURAL RESOURCES "<<endl;
cout<<"*********************************************************************************************************************************"<<endl;
cout<<"11.  Ertale "<<endl;
cout<<"12. WANCHI "<<endl;
 cout<<"13. Blue Nile Fall "<<endl;
 cout<<"14. Sof-Omar Cave "<<endl;
cin>>choice3;
switch(choice3){
case 1:{
 tour.hotel(1);
 tour.tour_service(1);
 tour.trans();
 tour.payment();
 tour.receipt();
 break;}
 case 2:{
 tour.hotel(2);
  tour.tour_service(2);
  tour.trans();
  tour.payment();
  tour.receipt();
  break;}
 case 3:{
 tour.hotel(3);
  tour.tour_service(3);
  tour.trans();
  tour.payment();
  tour.receipt();
   break;}
 case 4:{
 tour.hotel(4);
  tour.tour_service(4);
  tour.trans();
  tour.payment();
  tour.receipt();
   break;}
 case 5:{
 tour.hotel(5);
  tour.tour_service(5);
  tour.trans();
  tour.payment();
  tour.receipt();
   break;}
 case 6:{
tour.hotel(6);
 tour.tour_service(6);
 tour.trans();
 tour.payment();
 tour.receipt();
 break;}
 case 7:{
 tour.hotel(7);
  tour.tour_service(7);
  tour.trans();
  tour.payment();
  tour.receipt();
   break;}
 case 8:{
 tour.hotel(8);
  tour.tour_service(8);
  tour.trans();
  tour.payment();
  tour.receipt();
   break;}
 case 9:{
 tour.hotel(9);
  tour.tour_service(9);
  tour.trans();
  tour.payment();
  tour.receipt();
   break;}
 case 10:{
 tour.hotel(10);
  tour.tour_service(10);
  tour.trans();
  tour.payment();
  tour.receipt();
 break;}
 case 11:{
 tour.hotel(11); 
 tour.tour_service(11);
 tour.trans();
 tour.payment();
 tour.receipt();
  break;}
case 12:{
 tour.hotel(12);
  tour.tour_service(12);
  tour.trans();
  tour.payment();
  tour.receipt();
   break;}
 case 13:{
 tour.hotel(13); 
 tour.tour_service(13);
 tour.trans();
 tour.payment();
 tour.receipt();
  break;}
  case 14:{
tour. hotel(14);
 tour.tour_service(14);
 tour.trans();
 tour.payment();
 tour.receipt();
  break;
  }





}
cout<<" Saved Successfully";

}
void tourist::hotel(int n){
    char chh;
    int rev,days;
fstream file;
cout<<"\n_______________________ WELCOME TO HOTEL RESERVATION________________________  "<<endl;
cout<<" TO RESERVE HOTEL PRESS 1 OR ANY NUMBER TO EXIST "<<endl;
cin>>rev;
if(rev==1){
   switch(n){

case 1:
    cout<<"The reccommaded HOTEL IN NEAR ABBA JIFAR IS 'AWETU GARND HOTEL'"<<endl;
    cout<<"\tLOCATION: JIMMA CITY"<<endl;
    cout<<"RATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 33$ / night "<<endl;
    cout<<" \nDO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*33);
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: AWETU GRAND HOTEL(RESERVED)";
        file.close();
        cout<<"AWETU GRAND HOTEL IS SUCCESSFULLY RESERVED "<<endl;
     }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }

    break;

   
   case 2:
    cout<<"The reccommaded HOTEL IN NEAR AKSUM IS 'OBELISK HOTEL'"<<endl;
    cout<<"\tLOCATION: AKSUM "<<endl;
    cout<<"RATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 40$ / night "<<endl;
    cout<<" DO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*40);
    
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: OBELISK HOTEL(RESERVED)"<<endl;
        file.close();
        cout<<"OBELISK HOTEL IS SUCCESSFULLY RESERVED "<<endl;
         }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }


    break;
    case 3:
    cout<<"The reccommaded HOTEL IN NEAR LALIBELA IS 'ZAN-SEYOUM HOTEL'"<<endl;
    cout<<"\tLOCATION: LALIBELA "<<endl;
    cout<<"RATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 30$ / night "<<endl;
    cout<<" DO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
        cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*30);
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: ZAN-SEYOUM  HOTEL(RESERVED)"<<endl;
        file.close();
        cout<<"ZAN-SEYOUM  HOTEL IS SUCCESSFULLY RESERVED "<<endl;
      }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }

    break;
    case 4:
    cout<<"The reccommaded HOTEL NEAR HARAR JUGOL IS 'GRAND GATO HOTEL''"<<endl;
    cout<<"\tLOCATION: HARAR(RESERVED) "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 39$ / night "<<endl;
    cout<<" DO YOU WANT TO RESERVE ? Y/N: "<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
        cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*39);
    
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: GRAND GATO HOTEL(RESERVED)"<<endl;
        file.close();
        cout<<"GRAND GATO HOTEL IS SUCCESSFULLY RESERVED "<<endl;
     }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }


    break;
     case 5:
    cout<<"The recommaded HOTEL NEAR Konso Cultural Landscape  IS 'KONSO GREEN HOTEL''"<<endl;
    cout<<"\tLOCATION: HARAR "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 40$ / night "<<endl;
    cout<<" DO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
        cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*40);
        
    
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: KONSO GREEN HOTEL(RESERVED) "<<endl;
        file.close();
        cout<<"KONSO GREEN HOTEL IS SUCCESSFULLY RESERVED "<<endl;
    }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }


    break;
    
case 6:
    cout<<"The reccommaded HOTEL NEAR  BALE MOUNTIANS NATIONAL PARK  IS 'MADO HOTEL''"<<endl;
    cout<<"\tLOCATION: ROBE CITY "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 27$ / night "<<endl;
    cout<<" DO YOU WANT TO RESERVE ? Y/N: "<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
        cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*27);
    
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: KONSO GREEN HOTEL(RESERVED) "<<endl;
        file.close();
        cout<<"KONSO GREEN HOTEL IS SUCCESSFULLY RESERVED "<<endl;
    }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }
    break;
    case 7:
    cout<<"The reccommaded HOTEL NEAR  SEMAIN MOUNTIAN NATIONAL PARK  IS 'GRAND GATO AND SPA''"<<endl;
    cout<<"\tLOCATION: GONDER "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 41$ / night "<<endl;
    cout<<" DO YOU WANT TO RESERVE ? Y/N: "<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
        cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*41);
    
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: GRAND GATO AND SPA HOTEL(RESERVED) "<<endl;
        file.close();
        cout<<"GRAND GATO AND SPA HOTEL IS SUCCESSFULLY RESERVED "<<endl;
     }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }

    break;
      
      case 8:
    cout<<"The recommaded HOTEL NEAR  AWASH NATIONAL PARK  IS 'GENET''"<<endl;
    cout<<"\tLOCATION: AWASH "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 31$ / night "<<endl;
    cout<<" DO YOU WANT TO RESERVE ? Y/N: "<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*31);
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: GENET  HOTEL(RESERVED) ";
        file.close();
        cout<<"GENET HOTEL IS SUCCESSFULLY RESERVED "<<endl;
    }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }

   break;
   case 9:
    cout<<"The recommaded HOTEL NEAR  GAMBELLA NATIONAL PARK  IS 'BARO GAMBELLA HOTEL''"<<endl;
    cout<<"\tLOCATION: GAMBELLA "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 38$ / night "<<endl;
     cout<<" DO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*38);
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: BARO GAMBELLA HOTEL(RESERVED) ";
        file.close();
        cout<<"BARO GAMBELLA HOTEL IS SUCCESSFULLY RESERVED "<<endl;
    }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }

   break;
   case 10:
    cout<<"The recommaded HOTEL IN NEAR ABIJATA SHALLA NATIONAL PARK IS 'ZION TRAN LODGE HOTEL'"<<endl;
    cout<<"\tLOCATION: SHASHAMENE "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 35$ / night "<<endl;
     cout<<" DO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
       cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*35);
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: ZION TRAN LODGE HOTEL(RESERVED)"<<endl;
        file.close();
        cout<<"ZION TRAN LODGE HOTEL IS SUCCESSFULLY RESERVED "<<endl;
     }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }


    break;
     case 11:
    cout<<"The reccommaded HOTEL IN NEAR Ertale IS 'RUFTANA HOTEL'"<<endl;
    cout<<"LOCATION: SEMERA,AFAR "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"PRICE: 30$ / night "<<endl;
     cout<<" DO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
    cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*30);
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: RUFTANA HOTEL(RESERVED)"<<endl;
        file.close();
        cout<<"RUFTANA HOTEL IS SUCCESSFULLY RESERVED "<<endl;
    }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }
    break;
    case 12:
    cout<<"The reccommaded HOTEL IN NEAR WANCHI IS 'WANCHI LAKE RESORT '"<<endl;
    cout<<"\tLOCATION: WANCHI"<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 123$ / night "<<endl;
     cout<<" DO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
    cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*123);
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: WANCHILAKE RESORT(RESERVED)"<<endl;
        file.close();
        cout<<"WANCHILAKE RESORT IS SUCCESSFULLY RESERVED "<<endl;
     }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }



    break;
    case 13:
    cout<<"The reccommaded HOTEL IN NEAR  Blue Nile Fall IS 'WYYNE HOTEL '"<<endl;
    cout<<"\tLOCATION: BAHRIRDAR "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 34$ / night "<<endl;
    cout<<" DO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
    cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*34);
        
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: WYYNE HOTEL(RESERVED)";
        file.close();
        cout<<"WYYNE HOTEL IS SUCCESSFULLY RESERVED "<<endl;
    }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }


    break;
   case 14:
    cout<<"The reccommaded HOTEL IN NEAR  Sof-Omar Cave IS 'TOKKUMA HOTEL '"<<endl;
    cout<<"\tLOCATION: BALE ROBE "<<endl;
    cout<<"\tRATE: 5 STAR"<<endl;
    cout<<"\tPRICE: 20$ / night "<<endl;
    cout<<" DO YOU WANT TO RESERVE ? Y/N :"<<endl;
     cin>>chh;
     if(chh=='y'||chh=='Y'){
    
       cout<<" FOR HOW MANY DAYS YOUR TOURING LAST ?"<<endl;
    cin>>days;
        total_cost(days*20);
        file.open("registration.txt",ios::app);
        
        file<<"HOTEL: TOKKUMA HOTEL(RESERVED)"<<endl;
        file.close();
        cout<<"TOKKUMA  HOTEL IS SUCCESSFULLY RESERVED "<<endl;
    }
     else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }



    break;
   

}}
 else{
        cout<<" HOTEL RESERVATION HAS BEEN CANCELLED !!!"<<endl;
     }
}


void tourist::tour_service(int m){
    int cht;
    cout<<"__________________WELCOME TO TOUR-SERVICE RESEVATION_____________________"<<endl;
cout<<"press 1 to continue for tour resevartion or press any number to cancel ? "<<endl;
cin>>cht;
switch(cht){
case 1:
{
switch(m){
case 1:
{
cout<<"\t*TOUR-SERVICES FOR JIMMA ABBA JIFAR PALACE*:\n";
cout<<"WORKING HOURS: \n";
cout<<"MONDAY - FRIDAY: \n";
cout<<"\t9:00AM-12:30PM (IN THE MORNING)\n";
cout<<"\t2:00PM-5:30PM (IN THE AFTERNOON)\n";
cout<<"SATURDAY & SUNDAY: \n";
cout<<"\t2:00PM-5:30PM (IN THE AFTERNOON)\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 100$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 150$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(150);
break;
}
case 2:
{
cout<<"\t*TOUR-SERVICES FOR AKSUM*: \n";
cout<<"WORKING HOURS: \n";
cout<<"MONDAY - SUNDAY (EVERY DAY): \n";
cout<<"\t2:00AM-5:30PM\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 100$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 150$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(150);
break;   
}
case 3:
{
cout<<"\t*TOUR-SERVICES FOR LALIBELA CHURCH*: \n";
cout<<"WORKING HOURS: \n";
cout<<"MONDAY - SUNDAY (EVERY DAY): \n";
cout<<"\t2:30AM-12:30PM (IN THE MORNING)\n";
cout<<"\t1:30PM-5:30PM (IN THE AFTERNOON)\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 100$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 150$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(150);
break;
}
case 4:
{
cout<<"\t*TOUR-SERVICES FOR HARAR JUGOL*: \n";
cout<<"WORKING HOURS: \n";
cout<<"MONDAY - WEDNESDAY & FRIDAY: \n";
cout<<"\t6:00AM-1:00PM (IN THE MORNING)\n";
cout<<"ON THURSDAY: \n";
cout<<"\t6:00AM-12:00PM (IN THE MORNING)\n";
cout<<"ON SATURDAY: \n";
cout<<"\t6:00AM-12:00PM (IN THE MORNING)\n";
cout<<"ON SUNDAY: \n";
cout<<"\t1:00AM-11:00PM\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 100$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 150$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(150);
break;
}
case 5:
{
cout<<"\t*TOUR-SERVICES FOR KONSO CULTURAL LANDSCAPE*: \n";
cout<<"WORKING HOURS: \n";
cout<<"MONDAY - SUNDAY (EVERY DAY): \n";
cout<<"\tOPEN 24/7\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 100$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 150$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(150);
break; 
}
case 6:
{
cout<<"\t*TOUR-SERVICES FOR BALE MOUNTAINS NATIONAL PARK*: \n";
cout<<"WORKING HOURS: \n";
cout<<"MONDAY - FRIDAY: \n";
cout<<"\t8:30AM-5:30PM\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 50$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 100$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE? (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(100);
break;
}
case 7:
{
cout<<"\t*TOUR-SERVICES FOR SEMEIN NATIONAL PARK*: \n";
cout<<"WORKING HOURS: \n";
cout<<"MONDAY - FRIDAY: \n";
cout<<"\t7:30AM-5:30PM \n";
cout<<"SATURDAY & SUNDAY: \n";
cout<<"\t8:30-11:30AM \n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 50$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 100$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(100);
break;
}
case 8:
{
cout<<"\t*TOUR-SERVICES FOR AWASH NATIONAL PARK*: \n";
cout<<"WORKING HOURS: \n";
cout<<"MONDAY - FRIDAY: \n";
cout<<"\t8:30AM-5:30PM\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 50$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 100$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(100);
break;
}
case 9:
{

cout<<"\t*TOUR-SERVICES GAMBELLA NATIONAL PARK*: \n";
cout<<"WORKING HOURS: \n";
cout<<"MONDAY-FRIDAY \n";
cout<<"8:00AM-5:00PM\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 50$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 100$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(100);
break;
}
case 10:
{
cout<<"\t* TOUR-SERVICES FOR ABIJATTA SHALLA*: \n";
cout<<"WORKING HOUR: \n";
cout<<"MONDAY-FRIDAY \n";
cout<<"8:30AM-5:30PM\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 50$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 100$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(100);
break;
}
case 11:
{
cout<<"\t*TOUR-SERVICES FOR ERTALE*: \n";
cout<<"WORKING HOUR: \n";
cout<<"MONDAY-FRIDAY\n";
cout<<"8:30AM-5:30PM\n";
cout<<"SATURDAY AND SUNDAY\n";
cout<<"8:30AM-12:00PM\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 0$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 50$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N):\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(50);
break;
}
case 12: 
{
cout<<"TOUR-SERVICES FOR WANCHI*: \n";
cout<<"WORKING HOUR: \n";
cout<<"MONDAY - FRIDAY: \n";
cout<<"\t9:00AM-12:30PM (IN THE MORNING)\n";
cout<<"\t2:00PM-5:30PM (IN THE AFTERNOON)\n";
cout<<"SATURDAY & SUNDAY: \n";
cout<<"\t2:00PM-5:30PM (IN THE AFTERNOON)\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 30$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 80$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N)\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(80);
break;
}
case 13:
{
cout<<"TOUR-SERVICES FOR BLUE NILE FALL*: \n";
cout<<"WORKING HOUR: \n";
cout<<"MONDAY-SUNDAY (EVERYDAY) \n";
cout<<"7:30AM-5:30PM\n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 30$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 80$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N)\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(80);
break;
}
case 14:
{
cout<<"TOUR-SERVICES FOR SOF UMAR CAVE*: \n";
cout<<"WORKING HOUR: \n";
cout<<"MONDAY - FRIDAY: \n";
cout<<"\t7:30AM-5:30PM \n";
cout<<"SATURDAY & SUNDAY: \n";
cout<<"\t8:30-11:30AM \n\n";
cout<<"PAYMENT FOR TOUR SERVICES: \n";
cout<<"\tENTERANCE FEE : 30$\n";
cout<<"\tPAYMENT FOR TOUR GUIDE: 50$\n";
cout<<"\tTOTAL: 80$\n";
char choose;
cout<<"DO YOU WANT TO CONTINUE: (Y/N)\n";
cin>>choose;
if(choose=='y'||choose=='Y') total_cost(80);break;
}
default:cout<<" INVALID INPUT !!"; break;
}
break;}
default:cout<<"tourist reservation has been cancelled!!"; break;
}
}

void tourist::trans(){
    fstream translator;
int choice;
cout << "DO YOU WANT A TRANSLATOR? \n\t\t 1: YES \t 2: NO";
cout<<endl;
cin>>choice;
if (choice==1){
int op;
char ch;
cout<<"TRANSLATOR ARE  AVAILABLE IN THE FOLLOWING LANGUAGES: \n";
cout<<"1. ENGLISH\n 2.MANDARIN\n 3. SPANISH\n 4. FRENCH \n 5. RUSSIAN\n YOU CAN CHOOSE FROM THE ABOVE LANGUAGES:\n ";
cin>>op;
switch(op){
case 1:
{
cout<<"TRANSLATOR'S FEE = 30$ PER DAY\n";
cout<<"DO YOU WANT TO CONTINUE (Y/N): \n";
cin>>ch;
if(ch=='Y'||ch=='y'){
total_cost(30);
translator.open("registration.txt",ios::app);
translator<<"\n TRANSLATOR: ENGLISH\n";
translator.close();

cout<<"*ENGLISH TRANSLATOR HAS BEEN ASSIGNED TO YOU SUCCESFULLY*\n";
}
else cout<<"TRANSLATOR HAS BEEN CANCELLED!\n";
break;
}
case 2:
{
cout<<"TRANSLATOR'S FEE = 25$ PER DAY\n";
cout<<"DO YOU WANT TO CONTINUE (Y/N): \n";
cin>>ch;
if(ch=='Y'||ch=='y'){
total_cost(25);
translator.open("registration.txt",ios::app);
translator<<"\n TRANSLATOR: MANDARIN \n";
translator.close();
cout<<"*MANDARIN TRANSLATOR HAS BEEN ASSIGNED TO YOU SUCCESFULLY*\n";
}
else cout<<"TRANSLATOR HAS BEEN CANCELLED!\n";
break;
}
case 3:
{
cout<<"TRANSLATOR'S FEE = 35$ PER DAY\n";
cout<<"DO YOU WANT TO CONTINUE (Y/N): \n";
cin>>ch;
if(ch=='Y'||ch=='y'){
total_cost(35);
translator.open("registration.txt",ios::app);
translator<<"\n TRANSLATOR: SPANISH \n";
translator.close();
cout<<"*SPANISH TRANSLATOR HAS BEEN ASSIGNED TO YOU SUCCESFULLY*\n";
}
else cout<<"TRANSLATOR HAS BEEN CANCELLED!\n";
break;
}
case 4:
{
cout<<"TRANSLATOR'S FEE = 40$ PER DAY\n";
cout<<"DO YOU WANT TO CONTINUE (Y/N): \n";
cin>>ch;
if(ch=='Y'||ch=='y'){
total_cost(40);
translator.open("registration.txt",ios::app);
translator<<"\n TRANSLATOR: FRENCH \n";
translator.close();
cout<<"*FRENCH TRANSLATOR HAS BEEN ASSIGNED TO YOU SUCCESFULLY*\n";
}
else cout<<"TRANSLATOR HAS BEEN CANCELLED!\n";
break;
}
case 5:
{
cout<<"TRANSLATOR'S FEE = 38$ PER DAY\n";
cout<<"DO YOU WANT TO CONTINUE (Y/N): \n";
cin>>ch;
if(ch=='Y'||ch=='y'){
total_cost(38);
translator.open("registration.txt",ios::app);
translator<<"\n TRANSLATOR: RUSSIAN \n";
translator.close();
cout<<"*RUSSIAN TRANSLATOR HAS BEEN ASSIGNED TO YOU SUCCESFULLY*\n";
}
else cout<<"TRANSLATOR HAS BEEN CANCELLED!\n";
break;
}
default: cout<<"INVALID INPUT!\n";break;
}
}
}

void tourist::payment(){
    fstream pay;
    int cho,creidt_num;
    double amount;
    double z=tour.total_cost(0);
    cout<<" TOTAL TOTAL COST IS :\t "<<z<<"$"<<endl;
    pay:
    cout<<" TO PROCEED TO PAYMENT PRESS 1 \n PRESS ANY NUMBER cancel "<<endl;
    cin>>cho;
    if(cho==1){
    cout<<" WELLCOME TO  PAYMENT SEVICE "<<endl;
    
    cout<<" ENTER YOUR CRIEDIT CARD NUMBER :\n"<<endl;
    cin>>creidt_num;
    cout<<" ENTER AMOUNT :"<<endl;
    cin>>amount;
    if(amount==z){
        pay.open("registration.txt",ios::app);
        pay<<"PAYMENT: PAID"<<endl;
        pay<<"\t******** THANK YOU FOR VISITING US *******"<<endl;
        pay.close();
        cout<<" YOUR PAYMENT IS BEING PROCEEDING......................\n ";
        cout<<" DEAR CUSTOMER, YOUR PAYMENT IS SUCCESSFUL, YOU WILL RECEIVE A SHORT MESSAGE"<<endl;
        cout<<"thank for choosing us.............. "<<endl;
    }

else{
    cout<<"  INSUFICIENT AMOUNT !!"<<endl;
    int n;
    cout<<" TO PROCEED TO PAYMENT PRESS 1 or TO EXIT PRESS ANY NUMBER :"<<endl;
    cin>>n;
    if (n==1){
        goto pay;
    }
    else{
        cout<<"PAYMENT HAS BEEN TARMINATED !!"<<endl;
    }
}
}}