
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MAX;
int32_t x3 = 1244535;
int32_t t1 = 61270910;
int32_t x13 = INT32_MIN;
static volatile int8_t x17 = 3;
volatile uint8_t x21 = 60U;
volatile int32_t t5 = -214451191;
uint32_t x26 = 0U;
static int32_t x32 = -1;
uint8_t x37 = 7U;
int64_t x41 = INT64_MIN;
uint8_t x42 = UINT8_MAX;
uint64_t x63 = 991470991LLU;
static volatile int32_t t15 = 41175283;
int64_t x74 = -5766511956LL;
int32_t t18 = -608;
static int32_t x83 = -465914;
uint16_t x86 = 335U;
int64_t x107 = -1LL;
static uint64_t x120 = 33342237677923LLU;
volatile int16_t x121 = INT16_MIN;
static int64_t x131 = -3LL;
uint64_t t33 = 7208407942963440LLU;
int16_t x137 = -3;
uint8_t x140 = 80U;
int64_t x145 = -672318LL;
uint8_t x149 = 59U;
static volatile int32_t t39 = -18972;
uint32_t x164 = 10968649U;
static uint8_t x167 = 34U;
volatile int16_t x169 = INT16_MAX;
int32_t t42 = 237;
uint64_t x183 = 164955LLU;
volatile uint64_t x191 = 2096074486301754LLU;
static int16_t x194 = -1;
uint8_t x196 = 0U;
uint16_t x200 = 60U;
int16_t x202 = -968;
static int32_t x204 = -41;
static int8_t x206 = INT8_MAX;
int32_t t51 = -23548410;
volatile uint32_t x209 = 259430989U;
volatile int8_t x213 = INT8_MIN;
static volatile uint16_t x215 = UINT16_MAX;
int64_t x224 = -1LL;
volatile int64_t t55 = 1LL;
volatile uint64_t x228 = 412348790LLU;
volatile int16_t x233 = INT16_MAX;
int64_t x238 = INT64_MAX;
int32_t t59 = -6107;
uint16_t x244 = 4901U;
uint8_t x246 = UINT8_MAX;
static uint64_t x250 = 1153687202LLU;
volatile int8_t x251 = -1;
uint16_t x252 = 25U;
volatile int8_t x257 = INT8_MIN;
int16_t x262 = INT16_MIN;
static int64_t x263 = 110770518439644047LL;
static int32_t x265 = 5408640;
static int64_t x275 = INT64_MIN;
int16_t x278 = INT16_MAX;
static uint64_t x279 = UINT64_MAX;
int32_t t69 = -158477;
int32_t t70 = -24534;
volatile uint32_t x291 = 58955U;
volatile uint16_t x292 = UINT16_MAX;
int32_t t72 = -3;
static int16_t x297 = -1;
volatile int32_t t74 = 368;
int64_t x304 = -345378942142453LL;
volatile int64_t t75 = -2059457961573390LL;
volatile int32_t t76 = -828613607;
uint16_t x316 = 24493U;
volatile int8_t x317 = INT8_MAX;
int32_t x320 = 75055697;
int64_t x323 = INT64_MIN;
int32_t x330 = INT32_MIN;
static int32_t x332 = -252;
int16_t x333 = INT16_MIN;
uint16_t x337 = 151U;
int32_t x346 = 66356722;
int32_t x350 = -1;
int32_t x351 = -1;
uint16_t x352 = 21U;
volatile int32_t t87 = 3168;
int64_t x353 = 100046984966LL;
uint32_t x369 = UINT32_MAX;
int64_t x373 = INT64_MIN;
int16_t x376 = -1;
uint32_t x407 = 133212128U;
uint64_t t101 = 961518LLU;
uint32_t t102 = 0U;
volatile int32_t t103 = 1;
uint16_t x418 = 2U;
volatile int32_t t104 = 8674;
static int8_t x427 = -58;
static int16_t x432 = -6327;
int32_t x433 = INT32_MAX;
static uint32_t x434 = 14748U;
int32_t x436 = 10;
uint64_t x439 = 0LLU;
uint64_t x440 = 262219129LLU;
static int8_t x441 = 3;
int32_t t112 = -14531;
volatile int16_t x453 = -1;
int32_t x454 = 1372611;
static volatile int8_t x456 = -21;
int32_t t113 = 4075;
uint16_t x458 = 14U;
int32_t x467 = INT32_MIN;
volatile int64_t x468 = 1205883658714973135LL;
volatile int64_t t116 = 180LL;
int8_t x469 = INT8_MIN;
int64_t x476 = 235120849LL;
uint32_t x479 = 3535U;
int16_t x482 = 1696;
static int8_t x483 = INT8_MAX;
uint8_t x486 = 36U;
static uint32_t t121 = 269117U;
int64_t x492 = INT64_MIN;
static int64_t t122 = -33393016900LL;
volatile int16_t x494 = -1;
int64_t t123 = 3755127LL;
volatile int32_t t124 = 49;
int64_t x505 = INT64_MIN;
static uint16_t x507 = UINT16_MAX;
volatile int32_t x510 = INT32_MIN;
volatile int32_t x512 = INT32_MIN;
volatile int32_t t127 = 104229085;
uint8_t x523 = 106U;
int64_t t130 = 309848233905631139LL;
static volatile int32_t t132 = 185618719;
int64_t x539 = INT64_MAX;
int16_t x542 = INT16_MIN;
static int16_t x544 = -56;
volatile int32_t t136 = 778320017;
static int64_t x549 = 53938222816854862LL;
int8_t x555 = INT8_MAX;
volatile int8_t x559 = -4;
int64_t x561 = INT64_MIN;
int16_t x564 = -1;
volatile int32_t t140 = 24;
int32_t t142 = -1457;
static volatile int64_t x581 = -1LL;
volatile int32_t x591 = INT32_MIN;
int32_t x593 = INT32_MAX;
uint8_t x595 = UINT8_MAX;
int64_t x600 = INT64_MIN;
static int16_t x601 = 1;
int32_t t152 = 26114;
static volatile int16_t x614 = INT16_MIN;
uint32_t x616 = UINT32_MAX;
uint32_t x617 = 276743U;
uint64_t x618 = UINT64_MAX;
uint32_t x621 = 112722924U;
volatile uint8_t x623 = UINT8_MAX;
int64_t x626 = INT64_MIN;
int16_t x631 = INT16_MIN;
volatile int8_t x635 = -1;
int64_t x662 = -1LL;
volatile int64_t t166 = -3294455113486311LL;
volatile int64_t x671 = 1825307308LL;
int32_t t168 = -28;
static int16_t x680 = 2052;
volatile int32_t t170 = -228600123;
int32_t x690 = INT32_MIN;
static volatile int64_t x694 = INT64_MIN;
int64_t x695 = -285826533252602774LL;
static volatile int8_t x696 = -15;
int8_t x701 = -1;
int32_t x703 = -1;
static int32_t x706 = INT32_MAX;
int8_t x712 = -3;
uint8_t x721 = 125U;
int8_t x723 = 1;
volatile int32_t t181 = -298736;
volatile int32_t t182 = -504793;
uint16_t x744 = 54U;
int16_t x745 = INT16_MIN;
volatile uint32_t t186 = 1036188728U;
volatile int32_t x749 = -1;
int16_t x753 = -2955;
int16_t x756 = INT16_MIN;
int16_t x763 = -1;
volatile int32_t x764 = 18;
int32_t x766 = -137336835;
int8_t x768 = INT8_MIN;
volatile uint32_t x770 = UINT32_MAX;
uint32_t x772 = 1410U;
static int32_t t193 = -433716;
int8_t x779 = 1;
int8_t x782 = 40;
int32_t t195 = -12;
uint16_t x795 = 22U;
volatile uint64_t x800 = UINT64_MAX;
volatile uint64_t t199 = 1854216341246716586LLU;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	static int8_t x4 = INT8_MAX;
	int32_t t0 = -22008;

    t0 = ((x1==(x2|x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = INT16_MAX;
	volatile int8_t x8 = -27;

    t1 = ((x5==(x6|x7))&x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int16_t x10 = INT16_MIN;
	int32_t x11 = -27;
	volatile int64_t x12 = INT64_MIN;
	static volatile int64_t t2 = -63LL;

    t2 = ((x9==(x10|x11))&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x14 = INT16_MAX;
	uint16_t x15 = UINT16_MAX;
	static uint32_t x16 = 4146477U;
	volatile uint32_t t3 = 717564950U;

    t3 = ((x13==(x14|x15))&x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x18 = INT8_MIN;
	static int16_t x19 = INT16_MIN;
	int32_t x20 = 15022;
	static int32_t t4 = 385;

    t4 = ((x17==(x18|x19))&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x22 = 2405U;
	uint8_t x23 = 1U;
	uint16_t x24 = 7U;

    t5 = ((x21==(x22|x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	uint32_t x27 = UINT32_MAX;
	uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 5407894548144707LLU;

    t6 = ((x25==(x26|x27))&x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -626793453;
	static int32_t x30 = -1;
	static int8_t x31 = INT8_MIN;
	volatile int32_t t7 = -2;

    t7 = ((x29==(x30|x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 3U;
	int32_t x34 = INT32_MAX;
	uint16_t x35 = 0U;
	volatile int16_t x36 = INT16_MAX;
	int32_t t8 = 37903885;

    t8 = ((x33==(x34|x35))&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x38 = UINT32_MAX;
	int16_t x39 = -1;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 115983LLU;

    t9 = ((x37==(x38|x39))&x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x43 = 26665U;
	int32_t x44 = INT32_MAX;
	int32_t t10 = -6922618;

    t10 = ((x41==(x42|x43))&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x45 = INT32_MAX;
	uint8_t x46 = 36U;
	int64_t x47 = -1LL;
	volatile uint8_t x48 = 7U;
	volatile int32_t t11 = -78;

    t11 = ((x45==(x46|x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	volatile uint16_t x50 = 5U;
	static volatile int64_t x51 = INT64_MIN;
	uint16_t x52 = 27483U;
	volatile int32_t t12 = -12307;

    t12 = ((x49==(x50|x51))&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	uint32_t x54 = 1570895U;
	static volatile int64_t x55 = INT64_MIN;
	uint64_t x56 = 132LLU;
	uint64_t t13 = 1231651648205635LLU;

    t13 = ((x53==(x54|x55))&x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	uint16_t x58 = 41U;
	static volatile int8_t x59 = INT8_MAX;
	volatile uint16_t x60 = 25498U;
	static int32_t t14 = 718;

    t14 = ((x57==(x58|x59))&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	uint64_t x62 = 388953705662317LLU;
	int16_t x64 = INT16_MAX;

    t15 = ((x61==(x62|x63))&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	int64_t x66 = INT64_MAX;
	uint64_t x67 = 1600483807095720403LLU;
	volatile int32_t x68 = -1;
	volatile int32_t t16 = -343379507;

    t16 = ((x65==(x66|x67))&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 548647236070LL;
	uint8_t x70 = 5U;
	static uint16_t x71 = UINT16_MAX;
	static int16_t x72 = 3;
	int32_t t17 = -507;

    t17 = ((x69==(x70|x71))&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 11;
	int32_t x75 = INT32_MIN;
	int16_t x76 = -181;

    t18 = ((x73==(x74|x75))&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = -1LL;
	static int8_t x78 = INT8_MIN;
	volatile uint8_t x79 = 72U;
	uint8_t x80 = 0U;
	int32_t t19 = -68877;

    t19 = ((x77==(x78|x79))&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 23126584U;
	static uint32_t x82 = UINT32_MAX;
	static uint64_t x84 = 3908859832LLU;
	static uint64_t t20 = 2804332725719981572LLU;

    t20 = ((x81==(x82|x83))&x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 250688976U;
	volatile int32_t x87 = INT32_MAX;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -24;

    t21 = ((x85==(x86|x87))&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = INT32_MIN;
	static volatile uint8_t x90 = UINT8_MAX;
	int64_t x91 = -1LL;
	static uint32_t x92 = 0U;
	volatile uint32_t t22 = 273U;

    t22 = ((x89==(x90|x91))&x92);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 2U;
	uint8_t x94 = 1U;
	static uint8_t x95 = 10U;
	static int32_t x96 = 5083;
	int32_t t23 = -714971323;

    t23 = ((x93==(x94|x95))&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MAX;
	uint8_t x98 = 2U;
	volatile uint8_t x99 = 2U;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -99;

    t24 = ((x97==(x98|x99))&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MAX;
	int16_t x102 = INT16_MIN;
	int32_t x103 = 31976;
	int64_t x104 = 853149671328LL;
	volatile int64_t t25 = 0LL;

    t25 = ((x101==(x102|x103))&x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -829257;
	int16_t x106 = INT16_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t26 = 1767457LLU;

    t26 = ((x105==(x106|x107))&x108);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 1358189LL;
	int8_t x110 = INT8_MAX;
	uint16_t x111 = 8U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 4357;

    t27 = ((x109==(x110|x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = UINT8_MAX;
	int8_t x114 = 1;
	static uint32_t x115 = 16144349U;
	static int32_t x116 = INT32_MAX;
	int32_t t28 = -111447;

    t28 = ((x113==(x114|x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int32_t x118 = INT32_MAX;
	int64_t x119 = INT64_MAX;
	volatile uint64_t t29 = 352457LLU;

    t29 = ((x117==(x118|x119))&x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x122 = 28U;
	volatile uint64_t x123 = 480742237024298063LLU;
	int16_t x124 = 250;
	volatile int32_t t30 = -20;

    t30 = ((x121==(x122|x123))&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	int16_t x126 = INT16_MIN;
	int8_t x127 = -1;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t31 = -4862388;

    t31 = ((x125==(x126|x127))&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x129 = 1U;
	uint32_t x130 = 26318U;
	static int64_t x132 = -14148486783108087LL;
	int64_t t32 = 40177628LL;

    t32 = ((x129==(x130|x131))&x132);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MAX;
	uint32_t x134 = 5448454U;
	static int8_t x135 = INT8_MIN;
	uint64_t x136 = 26848656051021224LLU;

    t33 = ((x133==(x134|x135))&x136);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x138 = 12U;
	static int8_t x139 = 9;
	static int32_t t34 = 13432219;

    t34 = ((x137==(x138|x139))&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = INT16_MAX;
	volatile uint32_t x142 = UINT32_MAX;
	volatile int8_t x143 = -1;
	int64_t x144 = -10221306786LL;
	volatile int64_t t35 = -751211834419345LL;

    t35 = ((x141==(x142|x143))&x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MIN;
	int32_t t36 = 94;

    t36 = ((x145==(x146|x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x150 = INT8_MIN;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = 34542LLU;
	volatile uint64_t t37 = 2502176LLU;

    t37 = ((x149==(x150|x151))&x152);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int32_t x154 = -1;
	volatile int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	int64_t t38 = -1LL;

    t38 = ((x153==(x154|x155))&x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = -52;
	int8_t x158 = -1;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MAX;

    t39 = ((x157==(x158|x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint16_t x161 = UINT16_MAX;
	volatile uint64_t x162 = 4LLU;
	uint32_t x163 = UINT32_MAX;
	volatile uint32_t t40 = 89U;

    t40 = ((x161==(x162|x163))&x164);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	int64_t x166 = -3560906LL;
	static int16_t x168 = -1;
	int32_t t41 = 40980;

    t41 = ((x165==(x166|x167))&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x170 = UINT64_MAX;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MAX;

    t42 = ((x169==(x170|x171))&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	volatile uint8_t x174 = 29U;
	int16_t x175 = -2;
	static int32_t x176 = INT32_MIN;
	static int32_t t43 = -16228;

    t43 = ((x173==(x174|x175))&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = -1;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = INT64_MIN;
	static int64_t x180 = INT64_MIN;
	int64_t t44 = 11546958208LL;

    t44 = ((x177==(x178|x179))&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = INT16_MIN;
	static uint16_t x182 = UINT16_MAX;
	uint8_t x184 = 101U;
	int32_t t45 = -30309;

    t45 = ((x181==(x182|x183))&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x185 = 12037U;
	uint32_t x186 = 2516U;
	volatile int8_t x187 = INT8_MAX;
	volatile uint64_t x188 = UINT64_MAX;
	volatile uint64_t t46 = 716051803LLU;

    t46 = ((x185==(x186|x187))&x188);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	uint64_t x190 = 1497LLU;
	int64_t x192 = 1625LL;
	int64_t t47 = 1936972677511877LL;

    t47 = ((x189==(x190|x191))&x192);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	static int32_t t48 = 46887878;

    t48 = ((x193==(x194|x195))&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 31797783U;
	volatile uint32_t x198 = UINT32_MAX;
	uint32_t x199 = 491060U;
	volatile int32_t t49 = -15128;

    t49 = ((x197==(x198|x199))&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x201 = 6693U;
	int16_t x203 = INT16_MIN;
	static int32_t t50 = 8;

    t50 = ((x201==(x202|x203))&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	uint64_t x207 = 276553642390126LLU;
	int8_t x208 = INT8_MIN;

    t51 = ((x205==(x206|x207))&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = -1LL;
	static int64_t x211 = -1LL;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -36679;

    t52 = ((x209==(x210|x211))&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = -3;
	int64_t x216 = INT64_MIN;
	volatile int64_t t53 = 1383238161947898LL;

    t53 = ((x213==(x214|x215))&x216);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 54711634;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -1LL;
	volatile int64_t t54 = -3585521LL;

    t54 = ((x217==(x218|x219))&x220);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	int16_t x222 = 378;
	int16_t x223 = 1816;

    t55 = ((x221==(x222|x223))&x224);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	uint32_t x226 = UINT32_MAX;
	uint64_t x227 = 525390LLU;
	volatile uint64_t t56 = 32881225845LLU;

    t56 = ((x225==(x226|x227))&x228);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MAX;
	int8_t x230 = 1;
	int16_t x231 = -1;
	uint64_t x232 = 44806LLU;
	uint64_t t57 = 778LLU;

    t57 = ((x229==(x230|x231))&x232);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x234 = 625U;
	static int64_t x235 = -1LL;
	int8_t x236 = 1;
	int32_t t58 = 27046;

    t58 = ((x233==(x234|x235))&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x237 = 10208LLU;
	int16_t x239 = INT16_MIN;
	int8_t x240 = -1;

    t59 = ((x237==(x238|x239))&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MAX;
	int8_t x242 = -1;
	uint64_t x243 = 847231LLU;
	int32_t t60 = 95791;

    t60 = ((x241==(x242|x243))&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MAX;
	int8_t x247 = INT8_MAX;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 233376;

    t61 = ((x245==(x246|x247))&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = INT16_MAX;
	static int32_t t62 = -2;

    t62 = ((x249==(x250|x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = INT64_MAX;
	static int8_t x254 = -2;
	volatile int64_t x255 = -1LL;
	int32_t x256 = -1;
	static int32_t t63 = -232;

    t63 = ((x253==(x254|x255))&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x258 = UINT8_MAX;
	volatile uint64_t x259 = UINT64_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 60711;

    t64 = ((x257==(x258|x259))&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	int16_t x264 = -1;
	volatile int32_t t65 = -81818;

    t65 = ((x261==(x262|x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x266 = -1LL;
	static int32_t x267 = INT32_MIN;
	uint8_t x268 = 2U;
	static volatile int32_t t66 = 28604;

    t66 = ((x265==(x266|x267))&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = INT8_MIN;
	uint8_t x270 = UINT8_MAX;
	int16_t x271 = INT16_MIN;
	static uint8_t x272 = UINT8_MAX;
	volatile int32_t t67 = 698716;

    t67 = ((x269==(x270|x271))&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MAX;
	int8_t x276 = -1;
	int32_t t68 = -13;

    t68 = ((x273==(x274|x275))&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	static int8_t x280 = 7;

    t69 = ((x277==(x278|x279))&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = 15175547735LL;
	int64_t x282 = INT64_MIN;
	int32_t x283 = 26760405;
	volatile int16_t x284 = INT16_MIN;

    t70 = ((x281==(x282|x283))&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x285 = UINT8_MAX;
	volatile uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MAX;
	uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t71 = 0LLU;

    t71 = ((x285==(x286|x287))&x288);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 392111LL;
	uint64_t x290 = 200746514LLU;

    t72 = ((x289==(x290|x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x293 = INT32_MIN;
	int8_t x294 = -13;
	uint8_t x295 = 57U;
	volatile int64_t x296 = 722440681LL;
	volatile int64_t t73 = -47888380321LL;

    t73 = ((x293==(x294|x295))&x296);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x298 = INT64_MIN;
	static int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MIN;

    t74 = ((x297==(x298|x299))&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	volatile int16_t x302 = INT16_MIN;
	uint16_t x303 = 189U;

    t75 = ((x301==(x302|x303))&x304);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	static int16_t x306 = -31;
	static int64_t x307 = 5673530960LL;
	int32_t x308 = INT32_MAX;

    t76 = ((x305==(x306|x307))&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 501U;
	int16_t x310 = 3528;
	volatile int64_t x311 = INT64_MAX;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = -17887;

    t77 = ((x309==(x310|x311))&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MIN;
	int32_t x315 = -3642790;
	int32_t t78 = 10;

    t78 = ((x313==(x314|x315))&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x318 = 441989U;
	uint64_t x319 = UINT64_MAX;
	int32_t t79 = 26410531;

    t79 = ((x317==(x318|x319))&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x321 = 5LLU;
	int8_t x322 = -1;
	int64_t x324 = INT64_MIN;
	int64_t t80 = -911699LL;

    t80 = ((x321==(x322|x323))&x324);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = UINT64_MAX;
	int16_t x326 = -1;
	int64_t x327 = 20LL;
	int8_t x328 = INT8_MIN;
	int32_t t81 = -1485400;

    t81 = ((x325==(x326|x327))&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = -1;
	static int16_t x331 = INT16_MIN;
	static int32_t t82 = -1;

    t82 = ((x329==(x330|x331))&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x334 = 100207997LLU;
	int8_t x335 = 0;
	volatile int16_t x336 = 1241;
	int32_t t83 = -7735826;

    t83 = ((x333==(x334|x335))&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x338 = INT64_MIN;
	int64_t x339 = -499878985146426LL;
	int32_t x340 = 18;
	int32_t t84 = -3947728;

    t84 = ((x337==(x338|x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	uint16_t x342 = 2315U;
	int8_t x343 = -1;
	uint32_t x344 = 3492U;
	static uint32_t t85 = 319843268U;

    t85 = ((x341==(x342|x343))&x344);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x345 = 474;
	int32_t x347 = -1;
	uint8_t x348 = 4U;
	int32_t t86 = 0;

    t86 = ((x345==(x346|x347))&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -551;

    t87 = ((x349==(x350|x351))&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x354 = UINT8_MAX;
	int32_t x355 = -1288;
	uint64_t x356 = 1LLU;
	uint64_t t88 = 612260496657LLU;

    t88 = ((x353==(x354|x355))&x356);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	uint32_t x358 = 54740468U;
	int16_t x359 = INT16_MIN;
	volatile uint32_t x360 = 222729987U;
	static volatile uint32_t t89 = 0U;

    t89 = ((x357==(x358|x359))&x360);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = INT32_MIN;
	static int16_t x362 = -1581;
	int8_t x363 = 54;
	int8_t x364 = 0;
	volatile int32_t t90 = 10579;

    t90 = ((x361==(x362|x363))&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -1;
	static int32_t x366 = INT32_MIN;
	int64_t x367 = -5LL;
	uint64_t x368 = 363207102936303456LLU;
	static volatile uint64_t t91 = 124LLU;

    t91 = ((x365==(x366|x367))&x368);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x370 = 275U;
	int8_t x371 = INT8_MIN;
	volatile int64_t x372 = INT64_MIN;
	volatile int64_t t92 = -1020117LL;

    t92 = ((x369==(x370|x371))&x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x374 = INT16_MAX;
	uint32_t x375 = UINT32_MAX;
	volatile int32_t t93 = 212483358;

    t93 = ((x373==(x374|x375))&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = 12;
	int32_t x378 = INT32_MIN;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MIN;
	volatile int64_t t94 = 5158837998811LL;

    t94 = ((x377==(x378|x379))&x380);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x381 = 95331804017522122LLU;
	volatile int16_t x382 = INT16_MAX;
	static uint32_t x383 = 5793710U;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -1;

    t95 = ((x381==(x382|x383))&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	static int32_t x386 = 3;
	uint16_t x387 = 24U;
	uint16_t x388 = 26U;
	volatile int32_t t96 = 60;

    t96 = ((x385==(x386|x387))&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 351266238650197LLU;
	uint32_t x390 = UINT32_MAX;
	int16_t x391 = 3;
	static int32_t x392 = -1;
	volatile int32_t t97 = -6;

    t97 = ((x389==(x390|x391))&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = INT32_MIN;
	volatile uint8_t x394 = 10U;
	int32_t x395 = -1;
	int8_t x396 = -1;
	int32_t t98 = -986301;

    t98 = ((x393==(x394|x395))&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	uint8_t x398 = 25U;
	static volatile uint8_t x399 = 69U;
	uint16_t x400 = UINT16_MAX;
	int32_t t99 = 1;

    t99 = ((x397==(x398|x399))&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -45;
	int16_t x402 = -9433;
	int8_t x403 = INT8_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t100 = -1009;

    t100 = ((x401==(x402|x403))&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1537;
	static int64_t x406 = 42690223747770548LL;
	static uint64_t x408 = 10049LLU;

    t101 = ((x405==(x406|x407))&x408);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 2;
	int64_t x410 = -1LL;
	static int16_t x411 = -884;
	uint32_t x412 = 408428U;

    t102 = ((x409==(x410|x411))&x412);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x413 = 93;
	static int8_t x414 = INT8_MIN;
	volatile uint32_t x415 = 59630306U;
	int32_t x416 = -1;

    t103 = ((x413==(x414|x415))&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 337188U;
	static uint16_t x419 = 789U;
	volatile uint16_t x420 = UINT16_MAX;

    t104 = ((x417==(x418|x419))&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 507;
	uint16_t x422 = UINT16_MAX;
	volatile int8_t x423 = INT8_MIN;
	uint64_t x424 = 64840324201980224LLU;
	static uint64_t t105 = 274312LLU;

    t105 = ((x421==(x422|x423))&x424);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -1;
	int32_t x426 = -242857;
	int16_t x428 = -3889;
	static volatile int32_t t106 = 839;

    t106 = ((x425==(x426|x427))&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	volatile int32_t x430 = -1;
	int16_t x431 = -12;
	volatile int32_t t107 = 8472;

    t107 = ((x429==(x430|x431))&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x435 = UINT32_MAX;
	volatile int32_t t108 = 1;

    t108 = ((x433==(x434|x435))&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = 54;
	int16_t x438 = -1;
	uint64_t t109 = 68908469625228637LLU;

    t109 = ((x437==(x438|x439))&x440);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x442 = UINT16_MAX;
	uint8_t x443 = 1U;
	int8_t x444 = INT8_MIN;
	static int32_t t110 = 1530670;

    t110 = ((x441==(x442|x443))&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	int64_t x446 = 3005LL;
	uint32_t x447 = UINT32_MAX;
	volatile uint16_t x448 = UINT16_MAX;
	volatile int32_t t111 = -208;

    t111 = ((x445==(x446|x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = -1;
	int32_t x450 = INT32_MIN;
	static volatile int16_t x451 = -1;
	int8_t x452 = -1;

    t112 = ((x449==(x450|x451))&x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x455 = 53;

    t113 = ((x453==(x454|x455))&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x457 = 1U;
	int64_t x459 = INT64_MIN;
	int64_t x460 = 6758815242493LL;
	int64_t t114 = -70182268577191615LL;

    t114 = ((x457==(x458|x459))&x460);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = -29;
	static int64_t x462 = INT64_MIN;
	uint32_t x463 = UINT32_MAX;
	static volatile int32_t x464 = INT32_MIN;
	static volatile int32_t t115 = -68008594;

    t115 = ((x461==(x462|x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -6;
	uint32_t x466 = UINT32_MAX;

    t116 = ((x465==(x466|x467))&x468);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x470 = 97U;
	static volatile uint16_t x471 = UINT16_MAX;
	int64_t x472 = -1LL;
	int64_t t117 = -187402851243LL;

    t117 = ((x469==(x470|x471))&x472);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MIN;
	volatile int64_t t118 = -478681LL;

    t118 = ((x473==(x474|x475))&x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	static int8_t x478 = INT8_MAX;
	volatile int8_t x480 = 52;
	static volatile int32_t t119 = 4462543;

    t119 = ((x477==(x478|x479))&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = -6;
	static int32_t x484 = -1;
	int32_t t120 = -2918419;

    t120 = ((x481==(x482|x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = UINT64_MAX;
	int64_t x487 = INT64_MIN;
	uint32_t x488 = UINT32_MAX;

    t121 = ((x485==(x486|x487))&x488);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 245938995;
	int64_t x490 = INT64_MIN;
	volatile int32_t x491 = INT32_MAX;

    t122 = ((x489==(x490|x491))&x492);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = 9;
	uint16_t x495 = 936U;
	int64_t x496 = INT64_MIN;

    t123 = ((x493==(x494|x495))&x496);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -3539784793243639LL;
	int64_t x498 = 1958093336565LL;
	int64_t x499 = -1451268LL;
	int32_t x500 = 291;

    t124 = ((x497==(x498|x499))&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x501 = INT64_MAX;
	static int64_t x502 = 0LL;
	int32_t x503 = -1;
	int32_t x504 = INT32_MIN;
	int32_t t125 = -22166332;

    t125 = ((x501==(x502|x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = INT16_MAX;
	int32_t x508 = -1;
	int32_t t126 = 1730;

    t126 = ((x505==(x506|x507))&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = INT8_MIN;
	int16_t x511 = 5282;

    t127 = ((x509==(x510|x511))&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MAX;
	uint32_t x514 = UINT32_MAX;
	int64_t x515 = INT64_MIN;
	int8_t x516 = INT8_MIN;
	int32_t t128 = -30000401;

    t128 = ((x513==(x514|x515))&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x517 = 42494176291468LLU;
	static int64_t x518 = 329012008693654739LL;
	uint64_t x519 = UINT64_MAX;
	int16_t x520 = INT16_MIN;
	volatile int32_t t129 = -1;

    t129 = ((x517==(x518|x519))&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	int32_t x522 = INT32_MIN;
	int64_t x524 = INT64_MIN;

    t130 = ((x521==(x522|x523))&x524);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = 0;
	int32_t x526 = 3314385;
	int64_t x527 = INT64_MIN;
	int16_t x528 = INT16_MIN;
	int32_t t131 = 12;

    t131 = ((x525==(x526|x527))&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = INT64_MAX;
	static int32_t x530 = -1;
	volatile uint8_t x531 = UINT8_MAX;
	int16_t x532 = -2;

    t132 = ((x529==(x530|x531))&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	volatile int64_t x534 = 25819247LL;
	int32_t x535 = 128535121;
	int8_t x536 = INT8_MIN;
	static int32_t t133 = -1;

    t133 = ((x533==(x534|x535))&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 10619507342085749LLU;
	volatile int64_t x538 = INT64_MIN;
	uint16_t x540 = 111U;
	int32_t t134 = -2084216;

    t134 = ((x537==(x538|x539))&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 39U;
	uint32_t x543 = 3U;
	volatile int32_t t135 = 4227361;

    t135 = ((x541==(x542|x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = INT16_MIN;
	int64_t x546 = -49418096203387767LL;
	uint32_t x547 = 1917116951U;
	int32_t x548 = INT32_MIN;

    t136 = ((x545==(x546|x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x550 = INT8_MIN;
	volatile int16_t x551 = -1;
	static volatile uint64_t x552 = 6206495600LLU;
	static volatile uint64_t t137 = 4303052624009604146LLU;

    t137 = ((x549==(x550|x551))&x552);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = INT64_MIN;
	int64_t x554 = -1LL;
	static int16_t x556 = -181;
	int32_t t138 = -6859;

    t138 = ((x553==(x554|x555))&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = 1130;
	int64_t x558 = INT64_MIN;
	int64_t x560 = INT64_MIN;
	volatile int64_t t139 = 100057LL;

    t139 = ((x557==(x558|x559))&x560);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x562 = -36;
	int64_t x563 = INT64_MIN;

    t140 = ((x561==(x562|x563))&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = UINT16_MAX;
	int64_t x566 = INT64_MAX;
	int32_t x567 = INT32_MIN;
	static uint64_t x568 = 966994306LLU;
	volatile uint64_t t141 = 436902604446LLU;

    t141 = ((x565==(x566|x567))&x568);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -1;
	int32_t x570 = -1;
	int64_t x571 = -1LL;
	uint8_t x572 = 63U;

    t142 = ((x569==(x570|x571))&x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	static int32_t x574 = -1;
	int8_t x575 = -1;
	int8_t x576 = 45;
	volatile int32_t t143 = 3496871;

    t143 = ((x573==(x574|x575))&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	int64_t x578 = 23660879910261892LL;
	static int16_t x579 = INT16_MIN;
	int16_t x580 = INT16_MIN;
	int32_t t144 = -2143;

    t144 = ((x577==(x578|x579))&x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x582 = INT32_MAX;
	volatile uint8_t x583 = 0U;
	uint64_t x584 = 3635285LLU;
	uint64_t t145 = 15055LLU;

    t145 = ((x581==(x582|x583))&x584);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -1;
	static uint32_t x586 = 882463537U;
	static int8_t x587 = INT8_MIN;
	int32_t x588 = INT32_MAX;
	volatile int32_t t146 = -30983671;

    t146 = ((x585==(x586|x587))&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = 267079U;
	volatile uint64_t x590 = 103316362LLU;
	int16_t x592 = 1;
	volatile int32_t t147 = 91805645;

    t147 = ((x589==(x590|x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x594 = INT8_MIN;
	int32_t x596 = INT32_MAX;
	static int32_t t148 = -55455;

    t148 = ((x593==(x594|x595))&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MAX;
	uint16_t x598 = 3U;
	int8_t x599 = INT8_MIN;
	static int64_t t149 = 441575119879030375LL;

    t149 = ((x597==(x598|x599))&x600);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 5U;
	int64_t x603 = INT64_MIN;
	int8_t x604 = INT8_MAX;
	volatile int32_t t150 = -335776089;

    t150 = ((x601==(x602|x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 5177341966089324LL;
	int32_t x606 = 89825079;
	uint16_t x607 = UINT16_MAX;
	int16_t x608 = INT16_MIN;
	int32_t t151 = -123;

    t151 = ((x605==(x606|x607))&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = UINT32_MAX;
	static uint8_t x610 = 0U;
	int32_t x611 = INT32_MIN;
	int16_t x612 = INT16_MIN;

    t152 = ((x609==(x610|x611))&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 27636U;
	int32_t x615 = 5999;
	uint32_t t153 = 107187U;

    t153 = ((x613==(x614|x615))&x616);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x619 = 17222402413714LL;
	static uint8_t x620 = 5U;
	volatile int32_t t154 = -666430;

    t154 = ((x617==(x618|x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = INT8_MAX;
	uint16_t x624 = UINT16_MAX;
	int32_t t155 = 904;

    t155 = ((x621==(x622|x623))&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 212309056612LLU;
	static int8_t x627 = 0;
	int32_t x628 = -1;
	volatile int32_t t156 = -14990;

    t156 = ((x625==(x626|x627))&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 3421U;
	int64_t x630 = INT64_MAX;
	uint32_t x632 = UINT32_MAX;
	volatile uint32_t t157 = 1556052402U;

    t157 = ((x629==(x630|x631))&x632);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x633 = UINT8_MAX;
	volatile uint16_t x634 = 1U;
	int64_t x636 = 3252147099130880587LL;
	static int64_t t158 = 5291LL;

    t158 = ((x633==(x634|x635))&x636);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = -1;
	volatile uint16_t x638 = UINT16_MAX;
	uint16_t x639 = 0U;
	int8_t x640 = INT8_MAX;
	int32_t t159 = -1;

    t159 = ((x637==(x638|x639))&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	int8_t x642 = INT8_MIN;
	int16_t x643 = INT16_MIN;
	int64_t x644 = -1LL;
	int64_t t160 = 3359729558LL;

    t160 = ((x641==(x642|x643))&x644);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = 35;
	uint32_t x646 = 1705024U;
	uint8_t x647 = UINT8_MAX;
	static int8_t x648 = INT8_MAX;
	volatile int32_t t161 = -25389245;

    t161 = ((x645==(x646|x647))&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	int64_t x650 = INT64_MIN;
	volatile int8_t x651 = -1;
	int16_t x652 = -1;
	int32_t t162 = -420590386;

    t162 = ((x649==(x650|x651))&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	static volatile uint64_t x654 = 13LLU;
	int32_t x655 = 421252;
	uint32_t x656 = 381U;
	volatile uint32_t t163 = 116647U;

    t163 = ((x653==(x654|x655))&x656);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = UINT32_MAX;
	int8_t x658 = -11;
	int64_t x659 = -49156069LL;
	static uint16_t x660 = UINT16_MAX;
	static volatile int32_t t164 = 89;

    t164 = ((x657==(x658|x659))&x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	int32_t x663 = 25312;
	uint16_t x664 = 1621U;
	volatile int32_t t165 = -165332;

    t165 = ((x661==(x662|x663))&x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 2620U;
	int64_t x666 = INT64_MAX;
	int8_t x667 = -14;
	int64_t x668 = INT64_MAX;

    t166 = ((x665==(x666|x667))&x668);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	int32_t x670 = -27;
	int64_t x672 = INT64_MIN;
	volatile int64_t t167 = 2880454791746844LL;

    t167 = ((x669==(x670|x671))&x672);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	int64_t x674 = -1LL;
	volatile uint64_t x675 = 12928889998LLU;
	int16_t x676 = -1;

    t168 = ((x673==(x674|x675))&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	uint32_t x678 = UINT32_MAX;
	uint32_t x679 = 1247U;
	int32_t t169 = -59462214;

    t169 = ((x677==(x678|x679))&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = INT32_MAX;
	int8_t x682 = 1;
	static int16_t x683 = -1;
	uint8_t x684 = 89U;

    t170 = ((x681==(x682|x683))&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = 1;
	int32_t x686 = INT32_MAX;
	volatile int16_t x687 = INT16_MIN;
	uint64_t x688 = 23028968160079080LLU;
	volatile uint64_t t171 = 364LLU;

    t171 = ((x685==(x686|x687))&x688);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x689 = 299727168007449966LLU;
	uint16_t x691 = 784U;
	int8_t x692 = 1;
	volatile int32_t t172 = -868980;

    t172 = ((x689==(x690|x691))&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 48U;
	volatile int32_t t173 = 239;

    t173 = ((x693==(x694|x695))&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	int32_t x698 = INT32_MIN;
	static int64_t x699 = -1LL;
	static int64_t x700 = 71868020793746LL;
	static volatile int64_t t174 = 3LL;

    t174 = ((x697==(x698|x699))&x700);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x702 = INT64_MIN;
	int32_t x704 = INT32_MIN;
	int32_t t175 = -13127;

    t175 = ((x701==(x702|x703))&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 26151777LLU;
	uint8_t x707 = 0U;
	static int32_t x708 = INT32_MIN;
	static volatile int32_t t176 = 5603;

    t176 = ((x705==(x706|x707))&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = UINT16_MAX;
	int8_t x710 = 26;
	int64_t x711 = INT64_MIN;
	int32_t t177 = 4521;

    t177 = ((x709==(x710|x711))&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = 0;
	int64_t x714 = -1173631177874035LL;
	int32_t x715 = -1;
	int16_t x716 = -11989;
	int32_t t178 = 548816;

    t178 = ((x713==(x714|x715))&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = -1;
	uint64_t x718 = 13075LLU;
	int64_t x719 = INT64_MAX;
	uint64_t x720 = 22LLU;
	uint64_t t179 = 18813821983LLU;

    t179 = ((x717==(x718|x719))&x720);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = 7;
	uint8_t x724 = UINT8_MAX;
	int32_t t180 = -156077272;

    t180 = ((x721==(x722|x723))&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 4191LLU;
	int8_t x726 = INT8_MIN;
	int64_t x727 = INT64_MIN;
	static volatile int32_t x728 = INT32_MIN;

    t181 = ((x725==(x726|x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	uint8_t x730 = UINT8_MAX;
	static uint64_t x731 = UINT64_MAX;
	int16_t x732 = INT16_MIN;

    t182 = ((x729==(x730|x731))&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = -1LL;
	volatile int32_t x734 = INT32_MIN;
	static volatile uint32_t x735 = UINT32_MAX;
	uint32_t x736 = UINT32_MAX;
	uint32_t t183 = 29904U;

    t183 = ((x733==(x734|x735))&x736);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -1;
	uint32_t x738 = 34803460U;
	int8_t x739 = 1;
	static volatile int16_t x740 = 98;
	int32_t t184 = -1;

    t184 = ((x737==(x738|x739))&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MAX;
	static volatile int64_t x742 = INT64_MIN;
	int32_t x743 = -6;
	volatile int32_t t185 = -23191;

    t185 = ((x741==(x742|x743))&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x746 = 29334U;
	int64_t x747 = INT64_MIN;
	uint32_t x748 = 665U;

    t186 = ((x745==(x746|x747))&x748);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x750 = INT32_MIN;
	int8_t x751 = -1;
	uint8_t x752 = UINT8_MAX;
	static volatile int32_t t187 = -3065463;

    t187 = ((x749==(x750|x751))&x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x754 = 2971185LLU;
	static uint64_t x755 = 24478LLU;
	int32_t t188 = -3;

    t188 = ((x753==(x754|x755))&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = INT8_MAX;
	int8_t x758 = INT8_MAX;
	int16_t x759 = INT16_MIN;
	volatile int64_t x760 = -7196025LL;
	int64_t t189 = 23681910LL;

    t189 = ((x757==(x758|x759))&x760);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = -1;
	uint32_t x762 = 971580862U;
	static int32_t t190 = 51;

    t190 = ((x761==(x762|x763))&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MAX;
	int64_t x767 = 96LL;
	volatile int32_t t191 = -4565;

    t191 = ((x765==(x766|x767))&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 1832794643444468LLU;
	int16_t x771 = INT16_MIN;
	volatile uint32_t t192 = 707929U;

    t192 = ((x769==(x770|x771))&x772);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = 8798631U;
	int32_t x774 = INT32_MIN;
	int8_t x775 = INT8_MIN;
	static int16_t x776 = INT16_MAX;

    t193 = ((x773==(x774|x775))&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x777 = 114399087U;
	int64_t x778 = -1LL;
	int16_t x780 = INT16_MAX;
	int32_t t194 = -18681;

    t194 = ((x777==(x778|x779))&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	int64_t x783 = INT64_MIN;
	int32_t x784 = INT32_MIN;

    t195 = ((x781==(x782|x783))&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	static uint8_t x786 = 43U;
	int32_t x787 = INT32_MAX;
	int32_t x788 = -353;
	int32_t t196 = -2155;

    t196 = ((x785==(x786|x787))&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = INT16_MAX;
	int64_t x790 = -1LL;
	uint32_t x791 = 356U;
	int32_t x792 = INT32_MAX;
	int32_t t197 = -5337123;

    t197 = ((x789==(x790|x791))&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = 0;
	volatile int64_t x796 = 990LL;
	int64_t t198 = -2798176055LL;

    t198 = ((x793==(x794|x795))&x796);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = 7;
	int64_t x798 = -1LL;
	static int32_t x799 = -1;

    t199 = ((x797==(x798|x799))&x800);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

