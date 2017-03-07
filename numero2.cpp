#include <iostream>
#include <cstdlib>
#include <time.h>

int main(){
    srand(time(NULL));
    float aleatorio, x=-1;
    aleatorio=rand()%100+1;
    std::cout<<"adivinhe o valor gerado aleatoriamente, entre 1 e 100\n";
    //std::cout<<aleatorio;

    while(x != aleatorio){
        std::cin>>x;
        if(x<aleatorio){
            std::cout<<"Muito baixo, tente novamente\n";
        }
        if(x>aleatorio){
            std::cout<<"Muito alto, tente novamente\n";
        }
    }
    std::cout<<"Parabens voce acertou o valor!11!!!!1onze!!1\n";

}
