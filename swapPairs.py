# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for singly-linked list.
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def swapPairs(self, head):
        # Dummy node to handle edge cases easily
        dummy = ListNode(0)
        dummy.next = head
        prev = dummy

        # Traverse the list while there are at least 2 nodes left
        while prev.next and prev.next.next:
            first = prev.next
            second = prev.next.next

            # Swap the nodes
            first.next = second.next
            second.next = first
            prev.next = second

            # Move prev to the next pair
            prev = first

        # Return the new head
        return dummy.next

# Helper function to create a linked list from a list
def create_linked_list(values):
    if not values:
        return None
    head = ListNode(values[0])
    current = head
    for val in values[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Helper function to convert linked list to list
def linked_list_to_list(head):
    result = []
    while head:
        result.append(head.val)
        head = head.next
    return result

# Test cases
values_list = [[1, 2, 3, 4], [], [1], [1, 2, 3]]
for values in values_list:
    head = create_linked_list(values)
    solution = Solution()
    swapped_head = solution.swapPairs(head)
    print(linked_list_to_list(swapped_head))
