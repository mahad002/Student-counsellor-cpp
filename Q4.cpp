#include "Counsellor.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	Counsellor C(2);
	Counsellor C1(2);
	Student S;
	cin >> S;
	C1 += S;

	return 0;
}