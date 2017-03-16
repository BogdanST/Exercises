Itumblr_static_6z1dtmywhjkscg4w88oggoc0o_640_v2.png

The third project has been initiated starting with the second semester of the University. After a short amount of time, we were tasked to develop an "Old School Game" in a new completely programming language: C++. The project will run from week 1 to week 8.

Week 1:

In the first week of the project, we agreed on a set of functionalities for our game. A list of ideas and concepts have been considered from different aged games such as “Zork”, ”Dwarf Fortress” and many other. This discussion has helped us define the theme for our game project. The main idea was represented by the simple fact that the player has to collect all the coins ("$") to complete the level.

Moreover, we took into consideration that our game must be on the console, that implies "Not necessary to have a high graphical interface"!

Week 2:

During the second week, we decided as a team to make some individual research to be able to implement the code in the most efficient way possible. This individual research has helped us to identify problems before getting there; from "drawing the map" to actual "movement of the player". On the other hand, we decided to structure our code in different functions. As a team, we understood that programming in that manner will help us to understand easier and quicker which lines of the code do what.

At the end of this week, we made a storyboard which showcases all the scenarios available.

storyboard.jpg

Week 3:

At the beginning of the third week, we were finally ready to build some code. Initially, we decided to design the Graphical Unit Interface in the most simple, usable manner to allow the user to interact with the interface with ease.

GUI's features:

Players are able to select a profile name.
Selecting option "2" allows users to see the leaderboard.
Displaying less information not to disturb the player.
Untitled.png

Our code looked something like this:

code1.png

(*All the code is available on Github)

Week4:

As soon as week four started we were expecting problems regarding displaying of the map. The problem was one constant in our program and needed to be fixed as soon as possible. We were facing a slow displaying of the map, more likely "a constant flickering of the map" which had as a result: a disturbance for our users.

Questions: How do we fix something that is not an error?(Something likely to a logical error).

Answer: At the first view of the program we were completely sure that using the system("CLS") function is not the best way possible to create a render for the game. So we had to remove it and to replace it with something more quicker and efficient. We created a new function called "Clear()".

code2.png

We also made a choice to remove the cursor from the game.

code3.png

Week 5:

The fifth week was one of the most interesting weeks that we had during this project. A lot of ideas were purposed and took into consideration. But only a few of them were implemented by now: "a timer", "an enemy" and "a score". We chose to implement these three features based on our theme. A timer and a score to make the game a little bit more competitive.An enemy was also added to make the game more challenging.

A database was built based on these three features. All players information will be stored in the database based on these three aspects.

display.png

Week 6:

The sixth week represents the debugging part of our game platform. We had to review all the code and to simulate some game tests. We did identify parts of the code that were not efficient or not suitable for our game project and he had to remove or to replace some parts of them.

Moreover, we had to implement a lot more conditions to the enemy for a correct pathfinding.

code4.png
Conditions - Enemy
(*All the code is available on Github)



Week 7:





Week 8:
