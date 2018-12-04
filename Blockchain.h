#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
    public:
        Blockchain();
 
        void AddBlock(Block newBlock);
 
    private:
        uint32_t _difficulty;
        vector<Block> _chain;
    
        Block _GetLastBlock() const;
};