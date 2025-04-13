//
// Created by Piotr Postek on 12/04/2025.
//

#include "zwierze_typ.h"

class AnimalType : public AnimalTypeInterface {
private:
    string type;

public:
    // Getter for the type of the animal
    string getType() const override {
        return type;
    }

    // Setter for the type of the animal
    void setType(const string &type) override {
        this->type = type;
    }
};