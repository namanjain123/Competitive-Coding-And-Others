public class Solution {
    public int Candy(int[] ratings) {
        int[] candies = new int[ratings.Length];
    
    // Give each child at least one candy
    for (int i = 0; i < candies.Length; i++) {
        candies[i] = 1;
    }
    
    // Iterate through the array from left to right
    for (int i = 1; i < candies.Length; i++) {
        // If the child has a higher rating than the previous child, give them one more candy
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }
    
    // Initialize a variable to store the total number of candies
    int totalCandies = candies[candies.Length - 1];
    
    // Iterate through the array from right to left
    for (int i = candies.Length - 2; i >= 0; i--) {
        // If the child has a higher rating than the next child and they have fewer candies, give them one more candy
        if (ratings[i] > ratings[i + 1] && candies[i] <= candies[i + 1]) {
            candies[i] = candies[i + 1] + 1;
        }
        // Add the number of candies for this child to the total
        totalCandies += candies[i];
    }
    
    return totalCandies;
    }
}