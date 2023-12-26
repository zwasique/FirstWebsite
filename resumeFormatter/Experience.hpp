struct Date {
    int day;
    std::string month;
    int year;
    void cutMonth() 

}


struct Experience{

	Date startingDate;
	Date endingDate;
	std::string achievement;

	friend ostream& operator << (ostream& os, const Experience& exp);
}


ostream& operator << (ostream& os, const Experience& exp){

	os << exp.startingDate << exp.engingDate << achievement;
	return os;
}


