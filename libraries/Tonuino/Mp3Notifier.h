/*
    Mp3Notifier.h - Helper class for DFMiniMp3 notifications
    Created on 2019-05-03.
*/

#ifndef Mp3Notifier_h
#define Mp3Notifier_h

#include "Arduino.h"

class Mp3Notifier {
    public:
        static void OnError(uint16_t errorCode);
        static void OnPlayFinished(uint16_t track);
        static void OnCardOnline(uint16_t code);
        static void OnCardInserted(uint16_t code);
        static void OnCardRemoved(uint16_t code);
};

#endif
