#include <iostream>
#include <vector>

using namespace std;

char *tiles1[] = {
    "11",     // 1
    "23",
    "",
    "44",     // 2
    "11",
    "",
    "16",     // 3
    "36",
    "",
    "51",     // 4
    "71",
    "",
    "46",     // 5
    "26",
    "",
    "14",     // 6
    "68",
    0};

void link(char **tiles)
{
    vector<vector<int>> mat(4, vector<int>(4,0));
    int i=0,j=0;

    while(tiles1[i][j] != 0)
    {
    	cout << i << " "<< j << " " << tiles[i][j] << "\n";

    }

    for( int k=0;k<4;k++){
    	for( int l=0;l<4;l++){
    		cout << mat[k][l];
    	}
    	cout << "\n";
    }

}

    int main(){

    	link(tiles1);

    	return 0;
    }