#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Cell Phone
//  action 1: The Phone Sends a Text Message
phone.sendTextMessage();
//  action 2: The Phone connects a voice call to another phone
phone.connectVoiceCall();
//  action 3: The Phone Sends a GPS signal to give its location
phone.sendGpsSignal();

//  2)
//  Noun: Microwave
//  action 1: A microwave cooks food
mircrowave.cook();
//  action 2: A microwave defrosts frozen food
microwave.defrost();
//  action 3: A microwave counts down time, like a timer
microwave.countDown();


//  3)
//  Noun: Car
//  action 1: A Car accelerates to move faster
car.accelerate();
//  action 2: A Car decelerates via the brakes to slow down
car.decelerate();
//  action 3: A car illuminates the road ahead via the headlights
car.turnOnHeadlights();

//  4)
//  Noun: pencil
//  action 1: A pencil draws shapes
pencil.draw();
//  action 2: A pencil writes words to make sentences
pencil.write();
//  action 3: A pencil Shades shapes to add depth and dimension
pencil.shade();

//  5)
//  Noun: HVAC System
//  action 1: an HVAC System cools down a room
hvacSystem.cool();
//  action 2: An HVAC System heats a room to make it warmer
hvacSystem.heat();
//  action 3: an Hvac System filters the room of airborne iratants
hvacSystem.filter();

//  6)
//  Noun: Amp Modeler
//  action 1: An Amp modeler passes audio through a system of effects
ampModeler.passAudio();
//  action 2: An Amp modeler processess distortion effect
ampModeler.processDistortion();
//  action 3: An Amp Modeler processes delay effects.
ampModeler.processDelay();

//  7)
//  Noun: Campfire
//  action 1: A campfire illuminates the campsite
campfire.illuminate();
//  action 2: A campfire heats up the campers
campfire.heat();
//  action 3: A campfire cooks food
campfire.cook();


//  8)
//  Noun: Oven
//  action 1: an oven bakes cookies
oven.bake();
//  action 2: An oven Broils crabs
oven.broil();
//  action 3: an oven roasts chicken
oven.roast();

//  9)
//  Noun: Water
//  action 1: Water soaks most things
water.soak();
//  action 2: Water hydrates human beings
water.hydrate();
//  action 3: Water dissolves salt
water.dissolve();

//  10)
//  Noun: Airplane
//  action 1: An airplane takes off from a runway
airplane.takeOff();
//  action 2: An airplane decends towards the earth
airplane.decend();
//  action 3: an airplane banks left or right
airplane.bank();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
