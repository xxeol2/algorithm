<벡터 출력>

vector<int> v1 = {1,2,3,4,5,6};

// 1. range-based for loop (since C++11)
for(int e : v1)
    cout << e << ' '; // e바꿔도 원본 변화 X
    
/* int& e:v1 -> e 바꾸면 원본 변화 */


// 2. not bad
for(int i=0 ; i<v1.size() ; i++)
    cout << v1[i] << ' ';


// 3. ***WRONG***
for(int i=0 ; i<=v1.size()-1 ; i++)
    cout << v1[i] << ' ';
// size : unsigned int 라서!! (unsigned int) - (int) -> unsigned int로 형변환
