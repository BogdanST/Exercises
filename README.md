Itumblr_static_6z1dtmywhjkscg4w88oggoc0o_640_v2.png

During our second semester of University, we have been tasked to develop an old school game in C++. C++ was a completely new programming language for most of us so we knew that we would find it challenging. The tight timeframe for our project pushed us to bolster our efforts accordingly to be able to meet the deadline at the end of the 8th week.

Week 1:

We agreed on a set of functionalities for our game. A list of ideas and concepts have been considered from a variety of old games such as “Zork”, ”Dwarf Fortress” and many other. This discussion has helped us define the theme for our game. Inspired by many successful indie games, we decided to have an adventurer, a player, who will have to collect coins ("$") in order to complete a level.

An extensive research was necessary to understand the implications of using C++11 to build our game. GNU GCC Compiler was used to design and work with the frontend of the game. It is important to note that by using these resources, the game will not have an advanced looking graphical interface. The focus will be purely on the concept and the way it has been translated using C++.

Week 2:

I decided to take an action to create bits of the preliminary code and identify potential ways to improve it. From the map creation to the movement of the player, everything has been taken into consideration so that we could plan ahead and recognize areas in which we might need more time/research. The code has been structurized using functions to allow us to easily debug it in the case of an error.

Closer to the end of the week, we put together a storyboard to showcase all the scenarios available.

storyboard.jpg

Week 3:

After 2 weeks of research and trial and error, we were finally ready to join the pieces of our code. During this week, we had also designed the GUI - Graphical User Interface - for our game. I chose to keep the interface as simple as possible to allow the user to interact with it with ease. Below are listed some of the GUI's features:

-->Players are given the option to select a profile name.
-->Selecting option "2" allows the users to see the scoreboard.
-->Less details to make the menu as practical as possible.
Untitled.png

At this point our code looked like this:

code1.png

(*All the code is available on Github)

Week4:

Week 4 was very frustrating for me as I had to find a fix for the map issues. The map would either be displayed very slowly or it would constantly flicker, which could only result in an unsatisfactory experience for our users. The error was related to our rendering function. Therefore, I created a new function: "Clear()"

code2.png

I have also removed the cursor from the game as I felt that it was a distraction.

code3.png

Week 5:

The fifth week was one of the most interesting weeks that we had during this project. A lot of ideas were proposed. Out of all of them, the idea to introduce a timer, an enemy and a score tracker stuck with us. A timer and a score would maintain a high level of competitiveness, while an enemy would require more focus from the player.

The database was built with these new additions in mind. All player information would be stored based on these three.

display.png

Week 6:

For most days of week 6, we have focused on debugging the game. We had to review all the code and to simulate some game tests. We did identify parts of the code that were not efficient or not suitable for our game project and he had to remove or to replace some parts of them.

Also, we implemented a few more conditions for the enemy to allow for a better pathfinding.

code4.png
Conditions - Enemy
(*All the code is available on Github)



Week 7:





Week 8:
