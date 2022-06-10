#include <iostream>
#include <vector>

class SubAcnt
{
public:
    void ripOff();

private:
    int id;
};

class BankAccount
{
public:
    virtual void withdraw(double);
    virtual void deposit(double);
private:
    std::vector<SubAcnt> SubAcnts;
protected:
    int accountID;
    double balance;
    std::string name;
};

class SavingsAccount : public BankAccount
{
public:
    void withdraw(double) override;
    void deposit(double) override;
    double checkBal();
private:
    double interest;
};

class MilesAccount : public BankAccount
{
public:
    std::string claim(std::string);
    void addPoints(int);
private:
    std::string rewards;
    int points;
};

class Customer
{
private:
    int id;
    std::string name;
    std::vector<BankAccount*> accounts;
public:
    void createAccount();
    bool subscribe(BankEvent);
};

class BankEvent
{
public:
    void party();
private:
    std::string title;

};
int main()
{

}