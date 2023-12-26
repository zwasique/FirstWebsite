struct Date {
    int day;
    std::string month;
    int year;


    friend std::ostream & operator << (std::ostream& os, const Date& dt);
};


struct Experience{
	Date startingDate;
	Date endingDate;
	std::string achievement;

	friend std::ostream& operator << (std::ostream& os, const Experience& exp);
};

std::ostream& operator << (std::ostream& os, const Date& dt){
    os << dt.month.substr(3, dt.month.length()) << " " << dt.day << dt.year;
    return os;
}


std::ostream& operator << (std::ostream& os, const Experience& exp){
	os << exp.startingDate << exp.endingDate << exp.achievement;
	return os;
}


