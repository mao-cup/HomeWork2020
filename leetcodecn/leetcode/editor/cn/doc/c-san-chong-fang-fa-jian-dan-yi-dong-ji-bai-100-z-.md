两遍哈希
### 代码

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> m;

        for(int i=0;i<nums.size();i++)
            m[nums[i]] = i;         //向map中添加元素
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i]) != m.end() && m[target-nums[i]] != i)     //如果m中存在对应的键值，并且不为i
                return {i , m[target-nums[i]]};
        }
        return {};
    }
};
```
一遍哈希
### 代码

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i]) != m.end())      //m中存在对应的键值
                return {m[target-nums[i]] , i};        //m[target-nums[i]]为已经加入map的元素的索引，所以小于本轮循环中的i，放在前面

            m[nums[i]]=i;       //向map中添加元素
        }
        return {};
    }
};
```

暴力解法
### 代码

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();

        for(int i=0;i<len-1;i++)
        for(int j=i+1;j<len;j++)
        {
            if(nums[i]+nums[j] == target)
            return {i,j};
        }
        
       return {};
    }
};
```