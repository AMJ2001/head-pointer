// cpp-strings.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	
	string cppstring = "This is a C++ string.";

	cout << cppstring << endl;

	for( unsigned int i = 0; cppstring[i]; i++) {
		printf("%02d: %c\n", i, cppstring[i]);
	}

	return 0;
}
