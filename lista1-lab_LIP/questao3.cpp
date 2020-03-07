#include <iostream>
using namespace std;

int main (){

    float n1, n2, n3, media;
    cin>>n1>>n2>>n3;
    media = (n1+n2+n3)/3;
    if(media>=5 && n1>=3 && n2>=3 && n3>=3){
        cout<<"Aprovado";
    }else
        if(media>=3){
            cout<<"Final";
        }else
            if(media<3){
                cout<<"Reprovado";
            }

}
