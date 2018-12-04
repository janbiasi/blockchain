#include "Block.h"
#include "sha256.h"
#include <sstream>

Block::Block(uint32_t indexIn, const string &dataIn) : _index(indexIn), _data(dataIn) {
    _nonce = -1;
    _time = time(nullptr);
}

string Block::GetHash() {
    return _hash;
}

void Block::MineBlock(uint32_t difficulty) {
    char cstr[difficulty + 1];
    
    for (uint32_t i = 0; i < difficulty; ++i) {
        cstr[i] = '0';
    }

    cstr[difficulty] = '\0';
    string str(cstr);
 
    do {
        _nonce++;
        _hash = _CalculateHash();
    } while (_hash.substr(0, difficulty) != str);
 
    cout << "Block mined: " << _hash << endl;
}

inline string Block::_CalculateHash() const {
    stringstream ss;
    ss << _index << _time << _data << _nonce << previousHash;
 
    return sha256(ss.str());
}