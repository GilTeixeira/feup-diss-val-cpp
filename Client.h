
#include <iostream>
#include <string>
#include "Date.h"
#include "Person.h"

using namespace std;

class Client : public Person{
 private:
  Date signUpDate;
  double totalAmount;

 public:
  Client(unsigned int id, string nome, Date signUpDate, double totalAmount);
  double getTotalAmount() const;
  void addAmount(double amount);
  void setSignUpDate(Date cartaoClient);
  friend ostream& operator<<(ostream& out, const Client & cli);  // show info
};
