/*
Floyd Loop Detection Algo

part - 1 -> detect if loop exits
        fast and slow pointers approach
        init fast and slow at head
        move slow by 1 step and fast by 2 steps until fast becomes equal to null or fast next is null
        if fast and slow becomes equal , loop exists

part 2 -> if loop exists, find the starting node
re init slow at head again,keep fast at 
*/