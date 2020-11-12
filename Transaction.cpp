#include "Transaction.h"

Transaction::Transaction(unsigned int clientId,  Date date, vector<string> products){
	this->clientId = clientId;
	this->date = date;
	this->products = products;
}

unsigned int Transaction::getClientId() const{
  return clientId;
}

vector<string> Transaction::getProducts() const{
	return products;
}

Date Transaction::getDate() const{
	return date;
}

bool Transaction::compareTo(const Transaction &trans){
	return this->date.compareTo(trans.date);
}

ostream& operator<<(ostream& out, const Transaction & trans){

	out << trans.clientId << " ; " << trans.date << " ; ";
	
	for (unsigned int j = 0; j < trans.products.size(); j++)
	{
		out << trans.products[j];
		if (j != trans.products.size() - 1)
			out << ", ";
	}
	out << "\n";

	return out;
}