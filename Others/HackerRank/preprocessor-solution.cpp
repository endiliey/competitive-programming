#define FUNCTION(name,operator) inline void name(int &current, int candidate) {!(current operator candidate) ? current = candidate : false;}

#define foreach(v,i) for(int i=0;i<=n;i++)
#define io(v) cin>> v
#define INF unsigned(!(int(0)))
#define toStr(str) #str
