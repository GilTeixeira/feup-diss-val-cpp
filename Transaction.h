
#include <string>
#include <vector>
#include <iostream>
#include "Date.h"

using namespace std;

class Transaction {
 private:
  unsigned int clientId;
  Date date; // DD/MM/AAAAA
  vector<string> products;

 public:
  Transaction(unsigned int clientId,  Date date, vector<string> products);
  unsigned int getClientId() const;
  vector<string> getProducts() const;
  Date getDate() const;  
  bool compareTo(const Transaction &trans); // compare the date of two transactions
  friend ostream& operator<<(ostream& out, const Transaction & trans); // show transaction
};

