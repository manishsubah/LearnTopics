#include<iostream>
using namespace std;
class dealerCar {
    public:
    string name, model, color;
    int year, price;
    void sellCar(string n, string m, string c, int y, int p) {
        name = n;
        model = m;
        color = c;
        year = y;
        price = p;
        cout<<"Sell car bill: "<<endl;
        cout<<"Car name: "<<name<<endl;
        cout<<"Car model: "<<model<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Price: $"<<price<<endl;
    }
};
int main() {
    dealerCar toyotaAvenger;
    toyotaAvenger.sellCar("ToyotaAvenger", "Avenger", "Blue", 2022, 20000);
    return 0;
}