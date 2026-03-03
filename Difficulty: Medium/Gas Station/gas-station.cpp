class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        //  code here
        int total = 0, tank = 0, start = 0;
    for (int i = 0; i < gas.size(); i++) {
        tank += gas[i] - cost[i];
        total += gas[i] - cost[i];
        if (tank < 0) { start = i+1; tank = 0; }
    }
    return total >= 0 ? start : -1;
        
    }
};