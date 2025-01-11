#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <cstdio>

using namespace std;

class Prime{
	public:
		
		int PrimeList(){
			//Initializing .txt file for prime numbers.
			ofstream List("Prime.txt");
			
			//Initializing vector to hold prime numbers.
			vector<int> isPrime;
			isPrime.push_back(2);
			cout << "Welcome to a simple prime number generator - no fancy algorithms involved. We do it the tedious way!" << endl;
			cout << 2 << endl;
			List << 2 << endl;
			
			//Checking numbers from 3 to bigM for primes.
			while(counter < bigM){
				while(k < listSize){
					
					//Is the remainder of y == 0?
					x = isPrime.at(k);
					y = counter % x;
					
					//If the remainder of y == 0 then it must be an anti-prime.
					if(y == 0){
						sum++;
					}
					k++;
				}
				
				
				//If sum == 0 then the number must be prime.
				if(sum == 0){
					isPrime.push_back(counter);
					prime = counter;
					cout << prime << endl;
					List << prime << endl;
					listSize++;
				}
				
				//Resestting parameters for k < listSize statement.
				k = 0;
				sum = 0;
				x = 0;
				y = 0;
				
				//Counter can now increase by 1.
				counter++;
			}
			
		return 0;
		}
		
	private:
		int counter = 3;
		int bigM = 10000000;
		int k = 0;
		int listSize = 0;
		int prime = 0;
		int x = 0;
		int y = 0;
		int sum = 0;
	
	
};


int main() {
	Prime test;
	test.PrimeList();
	return 0;
} 