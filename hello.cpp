/* C Example */
#include <bits/stdc++.h>
using namespace std;
// #include <mpi.h>

//hihi

// int main (argc, argv)
//      int argc;
//      char *argv[];
// {
//   int rank, size;

//   MPI_Init (&argc, &argv);	/* starts MPI */
//   MPI_Comm_rank (MPI_COMM_WORLD, &rank);	/* get current process id */
//   MPI_Comm_size (MPI_COMM_WORLD, &size);	/* get number of processes */
//   printf( "Hello world from process %d of %d\n", rank + 1, size );
//   MPI_Finalize();
//   return 0;
// }
int main(){
	function<int (int, int)> add = [&](int u, int v){
		return u + v;
	};
	cout << add(1,2);
	return 0;
}