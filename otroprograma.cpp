#include <iostream>
#include <string>

using namespace std;

void dibujaCuadradoRelleno() {

	int b,h;

	cout << "Dibujemos un cuadrado relleno."<<endl;
	cout << "Base del cuadrado relleno: >";
	cin >> b;
	cout << "Altura del cuadrado relleno: >";
	cin >> h;
	cout <<""<< endl;
	cout << "Dibujando..."<<endl;

	for (int i=0; i<h ; i++) {
		for (int j=0; j<b ; j++) {
			cout << "* "; //usamos "* " en vez de solo "*" para dar más simertría a los cuadrados, sino, parecerán más bien rectángulos.
		}
		cout <<""<< endl;
	}
}

int main(){
    dibujaCuadradoRelleno();
    return 0;
}
