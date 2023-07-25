#include <iostream>
using namespace std;

class Missing {
public:
    int missing(int* nums, int n) {
        int sumArr = 0;
        int i;
        for ( i = 0; i < n; i++) {
            sumArr += nums[i];
        }
        int expectedSum = (n * (n + 1)) / 2;
        int reqNum = expectedSum - sumArr;
        // cout<<n<<endl;
        // cout<<i<<endl;
        // cout<<sumArr<<endl;
        // cout<<expectedSum;
        return reqNum;
    }
};

int main() {
    int nums[] = {0,1,2,4,5,6};
    int n = sizeof(nums) / sizeof(nums[0]);
    Missing obj;
    int missingNum = obj.missing(nums, n);
    cout << "Missing number: " << missingNum << endl;
    return 0;
}
