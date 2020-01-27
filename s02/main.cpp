#include <iostream>
#include <random>
#include <ctime>


using namespace std;

const int sides = 6;

int main(void) {
  const int n_dice = 2;
  uniform_int_distribution<unsigned> u(1,6);
  default_random_engine e(time(0));

  cout << "\nEnter number of trials: ";
  int trials;
  cin >> trials;
  int* outcomes = new int[n_dice * sides +1];

  for (int j = 0; j < trials; ++j) {
    int roll = 0;
    for (int k = 1; k <= n_dice; ++k){
      roll += u(e);
    }
    outcomes[roll]++;
  }
  cout << "probability\n";
  for (int j = 2; j < n_dice * sides + 1; ++j)
  cout << "j = " << j << "p = " << static_cast<double>(outcomes[j] / trials)
  << endl;

}

/* https://d3c33hcgiwev3.cloudfront.net/OScCPy7GEeiTdA5yoE99Fg_397fcfc02ec611e88adf73171239745a_The-random-library-2018.pdf?Expires=1580256000&Signature=KFZ8cSUC25achtrDi9QUE5LMSe0pRstENuy0ZKDRS4n8nX0fdTbqXMi0AfVUE792E4zMFwMRVNbzBuAZJeMQy0YomP4FugK3rbBIrAijOfYNtOUZojDGJdqBSUss82WroamJ8A7EEncudeRSpOGGfg42iDquc9Hn2D6Q6U5l-Ec_&Key-Pair-Id=APKAJLTNE6QMUY6HBC5A */