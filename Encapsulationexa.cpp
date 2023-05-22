#include<iostream>
using namespace std;

class YoutubeChannel {
    private:
    string name;
    string ownername;
    int subscriptionCount = 0;
    public:
    YoutubeChannel(string nam, string ownernam) {
        name = nam;
        ownername = ownernam;
    }
    void Subscribe() {
        subscriptionCount++;
    }
    void Unsubscribe() {
        if(subscriptionCount>0)
            subscriptionCount--;
    }
    void GetInfo() {
        cout<<"Channel Description: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"OwnerName: "<<ownername<<endl;
        cout<<"Subscriptions: "<<subscriptionCount;
    }
};
int main() {
    YoutubeChannel yb("CodingSubah", "Msubah");
    yb.Subscribe();
    yb.Subscribe();
    yb.Unsubscribe();
    yb.GetInfo();
    return 0;
}