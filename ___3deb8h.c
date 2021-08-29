#include "drally.h"

typedef char char70[70];

	extern byte ___1a116ch[];
	extern byte ___1a1f4eh[];
	extern __BYTE__ ___1a202fh[0x13];
	extern __BYTE__ ___1a2148h;

static const char70 ___195494h[19][4] = {
	[0] = {
		[0] = "This is it. Here. Now. In Death Rally, where life is short and hot,",
		[1] = "fast and deadly. The race is on. Watch the road. Hear the",
		[2] = "rumble. Wanna play it sweet or play it dirty, by the rules or",
		[3] = "fry the rules, there's only one way to do it, play to win."
	},
	[1] = {
		[0] = "Ride your machine, your motor-war-chariot. Go for that Grail.",
		[1] = "Only one can be the king of the race, the fastest man on the",
		[2] = "track, the number one. And there are plenty of takers. Gas is",
		[3] = "the only pedal. Floor it. You have been warned."
	},
	[2] = {
		[0] = "Perk up. This is a free newsflash. I am True Tom Rhymer, and I",
		[1] = "know the road. I got petrol in my veins, I got wind in my engine-",
		[2] = "oiled hair. I've been where you are now, hotshot, thunderboy,",
		[3] = "youngblood. I've been farther down the road than you'll ever get."
	},
	[3] = {
		[0] = "Listen. This is True Tom talking. I speak to you through the",
		[1] = "mystic ring-shapes of your wheels. A genie in a bottle, I sing",
		[2] = "to you from that beer bottle, half drank, on the side of the",
		[3] = "road. Smell my sweat in the reek and excitement of petrol pumps."
	},
	[4] = {
		[0] = "Listen. This is True Tom talking. Hear me groan mantras and",
		[1] = "mysteries over the roar and rumble of boastful motor monsters.",
		[2] = "I am the man in the machine, the guru of cars, the rocket petrol",
		[3] = "daddy. I know that twisted road. Listen close. I tell no lies."
	},
	[5] = {
		[0] = "Are you ready for the ride, magical and mysterious? A long long",
		[1] = "way down the yellow brick road? Through zillions miles of",
		[2] = "blitzkrieg battle, prolonged and blazing? Trailblaze through the",
		[3] = "multitude of unknown uphill struggles the road sends your way."
	},
	[6] = {
		[0] = "That junk of yours is no juggernaut, she won't hold, she won't",
		[1] = "take you all the way, half the way. You need to gear up, to",
		[2] = "upgrade, make headlong headway, strive to stride, stride to strive,",
		[3] = "evolve, improve, better, best. Buy and be one shining perfection."
	},
	[7] = {
		[0] = "Ride that whirlwind. Put some heavy-metal to the pedal, put that",
		[1] = "hammer down, and aim your nose towards that myth-shrouded final",
		[2] = "challenge. The Adversary awaits. Here you come now, there's no",
		[3] = "turning back now. True Tom can see you coming. I tell no lies."
	},
	[8] = {
		[0] = "This is how it goes. You are driving. You are saying, 'Hang on",
		[1] = "baby, this is what I do.' It's doable, all right? Winnable. And the",
		[2] = "bullets take the sky, like clouds of locusts. The end is nigh.",
		[3] = "Race over, get it? Budda budda budda. You have been warned."
	},
	[9] = {
		[0] = "This is how it goes. All you can see from the rear mirror is",
		[1] = "rocket fume, and you know there isn't that much smoke in the",
		[2] = "whole burning hell. And your engine, it screams and moans like a",
		[3] = "banshee. Death is coming, death is coming, that's what it's saying."
	},
	[10] = {
		[0] = "This is how it goes. Your heart pumps that winning beat. This is",
		[1] = "race time, real time. And your brakes are gone. Don't miss them,",
		[2] = "don't care. Gas is the only pedal. Floor it; did long time ago.",
		[3] = "See the lap of honor, bullets turned into confetti. Win, win, win!"
	},
	[11] = {
		[0] = "Through the hot rod road-hell purgatory, where motor souls",
		[1] = "scream and way-tired wheels burn. To the final challenge.",
		[2] = "There awaits the demon king of the race. The flame-crowned demon",
		[3] = "king. The Adversary. Fear him. Listen to True Tom. I tell no lies."
	},
	[12] = {
		[0] = "Listen. This is True Tom talking. Once, I tried to prove my gas-",
		[1] = "pedal mettle in a race against the Adversary. I lost. Only once did",
		[2] = "I hear him speak. It was when he raised his fire-crowned head, and",
		[3] = "said, 'Racer boy, now I'm going to mow you dead.'"
	},
	[13] = {
		[0] = "Listen. This is True Tom Talking. Yes, I speak to you now from my",
		[1] = "car-coffin grave. It was the Adversary that put me here, the",
		[2] = "demon king of the race. You would do well to fear him. I tell no",
		[3] = "lies. I know, True Tom does. Listen, and listen close. Fear him."
	},
	[14] = {
		[0] = "Body and soul; yin and yang. You, my roadward apprentice, are the",
		[1] = "soul in this exponentially accelerating equation. Your vehicle is",
		[2] = "the body. Can you feel the precious equilibrium slipping and tail-",
		[3] = "sliding from your control? Don't lose it now, stay tuned: race time!"
	},
	[15] = {
		[0] = "Those other wannabe victory hounds are just taillights blazing",
		[1] = "away in the far horizon. Gone daddy gone! Not enough juice, not",
		[2] = "enough potential power in your engine box. True Tom too, has been",
		[3] = "in the same fix you are now, oh yeah. Shoot 'em down."
	},
	[16] = {
		[0] = "You wanna know if it's safe. Listen to True Tom, this is the score.",
		[1] = "Things can get out of hand real speedy like. I'm talking 'bout the",
		[2] = "world lighting up shining blast white and then nothing, I'm talking",
		[3] = "'bout going out in a blaze of glory. You have been warned."
	},
	[17] = {
		[0] = "So jealousy burns you like a diesel engine inside, you want that",
		[1] = "road all to yourself? The black cat of bad luck haunts you? Jinx",
		[2] = "those rival wheels so they'll reap only burning engine death, and",
		[3] = "the road is all yours. But beware, the road can be a fickle lover."
	},
	[18] = {
		[0] = "So my baby walked when I bought me a new set of wheels instead",
		[1] = "of a wedding ring. Any regrets? For a while there, but now all",
		[2] = "bitter regrets are in the past, blurred sweet streetlights speeding",
		[3] = "past, fast. The rush, the high, Death Rally! Drive it. Love it."
	}
};

int rand_watcom106(void);

void ___3deb8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[4];


	ebp = 0;
	while(1){

		ecx = ___1a116ch;
		ebx = ___1a116ch+0x96;
		edx = 0;

		while(1){

			strcpy(ecx, ebx);
			B(edx+___1a1f4eh) = B(edx+___1a1f4eh+1);
			ecx += 0x96;
			ebx += 0x96;
			edx++;
			if((int)edx >= 0x15) break;
		}

		ebp++;
		if((int)ebp >= 6) break;
	}

	while(1){

		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, 0x13);
		if(B(edx+___1a202fh) != 1) break;
	}

	B(edx+___1a202fh) = 1;
	strcpy(___1a116ch+0x9f6, ___195494h[edx][0]);
	B(___1a1f4eh+0x11) = 1;
	strcpy(___1a116ch+0xa8c, ___195494h[edx][1]);
	B(___1a1f4eh+0x12) = 1;
	strcpy(___1a116ch+0xb22, ___195494h[edx][2]);
	B(___1a1f4eh+0x13) = 1;
	strcpy(___1a116ch+0xbb8, ___195494h[edx][3]);
	B(___1a1f4eh+0x14) = 1;
	___1a2148h++;

	if(___1a2148h > 0x12){

		memset(___1a202fh, 0, 0x13);
		___1a2148h = 0;
	}
}
