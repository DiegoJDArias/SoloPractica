#include<iostream>


struct tiempo_ciclista{
	int horas;
	int minutos;
	int segundos;
}etapa[10];

int main(){
	int n_etapas{}, horasT{}, minutosT{}, segundosT{};
	
	std::cout << "Digite el numero de etapas: ";
	std::cin >> n_etapas;
	
	std::cout << "\nDigite el tiempo Obtenido:" << std::endl;
	
	for (int i{}; i < n_etapas; i++) {
		//Pedimos las horas en cada etapa
		std::cout << i+1 <<". Horas: "; std::cin >> etapa[i].horas;
		std::cout << i+1 <<". Minutos: "; std::cin >> etapa[i].minutos;
		std::cout << i+1 <<". Segundos: "; std::cin >> etapa[i].segundos;
		
		horasT = horasT + etapa[i].horas; //Sacamos las horas totales empleadas
		minutosT = minutosT + etapa[i].minutos;
		if(minutosT >= 60){//Si los minutos son mayores a 60, significa que ha pasado
			minutosT -= 60;//mas de 1 hora, entonces disminuimos en 60 los minutos
			horasT++;//y aumentamos las horas en 1
		}
		segundosT = segundosT + etapa[i].segundos;
		if(segundosT >= 60){//y lo mismo hacemos con los segundos
			segundosT -= 60;
			minutosT++;
		}
		std::cout << "\n";
	}
	
	//Por ultimo mostramos los totales de tiempos en pantalla
	std::cout << "\nEl tiempo total es: " << std::endl;
	std::cout << "Horas: "<< horasT << std::endl;
	std::cout << "Minutos: "<< minutosT << std::endl;
	std::cout << "Segundos: "<< segundosT << std::endl;
	
	return 0;
}
