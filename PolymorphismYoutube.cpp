#include<iostream>
using namespace std;

class YoutubeChannel {
    private:
    string Name;
    protected:
    string OwnerName;
    int ContentQuality;
    public:
    YoutubeChannel(string name, string ownername) {
        Name = name;
        OwnerName = ownername;
        ContentQuality = 0;
    }
    
    void GetInfo() {
        cout<<"Channel Description: "<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"OwnerName: "<<OwnerName<<endl;
    }
    void CheckAnalytics() {
        if(ContentQuality >= 5) {
            cout<<Name<<" has great quality content."<<endl;
        } else {
            cout<<Name<<" has bad quality content."<<endl;
        }
    }
};
class CookingYoutubeChannel : public YoutubeChannel {
    public:
    // invoke the constructor of base class
    CookingYoutubeChannel(string name, string ownername) : YoutubeChannel(name, ownername) {}
    void Practice() {
        cout<<OwnerName<<" is practicing cooking, learning new recipes, experimenting with spices..."<<endl;
        ContentQuality++;
    }

};
class SingingYoutubeChannel : public YoutubeChannel {
    public:
    // invoke the constructor of base class
    SingingYoutubeChannel(string name, string ownername) : YoutubeChannel(name, ownername) {}
    void Practice() {
        cout<<OwnerName<<" is taking singing classes, learning new songs, learning how to dance..."<<endl;
        ContentQuality++;
    }

};
int main() {
    CookingYoutubeChannel cookingYoutubechannel("Ankita's Kitchen", "Ankita");
    SingingYoutubeChannel singersYoutubechannel("Dhavni's Song", "Dhavni");

    cookingYoutubechannel.Practice();
    singersYoutubechannel.Practice();
    singersYoutubechannel.Practice();
    singersYoutubechannel.Practice();
    singersYoutubechannel.Practice();
    singersYoutubechannel.Practice();
    singersYoutubechannel.Practice();

    YoutubeChannel *yt1 = &cookingYoutubechannel;
    YoutubeChannel *yt2 = &singersYoutubechannel;
    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    return 0;
}