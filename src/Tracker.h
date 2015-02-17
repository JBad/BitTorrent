/*
 * RDT_1_0.h
 *
 *  Created on: Jan 13, 2015
 *      Author: gokhale
 */

#ifndef Tracker_H
#define Tracker_H

#include <string>
using namespace std;

#include <omnetpp.h>
#include <ByteArrayMessage.h>
#include <map>
#include <vector>

#define MSG_LEN 1024

// any simple module must provide an implementation.  Typically this involves
// deriving from the cSimpleModule class.
class Tracker : public cSimpleModule
{
public:
    Tracker (void);

  ~Tracker ();

  // need to override these virtual functions
  virtual void initialize (void);

  virtual void handleMessage (cMessage *msg);

  virtual void finish (void);

private:
  string name_; // some name assigned to us
  map<std::string, vector<int>> userKnowledge;
  map<std::string, int> userSharing;
  vector<int> howManyHave;
};




#endif /* Client_H */
