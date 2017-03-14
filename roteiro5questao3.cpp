#include <iostream>
#include <string>

using namespace std;

class Empregado{
public:
    Empregado(string a, string b, float c){
        setNome(a);
        setSobre(b);

        if(c>0){
            setSalario(c);
        }

    }

    void setNome(string a){
        nome=a;
    }
    void setSobre(string b){
        sobre=b;
    }
    void setSalario(float c){
        salario=c;
    }
    string getNome(){
        return nome;
    }
    string getSobre(){
        return sobre;
    }
    float getSalario(){
        return salario;
    }

private:
    string nome;
    string sobre;//sobrenome
    float salario;// salario mensal
};

class EmpregadoTest{
public:
    void main(){
        Empregado exemplo1("Jose","Mendonca",3500);
        cout<<"Nome: "<<exemplo1.getNome()<<endl;
        cout<<"Sobrenome: "<<exemplo1.getSobre()<<endl;
        cout<<"Salario Anual: R$"<<exemplo1.getSalario()*12<<endl;
        cout<<"Salario Mensal: R$"<<exemplo1.getSalario()<<endl;

        Empregado exemplo2("Juan","Menezes",20000);
        cout<<"\nNome: "<<exemplo2.getNome()<<endl;
        cout<<"Sobrenome: "<<exemplo2.getSobre()<<endl;
        cout<<"Salario Anual: R$"<<exemplo2.getSalario()*12<<endl;
        cout<<"Salario Mensal: R$"<<exemplo2.getSalario()<<endl;

        cout<<"\nReceberam aumento de 10%: "<<endl;
        cout<<"\nSalario de " <<exemplo1.getNome()<<" com aumento: R$"<<(exemplo1.getSalario()*10/100)+exemplo1.getSalario()<<endl;
        cout<<"Salario de " <<exemplo2.getNome()<<" com aumento: R$"<<(exemplo2.getSalario()*10/100)+exemplo2.getSalario()<<endl;

    }


};


int main(){
    EmpregadoTest teste1;
    teste1.main();

}
