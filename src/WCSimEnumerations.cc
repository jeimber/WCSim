#include <string>
#include <iostream>

#include "WCSimEnumerations.hh"

std::string WCSimEnumerations::EnumAsString(DigitizerType_t d)
{
  switch(d) {
  case (kDigitizerSKI) :
    return "SKI";
    break;
  default:
    return "";
    break;
  }
  return "";
}

std::string WCSimEnumerations::EnumAsString(TriggerType_t t)
{
  switch(t) {
  case (kTriggerNDigits) :
    return "NDigits";
    break;
  case (kTriggerNDigitsTest) :
    return "NDigits_TEST";
    break;
  case (kTriggerNDigitsSK4_SHE) :
    return "NDigits_SK4_SHE";
    break;
  case (kTriggerNDigitsSK4_HE) :
    return "NDigits_SK4_HE";
    break;
  case (kTriggerNDigitsSK4_LE) :
    return "NDigits_SK4_LE";
    break;
  case (kTriggerNDigitsSK4_SLE) :
    return "NDigits_SK4_SLE";
    break;
  case (kTriggerFailure) :
    return "No_trigger_passed";
    break;
  default:
    return "";
    break;
    }
  return "";
}

TriggerType_t WCSimEnumerations::TriggerTypeFromString(std::string s)
{
  for(int i = int(kTriggerUndefined)+1; i <= kTriggerFailure; i++) {
    if(s.compare(WCSimEnumerations::EnumAsString((TriggerType_t)i)) == 0) {
      return (TriggerType_t)i;
    }
  }
  std::cerr << "WCSimEnumerations::TriggerTypeFromString() Unknown string value " << s << std::endl;
  return kTriggerUndefined;
}
