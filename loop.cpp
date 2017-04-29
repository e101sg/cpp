#include <iostream>

#include <ctime>// include this header 
//#include <time>

using namespace std;
long long i,j,sum=0;
//int start_s=clock();

int main() {
	clock_t sTime;
	sTime = clock();
   for(i=1000000;i>2;i--)
   {
    //printf("%d \n",i);
   // cout<<"\n i= "<<i;
   // for(j=2;j<i;j++)
   // {
       // printf("%d \n",j);
      // cout<< " \n j="<<j;
  //  if((int)i%(int)j==0)
   // break;
   // }
    //if(i==j)
   // sum=sum+i;
  cout<<"\n"<<i;
   }
   //int stop_s=clock();
   //cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
   
   clock_t cWait = clock();
   cout << "Total CPU time used: " << (double) (clock()-sTime)/CLOCKS_PER_SEC << " seconds" << endl; 
  // cout<<"\n"<<sum;
 return 0;
}
