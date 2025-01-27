#include <iostream>
#include <algorithm>
using namespace std;

class Chef {
public:
    Chef(string name) : chefName(name) {
        cout << chefName << " constructor" << endl;
    }

    ~Chef() {
        cout << chefName << " destructor" << endl;
    }

    string getName() {
        return chefName;
    }

    int makeSalad(int ingredients) {
        string answer;

        cout << chefName
             << " can make "
             << ingredients / 5
             << " portions of salad"
             << endl;
        cout << "Do you want him to use the ingredients to make salad?"
             << endl;
        cout << "y/n" << endl;
        cin >> answer;

        if (answer == "y") {
            cout << chefName
                 << " used ingredients to make "
                 << ingredients / 5
                 << " portions of salad"
                 << endl;
            ingredients = ingredients % 5;
        } else if (answer == "n") {
            cout << chefName
                 << " didn't make salad"
                 << endl;
        } else {
            cout << "Invalid input!" << endl;
        }

        return ingredients;
    }

    int makeSoup(int ingredients) {
        string answer;

        cout << chefName
             << " can make "
             << ingredients / 3
             << " portions of soup."
             << endl;
        cout << "Do you want him to use the ingredients to make soup?"
             << endl;
        cout << "y/n" << endl;
        cin >> answer;

        if (answer == "y") {
            cout << chefName
                 << " used ingredients to make "
                 << ingredients / 3
                 << " portions of soup"
                 << endl;
            ingredients = ingredients % 3;
            cout << chefName
                 << " has "
                 << ingredients
                 << " left."
                 << endl;
        } else if (answer == "n") {
            cout << chefName
                 << " didn't make soup"
                 << endl;
            cout << chefName
                 << " has "
                 << ingredients
                 << " left."
                 << endl;
        } else {
            cout << "Invalid input!" << endl;
        }

        return ingredients;
    }

protected:
    string chefName;
};

class ItalianChef : public Chef {
public:
    ItalianChef(string name) : Chef(name) {
        cout << chefName << " constructor" << endl;
        flour = 10; // Alusta esimerkkimateriaalit
        water = 10;
    }

    ~ItalianChef() {
        cout << chefName << " destructor" << endl;
    }

    bool askSecret() {
        string passwordInput;

        cout << "Password?" << endl;
        cin >> passwordInput;

        if (passwordInput == password) {
            makePizza();
            return true;
        } else {
            cout << "Incorrect password" << endl;
            return false;
        }
    }

private:
    string password = "pizza";
    int flour;
    int water;

    void makePizza() {
        string answer;

        int pizzas = min(flour, water) / 5;

        cout << chefName
             << " can make "
             << pizzas
             << " pizza(s)"
             << endl;
        cout << "Do you want him to use the ingredients to make pizza?"
             << endl;
        cout << "y/n" << endl;
        cin >> answer;

        if (answer == "y") {
            cout << chefName
                 << " used ingredients to make "
                 << pizzas
                 << " pizza(s)"
                 << endl;
            flour -= pizzas * 5;
            water -= pizzas * 5;
            cout << chefName
                 << " has "
                 << flour
                 << " flour and "
                 << water
                 << " water left."
                 << endl;
        } else if (answer == "n") {
            cout << chefName
                 << " didn't make pizza"
                 << endl;
        } else {
            cout << "Invalid input!" << endl;
        }
    }
};

int main() {
    ItalianChef myItalianChef("Chef Luigi");
    myItalianChef.askSecret();
    return 0;
}
