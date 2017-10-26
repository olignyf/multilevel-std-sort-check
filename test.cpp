#include <iostream>
#include <string>
#include <list>
#include <array>
#include <vector>
#include <map>
#include <fstream>
#include <random>
#include <string.h>
#include <inttypes.h>

using namespace std;

struct sampler {
	int a; 
	int b;
	int c;
};

bool sortCustom(sampler a, sampler b)
{
	if (a.a < b.a)
		return true;
        // without the following line it fails the test case below, uncomment to fix
	// else if (a.a > b.a)
	//	return false;

	if (a.b < b.b)
		return true;
	else if (a.b > b.b)
		return false;

	if (a.c < b.c)
		return true;

	return false;
}

int main()
{
	sampler sampl[4];
	sampl[0].a = 4;
	sampl[1].a = 3;
	sampl[2].a = 1;
	sampl[3].a = 2;
	sampl[0].b = 4;
	sampl[1].b = 3;
	sampl[2].b = 2;
	sampl[3].b = 1;
	sampl[0].c = 1;
	sampl[1].c = 2;
	sampl[2].c = 3;
	sampl[3].c = 4;
	std::sort(sampl, sampl + 4, sortCustom);
	for (auto &x : sampl)
	{
		printf("a: %d, b: %d, c:%d\n", x.a, x.b, x.c);
	}
}
