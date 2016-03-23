
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

int16_t x2 = INT16_MAX;
volatile int32_t x8 = INT32_MAX;
volatile int32_t x17 = -1241381;
int8_t x18 = 26;
volatile uint16_t x19 = 11U;
uint16_t x24 = UINT16_MAX;
uint32_t x25 = 28183U;
uint32_t x33 = UINT32_MAX;
static uint64_t x41 = UINT64_MAX;
int64_t x50 = -1LL;
static uint64_t t13 = 71224877424LLU;
uint64_t x70 = 6LLU;
volatile uint64_t t16 = 7036781156312LLU;
int8_t x86 = -1;
int32_t x87 = INT32_MIN;
uint64_t x95 = 214820501665708042LLU;
static uint64_t x96 = UINT64_MAX;
int64_t x102 = INT64_MIN;
int8_t x108 = INT8_MIN;
int16_t x113 = 207;
volatile int32_t x123 = -13200982;
int32_t t26 = -320349483;
int32_t x126 = INT32_MIN;
int16_t x133 = 1973;
static volatile uint32_t x134 = 84U;
volatile uint64_t t30 = 8321506499130LLU;
int16_t x149 = INT16_MIN;
int32_t x157 = INT32_MAX;
uint16_t x159 = 13U;
static int32_t x170 = INT32_MAX;
static int32_t x171 = 95133777;
int64_t x176 = INT64_MAX;
int64_t x190 = -75958548LL;
uint8_t x196 = 0U;
uint16_t x211 = 1U;
int64_t x212 = 180LL;
int8_t x219 = -1;
int64_t x225 = INT64_MIN;
static int16_t x233 = -1;
int16_t x238 = INT16_MIN;
volatile int8_t x251 = INT8_MIN;
uint8_t x252 = 67U;
int32_t t51 = 4;
static uint16_t x256 = 975U;
static uint16_t x257 = 28277U;
uint16_t x260 = 17739U;
int64_t t54 = 1772090762279592666LL;
int8_t x267 = 0;
uint64_t x279 = UINT64_MAX;
static volatile int16_t x283 = 0;
uint64_t t58 = 55LLU;
int64_t x286 = -346125338329078432LL;
int64_t t59 = 12092LL;
volatile int32_t x297 = 89;
uint8_t x300 = UINT8_MAX;
uint64_t x313 = 551358761LLU;
int64_t x317 = 5LL;
int32_t x318 = 38313456;
int64_t x319 = -1LL;
int16_t x320 = -1;
uint16_t x323 = UINT16_MAX;
volatile uint32_t x333 = 225580U;
uint32_t t72 = 2102U;
volatile int64_t x346 = INT64_MIN;
uint16_t x348 = 80U;
static int64_t x349 = INT64_MIN;
uint32_t x350 = UINT32_MAX;
int8_t x356 = INT8_MAX;
int64_t t75 = 0LL;
uint64_t t76 = 1811895LLU;
uint32_t x361 = 55697U;
int8_t x364 = 9;
int16_t x383 = INT16_MAX;
static int32_t x386 = 11499;
static volatile int64_t t81 = -39465442554826456LL;
int32_t x391 = INT32_MIN;
int64_t x393 = INT64_MAX;
int32_t x394 = -1;
int16_t x396 = INT16_MAX;
volatile uint16_t x397 = UINT16_MAX;
uint16_t x404 = 380U;
int32_t x406 = 13;
volatile int32_t t86 = -1;
volatile int16_t x411 = 7281;
int8_t x415 = INT8_MIN;
static uint32_t x417 = UINT32_MAX;
uint32_t x427 = 30U;
uint64_t x429 = UINT64_MAX;
int64_t x430 = INT64_MIN;
int32_t x431 = INT32_MIN;
volatile uint64_t x433 = UINT64_MAX;
uint32_t t94 = 63853858U;
int8_t x452 = 0;
int8_t x455 = -1;
volatile uint64_t x463 = 1741LLU;
int8_t x467 = 1;
int64_t x470 = INT64_MAX;
int64_t t100 = 4355480602LL;
volatile uint64_t t101 = 11502LLU;
uint8_t x477 = 1U;
int32_t x479 = INT32_MAX;
uint8_t x482 = UINT8_MAX;
static uint8_t x483 = 1U;
static volatile int32_t x485 = -1;
int64_t x489 = 27751921611LL;
static volatile uint64_t x492 = UINT64_MAX;
uint64_t t105 = 190284402738LLU;
static int32_t x493 = -29670;
uint8_t x496 = 1U;
int64_t t107 = -12073LL;
int16_t x506 = INT16_MAX;
volatile uint16_t x525 = 345U;
int16_t x531 = -1;
uint16_t x535 = 485U;
static volatile int64_t t114 = -33LL;
int32_t x538 = -1;
int16_t x547 = INT16_MIN;
static volatile uint8_t x550 = UINT8_MAX;
volatile int8_t x551 = -3;
static volatile uint64_t t119 = 4LLU;
int64_t x558 = -1LL;
volatile uint32_t x559 = 7401015U;
volatile int16_t x561 = 6;
int16_t x562 = -1;
int8_t x567 = INT8_MIN;
uint32_t t122 = 2400101U;
int16_t x572 = INT16_MIN;
int32_t x581 = -232;
int16_t x582 = INT16_MIN;
static volatile int16_t x586 = 1978;
volatile int32_t t126 = -152383687;
static int32_t x593 = INT32_MIN;
volatile int16_t x596 = -1;
int16_t x597 = INT16_MIN;
int64_t x598 = -1LL;
static uint32_t x600 = 1881U;
uint8_t x605 = UINT8_MAX;
uint16_t x608 = 4584U;
volatile uint32_t t131 = 1872294U;
int32_t x610 = INT32_MIN;
uint8_t x612 = UINT8_MAX;
static int16_t x619 = -22;
uint64_t x620 = 1737558482351576038LLU;
volatile uint64_t t134 = 25804LLU;
static int32_t x628 = INT32_MAX;
int32_t x632 = -1;
uint8_t x644 = UINT8_MAX;
uint8_t x653 = UINT8_MAX;
volatile int8_t x658 = INT8_MIN;
volatile uint16_t x659 = UINT16_MAX;
static int32_t x662 = 99827776;
int16_t x664 = -6527;
volatile int64_t x665 = 492133LL;
int32_t x668 = -168754707;
volatile int16_t x669 = -1;
int32_t x672 = 4;
int8_t x673 = INT8_MIN;
static volatile int64_t x687 = -1LL;
int16_t x693 = INT16_MIN;
int64_t x698 = 60739LL;
int32_t x699 = INT32_MIN;
int64_t x700 = INT64_MIN;
static int8_t x704 = 36;
volatile int32_t t152 = 1;
uint64_t x707 = 12495013924LLU;
uint16_t x717 = UINT16_MAX;
static int64_t t155 = -1945661240244LL;
int8_t x731 = 1;
int64_t x734 = INT64_MAX;
volatile int16_t x735 = INT16_MIN;
static int16_t x736 = 119;
volatile int8_t x754 = INT8_MIN;
int64_t x758 = -1LL;
int16_t x761 = INT16_MAX;
int16_t x775 = INT16_MIN;
static uint64_t x787 = 15311872780263034LLU;
uint8_t x792 = 0U;
volatile int32_t t169 = 0;
volatile int16_t x795 = INT16_MIN;
static int32_t x796 = INT32_MIN;
int64_t x800 = INT64_MIN;
static int64_t x804 = 4589022838248LL;
uint64_t t172 = 1023531698LLU;
uint16_t x806 = 2U;
int16_t x825 = INT16_MIN;
static uint64_t t181 = 0LLU;
int8_t x852 = INT8_MIN;
volatile int64_t t183 = -27LL;
static uint8_t x855 = UINT8_MAX;
volatile int64_t x867 = 1420853974861669372LL;
static uint16_t x872 = 0U;
int16_t x875 = INT16_MIN;
static int64_t t187 = 0LL;
int16_t x879 = -31;
static volatile uint32_t x884 = UINT32_MAX;
volatile uint16_t x886 = 30357U;
uint64_t x887 = 32201649083LLU;
int64_t x888 = -20057LL;
int32_t x893 = -1;
int16_t x895 = INT16_MIN;
int32_t t192 = -174018472;
volatile int16_t x898 = INT16_MIN;
volatile uint8_t x910 = UINT8_MAX;
volatile uint8_t x911 = 0U;
int16_t x918 = -1;
uint32_t x921 = 22U;
int16_t x922 = INT16_MIN;
uint16_t x932 = UINT16_MAX;
uint32_t x934 = 1U;
uint64_t x936 = 990550671853LLU;


void f0(void) {
    	volatile int32_t x1 = -1;
	int8_t x3 = INT8_MAX;
	int16_t x4 = 1;
	volatile int32_t t0 = 3;

    t0 = (((x1/x2)-x3)+x4);

    if (t0 != -126) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int16_t x6 = 3312;
	int64_t x7 = INT64_MIN;
	volatile uint64_t t1 = 10LLU;

    t1 = (((x5/x6)-x7)+x8);

    if (t1 != 9228941708106640358LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -11632096922LL;
	volatile int8_t x10 = -1;
	static uint16_t x11 = 122U;
	int16_t x12 = INT16_MAX;
	static int64_t t2 = -2156803403736LL;

    t2 = (((x9/x10)-x11)+x12);

    if (t2 != 11632129567LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = UINT16_MAX;
	int16_t x14 = -1;
	static int32_t x15 = 494;
	int8_t x16 = INT8_MAX;
	static volatile int32_t t3 = -265509895;

    t3 = (((x13/x14)-x15)+x16);

    if (t3 != -65902) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x20 = UINT8_MAX;
	int32_t t4 = -485;

    t4 = (((x17/x18)-x19)+x20);

    if (t4 != -47501) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	volatile int8_t x22 = INT8_MIN;
	int64_t x23 = 4749820588LL;
	volatile int64_t t5 = -95LL;

    t5 = (((x21/x22)-x23)+x24);

    if (t5 != -4749755053LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = 4561U;
	static int64_t x27 = 72377532950418069LL;
	static int8_t x28 = INT8_MIN;
	int64_t t6 = 67836165099697552LL;

    t6 = (((x25/x26)-x27)+x28);

    if (t6 != -72377532950418191LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x34 = 84084922600035352LLU;
	int16_t x35 = INT16_MAX;
	int8_t x36 = -55;
	uint64_t t7 = 31642LLU;

    t7 = (((x33/x34)-x35)+x36);

    if (t7 != 18446744073709518794LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x37 = UINT8_MAX;
	int32_t x38 = INT32_MIN;
	int64_t x39 = 0LL;
	int64_t x40 = INT64_MIN;
	volatile int64_t t8 = INT64_MIN;

    t8 = (((x37/x38)-x39)+x40);

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x42 = INT16_MAX;
	volatile int16_t x43 = INT16_MIN;
	volatile int8_t x44 = -1;
	static uint64_t t9 = 401917129557298LLU;

    t9 = (((x41/x42)-x43)+x44);

    if (t9 != 562967133847567LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = UINT64_MAX;
	int32_t x46 = INT32_MIN;
	int64_t x47 = 243715211850763LL;
	static uint16_t x48 = UINT16_MAX;
	volatile uint64_t t10 = 531LLU;

    t10 = (((x45/x46)-x47)+x48);

    if (t10 != 18446500358497766389LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 5U;
	uint8_t x51 = 0U;
	int64_t x52 = -1LL;
	int64_t t11 = -394434830LL;

    t11 = (((x49/x50)-x51)+x52);

    if (t11 != -6LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x53 = 13057;
	int16_t x54 = INT16_MIN;
	uint64_t x55 = 212832044671610LLU;
	int64_t x56 = INT64_MAX;
	volatile uint64_t t12 = 1409LLU;

    t12 = (((x53/x54)-x55)+x56);

    if (t12 != 9223159204810104197LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = INT32_MIN;
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = -1;
	int64_t x60 = 177735599LL;

    t13 = (((x57/x58)-x59)+x60);

    if (t13 != 177735600LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 101U;
	uint32_t x62 = 1U;
	int64_t x63 = -1574022413711588LL;
	volatile int16_t x64 = 737;
	static int64_t t14 = 1363LL;

    t14 = (((x61/x62)-x63)+x64);

    if (t14 != 1574022413712426LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 3495602U;
	uint64_t x66 = 1583831955193766537LLU;
	int32_t x67 = -464;
	int64_t x68 = INT64_MIN;
	volatile uint64_t t15 = 155LLU;

    t15 = (((x65/x66)-x67)+x68);

    if (t15 != 9223372036854776272LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x69 = 18130U;
	int32_t x71 = INT32_MAX;
	int16_t x72 = -2;

    t16 = (((x69/x70)-x71)+x72);

    if (t16 != 18446744071562070988LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = UINT16_MAX;
	static uint32_t x74 = UINT32_MAX;
	int8_t x75 = -44;
	int64_t x76 = -1LL;
	volatile int64_t t17 = 1215604001LL;

    t17 = (((x73/x74)-x75)+x76);

    if (t17 != 43LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x81 = 3LL;
	uint32_t x82 = UINT32_MAX;
	uint8_t x83 = 6U;
	volatile int8_t x84 = INT8_MIN;
	static volatile int64_t t18 = -2145558967LL;

    t18 = (((x81/x82)-x83)+x84);

    if (t18 != -134LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MAX;
	volatile int8_t x88 = INT8_MAX;
	static int32_t t19 = 1672428;

    t19 = (((x85/x86)-x87)+x88);

    if (t19 != 2147451008) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x89 = INT32_MAX;
	uint64_t x90 = 18701639858970610LLU;
	int8_t x91 = 3;
	int32_t x92 = INT32_MIN;
	volatile uint64_t t20 = 219780303833488958LLU;

    t20 = (((x89/x90)-x91)+x92);

    if (t20 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x93 = 71;
	static uint8_t x94 = UINT8_MAX;
	volatile uint64_t t21 = 457957102941LLU;

    t21 = (((x93/x94)-x95)+x96);

    if (t21 != 18231923572043843573LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x101 = UINT64_MAX;
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MIN;
	uint64_t t22 = 42864LLU;

    t22 = (((x101/x102)-x103)+x104);

    if (t22 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x105 = UINT32_MAX;
	uint8_t x106 = 15U;
	int8_t x107 = INT8_MIN;
	static volatile uint32_t t23 = 3U;

    t23 = (((x105/x106)-x107)+x108);

    if (t23 != 286331153U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x114 = 210987621596070480LLU;
	volatile int8_t x115 = -4;
	int32_t x116 = INT32_MAX;
	uint64_t t24 = 1095529520026788LLU;

    t24 = (((x113/x114)-x115)+x116);

    if (t24 != 2147483651LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MIN;
	uint16_t x118 = 21U;
	uint16_t x119 = 2314U;
	int32_t x120 = -1;
	volatile int32_t t25 = 218;

    t25 = (((x117/x118)-x119)+x120);

    if (t25 != -3875) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x121 = INT8_MIN;
	static int16_t x122 = INT16_MIN;
	int8_t x124 = INT8_MIN;

    t26 = (((x121/x122)-x123)+x124);

    if (t26 != 13200854) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x125 = 56U;
	int8_t x127 = -17;
	volatile uint64_t x128 = UINT64_MAX;
	static uint64_t t27 = 37530301097487LLU;

    t27 = (((x125/x126)-x127)+x128);

    if (t27 != 16LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x135 = 4585U;
	volatile uint16_t x136 = 2U;
	uint32_t t28 = 1095U;

    t28 = (((x133/x134)-x135)+x136);

    if (t28 != 4294962736U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = 28772550;
	int8_t x138 = -1;
	volatile int64_t x139 = INT64_MIN;
	volatile uint8_t x140 = UINT8_MAX;
	volatile int64_t t29 = 15248097793665454LL;

    t29 = (((x137/x138)-x139)+x140);

    if (t29 != 9223372036826003513LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	static int32_t x147 = INT32_MAX;
	uint64_t x148 = 15765843508422LLU;

    t30 = (((x145/x146)-x147)+x148);

    if (t30 != 15763696024776LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x150 = 35U;
	uint64_t x151 = 23500506927LLU;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t31 = 861LLU;

    t31 = (((x149/x150)-x151)+x152);

    if (t31 != 18446744050209043752LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x158 = INT64_MAX;
	int8_t x160 = 18;
	volatile int64_t t32 = 7309254497427LL;

    t32 = (((x157/x158)-x159)+x160);

    if (t32 != 5LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x161 = 14455586012455863LLU;
	int32_t x162 = -9;
	int16_t x163 = INT16_MIN;
	uint32_t x164 = 1969U;
	uint64_t t33 = 253946317LLU;

    t33 = (((x161/x162)-x163)+x164);

    if (t33 != 34737LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x165 = UINT64_MAX;
	static uint8_t x166 = 16U;
	uint64_t x167 = UINT64_MAX;
	static uint32_t x168 = UINT32_MAX;
	volatile uint64_t t34 = 2179395013LLU;

    t34 = (((x165/x166)-x167)+x168);

    if (t34 != 1152921508901814271LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x169 = 378731664U;
	static int16_t x172 = INT16_MAX;
	static volatile uint32_t t35 = 1U;

    t35 = (((x169/x170)-x171)+x172);

    if (t35 != 4199866286U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x173 = INT16_MIN;
	volatile int8_t x174 = INT8_MAX;
	static uint16_t x175 = 400U;
	int64_t t36 = -2062LL;

    t36 = (((x173/x174)-x175)+x176);

    if (t36 != 9223372036854775149LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x177 = INT32_MAX;
	int32_t x178 = INT32_MAX;
	volatile uint8_t x179 = 1U;
	static int8_t x180 = -1;
	static volatile int32_t t37 = 5;

    t37 = (((x177/x178)-x179)+x180);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x181 = 47LLU;
	uint64_t x182 = 44364LLU;
	int16_t x183 = -7829;
	static volatile int16_t x184 = INT16_MIN;
	uint64_t t38 = 297246755201235LLU;

    t38 = (((x181/x182)-x183)+x184);

    if (t38 != 18446744073709526677LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x185 = 1;
	static volatile int16_t x186 = INT16_MIN;
	uint8_t x187 = 1U;
	int16_t x188 = INT16_MAX;
	volatile int32_t t39 = -367377223;

    t39 = (((x185/x186)-x187)+x188);

    if (t39 != 32766) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x189 = 1U;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = 15U;
	uint64_t t40 = 1895810214408584LLU;

    t40 = (((x189/x190)-x191)+x192);

    if (t40 != 16LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x193 = INT32_MAX;
	volatile int32_t x194 = INT32_MAX;
	int16_t x195 = 1;
	int32_t t41 = -16810216;

    t41 = (((x193/x194)-x195)+x196);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x197 = -1;
	uint64_t x198 = UINT64_MAX;
	volatile uint16_t x199 = 42U;
	int64_t x200 = 6755348LL;
	uint64_t t42 = 2639933943203426LLU;

    t42 = (((x197/x198)-x199)+x200);

    if (t42 != 6755307LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = INT16_MAX;
	int32_t x206 = 288;
	uint64_t x207 = UINT64_MAX;
	volatile int64_t x208 = INT64_MAX;
	volatile uint64_t t43 = 11592LLU;

    t43 = (((x205/x206)-x207)+x208);

    if (t43 != 9223372036854775921LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x209 = UINT8_MAX;
	volatile int16_t x210 = INT16_MAX;
	int64_t t44 = -437LL;

    t44 = (((x209/x210)-x211)+x212);

    if (t44 != 179LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x217 = -18;
	static int16_t x218 = INT16_MIN;
	static uint8_t x220 = UINT8_MAX;
	int32_t t45 = 88322;

    t45 = (((x217/x218)-x219)+x220);

    if (t45 != 256) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MIN;
	static int16_t x223 = INT16_MIN;
	uint32_t x224 = 10537969U;
	uint32_t t46 = 71U;

    t46 = (((x221/x222)-x223)+x224);

    if (t46 != 10570738U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x226 = 2LLU;
	int16_t x227 = INT16_MAX;
	int64_t x228 = 512980992213243LL;
	static volatile uint64_t t47 = 24147574881027LLU;

    t47 = (((x225/x226)-x227)+x228);

    if (t47 != 4612198999419568380LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x234 = UINT64_MAX;
	volatile int64_t x235 = INT64_MIN;
	uint32_t x236 = 211U;
	uint64_t t48 = 2159824004301240LLU;

    t48 = (((x233/x234)-x235)+x236);

    if (t48 != 9223372036854776020LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x237 = INT8_MAX;
	int8_t x239 = INT8_MAX;
	int8_t x240 = 6;
	int32_t t49 = 4453812;

    t49 = (((x237/x238)-x239)+x240);

    if (t49 != -121) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x245 = 1587515724U;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = 8079424U;
	uint16_t x248 = 0U;
	volatile int64_t t50 = -2503783300677LL;

    t50 = (((x245/x246)-x247)+x248);

    if (t50 != -8079424LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x249 = INT16_MIN;
	static int16_t x250 = INT16_MIN;

    t51 = (((x249/x250)-x251)+x252);

    if (t51 != 196) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x253 = 1376U;
	volatile int32_t x254 = INT32_MAX;
	volatile uint16_t x255 = 1U;
	uint32_t t52 = 13586695U;

    t52 = (((x253/x254)-x255)+x256);

    if (t52 != 974U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x258 = INT64_MAX;
	uint64_t x259 = 157LLU;
	uint64_t t53 = 471273581168LLU;

    t53 = (((x257/x258)-x259)+x260);

    if (t53 != 17582LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x261 = INT64_MIN;
	static volatile int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MAX;
	int64_t x264 = INT64_MAX;

    t54 = (((x261/x262)-x263)+x264);

    if (t54 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x265 = INT64_MAX;
	uint32_t x266 = 1391U;
	volatile int32_t x268 = INT32_MIN;
	volatile int64_t t55 = 37LL;

    t55 = (((x265/x266)-x267)+x268);

    if (t55 != 6630746980377441LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x273 = -1;
	uint32_t x274 = 612702U;
	int32_t x275 = 0;
	static uint32_t x276 = 74U;
	volatile uint32_t t56 = 2373591U;

    t56 = (((x273/x274)-x275)+x276);

    if (t56 != 7083U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x277 = 14U;
	int16_t x278 = -1;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t57 = 82055048153LLU;

    t57 = (((x277/x278)-x279)+x280);

    if (t57 != 18446744073709518835LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x281 = INT8_MIN;
	int16_t x282 = -1;
	uint64_t x284 = UINT64_MAX;

    t58 = (((x281/x282)-x283)+x284);

    if (t58 != 127LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x285 = INT64_MIN;
	static volatile int32_t x287 = 0;
	static int64_t x288 = -1LL;

    t59 = (((x285/x286)-x287)+x288);

    if (t59 != 25LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x289 = 79U;
	uint16_t x290 = UINT16_MAX;
	int16_t x291 = -1;
	static volatile int16_t x292 = INT16_MAX;
	int32_t t60 = 1677;

    t60 = (((x289/x290)-x291)+x292);

    if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x293 = -239226LL;
	uint32_t x294 = 129U;
	uint64_t x295 = 2754607269694LLU;
	int32_t x296 = -1;
	uint64_t t61 = 4286866576193220122LLU;

    t61 = (((x293/x294)-x295)+x296);

    if (t61 != 18446741319102280067LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x298 = INT16_MIN;
	int8_t x299 = INT8_MAX;
	int32_t t62 = 3;

    t62 = (((x297/x298)-x299)+x300);

    if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x301 = 2U;
	int16_t x302 = -1;
	static uint32_t x303 = 3395U;
	int8_t x304 = INT8_MIN;
	uint32_t t63 = 663U;

    t63 = (((x301/x302)-x303)+x304);

    if (t63 != 4294963771U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x305 = INT16_MIN;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = 103U;
	volatile uint64_t x308 = 17348325841511LLU;
	uint64_t t64 = 16163394965312237LLU;

    t64 = (((x305/x306)-x307)+x308);

    if (t64 != 17348325841409LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x309 = INT8_MAX;
	volatile int16_t x310 = INT16_MIN;
	static int8_t x311 = -1;
	int32_t x312 = INT32_MIN;
	static int32_t t65 = -27319;

    t65 = (((x309/x310)-x311)+x312);

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	volatile uint8_t x316 = 52U;
	uint64_t t66 = 7338LLU;

    t66 = (((x313/x314)-x315)+x316);

    if (t66 != 18446744073709486133LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t t67 = 1647767486LL;

    t67 = (((x317/x318)-x319)+x320);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x321 = INT64_MAX;
	volatile int64_t x322 = 1674456LL;
	int8_t x324 = INT8_MIN;
	volatile int64_t t68 = -230714591LL;

    t68 = (((x321/x322)-x323)+x324);

    if (t68 != 5508279660322LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	uint32_t x327 = UINT32_MAX;
	uint8_t x328 = 12U;
	volatile uint32_t t69 = 1858845012U;

    t69 = (((x325/x326)-x327)+x328);

    if (t69 != 14U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x334 = UINT32_MAX;
	int64_t x335 = -222LL;
	int32_t x336 = -1;
	int64_t t70 = -15613467613LL;

    t70 = (((x333/x334)-x335)+x336);

    if (t70 != 221LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x337 = 64U;
	int16_t x338 = -1;
	int16_t x339 = -1;
	volatile uint64_t x340 = 3596495838490LLU;
	volatile uint64_t t71 = 540535LLU;

    t71 = (((x337/x338)-x339)+x340);

    if (t71 != 3596495838491LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x341 = INT16_MIN;
	uint16_t x342 = UINT16_MAX;
	uint32_t x343 = 89581565U;
	volatile int32_t x344 = -1;

    t72 = (((x341/x342)-x343)+x344);

    if (t72 != 4205385730U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x345 = UINT64_MAX;
	volatile int16_t x347 = 73;
	uint64_t t73 = 6082938048LLU;

    t73 = (((x345/x346)-x347)+x348);

    if (t73 != 8LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x351 = 1642987537U;
	int32_t x352 = -1;
	int64_t t74 = -900774174138989LL;

    t74 = (((x349/x350)-x351)+x352);

    if (t74 != -3790471186LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x353 = 376515;
	static int8_t x354 = 3;
	volatile int64_t x355 = -1LL;

    t75 = (((x353/x354)-x355)+x356);

    if (t75 != 125633LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x357 = INT16_MIN;
	uint64_t x358 = UINT64_MAX;
	uint8_t x359 = 1U;
	int64_t x360 = INT64_MIN;

    t76 = (((x357/x358)-x359)+x360);

    if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MAX;
	uint32_t t77 = 0U;

    t77 = (((x361/x362)-x363)+x364);

    if (t77 != 2147484096U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x365 = 56U;
	static int8_t x366 = -1;
	int64_t x367 = -1LL;
	int16_t x368 = -1;
	int64_t t78 = -1433LL;

    t78 = (((x365/x366)-x367)+x368);

    if (t78 != -56LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x377 = 621157182889LLU;
	int8_t x378 = INT8_MAX;
	static int16_t x379 = INT16_MIN;
	int64_t x380 = 0LL;
	uint64_t t79 = 181645613211891LLU;

    t79 = (((x377/x378)-x379)+x380);

    if (t79 != 4891034208LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x381 = 1124934395457747LLU;
	uint16_t x382 = UINT16_MAX;
	int64_t x384 = -1LL;
	volatile uint64_t t80 = 4025946788910540LLU;

    t80 = (((x381/x382)-x383)+x384);

    if (t80 != 17165365804LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x385 = INT64_MIN;
	static int64_t x387 = -1LL;
	volatile int16_t x388 = -3011;

    t81 = (((x385/x386)-x387)+x388);

    if (t81 != -802102099042472LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x389 = 5213681481152LLU;
	static int8_t x390 = INT8_MIN;
	uint32_t x392 = 471U;
	uint64_t t82 = 54437869314376LLU;

    t82 = (((x389/x390)-x391)+x392);

    if (t82 != 2147484119LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x395 = 0U;
	int64_t t83 = -6875LL;

    t83 = (((x393/x394)-x395)+x396);

    if (t83 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t84 = 16;

    t84 = (((x397/x398)-x399)+x400);

    if (t84 != -98175) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x401 = 38289646490LL;
	uint64_t x402 = 33281369312LLU;
	int16_t x403 = INT16_MIN;
	uint64_t t85 = 46LLU;

    t85 = (((x401/x402)-x403)+x404);

    if (t85 != 33149LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x405 = 469898;
	int16_t x407 = INT16_MIN;
	uint16_t x408 = UINT16_MAX;

    t86 = (((x405/x406)-x407)+x408);

    if (t86 != 134449) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x409 = -1LL;
	static uint64_t x410 = 120322831065582LLU;
	int32_t x412 = 69974;
	uint64_t t87 = 21165LLU;

    t87 = (((x409/x410)-x411)+x412);

    if (t87 != 216003LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x413 = UINT8_MAX;
	static int32_t x414 = INT32_MAX;
	static int64_t x416 = 15LL;
	volatile int64_t t88 = -3721044339959LL;

    t88 = (((x413/x414)-x415)+x416);

    if (t88 != 143LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x418 = -18856;
	volatile uint16_t x419 = UINT16_MAX;
	int64_t x420 = 8371972949531LL;
	volatile int64_t t89 = 4736148LL;

    t89 = (((x417/x418)-x419)+x420);

    if (t89 != 8376267851293LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x421 = UINT16_MAX;
	volatile int16_t x422 = -43;
	int32_t x423 = -1;
	int64_t x424 = 25100136LL;
	int64_t t90 = -2652735599287LL;

    t90 = (((x421/x422)-x423)+x424);

    if (t90 != 25098613LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x425 = 528;
	int32_t x426 = 892079264;
	uint8_t x428 = UINT8_MAX;
	volatile uint32_t t91 = 833U;

    t91 = (((x425/x426)-x427)+x428);

    if (t91 != 225U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x432 = INT32_MIN;
	uint64_t t92 = 133211LLU;

    t92 = (((x429/x430)-x431)+x432);

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x434 = -1;
	int8_t x435 = 1;
	int8_t x436 = INT8_MAX;
	volatile uint64_t t93 = 135590872517LLU;

    t93 = (((x433/x434)-x435)+x436);

    if (t93 != 127LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x437 = UINT8_MAX;
	int32_t x438 = INT32_MIN;
	volatile int16_t x439 = INT16_MAX;
	volatile uint32_t x440 = 6287U;

    t94 = (((x437/x438)-x439)+x440);

    if (t94 != 4294940816U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x441 = 32U;
	volatile int32_t x442 = 6070239;
	int64_t x443 = -96834137334LL;
	uint16_t x444 = 27464U;
	static int64_t t95 = 150795035762117531LL;

    t95 = (((x441/x442)-x443)+x444);

    if (t95 != 96834164798LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x449 = -8963;
	int16_t x450 = 11;
	volatile int8_t x451 = 41;
	static volatile int32_t t96 = 4;

    t96 = (((x449/x450)-x451)+x452);

    if (t96 != -855) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x453 = -1;
	static volatile int64_t x454 = INT64_MAX;
	int8_t x456 = 0;
	volatile int64_t t97 = 1066937233050LL;

    t97 = (((x453/x454)-x455)+x456);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x461 = INT64_MIN;
	volatile uint8_t x462 = UINT8_MAX;
	static volatile int32_t x464 = INT32_MIN;
	volatile uint64_t t98 = 87797264LLU;

    t98 = (((x461/x462)-x463)+x464);

    if (t98 != 18410573985143027891LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x465 = INT8_MAX;
	int64_t x466 = INT64_MAX;
	uint64_t x468 = 2006LLU;
	uint64_t t99 = 92179999268260961LLU;

    t99 = (((x465/x466)-x467)+x468);

    if (t99 != 2005LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x469 = 6;
	int16_t x471 = 76;
	static int32_t x472 = INT32_MIN;

    t100 = (((x469/x470)-x471)+x472);

    if (t100 != -2147483724LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x473 = -1;
	static volatile int32_t x474 = INT32_MIN;
	uint64_t x475 = 17011LLU;
	static int16_t x476 = INT16_MAX;

    t101 = (((x473/x474)-x475)+x476);

    if (t101 != 15756LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x478 = 1883557537007LLU;
	int32_t x480 = INT32_MIN;
	volatile uint64_t t102 = 269948031477LLU;

    t102 = (((x477/x478)-x479)+x480);

    if (t102 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x481 = 5U;
	static int64_t x484 = INT64_MIN;
	int64_t t103 = -358878LL;

    t103 = (((x481/x482)-x483)+x484);

    if (t103 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x486 = INT16_MAX;
	static int32_t x487 = 688;
	int16_t x488 = INT16_MAX;
	volatile int32_t t104 = -7148243;

    t104 = (((x485/x486)-x487)+x488);

    if (t104 != 32079) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x490 = -1LL;
	volatile int16_t x491 = INT16_MAX;

    t105 = (((x489/x490)-x491)+x492);

    if (t105 != 18446744045957597237LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x494 = UINT16_MAX;
	uint8_t x495 = 5U;
	static int32_t t106 = -115130;

    t106 = (((x493/x494)-x495)+x496);

    if (t106 != -4) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x497 = 11;
	int64_t x498 = -1LL;
	uint8_t x499 = 1U;
	uint8_t x500 = 19U;

    t107 = (((x497/x498)-x499)+x500);

    if (t107 != 7LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x501 = INT8_MAX;
	volatile int8_t x502 = -1;
	uint32_t x503 = 23U;
	int8_t x504 = INT8_MIN;
	volatile uint32_t t108 = 442U;

    t108 = (((x501/x502)-x503)+x504);

    if (t108 != 4294967018U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x505 = INT64_MIN;
	static uint32_t x507 = 333443U;
	int8_t x508 = INT8_MAX;
	int64_t t109 = -10225468900348LL;

    t109 = (((x505/x506)-x507)+x508);

    if (t109 != -281483567240716LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x513 = 56LL;
	int32_t x514 = -1;
	int64_t x515 = INT64_MIN;
	volatile uint8_t x516 = 27U;
	int64_t t110 = -63436509LL;

    t110 = (((x513/x514)-x515)+x516);

    if (t110 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x517 = 29U;
	int16_t x518 = INT16_MAX;
	uint32_t x519 = 2496U;
	int64_t x520 = -1LL;
	volatile int64_t t111 = 3716850939890816LL;

    t111 = (((x517/x518)-x519)+x520);

    if (t111 != 4294964799LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x526 = -1758;
	int16_t x527 = 390;
	int16_t x528 = -1;
	static volatile int32_t t112 = 24279;

    t112 = (((x525/x526)-x527)+x528);

    if (t112 != -391) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x529 = -1072975893928355LL;
	int16_t x530 = -1;
	uint16_t x532 = UINT16_MAX;
	int64_t t113 = 229610218112447LL;

    t113 = (((x529/x530)-x531)+x532);

    if (t113 != 1072975893993891LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x533 = INT8_MAX;
	uint16_t x534 = 3U;
	int64_t x536 = -1LL;

    t114 = (((x533/x534)-x535)+x536);

    if (t114 != -444LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x537 = INT16_MIN;
	volatile int64_t x539 = INT64_MAX;
	int16_t x540 = -1;
	volatile int64_t t115 = 0LL;

    t115 = (((x537/x538)-x539)+x540);

    if (t115 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x541 = -1;
	int8_t x542 = INT8_MAX;
	uint64_t x543 = UINT64_MAX;
	int16_t x544 = 1688;
	uint64_t t116 = 1550817661742LLU;

    t116 = (((x541/x542)-x543)+x544);

    if (t116 != 1689LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x545 = -12395;
	int8_t x546 = -1;
	static uint8_t x548 = 1U;
	int32_t t117 = -235;

    t117 = (((x545/x546)-x547)+x548);

    if (t117 != 45164) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x549 = -8;
	uint16_t x552 = 836U;
	int32_t t118 = 4049093;

    t118 = (((x549/x550)-x551)+x552);

    if (t118 != 839) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x553 = -1;
	uint64_t x554 = 576663LLU;
	int8_t x555 = INT8_MIN;
	uint8_t x556 = 35U;

    t119 = (((x553/x554)-x555)+x556);

    if (t119 != 31988776935235LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x557 = 41144905045990LLU;
	volatile uint32_t x560 = UINT32_MAX;
	uint64_t t120 = 11337675185LLU;

    t120 = (((x557/x558)-x559)+x560);

    if (t120 != 4287566280LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x563 = 46U;
	static uint8_t x564 = 37U;
	int32_t t121 = -1020191676;

    t121 = (((x561/x562)-x563)+x564);

    if (t121 != -15) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x565 = -68516098;
	int16_t x566 = -2313;
	uint32_t x568 = 246U;

    t122 = (((x565/x566)-x567)+x568);

    if (t122 != 29996U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x569 = -340203;
	volatile int64_t x570 = 764762LL;
	uint64_t x571 = UINT64_MAX;
	uint64_t t123 = 62023213LLU;

    t123 = (((x569/x570)-x571)+x572);

    if (t123 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x573 = INT32_MIN;
	static uint8_t x574 = 2U;
	uint64_t x575 = 13693562LLU;
	static int64_t x576 = 61405981561090LL;
	uint64_t t124 = 992069308638186LLU;

    t124 = (((x573/x574)-x575)+x576);

    if (t124 != 61404894125704LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x583 = 1U;
	int8_t x584 = INT8_MAX;
	int32_t t125 = -1;

    t125 = (((x581/x582)-x583)+x584);

    if (t125 != 126) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x585 = INT16_MAX;
	static int32_t x587 = 5666;
	volatile int8_t x588 = -1;

    t126 = (((x585/x586)-x587)+x588);

    if (t126 != -5651) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x589 = 190943LLU;
	static int16_t x590 = INT16_MAX;
	uint32_t x591 = 730244U;
	int32_t x592 = INT32_MAX;
	volatile uint64_t t127 = 50351942603LLU;

    t127 = (((x589/x590)-x591)+x592);

    if (t127 != 2146753408LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x594 = -1LL;
	uint32_t x595 = UINT32_MAX;
	int64_t t128 = 174682LL;

    t128 = (((x593/x594)-x595)+x596);

    if (t128 != -2147483648LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x599 = -2427655975457047986LL;
	volatile int64_t t129 = -14803349LL;

    t129 = (((x597/x598)-x599)+x600);

    if (t129 != 2427655975457082635LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x601 = 0U;
	volatile uint32_t x602 = 667370837U;
	int16_t x603 = INT16_MIN;
	static int32_t x604 = INT32_MIN;
	static volatile uint32_t t130 = 30U;

    t130 = (((x601/x602)-x603)+x604);

    if (t130 != 2147516416U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x606 = UINT32_MAX;
	int32_t x607 = -739;

    t131 = (((x605/x606)-x607)+x608);

    if (t131 != 5323U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x609 = INT64_MAX;
	uint16_t x611 = 61U;
	volatile int64_t t132 = 10746701LL;

    t132 = (((x609/x610)-x611)+x612);

    if (t132 != -4294967101LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x613 = INT16_MAX;
	volatile int64_t x614 = 342LL;
	int64_t x615 = INT64_MAX;
	uint32_t x616 = 13U;
	int64_t t133 = 79388041447LL;

    t133 = (((x613/x614)-x615)+x616);

    if (t133 != -9223372036854775699LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x617 = INT32_MIN;
	static int64_t x618 = -1LL;

    t134 = (((x617/x618)-x619)+x620);

    if (t134 != 1737558484499059708LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x625 = INT16_MIN;
	uint8_t x626 = 4U;
	int8_t x627 = INT8_MIN;
	static volatile int32_t t135 = 440869;

    t135 = (((x625/x626)-x627)+x628);

    if (t135 != 2147475583) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x629 = 184686225439LL;
	uint16_t x630 = 47U;
	volatile int16_t x631 = INT16_MIN;
	int64_t t136 = -1083986347214836256LL;

    t136 = (((x629/x630)-x631)+x632);

    if (t136 != 3929526925LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x633 = -57;
	int64_t x634 = INT64_MIN;
	volatile int64_t x635 = -1LL;
	volatile int32_t x636 = 88308934;
	volatile int64_t t137 = -574LL;

    t137 = (((x633/x634)-x635)+x636);

    if (t137 != 88308935LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x637 = INT16_MIN;
	int32_t x638 = -1;
	static int8_t x639 = 0;
	volatile int8_t x640 = INT8_MAX;
	static int32_t t138 = -2788905;

    t138 = (((x637/x638)-x639)+x640);

    if (t138 != 32895) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x641 = -1;
	volatile int16_t x642 = INT16_MIN;
	int8_t x643 = 1;
	volatile int32_t t139 = 0;

    t139 = (((x641/x642)-x643)+x644);

    if (t139 != 254) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x645 = INT32_MAX;
	uint32_t x646 = UINT32_MAX;
	static uint64_t x647 = UINT64_MAX;
	uint8_t x648 = 1U;
	volatile uint64_t t140 = 177381096515LLU;

    t140 = (((x645/x646)-x647)+x648);

    if (t140 != 2LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x654 = UINT64_MAX;
	volatile int32_t x655 = -255277;
	int8_t x656 = INT8_MAX;
	uint64_t t141 = 192967LLU;

    t141 = (((x653/x654)-x655)+x656);

    if (t141 != 255404LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint8_t x657 = 0U;
	int32_t x660 = -1;
	static int32_t t142 = -18157272;

    t142 = (((x657/x658)-x659)+x660);

    if (t142 != -65536) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x661 = INT64_MIN;
	uint16_t x663 = UINT16_MAX;
	volatile int64_t t143 = -37728388783LL;

    t143 = (((x661/x662)-x663)+x664);

    if (t143 != -92392915080LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x666 = INT8_MAX;
	int8_t x667 = 11;
	int64_t t144 = 105476307338LL;

    t144 = (((x665/x666)-x667)+x668);

    if (t144 != -168750843LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x670 = 42U;
	int16_t x671 = -1;
	int32_t t145 = -3;

    t145 = (((x669/x670)-x671)+x672);

    if (t145 != 5) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x674 = 6U;
	volatile uint64_t x675 = 804743LLU;
	static volatile int8_t x676 = INT8_MAX;
	uint64_t t146 = 31842853845LLU;

    t146 = (((x673/x674)-x675)+x676);

    if (t146 != 18446744073708746979LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x677 = -1;
	static uint16_t x678 = 3334U;
	uint64_t x679 = UINT64_MAX;
	uint16_t x680 = 1U;
	volatile uint64_t t147 = 348520827LLU;

    t147 = (((x677/x678)-x679)+x680);

    if (t147 != 2LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x685 = UINT16_MAX;
	volatile int32_t x686 = 469;
	static int8_t x688 = INT8_MAX;
	int64_t t148 = -2354007LL;

    t148 = (((x685/x686)-x687)+x688);

    if (t148 != 267LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x689 = -15921LL;
	uint64_t x690 = 27266904LLU;
	volatile int8_t x691 = INT8_MIN;
	int16_t x692 = INT16_MAX;
	volatile uint64_t t149 = 6398LLU;

    t149 = (((x689/x690)-x691)+x692);

    if (t149 != 676525100563LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x694 = INT64_MAX;
	volatile int32_t x695 = INT32_MAX;
	uint64_t x696 = UINT64_MAX;
	volatile uint64_t t150 = 644024823366220LLU;

    t150 = (((x693/x694)-x695)+x696);

    if (t150 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x697 = -1;
	int64_t t151 = -30594LL;

    t151 = (((x697/x698)-x699)+x700);

    if (t151 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x701 = INT8_MIN;
	int8_t x702 = -4;
	int8_t x703 = INT8_MIN;

    t152 = (((x701/x702)-x703)+x704);

    if (t152 != 196) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x705 = INT16_MIN;
	int64_t x706 = INT64_MIN;
	uint16_t x708 = 3U;
	volatile uint64_t t153 = 63LLU;

    t153 = (((x705/x706)-x707)+x708);

    if (t153 != 18446744061214537695LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x709 = INT8_MAX;
	uint64_t x710 = 568466290609LLU;
	int64_t x711 = INT64_MIN;
	int8_t x712 = INT8_MIN;
	volatile uint64_t t154 = 13824678447LLU;

    t154 = (((x709/x710)-x711)+x712);

    if (t154 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x718 = -27;
	static volatile int64_t x719 = -1LL;
	static volatile uint16_t x720 = 1U;

    t155 = (((x717/x718)-x719)+x720);

    if (t155 != -2425LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x721 = UINT32_MAX;
	int16_t x722 = INT16_MIN;
	int16_t x723 = -1;
	uint16_t x724 = UINT16_MAX;
	volatile uint32_t t156 = 26538225U;

    t156 = (((x721/x722)-x723)+x724);

    if (t156 != 65537U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x725 = -1LL;
	int64_t x726 = -2887761LL;
	int16_t x727 = INT16_MIN;
	volatile uint32_t x728 = 69984U;
	int64_t t157 = 3586410LL;

    t157 = (((x725/x726)-x727)+x728);

    if (t157 != 102752LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x729 = -81;
	volatile int32_t x730 = INT32_MAX;
	int16_t x732 = -816;
	int32_t t158 = 1806675;

    t158 = (((x729/x730)-x731)+x732);

    if (t158 != -817) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x733 = UINT32_MAX;
	volatile int64_t t159 = -9804754241LL;

    t159 = (((x733/x734)-x735)+x736);

    if (t159 != 32887LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x737 = INT64_MIN;
	static uint64_t x738 = 23309LLU;
	uint32_t x739 = 164100458U;
	int32_t x740 = -4;
	uint64_t t160 = 5396432395800LLU;

    t160 = (((x737/x738)-x739)+x740);

    if (t160 != 395699867511995LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x753 = UINT64_MAX;
	int8_t x755 = -1;
	int32_t x756 = INT32_MIN;
	uint64_t t161 = 691414171LLU;

    t161 = (((x753/x754)-x755)+x756);

    if (t161 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x757 = INT8_MAX;
	static volatile int16_t x759 = -1;
	int8_t x760 = 1;
	static int64_t t162 = -278211663855985399LL;

    t162 = (((x757/x758)-x759)+x760);

    if (t162 != -125LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x762 = 58U;
	int8_t x763 = -1;
	int16_t x764 = INT16_MIN;
	int32_t t163 = -3;

    t163 = (((x761/x762)-x763)+x764);

    if (t163 != -32203) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x769 = 0;
	volatile int16_t x770 = INT16_MAX;
	uint32_t x771 = UINT32_MAX;
	int16_t x772 = INT16_MIN;
	volatile uint32_t t164 = 2009245548U;

    t164 = (((x769/x770)-x771)+x772);

    if (t164 != 4294934529U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x773 = INT16_MAX;
	volatile int32_t x774 = INT32_MIN;
	uint8_t x776 = UINT8_MAX;
	static int32_t t165 = 487457;

    t165 = (((x773/x774)-x775)+x776);

    if (t165 != 33023) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x777 = -1;
	static volatile uint16_t x778 = UINT16_MAX;
	static int8_t x779 = 5;
	volatile int64_t x780 = -1LL;
	static int64_t t166 = -5339976266LL;

    t166 = (((x777/x778)-x779)+x780);

    if (t166 != -6LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x781 = INT64_MIN;
	int16_t x782 = INT16_MAX;
	int32_t x783 = -3990;
	int64_t x784 = -1LL;
	static int64_t t167 = 297546LL;

    t167 = (((x781/x782)-x783)+x784);

    if (t167 != -281483566903411LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x785 = 328705;
	int32_t x786 = -1;
	static int32_t x788 = -1;
	volatile uint64_t t168 = 173332350298002587LLU;

    t168 = (((x785/x786)-x787)+x788);

    if (t168 != 18431432200928959876LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x789 = 64;
	int32_t x790 = -1;
	uint16_t x791 = 4064U;

    t169 = (((x789/x790)-x791)+x792);

    if (t169 != -4128) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x793 = -1;
	volatile int32_t x794 = INT32_MIN;
	volatile int32_t t170 = -228572;

    t170 = (((x793/x794)-x795)+x796);

    if (t170 != -2147450880) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x797 = 0U;
	static volatile int16_t x798 = INT16_MIN;
	uint32_t x799 = 19011U;
	volatile int64_t t171 = -1248221LL;

    t171 = (((x797/x798)-x799)+x800);

    if (t171 != -9223372032559827523LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x801 = UINT64_MAX;
	static int64_t x802 = INT64_MAX;
	int16_t x803 = -2483;

    t172 = (((x801/x802)-x803)+x804);

    if (t172 != 4589022840733LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x805 = INT64_MAX;
	int16_t x807 = INT16_MIN;
	int32_t x808 = INT32_MIN;
	static int64_t t173 = 27672654854LL;

    t173 = (((x805/x806)-x807)+x808);

    if (t173 != 4611686016279937023LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x809 = INT32_MIN;
	int8_t x810 = INT8_MIN;
	volatile int64_t x811 = 322328LL;
	int8_t x812 = -1;
	int64_t t174 = 908212345601LL;

    t174 = (((x809/x810)-x811)+x812);

    if (t174 != 16454887LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x813 = 6873U;
	uint32_t x814 = 25833U;
	int8_t x815 = -3;
	int16_t x816 = INT16_MIN;
	volatile uint32_t t175 = 22353065U;

    t175 = (((x813/x814)-x815)+x816);

    if (t175 != 4294934531U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x817 = -63;
	uint16_t x818 = 7U;
	int8_t x819 = 1;
	int64_t x820 = -1LL;
	volatile int64_t t176 = -1884LL;

    t176 = (((x817/x818)-x819)+x820);

    if (t176 != -11LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x821 = 0;
	int64_t x822 = 247379018118784LL;
	int32_t x823 = INT32_MIN;
	int32_t x824 = INT32_MIN;
	volatile int64_t t177 = -28653845LL;

    t177 = (((x821/x822)-x823)+x824);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x826 = 43;
	uint16_t x827 = 485U;
	uint16_t x828 = 187U;
	int32_t t178 = -2214841;

    t178 = (((x825/x826)-x827)+x828);

    if (t178 != -1060) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x829 = -1;
	static int8_t x830 = INT8_MIN;
	int8_t x831 = INT8_MIN;
	uint16_t x832 = 16U;
	int32_t t179 = -15;

    t179 = (((x829/x830)-x831)+x832);

    if (t179 != 144) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x833 = -49784347LL;
	uint64_t x834 = 81194LLU;
	int32_t x835 = INT32_MIN;
	int8_t x836 = INT8_MIN;
	uint64_t t180 = 56LLU;

    t180 = (((x833/x834)-x835)+x836);

    if (t180 != 227195586329490LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x837 = 2U;
	uint16_t x838 = UINT16_MAX;
	volatile uint32_t x839 = 12U;
	uint64_t x840 = 8232981LLU;

    t181 = (((x837/x838)-x839)+x840);

    if (t181 != 4303200265LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x845 = INT32_MIN;
	volatile int8_t x846 = INT8_MIN;
	static uint8_t x847 = 0U;
	static volatile int8_t x848 = INT8_MIN;
	int32_t t182 = -606438;

    t182 = (((x845/x846)-x847)+x848);

    if (t182 != 16777088) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x849 = 12144;
	static volatile uint16_t x850 = 15U;
	int64_t x851 = 823LL;

    t183 = (((x849/x850)-x851)+x852);

    if (t183 != -142LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x853 = UINT32_MAX;
	int16_t x854 = 6;
	int8_t x856 = -1;
	uint32_t t184 = 4003451U;

    t184 = (((x853/x854)-x855)+x856);

    if (t184 != 715827626U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x865 = INT16_MAX;
	int8_t x866 = INT8_MAX;
	int16_t x868 = INT16_MIN;
	int64_t t185 = -1LL;

    t185 = (((x865/x866)-x867)+x868);

    if (t185 != -1420853974861701882LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x869 = 1;
	int32_t x870 = INT32_MAX;
	static int8_t x871 = INT8_MIN;
	volatile int32_t t186 = -6273;

    t186 = (((x869/x870)-x871)+x872);

    if (t186 != 128) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x873 = INT16_MIN;
	int64_t x874 = INT64_MIN;
	int32_t x876 = INT32_MIN;

    t187 = (((x873/x874)-x875)+x876);

    if (t187 != -2147450880LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x877 = 175954U;
	volatile int16_t x878 = INT16_MAX;
	uint64_t x880 = 1952LLU;
	uint64_t t188 = 202977381530548617LLU;

    t188 = (((x877/x878)-x879)+x880);

    if (t188 != 1988LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x881 = 14U;
	int8_t x882 = INT8_MAX;
	static int8_t x883 = INT8_MAX;
	uint32_t t189 = 491320397U;

    t189 = (((x881/x882)-x883)+x884);

    if (t189 != 4294967168U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x885 = INT8_MAX;
	volatile uint64_t t190 = 774448830117385LLU;

    t190 = (((x885/x886)-x887)+x888);

    if (t190 != 18446744041507882476LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x889 = -17;
	int64_t x890 = -1LL;
	uint16_t x891 = 9U;
	int32_t x892 = INT32_MIN;
	volatile int64_t t191 = 630LL;

    t191 = (((x889/x890)-x891)+x892);

    if (t191 != -2147483640LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x894 = -1;
	int32_t x896 = 1;

    t192 = (((x893/x894)-x895)+x896);

    if (t192 != 32770) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x897 = INT32_MIN;
	uint64_t x899 = 7948130077398649LLU;
	uint64_t x900 = 4042727LLU;
	volatile uint64_t t193 = 15032334345LLU;

    t193 = (((x897/x898)-x899)+x900);

    if (t193 != 18438795943636261230LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x901 = 9123U;
	int8_t x902 = INT8_MIN;
	uint8_t x903 = UINT8_MAX;
	int32_t x904 = 160644;
	volatile uint32_t t194 = 1022U;

    t194 = (((x901/x902)-x903)+x904);

    if (t194 != 160389U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x909 = 1U;
	uint64_t x912 = 35101630LLU;
	uint64_t t195 = 3LLU;

    t195 = (((x909/x910)-x911)+x912);

    if (t195 != 35101630LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x917 = 5U;
	uint32_t x919 = UINT32_MAX;
	static int16_t x920 = INT16_MAX;
	volatile uint32_t t196 = 1315410670U;

    t196 = (((x917/x918)-x919)+x920);

    if (t196 != 32763U) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint8_t x923 = 2U;
	int8_t x924 = INT8_MIN;
	static uint32_t t197 = 1361720940U;

    t197 = (((x921/x922)-x923)+x924);

    if (t197 != 4294967166U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x929 = 3883;
	volatile int32_t x930 = INT32_MIN;
	volatile int16_t x931 = INT16_MIN;
	static int32_t t198 = 0;

    t198 = (((x929/x930)-x931)+x932);

    if (t198 != 98303) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x933 = -5455;
	static uint32_t x935 = UINT32_MAX;
	volatile uint64_t t199 = 38474069520767546LLU;

    t199 = (((x933/x934)-x935)+x936);

    if (t199 != 994845633695LLU) { NG(); } else { ; }
	
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

