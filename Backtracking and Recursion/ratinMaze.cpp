#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>> &m, vector<vector<int>> visited, int n, int newx, int newy)
{
    
    if (newx < n && newx >= 0 && newy < n && newy >= 0 && visited[newx][newy] == 0 && m[newx][newy] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, string path, vector<vector<int>> visited, int x, int y)
{

    cout<<"path--> "<<path<<endl;
    // base case
    if (x == (n - 1) && y == (n - 1))
    {
        cout<<"path found"<<endl;
        ans.push_back(path);
        return;
    }

    
    // processing
    visited[x][y] = 1;

    // down
    int newx = x+1;
    int newy = y;
    cout<<"down"<<endl;
    // cout<<"visted[newx][newy] = "<<visited[newx][newy]<<endl;
    cout<<"newx- "<<newx<<endl;
    cout<<"newy-"<<newy<<endl;
    

    // cout<<"m[newx][newy] = "<<m[newx][newy]<<endl;

    bool safety = isSafe(m, visited, n, newx, newy);
    cout<<"isSafe result: "<<safety<<endl;
    if (isSafe(m, visited, n, newx, newy))
    {
        cout<<"Visited array status: "<<visited[newx][newy]<<endl;
        cout<<"safe for ---------------------> down"<<endl;
        path.push_back('D');
        solve(m, n, ans, path, visited, newx, newy);
        path.pop_back();
    }

    // left
    newx = x;
    newy = y-1;
    cout<<"left"<<endl;
    cout<<"newx-"<<newx<<endl;
    cout<<"newy-"<<newy<<endl;


    if (isSafe(m, visited, n, newx, newy))
    {
        cout<<"Visited array status: "<<visited[newx][newy]<<endl;
        cout<<"safe for ---------------------> left "<<endl;
        path.push_back('L');
        solve(m, n, ans, path, visited, newx, newy);
        path.pop_back();
    }

    // right
    newx = x;
    newy = y+1;
    cout<<"right"<<endl;
    cout<<"newx-"<<newx<<endl;
    cout<<"newy-"<<newy<<endl;
    
    if (isSafe(m, visited, n, newx, newy))
    {
        cout<<"Visited array status: "<<visited[newx][newy]<<endl;
        cout<<"safe for ---------------------> right"<<endl;
        path.push_back('R');
        solve(m, n, ans, path, visited, newx, newy);
        path.pop_back();
    }

    // up
    newx = x-1;

    newy = y;
    cout<<"up"<<endl;
    cout<<"newx-"<<newx<<endl;
    cout<<"newy-"<<newy<<endl;
        

    if (isSafe(m, visited, n, newx, newy))
    {
        cout<<"Visited array status: "<<visited[newx][newy]<<endl;
        cout<<"safe for ---------------------> up"<<endl;
        path.push_back('U');
        solve(m, n, ans, path, visited, newx, newy);
        path.pop_back();
    }

    visited[x][y] = 0;
}

int main()
{

    cout<<"hii main function me hun"<<endl;
    int n = 4;
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};
    cout << "Printing m array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    

    vector<string> ans;
    if (m[0][0] == 0)
    {
        cout << "Ye to shuru hote hi khatam ho gaya";
    }
    int srcx = 0;
    int srcy = 0;
    
    vector<vector<int>> visited(n, vector<int>(n,0));

    cout << "Printing visited array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << visited[i][j] << " ";
        }
        cout << endl;
    }

    string path = "";
    cout << "Path = " << path << endl;

    cout << "Calling function solve" << endl;
    solve(m, n, ans, path, visited, srcx, srcy);
    cout << "Solve function ended" << endl;

    cout << "Paths: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
