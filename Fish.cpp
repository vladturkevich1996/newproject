
#include "Fish.h"


void Fish::InData(ifstream& ifst) {
	ifst >> InputWater;
	Place = static_cast<Water>(InputWater);
	ifst >> name;
}

void Fish::Out(ofstream& ofst) {
	
	ofst << name <<  " It is the fish. It lives in ";
	switch (Place) {
	case RIVER: // ����
		ofst << "a river." << endl;
		break;
	case SEA: // ����
		ofst << "a sea." << endl;
		break;
	case LAKE: // ����
		ofst << "a lake." << endl;
		break;
	default:
		ofst << "(Who knows?)." << endl;
	}
}
