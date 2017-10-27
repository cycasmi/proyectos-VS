//Adelson-Velskii, Landis Tree
//Self-balancing Binary Search Trees
//Trees that have similar heights for the left and tha right branches.
//The difference between branches must be at most 1.
//It uses rotations to keep the balace between branches after insertions and deletions

/*A leaf have the hight of 0 and the root
BALANCE FACTOR: It determine if the rotation must be performed. 
It is computed as: height(left_branch) - height(right_branch) (the range should be between -1 to 1.
if it is bigger, the rotation is should be done to regain balance.

Case left left (LL)
		Unbalanced
			D
		  /   \
		C		E
	   /		 
	  B
	/
   A

		Balanced
			D
		  /   \
		B		E
	  /	  \ 	 
	A		C


If it's a LL case, we need to do a right rotation.
If it's a RR case, we do a left rotation.


*/