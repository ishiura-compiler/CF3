
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

static int16_t x3 = INT16_MAX;
uint64_t x4 = 24131627262LLU;
volatile int32_t t1 = 29293;
static uint32_t x9 = UINT32_MAX;
int8_t x14 = -1;
static int32_t t3 = -99454356;
volatile uint8_t x28 = UINT8_MAX;
static int32_t t6 = -110104;
static int64_t x32 = 13148786LL;
volatile int32_t t7 = -1;
int64_t x37 = INT64_MAX;
volatile int16_t x39 = INT16_MAX;
int32_t x40 = 4;
static uint64_t x43 = 58385769728633LLU;
int8_t x47 = -1;
int32_t t11 = -4;
int64_t x49 = INT64_MIN;
volatile int32_t x51 = INT32_MAX;
static volatile int32_t t12 = 83024791;
int8_t x54 = INT8_MIN;
static int32_t x59 = INT32_MIN;
int32_t t15 = -2033090;
uint8_t x68 = 9U;
volatile int32_t t16 = -50;
uint16_t x72 = 1637U;
volatile int32_t t17 = 297488344;
uint8_t x79 = 5U;
int32_t t19 = -3490;
int32_t x85 = -18130300;
int32_t x90 = -1;
int32_t t22 = -248043504;
int64_t x96 = 1378579522867280LL;
int32_t x103 = 7;
int32_t t25 = -9725;
uint8_t x109 = UINT8_MAX;
int64_t x110 = INT64_MAX;
volatile int16_t x112 = -1;
int8_t x118 = -1;
int32_t x120 = -221124;
static int64_t x122 = INT64_MAX;
uint16_t x123 = 3850U;
volatile int16_t x125 = INT16_MAX;
int8_t x132 = -1;
volatile int8_t x141 = -7;
int8_t x143 = INT8_MIN;
static uint64_t x147 = UINT64_MAX;
int32_t t36 = -9770846;
int64_t x150 = -186LL;
int16_t x152 = INT16_MIN;
int32_t t37 = 2806320;
int32_t x155 = INT32_MAX;
volatile int16_t x156 = INT16_MIN;
int32_t t39 = 5665;
uint16_t x165 = 895U;
static volatile int8_t x169 = 0;
volatile int8_t x170 = INT8_MIN;
int8_t x172 = -3;
volatile uint32_t x175 = 9697U;
static int16_t x179 = INT16_MIN;
uint64_t x197 = 831296412601LLU;
int32_t x200 = -101664266;
static uint8_t x201 = 3U;
int8_t x204 = INT8_MIN;
int32_t t51 = -443048799;
volatile int32_t t52 = -66845743;
uint32_t x217 = UINT32_MAX;
int8_t x219 = INT8_MIN;
int8_t x226 = -1;
int32_t t56 = 7;
static int32_t x231 = 7205;
int32_t t57 = 61;
static int8_t x233 = -1;
int8_t x237 = INT8_MIN;
int32_t x241 = 2709;
static volatile int32_t x242 = INT32_MIN;
uint16_t x245 = 0U;
uint64_t x249 = 2479676820204LLU;
uint32_t x251 = 229794756U;
int64_t x261 = -1LL;
static volatile uint32_t x267 = 12611818U;
int8_t x270 = INT8_MAX;
uint64_t x276 = UINT64_MAX;
uint32_t x280 = UINT32_MAX;
static int32_t t70 = 135;
int32_t t72 = 95;
uint64_t x293 = UINT64_MAX;
static int32_t x296 = -1;
int32_t x300 = -1;
int32_t t75 = 76;
int32_t x305 = INT32_MIN;
uint16_t x311 = UINT16_MAX;
int32_t t78 = -139;
uint8_t x320 = 24U;
int64_t x323 = INT64_MAX;
int32_t x324 = 0;
int64_t x331 = INT64_MAX;
uint64_t x332 = 9034798277611615640LLU;
static int8_t x333 = INT8_MIN;
volatile uint32_t x349 = UINT32_MAX;
static uint32_t x350 = 286U;
volatile int32_t t87 = -57;
static int32_t x354 = -17;
volatile int32_t t89 = -11278;
volatile int8_t x370 = INT8_MAX;
int32_t x371 = -1;
int8_t x376 = INT8_MIN;
static uint32_t x379 = 458331U;
int32_t x387 = INT32_MIN;
int8_t x388 = -4;
int32_t t97 = -13;
int64_t x395 = INT64_MIN;
int16_t x397 = INT16_MIN;
int32_t x399 = INT32_MIN;
int64_t x400 = INT64_MAX;
uint64_t x401 = 10374550920LLU;
volatile int32_t t101 = 2;
static int32_t t102 = 295765;
int32_t x413 = -1;
int8_t x434 = INT8_MIN;
volatile int64_t x435 = -1LL;
int32_t x439 = -1;
volatile uint32_t x440 = UINT32_MAX;
volatile int16_t x447 = -1;
static volatile int8_t x456 = -4;
int8_t x457 = INT8_MIN;
volatile int32_t x459 = INT32_MIN;
static int16_t x461 = 153;
volatile uint16_t x468 = 13612U;
int16_t x474 = INT16_MIN;
int32_t t119 = 5259282;
int32_t t122 = 509818346;
int64_t x496 = INT64_MIN;
uint64_t x502 = 4190028LLU;
int32_t x508 = 4257;
volatile int32_t t127 = 52;
int32_t t128 = -35738;
int64_t x518 = 15662LL;
int64_t x520 = -3992251LL;
int16_t x525 = INT16_MAX;
int32_t x531 = 382;
uint16_t x536 = 13591U;
static uint8_t x544 = 68U;
int64_t x546 = INT64_MAX;
int32_t x549 = 4695;
int8_t x552 = INT8_MIN;
int8_t x553 = 32;
uint32_t x564 = UINT32_MAX;
int32_t x569 = -8348425;
int32_t x575 = INT32_MIN;
int16_t x577 = -119;
static int64_t x579 = -1LL;
int32_t x585 = 0;
static int32_t t147 = 121;
int32_t x608 = -1;
int8_t x610 = INT8_MIN;
static int64_t x613 = -1LL;
int32_t x614 = 153384400;
int16_t x620 = INT16_MIN;
static uint8_t x622 = 86U;
int32_t t157 = -95;
static int32_t t158 = -661085;
static int16_t x637 = INT16_MAX;
volatile int32_t x639 = -1;
volatile uint16_t x649 = UINT16_MAX;
volatile int64_t x653 = INT64_MIN;
static volatile int64_t x656 = -4423558033135573LL;
static int32_t x662 = 307;
volatile int32_t t166 = 1025;
int8_t x672 = INT8_MIN;
uint64_t x675 = UINT64_MAX;
int64_t x690 = -1LL;
int8_t x695 = 41;
static volatile int32_t t173 = -438236193;
static uint16_t x704 = UINT16_MAX;
int32_t t175 = 18;
int64_t x712 = INT64_MIN;
volatile int16_t x716 = INT16_MIN;
int32_t t178 = 0;
static int16_t x720 = 0;
uint16_t x721 = UINT16_MAX;
volatile int16_t x722 = INT16_MAX;
static int32_t t182 = -893;
volatile int32_t t184 = -3684326;
static int32_t x741 = INT32_MIN;
static uint32_t x746 = 1880U;
static int32_t x749 = 21179;
volatile uint64_t x750 = UINT64_MAX;
static int16_t x753 = INT16_MAX;
int16_t x756 = -1;
int32_t x759 = -3182;
volatile int32_t t190 = -64273318;
static uint64_t x768 = 8133291902618965056LLU;
int32_t t192 = -2;
int64_t x775 = 16315552742LL;
static int32_t x779 = INT32_MIN;
volatile uint16_t x783 = 17U;
volatile int32_t t196 = -40523;
int32_t x790 = INT32_MIN;
int8_t x793 = -1;
volatile int32_t t199 = 50340844;


void f0(void) {
    	int8_t x1 = -11;
	static volatile int32_t x2 = 207513055;
	volatile int32_t t0 = 7;

    t0 = ((x1==(x2>x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MIN;
	int8_t x7 = -1;
	uint32_t x8 = 94635912U;

    t1 = ((x5==(x6>x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x10 = 0;
	int8_t x11 = -1;
	uint32_t x12 = 721094881U;
	int32_t t2 = -114330964;

    t2 = ((x9==(x10>x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	uint64_t x15 = 3621018558LLU;
	uint16_t x16 = UINT16_MAX;

    t3 = ((x13==(x14>x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MAX;
	static int64_t x20 = INT64_MIN;
	int32_t t4 = 19275;

    t4 = ((x17==(x18>x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = 98U;
	int64_t x22 = -7LL;
	volatile uint16_t x23 = 738U;
	volatile int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -1044777986;

    t5 = ((x21==(x22>x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 4058296LLU;
	static int16_t x26 = 480;
	uint16_t x27 = 27876U;

    t6 = ((x25==(x26>x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	int16_t x30 = INT16_MIN;
	static uint32_t x31 = UINT32_MAX;

    t7 = ((x29==(x30>x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	static volatile int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -31131;

    t8 = ((x33==(x34>x35))>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = INT32_MAX;
	volatile int32_t t9 = -7880;

    t9 = ((x37==(x38>x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 89U;
	int32_t x42 = INT32_MIN;
	int16_t x44 = 1;
	volatile int32_t t10 = -1282;

    t10 = ((x41==(x42>x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	static int16_t x46 = -6;
	volatile uint32_t x48 = 68981U;

    t11 = ((x45==(x46>x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x50 = 11U;
	uint16_t x52 = 4762U;

    t12 = ((x49==(x50>x51))>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 990565;
	volatile int32_t x55 = INT32_MIN;
	uint32_t x56 = 3U;
	static int32_t t13 = 3;

    t13 = ((x53==(x54>x55))>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MAX;
	int64_t x58 = 10930340582115LL;
	static volatile uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = -15;

    t14 = ((x57==(x58>x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 180LL;
	int64_t x62 = -21152677LL;
	int16_t x63 = INT16_MAX;
	int16_t x64 = -4872;

    t15 = ((x61==(x62>x63))>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = -7;
	int64_t x66 = INT64_MIN;
	int16_t x67 = -1;

    t16 = ((x65==(x66>x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	uint16_t x70 = 27242U;
	static uint64_t x71 = 993852837LLU;

    t17 = ((x69==(x70>x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = INT16_MIN;
	static uint32_t x74 = 3156554U;
	static int64_t x75 = INT64_MAX;
	static volatile int16_t x76 = 15907;
	int32_t t18 = -152323;

    t18 = ((x73==(x74>x75))>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MAX;
	int16_t x78 = 0;
	volatile int8_t x80 = INT8_MIN;

    t19 = ((x77==(x78>x79))>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	static int16_t x82 = -10209;
	int32_t x83 = 16675;
	static uint16_t x84 = 153U;
	int32_t t20 = -59;

    t20 = ((x81==(x82>x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = INT64_MIN;
	uint16_t x87 = 177U;
	uint16_t x88 = 846U;
	int32_t t21 = -433;

    t21 = ((x85==(x86>x87))>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 251U;
	static int64_t x91 = INT64_MIN;
	int32_t x92 = 0;

    t22 = ((x89==(x90>x91))>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	int16_t x94 = -1;
	int32_t x95 = INT32_MIN;
	volatile int32_t t23 = -41895;

    t23 = ((x93==(x94>x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MAX;
	static int16_t x98 = -53;
	int8_t x99 = 9;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 8318;

    t24 = ((x97==(x98>x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	uint64_t x102 = 49569357916607LLU;
	int32_t x104 = 14425;

    t25 = ((x101==(x102>x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -941;
	uint64_t x106 = UINT64_MAX;
	int16_t x107 = INT16_MAX;
	int32_t x108 = -1;
	volatile int32_t t26 = 58;

    t26 = ((x105==(x106>x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x111 = -2453417;
	int32_t t27 = -3238;

    t27 = ((x109==(x110>x111))>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x113 = 555U;
	volatile int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	int64_t x116 = 1085063LL;
	int32_t t28 = 58323001;

    t28 = ((x113==(x114>x115))>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int64_t x119 = INT64_MAX;
	volatile int32_t t29 = -164727;

    t29 = ((x117==(x118>x119))>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	volatile uint64_t x124 = UINT64_MAX;
	int32_t t30 = -85;

    t30 = ((x121==(x122>x123))>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x126 = INT16_MIN;
	volatile int32_t x127 = 63;
	volatile int32_t x128 = INT32_MAX;
	int32_t t31 = 540619399;

    t31 = ((x125==(x126>x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -648;
	int32_t x130 = INT32_MIN;
	volatile uint8_t x131 = 10U;
	static int32_t t32 = 0;

    t32 = ((x129==(x130>x131))>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	uint64_t x134 = UINT64_MAX;
	int8_t x135 = 0;
	static int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -209;

    t33 = ((x133==(x134>x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = UINT8_MAX;
	uint32_t x138 = 100238438U;
	int16_t x139 = INT16_MIN;
	static int32_t x140 = 170;
	int32_t t34 = 104;

    t34 = ((x137==(x138>x139))>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x142 = UINT32_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t35 = -1004136317;

    t35 = ((x141==(x142>x143))>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = INT32_MIN;
	int16_t x146 = INT16_MIN;
	int16_t x148 = 1;

    t36 = ((x145==(x146>x147))>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 43850168282433291LLU;
	volatile uint8_t x151 = 1U;

    t37 = ((x149==(x150>x151))>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 1;
	int8_t x154 = INT8_MIN;
	volatile int32_t t38 = -4076;

    t38 = ((x153==(x154>x155))>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	static uint16_t x158 = 7U;
	volatile int32_t x159 = INT32_MAX;
	volatile int32_t x160 = -2796200;

    t39 = ((x157==(x158>x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = UINT8_MAX;
	static int64_t x162 = -1LL;
	uint8_t x163 = 6U;
	uint32_t x164 = 203055U;
	int32_t t40 = 132;

    t40 = ((x161==(x162>x163))>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MAX;
	static int16_t x167 = -1;
	uint32_t x168 = 96022808U;
	volatile int32_t t41 = 118180;

    t41 = ((x165==(x166>x167))>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x171 = 112U;
	static int32_t t42 = 937397864;

    t42 = ((x169==(x170>x171))>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x173 = UINT32_MAX;
	int8_t x174 = INT8_MIN;
	int8_t x176 = -1;
	static int32_t t43 = -995370;

    t43 = ((x173==(x174>x175))>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int16_t x178 = -1;
	volatile uint64_t x180 = 68LLU;
	volatile int32_t t44 = 191;

    t44 = ((x177==(x178>x179))>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x181 = 4814028U;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = -1;
	int16_t x184 = INT16_MIN;
	static int32_t t45 = -605557;

    t45 = ((x181==(x182>x183))>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 25U;
	uint64_t x186 = 16500LLU;
	volatile int8_t x187 = INT8_MIN;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -16170148;

    t46 = ((x185==(x186>x187))>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -1;
	volatile uint8_t x190 = 84U;
	int16_t x191 = 65;
	int32_t x192 = -10175;
	static int32_t t47 = 941587570;

    t47 = ((x189==(x190>x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	int8_t x194 = -2;
	uint16_t x195 = 122U;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -5949052;

    t48 = ((x193==(x194>x195))>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = INT8_MIN;
	static volatile int16_t x199 = 25;
	int32_t t49 = 55;

    t49 = ((x197==(x198>x199))>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = -1;
	int32_t x203 = 1;
	static volatile int32_t t50 = 1849272;

    t50 = ((x201==(x202>x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	volatile int16_t x206 = -286;
	volatile int8_t x207 = INT8_MIN;
	volatile int16_t x208 = 155;

    t51 = ((x205==(x206>x207))>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	static uint16_t x210 = 1988U;
	uint64_t x211 = 27LLU;
	volatile int64_t x212 = INT64_MIN;

    t52 = ((x209==(x210>x211))>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -130136LL;
	int16_t x214 = -627;
	int8_t x215 = 2;
	uint8_t x216 = UINT8_MAX;
	int32_t t53 = -776515233;

    t53 = ((x213==(x214>x215))>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x218 = UINT32_MAX;
	volatile int32_t x220 = -29642331;
	int32_t t54 = -30344184;

    t54 = ((x217==(x218>x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	int64_t x222 = INT64_MAX;
	uint64_t x223 = UINT64_MAX;
	volatile int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -2713;

    t55 = ((x221==(x222>x223))>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x225 = UINT64_MAX;
	static int8_t x227 = INT8_MIN;
	int64_t x228 = -4583675931624542LL;

    t56 = ((x225==(x226>x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 28U;
	int16_t x230 = INT16_MAX;
	uint8_t x232 = UINT8_MAX;

    t57 = ((x229==(x230>x231))>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x234 = 10;
	int8_t x235 = 1;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = -8588;

    t58 = ((x233==(x234>x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x238 = UINT64_MAX;
	int8_t x239 = 5;
	int32_t x240 = -1;
	volatile int32_t t59 = 10911;

    t59 = ((x237==(x238>x239))>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x243 = 2300U;
	uint32_t x244 = 0U;
	static volatile int32_t t60 = -70;

    t60 = ((x241==(x242>x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x246 = -11829;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = UINT64_MAX;
	static int32_t t61 = 6438;

    t61 = ((x245==(x246>x247))>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x250 = INT32_MIN;
	int16_t x252 = 1;
	int32_t t62 = 22197;

    t62 = ((x249==(x250>x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = -1LL;
	uint64_t x254 = 1976031749LLU;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MAX;
	int32_t t63 = -11;

    t63 = ((x253==(x254>x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	static volatile uint64_t x258 = UINT64_MAX;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 49;

    t64 = ((x257==(x258>x259))>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x262 = 35885080660LLU;
	uint8_t x263 = 9U;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -293;

    t65 = ((x261==(x262>x263))>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	static volatile int16_t x266 = -1;
	volatile int16_t x268 = 19;
	volatile int32_t t66 = -1;

    t66 = ((x265==(x266>x267))>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1LL;
	int16_t x271 = INT16_MAX;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 694447761;

    t67 = ((x269==(x270>x271))>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = INT16_MAX;
	int16_t x274 = -1;
	volatile int16_t x275 = INT16_MIN;
	volatile int32_t t68 = 0;

    t68 = ((x273==(x274>x275))>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = INT32_MAX;
	uint64_t x278 = 0LLU;
	static int8_t x279 = INT8_MAX;
	volatile int32_t t69 = -4043788;

    t69 = ((x277==(x278>x279))>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 3718143LLU;
	int16_t x282 = -1;
	static volatile uint64_t x283 = UINT64_MAX;
	uint32_t x284 = 110511U;

    t70 = ((x281==(x282>x283))>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	uint8_t x286 = 95U;
	int64_t x287 = -375LL;
	int64_t x288 = 59LL;
	int32_t t71 = -1;

    t71 = ((x285==(x286>x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	int32_t x290 = -1;
	volatile int8_t x291 = -1;
	int64_t x292 = -1LL;

    t72 = ((x289==(x290>x291))>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = 5661;
	int64_t x295 = INT64_MIN;
	int32_t t73 = -105031;

    t73 = ((x293==(x294>x295))>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 800625831667LLU;
	uint64_t x298 = 911933649090794LLU;
	int64_t x299 = 2669LL;
	int32_t t74 = -404869;

    t74 = ((x297==(x298>x299))>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = INT16_MIN;
	uint32_t x302 = 520949U;
	static int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MIN;

    t75 = ((x301==(x302>x303))>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = -1;
	static volatile int16_t x307 = INT16_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t76 = -85621984;

    t76 = ((x305==(x306>x307))>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 30450U;
	static int32_t x310 = INT32_MIN;
	int16_t x312 = -6421;
	volatile int32_t t77 = 812864;

    t77 = ((x309==(x310>x311))>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -1;
	volatile uint64_t x314 = UINT64_MAX;
	int32_t x315 = -1;
	uint8_t x316 = 0U;

    t78 = ((x313==(x314>x315))>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	static int32_t x318 = INT32_MIN;
	volatile uint32_t x319 = UINT32_MAX;
	int32_t t79 = 105790;

    t79 = ((x317==(x318>x319))>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = INT32_MAX;
	volatile int64_t x322 = 1252471632857622LL;
	int32_t t80 = -1455;

    t80 = ((x321==(x322>x323))>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int64_t x326 = -1LL;
	volatile int32_t x327 = INT32_MAX;
	int16_t x328 = -14473;
	volatile int32_t t81 = -875;

    t81 = ((x325==(x326>x327))>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	static volatile int64_t x330 = INT64_MIN;
	static volatile int32_t t82 = 9321649;

    t82 = ((x329==(x330>x331))>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x334 = INT8_MIN;
	static int16_t x335 = -1;
	uint64_t x336 = 450393467809536LLU;
	int32_t t83 = 4412794;

    t83 = ((x333==(x334>x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x337 = 497U;
	volatile uint64_t x338 = 59641843238LLU;
	int64_t x339 = 1LL;
	static int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -8;

    t84 = ((x337==(x338>x339))>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = -18;
	int64_t x342 = -1LL;
	uint8_t x343 = 1U;
	static int32_t x344 = INT32_MIN;
	int32_t t85 = 115775525;

    t85 = ((x341==(x342>x343))>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 179306655684875765LLU;
	static uint64_t x346 = UINT64_MAX;
	static uint64_t x347 = 929414667882244965LLU;
	int32_t x348 = INT32_MAX;
	volatile int32_t t86 = 55639193;

    t86 = ((x345==(x346>x347))>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x351 = 1777;
	uint8_t x352 = 49U;

    t87 = ((x349==(x350>x351))>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = -1LL;
	int32_t x355 = -263873705;
	int8_t x356 = 0;
	volatile int32_t t88 = -115187;

    t88 = ((x353==(x354>x355))>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = 1;
	static int64_t x358 = INT64_MIN;
	int64_t x359 = -1LL;
	int8_t x360 = INT8_MIN;

    t89 = ((x357==(x358>x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = 111095;
	int16_t x362 = -13415;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MAX;
	volatile int32_t t90 = -22;

    t90 = ((x361==(x362>x363))>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	int64_t x366 = -1LL;
	static volatile uint32_t x367 = 22760934U;
	int64_t x368 = INT64_MIN;
	int32_t t91 = -19771740;

    t91 = ((x365==(x366>x367))>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	volatile int64_t x372 = INT64_MAX;
	volatile int32_t t92 = 1181645;

    t92 = ((x369==(x370>x371))>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -360778429;
	volatile int8_t x374 = INT8_MIN;
	int32_t x375 = 101711344;
	static int32_t t93 = -283888;

    t93 = ((x373==(x374>x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 28U;
	uint16_t x378 = 2U;
	volatile uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = -1029435;

    t94 = ((x377==(x378>x379))>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x381 = INT64_MIN;
	uint16_t x382 = UINT16_MAX;
	volatile int32_t x383 = -1;
	static int64_t x384 = INT64_MIN;
	volatile int32_t t95 = -15630;

    t95 = ((x381==(x382>x383))>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MAX;
	static uint8_t x386 = 5U;
	volatile int32_t t96 = -64;

    t96 = ((x385==(x386>x387))>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x389 = 282U;
	static int32_t x390 = INT32_MIN;
	uint16_t x391 = 2983U;
	int64_t x392 = -1LL;

    t97 = ((x389==(x390>x391))>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 2LLU;
	int32_t x394 = -700954271;
	uint64_t x396 = UINT64_MAX;
	int32_t t98 = 57991020;

    t98 = ((x393==(x394>x395))>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x398 = INT16_MIN;
	static volatile int32_t t99 = 33648;

    t99 = ((x397==(x398>x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x402 = -477275425LL;
	int64_t x403 = -13389783LL;
	int8_t x404 = 53;
	static int32_t t100 = -30928623;

    t100 = ((x401==(x402>x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	volatile int32_t x406 = -5166;
	int64_t x407 = INT64_MAX;
	int16_t x408 = 2;

    t101 = ((x405==(x406>x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 6U;
	int32_t x410 = INT32_MIN;
	volatile uint8_t x411 = UINT8_MAX;
	int8_t x412 = 1;

    t102 = ((x409==(x410>x411))>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x414 = -481;
	int32_t x415 = 359408;
	volatile uint32_t x416 = 1040760536U;
	volatile int32_t t103 = 50;

    t103 = ((x413==(x414>x415))>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = INT32_MAX;
	static int8_t x418 = INT8_MIN;
	uint64_t x419 = UINT64_MAX;
	volatile uint8_t x420 = UINT8_MAX;
	volatile int32_t t104 = -1;

    t104 = ((x417==(x418>x419))>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	int16_t x422 = 9095;
	uint64_t x423 = 11679880286LLU;
	uint8_t x424 = 1U;
	int32_t t105 = 53;

    t105 = ((x421==(x422>x423))>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 23987U;
	int32_t x426 = INT32_MIN;
	volatile uint32_t x427 = 248781969U;
	static uint64_t x428 = UINT64_MAX;
	volatile int32_t t106 = -483;

    t106 = ((x425==(x426>x427))>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	static int8_t x430 = -42;
	volatile int16_t x431 = 1;
	int8_t x432 = INT8_MIN;
	volatile int32_t t107 = -100393669;

    t107 = ((x429==(x430>x431))>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -1;
	static volatile uint8_t x436 = 11U;
	volatile int32_t t108 = 249152;

    t108 = ((x433==(x434>x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x437 = 100588102098242078LLU;
	static int64_t x438 = -1LL;
	int32_t t109 = -3197;

    t109 = ((x437==(x438>x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MAX;
	static uint64_t x442 = UINT64_MAX;
	static uint8_t x443 = UINT8_MAX;
	int8_t x444 = -1;
	int32_t t110 = 14385;

    t110 = ((x441==(x442>x443))>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	static int16_t x446 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	volatile int32_t t111 = -7381;

    t111 = ((x445==(x446>x447))>x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 1095725U;
	volatile int32_t x450 = INT32_MIN;
	volatile int64_t x451 = 158778LL;
	static int32_t x452 = INT32_MIN;
	int32_t t112 = -21;

    t112 = ((x449==(x450>x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	uint8_t x454 = 19U;
	int16_t x455 = -1;
	int32_t t113 = 865288;

    t113 = ((x453==(x454>x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x458 = UINT64_MAX;
	uint32_t x460 = UINT32_MAX;
	volatile int32_t t114 = 1;

    t114 = ((x457==(x458>x459))>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = 5139003;
	int16_t x463 = INT16_MAX;
	int16_t x464 = INT16_MIN;
	int32_t t115 = -152;

    t115 = ((x461==(x462>x463))>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x465 = 341987221696690194LLU;
	int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MIN;
	static volatile int32_t t116 = 72785381;

    t116 = ((x465==(x466>x467))>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -16944544LL;
	int32_t x470 = INT32_MIN;
	volatile int64_t x471 = -3063134902LL;
	static int8_t x472 = 33;
	volatile int32_t t117 = 1150;

    t117 = ((x469==(x470>x471))>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 7603210U;
	int32_t x475 = -187542438;
	int64_t x476 = INT64_MAX;
	volatile int32_t t118 = 247672;

    t118 = ((x473==(x474>x475))>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -1;
	static uint64_t x478 = UINT64_MAX;
	uint8_t x479 = UINT8_MAX;
	int32_t x480 = 118;

    t119 = ((x477==(x478>x479))>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = INT16_MIN;
	int8_t x482 = INT8_MIN;
	int8_t x483 = 1;
	uint8_t x484 = UINT8_MAX;
	int32_t t120 = 15310;

    t120 = ((x481==(x482>x483))>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	static int32_t x486 = INT32_MIN;
	int16_t x487 = INT16_MAX;
	uint16_t x488 = UINT16_MAX;
	int32_t t121 = 195278;

    t121 = ((x485==(x486>x487))>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -1LL;
	uint64_t x490 = 1041760482LLU;
	uint64_t x491 = UINT64_MAX;
	uint16_t x492 = UINT16_MAX;

    t122 = ((x489==(x490>x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MAX;
	int32_t x494 = INT32_MIN;
	volatile int32_t x495 = INT32_MIN;
	volatile int32_t t123 = -26220;

    t123 = ((x493==(x494>x495))>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x497 = -1;
	volatile int32_t x498 = -1;
	volatile int64_t x499 = INT64_MIN;
	uint64_t x500 = UINT64_MAX;
	int32_t t124 = -247;

    t124 = ((x497==(x498>x499))>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	int32_t x503 = -1;
	int8_t x504 = -2;
	int32_t t125 = 68;

    t125 = ((x501==(x502>x503))>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MAX;
	int8_t x506 = -1;
	static volatile int32_t x507 = INT32_MAX;
	int32_t t126 = 383532368;

    t126 = ((x505==(x506>x507))>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	uint64_t x510 = 4LLU;
	uint8_t x511 = 46U;
	int32_t x512 = 2004;

    t127 = ((x509==(x510>x511))>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = 1479;
	static int32_t x514 = INT32_MAX;
	int32_t x515 = 98;
	int32_t x516 = 28527;

    t128 = ((x513==(x514>x515))>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = 51447285126878187LL;
	uint64_t x519 = UINT64_MAX;
	static int32_t t129 = 85792;

    t129 = ((x517==(x518>x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -1;
	int16_t x522 = INT16_MIN;
	static int16_t x523 = -72;
	uint64_t x524 = 179782892804778LLU;
	static volatile int32_t t130 = -1;

    t130 = ((x521==(x522>x523))>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = -1;
	int16_t x527 = 1;
	int16_t x528 = INT16_MIN;
	static int32_t t131 = 0;

    t131 = ((x525==(x526>x527))>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	uint32_t x530 = 7154U;
	int32_t x532 = INT32_MIN;
	volatile int32_t t132 = 2509790;

    t132 = ((x529==(x530>x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MAX;
	int32_t x534 = -2;
	int8_t x535 = -20;
	volatile int32_t t133 = -92753640;

    t133 = ((x533==(x534>x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = -1;
	static int16_t x538 = INT16_MAX;
	int32_t x539 = INT32_MAX;
	volatile int64_t x540 = INT64_MIN;
	static int32_t t134 = 1037547539;

    t134 = ((x537==(x538>x539))>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = UINT16_MAX;
	int8_t x542 = -1;
	volatile int16_t x543 = INT16_MAX;
	int32_t t135 = 0;

    t135 = ((x541==(x542>x543))>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MAX;
	volatile int64_t x547 = INT64_MIN;
	uint32_t x548 = 17U;
	int32_t t136 = 1070;

    t136 = ((x545==(x546>x547))>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x550 = INT16_MIN;
	int16_t x551 = -15737;
	volatile int32_t t137 = 15863;

    t137 = ((x549==(x550>x551))>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = -1;
	volatile uint16_t x555 = 7495U;
	uint32_t x556 = 12160337U;
	int32_t t138 = -2;

    t138 = ((x553==(x554>x555))>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	int32_t x558 = -6964333;
	uint8_t x559 = 0U;
	volatile uint64_t x560 = 8584745LLU;
	volatile int32_t t139 = 0;

    t139 = ((x557==(x558>x559))>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 11997185U;
	int64_t x562 = 71995711723791635LL;
	volatile uint16_t x563 = UINT16_MAX;
	static volatile int32_t t140 = 212;

    t140 = ((x561==(x562>x563))>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x565 = 29541U;
	int32_t x566 = -1;
	int8_t x567 = 3;
	int16_t x568 = -14019;
	int32_t t141 = 61;

    t141 = ((x565==(x566>x567))>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x570 = INT8_MIN;
	int8_t x571 = INT8_MIN;
	static int8_t x572 = 41;
	volatile int32_t t142 = -162;

    t142 = ((x569==(x570>x571))>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x573 = 1116978823954534035LLU;
	volatile uint16_t x574 = UINT16_MAX;
	int16_t x576 = 0;
	int32_t t143 = 42;

    t143 = ((x573==(x574>x575))>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x578 = 3287126U;
	int64_t x580 = 9447251554166LL;
	int32_t t144 = -3244;

    t144 = ((x577==(x578>x579))>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = -1LL;
	uint32_t x582 = UINT32_MAX;
	volatile int16_t x583 = INT16_MAX;
	int8_t x584 = INT8_MIN;
	volatile int32_t t145 = -224;

    t145 = ((x581==(x582>x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x586 = UINT16_MAX;
	int32_t x587 = -1;
	static int32_t x588 = INT32_MIN;
	int32_t t146 = 1;

    t146 = ((x585==(x586>x587))>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -4882262274LL;
	volatile int64_t x590 = INT64_MIN;
	int16_t x591 = -1;
	int8_t x592 = -7;

    t147 = ((x589==(x590>x591))>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = INT32_MAX;
	volatile uint8_t x594 = 48U;
	int32_t x595 = -3;
	static int16_t x596 = -6829;
	int32_t t148 = -4;

    t148 = ((x593==(x594>x595))>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x597 = INT8_MIN;
	static uint8_t x598 = 7U;
	uint16_t x599 = UINT16_MAX;
	volatile int8_t x600 = 5;
	volatile int32_t t149 = 1235486;

    t149 = ((x597==(x598>x599))>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	volatile int32_t x602 = -1;
	int64_t x603 = -21851103510634999LL;
	volatile uint8_t x604 = UINT8_MAX;
	volatile int32_t t150 = -358;

    t150 = ((x601==(x602>x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -9404;
	uint8_t x606 = UINT8_MAX;
	uint8_t x607 = 3U;
	int32_t t151 = 8;

    t151 = ((x605==(x606>x607))>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 9071U;
	int32_t x611 = -43816252;
	uint32_t x612 = UINT32_MAX;
	int32_t t152 = -16435;

    t152 = ((x609==(x610>x611))>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x615 = INT8_MIN;
	int8_t x616 = INT8_MAX;
	static int32_t t153 = 811609;

    t153 = ((x613==(x614>x615))>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x617 = 2928760U;
	uint32_t x618 = 40U;
	static uint8_t x619 = 2U;
	int32_t t154 = -5121;

    t154 = ((x617==(x618>x619))>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -2131737781027LL;
	int8_t x623 = -3;
	volatile int16_t x624 = -1;
	int32_t t155 = 496313;

    t155 = ((x621==(x622>x623))>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 144;
	int64_t x626 = -1LL;
	static int64_t x627 = INT64_MIN;
	int16_t x628 = INT16_MIN;
	int32_t t156 = 1680107;

    t156 = ((x625==(x626>x627))>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = 65537556666LL;
	volatile int32_t x630 = 49;
	volatile int64_t x631 = 2089940378LL;
	uint32_t x632 = UINT32_MAX;

    t157 = ((x629==(x630>x631))>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	int64_t x634 = INT64_MIN;
	volatile uint64_t x635 = UINT64_MAX;
	int64_t x636 = 730558LL;

    t158 = ((x633==(x634>x635))>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x638 = 11951;
	uint16_t x640 = 16100U;
	int32_t t159 = -51;

    t159 = ((x637==(x638>x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = INT32_MIN;
	uint32_t x642 = UINT32_MAX;
	static int32_t x643 = INT32_MAX;
	static int64_t x644 = -583070748260LL;
	int32_t t160 = 2;

    t160 = ((x641==(x642>x643))>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = 2;
	uint32_t x646 = 53U;
	int64_t x647 = INT64_MIN;
	int64_t x648 = INT64_MIN;
	static int32_t t161 = -2;

    t161 = ((x645==(x646>x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x650 = -1;
	volatile uint16_t x651 = 28U;
	uint64_t x652 = UINT64_MAX;
	int32_t t162 = 334534;

    t162 = ((x649==(x650>x651))>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = -184862238146963361LL;
	int16_t x655 = INT16_MIN;
	int32_t t163 = 33068;

    t163 = ((x653==(x654>x655))>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = 5395947U;
	int64_t x658 = INT64_MIN;
	volatile uint16_t x659 = 0U;
	volatile int16_t x660 = 126;
	int32_t t164 = -2;

    t164 = ((x657==(x658>x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	int8_t x663 = INT8_MIN;
	volatile uint8_t x664 = 5U;
	int32_t t165 = 1823;

    t165 = ((x661==(x662>x663))>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	uint64_t x666 = 585597863591LLU;
	int16_t x667 = -1;
	uint16_t x668 = 12U;

    t166 = ((x665==(x666>x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = -2310365454026775LL;
	uint32_t x670 = 193U;
	int8_t x671 = INT8_MAX;
	volatile int32_t t167 = 414080570;

    t167 = ((x669==(x670>x671))>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = 8491828743098LL;
	uint8_t x674 = 22U;
	volatile uint16_t x676 = 134U;
	volatile int32_t t168 = 206621086;

    t168 = ((x673==(x674>x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x677 = -5;
	int64_t x678 = -13674039308589LL;
	volatile int32_t x679 = -1;
	volatile int8_t x680 = -61;
	static volatile int32_t t169 = 0;

    t169 = ((x677==(x678>x679))>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 3689258600LLU;
	uint64_t x682 = 5140689LLU;
	static uint8_t x683 = UINT8_MAX;
	int64_t x684 = -1LL;
	int32_t t170 = -915184;

    t170 = ((x681==(x682>x683))>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	static uint32_t x686 = UINT32_MAX;
	int64_t x687 = 80805191094LL;
	static int64_t x688 = -1LL;
	int32_t t171 = -190989;

    t171 = ((x685==(x686>x687))>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 380519148;
	uint8_t x691 = 114U;
	uint64_t x692 = UINT64_MAX;
	static int32_t t172 = 1;

    t172 = ((x689==(x690>x691))>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 787U;
	int64_t x694 = 55520279LL;
	int64_t x696 = INT64_MIN;

    t173 = ((x693==(x694>x695))>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	static int32_t x698 = INT32_MAX;
	int16_t x699 = -11099;
	volatile int64_t x700 = INT64_MAX;
	static int32_t t174 = -3;

    t174 = ((x697==(x698>x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int8_t x701 = 0;
	uint16_t x702 = UINT16_MAX;
	uint32_t x703 = UINT32_MAX;

    t175 = ((x701==(x702>x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -1;
	static uint64_t x706 = UINT64_MAX;
	uint32_t x707 = UINT32_MAX;
	volatile uint32_t x708 = 1424525299U;
	int32_t t176 = -281501;

    t176 = ((x705==(x706>x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	int64_t x710 = INT64_MAX;
	static uint8_t x711 = 45U;
	static volatile int32_t t177 = 972523474;

    t177 = ((x709==(x710>x711))>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint64_t x713 = 388235920257874LLU;
	int8_t x714 = -15;
	uint16_t x715 = UINT16_MAX;

    t178 = ((x713==(x714>x715))>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = UINT32_MAX;
	int16_t x718 = INT16_MAX;
	uint32_t x719 = 711629445U;
	int32_t t179 = -716118824;

    t179 = ((x717==(x718>x719))>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x723 = INT8_MAX;
	int8_t x724 = INT8_MAX;
	int32_t t180 = 6560461;

    t180 = ((x721==(x722>x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x725 = INT16_MAX;
	uint64_t x726 = 688499049LLU;
	int64_t x727 = 3507134032186588LL;
	int8_t x728 = 4;
	int32_t t181 = 2;

    t181 = ((x725==(x726>x727))>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = INT8_MAX;
	int32_t x730 = 27228;
	int16_t x731 = INT16_MIN;
	uint64_t x732 = 43211003878280LLU;

    t182 = ((x729==(x730>x731))>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = 5038;
	uint64_t x734 = 2785684788963LLU;
	int32_t x735 = -726186;
	int16_t x736 = INT16_MIN;
	static int32_t t183 = 1483;

    t183 = ((x733==(x734>x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -663003LL;
	int8_t x738 = INT8_MIN;
	static int16_t x739 = -1;
	static int32_t x740 = INT32_MIN;

    t184 = ((x737==(x738>x739))>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x742 = -1971LL;
	int16_t x743 = 154;
	static uint16_t x744 = 167U;
	volatile int32_t t185 = 43314908;

    t185 = ((x741==(x742>x743))>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 664630LLU;
	volatile int64_t x747 = INT64_MIN;
	uint32_t x748 = 1U;
	int32_t t186 = -2;

    t186 = ((x745==(x746>x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x751 = INT32_MIN;
	int16_t x752 = 1;
	volatile int32_t t187 = 1048782729;

    t187 = ((x749==(x750>x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MAX;
	static volatile int32_t x755 = 329182;
	volatile int32_t t188 = 6514;

    t188 = ((x753==(x754>x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 31416029843LLU;
	int32_t x758 = -2062698;
	volatile int8_t x760 = INT8_MIN;
	int32_t t189 = 7897289;

    t189 = ((x757==(x758>x759))>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 327191LLU;
	int16_t x762 = INT16_MAX;
	int16_t x763 = 15668;
	static uint16_t x764 = 2U;

    t190 = ((x761==(x762>x763))>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 23164776LLU;
	int16_t x766 = INT16_MAX;
	uint16_t x767 = 3U;
	volatile int32_t t191 = -16;

    t191 = ((x765==(x766>x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 4795U;
	uint64_t x770 = UINT64_MAX;
	static int8_t x771 = -4;
	static int8_t x772 = INT8_MAX;

    t192 = ((x769==(x770>x771))>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x773 = INT8_MIN;
	uint8_t x774 = 35U;
	uint16_t x776 = UINT16_MAX;
	volatile int32_t t193 = -12;

    t193 = ((x773==(x774>x775))>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 5;
	int16_t x778 = INT16_MIN;
	static int8_t x780 = INT8_MIN;
	volatile int32_t t194 = 50515943;

    t194 = ((x777==(x778>x779))>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MAX;
	uint64_t x782 = 5LLU;
	int32_t x784 = -1;
	volatile int32_t t195 = 2;

    t195 = ((x781==(x782>x783))>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = -14220867101463588LL;
	volatile uint64_t x786 = 6511373989LLU;
	int16_t x787 = -117;
	uint64_t x788 = 8924721816394781LLU;

    t196 = ((x785==(x786>x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x789 = 12U;
	static volatile uint32_t x791 = 7798U;
	static uint8_t x792 = 62U;
	volatile int32_t t197 = 1424662;

    t197 = ((x789==(x790>x791))>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x794 = 55U;
	uint32_t x795 = 1U;
	int64_t x796 = INT64_MAX;
	static int32_t t198 = 114;

    t198 = ((x793==(x794>x795))>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -14823;
	uint64_t x798 = 79922603057LLU;
	int8_t x799 = -1;
	int64_t x800 = -1LL;

    t199 = ((x797==(x798>x799))>x800);

    if (t199 != 1) { NG(); } else { ; }
	
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

