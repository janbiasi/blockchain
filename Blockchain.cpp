#include "Blockchain.h"

Blockchain::Blockchain() {
    _chain.emplace_back(Block(0, "Genesis Block"));
    _difficulty = 6;
}

void Blockchain::AddBlock(Block newBlock) {
    newBlock.previousHash = _GetLastBlock().GetHash();
    newBlock.MineBlock(_difficulty);
    _chain.push_back(newBlock);
}

Block Blockchain::_GetLastBlock() const {
    return _chain.back();
}