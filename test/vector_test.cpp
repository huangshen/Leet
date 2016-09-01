#include "gtest/gtest.h"

using namespace std;

TEST(Vector,InitVector1D)
{
    vector<int> vec;
    int i;

    for(i=0;i<10;i++)
        vec.push_back(i);

    for(i=0;i<10;i++)
        //printf("vec = %d\n", vec[i]);
        cout << "vec[" << i << "] = " << vec[i] << endl;
}

TEST(Vector,InitVector2D)
{
    vector < vector <int> > vec(3);
    int i,j;

    for(i=0;i<3;i++)
        vec[i].resize(4);

    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            vec[i][j] = i*j;

    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        //printf("vec = %d\n", vec[i]);
        cout << "vec[" << i << "][" << j << "] = " << vec[i][j] << endl;
}