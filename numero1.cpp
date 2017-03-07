#include  <iostream>

int main(){
    int aux, a=1, b=0;

    std::cout<<"insira os valores";
    do{
        std::cin>> a;
        b << 0;

        if(a>b){
            aux=a;
            b=aux;
        }
    }while(a!=0);

    std::cout<<aux;
}
