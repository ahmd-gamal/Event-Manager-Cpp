# Event-Manager-Cpp

------------------------------------------------------------------------------
                       project design explanation
------------------------------------------------------------------------------
This project consists of three layers:

1)  The first layer is the base layer and it consists of 7 classes
    One of these classes is the base for the rest of the children's 
    six classes. the base class is of the abstract type , which contains 
    pure virtual function  and normal function. the rest of class in 
    inherit from base class and override the virsual function

2) the second layer is the generator layer. and the main function of 
   this layer is to generate event and post it to event manager layer. 
   the main feature of this class is having factory function which 
   creates one of several poly-morphic objects. and using the laibrary
   of #include<time.h> to create a frequency as implemented in code.

3) the final layer is even manger wich is the control layer. and the 
   main function of this layer is to do the excution of the even and 
   use all previous layers and class to do this perpous. the main
   features of this layer are using singleton class in order to creat
   only one class and cant copy this class , and also using a thread 
   library to run this layer in separte thread , and one of good feature
   used is priority_queue and in order to implemnt it probarly we must 
   creat functor class to compare between queues.
------------------------------------------------------------------------------


------------------------------------------------------------------------------
                                senior used
------------------------------------------------------------------------------
the senior use in this project in order to test that the classes work right 
is make the frequency of creation event to be 2 sec and the event manager 
allows classes to execute every 5 sec.
------------------------------------------------------------------------------


------------------------------------------------------------------------------
                               output sample
------------------------------------------------------------------------------

SystemWakeup generated
SystemShutdown generated
HardwareReceivePacket generated
SystemSleep generated
SystemShutdown generated

================================ 
        Event Manager
================================ 
system setup called
SystemSleep is Executing
----------------------------
system setup called
SystemWakeup is Executing
----------------------------
setup Hardware Executing
HardwareReceivePacket is Executing
----------------------------
system setup called
SystemShutdown is Executing
----------------------------
system setup called
SystemShutdown is Executing
----------------------------
------------------------------------------------------------------------------


------------------------------------------------------------------------------
                               OOP Concepts used
------------------------------------------------------------------------------

1)   Inheritance in building the events hierarchy.

2)   Abstract Classes and the use of pure virtual functions.

3)   Polymorphic Objects and Factory Functions.

4)   Calling base class non default constructors from the children constructors.

5)   using Function Overloading

6)   C++ type castings, static_cast

7)   Singleton Design Pattern.

8)   Operator Overloading in Functors.

------------------------------------------------------------------------------
