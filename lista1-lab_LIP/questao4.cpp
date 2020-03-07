#include <iostream>
using namespace std;

int main (){

    int x, y, l, h, px, py;
    int fx, fy;
    cin>>x>>y>>l>>h>>px>>py;
    fx=x+l;
    fy=y+h;
    if(px<=fx && py<=fy){
        cout<<"O ponto ("<<px<<", "<<py<<") esta dentro";
    }else
        cout<<"O ponto ("<<px<<", "<<py<<") esta fora";

}
