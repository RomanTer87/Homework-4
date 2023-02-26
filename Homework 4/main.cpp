#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
//#define TASK2
//#define TASK3
//#define TASK4


#ifdef TASK2
	
	double notebook_price;
	double pencils_price;
	int number_of_notebook;
	int number_of_pencil;
	cout << "Вычисление стоимости покупки." << endl;
	cout << "Введите исходные данные:" << endl;
	cout << "Цена тетради: "; cin >> notebook_price;
	cout << "Количество тетрадей: "; cin >> number_of_notebook;
	cout << "Цена карандашей: "; cin >> pencils_price;
	cout << "Количество карандашей: "; cin >> number_of_pencil;
	double total_price = (notebook_price * number_of_notebook) + (pencils_price * number_of_pencil);
	cout << "Общая стоимость: " << total_price << endl;
#endif // TASK2

#ifdef TASK3
	double notebook_price;
	double cover_price;
	int number_of_sets;
	cout << "Вычисление стоимости покупки." << endl;
	cout << "Введите исходные данные:" << endl;
	cout << "Цена тетради: "; cin >> notebook_price;
	cout << "Цена обложки:"; cin >> cover_price;
	cout << "Количество комплектов (шт.)"; cin >> number_of_sets;
	double total_price = (notebook_price + cover_price) * number_of_sets;
	cout << "Общая стоимость: " << total_price << endl;
#endif // TASK3

#ifdef TASK4
	double fuel_consumption_liters_per_100_km;
	double price_of_a_liter_of_gasoline;
	int distance_to_the_cottage_km;
	cout << "Вычисление стоимости поездки на дачу и обратно" << endl;
	cout << "Расстояние до дачи (км)"; cin >> distance_to_the_cottage_km;
	cout << "Расход бензина (литров на 100 км пробега)"; cin >> fuel_consumption_liters_per_100_km;
	cout << "Цена литра бензина"; cin >> price_of_a_liter_of_gasoline;
	double total_trip_cost = (distance_to_the_cottage_km * fuel_consumption_liters_per_100_km / 100) * price_of_a_liter_of_gasoline * 2;
	cout << "Поездка на дачу и обратно обойдется в _ грн." << total_trip_cost << endl;
#endif // TASK4


}