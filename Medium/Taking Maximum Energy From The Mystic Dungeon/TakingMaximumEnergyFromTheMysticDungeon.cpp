// https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon

class Solution {
public:
  int maximumEnergy(vector<int> &energy, int k) {
    vector<int> sum_energy(k);
    int size = energy.size();
    for (int i = 0; i < size; i++) {
      sum_energy[i % k] = max(sum_energy[i % k] + energy[i], energy[i]);
    }

    return *max_element(sum_energy.begin(), sum_energy.end());
  }
};