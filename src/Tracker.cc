// Implementation of the module.
// Adapted from the tictoc tutorial



#include "Tracker.h"
#include <ByteArrayMessage.h>
// the module class is now registered with omnet++ and tells it to look for
// a corresponding NED file for a simple module definition of the same name.
// ** Never put this inside a header file **
Define_Module (Tracker);

// ******* Tracker SimpleModule *******

// constructor
Tracker::Tracker (void)
  : cSimpleModule ()
{
}

// destructor
Tracker::~Tracker (void)
{
}

// overridden methods
void Tracker::initialize (void)
{
    this->name_ = this->par ("name").stringValue();
    cMessage *msg = new cMessage ("Hello");
}

// determines how to handle a message (note that an message is
// essentially any event)
void Tracker::handleMessage (cMessage *msg)
{
    string messageType = "234";
    if(messageType.equals("init")){

    }
    else if (messageType.equals("completed DL")){

    }
    else if (messageType.equals("request peer")){

    }
    else if (messageType.equals("completed DL")){

    }
    this->send (msg, "toXport");
    cMessage *newMsg = new cMessage ("Hello");
     return;
}

// there was no need for us to have provided this method, however, if
// you want to gather statistics of your simulation, this is the
// method you need to add
void Tracker::finish (void)
{
    EV << "=== finish called" << endl;
    // finalize any statistics collection
}

