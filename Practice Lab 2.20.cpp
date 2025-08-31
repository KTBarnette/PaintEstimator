//
//  main.cpp
//  Jan 25
//
//  Created by Kyle T. Barnette on 1/25/23.
//

/* Kyle Barnette
    Practice Lab 2.20 - How Much to Paint
    COSC 1337-003 (55111) Katharine Susman
    This Program will take the length and height of a fence,
    the number of coats needed to paint and the number of sides of
    the fence and compute the number of gallons needed to complete
    the project */

#include <iostream>
using namespace std;

int main()
{int length = 100, // Fence length in ft.
    height = 6, // Fence height in ft.
    numCoats = 2, // Number of coats of paint
    numSides = 2, // Number of fence sides to paint
    areaToPaint; // SqFt of fence to be painted
    double sqFtPerGal = 340.0, // Number of sq. ft. a gallon can cover
    gallons; // Number of gallons needed
    
    // Get the area of the fence
    areaToPaint = length * height;
    
    // Number if gallons needed
    gallons = (areaToPaint * numCoats * numSides) / sqFtPerGal;
    
    // Display the amount of paint need to paint 2 coats of the fence
    cout << gallons << " gallons of paint are needed to paint " << numCoats << " coats on each side of a " << length << " x " << height << " foot fence." << endl;
    
    
   
   
    
    return 0;
    
    

}
    
    

