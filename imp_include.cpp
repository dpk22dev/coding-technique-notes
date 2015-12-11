#include <iostream>

/* string libs */
//#include <string>
//#include <sstream>

/* stl libs */
//#include <vector>
//#include <list>
//#include <deque>
//#include <queue>
//#include <stack>

//#include <map>
//#include <set>
//#include <multimap>
//#include <multiset>
//#include <hash_map>
//#include <hash_set>
#include <algorithm>
//#include <iterator>
//#include <utility>
//#include <cmath>


/* c libs */
//#include <ctype.h>
//#include <cstdlib>
//#include <limits>
//#include <cstdio>

using namespace std;
 
///////////////////////////////////////////////////////////////////////////////
// typedef vector<int>  VI;
// typedef VI::iterator VII;
// typedef vector<VI>  VVI;
// typedef vector<signed char>  VC;
// typedef vector<VC>  VVC;
// typedef vector<double>  VD;
// typedef vector<VD>  VVD;
// typedef vector<string>  VS;

// typedef pair<int,int>  PI;

// typedef long long  int64;

#define fri(b)    for(int i = 0; i < b; i++)
#define frj(b)    for(int j = 0; j < b; j++)
#define frk(b)    for(int k = 0; k < b; k++)

#define frx(a,b)    for(int x = a; x < b; x++)
#define fry(a,b)    for(int y = a; y < b; y++)
#define frz(a,b)    for(int z = a; z < b; z++)

#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())

//typeof doesn't work with c++11, so remove typeof; send in your iterator
#define forEach(x, xx)  if ((x).begin() != (x).end()) for ( xx = (x).begin(); xx != (x).end(); xx++)

#define pi 3.1415926535897932384626433832795028841971
//#define px  first
//#define py  second
//int dx[] = { -1, 0, 0, +1};
//int dy[] = { 0, -1, +1, 0 };
//int dx[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
//int dy[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
//int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

#define timestamp(x) printf("Time : %.3lf s.\n", clock()*1.0/CLOCKS_PER_SEC)
#define INF 100000000000000000
#define MOD 1000000007
#define EPS 1e-9
#define maX(a,b)				((a)>(b)?(a):(b))
#define miN(a,b)				((a)<(b)?(a):(b))
#define abS(x)					((x)<0?-(x):(x))
 
///////////////////////////////////////////////////////////////////////////////
// More convenient heap functions
/*
template<class T> inline void heap_push(vector<T>& q, const T& x) {
  q.push_back(x);
  push_heap(q.begin(), q.end());
}
template<class T> inline T heap_pop(vector<T>& q) {
  pop_heap(q.begin(), q.end());
  T t = q.back();
  q.pop_back();
  return t;
}
*/
 
///////////////////////////////////////////////////////////////////////////////
/*
bool Prefix(const string& s, const string& sub) {
  return
    s.length() >= sub.length() &&
    equal(sub.begin(), sub.end(), s.begin());
}
*/
 
///////////////////////////////////////////////////////////////////////////////
// indigo9's topcoder lib: String -> Vector<string> tokeniser
// don't feed its output to forEach; get in some var and then use it in forEach
/*
VS StrTok(const string& s, char delim = ' ') {
  VS v;
  string t;
  istringstream iss(s);
  getline(iss, t, delim);
  while (!iss.fail(  )) {
    v.push_back(t);
    getline(iss, t, delim);
  }
  return v;
}
*/
 
///////////////////////////////////////////////////////////////////////////////
// indigo9's topcoder lib: string -> vector<int> reader
// don't feed its output to forEach
/*
VI IntTok(string& s) {
  for (int i = 0; i < s.size(); i++) {
    if (!isdigit(s[i]) && s[i] != '.' && s[i] != '-') s[i] = ' ';
  }
  VI v;
  istringstream iss(s); int x;
 
  iss >> x;
  while (!iss.fail()) {
    v.push_back(x);
    iss >> x;
  }
  return v;
}
*/
 
///////////////////////////////////////////////////////////////////////////////
// indigo9's topcoder lib: (class) -> integer
// convert T to string
/*
template<class T>
string Str(const T& x) {
  ostringstream oss;
  oss << x;
  return oss.str();
}
*/
 
///////////////////////////////////////////////////////////////////////////////
// indigo9's topcoder lib: string -> integer
/*
int Int(const string& s) {
  istringstream iss(s); int x;
  iss >> x;
  return x;
}
*/
///////////////////////////////////////////////////////////////////////////////
// read line: getline( cin, stringName )

/* mymacros */

#define _SHOW_ARRAY( arr, size ) fri( size ) { cout << arr[i] << ' '; } cout << endl;
#define _SHOW_STL(x, xx) forEach(x, xx){ cout << *xx << " "; } cout << endl;
#define _SHOW_STL_PAIRS(x, xx) forEach(x, xx){ cout << (*xx).first <<":"<< (*xx).second << " "; } cout << endl;

/* Le me start ;) */

/* question specific macros */


/* question specific typedefs */

int main( ) {

	/* add code here */

	return 0;

}
 
