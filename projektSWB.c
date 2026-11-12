#include <REGX52.H>

#define zielona P1_3
#define czerwona P1_4 
#define Kratka 0x7D
#define Siedem 0xB7
#define Jeden 0xE7
#define Dwa 0xEB
#define Trzy 0xED
#define Cztery 0xD7
#define Piec 0xDB
#define Szesc 0xDD
#define Osiem 0xBB
#define Dziewiec 0xBD
#define Zero 0x7B
#define Gwiazdka 0x77

unsigned char code Tab[] = {0xF7,0xFD,0xFB};

unsigned char data licznikProb = 0;
unsigned char code poprawnyPin[] = {'1', '2', '3', '4'};
unsigned char wpisywanyPin[4];
unsigned char data indeks = 0;
bit czyZgodny = 1;

void opoznij(){
unsigned int i;
unsigned int j;
for( i = 0; i<200; i++){
	
		for( j = 0; j<200; j++){
			;}
		
	}
}


void mruganieDioda(unsigned char kolor){
		if(kolor == 1){
			zielona = 0;
			opoznij();
			zielona = 1;
			}
		if(kolor == 2){
			czerwona =0;
			opoznij();
			czerwona =1;
			}
}

	
	

char coWcisniete(){
	unsigned char i;
	unsigned char odczytana;
	 char wynik =0;
	for(i = 0; i<3; i++){
		P2 = Tab[i];
		odczytana = P2;
		if(odczytana != Tab[i]){
			
			odczytana = P2;
			if(P2!=Tab[i]){
			if(odczytana == Jeden){
				
				wynik= '1';
				}
				 if(odczytana == Dwa){
				wynik = '2';
				}
				if(odczytana == Trzy){
				wynik =  '3';
				}
				if(odczytana == Cztery){
				wynik =  '4';
				}
				if(odczytana == Piec){
				wynik =  '5';
				}
				if(odczytana == Szesc){
				wynik =  '6';
				}
				if(odczytana == Siedem){
				wynik =  '7';
				}
				if(odczytana == Osiem){
				wynik = '8';
				}	
				if(odczytana == Dziewiec){
				wynik =  '9';
				}
				if(odczytana == Zero){
				wynik =  '0';
				}
				
				if (wynik!=0){
					
					return wynik;
				}
				}
				}
			}
				}

void main(){
	
	unsigned char przycisk;
	unsigned char i;
	zielona = 1;
	czerwona = 1;

	while(1){
  przycisk = coWcisniete();
	
	if(przycisk !=0){
		wpisywanyPin[indeks]=przycisk;
		indeks++;
	
		
			
	if(indeks == 4){
			czyZgodny =1;
			
			for(i=0; i<4; i++){
				if(wpisywanyPin[i]!=poprawnyPin[i]){
				czyZgodny = 0;
			}
			
		}
		if(czyZgodny ==1){
			
			licznikProb = 0;
			mruganieDioda(1);
			mruganieDioda(1);
			}
		else{
			
			licznikProb++;
			if(licznikProb == 3){
			mruganieDioda(2);
			mruganieDioda(2);
			mruganieDioda(2);
			licznikProb=0;
			}
			else{
			mruganieDioda(2);
			}
			}
			indeks = 0;
		}
while(coWcisniete()!=0);
}
}
}




