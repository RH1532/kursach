#include "fstream"
#include "iostream"
#include "Network.h"

using namespace std;

int main()
{
	try {
		int source, sink;
		ifstream input("C:\\users\\danil\\source\\repos\\kursach\\kursach\\input.txt");
		Network* transnet = new Network(input);
		int MaxFlow = transnet->max_flow();
		cout << endl << "Max Flow is " << MaxFlow << endl;
		delete transnet;
	}

	catch (exception& ex) {
		std::cout << ex.what();
	}
}