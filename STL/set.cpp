#include <iostream>
#include <map>
using namespace std;

int main(){
    
    
    // empty map container 
    map<int, int> gquiz1; 
  
    // insert elements in random order 
    gquiz1.insert(pair<int, int>(1, 40));
          gquiz1.insert({1,40});
	
	// printing map gquiz1 
	    map<int, int>::iterator itr; 
	
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) { 
	        cout << '\t' << itr->first 
	             << '\t' << itr->second << '\n'; 
	    } 
	
	// assigning the elements from gquiz1 to gquiz2 
	    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end()); 
	
	
	// remove all elements up to 
	    // element with key=3 in gquiz2 
	    cout << "\ngquiz2 after removal of"
	            " elements less than key=3 : \n"; 
	    cout << "\tKEY\tELEMENT\n"; 
	    gquiz2.erase(gquiz2.begin(), gquiz2.find(3)); 
	
	// remove all elements with key = 4 
	    int num; 
	    num = gquiz2.erase(4); 
	
	
	// lower bound and upper bound for map gquiz1 key = 5 
	    cout << "gquiz1.lower_bound(5) : "
	         << "\tKEY = "; 
	    cout << gquiz1.lower_bound(5)->first << '\t'; 
	    cout << "\tELEMENT = "
	         << gquiz1.lower_bound(5)->second << endl; 
	    cout << "gquiz1.upper_bound(5) : "
	         << "\tKEY = "; 
	    cout << gquiz1.upper_bound(5)->first << '\t'; 
	    cout << "\tELEMENT = "
	         << gquiz1.upper_bound(5)->second << endl; 
	
	
	// sort map by its member
	sort(v.begin(),v.end(),comparator)
	
	bool comparator(mem i1, mem i2)
	{
	       return (i1.first < i2.first)}
	
	
	// initialize container; copy constructor
	    map<int, int> mp, copymp; 
	  
	    // insert elements in random order 
	    mp.insert({ 2, 30 }); 
	    mp.insert({ 1, 40 }); 
	    mp.insert({ 4, 50 }); 
	         h[{y, x}].insert(root->val);
	  
	    // = operator is used to copy map 
    copymp = mp; 


return 0;
}