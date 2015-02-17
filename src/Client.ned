////
//// This program is free software: you can redistribute it and/or modify
//// it under the terms of the GNU Lesser General Public License as published by
//// the Free Software Foundation, either version 3 of the License, or
//// (at your option) any later version.
//// 
//// This program is distributed in the hope that it will be useful,
//// but WITHOUT ANY WARRANTY; without even the implied warranty of
//// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//// GNU Lesser General Public License for more details.
//// 
//// You should have received a copy of the GNU Lesser General Public License
//// along with this program.  If not, see http://www.gnu.org/licenses/.
//// 
//
package CS381_BitTorrent;
//
//simple Peer
//{
//    parameters:
//    	string name;
//    	
//    gates: // define the ports to the outside world
//        input input1;
//        output output1;
//        input input2;
//        output output2;
//        input input3;
//        output output3;
//        input trackerIn;
//        output trackerOut;
//}
//
//
//// define a typedef for a simple module. Here we define a protocol
//// layer implementation of a transport protocol
//simple Tracker
//{
//   parameters:
//    	string name;
//    	
//    gates: // define the ports to the outside world and layer above
//        input input1;
//        output output1;
//        input input2;
//        output output2;
//        input input3;
//        output output3;
//}
//
//
//// now we define a module comprising instances of the simple
//// module type defined above.  Again there are no parameters for the
//// top level compound module. 
//module RelXport_Network_1_0
//{
//
//    submodules: // child modules
//        // process instances
//        p1: Peer {
//           parameters:
//			    name = "p1";
//		   @display("p=115,50");
//        }
//        p2: Peer {
//			parameters:
//			    name = "p2";
//            @display("p=318,50");
//        }
//        // protocol layer instances
//        p3: Peer {
//           parameters:
//			    name = "p3";
//            @display("p=115,181");
//        }
//        tracker: Tracker {
//           parameters:
//			    name = "tracker";
//            @display("p=318,181");
//        }
//    connections: // connections between child modules
//
//        // layer wise communication (no channel)
//       
//        p1.output1 --> p1.input1;
//        p1.output2 --> p2.input1;
//        p1.output3 --> p3.input1;
//        p1.trackerOut --> tracker.input1;
//        
//        p2.output1 --> p1.input1;
//        p2.output2 --> p2.input2;
//        p2.output3 --> p3.input3;
//        p2.trackerOut --> tracker.input2;
//        
//        p3.output1 --> p1.input1;
//        p3.output2 --> p2.input2;
//        p3.output3 --> p3.input3;
//        p3.trackerOut --> tracker.input3;
//        
//        tracker.output1 --> p1.trackerIn;
//        tracker.output2 --> p2.trackerIn;
//        tracker.output3 --> p3.trackerIn;
//        
//}
//
//// now define a network
//network myNet
//{
//    submodules:
//        myNW : RelXport_Network_1_0;
//}
//
