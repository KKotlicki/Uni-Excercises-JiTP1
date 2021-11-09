
#include "duodecimal.h"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  vector<string>answers;
  ifstream myfile;
  myfile.open("my_file.txt");
  string str;

  while(getline(myfile, str)){
    answers.push_back(str);
  }

    for(int i = 0; i<20736; i++)
    {
//      if(int2dd(i) != answers[i])
//          cout << "Error at " << i << " (int -> duodecimals)" << endl;
      if(dd2int(answers[i]) != i)
          cout << "Error at " << i << " (duodecimals -> int)" << endl;
    }
    return 0;
}
