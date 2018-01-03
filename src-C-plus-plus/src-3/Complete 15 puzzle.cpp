#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

using namespace std;
#define N 4

class Iboard
{

public:

Iboard ()
{};
virtual ~Iboard () {};
   virtual void shuffleBoard(unsigned int steps) = 0;
virtual  unsigned int getBlock( unsigned int x,  unsigned int y  )=0;
virtual bool MoveBlock(unsigned int x,unsigned int y)=0;

  // make a virtual destructor in case we delete an IErrorLog pointer, so the proper derived destructor is called
};

class Iboard1
{
    public:

   int i;
     Iboard1(int x) {
     i=x;
     cout << "\n\n Are excited to play now ?\n";
     cout << "Choose 'm' to play manually or 'a' for anutomatic by applying AI \n";
  }

  virtual ~Iboard1(){};

    };

class vr:public Iboard
{

    public :
    int q;
    char e,s;

  void shuffleBoard(unsigned int steps)

   {
 {  cout<<"This is a 15 puzzle board looks like below"<<endl;
     int ar[4][4] = {
            {1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15, 0}
       };

       for (int row = 0; row < 4; ++row) {
           for (int col = 0; col < 4; ++col) {
               std::cout << ar[row][col] << ' ';
           }
           std::cout << std::endl;
       }
    cout<<"You should shuffle the board before start playing any integer input"<<endl;

     cin>>q;

      {
          std::srand(std::time(NULL)); 
           int ar[4][4] = {
            {1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15, 0}
       };
       for(int i =0; i< q; i++)
       {
 std::random_shuffle(&ar[0][0], &ar[3][4]);}

  cout<<"Number of shuffle: "<<q<<endl;
       for (int row = 0; row < 4; ++row) {
           for (int col = 0; col < 4; ++col) {
               std::cout << ar[row][col] << ' ';
           }
           std::cout << std::endl;
       }}

            }
        }

  unsigned int getBlock( unsigned int x,  unsigned int y  )
    {
        cout<<"Each blok numbers are apprearing"<<endl;
         int ar[4][4] = {
           {1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15, 0}
       };

       for (int row = 0; row < 4; ++row) {
           for (int col = 0; col < 4; ++col) {
               std::cout << ar[row][col] << ' ';
           }
           std::cout << std::endl;
       }
            }

 bool MoveBlock(unsigned int x,unsigned int y)


{

    cout<<"Block moving logic"<<endl;
  int ar[4][4] = {
            {1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15, 0}
       };

       for (int row = 0; row < 4; ++row) {
           for (int col = 0; col < 4; ++col) {
               std::cout << ar[row][col] << ' ';
           }
           std::cout << std::endl;
       }
     int q;
       cout<<"Press 1 to see the moving demo"<<endl;
     cin>>q;

     if(q==1)
     {
        int ar[4][4] = {
           {0, 1, 2, 3},
           {4, 5, 6, 7},
           {8, 9, 10, 11},
           {12,13, 14, 15,}
       };

       for (int row = 0; row < 4; ++row) {
           for (int col = 0; col < 4; ++col) {
               std::cout << ar[row][col] << ' ';
           }
           std::cout << std::endl;

       }
          cout<<"Block 1 is moved"<<endl;

        return true;
     }
        else

           return false;

    }

};

class Isolver
{
public :

 Isolver(){};

virtual ~ Isolver(){};

    virtual void x(Iboard1* pboard)=0;

    };

class derived:public Isolver

{
    public:
    void x(Iboard1* pboard)
        {
            }
};

// manual

class p15 {
public :
    void play() {
        bool p = true;
        std::string a;
        while( p ) {
            createBrd();
            while( !isDone() ) { drawBrd();getMove(); }
            drawBrd();
            std::cout << "\n\nCongratulations!\nPlay again (Y/N)?";
            std::cin >> a; if( a != "Y" && a != "y" ) break;
        }
    }
private:
    void createBrd() {
        int i = 1; std::vector<int> v;
        for( ; i < 16; i++ ) { brd[i - 1] = i; }
        brd[15] = 0; x = y = 3;
        for( i = 0; i < 1000; i++ ) {
            getCandidates( v );
            move( v[rand() % v.size()] );
            v.clear();
        }
    }
    void move( int d ) {
        int t = x + y * 4;
        switch( d ) {
            case 1: y--; break;
            case 2: x++; break;
            case 4: y++; break;
            case 8: x--;
        }
        brd[t] = brd[x + y * 4];
        brd[x + y * 4] = 0;
    }
    void getCandidates( std::vector<int>& v ) {
        if( x < 3 ) v.push_back( 2 ); if( x > 0 ) v.push_back( 8 );
        if( y < 3 ) v.push_back( 4 ); if( y > 0 ) v.push_back( 1 );
    }
    void drawBrd() {
        int r; std::cout << "\n\n";
        for( int y = 0; y < 4; y++ ) {
            std::cout << "+----+----+----+----+\n";
            for( int x = 0; x < 4; x++ ) {
                r = brd[x + y * 4];
                std::cout << "| ";
                if( r < 10 ) std::cout << " ";
                if( !r ) std::cout << "  ";
                else std::cout << r << " ";
            }
            std::cout << "|\n";
        }
        std::cout << "+----+----+----+----+\n";
    }
    void getMove() {
        std::vector<int> v; getCandidates( v );
        std::vector<int> p; getTiles( p, v ); unsigned int i;
        while( true ) {
            std::cout << "\nPossible moves: ";
            for( i = 0; i < p.size(); i++ ) std::cout << p[i] << " ";
            int z; std::cin >> z;
            for( i = 0; i < p.size(); i++ )
                if( z == p[i] ) { move( v[i] ); return; }
        }
    }
    void getTiles( std::vector<int>& p, std::vector<int>& v ) {
        for( unsigned int t = 0; t < v.size(); t++ ) {
            int xx = x, yy = y;
            switch( v[t] ) {
                case 1: yy--; break;
                case 2: xx++; break;
                case 4: yy++; break;
                case 8: xx--;
            }
            p.push_back( brd[xx + yy * 4] );
        }
    }
    bool isDone() {
        for( int i = 0; i < 15; i++ ) {
            if( brd[i] != i + 1 ) return false;
        }
        return true;
    }
    int brd[16], x, y;
};


//automatic

int row[] = { 1, 0, -1, 0 };
int col[] = { 0, -1, 0, 1 };

class Node
{
public:
   Node* parent;
   int mat[N][N];
   int x, y;
   int cost;
   int level;
};

//======================================================================

void printMatrix( int mat[N][N] )                          // <==== CORRECTION: add "void"
{
   for ( int i = 0; i < N; i++ )
   {
      for ( int j = 0; j < N; j++ ) cout << mat[i][j] << '\t';
      cout << '\n';
   }
   cout << '\n';
}

//======================================================================

Node* newNode( int mat[N][N], int x, int y, int newX, int newY, int level, Node* parent )
{
   Node* node = new Node;

   node->parent = parent;
   memcpy( node->mat, mat, sizeof node->mat );
   swap( node->mat[x][y], node->mat[newX][newY] );
   node->cost  = INT_MAX;
   node->level = level;
   node->x     = newX;
   node->y     = newY;

   return node;
}

//======================================================================

int calculateCost( int initial[N][N], int final[N][N] )    // "cost" is number of differences from final
{
   int count = 0;
   for ( int i = 0; i < N; i++ )
   {
      for (int j = 0; j < N; j++ ) if ( initial[i][j] && initial[i][j] != final[i][j] ) count++;
   }
   return count;
}

//======================================================================

int isSafe( int x, int y )                                 // a possible point
{
   return ( x >= 0 && x < N && y >= 0 && y < N );
}

//======================================================================

void printPath( Node* root )
{
   if (root == nullptr ) return;

   printPath( root->parent );
   printMatrix( root->mat );
   cout << "\n\n";
}

//======================================================================

// Comparison object to be used to order the heap
class comp
{
public:
   bool operator()( const Node* lhs, const Node* rhs ) const
      { return ( lhs->cost + lhs->level ) > ( rhs->cost + rhs->level ); }
};

//======================================================================

void solve( int initial[N][N], int x, int y, int final[N][N] )
{
   priority_queue<Node*, vector<Node*>, comp> pq;

   Node* root = newNode( initial, x, y, x, y, 0, nullptr );
   root->cost = calculateCost( initial, final );
   pq.push(root);

   while ( !pq.empty() )
   {
      Node* min = pq.top();
      pq.pop();
      if ( min->cost == 0 )
      {
         printPath( min );
         return;
      }

      for ( int i = 0; i < 4; i++ )
      {
         if ( isSafe( min->x + row[i], min->y + col[i]) )
         {
            Node* child = newNode( min->mat, min->x, min->y, min->x + row[i], min->y + col[i], min->level + 1, min );
            child->cost = calculateCost( child->mat, final );
            pq.push( child );

            cout << "Added a child with cost " << child->cost << '\n';    // just a debugging line
//          printMatrix( child->mat );   char c;   cin >> c;              // just a debugging line
         }
      }
   }
}




int main()
{

    char j,m,a;
Iboard *i;

vr t;

i=&t;

i-> shuffleBoard(1);

i->getBlock(2,3);
cout<<"Checking bool for true or false 1 or 0 repectively:"<<i->MoveBlock(4,5);
derived obj;
Iboard1 b(1);
obj.x(&b);


cin>>j;

if(j=='m')
{
    cout<<"Hi ! I am a 15 puzzle game, you wanna play with me?"<<endl;
 cout<<"Then go ahead, to play manually if you can win I will congratulate you"<<endl;
 cout<<"Good luck :)"<<endl;
    srand( ( unsigned )time( 0 ) );
    p15 p; p.play(); return 0;
    }

    else if (j=='a')

{
     cout<<"Hi I am an Artificial Intelligence 15 Puzzle solver"<<endl;
     cout<<"I am now more smarter than previous version"<<endl;
       cout<<"Because after your shuffle I will solve it for you"<<endl;
         cout<<"So this time you will congratulate me"<<endl;
    top :
    cout<<"Please press 's' to shuffle"<<endl;

   
    char s;
        cin>>s;

        if(s=='s')
        {

          // Algorith starts

 srand( time( nullptr ) );
   int initial[N][N];
   int final[N][N]   = { {  1,   2,  3,  4 },
                         {  5,   6,  7,  8 },
                         {  9,  10, 11, 12 },
                         { 13,  14, 15, 0  } };

   for ( int i = 0; i < N; i++ )
   {
      for (int j = 0; j < N; j++ ) initial[i][j] = final[i][j];
   }
   random_shuffle( &initial[0][0], &initial[0][0] + N * N );         // <==== CORRECTION
  
   cout << "Initial matrix:\n";
   printMatrix( initial );

// progress starts
  cout<<"Thinking to solve, please be patient\n"<<endl;

        int count = 10;

            for(count;count < 110; count+=10){


                cout <<"\n"<<count<<"%"<<endl<<" ";

                fflush(stdout);

                sleep(5); // this loop is for showing progress 
            }

   cout<<"\n\n"<<endl;
   
    // sleep(5);
      cout<<"Here we go......."<<"\n"<<endl;
 sleep(5);
// progress ends

   int x = 1, y = 2;                                                
   solve( initial, x, y, final );

//Algorithm ends

    
}

else

goto top;
    }

    return 0;
}




// Demo -> https://repl.it/Mp4z/4
