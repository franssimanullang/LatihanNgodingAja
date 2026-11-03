#include <iostream>
#include <vector>
using namespace std;

class graph{
    private:
        int numberVertex;
        vector<vector<int>>adjMatrix;
        
    public:
        Graph(int banyakTitik){
            numberVertex = banyakTitik;
            adjMatrix.resize(numberVertex, vector<int>(numberVertex, 0));
        }
        
    void addEdege(int i,int j,int weight){
        if (i>=0&&i<numberVertex && j>=0&&j<numberVertex){
            adjMatrix[i][j]=weight;
            adjMatrix[j][i]=weight;
        }else{
            cout<<"Index Nonvalid"<<endl;
        }
    }

    void printAdjMatrix(){
        for(int i= 0; i<numberVertex; i++){
            for (int j=0;j<numberVertex;i++){
                cout<<adjMatrix[i][j]<<" ";
            }
            cout<<endl;
        } 
    }
}
int main()
{
    Graph graphh(5);
    graphh.addEdege(0,1,5);
    graphh.addEdege(0,2,4);
    graphh.addEdege(1,3,3);
    graphh.addEdege(1,4,7);
    graphh.addEdege(2,3,2);
    graphh.addEdege(2,3,2);

    return 0;
}
