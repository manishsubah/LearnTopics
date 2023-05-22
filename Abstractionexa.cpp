#include<iostream>
using namespace std;

class Smartphone {  //abstract class
    public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};
class Android : public Smartphone {
    public:
    void TakeASelfie() {
        cout<<"Android Selfie\n";
    }
    void MakeACall() {
        cout<<"Android Call\n";
    }
};
class Iphone : public Smartphone {
    public:
    void TakeASelfie() {
        cout<<"Iphone Selfie\n";
    }
    void MakeACall() {
        cout<<"Iphone Call\n";
    }
};
int main() {
    Smartphone *smt = new Iphone();
    smt->TakeASelfie();
    smt->MakeACall();
    Smartphone *smtA = new Android();
    smtA->TakeASelfie();
    smtA->MakeACall();
    return 0;
}