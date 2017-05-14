#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define PB push_back 
#define MP make_pair
#define F first
#define S second
#define all(c) (c).begin(),(c).end() 
typedef long long ll;

int xo, yo;

struct piece
{
    char kind;
    int x, y;
};

piece nearest[8]; 

int dist(int x1, int y1, int x2, int y2)
{
    return max(abs(x1 - x2), abs(y1 - y2));
}

void upd_nearest(piece &was, const piece &cur)
{
    if (was.kind == '?' || dist(xo, yo, cur.x, cur.y) < dist(xo, yo, was.x, was.y))
        was = cur;
}

int get_direction(const piece &cur)
{
    // vertical up - down
    if (cur.x == xo && cur.y < yo) return 0;
    if (cur.x == xo && cur.y > yo) return 1;
    // horizontal left - right
    if (cur.x < xo && cur.y == yo) return 2;
    if (cur.x > xo && cur.y == yo) return 3;
    // diagonal 1
    if ((cur.y - yo) == (cur.x - xo) && cur.x < xo) return 4;
    if ((cur.y - yo) == (cur.x - xo) && cur.x > xo) return 5;
    // diagonal 2
    if ((cur.y - yo) == (xo - cur.x) && cur.y < yo) return 6;
    if ((cur.y - yo) == (xo - cur.x) && cur.y > yo) return 7;

    // lie on same dir
    return -1;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cin >> xo >> yo;
    for(int i = 0; i < 8; ++i)
    {
        nearest[i].kind = '?';
    }

    // read and update the nearest
    for(int i = 0; i < n; ++i)
    {
        char kind;
        int x, y;
        cin >> kind >> x >> y;
        piece cur;
        cur.kind = kind, cur.x = x, cur.y = y;
        int dir = get_direction(cur);
        if (dir >= 0)
        {
            upd_nearest(nearest[dir], cur);
        }
    } 

    bool ans = false;
    // check vertical and horizontals
    for(int i = 0; i < 4; ++i)
    {
        if (nearest[i].kind == 'R' || nearest[i].kind == 'Q')
            ans = true;
    }

    // check diagonals
    for(int i = 4; i < 8; ++i)
    {
        if (nearest[i].kind == 'B' || nearest[i].kind == 'Q')
            ans = true;
    }
    puts(ans ? "YES" : "NO");
    return 0;
}
