#include <stdio.h>
#include <stdlib.h>

#define num_cars 3
#define num_samples 10

int main(void)
{
    float gasoline[num_cars][num_samples] = { 
        // row 0 is car 1, 10 columns of gallons 
        {4.2, 4.5, 4.7, 4.9, 5.1, 5.3, 5.5, 5.7, 5.9, 6.1},
		// row 1 is car 2, 10 columns of gallons
        {3.8, 4.0, 4.2, 4.4, 4.6, 4.8, 5.0, 5.2, 5.4, 5.6},
		// row 2 is car 3, 10 columns of gallons
        {3.5, 3.7, 3.9, 4.1, 4.3, 4.5, 4.7, 4.9, 5.1, 5.3} 
    };

    float mileage[num_cars][num_samples] = {
	    // row 0 is car 1, 10 columns of miles
        {120.5, 130.2, 135.1, 140.7, 145.3, 150.0, 155.6, 160.8, 165.4, 170.1},
		// row 1 is car 2, 10 columns of miles
        {110.3, 115.7, 120.4, 125.2, 130.9, 135.5, 140.2, 145.8, 150.3, 155.1},
        // row 2 is car 3, 10 columns of miles 
		//{130.2, 145.1, 110.3, 115.0, 120.6, 135.3, 130.7, 135.4, 130.2, 125.9}
        {100.2, 105.1, 110.3, 115.0, 120.6, 125.3, 130.7, 135.4, 140.2, 145.9}  
    };

    

}