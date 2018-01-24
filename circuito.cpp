/*

Pequeno programa que simula portas logicas de um circuito digital.

*/



#include<iostream>
using namespace std;
class And_C{
	private:
		int a,b,s;
	public:
		And_C(){
			a=0;
			b=0;
			s=0;
		}
		And_C(int x, int y){
			a=x;
			b=y;
			s=0;
		}
		~And_C(){}
		void set_dados(){
			cout<<"\nEntrada a ";
			cin>>a;
			cout<<"\nEntrada b ";
			cin>>b;
		}
		int saida(){
			if(a==1 && b==1)
				return 1;
			else
				return 0;
		}
};
class Or_C{
	private:
		int a,b,s;
	public:
		Or_C(){
			a=0;
			b=0;
			s=0;
		}
		Or_C(int x, int y){
			a=x;
			b=y;
			s=0;
		}
		~Or_C(){}
		void set_dados(){
			cout<<"\nEntrada a ";
			cin>>a;
			cout<<"\nEntrada b ";
			cin>>b;
		}
		int saida(){
			if(a==0 && b==0)
				return 0;
			else
				return 1;
		}
};
class Not_C{
	private:
		int a,s;
	public:
		Not_C(){
			a=0;
			s=0;
		}
		Not_C(int x){
			a=x;
			s=0;
		}
		~Not_C(){}
		void set_dados(){
			cout<<"\nEntrada a ";
			cin>>a;
		}
		int saida(){
			if(a==0)
				return 1;
			else
				return 0;
		}
};
int main(){
	And_C A;
	Or_C C;
	cout<<"\nDigite Valores para a porta A: ";
	A.set_dados();
		cout<<"\n\nA saida desta porta e "<<A.saida();

	cout<<"\nDigite Valores para a porta C: ";
	C.set_dados();
		cout<<"\n\nA saida desta porta e "<<C.saida();

	And_C B(A.saida(),C.saida());

	Not_C D(B.saida());

	cout<<"\n\nA saida do circuito e "<<D.saida();
	cout<<"\n\n";
	return 0;
}
