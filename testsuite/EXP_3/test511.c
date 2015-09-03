#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x13 = INT64_MAX;
uint32_t x16 = 10374977U;
volatile int16_t x28 = -13;
volatile uint64_t t3 = 17521LLU;
static int64_t x30 = -1LL;
uint16_t x33 = 12U;
static uint16_t x35 = UINT16_MAX;
int32_t x70 = INT32_MAX;
int8_t x72 = INT8_MIN;
static volatile uint64_t t9 = 12481362395025199LLU;
static int64_t x78 = -63729010024LL;
volatile uint64_t t11 = 1900LLU;
int64_t x123 = INT64_MIN;
int64_t x130 = 138475LL;
uint64_t x132 = 19573LLU;
volatile int32_t t16 = -19756920;
int32_t x147 = -52387;
int8_t x148 = 46;
static int64_t x149 = -1LL;
int32_t x151 = INT32_MIN;
volatile uint64_t t18 = 18923LLU;
uint64_t x155 = UINT64_MAX;
int32_t x181 = INT32_MIN;
volatile int8_t x182 = 17;
volatile int32_t x183 = -4550;
int64_t x207 = INT64_MIN;
int8_t x211 = 13;
int16_t x223 = INT16_MAX;
int32_t x224 = -204;
volatile int64_t x253 = INT64_MIN;
volatile int16_t x256 = -280;
volatile int64_t t28 = 6390556176LL;
uint32_t x266 = 7U;
int8_t x273 = INT8_MIN;
static uint16_t x300 = UINT16_MAX;
int8_t x316 = -1;
uint8_t x349 = 42U;
volatile int16_t x350 = INT16_MIN;
int32_t t40 = 21;
static int8_t x364 = -6;
uint64_t t43 = 1721245085LLU;
static int32_t x437 = -1;
static int32_t x463 = INT32_MIN;
static uint64_t t50 = 20029329LLU;
uint8_t x468 = UINT8_MAX;
int16_t x492 = -1;
int32_t x499 = INT32_MIN;
int32_t x501 = -1;
volatile int32_t x502 = -1;
volatile int64_t t56 = -124163215957695LL;
int64_t t57 = 3LL;
volatile int32_t x545 = 11373292;
static int8_t x562 = -3;
int16_t x581 = -19;
int64_t x583 = INT64_MIN;
uint32_t x586 = 7873647U;
int8_t x598 = INT8_MAX;
int8_t x617 = INT8_MIN;
static int16_t x618 = -29;
int32_t x621 = INT32_MIN;
volatile uint8_t x625 = 5U;
int8_t x627 = 30;
int64_t x633 = INT64_MIN;
int8_t x637 = INT8_MAX;
volatile int16_t x639 = INT16_MIN;
static int8_t x640 = INT8_MIN;
volatile int32_t t73 = 4069;
int8_t x643 = 10;
uint64_t x646 = UINT64_MAX;
int8_t x676 = INT8_MIN;
int8_t x680 = -3;
int64_t t79 = -504131657444434LL;
int16_t x689 = 2;
int64_t x694 = -8611552640028153LL;
int64_t t81 = -4318867511432LL;
volatile int32_t x699 = INT32_MAX;
int32_t x705 = -1;
uint32_t x708 = UINT32_MAX;
uint32_t x719 = 2566U;
static uint64_t t84 = 5376610LLU;
int32_t x736 = -1;
int16_t x761 = -3508;
volatile int16_t x765 = 9;
int16_t x782 = INT16_MIN;
static int64_t x785 = -770153210932652420LL;
int8_t x786 = -1;
int32_t x787 = INT32_MIN;
static int16_t x789 = INT16_MAX;
volatile uint32_t t93 = 5U;
int16_t x805 = INT16_MIN;
int8_t x813 = -1;
static int64_t x814 = INT64_MAX;
int8_t x819 = INT8_MIN;
int64_t x826 = INT64_MAX;


void f0(void) {
	static int16_t x14 = -1;
	static int32_t x15 = INT32_MIN;
	volatile int64_t t0 = 248831179387296LL;

	t0 = ((x13+x14)/(x15/x16));

	if (t0 != 44773650664343571LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = -1;
	int16_t x18 = -10;
	int32_t x19 = -474990;
	volatile int8_t x20 = -1;
	volatile int32_t t1 = 293722;

	t1 = ((x17+x18)/(x19/x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = -1;
	int8_t x22 = 1;
	uint16_t x23 = UINT16_MAX;
	int64_t x24 = 48LL;
	int64_t t2 = -5438299LL;

	t2 = ((x21+x22)/(x23/x24));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MAX;
	static int64_t x26 = INT64_MIN;
	uint64_t x27 = UINT64_MAX;

	t3 = ((x25+x26)/(x27/x28));

	if (t3 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x29 = UINT64_MAX;
	int16_t x31 = -1;
	static volatile int16_t x32 = -1;
	volatile uint64_t t4 = 1613263502LLU;

	t4 = ((x29+x30)/(x31/x32));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x34 = 824707824LLU;
	int64_t x36 = -1LL;
	volatile uint64_t t5 = 24006124LLU;

	t5 = ((x33+x34)/(x35/x36));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x37 = UINT64_MAX;
	volatile uint8_t x38 = UINT8_MAX;
	int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MAX;
	static volatile uint64_t t6 = 751734469774479LLU;

	t6 = ((x37+x38)/(x39/x40));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x57 = UINT32_MAX;
	static volatile uint32_t x58 = UINT32_MAX;
	volatile int16_t x59 = INT16_MIN;
	int64_t x60 = -1LL;
	volatile int64_t t7 = 13295985727522LL;

	t7 = ((x57+x58)/(x59/x60));

	if (t7 != 131071LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x61 = 0U;
	volatile int16_t x62 = -1739;
	int8_t x63 = INT8_MAX;
	int32_t x64 = -1;
	volatile int32_t t8 = 44612192;

	t8 = ((x61+x62)/(x63/x64));

	if (t8 != 13) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x69 = 7LLU;
	int32_t x71 = INT32_MAX;

	t9 = ((x69+x70)/(x71/x72));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x77 = -1;
	static uint64_t x79 = 7956239239168LLU;
	uint8_t x80 = 11U;
	uint64_t t10 = 306924997827LLU;

	t10 = ((x77+x78)/(x79/x80));

	if (t10 != 25503781LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = UINT64_MAX;
	int16_t x86 = 0;
	static int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MAX;

	t11 = ((x85+x86)/(x87/x88));

	if (t11 != 71499008037633920LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x89 = UINT8_MAX;
	volatile int8_t x90 = INT8_MIN;
	int64_t x91 = 691148203LL;
	volatile int16_t x92 = INT16_MAX;
	int64_t t12 = 14LL;

	t12 = ((x89+x90)/(x91/x92));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x109 = INT32_MIN;
	static uint8_t x110 = UINT8_MAX;
	int32_t x111 = -180;
	uint8_t x112 = 4U;
	int32_t t13 = -4209;

	t13 = ((x109+x110)/(x111/x112));

	if (t13 != 47721853) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x121 = 27U;
	uint64_t x122 = 8080201128008LLU;
	volatile int32_t x124 = -13;
	static volatile uint64_t t14 = 4242921757073627LLU;

	t14 = ((x121+x122)/(x123/x124));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x129 = 3161U;
	volatile uint64_t x131 = 211326LLU;
	volatile uint64_t t15 = 1LLU;

	t15 = ((x129+x130)/(x131/x132));

	if (t15 != 14163LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x133 = 1;
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = -5;
	int8_t x136 = -1;

	t16 = ((x133+x134)/(x135/x136));

	if (t16 != 13107) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x145 = -1;
	volatile uint8_t x146 = 23U;
	volatile int32_t t17 = 97;

	t17 = ((x145+x146)/(x147/x148));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x150 = 396LLU;
	volatile uint64_t x152 = 15548337936165947LLU;

	t18 = ((x149+x150)/(x151/x152));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x153 = -1;
	int16_t x154 = -45;
	int32_t x156 = 2;
	uint64_t t19 = 1540378229400512375LLU;

	t19 = ((x153+x154)/(x155/x156));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x184 = 2;
	volatile int32_t t20 = -1642800;

	t20 = ((x181+x182)/(x183/x184));

	if (t20 != 943948) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = 0;
	int16_t x187 = INT16_MIN;
	int16_t x188 = 13;
	volatile int32_t t21 = -1;

	t21 = ((x185+x186)/(x187/x188));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x189 = -41;
	uint8_t x190 = UINT8_MAX;
	int32_t x191 = -1;
	volatile uint64_t x192 = 338927915128765878LLU;
	static volatile uint64_t t22 = 27788733351LLU;

	t22 = ((x189+x190)/(x191/x192));

	if (t22 != 3LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x193 = -1;
	volatile int32_t x194 = INT32_MAX;
	int32_t x195 = INT32_MIN;
	volatile int16_t x196 = INT16_MIN;
	int32_t t23 = 656245;

	t23 = ((x193+x194)/(x195/x196));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x205 = 0U;
	int32_t x206 = -1;
	volatile uint64_t x208 = 4209617LLU;
	volatile uint64_t t24 = 240968081795383833LLU;

	t24 = ((x205+x206)/(x207/x208));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x209 = UINT16_MAX;
	int8_t x210 = -1;
	uint8_t x212 = 7U;
	volatile int32_t t25 = 142186402;

	t25 = ((x209+x210)/(x211/x212));

	if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x221 = 2115911LL;
	volatile int64_t x222 = INT64_MIN;
	int64_t t26 = 2162395820391LL;

	t26 = ((x221+x222)/(x223/x224));

	if (t26 != 57646075230329124LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x233 = 78U;
	int8_t x234 = -1;
	int32_t x235 = INT32_MIN;
	int64_t x236 = -18601LL;
	static int64_t t27 = -2170LL;

	t27 = ((x233+x234)/(x235/x236));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x254 = INT32_MAX;
	int64_t x255 = INT64_MIN;

	t28 = ((x253+x254)/(x255/x256));

	if (t28 != -279LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x257 = UINT64_MAX;
	volatile int16_t x258 = -1;
	int64_t x259 = INT64_MIN;
	uint16_t x260 = UINT16_MAX;
	uint64_t t29 = 133267582212LLU;

	t29 = ((x257+x258)/(x259/x260));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x265 = -10;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = INT8_MIN;
	uint32_t t30 = 148942909U;

	t30 = ((x265+x266)/(x267/x268));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	int64_t x276 = -1LL;
	static int64_t t31 = -44LL;

	t31 = ((x273+x274)/(x275/x276));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x293 = INT32_MIN;
	uint32_t x294 = 19713U;
	int16_t x295 = INT16_MAX;
	static uint8_t x296 = UINT8_MAX;
	uint32_t t32 = 1208547381U;

	t32 = ((x293+x294)/(x295/x296));

	if (t32 != 16777370U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x297 = 0U;
	volatile int8_t x298 = -49;
	static int64_t x299 = INT64_MIN;
	volatile int64_t t33 = -1LL;

	t33 = ((x297+x298)/(x299/x300));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x301 = INT64_MIN;
	static volatile uint16_t x302 = 21U;
	int16_t x303 = -64;
	uint32_t x304 = 134706120U;
	static volatile int64_t t34 = 50LL;

	t34 = ((x301+x302)/(x303/x304));

	if (t34 != -297528130221121799LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 231042972540078LLU;
	int32_t x315 = -9;
	volatile uint64_t t35 = 678426992LLU;

	t35 = ((x313+x314)/(x315/x316));

	if (t35 != 25671202784047LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x325 = 3U;
	uint64_t x326 = 20758018257908LLU;
	int64_t x327 = 233603416489745251LL;
	volatile uint8_t x328 = 4U;
	uint64_t t36 = 72LLU;

	t36 = ((x325+x326)/(x327/x328));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x329 = 7802052;
	uint64_t x330 = 354558978026830LLU;
	int32_t x331 = INT32_MIN;
	static int32_t x332 = -63490952;
	volatile uint64_t t37 = 55731104LLU;

	t37 = ((x329+x330)/(x331/x332));

	if (t37 != 10744211691784LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x333 = 108580155;
	int8_t x334 = 20;
	uint64_t x335 = 17119014946748262LLU;
	static int8_t x336 = 43;
	volatile uint64_t t38 = 752877LLU;

	t38 = ((x333+x334)/(x335/x336));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x337 = 207;
	volatile uint8_t x338 = 1U;
	static volatile int16_t x339 = -6;
	uint64_t x340 = 6118674092743118LLU;
	uint64_t t39 = 22LLU;

	t39 = ((x337+x338)/(x339/x340));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x351 = INT16_MAX;
	static volatile int8_t x352 = -1;

	t40 = ((x349+x350)/(x351/x352));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x353 = 1097787;
	int8_t x354 = INT8_MAX;
	static uint64_t x355 = UINT64_MAX;
	uint16_t x356 = 354U;
	uint64_t t41 = 48841407LLU;

	t41 = ((x353+x354)/(x355/x356));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x357 = 0;
	int8_t x358 = 0;
	int64_t x359 = INT64_MIN;
	volatile uint64_t x360 = 1LLU;
	uint64_t t42 = 11097778166532LLU;

	t42 = ((x357+x358)/(x359/x360));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x361 = -3214LL;
	uint64_t x362 = 8379648967272LLU;
	volatile int64_t x363 = INT64_MIN;

	t43 = ((x361+x362)/(x363/x364));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x369 = -135754709174342397LL;
	volatile int8_t x370 = INT8_MAX;
	static volatile int64_t x371 = 613270886756LL;
	int16_t x372 = -1;
	int64_t t44 = 1LL;

	t44 = ((x369+x370)/(x371/x372));

	if (t44 != 221361LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x381 = 1767042078U;
	volatile uint32_t x382 = 2U;
	static int32_t x383 = INT32_MAX;
	int8_t x384 = INT8_MIN;
	volatile uint32_t t45 = 12558141U;

	t45 = ((x381+x382)/(x383/x384));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x393 = INT8_MIN;
	uint32_t x394 = 46U;
	int64_t x395 = INT64_MAX;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int64_t t46 = -22925LL;

	t46 = ((x393+x394)/(x395/x396));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x397 = INT64_MAX;
	static uint64_t x398 = 16360137583585LLU;
	volatile int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	volatile uint64_t t47 = 297410304021LLU;

	t47 = ((x397+x398)/(x399/x400));

	if (t47 != 32768LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x433 = -48;
	int32_t x434 = -171;
	uint64_t x435 = UINT64_MAX;
	int64_t x436 = -1800LL;
	static volatile uint64_t t48 = 16731912157800LLU;

	t48 = ((x433+x434)/(x435/x436));

	if (t48 != 18446744073709551397LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x438 = UINT64_MAX;
	volatile int16_t x439 = 37;
	static uint8_t x440 = 3U;
	static uint64_t t49 = 1403869568420937LLU;

	t49 = ((x437+x438)/(x439/x440));

	if (t49 != 1537228672809129301LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x461 = -97313670351270LL;
	uint64_t x462 = 74989705545227459LLU;
	int8_t x464 = 27;

	t50 = ((x461+x462)/(x463/x464));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x465 = -7618;
	int64_t x466 = -1LL;
	int64_t x467 = INT64_MIN;
	volatile int64_t t51 = 415339777093288191LL;

	t51 = ((x465+x466)/(x467/x468));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x469 = -1;
	uint32_t x470 = 1328U;
	int8_t x471 = -1;
	int32_t x472 = -1;
	uint32_t t52 = 1087067034U;

	t52 = ((x469+x470)/(x471/x472));

	if (t52 != 1327U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x481 = -2122870;
	int16_t x482 = 159;
	int32_t x483 = -631411;
	uint8_t x484 = 12U;
	int32_t t53 = -9175;

	t53 = ((x481+x482)/(x483/x484));

	if (t53 != 40) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x489 = UINT64_MAX;
	volatile int16_t x490 = INT16_MIN;
	int32_t x491 = -1;
	volatile uint64_t t54 = 2414171217839144LLU;

	t54 = ((x489+x490)/(x491/x492));

	if (t54 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x497 = 8113672;
	static uint32_t x498 = 1U;
	int8_t x500 = INT8_MIN;
	static uint32_t t55 = 6374U;

	t55 = ((x497+x498)/(x499/x500));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x503 = -8137540345661184LL;
	volatile uint8_t x504 = 7U;

	t56 = ((x501+x502)/(x503/x504));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x505 = INT64_MIN;
	int64_t x506 = 3LL;
	int64_t x507 = -281295841701705512LL;
	uint8_t x508 = 37U;

	t57 = ((x505+x506)/(x507/x508));

	if (t57 != 1213LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x521 = 21U;
	int16_t x522 = INT16_MAX;
	int16_t x523 = 294;
	int8_t x524 = INT8_MAX;
	volatile int32_t t58 = -615728;

	t58 = ((x521+x522)/(x523/x524));

	if (t58 != 16394) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x525 = 1U;
	int16_t x526 = -1;
	int32_t x527 = INT32_MIN;
	int64_t x528 = -125961598LL;
	volatile int64_t t59 = -4734601110204LL;

	t59 = ((x525+x526)/(x527/x528));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x541 = UINT32_MAX;
	int32_t x542 = 7;
	uint64_t x543 = UINT64_MAX;
	volatile uint64_t x544 = 11720523774093253LLU;
	uint64_t t60 = 42963955755LLU;

	t60 = ((x541+x542)/(x543/x544));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x546 = 0U;
	int64_t x547 = INT64_MIN;
	int16_t x548 = INT16_MIN;
	int64_t t61 = 28811195350706LL;

	t61 = ((x545+x546)/(x547/x548));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x561 = INT16_MIN;
	int32_t x563 = INT32_MIN;
	int32_t x564 = INT32_MIN;
	int32_t t62 = 7510388;

	t62 = ((x561+x562)/(x563/x564));

	if (t62 != -32771) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x569 = 30482667LL;
	uint16_t x570 = 8999U;
	volatile int64_t x571 = INT64_MIN;
	static volatile int64_t x572 = INT64_MIN;
	volatile int64_t t63 = 70896903LL;

	t63 = ((x569+x570)/(x571/x572));

	if (t63 != 30491666LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x582 = -1;
	int64_t x584 = INT64_MIN;
	int64_t t64 = -2312785373LL;

	t64 = ((x581+x582)/(x583/x584));

	if (t64 != -20LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x585 = 61U;
	int16_t x587 = -1;
	int8_t x588 = -1;
	volatile uint32_t t65 = 12944366U;

	t65 = ((x585+x586)/(x587/x588));

	if (t65 != 7873708U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x597 = 15187862U;
	volatile uint32_t x599 = UINT32_MAX;
	int64_t x600 = -236LL;
	int64_t t66 = -469474291271LL;

	t66 = ((x597+x598)/(x599/x600));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x605 = UINT64_MAX;
	int16_t x606 = INT16_MIN;
	uint16_t x607 = 34U;
	int16_t x608 = -1;
	uint64_t t67 = 35648037031975LLU;

	t67 = ((x605+x606)/(x607/x608));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x619 = -1388161901263482033LL;
	uint32_t x620 = 880026680U;
	volatile int64_t t68 = 15189724792LL;

	t68 = ((x617+x618)/(x619/x620));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x622 = 92U;
	static uint64_t x623 = 241649808527819LLU;
	uint32_t x624 = 86286331U;
	volatile uint64_t t69 = 1132697LLU;

	t69 = ((x621+x622)/(x623/x624));

	if (t69 != 6586812577484LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x626 = UINT64_MAX;
	int64_t x628 = -1LL;
	uint64_t t70 = 199LLU;

	t70 = ((x625+x626)/(x627/x628));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x629 = 55U;
	static int64_t x630 = INT64_MIN;
	int64_t x631 = INT64_MAX;
	uint64_t x632 = 666660815651523LLU;
	volatile uint64_t t71 = 463917655814LLU;

	t71 = ((x629+x630)/(x631/x632));

	if (t71 != 666669464174541LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x634 = UINT16_MAX;
	volatile int8_t x635 = INT8_MIN;
	static int8_t x636 = 12;
	static int64_t t72 = 5LL;

	t72 = ((x633+x634)/(x635/x636));

	if (t72 != 922337203685471027LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x638 = -1286;

	t73 = ((x637+x638)/(x639/x640));

	if (t73 != -4) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x641 = 939U;
	int64_t x642 = INT64_MIN;
	uint8_t x644 = 7U;
	static int64_t t74 = -231LL;

	t74 = ((x641+x642)/(x643/x644));

	if (t74 != -9223372036854774869LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x645 = INT8_MIN;
	int64_t x647 = INT64_MIN;
	int16_t x648 = INT16_MIN;
	static volatile uint64_t t75 = 90477126193LLU;

	t75 = ((x645+x646)/(x647/x648));

	if (t75 != 65535LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x669 = 425U;
	static volatile int32_t x670 = INT32_MIN;
	int16_t x671 = INT16_MIN;
	int64_t x672 = 55LL;
	static volatile int64_t t76 = -12191728441512504LL;

	t76 = ((x669+x670)/(x671/x672));

	if (t76 != 3609215LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x673 = 17;
	uint32_t x674 = 30U;
	int16_t x675 = INT16_MIN;
	volatile uint32_t t77 = 3503780U;

	t77 = ((x673+x674)/(x675/x676));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x677 = 1U;
	uint64_t x678 = UINT64_MAX;
	static int64_t x679 = INT64_MAX;
	uint64_t t78 = 426501716121431LLU;

	t78 = ((x677+x678)/(x679/x680));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x685 = INT32_MIN;
	int64_t x686 = -1LL;
	int16_t x687 = INT16_MIN;
	int32_t x688 = -453;

	t79 = ((x685+x686)/(x687/x688));

	if (t79 != -29826161LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x690 = -3;
	int16_t x691 = INT16_MAX;
	int8_t x692 = INT8_MIN;
	int32_t t80 = -85;

	t80 = ((x689+x690)/(x691/x692));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x693 = 331;
	int64_t x695 = INT64_MIN;
	int64_t x696 = -44241155LL;

	t81 = ((x693+x694)/(x695/x696));

	if (t81 != -41306LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x697 = 15891947LLU;
	int64_t x698 = 6LL;
	volatile int16_t x700 = INT16_MAX;
	uint64_t t82 = 2437662825686LLU;

	t82 = ((x697+x698)/(x699/x700));

	if (t82 != 242LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x706 = UINT8_MAX;
	uint64_t x707 = UINT64_MAX;
	volatile uint64_t t83 = 4039605834819476909LLU;

	t83 = ((x705+x706)/(x707/x708));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x717 = 63146U;
	uint64_t x718 = UINT64_MAX;
	int8_t x720 = 2;

	t84 = ((x717+x718)/(x719/x720));

	if (t84 != 49LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x729 = INT8_MIN;
	volatile int64_t x730 = -1LL;
	volatile int64_t x731 = 830580002606LL;
	int32_t x732 = INT32_MIN;
	volatile int64_t t85 = -5046527132293LL;

	t85 = ((x729+x730)/(x731/x732));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x733 = UINT16_MAX;
	int32_t x734 = 7;
	int8_t x735 = 28;
	int32_t t86 = 825;

	t86 = ((x733+x734)/(x735/x736));

	if (t86 != -2340) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x741 = INT32_MIN;
	static uint8_t x742 = 126U;
	static int32_t x743 = -1;
	volatile int16_t x744 = -1;
	static int32_t t87 = 31266;

	t87 = ((x741+x742)/(x743/x744));

	if (t87 != -2147483522) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x745 = INT64_MIN;
	volatile int32_t x746 = 43;
	int16_t x747 = 2664;
	int8_t x748 = INT8_MIN;
	int64_t t88 = -2840746070225447LL;

	t88 = ((x745+x746)/(x747/x748));

	if (t88 != 461168601842738788LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x762 = 3U;
	volatile uint64_t x763 = UINT64_MAX;
	uint8_t x764 = 82U;
	volatile uint64_t t89 = 440485192124531LLU;

	t89 = ((x761+x762)/(x763/x764));

	if (t89 != 81LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x766 = UINT64_MAX;
	int32_t x767 = -15831341;
	uint8_t x768 = UINT8_MAX;
	volatile uint64_t t90 = 58500259432LLU;

	t90 = ((x765+x766)/(x767/x768));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x781 = -1;
	int32_t x783 = 15979;
	static int16_t x784 = -96;
	int32_t t91 = -306592;

	t91 = ((x781+x782)/(x783/x784));

	if (t91 != 197) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x788 = INT32_MIN;
	volatile int64_t t92 = -362981258LL;

	t92 = ((x785+x786)/(x787/x788));

	if (t92 != -770153210932652421LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x790 = INT16_MIN;
	uint32_t x791 = UINT32_MAX;
	uint16_t x792 = UINT16_MAX;

	t93 = ((x789+x790)/(x791/x792));

	if (t93 != 65535U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x801 = UINT32_MAX;
	uint16_t x802 = 3U;
	int64_t x803 = INT64_MIN;
	static int8_t x804 = -54;
	static int64_t t94 = -10605LL;

	t94 = ((x801+x802)/(x803/x804));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x806 = INT16_MIN;
	int8_t x807 = INT8_MIN;
	int64_t x808 = -1LL;
	int64_t t95 = 14LL;

	t95 = ((x805+x806)/(x807/x808));

	if (t95 != -512LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x815 = INT8_MIN;
	int8_t x816 = -18;
	int64_t t96 = -2LL;

	t96 = ((x813+x814)/(x815/x816));

	if (t96 != 1317624576693539400LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x817 = INT16_MIN;
	static uint64_t x818 = UINT64_MAX;
	uint8_t x820 = 3U;
	static uint64_t t97 = 1317845343LLU;

	t97 = ((x817+x818)/(x819/x820));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x825 = UINT64_MAX;
	static uint32_t x827 = UINT32_MAX;
	int8_t x828 = -1;
	volatile uint64_t t98 = 281866336074693326LLU;

	t98 = ((x825+x826)/(x827/x828));

	if (t98 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x829 = -1;
	static int64_t x830 = -28298639009760LL;
	uint16_t x831 = 867U;
	uint32_t x832 = 336U;
	int64_t t99 = 4321774407277020763LL;

	t99 = ((x829+x830)/(x831/x832));

	if (t99 != -14149319504880LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

