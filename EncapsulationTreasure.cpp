#include<iostream>

class TreasureVault {
private:
    std::string treasureType;
    double treasureValue;
    std::string treasureLocation;
    bool isLocked;

public:
    TreasureVault(const std::string &type, double value, const std::string &location) {
            treasureType = type;
            treasureValue = value;
            treasureLocation = location;
            isLocked = true;
        }

    void LockVault() {
        isLocked = true;
        std::cout << "The vault is locked.\n";
    }

    void UnlockVault() {
        isLocked = false;
        std::cout << "The vault is unlocked.\n";
    }

    double GetTreasureValue() const { // i experiment this.
        if (isLocked) {
            std::cout << "The vault is locked. Cannot access the treasure's value.\n";
            return 0.0;
        }
        else {
            return treasureValue;
        }
    }

    void UpdateTreasureLocation(const std::string &newLocation) {
        if (isLocked) {
            std::cout <<"The vault is locked. Cannot update the treasure's location.\n";
        }
        else {
            treasureLocation = newLocation;
            std::cout <<"Treasure location updated to: "<<treasureLocation<<"\n";
        }
    }
};

int main() {
    TreasureVault vault("Golden Coins", 1000000.0, "Secret Cave");

    vault.LockVault();

    double treasureValue = vault.GetTreasureValue();
    std::cout << "Treasure Value: $"<<treasureValue<<"\n";

    vault.UnlockVault();
    vault.UpdateTreasureLocation("Hidden Chamber");
    
    treasureValue = vault.GetTreasureValue();
    std::cout << "Treasure Value: $"<<treasureValue<<"\n";

    return 0;
}
