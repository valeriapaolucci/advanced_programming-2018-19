// Exercises - session 4
// Class Date and Helper functions


#include <iostream>


enum class Month {january =1, february, march, april, may, june, july, august, september, october, november, december};


Month& operator++(Month& m, int i) {
  const int ii = static_cast<int>(m) + 1;
  m = static_cast<Month>(ii);
  return m;
}


class Date{
	int _day;
	Month _month;
	int _year;


public:
  Date(int d, Month m, int y): 	_day{d}, _month{m}, _year{y} {}

  int day() const { return _day; }
  Month month() const {  return _month; }
  int year() const { return _year; }

  void add_days (const unsigned int n);

};


void Date::add_days(const unsigned int n){

  unsigned int nn {n};
  while (nn!=0) {

    switch (this->_month) {
    case Month::january: case Month::march: case Month::may: case Month::july:  case Month::august:  case Month::october:
      while (this->_day <31 && nn !=0) {
	this->_day +=1;
	nn--;
      }
      if (nn != 0 ) {
	this->_month++;
	this->_day = 0;
      }
      break;

    case Month::april: case Month::june: case Month::september: case Month::november :
      while (this->_day <30 && nn !=0) {
	this->_day +=1;
	nn--;
      }
      if (nn != 0 ) {
	this->_month++;
	this->_day = 0;
      }
      break;

    case Month::february :
      while (this->_day <28 && nn !=0) {
	this->_day +=1;
	nn--;
      }
      if (nn != 0 ) {
	this->_month++;
	this->_day = 0;
      }
      break;

    case Month::december:
      while (this->_day <31 && nn !=0) {
	this->_day +=1;
	nn--;
      }
      if (nn != 0 ) {
	this->_month= Month::january;
	this->_day = 0;
	this->_year += 1;
      }
      break;

    }// end case
  }// end switch
}// end add_day


//---------------------------------------------------------------------------------------------
// Helper functions
// Implement the following external helper functions (i.e., they are not part of the class):
// - `bool operator==(const Date& lhs, const Date& rhs);`
// - `bool operator!=(const Date& lhs, const Date& rhs);`
// - `std::ostream& operator<<(std::ostream& os, const Date& d);`
//----------------------------------------------------------------------------------------------



bool operator==(const Date& lhs, const Date& rhs){
  return (lhs.day()==rhs.day()) && (lhs.month()==rhs.month()) && (lhs.year()==rhs.year());
}


bool operator!=(const Date& lhs, const Date& rhs){
  return !(lhs==rhs);
}
  


std::ostream& operator<< (std::ostream& os, const Date& d){
  os << "Date: " << d.day() << "/" << int(d.month()) << "/" << d.year() << std::endl;
  return os;
}



int main(){

  Date d{30, Month::december, 2018};
  std::cout << d << std::endl;

  d.add_days(3);

  std::cout << d << std::endl;

  Date d2{15, Month::march, 2010};

  std::cout << (d==d2) << "\n" << (d!=d2) << std::endl;

  return 0;
  

}
