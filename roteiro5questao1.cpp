#include <iostream>
#include <string>
using namespace std;
int aux=0;

class Data{
    public:
        Data(int a, int b, int c){
            if(a<=0 || a>=31){
                do{
                    cout<<"Valor do DIA invalido! Insira um novo:"<<endl;
                    cin>>aux;
                    a=aux;

                }while(aux<=0 || aux>=31);
            }

            if(b<=0 || b>=13){
                do{
                    cout<<"Valor do MES invalido! Insira um novo:"<<endl;
                    cin>>aux;
                    b=aux;

                }while(aux<=0 || aux>=13);
            }

            if(c<=0){
                do{
                    cout<<"Valor do ANO invalido! Insira um novo:"<<endl;
                    cin>>aux;
                    c=aux;

                }while(aux<=0);
            }

            setDia(a);
            setMes(b);
            setAno(c);
        }

        avancarDia(int a, int b, int c){
            a=a+1;

            if(a==31){
                a=1;
                b=b+1;
            }
            if(b==13 && a==1){
                c=c+1;
                b=1;
            }

            cout<<"Amanha e:"<<"\n"<<a<<"/"<<b<<"/"<<c<<endl;
        }

        void setDia(int d){
            dia=d;
        }
        void setMes(int e){
            mes=e;
        }
        void setAno(int f){
            ano=f;
        }
        int getDia(){
            return dia;
        }
        int getMes(){
            return mes;
        }
        int getAno(){
            return ano;
        }

    private:
        int dia;
        int mes;
        int ano;

};

class DataTest{
    public:
        void main(string x, string y){

                int d, e, f;
                Data a(9,3,2017);
                cout<<"\nData de hoje:"<<"\n"<<a.getDia()<<"/"<<a.getMes()<<"/"<<a.getAno()<<endl;

                d=a.getDia();
                e=a.getMes();
                f=a.getAno();

                a.avancarDia(d,e,f);

                int j, k, l;

                Data b(30,12,2017);
                cout<<"\nData de hoje:"<<"\n"<<b.getDia()<<"/"<<b.getMes()<<"/"<<b.getAno()<<endl;

                j=b.getDia();
                k=b.getMes();
                l=b.getAno();

                b.avancarDia(j,k,l);
            }

};

int main(){
    int a, b, c, d, e, f;
    string primeiro, segundo;
    cout<<"Digite a data a ser impressa no formato [ddmmaaaa]:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    Data hoje(a,b,c);
    cout<<"\nData de hoje:"<<"\n"<<hoje.getDia()<<"/"<<hoje.getMes()<<"/"<<hoje.getAno()<<endl;

    d=hoje.getDia();
    e=hoje.getMes();
    f=hoje.getAno();

    hoje.avancarDia(d,e,f);

    cout<<"\nTeste padrao de funcionamento:"<<endl;
    DataTest teste;
    teste.main(primeiro, segundo);

    return 0;
}

