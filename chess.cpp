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

class rook: piece{
private:
    int i;
public:

int movimento(int a, int b, int c, int d){
    if (a == c){
        if (d > b){
            for (i=b; i<d;i++){
                if (mapa[i][a] != 0){
                    return 0;
                }
            }
            if (team == 1){
                if (mapa[c][d] < 0){
                    return 1;
                }
            }
            else{
                if (mapa[c][d] > 0){
                    return 1;
                }
            }
        }
        else{
            for (i=b; i>d;i--){
                if (mapa[i][a] != 0){
                    return 0;
                }
            }
            if (team == 1){
                if (mapa[c][d] < 0){
                    return 1;
                }
            }
            else{
                if (mapa[c][d] > 0){
                    return 1;
                }
            }
        }
    }
    else{
        if (c > a){
            for (i=a; i<c; i++){
                if (mapa[b][i] != 0){
                    return 0;
                }
            }
            if (team == 1){
                if (mapa[c][d] < 0){
                    return 1;
                }
            }
            else{
                if (mapa[c][d] > 0){
                    return 1;
                }
            }
        }
        else{
            for (i=1; i>c; i--){
                if (mapa[b][i] != 0){
                    return 0;
                }
            }
            if (team == 1){
                if (mapa[c][d] < 0){
                    return 1;
                }
            }
            else{
                if (mapa[c][d] > 0){
                    return 1;
                }
            }
        }
    }
    return 0;
}
}




class bishop: public piece{
private:
    int x;
    int y;
    int type;
    int team;
public:

    /*Qual número representa o tipo bishop????*/

    bishop(int a, int b, int type, int i, int team):piece(a,b,type,i){
        this->team=team;
    };

    /*i e j são as posições que o bispo ocupará*/
    int move(int i, int j, int mapa[8][8]){

        int k=GetPosX();
        int l=GetPosY();


        /*essas variáveis m e n ajudarão a definir a direção do movimento*/
        int m = i - k;
        int n = j - l;

        /*Se m e n forem maiores que 0 significa que a direção é SUDESTE*/
        if((m>0) && (n>0)){

            for(;m==0 && n==0;m--,n--){
                k++;
                l++;
                /*verifica se aquela posição está disponível para mover*/
                if(mapa[k][l]!=0){
                    return 0;
                }
            }
        
        /*Se n>0, logo direção NORDESTE*/
        } else if(n>0){

            for(;m==0 && n==0;m--,n--){
                k--;
                l++;
                if(mapa[k][l]!=0){
                    return 0;
                }
            }

        /*Se m<0, logo direção NOROESTE*/
        } else if(m<0){

            for(;m==0 && n==0;m--,n--){
                k--;
                l--;
                if(mapa[k][l]!=0){
                    return 0;
                }
            }

        /*Direção SUDOESTE*/
        } else{

            for(;m==0 && n==0;m--,n--){
                k++;
                l--;
                if(mapa[k][l]!=0){
                    return 0;
                }
            }

        }

        k=GetPosX();
        l=GetPosY();
        
        /*Libera a posição anterior no tabuleiro*/
        mapa[k][l]=0;

        /*Define a nova posição do bispo*/
        SetPosX(i);
        SetPosY(j);
        
        mapa[i][j]=BISPO;

        return 1;
    }

    

};

int main(){

}

















