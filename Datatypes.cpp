#include<iostream>

int main() {
    std::string name;
    char gender;
    int seatAvailable = 1;

    repeat:{
    std::cout<<"Name: ";
    std::cin>>name;
    std::cout<<"Gender: ";
    std::cin>>gender;
    }

    if(gender == 'M') {
    std::cout<<"Male Seat.";
    seatAvailable++;
    }
    if(gender == 'F') {
    std::cout<<"Female Seat.";
    seatAvailable++;
    }

    if(seatAvailable <= 45) {
    goto repeat;
    }

    return 0;
}