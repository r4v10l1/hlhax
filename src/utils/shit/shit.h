#include "sdk.h"


bool isAlive(entity_state_t ent);
const char* getPlayerNameByIndex(int index);
bool WorldToScreen( float *pflOrigin , float *pflVecScreen );
void DrawLine(float *from, float *to, float r, float g, float b, float life, float width);

#define POW(a) ((a)*(a))
