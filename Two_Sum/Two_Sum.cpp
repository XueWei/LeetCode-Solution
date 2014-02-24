class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
    struct _index {
        int val;
        int id;
    } *indexs;
    
    vector<int> ret;
    int len = (int)numbers.size();
    indexs = new struct _index[len];
    for (int i=0; i<len; i++) {
        indexs[i].val = numbers[i];
        indexs[i].id = i+1;
    }
    sort(numbers.begin(), numbers.end());
    int begin=0, end = (int)numbers.size() -1;
    while (begin < end) {
        if (numbers[begin] + numbers[end] <target) {
            begin++;
        } else if (numbers[begin] + numbers[end] > target) {
            end--;
        } else {
            for (int i=0; i<len; i++) {
                if (indexs[i].val == numbers[begin]) {
                    ret.push_back(indexs[i].id);
                } else if (indexs[i].val == numbers[end]) {
                    ret.push_back(indexs[i].id);
                }
                if (ret.size()==2) break;
            }
            break;
        }
    }
    delete [] indexs;
    return ret;

    }
};
