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

    int wow; // wow steht für den Begeisterungswert

    for (int i = 0; i < static_cast<int>(program.size());i++){
        try{
            wow += program[i]->getValue(program, i);

        }catch(const std::out_of_range& e){
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }
    return wow;
}

TalentShow::~TalentShow()
{
    for (AbstractAct* act : program){
        delete act;
    }
}
