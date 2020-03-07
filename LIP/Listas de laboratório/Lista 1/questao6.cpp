#include <iostream>
using namespace std;

int main (){

    int d1, d2, m1, m2, a1, a2;
    cin>>d1>>m1>>a1>>d2>>m2>>a2;
    if(a1==a2){
        if(m1==m2){
            if(d1<d2){
                cout<<"Data 1 (dia mes ano): "<<d1<<" "<<m1<<" "<<a1<<endl;
                cout<<"Data 2 (dia mes ano): "<<d2<<" "<<m2<<" "<<a2<<endl;
                cout<<"A primeira data e mais antiga";
            }else
                if(d1==d2){
                    cout<<"Data 1 (dia mes ano): "<<d1<<" "<<m1<<" "<<a1<<endl;
                    cout<<"Data 2 (dia mes ano): "<<d2<<" "<<m2<<" "<<a2<<endl;
                    cout<<"As datas sao iguais";
                }else{
                    cout<<"Data 1 (dia mes ano): "<<d1<<" "<<m1<<" "<<a1<<endl;
                    cout<<"Data 2 (dia mes ano): "<<d2<<" "<<m2<<" "<<a2<<endl;
                    cout<<"A segunda data e mais antiga";
                }
        }else
            if(m1<m2){
                cout<<"Data 1 (dia mes ano): "<<d1<<" "<<m1<<" "<<a1<<endl;
                cout<<"Data 2 (dia mes ano): "<<d2<<" "<<m2<<" "<<a2<<endl;
                cout<<"A primeira data e mais antiga";
            }else{
                cout<<"Data 1 (dia mes ano): "<<d1<<" "<<m1<<" "<<a1<<endl;
                cout<<"Data 2 (dia mes ano): "<<d2<<" "<<m2<<" "<<a2<<endl;
                cout<<"A segunda data e mais antiga";
            }
    }else
        if(a1<a2){
            cout<<"Data 1 (dia mes ano): "<<d1<<" "<<m1<<" "<<a1<<endl;
            cout<<"Data 2 (dia mes ano): "<<d2<<" "<<m2<<" "<<a2<<endl;
            cout<<"A primeira data e mais antiga";
        }else{
            cout<<"Data 1 (dia mes ano): "<<d1<<" "<<m1<<" "<<a1<<endl;
            cout<<"Data 2 (dia mes ano): "<<d2<<" "<<m2<<" "<<a2<<endl;
            cout<<"A segunda data e mais antiga";
        }



}
