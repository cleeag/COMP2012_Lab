#include "Invoice.h"

Invoice::Invoice(const string _id, const string _date,  Person* _buyer,  Person* _seller,  Product* _productSale)
{
	id = _id;
	date = _date;
	buyer = _buyer;
	seller = _seller;
	productSale = _productSale;
	quantity = 0;
}
Invoice::~Invoice(){
	cout << "Invoice " << id << " data deleted" << endl;
}
void Invoice::createTransaction(int _qty){
	if(_qty <= productSale->getUnit()){
		quantity = _qty;
		//Todo: get the discount value from customer.
        //If the discount value = -1, show the error message "Error in discount value, transaction cancelled!" and return. 
        //Otherwise, calculate the cost of transaction by the equation: quantity * product Price * discount.
		//then update the unit of product and show the transaction done message.
		 
	}
	else{
		quantity = 0;
		cost = 0;
		cout << "Not enough stock, transaction cancelled, Please order less than " << productSale->getUnit() <<endl;
	}
}

//Todo: implement the print function to output the Invoice data as same as result

 
