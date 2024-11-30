#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class cars;

struct favsongs {
	string name;
	string author;
	string about;
	int ozinka;
	void StructInfo() {
		cout << name << " від " << author
			<< "\nТема: " << about
			<< "\nЗагальне враження: " << ozinka << "/10\n\n";
	}
};

class cars {
private:
	string name;
	int nomer;
	int volume;
	string power;
	string turning_point;
	int V_max;
public:
	void info(string namee, int nomerr, int volumee, string powerr, string turning_pointt, int V_maxx) {
		name = namee;
		nomer = nomerr;
		volume = volumee;
		power = powerr;
		turning_point = turning_pointt;
		V_max = V_maxx;
	}

	void CarInfo() {
		cout << "Модель: " << name
			<< "\nНомер: " << nomer
			<< "\nОб'єм см³: " << volume
			<< "\nПотужність: " << power
			<< "\nКрутний момент (Нм при об / хв): " << turning_point
			<< "\nМаксимальна шидкість (км / год): " << V_max << "\n\n";
	}

	friend void wtf(cars& tak);
};


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	

	favsongs onenoone;
	onenoone.name = "Один не один";
	onenoone.author = "Меловін";
	onenoone.about = "Кохання";
	onenoone.ozinka = 8;
	onenoone.StructInfo();

	favsongs chaclun;
	chaclun.name = "Чаклун";
	chaclun.author = "Karmann";
	chaclun.about = "Підступне кохання чаклуна та відьми";
	chaclun.ozinka = 10;
	chaclun.StructInfo();

	cout << "-------------------------------------------------------------------------------------------\n\n";

	cars Mitsubishi_Outlander;
	Mitsubishi_Outlander.info("Mitsubishi Outlander", 6, 1992, "100 кВт (136 к.с.) при 6000 об/хв", "176 Нм при 4500 об/хв", 190);
	Mitsubishi_Outlander.CarInfo();

	cars Fiat_Doblo;
	Fiat_Doblo.info("Fiat Doblo", 4, 1242, "65 (47,5)/5500", "102/3500	", 161);
	Fiat_Doblo.CarInfo();

	cars Citroen_Berlingo;
	Citroen_Berlingo.info("Citroen Berlingo", 3, 1124, "60 (44)/5500", "94/3400", 140);
	Citroen_Berlingo.CarInfo();

	wtf(Mitsubishi_Outlander);
	wtf(Fiat_Doblo);
	wtf(Citroen_Berlingo);

	return 0;
}

void wtf(cars& tak) {
	cout << tak.name << " is the " << tak.nomer << "car that we had";
}