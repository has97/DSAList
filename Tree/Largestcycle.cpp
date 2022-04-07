#include <iostream>
#include<map>
#include<list>
using namespace std;
int r,maxd=-1;
class Graph
{
	public:
	int n;
	map<int,bool> visited;
	map<int,list<int>> adj;
	void addEdge(int u,int v);
	void DFS(int s,int d);
};
void Graph::addEdge(int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void Graph::DFS(int u,int d)
{
	visited[u]=true;
	list<int>::iterator i;
	if(d>maxd)
	{
		maxd=d;
		r=u;
	}
	for(i=adj[u].begin();i!=adj[u].end();++i)
	{
		if(!visited[*i])
		{
			DFS(*i,d+1);
		}
	}
	return;
}
int main() {
	int num,u,v,l;
	cin >> num;    //Reading input from STDIN
	Graph g;
	g.n=num;
	for(int i=0;i<num-1;++i)
	{
		cin>>u>>v;
		g.addEdge(u,v);
	}

	for(int i=0;i<num;++i)
	{
		g.visited[i]=false;
	}
	g.DFS(1,1);
	cout<<r<<" ";
	maxd=-1;
	for(int i=0;i<num;++i)
	{
		g.visited[i]=false;
	}
	g.DFS(r,1);
	cout<<r<<endl;


}
