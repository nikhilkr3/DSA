#include <iostream>
#include <tuple>
#include <vector>
#include <cmath>
#include <algorithm> // for sort

using namespace std;

int main() {
    int num;
    vector<tuple<int, int, int>> pythagoreanTriples; // Stores i, j, hypotenuse
    
    cout << "Enter an integer: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        for(int j = i + 1; j <= num; j++) {
            int sumOfSquares = i*i + j*j;
            double hypotenuse = sqrt(sumOfSquares);
            
            if(hypotenuse == floor(hypotenuse)) {
                // Store as integer since we've verified it's a perfect square
                int intHypotenuse = static_cast<int>(hypotenuse);
                pythagoreanTriples.emplace_back(i, j, intHypotenuse);
            }
        }
    }

    // Print all Pythagorean triples found
    cout << "Pythagorean triples up to " << num << ":\n";
    for(const auto& triple : pythagoreanTriples) {
        cout << "(" << get<0>(triple) << ", " 
                    << get<1>(triple) << ", " 
                    << get<2>(triple) << ")\n";
    }
    cout<< "Found: "<<pythagoreanTriples.size()<<endl;

    return 0;
}
