#include <iostream>
using namespace std;

class Sport {
public:
    void play() {
        cout <<"Playing the sport!"<<endl;
    }
    void playSoccer() {
        cout <<"Playing soccer: passing the ball and scoring goals!"<<endl;
    }
    void playBasketball() {
        cout <<"Playing basketball: dribbling, shooting, and teamwork!"<<endl;
    }
    void playAthletics() {
        cout <<"Participating in athletics: running, jumping, and throwing!"<<endl;
    }
};

class Soccer : public Sport {
};

class Basketball : public Sport {   
};

class Athletics : public Sport {  
};

int main() {
    Sport genericSport;
    Soccer soccer;
    Basketball basketball;
    Athletics athletics;

    genericSport.play(); 
    soccer.playSoccer();       
    basketball.playBasketball();   
    athletics.playAthletics();    

    return 0;
}
