#include<iostream>

int main()
{
    int matrix[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}

    },temp,n=4,layer=0,i;

    for(layer=0;layer<n/2;layer++)
    {

    for(i=layer;i<n-layer-1;i++)
    {

    temp=matrix[layer][i];
    matrix[layer][i]=matrix[n-i-1][layer];
    matrix[n-i-1][layer]=matrix[n-layer-1][n-i-1];
    matrix[n-layer-1][n-i-1]=matrix[i][n-layer-1];
    matrix[i][n-layer-1]=temp;

    }

    }

    for (int i = 0; i < n; i++) {
        for(int j=0;j<n;j++)
        {
            std::cout<<matrix[i][j]<<" ";

        }
        std::cout<<"\n";
    }
    return 0;
}
