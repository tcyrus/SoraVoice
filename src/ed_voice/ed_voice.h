#ifndef __ED_VOICE_H__
#define __ED_VOICE_H__

#ifndef EXTERNC
#ifdef __cplusplus
#define EXTERNC extern "C"
#else
#define EXTERNC 
#endif  // __cplusplus
#endif  // !EXTERNC

EXTERNC int __cdecl StartUp();
EXTERNC void __cdecl ReloadedStart();

#undef EXTERNC

#endif  // __ED_VOICE_H__
