#include <iostream>
#include <string>
using namespace std;

int main(void) {
   char charTree;
   int treeSize;
   int treeSpace;
   int treeChars;

   cin >> treeSize;
   cout << "Ʈ���� ������ : " << treeSize;
   cin >> charTree;
   cout << "\nƮ���� �̷�� ���� : " << charTree << "\n";
   

   for(int i = 0; i < treeSize; i++){
      treeSpace = (treeSize-i)-1;
      treeChars = (2*i)+1;
      string stringSpace(treeSpace, '_');
      string stringTree(treeChars, charTree);
      cout << stringSpace << stringTree << stringSpace << endl;
   }

   return 0;
}