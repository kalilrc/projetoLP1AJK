#include <iostream>
#include <string>

using namespace std;
string aux="S";
float aux2=0.0;
string obj;

class Invoice{
    public:
        Invoice(int a, string b, float c, float d){
            setNumero(a);
            setDescricao(b);
            setQuantidade(c);
            setPreco(d);
        }

        getInvoiceAmount(int a, string b, float x, float y){
            float pf;

            if(x<0){
                x=0;
            }
            if(y<0){
                y=0;
            }

            pf=x*y;
            aux2=aux2+pf;

            cout<<"\n#Produto numero "<<a<<" ["<<x<<"x "<<b<<"(s)"<<"]"<<":"<<"R$"<<pf<<endl<<endl;

        }

        void setNumero(int a){
            numero=a;
        }
        void setDescricao(string b){
            descricao=b;
        }
        void setQuantidade(float c){
            quantidade=c;
        }
        void setPreco(float d){
            preco=d;
        }
        int getNumero(){
            return numero;
        }
        string getDescricao(){
            return descricao;
        }
        float getQuantidade(){
            return quantidade;
        }
        float getPreco(){
            return preco;
        }

    private:
        int numero;
        string descricao;
        float quantidade;
        float preco;
};

class InvoiceTest{
    public:
        void main(){

            cout<<"..........................................................."<<endl;
            cout<<"\nEste e um teste padrao de capacidade de funcionamento"<<endl;

            Invoice x(10,"Placa",3,30.5);
            cout<<"Numero do Produto: "<<x.getNumero()<<endl;
            cout<<"Descricao do produto: "<<x.getDescricao()<<endl;
            cout<<"Preco da unidade: "<<x.getPreco()<<endl;
            cout<<"Quantidade: "<<x.getQuantidade()<<endl;
            x.getInvoiceAmount(10,"Placa",3,30.5);

            Invoice y(11,"Cabo",12,1);
            cout<<"Numero do Produto: "<<y.getNumero()<<endl;
            cout<<"Descricao do produto: "<<y.getDescricao()<<endl;
            cout<<"Quantidade: "<<y.getPreco()<<endl;
            cout<<"Preco da unidade: "<<y.getQuantidade()<<endl;
            y.getInvoiceAmount(11,"Cabo",12,1);


        }
};

int main(){
    int a; string b; float c, d;

    do{
        cout<<"Numero do produto:"<<endl;
        cin>>a;

        cout<<"Digite a descricao do produto:"<<endl;
        cin.ignore();
        getline(cin, b); //lê a variavel b dada pelo usuario
        obj=b;

        cout<<"Digite a Quantidade do produto:"<<endl;
        cin>>c;

        cout<<"Digite o preco do produto unico:"<<endl;
        cin>>d;

        cout<<"Gostaria de adicionar mais algum produto? (S/N)"<<endl;
        cin>>aux;

        Invoice obj(a,b,c,d);
        obj.getInvoiceAmount(a,b,c,d);

        if(aux!="S" && aux!="s"){
            cout<<"---------------------------------------------------------";
            cout<<"\nPreco FINAL: R$"<<aux2<<endl;
        }

    }while(aux=="S");

    InvoiceTest teste1;
    teste1.main();

}
