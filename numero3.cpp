#include <iostream>
#include <cstdlib> //retorna um número aleatório
#include <ctime>

using namespace std;

int main(){
    int n, i, aleatorio;
    float aux1=0.0, aux2=0.0, aux3=0.0, aux4=0.0, aux5=0.0, aux6=0.0, soma;
    srand(time(0));

    cout<<"Digite a seguir o numero de simulacoes:\n";
    cin>>n;

    for(i=0;i<n;i++){
        aleatorio=1+(rand()%6);

        if(aleatorio==1){
            aux1++;

        }
         if(aleatorio==2){
            aux2++;

        }
         if(aleatorio==3){
            aux3++;

        }
         if(aleatorio==4){
            aux4++;

        }
         if(aleatorio==5){
            aux5++;

        }
         if(aleatorio==6){
            aux6++;

        }
    }

    soma=aux1+aux2+aux3+aux4+aux5+aux6;

    cout<<"Percentual de surgimento de cada face:"<<endl;
    cout<<"Face 1:"<<(aux1/soma)*100<<"%"<<endl;
    cout<<"Face 2:"<<(aux2/soma)*100<<"%"<<endl;
    cout<<"Face 3:"<<(aux3/soma)*100<<"%"<<endl;
    cout<<"Face 4:"<<(aux4/soma)*100<<"%"<<endl;
    cout<<"Face 5:"<<(aux5/soma)*100<<"%"<<endl;
    cout<<"Face 6:"<<(aux6/soma)*100<<"%"<<endl;





}
