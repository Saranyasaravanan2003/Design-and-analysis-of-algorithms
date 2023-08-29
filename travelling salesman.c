#include <stdio.h>
#include <limits.h>
#define N 4  
int cost[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};
int tsp(int mask, int pos) {
    if (mask == (1 << N) - 1) {
        return cost[pos][0]; 
    }
    int minCost = INT_MAX;
    for (int city = 0; city < N; city++) {
        if ((mask & (1 << city)) == 0) {
            int newCost = cost[pos][city] + tsp(mask | (1 << city), city);
            if (newCost < minCost) {
                minCost = newCost;
            }
        }
    }
    return minCost;
}
int main() {
    int startCity = 0;  
    int minCost = tsp(1 << startCity, startCity);  
    printf("Minimum cost of TSP: %d\n", minCost);
    return 0;
}
