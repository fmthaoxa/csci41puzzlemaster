/*The Puzzlemasters

  This program is a text based game that follows a young adventurer through his journey
  to save the world by outwitting the Puzzlemasters. Good luck!

*/
#include <iostream>
#include <cstdlib>
#include <string>
#include "puzzle.cc"
#include "puzzle.h"
#include "score.h"
#include "congrats.h"

using namespace std;


string keep_going, follow, take_it = "";


void clearscreen();
void die();
//void help();
void start();
void room_tavern();
void prologue();
void scene_two(); //after puzzle1, introduces puzzle2
void scene_three(); //after puzzle2, introduces puzzle3
void scene_four(); //after puzzle3, introduces puzzle4
void scene_five(); //after puzzle4, introduces puzzle5
void epilogue(); //yeah, the end



int main() {
	Score score;
	start();
	score.final_time();
	final_congratulations();

}


void clearscreen() {
	cout << "\033[2J\033[1;1H";
}


void die() {
	cout << "You have abandoned the quest and, in doing so, you have" << endl;
	cout << "forgotten the face of your father.  Goodbye." << endl << endl << endl;
	exit(EXIT_FAILURE);
}

/*
   void help(){
   cout << "Help forum" << endl;
   cout << "Room Commands: " << endl;
   cout << "n - go north     s -go south" << endl;
   cout << "e - go east      w - go west" << endl;
   cout << "q - quit" << endl << endl;
   }*/

/*
//need to create mapping through rooms
int map(){
cout << "Where would you like to go? You can go N, S, E, or W" << endl;
char move = '0';
cin >> move;
if (move == 'n' or move == 'N'){
cout << "You chose to go north... " << endl;
//update location
}
else if (move == 's' or move == 'S'){
cout << "You chose to go south... " << endl;
//update location
}
else if (move == 'e' or move == 'E'){
cout << "You chose to go east... " << endl;
//update location
}
else if (move == 'w' or move == 'W'){
cout << "You chose to go west... " << endl;
//update location
}
else {
cout <<"BAD INPUT!" << endl;
die();
}
}*/

//Tutorial and opening story
void start() {
	//opening scene
	clearscreen();
	cout << "Your search for the Sword of a Dozen Truths has taken you" << endl;
	cout << "through forests, over rivers, across entire continents.  Her dying" << endl;
	cout << "wish, that you recover the sword and restore your family\'s" << endl;
	cout << "honor has brought you to the outskirts of another small" << endl;
	cout << "village, as nameless as the last few hundred.  Your expectations" << endl;
	cout << "are not high but you have no other option.  Your mother's last" << endl;
	cout << "wish drives you ever forward. As you round a bend and the" << endl;
	cout << "trees surrender the land to the village, the scene before" << endl;
	cout << "you is absolute chaos." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "As if an anthill had been stepped on, the residents have" << endl;
	cout << "abandoned their modest hovels and are running mindlessly, in" << endl;
	cout << "a state of complete panic, screaming the names of missing" << endl;
	cout << "loved ones." << endl << endl;
	cout << "As you reach the center of the village, you try to make sense" << endl;
	cout << "of the chaos.  You survey the area and notice that there is " << endl;
	cout << "one person in the village that is completely detached from" << endl;
	cout << "what is happening.  Standing in the doorway of the tavern " << endl;
	cout << "is a portly, bearded man wearing an apron.  As you make" << endl;
	cout << "eye contact, your first impression is that man knows how to" << endl;
	cout << "carry himself in a fight.  He measures you up and down, gives" << endl;
	cout << "you a quick nod, turns his back and enters the tavern." << endl << endl;
	cout << "Everyone else around you is beyond your help so, as you see it," << endl;
	cout << "you really have only two options: leave the village or follow" << endl;
	cout << "the taverner." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	room_tavern();
}

void room_tavern() {
	clearscreen();
	cout << "The taverner gives you another cursory glance. He says I knew that" << endl;
	cout << "someone would come, but I was expecting someone...bigger." << endl << endl;
	cout << "His words create a mild buzz in your head, as if you have been" << endl;
	cout << "waiting a long time to hear them.  You momentarily forget the havoc" << endl;
	cout << "beyond his door." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "He removes his apron and lays it across the bar.  When his eyes return" << endl;
	cout << "to you, they shine with a brilliant light that illuminates the immediate" << endl;
	cout << "area but, strangely, they do not hurt to look at.  His face registers" << endl;
	cout << "your surprise, but without waiting for you to respond, he begins to speak:" << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "I am known as The Weaver and I was once a Puzzlemaster until the" << endl;
	cout << "immortal Puzzlemasters lost their way and began to see human suffering" << endl;
	cout << "as a means to amuse themselves\".  He turns and spits on the floor." << endl << endl;
	cout << "Half of the population of this village vanished overnight and I suspect" << endl;
	cout << "those damned Puzzlemasters are behind it.  Together, we can defeat the" << endl;
	cout << "Puzzlemasters and bring those people home." << endl << endl;
	cout << "In the forest, beyond the village, is a path that will lead you to your" << endl;
	cout << "trials.  Keep your mind sharp." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	prologue();
}

// No battle tutorials for this project

void prologue() {
	clearscreen();
	cout << "You enter the forest looking for the path that will lead you to the first" << endl;
	cout << "Puzzlemaster. The wind picks its way through an opening in the trees." << endl;
	cout << "Directly ahead of you is a winding path that abrubtly ends at a rectangular" << endl;
	cout << "opening carved into the face of a granite wall.  You walk into the doorway" << endl;
	cout << "and into a cavernous room that extends beyond the light." << endl << endl;
	cout << "The floors and walls are gray stone block and between each block grows" << endl;
	cout << "black mildew.  The room is cold and the air is damp.  From your right," << endl;
	cout << "you can faintly hear the sound of slow dripping water but its source" << endl;
	cout << "does not concern you.  Suddenly, a silentfigure steps forward from" << endl;
	cout << "the darkness..." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "A towering figure stands before you.  Easily two feet taller, it appears" << endl;
	cout << "as a magnificent conqueror in gleaming gold and platinum armor.  It looks" << endl;
	cout << "down its aquiline nose at you and sniffs.  Although it is obviously" << endl;
	cout << "trying to intimidate you, it is plain to you that its eyes hide weakness." << endl << endl;
	cout << "Finally, it speaks...\"I am the Keeper of the Path.\"" << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "To defeat me and traverse the Path without harm, you must discover the mystery of" << endl;
	cout << "the numerical key...He changes shape before your eyes, becomes smoke, and disappears..." << endl << endl;;
	cout << "You enter the cave and begin your descent down the path..." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	if(!puzzle1()) die();
	scene_two();
}


void scene_two() {
	cout << endl << "You open the door and step into a long hallway which opens up into large dining hall." << endl;
	cout << "Broken furniture and bits of tapestry and discarded parchment lay strewn about." << endl;
	cout << "To your left, about ten meters away, is a fireplace with a roaring blaze that" << endl;
	cout << "illuminates the room with dancing light.  Someone has recently been here.  On" << endl;
	cout << "the wall to either side of the fireplace are two portraits of hideous creatures" << endl;
	cout << "mockingly dressed in human formal attire.  As you step towards the portrait" << endl;
	cout << "to get a better look, a deep staccato voice rolls to you from the other side" << endl;
	cout << "of the hall.  \"You\'re late.  I was beginning to get lonely.\"" << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "From the darkness steps forward a warrior that has obviously seen his share" << endl;
	cout << "of battle.  Unlike the previous Puzzlemaster, his armor is damaged and dull" << endl;
	cout << "and the blade of his weapon is chipped but no less dangerous than the day it" << endl;
	cout << "was forged.  His soot-stained face is stoic and he locks his eyes upon yours." << endl;
	cout << "He begins to speak..." << endl << endl;
	cout << "I am the second Puzzlemasters and I exist only to fight.  I am the embodiment" << endl;
	cout << "of war because to fight war, you must become war.  Too long have I waited" << endl;
	cout << "for a worthy adversary.  An adversary that could give me a beautiful death." << endl;
	cout << "Perhaps, on this day, you might be up to the task." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "He begins to changeshape before your eyes...and attacks." << endl << endl;;

	if(!puzzle2()) die();
	scene_three();
}

//completing puzzle2 calls scene 3
void scene_three() {
	cout << endl << "With trepidation, you sidestep from the corridor into the room.  There" << endl;
	cout << "are torches overhead along the walls that run the length of the narrow" << endl;
	cout << "chamber.  It is barely three shoulder widths wide, hardly wide enough to" << endl;
	cout << "swing a sword, but so tall and long you cannot see where it ends.  You feel" << endl;
	cout << "as though the walls may crush you at any moment and the creeping sense of" << endl;
	cout << "claustrophobia causes you to break into a sweat." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "From far ahead, you hear the sound of rushing wind approaching.  As it" << endl;
	cout << "rises toward you in a deafening crescendo, you realize that riding the" << endl;
	cout << "front of it is a grey mass moving at an impossible speed.  Just as you" << endl;
	cout << "are about to be slammed by this elemental fury, it abruptly stops right" << endl;
	cout << "in front of you and the crouching figure from the front of the gale stands" << endl;
	cout << "before you to present its challenge." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "The figure before you is nothing like the last two.  It stands hunched" << endl;
	cout << "over and seems frail, as if starving.  The smell of sickness and disease" << endl;
	cout << "hangs heavy in the air, threatening to overwhelm your senses.  It lifts its" << endl;
	cout << "head and looks into your eyes.  Its mouth remains closed but you hear words..." << endl << endl;
	cout << "I am unique among the Puzzlemasters.  I am an elemental.  I exist only" << endl;
	cout << "to sow confusion and despair.  What you see is not what I am but what I" << endl;
	cout << "bring...for where I go, failure surely follows.  You will succumb." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "The elemental shiftshapes before your eyes, becomes mist, and vanishes..." << endl << endl;

	if(!puzzle3()) die(); //puzzle 3 rewards player with a key to door in scene 4
	scene_four();
}

//completing puzzle 3 calls scene 4
void scene_four() {
	cout << endl << "Having defeated three Puzzlemasters, you reflect that that, surely, the steel-" << endl;
	cout << "banded wood door before you must have the key to the end of this trial of" << endl;
	cout << "nightmares.  You unlock the door, brace your shoulder against it, and give" << endl;
	cout << "it a hard shove.  It opens and reveals a vast winding cave, brightly lit by" << endl;
	cout << "hues of every color that seem to emanate from the ceiling.  You look up and" << endl;
	cout << "see that there are no solid walls or ceiling and your initial impression of" << endl;
	cout << "a cave was only that..an impression.  In a motley of colors, you see stars" << endl;
	cout << "and comets, galaxies forming and galaxies swallowing each other." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "From the swirling creation above you, a pinpoint of light becomes a firefly" << endl;
	cout << "and descends.  It dances in front of you for a moment before spontaneously" << endl;
	cout << "bursting into a flash of flames and falling to the ground.  In surprise" << endl;
	cout << "and fear, you step back as the smoke from the dead firefly that trails to" << endl;
	cout << "the ground begins to swirl and coalesce upward.  It expands to twice your size," << endl;
	cout << "then is pulled in until it collapses in on itself into the form of a tall woman.  You" << endl;
	cout << "try to look into her face but find ony black obsidian stars swimming and twinkling." << endl;
	cout << "A voice begins to loudly speak and, although there are no walls here that" << endl;
	cout << "you can see, it sounds as if the voice is...echoing." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "Surely, you know who I am.  The elemental already introduced me...where I go...\"" << endl << endl;
	cout << "\"Remember that?  Welcome to the place where you began, out of time and space" << endl;
	cout << "and the place to which you...and everyone else...will eventually return.\"\n" << endl;
	cout << "\"You have defeated all of the Puzzlemasters except me but you will fail my challenge.\"" << endl;
	cout << "She sighs.  \"I have no prose to entertain you with so let\'s get on with it." << endl << endl;
	cout << "In a flash of light and a furious thunderclap, the Puzzlemaster vanishes, leaving" << endl;
	cout << "you alone in the room" << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();

	if(!puzzle4()) die(); //rewards the user with another key I guess
	scene_five();
}

//completing puzzle 4 calls scene 5
void scene_five() {
	cout << endl << "You unlock the large wooden door.  Having no other way to go, you steel" << endl;
	cout << "yourself and open the large, ancient latch.  Leaving the door open behind" << endl;
	cout << "you, you slowly creep from the corridor into what appears to be a large cave" << endl;
	cout << "carved out to a hollow, rough cube.  From the far side of the cave, you hear" << endl;
	cout << "the sound of deep snoring.  The walls appear to shimmer and the floor crunches" << endl;
	cout << "underfoot like gravel as you move forward, trying to keep your footsteps as" << endl;
	cout << "light as possible to avoid waking the source of the sound." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "You step to the side to allow a little light into the room from the corridor." << endl;
	cout << "You look again at the walls and realize they are covered in large, ovoid," << endl;
	cout << "silk sacs.  A few are broken open and you notice dozens of transparent," << endl;
	cout << "fingernail-sized spiderlings are just beginning to emerge from them and descend" << endl;
	cout << "towards the floor." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "With dawning horror, you look down and realize your fear that the floor is" << endl;
	cout << "not covered in gravel at all.  Spiderlings fleeing by the millions rush toward" << endl;
	cout << "the open door, creating small tumbling hills as they scramble atop one another," << endl;
	cout << "trying to escape from the cave.  Suddenly, the snoring is replaced by silence." << endl;
	cout << "From the direction of the snoring a moment before, a voice calls out \"Leave the" << endl;
	cout << "door open for now.  They sustained me while I waited for you. Now that you are here," << endl;
	cout << "I will not be needing them.  Also, I miss the sunlight.\"\n" << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "A figure rises in the back of the cave and slowly approaches.  \"I have waited" << endl;
	cout << "an eternity for you.  You overcame every challenge.  I am impressed." << endl << endl;
	cout << "You have one final task.\"  A slight chuckle echoes through the cool cave." << endl;
	cout << "\"It might take a while for you to find the irony in this one.\"  As the figure" << endl;
	cout << "moves forward, the light spilling in from the doorway begins to illuminate it" << endl;
	cout << "from the feet to the legs, then the chest and, finally, the face.  You find" << endl;
	cout << "yourself face to face with a much cleaner, and far less battle-weary, you." << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "\"I am the oldest of the Puzzlemasters and it is my turn to leave.  You will" << endl;
	cout << "understand soon enough.  Prepare yourself...\"" << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();

	if(!puzzle5()) die();
	epilogue();

}

//completing puzzle 5 calls epilogue
void epilogue() {
	cout << endl << "The final Puzzlemaster bursts into heatless flames and erupts in laughter." << endl;
	cout << "\"Thank you for freeing me.  The Weaver has been waiting a long time and" << endl;
	cout << "has sent many candidates to test the Puzzlemasters in an attempt to free me." << endl << endl;
	cout << "...old friends, The Weaver and I.  Anyway, all have failed until you came along." << endl;
	cout << "You see, by defeating all of the Puzzlemasters, you free the oldest one and" << endl;
	cout << "assume their place.  Unfortunately, you\'re the newcomer so that puts you last" << endl;
	cout << "in line. Remember the first Puzzlemaster?  The one in the shiny armor?" << endl << endl;
	cout << "He's the one that freed The Weaver.\"" << endl << endl;
	cout << "...Enter a key to continue...";
	cin >> keep_going;
	clearscreen();
	cout << "Just before the flames finish consuming him, he whispers one last thing:" << endl;
	cout << "\n\"You might want to shut the door before all of the spiders escape..." << endl << endl;
	cout << "You are going to get hungry.\"" << endl << endl;

}


