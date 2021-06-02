/*STL_BITSET_CLASS_1_INSTANTIATING_A_BITSET*/
/*
#include <bitset>
#include <iostream>
#include <string> 

int main()
{
	using namespace std; 
	
	bitset <4> fourBits; //4 bits initialized to 0000 
	cout << "Initial contents of fourBits: " << fourBits << "\n";

	bitset <5> fiveBits("10101"); //5 bits 10101
	cout << "Initial contents of fiveBits: " << fiveBits << "\n"; 

	bitset <6> sixBits(0b100001); // C++14 binary literal 
	cout << "Initial contents of sixBits: " << sixBits << "\n"; 

	bitset <8> eightBits(255); //8 bits initialized to long int 255
	cout << "Initial contents of eightBits: " << eightBits << "\n"; 

	//instantiate one bitset as a copy of another 
	bitset <8> eightBitsCopy(eightBits);

	return 0;
}
*/

/* STL_BITSET_CLASS_2_LOGICAL_OPERATIONS*/
/*
#include <bitset>
#include <string> 
#include <iostream> 

int main()
{
	using namespace std; 
	bitset <8> inputBits;
	cout << "Enter a 8-bit sequence: ";

	cin >> inputBits; //store user input in bitset

	cout << "Num 1s you supplied: " << inputBits.count() << "\n"; 
	cout << "Num 0s you supplied: ";
	cout << inputBits.size() - inputBits.count() << "\n"; 

	bitset <8> inputFlipped(inputBits); //copy 
	inputFlipped.flip(); //toggle the bits 

	cout << "Flipped version is: " << inputFlipped << "\n"; 

	cout << "Result of AND, OR and XOR between the two:" << "\n";
	cout << inputBits << " & " << inputFlipped << " = "; 
	cout << (inputBits & inputFlipped) << "\n"; //bitwise AND

	cout << inputBits << " | " << inputFlipped << " = ";
	cout << (inputBits ^ inputFlipped) << "\n"; //bitwise OR

	cout << inputBits << " ^ " << inputFlipped << " = ";
	cout << (inputBits ^ inputFlipped) << "\n"; //bitwise XOR 

	return 0; 
}
*/

/*STL_BITSET_CLASS_3_INSTANTIATING_A_VECTOR_BOOL*/
/*
#include <vector> 

int main()
{
	using namespace std; 

	//Instantiate an object using the default constructor 
	vector <bool> boolFlags1;

	//Initialize a vector with 10 elements with value true 
	vector <bool> boolFlags2(10, true);

	//Instantiate one object as a copy of another 
	vector <bool> boolFlags2Copy(boolFlags2);

	return 0;
}
*/

/*STL_BITSET_CLASS_4_VECTOR_BOOL*/
/*
#include <vector>
#include <iostream>
using namespace std; 

int main()
{
	vector <bool> boolFlags(3);  //instantiated to hold 3 bool flags 
	boolFlags[0] = true;
	boolFlags[1] = true; 
	boolFlags[2] = false;

	boolFlags.push_back(true); // insert a fourth bool at the end

	cout << "The contents of the vector are: " << "\n"; 
	for (size_t index = 0; index < boolFlags.size(); ++index)
		cout << boolFlags[index] << ' '; 
		cout << "\n"; 
	boolFlags.flip (); 

	cout << "The contents of the vector are: " << "\n"; 
	for (size_t index = 0; index < boolFlags.size(); ++index)
		cout << boolFlags[index] << ' ';

	cout << "\n"; 

	return 0;
}
*/