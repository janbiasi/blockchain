#include <cstdint>
#include <iostream>

using namespace std;

class Block {
    public:
        // link to the previous block
        string previousHash;

        // constructor, pass index and constant data for preserving memory
        Block(uint32_t indexIn, const string &dataIn);

        // get the hash for the current block
        string GetHash();

        // mine new block from the current position
        void MineBlock(uint32_t difficulty);
    
    private:
        uint32_t _index;
        int64_t _nonce;
        string _data;
        string _hash;
        time_t _time;
    
        string _CalculateHash() const;
};