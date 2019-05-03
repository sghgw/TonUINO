/*
    Mp3Notifier.cpp - Helper class for DFMiniMp3 notifications
    Created on 2019-05-03.
*/

#include "Mp3Notifier.h"
#include "Arduino.h"

static void Mp3Notifier::OnError(uint16_t errorCode) {
    // see DfMp3_Error for code meaning
    Serial.println();
    Serial.print("Com Error ");
    Serial.println(errorCode);
}
static void Mp3Notifier::OnPlayFinished(uint16_t track) {
    Serial.print("Track beendet");
    Serial.println(track);
    delay(100);
    nextTrack(track);
}
static void Mp3Notifier::OnCardOnline(uint16_t code) {
    Serial.println(F("SD Karte online "));
}
static void Mp3Notifier::OnCardInserted(uint16_t code) {
    Serial.println(F("SD Karte bereit "));
}
static void Mp3Notifier::OnCardRemoved(uint16_t code) {
    Serial.println(F("SD Karte entfernt "));
}