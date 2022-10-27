#include<bits/stdc++.h>
using namespace std;
int doc_list[6],total_specialist;
int Dhanmondi(){

for(int i=0;i<total_specialist;i++){
    if(doc_list[i]==1){
        cout<<"Dr. Sunny\nMBBS in Dhaka Medical College \nWorks at City General Hospital \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==2){
        cout<<"Dr. Imran\nMBBS in Dhaka Medical College \nWorks at City General Hospital \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==3){
        cout<<"Dr. Tawhid\nMBBS in Dhaka Medical College \nWorks at City General Hospital \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==4){
        cout<<"Dr. Rifat\nMBBS in Dhaka Medical College \nWorks at City General Hospital \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==5){
        cout<<"Dr. Riad\nMBBS in Dhaka Medical College \nWorks at City General Hospital \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==6){
        cout<<"Dr. Ekramul\nMBBS in Dhaka Medical College \nWorks at City General Hospital \nDaily at(11 A.M.-4.0 P.M)\n";
    }
}
}
int Mirpur(){

for(int i=0;i<total_specialist;i++){
    if(doc_list[i]==1){
        cout<<"Dr. Shiblee\nMBBS in Dhaka Medical College \nWorks at IBN Sina \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==2){
        cout<<"Dr. Imad\nMBBS in Dhaka Medical College \nWorks at IBN Sina \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==3){
        cout<<"Dr. Tishan\nMBBS in Dhaka Medical College \nWorks at IBN Sina \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==4){
        cout<<"Dr. Ifti\nMBBS in Dhaka Medical College \nWorks at IBN Sina \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==5){
        cout<<"Dr. Sanowar\nMBBS in Dhaka Medical College \nWorks at IBN Sina \nDaily at(11 A.M.-4.0 P.M)\n";
    }
    else if(doc_list[i]==6){
        cout<<"Dr. Nohan\nMBBS in Dhaka Medical College \nWorks at IBN Sina \nDaily at(11 A.M.-4.0 P.M)\n";
    }
}
}
int area()
{
    int are;
    cout<<"\t\tPlease select the area in which you wish to see a doctor:\n";
    cout << "1.Dhanmondi.\n2.Mirpur\n";
    cin >> are;
    if(are == 1){
        Dhanmondi();
    }
    else if(are==2){
        Mirpur();
        }
    }
int appointment(){
    int doc_num,i;
    cout<<"Jei Department a doctor dekhaben select korun (1-6)\n";
    cout<<"No 1: Ophthalmologists\n"<<"No 2: Cardiologists\n"<<"No 3: Gastroenterologists\n";
    cout<<"No 4: Orthopedics\n"<<"No 5: Medicine\n"<<"No 6: Dermatologist\n \t0. FINISH\n";
    cout<<"\t\tENTER THE DOCTOR NO:\n";
    for(i=0;i<6;i++){
    cin>>doc_num;
    if((doc_num==1)||(doc_num==2)||(doc_num==3)||(doc_num==4)||(doc_num==5)||(doc_num==6)){
        doc_list[i]=doc_num;
    }
    else if(doc_num==0){
     break;
    }
    else{
        cout<<"Please select 1 to 6 :\n";
        i--;
    }
    }
    total_specialist=i;
    area();
}
int dieseace()
{

    int medi=0,Ophtha=0,Cardio=0,Gastro=0,Ortho=0,Dermato=0,j=0;
    cout<<"\t\t\tPLEASE FIND YOUR SYMPTHOM: \n";
    string mytxt;
    ifstream my("disease.txt");
    while(getline(my, mytxt)){
        cout << mytxt<<endl;
        cout << '\n';
    }
    my.close();
    cout<<"\n\n\t\t\tPLEASE SELECT YOUR SYMPTHOM: \n";

    for(int i=0;i<30;i++){
     int select_disease;
     cin>>select_disease;
     if(select_disease==0){
        break;
     }
     else if((select_disease>=1)&&(select_disease<=5)){
             Ophtha++;
     }
     else if((select_disease>=6)&&(select_disease<=10)){
         Cardio++;
     }
     else if((select_disease>=11)&&(select_disease<=15)){
            Gastro++;
     }
     else if((select_disease>=16)&&(select_disease<=20)){
         Ortho++;
     }
     else if((select_disease>=21)&&(select_disease<=25)){
            medi++;
     }
     else if((select_disease>=26)&&(select_disease<=30)){
            Dermato++;
     }
     else{
        cout<<"Please Enter The Valid Keyword\n";
        i--;
     }
    }
    cout<<"\tWe have to suggest you ";
    if(Ophtha>0){
            cout<<"Ophthalmologists ,";
        doc_list[j++]=1;
    }
    if(Cardio>0){
        cout<<"Cardiologists ,";
        doc_list[j++]={2};
    }
    if(Gastro>0){
        cout<<"Gastroenterologists ,";
        doc_list[j++]={3};
    }
    if(Ortho>0){
        cout<<"Orthopedics ,";
        doc_list[j++]={4};
    }
    if(medi>0){
        cout<<"Medicine ,";
       doc_list[j++]={5};
    }
    if(Dermato>0){
        cout<<"Dermatologist ,";
        doc_list[j++]={6};
    }
    cout<<"\n\n";
    total_specialist=j;
    area();

}

int main()
{
    system("Color 0A");
    cout << "Welcome " << '\n';
    string info[4];
    cout << "Enter your name: ";
    cin >> info[0];
    cout << "\nEnter age: ";
    cin >> info[1];
    cout << "\nNumber : ";
    cin >> info[2];
    cout << "\nEmail: ";
    cin >> info[3];
    int choice1;
    cout << "1.Do you wanna take your appointment?\n2.Do you find your disease?\n";
    cin >> choice1;
    if(choice1 == 1){
        appointment();
    }
    else if(choice1==2){
            dieseace();
    }
    else{
        cout<<"Please Enter 1 or 2\nWhich you want to select\n";
    }
    return 0;
}
