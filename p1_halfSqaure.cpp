/*Problem 1: Half of a Square
*
* Produce Output:
* #####
* ####
* ###
* ##
* #
*
*/

//Personal Solution

for (int i=0; i<5; i++){
    for (int x=0; x<=abs(i-4); x++){
        cout << "#";
    }
    cout << "\n";
}

//Given Solution

for (int row = 1; row <=5; row++) {
    for (int hashNum = 1; hashNum <= 6 - row; hashNum++){
        cout << "#";
    }
    cout << "\n";
}    
