#include <iostream>
#include <string>
using namespace std;


class piece{
protected:
    int team;
    int type;
    int x;
    int y;

public:
    piece(int a, int b, int type, int i){
        SetPosX(a);
        SetPosY(b);
        SetType(type);
        SetTeam(i);
    }
    void SetType(int i){
        type = c;
    }
    int GetPosX(){
        return x;
    }
    int GetPosY(){
        return y;
    }
    void SetPosX(int a){
        x = a;
    }
    void SetPosY(int a){
        y = a;
    }
    void SetTeam(int i){
        team = i;
    }
};

class tabuleiro{
private:
    int i, j
public:
int mapa[10][10];
tabuleiro(){

   
    for(i=0)
}

void Imprimir(){
     for(i=0;i<9;i++){
        mapa[i][0] = i;
    }
    for(j=0;j<9;j++){
        mapa[1][j] = j;
    }
}

}

class pawn: piece{
public:

int Movimento(int a, int b, int c, int d){
    if((a==c-1 || a==c+1) && d == b+1){
        if(team==1){
            if(mapa[c][d]<0){
                SetPosX(c);
                SetPosY(d);
                mapa[a][b] = 0;
                mapa[c][d] = type;
                return 1;
            }
        }
        else{
            if(mapa[c][d]>0){
                SetPosX(c);
                SetPosY(d);
                mapa[a][b] = 0;
                mapa[c][d] = type;
                return 1;
            }
        }
    return 0;
    }
    else{
        if(a==c && d == b+1 && mapa[c][d]==0){
            SetPosX(c);
            SetPosY(d);
            mapa[c][d] = type;
            mapa[a][b] = 0;
            return 1;
        }
        return 0;
    }
}



}

int main(){

















