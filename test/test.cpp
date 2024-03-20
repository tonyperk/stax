#include <gtest/gtest.h>
#include "../include/DoublyLinkedList.h"

// Test fixture for DoublyLinkedList class
class DoublyLinkedListTest: public ::testing::Test {
    protected:
        DoublyLinkedList dll;
};

TEST(DoublyLinkedListTest, AddTest) {
    DoublyLinkedList list;
    list.add(5);
    list.add(10);
    list.add(15);
    ASSERT_EQ(list.getLength(), 3);
}

TEST(DoublyLinkedListTest, RemoveTest) {
    DoublyLinkedList list;
    list.add(5);
    list.add(10);
    list.add(15);
    list.remove(5);
    ASSERT_EQ(list.getLength(), 2);

    list.remove(15);
    ASSERT_EQ(list.getLength(), 1);

    list.remove(10);
    ASSERT_EQ(list.getLength(), 0);
}

// Add more test cases as needed...


// Test case to verify basic functionality of DoublyLinkedList
TEST(DoublyLinkedListTest, BasicTest) {
    // Create a DoublyLinkedList
    DoublyLinkedList list;

    // Add elements to the list
    list.add(1);
    list.add(2);
    list.add(3);

    // Check the length of the list
    EXPECT_EQ(list.getLength(), 3);

    // Remove an element from the list
    list.remove(2);

    // Check the length of the list after removal
    EXPECT_EQ(list.getLength(), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
