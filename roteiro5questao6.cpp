#include <iostream>
#include <string>

using namespace std;

double total=0;
string aux="S";
string obj;




class Pagamento{
public:
    Pagamento(double a, string b){
        setValorPagamento(a);
        setNomeDoFuncionario(b);

        total=total+a;
    }
    double CalculaTotalDePagamentos(){
        cout<<"\nO total pago pela empresa e: R$"<<total<<endl;
    }

   void setValorPagamento(double b){
        valorPagamento=b;
   }
   void setNomeDoFuncionario(string b){
        nomeDoFuncionario=b;
   }
   double getValorPagamento(){
        return valorPagamento;
   }
   string getNomeDoFuncionario(){
        return nomeDoFuncionario;
   }

private:
    double valorPagamento;
    string nomeDoFuncionario;

};

class ControleDePagamentos{
public:

    double CalculaTotalDePagamentos(){
        return total;
    }


    void setPagamentos(double a){
        pagamentos=a;
    }
    double getPagamentos(){
        return pagamentos;
    }

private:
    double pagamentos;
};

int main(){
    string a; double b;

    do{
        cout<<"Nome do funcionario:"<<endl;
        cin.ignore();
        getline(cin, a); //lê a variavel b dada pelo usuario
        obj=a;

        cout<<"Digite o valor do pagamento do funcionario :"<<endl;
        cin>>b;

        cout<<"Gostaria de adicionar mais algum pagamento? (S/N)"<<endl;
        cin>>aux;


        Pagamento obj(b,a);
        if(aux!="S" && aux!="s"){
            obj.CalculaTotalDePagamentos();
        }

    }while(aux=="S" || aux=="s");

}

