#include<iostream>
using namespace std;

class Outing {
    private:
    int speed;
    int distance;
    public:
    void setValue(int a, int b) {
        speed = a;
        distance = b;
    }
    friend double findTravelTime(Outing);
};
double findTravelTime (Outing ot) {
    double time = (double)ot.distance/(double)ot.speed;
    return time;
}
int main() {
    Outing o;
    o.setValue(200, 5000);

    cout<<"Travel Time: "<<findTravelTime(o)<<" hrs"<<endl;
    return 0;
}