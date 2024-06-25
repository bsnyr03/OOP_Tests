#include "TalentShow.h"

TalentShow::TalentShow(std::string program, int intensityArr [])
{
    for(int i = 0; i < program.size(); i++) {
        char curr = program.at(i);
        switch(curr) {
        case 'M':
            this->program.push_back(new MagicAct(intensityArr[i]));
            break;
        case 'S':
            this->program.push_back(new SongAct(intensityArr[i]));
            break;
        case 'A':
            this->program.push_back(new AcrobaticAct(intensityArr[i]));
            break;
        }
    }
}

int TalentShow::itsShowtime() {

}

TalentShow::~TalentShow()
{
}
