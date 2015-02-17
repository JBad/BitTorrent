// Implementation of the module.
// Adapted from the tictoc tutorial



#include "Peer.h"
#include <ByteArrayMessage.h>
// the module class is now registered with omnet++ and tells it to look for
// a corresponding NED file for a simple module definition of the same name.
// ** Never put this inside a header file **
Define_Module (Peer);

// ******* Peer SimpleModule *******

// constructor
Peer::Peer (void)
  : cSimpleModule ()
{
}

// destructor
Peer::~Peer (void)
{
}

// overridden methods
void Peer::initialize (void)
{
    this->name_ = this->par ("name").stringValue();
    ByteArrayMessage *firstRequest = new ByteArrayMessage("peer");
    cMessage msg();
    char * data = "";
    firstRequest->copyDataToBuffer(data, 0);
  //  this->send(firstRequest);
 }

// determines how to handle a message (note that an message is
// essentially any event)
void Peer::handleMessage (cMessage *msg)
{
    this->send (msg, "toXport");
    cMessage *newMsg = new cMessage ("Hello");
     return;
}

// there was no need for us to have provided this method, however, if
// you want to gather statistics of your simulation, this is the
// method you need to add
void Peer::finish (void)
{
    EV << "=== finish called" << endl;
    // finalize any statistics collection
}

