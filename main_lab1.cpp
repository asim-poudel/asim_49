
/*#include<iostream>
#include"LinkedList.cpp"

int main()
{
    LinkedList list;
    list.addToHead(10);
    list.addToHead(12);
    list.Traverse();
}*/

#include<iostream>
#include"linkedList.cpp"

using namespace std;
int main()
{
    LinkedList list;
    list.addToHead(1);
    list.addToHead(122);
    list.addToTail(150);
    Node outputPtr;
    cout << list.retrieve(12, &outputPtr) << endl;


    /*{
        list.Traverse();
    int removedFromTail;
    list.removeFromTail(removedFromTail);
    std::cout << "Data removed from the tail: " << removedFromTail << std::endl;

        int removedFromHead;
        list.removeFromHead(removedFromHead);
    std::cout << "Data removed from the head: " << removedFromHead << std::endl;
        
        

    // Printing the data in the list from head to tail
    std::cout << "Data in the list: ";
    list.Traverse();
    
    // Searching for data within the list
    int searchData = 10;
    bool searchResult = list.search(searchData);
    std::cout << searchData << " exists in the list: " << (searchResult ? "Yes" : "No") << std::endl;
    }*/
    return 0;
}
