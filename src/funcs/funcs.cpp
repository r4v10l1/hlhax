#include "funcs/funcs.h"

#include "funcs/visuals/xqz/xqz.h"
#include "funcs/visuals/info/info.h"
#include "funcs/visuals/thirdperson/thirdperson.h"
#include "funcs/visuals/barrel/barrel.h"
#include "funcs/visuals/wiremodels/wiremodels.h"
#include "funcs/visuals/noflash/noflash.h"
#include "funcs/visuals/tracer/tracer.h"
#include "funcs/visuals/esp/esp.h"

#include "funcs/movement/fps_set/fps_set.h"
#include "funcs/movement/sgs/sgs.h"
#include "funcs/movement/spinhack/spinhack.h"

#include "funcs/misc/steamid_changer/steamid_changer.h"
#include "funcs/misc/triggerbot/triggerbot.h"



void Funcs_Init()
{
    Xqz::Init();
    Info::Init();
    ThirdPerson::Init();
    Barrel::Init();
//  WireModels::Init();
    NoFlash::Init();
    Tracer::Init();
    Esp::Init();

    SteamidChanger::Init();
    TriggerBot::Init();

    FpsSet::Init();
    Sgs::Init();
    Spinhack::Init();
}

void Funcs_Terminate()
{
    // because of specific gl hooks,
    // Terminate functions shold be called in reversed order relative to Init
    // For example: Init: a, b; then Terminate should be: b, a
    // TODO: gl hooks should be fixed in future
    Xqz::Terminate();
}
