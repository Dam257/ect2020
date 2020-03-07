#include <iostream>
using namespace std;

int main (){

    int day;
    cin>>day;
    if(day>=1 && day<=29 && day%7==1){
        cout<<"Domingo";
    }else
        if(day>=2 && day<=30 && day%7==2){
            cout<<"Segunda";
        }else
            if(day>=3 && day<=31 && day%7==3){
                cout<<"Terça";
            }else
                if(day>=4 && day<=25 && day%7==4){
                    cout<<"Quarta";
                }else
                    if(day>=5 && day<=26 && day%7==5){
                        cout<<"Quinta";
                    }else
                        if(day>=6 && day<=27 && day%7==6){
                            cout<<"Sexta";
                        }else
                            if(day>=7 && day<=28 && day%7==0){
                                cout<<"Sabado";
                            }
}
