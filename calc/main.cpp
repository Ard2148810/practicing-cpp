#include <iostream>

class Operation {
public:
    std::string opStr = "_";
    virtual int exec(int a, int b) = 0;
};

class AddOp : public Operation {
public:
    AddOp() {
        this->opStr = "+";
    }

    int exec(int a, int b) override {
        return a + b;
    }
};

class SubtractOp : public Operation {
public:
    SubtractOp() {
        this->opStr = "-";
    }

    int exec(int a, int b) override {
        return a - b;
    }
};

int main() {
    AddOp add;
    SubtractOp subtract;
    Operation* op[2] = {&add, &subtract};
    int a = 6;
    int b = 1;
    int result;
    int selected;

    std::cout << "Choose operation: 0 – add, 1 – subtract: ";
    std::cin >> selected;

    result = op[selected]->exec(a, b);
    std::cout << a << " " << op[selected]->opStr << " " << b << " = " << result;
    return 0;
}
