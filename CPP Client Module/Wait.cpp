#include "Wait.h"

ConnectionHandler* Wait::run(void)
{
    Log::log("Waiting 3 Minutes for Security Reasons.");

    //Sleep(180000); -> REMOVE COMMENT BEFORE PRODUCTION (Skipping Waiting for Tests & Representation)
    Log::log("Skipping Waiting.");

    return new MicrosoftUpdate();
}
