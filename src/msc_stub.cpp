/* Stub MscHandler for dab_time_cli (no audio decoding needed) */
#include "msc-handler.h"

MscHandler::MscHandler(const DABParams& p, bool) : params(p) {}
void MscHandler::processMscBlock(const softbit_t*, int16_t) {}
void MscHandler::stopProcessing() {}
void MscHandler::addSubchannel(ProgrammeHandlerInterface&, AudioServiceComponentType, const std::string&, const Subchannel&) {}
void MscHandler::removeSubchannel(const Subchannel&) {}
