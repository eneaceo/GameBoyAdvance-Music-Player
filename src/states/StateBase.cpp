#include "StateBase.h"
#include "../managers/TextGenerator.h"
#include "../managers/ImageHandler.h"
#include "../managers/MusicHandler.h"

StateBase::StateBase(TextGenerator *aTextGenerator, ImageHandler *aImageHandler, MusicHandler *aMusicHandler)
    : TextGeneratorPTR(aTextGenerator), ImageHandlerPTR(aImageHandler), MusicHandlerPTR(aMusicHandler)
{
}