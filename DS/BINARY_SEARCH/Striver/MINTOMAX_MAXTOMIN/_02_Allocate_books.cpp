/*

  problem statment:

  Give an array ar of intergers number arr[i] represents the number of pgaes in the 'i-th block'

  There are `m` number of students and the taks is to allocate all the books to the students

  Allocate books in such a way that:

  1. Each student gets at least one book
  2. Each book should be allocated to exactly one student
  3. Book allocation should be in the contigous order

  you have to allocate the book to m students such that the maximum number of pages assigned to a student is minimized

  if the allocation is not possible return -1

  arr[] = [ 25,  46,   28,    49, 24] students =4

1:          25|46|28|49+24          max=73
2:          25|46|28+49|24          max=77
3:          25|46+28|49|24          max=74
4:          25+46|28|49|24          max=71

min({73,77,74,71})=71

- if we have size of array of books < students then we can't allocate the books to the students

  arr[] = [ 12, 34, 67, 90] students =2

- In order to assign all the books to the students we need atleast max(arr[i]) pages

  arr[] = [ 12, 34, 67, 90] students =4

- and at max we can assign all the books to the a single student


pages = [25, 46, 28, 49, 24] students = 4



int canAllocate(vector<int>&pages,int students,int maxPages){
    int cntStudent=1;

    int sum=0;

    for(int i=0;i<pages.size();i++){
        sum+=pages[i];
        if(sum>maxPages){
            cntStudent++;
            sum=pages[i];
        }
    }

    return cntStudent;

}


int low=*max_element(pages.begin(),pages.end());
int high=accumulate(pages.begin(),pages.end(),0);


for(int i=low;i<=high;i++){
    cntStudent=canAllocate(pages,students,i);
    if(cntStudent==m){
        return i;
    }
}


✅ Time: O(n*(sum-max))
✅ Space: O(1)

*/

#include <bits/stdc++.h>
using namespace std;

int canAllocate(vector<int> &pages, int students, int maxPages)
{
    int cntStudent = 1;
    int sum = 0;

    for (int i = 0; i < pages.size(); i++)
    {
        sum += pages[i];
        if (sum > maxPages)
        {
            cntStudent++;
            sum = pages[i];
        }
    }

    return cntStudent;
}

int allocateBooks(vector<int> &pages, int students)
{
    int low = *max_element(pages.begin(), pages.end());
    int high = accumulate(pages.begin(), pages.end(), 0);

    while (low <= high)
    {
        int mod = low + (high - low) / 2;

        if (canAllocate(pages, students, mod) > students)
        {
            low = mod + 1;
        }
        else
        {
            high = mod - 1;
        }
    }

    return low;
}

int main()
{
    int n;
    cin >> n;
    vector<int> pages(n);

    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }

    return 0;
}