#include <iostream>

int getNetProduction(int production, int consumption, int months) {
	return (production - consumption) * months;
}

int calculateMineralsToAlloys(int minerals, int months) {
	return (minerals * months) / 50;
}

void displayNetValues(int mineral, int energy, int alloys, int months) {
	if (months > 1) {
		std::cout << "Total Resources After " << months << " Months:" << std::endl;
	}
	else {
		std::cout << "Net Resources Per Month:" << std::endl;
	}
	std::cout << "- Minerals: " << (mineral * months) << std::endl;
	std::cout << "- Energy: " << (energy * months) << std::endl;
	std::cout << "- Alloys: " << (alloys * months) << std::endl << std::endl;
	
}


int main() {
	std::cout << "Welcome to Galactic Resource Manager!" << std::endl;

	int mineralProduction = 0;
	int mineralConsumption = 0;
	int mineralPerMonth = 0;

	int energyProduction = 0;
	int energyConsumption = 0;
	int energyPerMonth;

	int alloysProduction = 0;
	int alloysConsumption = 0;
	int alloysPerMonth = 0;

	std::cout << "Enter your monthly Minerals production: ";
	std::cin >> mineralProduction;

	std::cout << "Enter your monthly Minerals production: ";
	std::cin >> mineralConsumption;


	std::cout << "Enter your monthly Energy production: ";
	std::cin >> energyProduction;

	std::cout << "Enter your monthly Energy production: ";
	std::cin >> energyConsumption;


	std::cout << "Enter your monthly Alloys production: ";
	std::cin >> alloysProduction;

	std::cout << "Enter your monthly Alloys production: ";
	std::cin >> alloysConsumption;

	std::cout << std::endl << std::endl;

	mineralPerMonth = getNetProduction(mineralProduction, mineralConsumption, 1);
	energyPerMonth = getNetProduction(energyProduction, energyConsumption, 1);
	alloysPerMonth = getNetProduction(alloysProduction, alloysConsumption, 1);

	displayNetValues(mineralPerMonth, energyPerMonth, alloysPerMonth, 1);
	displayNetValues(mineralPerMonth, energyPerMonth, alloysPerMonth, 6);
	displayNetValues(mineralPerMonth, energyPerMonth, alloysPerMonth, 12);

	std::cout << "Additional Alloys Produced From Surplus Minerals:" << std::endl;
	std::cout << "- After 6 Months: " << (calculateMineralsToAlloys(mineralPerMonth, 6) * 10) << std::endl;
	std::cout << "- After 12 Months: " << (calculateMineralsToAlloys(mineralPerMonth, 12) *10) << std::endl << std::endl;

}

