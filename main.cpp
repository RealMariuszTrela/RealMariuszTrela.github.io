#include <bits/stdc++.h>
#include "markov_text_generator.h"
using namespace std;
void simple_modifier(vector<int>& v, char c)
{
    if(c==' ')
    {
        v[0] = v[2] = 0;
        ++v[1];
    }
    else if(c=='-')
    {
        ++v[2];
        v[0] = 0;
    }
    else ++v[0];
}
int main()
{
    srand(time(NULL));
    ifstream input("towns2.txt");
    Markov_generator::Generator gen(input, simple_modifier, 3, 3);
    for(int i=0; i<1; ++i)
    {
        cout << gen.generate(100) << "\n";
    }
}
