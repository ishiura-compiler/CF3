
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

int16_t x1 = INT16_MIN;
int16_t x5 = INT16_MIN;
volatile uint32_t x7 = 2U;
volatile uint32_t x15 = UINT32_MAX;
volatile int8_t x18 = INT8_MIN;
int8_t x20 = -1;
uint32_t t4 = 532202156U;
uint16_t x27 = 2225U;
static uint32_t x28 = 4885U;
volatile uint64_t t5 = 5217922549LLU;
int16_t x30 = INT16_MAX;
static int32_t x35 = INT32_MIN;
volatile int32_t x39 = 15;
int8_t x40 = 19;
volatile uint16_t x46 = 14779U;
volatile int64_t t10 = -128047LL;
int64_t x49 = -1LL;
static volatile uint32_t x52 = UINT32_MAX;
static int64_t x53 = -1LL;
uint16_t x56 = 87U;
int8_t x61 = -16;
volatile uint16_t x67 = UINT16_MAX;
volatile int32_t t15 = 806;
static int8_t x72 = INT8_MAX;
int32_t x84 = -230;
volatile int64_t t18 = 249LL;
uint64_t x92 = 247719640341451LLU;
int8_t x94 = -1;
static int64_t x97 = -3909245LL;
int8_t x99 = 3;
int32_t x100 = -1;
static uint32_t x101 = 11309717U;
int16_t x104 = 15;
volatile uint64_t x109 = UINT64_MAX;
uint64_t x123 = UINT64_MAX;
int64_t x130 = 35396578745746553LL;
volatile int64_t t29 = -22180330LL;
int16_t x138 = INT16_MIN;
uint64_t x151 = UINT64_MAX;
static uint32_t t34 = 99219U;
int16_t x160 = -1;
volatile int64_t x168 = 286380743959LL;
volatile int64_t x171 = 16094621LL;
int64_t t37 = 2198LL;
uint64_t x175 = 63556LLU;
int16_t x176 = -1;
uint64_t x184 = 5665LLU;
int32_t x197 = -116061;
volatile int8_t x199 = INT8_MIN;
int32_t x200 = -6482332;
int64_t x205 = 72778866651379LL;
int32_t x206 = -467144;
uint16_t x217 = UINT16_MAX;
volatile int64_t x223 = INT64_MAX;
uint64_t x227 = 2095344927935040LLU;
int8_t x228 = 4;
static uint64_t t49 = 18628986694LLU;
volatile int32_t t51 = 0;
volatile uint64_t t53 = 1LLU;
int16_t x256 = -1;
volatile uint8_t x258 = 31U;
static volatile int32_t x260 = 0;
uint32_t x268 = 13080915U;
volatile uint64_t t61 = 3413632236094913045LLU;
static int16_t x286 = 30;
volatile uint32_t t63 = 38962548U;
uint16_t x289 = UINT16_MAX;
int16_t x290 = INT16_MAX;
uint64_t x291 = UINT64_MAX;
volatile int64_t x299 = INT64_MIN;
volatile int64_t t65 = -5LL;
int64_t t66 = 4624412253LL;
int32_t x306 = 3;
uint64_t x308 = 1006314034041LLU;
int16_t x318 = INT16_MIN;
static volatile int64_t x321 = -236657051302922LL;
volatile int8_t x349 = -1;
int8_t x350 = INT8_MAX;
static int64_t t82 = -85601082037658475LL;
static volatile int64_t x391 = -10047013160776681LL;
static int64_t x401 = INT64_MIN;
static int8_t x406 = 7;
int16_t x416 = 3;
volatile int32_t x424 = INT32_MIN;
int8_t x444 = INT8_MIN;
int16_t x446 = INT16_MIN;
int32_t t96 = -933;
uint64_t x460 = 897886487653988LLU;
static volatile int64_t t98 = -7LL;
int32_t x466 = INT32_MIN;
int64_t x485 = -1LL;
volatile int64_t t102 = 496514194LL;
uint16_t x490 = 98U;
static uint64_t x493 = UINT64_MAX;
uint32_t x494 = 62U;
uint64_t x495 = 24409603LLU;
int16_t x496 = -1;
uint64_t t104 = 16836142369LLU;
volatile int64_t x509 = INT64_MAX;
volatile uint64_t t108 = 4313106923LLU;
uint16_t x528 = UINT16_MAX;
uint32_t t110 = 7320636U;
int16_t x530 = -1;
uint16_t x537 = 6U;
int32_t x544 = INT32_MIN;
uint32_t x548 = 1U;
volatile uint64_t t114 = 1427426LLU;
volatile uint32_t t115 = 692U;
int8_t x556 = INT8_MIN;
volatile uint64_t t117 = 1127LLU;
volatile int64_t t120 = -826959193007405LL;
static volatile uint16_t x577 = UINT16_MAX;
int8_t x580 = -14;
int64_t t122 = 2042LL;
uint64_t x609 = UINT64_MAX;
static int8_t x617 = INT8_MIN;
int8_t x618 = INT8_MIN;
volatile int32_t x625 = INT32_MIN;
uint16_t x628 = UINT16_MAX;
uint16_t x637 = 13U;
int64_t t133 = -12165824877983LL;
static uint16_t x660 = 1U;
uint32_t x664 = UINT32_MAX;
static int8_t x665 = INT8_MAX;
int16_t x666 = INT16_MAX;
static uint64_t t139 = 1320786273178862657LLU;
static uint8_t x678 = 9U;
static uint8_t x680 = UINT8_MAX;
volatile int32_t x684 = INT32_MIN;
volatile int64_t t143 = -6LL;
int16_t x716 = INT16_MIN;
static int32_t x721 = 0;
int8_t x726 = -1;
volatile int64_t t147 = -94518468LL;
int32_t x730 = INT32_MAX;
uint32_t x734 = 1479017U;
volatile int16_t x747 = INT16_MIN;
int16_t x749 = INT16_MIN;
volatile int32_t x755 = INT32_MIN;
static int8_t x766 = INT8_MIN;
uint32_t x774 = 1921008U;
static volatile int64_t x778 = INT64_MAX;
int16_t x782 = 624;
volatile int32_t x792 = INT32_MAX;
uint32_t x795 = UINT32_MAX;
uint64_t x797 = UINT64_MAX;
volatile int8_t x799 = 7;
int64_t t164 = 49997207415595299LL;
static int32_t x809 = -61055;
int16_t x816 = INT16_MIN;
uint64_t x820 = 14LLU;
int32_t x826 = INT32_MIN;
int8_t x827 = INT8_MIN;
uint32_t x832 = 812724U;
volatile int16_t x837 = -1;
static volatile uint32_t x838 = 3U;
static uint8_t x839 = 2U;
int64_t x840 = INT64_MAX;
volatile int64_t t172 = -1LL;
int8_t x845 = -7;
volatile uint32_t x846 = UINT32_MAX;
uint8_t x851 = 22U;
static int32_t x854 = INT32_MIN;
uint64_t x861 = 183LLU;
uint32_t x863 = 1683U;
int16_t x867 = 0;
int8_t x868 = INT8_MAX;
static volatile int32_t t178 = -90;
uint16_t x871 = 1U;
volatile int8_t x888 = -1;
int16_t x889 = INT16_MAX;
int8_t x894 = -1;
volatile int8_t x895 = INT8_MIN;
volatile uint64_t t188 = 1611776443575851LLU;
static int8_t x913 = INT8_MIN;
volatile int64_t t190 = 266522499720LL;
static int32_t x925 = -617397727;
static uint8_t x929 = 3U;
int32_t t192 = 854;
volatile int32_t x937 = INT32_MIN;
static uint64_t t194 = 5710695689180769326LLU;
volatile uint8_t x943 = 11U;
static int64_t x945 = 79031886528007396LL;
int16_t x949 = -5;
volatile int16_t x959 = -1;
volatile uint16_t x967 = UINT16_MAX;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = 5U;
	int8_t x4 = 1;
	static int32_t t0 = 1;

    t0 = (x1-(x2-(x3|x4)));

    if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MAX;
	int16_t x8 = -1;
	int64_t t1 = 334880LL;

    t1 = (x5-(x6-(x7|x8)));

    if (t1 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 4U;
	volatile int8_t x11 = -1;
	int16_t x12 = 786;
	int32_t t2 = -330;

    t2 = (x9-(x10-(x11|x12)));

    if (t2 != 250) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -216435LL;
	int16_t x14 = 9;
	uint32_t x16 = 210894449U;
	static int64_t t3 = 94LL;

    t3 = (x13-(x14-(x15|x16)));

    if (t3 != -216445LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = UINT32_MAX;
	int8_t x19 = INT8_MIN;

    t4 = (x17-(x18-(x19|x20)));

    if (t4 != 126U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -1LL;
	uint64_t x26 = UINT64_MAX;

    t5 = (x25-(x26-(x27|x28)));

    if (t5 != 7093LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x29 = 0;
	volatile uint16_t x31 = 3U;
	int16_t x32 = INT16_MIN;
	static volatile int32_t t6 = -51;

    t6 = (x29-(x30-(x31|x32)));

    if (t6 != -65532) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = UINT16_MAX;
	int8_t x34 = -29;
	static volatile int64_t x36 = INT64_MAX;
	int64_t t7 = 555474246956297857LL;

    t7 = (x33-(x34-(x35|x36)));

    if (t7 != 65563LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = 9;
	static uint8_t x38 = UINT8_MAX;
	volatile int32_t t8 = -39;

    t8 = (x37-(x38-(x39|x40)));

    if (t8 != -215) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MAX;
	uint32_t x42 = UINT32_MAX;
	uint64_t x43 = UINT64_MAX;
	volatile int32_t x44 = INT32_MIN;
	volatile uint64_t t9 = 5LLU;

    t9 = (x41-(x42-(x43|x44)));

    if (t9 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MAX;
	int32_t x47 = -1;
	int64_t x48 = 78LL;

    t10 = (x45-(x46-(x47|x48)));

    if (t10 != -14653LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MIN;
	int64_t t11 = -245347733385576535LL;

    t11 = (x49-(x50-(x51|x52)));

    if (t11 != -4294967170LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x54 = -814;
	static int8_t x55 = 1;
	volatile int64_t t12 = 1065692205831173LL;

    t12 = (x53-(x54-(x55|x56)));

    if (t12 != 900LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1;
	static int8_t x58 = INT8_MIN;
	static uint16_t x59 = UINT16_MAX;
	int64_t x60 = -1LL;
	volatile int64_t t13 = -4711676LL;

    t13 = (x57-(x58-(x59|x60)));

    if (t13 != 126LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x62 = -1LL;
	uint32_t x63 = 5187171U;
	static uint8_t x64 = 10U;
	volatile int64_t t14 = 744393LL;

    t14 = (x61-(x62-(x63|x64)));

    if (t14 != 5187164LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = -39;
	uint16_t x66 = 97U;
	int8_t x68 = INT8_MAX;

    t15 = (x65-(x66-(x67|x68)));

    if (t15 != 65399) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	uint64_t x70 = 5932777873339594LLU;
	volatile int32_t x71 = INT32_MAX;
	uint64_t t16 = 45LLU;

    t16 = (x69-(x70-(x71|x72)));

    if (t16 != 18440811297983728436LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -7512;
	int32_t x74 = INT32_MIN;
	volatile int32_t x75 = INT32_MAX;
	int16_t x76 = INT16_MIN;
	int32_t t17 = 0;

    t17 = (x73-(x74-(x75|x76)));

    if (t17 != 2147476135) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x81 = 110LL;
	int32_t x82 = INT32_MIN;
	static int32_t x83 = -1;

    t18 = (x81-(x82-(x83|x84)));

    if (t18 != 2147483757LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x85 = 15;
	uint8_t x86 = UINT8_MAX;
	uint32_t x87 = 17448614U;
	int32_t x88 = -1;
	static uint32_t t19 = 135950U;

    t19 = (x85-(x86-(x87|x88)));

    if (t19 != 4294967055U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = 142980;
	static uint16_t x90 = 5U;
	int16_t x91 = INT16_MAX;
	volatile uint64_t t20 = 3923140813020570LLU;

    t20 = (x89-(x90-(x91|x92)));

    if (t20 != 247719640510078LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x93 = 1777409;
	static volatile uint8_t x95 = 3U;
	int64_t x96 = -1LL;
	int64_t t21 = -7961962LL;

    t21 = (x93-(x94-(x95|x96)));

    if (t21 != 1777409LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x98 = INT16_MIN;
	static int64_t t22 = -3018LL;

    t22 = (x97-(x98-(x99|x100)));

    if (t22 != -3876478LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x102 = 48743LLU;
	int16_t x103 = -1;
	volatile uint64_t t23 = 716988282151186513LLU;

    t23 = (x101-(x102-(x103|x104)));

    if (t23 != 11260973LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = UINT16_MAX;
	int16_t x106 = INT16_MIN;
	int16_t x107 = 5;
	int64_t x108 = -140530667803LL;
	volatile int64_t t24 = 473972509LL;

    t24 = (x105-(x106-(x107|x108)));

    if (t24 != -140530569500LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x110 = -274;
	int16_t x111 = INT16_MIN;
	int64_t x112 = -367778404LL;
	volatile uint64_t t25 = 10393LLU;

    t25 = (x109-(x110-(x111|x112)));

    if (t25 != 18446744073709528749LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x117 = 5127449792091832LL;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MAX;
	uint64_t t26 = 99LLU;

    t26 = (x117-(x118-(x119|x120)));

    if (t26 != 5127449792091832LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x121 = 1U;
	int32_t x122 = 52920769;
	int64_t x124 = INT64_MIN;
	static uint64_t t27 = 13755166256766071LLU;

    t27 = (x121-(x122-(x123|x124)));

    if (t27 != 18446744073656630847LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = 94261097733LLU;
	static uint64_t x126 = 68112269321697780LLU;
	int64_t x127 = INT64_MIN;
	static int8_t x128 = INT8_MAX;
	volatile uint64_t t28 = 3LLU;

    t28 = (x125-(x126-(x127|x128)));

    if (t28 != 9155259861794175888LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = INT64_MAX;
	int32_t x131 = 0;
	int8_t x132 = INT8_MIN;

    t29 = (x129-(x130-(x131|x132)));

    if (t29 != 9187975458109029126LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = INT8_MIN;
	int32_t x134 = 103;
	uint64_t x135 = UINT64_MAX;
	static int64_t x136 = -1LL;
	uint64_t t30 = 19783722650LLU;

    t30 = (x133-(x134-(x135|x136)));

    if (t30 != 18446744073709551384LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = 17610638291528200LL;
	int16_t x139 = -1;
	uint64_t x140 = UINT64_MAX;
	uint64_t t31 = 0LLU;

    t31 = (x137-(x138-(x139|x140)));

    if (t31 != 17610638291560967LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x141 = 111U;
	static int64_t x142 = 170LL;
	static int64_t x143 = INT64_MAX;
	uint16_t x144 = UINT16_MAX;
	volatile int64_t t32 = 3LL;

    t32 = (x141-(x142-(x143|x144)));

    if (t32 != 9223372036854775748LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x149 = -1;
	int32_t x150 = INT32_MIN;
	int16_t x152 = INT16_MIN;
	volatile uint64_t t33 = 64903422767LLU;

    t33 = (x149-(x150-(x151|x152)));

    if (t33 != 2147483646LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x153 = -1;
	uint32_t x154 = 14020601U;
	uint8_t x155 = 3U;
	uint8_t x156 = 49U;

    t34 = (x153-(x154-(x155|x156)));

    if (t34 != 4280946745U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x157 = INT32_MIN;
	uint8_t x158 = 5U;
	uint64_t x159 = 5852716719LLU;
	volatile uint64_t t35 = 3452354103668350LLU;

    t35 = (x157-(x158-(x159|x160)));

    if (t35 != 18446744071562067962LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x166 = -192;
	int64_t x167 = 5LL;
	int64_t t36 = -138887269731267LL;

    t36 = (x165-(x166-(x167|x168)));

    if (t36 != 284233260503LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x169 = 21470127U;
	static volatile int64_t x170 = -1LL;
	uint16_t x172 = UINT16_MAX;

    t37 = (x169-(x170-(x171|x172)));

    if (t37 != 37591983LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x173 = 637LLU;
	int8_t x174 = -1;
	uint64_t t38 = 461400LLU;

    t38 = (x173-(x174-(x175|x176)));

    if (t38 != 637LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x177 = -1077160135878LL;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = INT16_MIN;
	int8_t x180 = -1;
	uint64_t t39 = 820233051359594LLU;

    t39 = (x177-(x178-(x179|x180)));

    if (t39 != 18446742996549415738LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x181 = 1494U;
	int32_t x182 = -2131;
	volatile int16_t x183 = INT16_MIN;
	volatile uint64_t t40 = 201756LLU;

    t40 = (x181-(x182-(x183|x184)));

    if (t40 != 18446744073709528138LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x185 = 1U;
	static uint8_t x186 = UINT8_MAX;
	volatile int32_t x187 = 30232047;
	volatile uint64_t x188 = 267LLU;
	uint64_t t41 = 3LLU;

    t41 = (x185-(x186-(x187|x188)));

    if (t41 != 30231793LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = 25526652480576018LL;
	volatile int8_t x194 = -1;
	uint8_t x195 = 42U;
	uint64_t x196 = 20771408923776413LLU;
	uint64_t t42 = 17008903529240032LLU;

    t42 = (x193-(x194-(x195|x196)));

    if (t42 != 46298061404352466LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x198 = 127U;
	static int32_t t43 = 10386594;

    t43 = (x197-(x198-(x199|x200)));

    if (t43 != -116216) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = 31;
	int64_t x202 = INT64_MIN;
	int16_t x203 = -1902;
	int64_t x204 = INT64_MIN;
	volatile int64_t t44 = 33490906844LL;

    t44 = (x201-(x202-(x203|x204)));

    if (t44 != 9223372036854773937LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x207 = INT16_MAX;
	volatile int64_t x208 = 2200341LL;
	volatile int64_t t45 = -16269LL;

    t45 = (x205-(x206-(x207|x208)));

    if (t45 != 72778869346746LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x213 = 7;
	uint64_t x214 = UINT64_MAX;
	int32_t x215 = 2;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t46 = 1806LLU;

    t46 = (x213-(x214-(x215|x216)));

    if (t46 != 18446744073709518858LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x218 = -1;
	static int32_t x219 = INT32_MAX;
	int16_t x220 = -1;
	volatile int32_t t47 = -209783;

    t47 = (x217-(x218-(x219|x220)));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x221 = INT32_MIN;
	int16_t x222 = INT16_MAX;
	uint16_t x224 = 7U;
	volatile int64_t t48 = -44367013465845600LL;

    t48 = (x221-(x222-(x223|x224)));

    if (t48 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x225 = 1706578U;
	volatile int16_t x226 = INT16_MIN;

    t49 = (x225-(x226-(x227|x228)));

    if (t49 != 2095344929674390LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x229 = 14U;
	static int16_t x230 = INT16_MIN;
	uint16_t x231 = 2459U;
	static int16_t x232 = INT16_MAX;
	volatile int32_t t50 = -357972;

    t50 = (x229-(x230-(x231|x232)));

    if (t50 != 65549) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x233 = UINT16_MAX;
	volatile int32_t x234 = -22313663;
	uint16_t x235 = 326U;
	uint8_t x236 = 8U;

    t51 = (x233-(x234-(x235|x236)));

    if (t51 != 22379532) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x241 = 43LL;
	static uint8_t x242 = UINT8_MAX;
	uint32_t x243 = 64654U;
	int64_t x244 = INT64_MIN;
	volatile int64_t t52 = -4642155LL;

    t52 = (x241-(x242-(x243|x244)));

    if (t52 != -9223372036854711366LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x245 = 209631131025LLU;
	volatile uint32_t x246 = 945U;
	int8_t x247 = 0;
	int32_t x248 = INT32_MAX;

    t53 = (x245-(x246-(x247|x248)));

    if (t53 != 207483646431LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x249 = 1U;
	int16_t x250 = INT16_MAX;
	volatile int16_t x251 = 235;
	int32_t x252 = 54293650;
	int32_t t54 = 375870;

    t54 = (x249-(x250-(x251|x252)));

    if (t54 != 54260989) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = -590135;
	uint64_t x254 = 2136LLU;
	int64_t x255 = INT64_MIN;
	volatile uint64_t t55 = 0LLU;

    t55 = (x253-(x254-(x255|x256)));

    if (t55 != 18446744073708959344LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x257 = 56773645508LLU;
	int8_t x259 = -1;
	uint64_t t56 = 325655091LLU;

    t56 = (x257-(x258-(x259|x260)));

    if (t56 != 56773645476LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x261 = 583125307U;
	uint64_t x262 = 60049177071LLU;
	static int16_t x263 = INT16_MAX;
	volatile int64_t x264 = INT64_MIN;
	uint64_t t57 = 446399385LLU;

    t57 = (x261-(x262-(x263|x264)));

    if (t57 != 9223371977388756811LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x265 = INT64_MAX;
	int16_t x266 = INT16_MAX;
	int32_t x267 = INT32_MAX;
	volatile int64_t t58 = -18481990431229LL;

    t58 = (x265-(x266-(x267|x268)));

    if (t58 != 9223372034707259391LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x269 = -1;
	int16_t x270 = INT16_MIN;
	int64_t x271 = 91565686LL;
	static uint32_t x272 = 7U;
	int64_t t59 = 4054109517492477336LL;

    t59 = (x269-(x270-(x271|x272)));

    if (t59 != 91598454LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x273 = INT16_MAX;
	int16_t x274 = INT16_MIN;
	static uint16_t x275 = UINT16_MAX;
	int8_t x276 = INT8_MAX;
	volatile int32_t t60 = -412570;

    t60 = (x273-(x274-(x275|x276)));

    if (t60 != 131070) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x277 = UINT64_MAX;
	volatile uint64_t x278 = 768LLU;
	static int16_t x279 = -12;
	uint64_t x280 = 291837311919LLU;

    t61 = (x277-(x278-(x279|x280)));

    if (t61 != 18446744073709550846LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MIN;
	static int16_t x284 = -1;
	volatile uint64_t t62 = 509138LLU;

    t62 = (x281-(x282-(x283|x284)));

    if (t62 != 32766LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x285 = 1498;
	volatile int8_t x287 = INT8_MAX;
	uint32_t x288 = UINT32_MAX;

    t63 = (x285-(x286-(x287|x288)));

    if (t63 != 1467U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x292 = 7;
	static uint64_t t64 = 47085LLU;

    t64 = (x289-(x290-(x291|x292)));

    if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x297 = INT32_MIN;
	uint32_t x298 = UINT32_MAX;
	int32_t x300 = INT32_MIN;

    t65 = (x297-(x298-(x299|x300)));

    if (t65 != -8589934591LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x301 = 12U;
	int64_t x302 = 105126932LL;
	int16_t x303 = -1;
	int8_t x304 = INT8_MAX;

    t66 = (x301-(x302-(x303|x304)));

    if (t66 != -105126921LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x305 = INT64_MIN;
	volatile int16_t x307 = INT16_MAX;
	static volatile uint64_t t67 = 30907LLU;

    t67 = (x305-(x306-(x307|x308)));

    if (t67 != 9223373043168837628LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint16_t x309 = 4U;
	int16_t x310 = -341;
	int8_t x311 = INT8_MIN;
	static volatile uint64_t x312 = UINT64_MAX;
	volatile uint64_t t68 = 178LLU;

    t68 = (x309-(x310-(x311|x312)));

    if (t68 != 344LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x313 = 5967;
	uint16_t x314 = 1683U;
	volatile int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t69 = 1948470;

    t69 = (x313-(x314-(x315|x316)));

    if (t69 != 4283) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x317 = INT32_MIN;
	volatile uint64_t x319 = 29449285451996LLU;
	uint8_t x320 = 13U;
	uint64_t t70 = 2947542377235400LLU;

    t70 = (x317-(x318-(x319|x320)));

    if (t70 != 29447138001117LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x322 = INT8_MIN;
	int8_t x323 = -1;
	uint16_t x324 = 1618U;
	int64_t t71 = 2883LL;

    t71 = (x321-(x322-(x323|x324)));

    if (t71 != -236657051302795LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = INT32_MAX;
	int16_t x326 = -1;
	int32_t x327 = -1;
	int64_t x328 = INT64_MIN;
	int64_t t72 = 14459030037LL;

    t72 = (x325-(x326-(x327|x328)));

    if (t72 != 2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x329 = -42;
	int8_t x330 = INT8_MIN;
	static int64_t x331 = 128249556539622LL;
	volatile int64_t x332 = 1LL;
	int64_t t73 = 543150375LL;

    t73 = (x329-(x330-(x331|x332)));

    if (t73 != 128249556539709LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x337 = INT16_MIN;
	int32_t x338 = 47533;
	int8_t x339 = INT8_MIN;
	static int64_t x340 = INT64_MIN;
	volatile int64_t t74 = 17085052861258655LL;

    t74 = (x337-(x338-(x339|x340)));

    if (t74 != -80429LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x341 = 6900U;
	volatile int8_t x342 = INT8_MIN;
	volatile int8_t x343 = INT8_MIN;
	uint16_t x344 = UINT16_MAX;
	int32_t t75 = 40030;

    t75 = (x341-(x342-(x343|x344)));

    if (t75 != 7027) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int16_t x351 = INT16_MIN;
	volatile int16_t x352 = -1;
	static volatile int32_t t76 = 610820785;

    t76 = (x349-(x350-(x351|x352)));

    if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x357 = 1307;
	int8_t x358 = -1;
	uint64_t x359 = 880LLU;
	int16_t x360 = -1;
	uint64_t t77 = 94LLU;

    t77 = (x357-(x358-(x359|x360)));

    if (t77 != 1307LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x361 = INT16_MIN;
	static int16_t x362 = INT16_MIN;
	uint32_t x363 = UINT32_MAX;
	volatile int32_t x364 = INT32_MIN;
	volatile uint32_t t78 = UINT32_MAX;

    t78 = (x361-(x362-(x363|x364)));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x365 = -39548789826LL;
	int32_t x366 = INT32_MIN;
	int64_t x367 = -1LL;
	static uint16_t x368 = 1125U;
	volatile int64_t t79 = 326231669369545526LL;

    t79 = (x365-(x366-(x367|x368)));

    if (t79 != -37401306179LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x369 = INT16_MIN;
	static int16_t x370 = INT16_MIN;
	uint8_t x371 = UINT8_MAX;
	uint16_t x372 = 2U;
	volatile int32_t t80 = -3674492;

    t80 = (x369-(x370-(x371|x372)));

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x377 = INT64_MIN;
	int64_t x378 = INT64_MIN;
	volatile int16_t x379 = -11;
	int32_t x380 = -4977;
	volatile int64_t t81 = 425LL;

    t81 = (x377-(x378-(x379|x380)));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x381 = UINT32_MAX;
	static int64_t x382 = INT64_MAX;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MIN;

    t82 = (x381-(x382-(x383|x384)));

    if (t82 != -9223372028264841217LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x385 = 8U;
	uint64_t x386 = 10811795408094958LLU;
	int16_t x387 = INT16_MIN;
	int64_t x388 = 15391015010LL;
	volatile uint64_t t83 = 530195567057LLU;

    t83 = (x385-(x386-(x387|x388)));

    if (t83 != 18435932278301440380LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x389 = -49;
	int32_t x390 = 47743669;
	uint32_t x392 = UINT32_MAX;
	int64_t t84 = -12393920849511180LL;

    t84 = (x389-(x390-(x391|x392)));

    if (t84 != -10047010884846311LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x402 = UINT64_MAX;
	uint32_t x403 = UINT32_MAX;
	static uint16_t x404 = 587U;
	uint64_t t85 = 3729898239108LLU;

    t85 = (x401-(x402-(x403|x404)));

    if (t85 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x405 = INT32_MIN;
	volatile uint32_t x407 = 91792958U;
	int32_t x408 = INT32_MIN;
	static volatile uint32_t t86 = 672023017U;

    t86 = (x405-(x406-(x407|x408)));

    if (t86 != 91792951U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x409 = 20U;
	volatile int16_t x410 = INT16_MAX;
	uint8_t x411 = 31U;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t87 = -175180;

    t87 = (x409-(x410-(x411|x412)));

    if (t87 != 32788) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x413 = UINT32_MAX;
	uint16_t x414 = 42U;
	static int8_t x415 = INT8_MIN;
	uint32_t t88 = 44966U;

    t88 = (x413-(x414-(x415|x416)));

    if (t88 != 4294967128U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x417 = -51;
	uint16_t x418 = 6129U;
	volatile int64_t x419 = -1LL;
	uint16_t x420 = 0U;
	volatile int64_t t89 = 54LL;

    t89 = (x417-(x418-(x419|x420)));

    if (t89 != -6181LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x421 = 15LLU;
	int16_t x422 = INT16_MIN;
	int32_t x423 = INT32_MIN;
	volatile uint64_t t90 = 1899459517792LLU;

    t90 = (x421-(x422-(x423|x424)));

    if (t90 != 18446744071562100751LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x425 = 8;
	int64_t x426 = 265392LL;
	volatile int32_t x427 = INT32_MAX;
	int16_t x428 = INT16_MIN;
	volatile int64_t t91 = 918096456982642654LL;

    t91 = (x425-(x426-(x427|x428)));

    if (t91 != -265385LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x429 = -15999;
	int16_t x430 = INT16_MIN;
	int32_t x431 = INT32_MIN;
	int16_t x432 = 15;
	volatile int32_t t92 = 277858109;

    t92 = (x429-(x430-(x431|x432)));

    if (t92 != -2147466864) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x433 = 1576U;
	uint8_t x434 = 8U;
	uint32_t x435 = 576653927U;
	int64_t x436 = -7834763720475LL;
	volatile int64_t t93 = 480167LL;

    t93 = (x433-(x434-(x435|x436)));

    if (t93 != -7834221735673LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x437 = -1;
	int8_t x438 = INT8_MIN;
	int32_t x439 = INT32_MIN;
	volatile int32_t x440 = -843612118;
	int32_t t94 = -2;

    t94 = (x437-(x438-(x439|x440)));

    if (t94 != -843611991) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x441 = UINT8_MAX;
	uint16_t x442 = 0U;
	uint32_t x443 = 2977741U;
	volatile uint32_t t95 = 172U;

    t95 = (x441-(x442-(x443|x444)));

    if (t95 != 204U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x445 = 37;
	uint8_t x447 = 5U;
	int8_t x448 = INT8_MIN;

    t96 = (x445-(x446-(x447|x448)));

    if (t96 != 32682) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x457 = INT32_MIN;
	volatile uint8_t x458 = UINT8_MAX;
	uint16_t x459 = UINT16_MAX;
	volatile uint64_t t97 = 116342124602989LLU;

    t97 = (x457-(x458-(x459|x460)));

    if (t97 != 897884340223744LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x461 = INT32_MIN;
	uint32_t x462 = UINT32_MAX;
	int64_t x463 = INT64_MAX;
	int16_t x464 = 0;

    t98 = (x461-(x462-(x463|x464)));

    if (t98 != 9223372030412324864LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x465 = 1701126U;
	volatile uint64_t x467 = UINT64_MAX;
	uint16_t x468 = UINT16_MAX;
	uint64_t t99 = 113561663004475301LLU;

    t99 = (x465-(x466-(x467|x468)));

    if (t99 != 2149184773LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x477 = -48;
	int16_t x478 = 5;
	int8_t x479 = -1;
	int32_t x480 = -1;
	volatile int32_t t100 = 182;

    t100 = (x477-(x478-(x479|x480)));

    if (t100 != -54) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x481 = INT64_MIN;
	static int64_t x482 = -1LL;
	uint32_t x483 = 956032112U;
	int8_t x484 = 5;
	volatile int64_t t101 = -46710830395LL;

    t101 = (x481-(x482-(x483|x484)));

    if (t101 != -9223372035898743690LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x486 = UINT16_MAX;
	int8_t x487 = INT8_MAX;
	int16_t x488 = 0;

    t102 = (x485-(x486-(x487|x488)));

    if (t102 != -65409LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x489 = 0U;
	uint64_t x491 = 494322010777478323LLU;
	static uint16_t x492 = 8U;
	volatile uint64_t t103 = 31416948640LLU;

    t103 = (x489-(x490-(x491|x492)));

    if (t103 != 494322010777478233LLU) { NG(); } else { ; }
	
}

void f104(void) {
    

    t104 = (x493-(x494-(x495|x496)));

    if (t104 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x497 = UINT32_MAX;
	volatile uint32_t x498 = 0U;
	static volatile int64_t x499 = INT64_MIN;
	uint16_t x500 = 366U;
	static volatile int64_t t105 = 4287254LL;

    t105 = (x497-(x498-(x499|x500)));

    if (t105 != -9223372032559808147LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x510 = -1LL;
	int64_t x511 = -1LL;
	volatile uint8_t x512 = UINT8_MAX;
	volatile int64_t t106 = INT64_MAX;

    t106 = (x509-(x510-(x511|x512)));

    if (t106 != INT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x513 = INT32_MIN;
	volatile int16_t x514 = INT16_MIN;
	static volatile int64_t x515 = -1446899615055LL;
	int32_t x516 = INT32_MIN;
	int64_t t107 = -82527226216LL;

    t107 = (x513-(x514-(x515|x516)));

    if (t107 != -3790570831LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x517 = UINT32_MAX;
	uint64_t x518 = 33194076834622LLU;
	static uint16_t x519 = 6U;
	int64_t x520 = -531486217734876LL;

    t108 = (x517-(x518-(x519|x520)));

    if (t108 != 18446179397709949415LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x521 = 127U;
	static int64_t x522 = -1LL;
	static uint32_t x523 = UINT32_MAX;
	static volatile int32_t x524 = 4;
	volatile int64_t t109 = 397LL;

    t109 = (x521-(x522-(x523|x524)));

    if (t109 != 4294967423LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x525 = INT32_MIN;
	uint32_t x526 = UINT32_MAX;
	int16_t x527 = -1;

    t110 = (x525-(x526-(x527|x528)));

    if (t110 != 2147483648U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x529 = INT64_MIN;
	static uint16_t x531 = 104U;
	uint8_t x532 = 1U;
	int64_t t111 = 1969740567594301LL;

    t111 = (x529-(x530-(x531|x532)));

    if (t111 != -9223372036854775702LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x538 = -1;
	static int32_t x539 = -1386;
	uint32_t x540 = 258028U;
	volatile uint32_t t112 = 9U;

    t112 = (x537-(x538-(x539|x540)));

    if (t112 != 5U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x541 = -12;
	int8_t x542 = -29;
	int16_t x543 = -1;
	int32_t t113 = -2049;

    t113 = (x541-(x542-(x543|x544)));

    if (t113 != 16) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x545 = 6841727638LLU;
	volatile int16_t x546 = -7160;
	static int64_t x547 = -1LL;

    t114 = (x545-(x546-(x547|x548)));

    if (t114 != 6841734797LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x549 = 7;
	volatile uint32_t x550 = 843U;
	uint8_t x551 = UINT8_MAX;
	uint16_t x552 = UINT16_MAX;

    t115 = (x549-(x550-(x551|x552)));

    if (t115 != 64699U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x553 = 127U;
	int16_t x554 = -1;
	volatile uint32_t x555 = UINT32_MAX;
	volatile uint32_t t116 = 156U;

    t116 = (x553-(x554-(x555|x556)));

    if (t116 != 127U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x557 = 6;
	static int32_t x558 = INT32_MAX;
	uint64_t x559 = UINT64_MAX;
	uint32_t x560 = UINT32_MAX;

    t117 = (x557-(x558-(x559|x560)));

    if (t117 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x561 = INT8_MIN;
	volatile int8_t x562 = INT8_MAX;
	static int64_t x563 = INT64_MIN;
	static int8_t x564 = INT8_MIN;
	volatile int64_t t118 = 116373LL;

    t118 = (x561-(x562-(x563|x564)));

    if (t118 != -383LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x569 = 471740702U;
	int16_t x570 = 1;
	volatile int16_t x571 = INT16_MIN;
	static uint16_t x572 = 74U;
	static volatile uint32_t t119 = 1662U;

    t119 = (x569-(x570-(x571|x572)));

    if (t119 != 471708007U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x573 = INT64_MIN;
	int16_t x574 = -95;
	uint16_t x575 = 110U;
	static int16_t x576 = -1;

    t120 = (x573-(x574-(x575|x576)));

    if (t120 != -9223372036854775714LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x578 = UINT16_MAX;
	int32_t x579 = INT32_MAX;
	volatile int32_t t121 = 61;

    t121 = (x577-(x578-(x579|x580)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x581 = -31369;
	int32_t x582 = INT32_MAX;
	static int64_t x583 = INT64_MAX;
	int16_t x584 = INT16_MAX;

    t122 = (x581-(x582-(x583|x584)));

    if (t122 != 9223372034707260791LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x589 = 24U;
	static int64_t x590 = -655221104933LL;
	static int16_t x591 = -501;
	volatile int32_t x592 = -1;
	int64_t t123 = -8485097639842477LL;

    t123 = (x589-(x590-(x591|x592)));

    if (t123 != 655221104956LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x593 = -1;
	volatile int32_t x594 = INT32_MAX;
	uint16_t x595 = 276U;
	static int8_t x596 = INT8_MAX;
	static int32_t t124 = 795806713;

    t124 = (x593-(x594-(x595|x596)));

    if (t124 != -2147483265) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x597 = -404356536LL;
	volatile int64_t x598 = INT64_MIN;
	int16_t x599 = INT16_MIN;
	int64_t x600 = INT64_MAX;
	int64_t t125 = -959576975LL;

    t125 = (x597-(x598-(x599|x600)));

    if (t125 != 9223372036450419271LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x601 = INT32_MAX;
	volatile int8_t x602 = INT8_MAX;
	static int16_t x603 = -7;
	static uint32_t x604 = 40U;
	volatile uint32_t t126 = 213347431U;

    t126 = (x601-(x602-(x603|x604)));

    if (t126 != 2147483513U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x605 = 11U;
	uint64_t x606 = 227114422137966410LLU;
	int64_t x607 = INT64_MIN;
	int32_t x608 = 31;
	uint64_t t127 = 1489918934LLU;

    t127 = (x605-(x606-(x607|x608)));

    if (t127 != 8996257614716809440LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x610 = -1;
	uint32_t x611 = UINT32_MAX;
	int32_t x612 = INT32_MAX;
	volatile uint64_t t128 = UINT64_MAX;

    t128 = (x609-(x610-(x611|x612)));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x619 = INT16_MIN;
	static volatile int32_t x620 = -6080;
	volatile int32_t t129 = 62098545;

    t129 = (x617-(x618-(x619|x620)));

    if (t129 != -6080) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x626 = INT64_MIN;
	int32_t x627 = INT32_MIN;
	volatile int64_t t130 = -15112049895718LL;

    t130 = (x625-(x626-(x627|x628)));

    if (t130 != 9223372032559874047LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x629 = 0;
	int32_t x630 = INT32_MIN;
	int32_t x631 = INT32_MIN;
	int64_t x632 = INT64_MIN;
	volatile int64_t t131 = 240644806614329598LL;

    t131 = (x629-(x630-(x631|x632)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x638 = UINT32_MAX;
	int16_t x639 = -1;
	int8_t x640 = -2;
	uint32_t t132 = 59448U;

    t132 = (x637-(x638-(x639|x640)));

    if (t132 != 13U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x641 = INT16_MAX;
	int64_t x642 = -2432231156775LL;
	int32_t x643 = -389051;
	static int8_t x644 = INT8_MIN;

    t133 = (x641-(x642-(x643|x644)));

    if (t133 != 2432231189483LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x645 = 0U;
	uint64_t x646 = UINT64_MAX;
	uint32_t x647 = 8U;
	uint32_t x648 = 103830532U;
	uint64_t t134 = 386LLU;

    t134 = (x645-(x646-(x647|x648)));

    if (t134 != 103830541LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x653 = 1622450174302LLU;
	int32_t x654 = INT32_MIN;
	int8_t x655 = INT8_MIN;
	uint64_t x656 = 2LLU;
	static uint64_t t135 = 2LLU;

    t135 = (x653-(x654-(x655|x656)));

    if (t135 != 1624597657824LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x657 = INT32_MIN;
	int16_t x658 = -1;
	volatile int64_t x659 = INT64_MAX;
	volatile int64_t t136 = 6715041426LL;

    t136 = (x657-(x658-(x659|x660)));

    if (t136 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x661 = -1;
	uint16_t x662 = 1U;
	volatile uint8_t x663 = 3U;
	volatile uint32_t t137 = 19757584U;

    t137 = (x661-(x662-(x663|x664)));

    if (t137 != 4294967293U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x667 = -6;
	int32_t x668 = INT32_MAX;
	static int32_t t138 = -419946499;

    t138 = (x665-(x666-(x667|x668)));

    if (t138 != -32641) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x669 = -1682572366404LL;
	uint64_t x670 = 15LLU;
	uint16_t x671 = 5U;
	int32_t x672 = INT32_MIN;

    t139 = (x669-(x670-(x671|x672)));

    if (t139 != 18446742388989701554LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x677 = 60U;
	uint64_t x679 = 14025750LLU;
	uint64_t t140 = 315963098878LLU;

    t140 = (x677-(x678-(x679|x680)));

    if (t140 != 14026034LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x681 = -9;
	int64_t x682 = 10545360426LL;
	static uint64_t x683 = 104976896026102389LLU;
	uint64_t t141 = 253258953635172LLU;

    t141 = (x681-(x682-(x683|x684)));

    if (t141 != 18446744062178679874LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x685 = -15255679;
	volatile int8_t x686 = INT8_MAX;
	volatile int32_t x687 = 289631;
	volatile int64_t x688 = 2332482188160070751LL;
	volatile int64_t t142 = 1918786124619348947LL;

    t142 = (x685-(x686-(x687|x688)));

    if (t142 != 2332482188144817761LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x705 = 9255U;
	int32_t x706 = INT32_MIN;
	int64_t x707 = -19276490955066LL;
	volatile int64_t x708 = -1LL;

    t143 = (x705-(x706-(x707|x708)));

    if (t143 != 2147492902LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x713 = 1;
	volatile int8_t x714 = -1;
	int32_t x715 = INT32_MIN;
	int32_t t144 = 192940535;

    t144 = (x713-(x714-(x715|x716)));

    if (t144 != -32766) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x717 = -5;
	static volatile int16_t x718 = INT16_MIN;
	static uint8_t x719 = 3U;
	int32_t x720 = -1;
	int32_t t145 = -3;

    t145 = (x717-(x718-(x719|x720)));

    if (t145 != 32762) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x722 = INT64_MIN;
	uint64_t x723 = UINT64_MAX;
	int16_t x724 = INT16_MAX;
	uint64_t t146 = 3933024670LLU;

    t146 = (x721-(x722-(x723|x724)));

    if (t146 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x725 = INT32_MIN;
	static volatile int8_t x727 = INT8_MIN;
	int64_t x728 = INT64_MIN;

    t147 = (x725-(x726-(x727|x728)));

    if (t147 != -2147483775LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x729 = -1;
	static uint32_t x731 = 194937097U;
	int8_t x732 = INT8_MIN;
	uint32_t t148 = 215206341U;

    t148 = (x729-(x730-(x731|x732)));

    if (t148 != 2147483529U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x733 = 2477U;
	static int16_t x735 = INT16_MIN;
	static int8_t x736 = -1;
	volatile uint32_t t149 = 36475916U;

    t149 = (x733-(x734-(x735|x736)));

    if (t149 != 4293490755U) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x737 = 1;
	volatile int8_t x738 = INT8_MAX;
	static volatile int32_t x739 = -1;
	int16_t x740 = INT16_MIN;
	static int32_t t150 = -105;

    t150 = (x737-(x738-(x739|x740)));

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x741 = INT64_MIN;
	uint64_t x742 = 356495LLU;
	int64_t x743 = 12481941907851427LL;
	uint8_t x744 = 124U;
	volatile uint64_t t151 = 31027186LLU;

    t151 = (x741-(x742-(x743|x744)));

    if (t151 != 9235853978762270832LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x745 = -1;
	int64_t x746 = -18602452603785341LL;
	volatile int16_t x748 = -1;
	int64_t t152 = 454588292936800723LL;

    t152 = (x745-(x746-(x747|x748)));

    if (t152 != 18602452603785339LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x750 = -1;
	int64_t x751 = INT64_MIN;
	int8_t x752 = INT8_MIN;
	volatile int64_t t153 = 358561690590667703LL;

    t153 = (x749-(x750-(x751|x752)));

    if (t153 != -32895LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x753 = UINT64_MAX;
	volatile int16_t x754 = -156;
	int8_t x756 = -3;
	volatile uint64_t t154 = 5052910832854998LLU;

    t154 = (x753-(x754-(x755|x756)));

    if (t154 != 152LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x757 = INT16_MIN;
	int16_t x758 = 1;
	int32_t x759 = INT32_MAX;
	int32_t x760 = 574672;
	static volatile int32_t t155 = -1842114;

    t155 = (x757-(x758-(x759|x760)));

    if (t155 != 2147450878) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x765 = 59430538U;
	static uint16_t x767 = UINT16_MAX;
	int32_t x768 = 15;
	volatile uint32_t t156 = 248428824U;

    t156 = (x765-(x766-(x767|x768)));

    if (t156 != 59496201U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x769 = -1;
	uint64_t x770 = 19LLU;
	uint16_t x771 = 4U;
	int32_t x772 = -1;
	static volatile uint64_t t157 = 1369LLU;

    t157 = (x769-(x770-(x771|x772)));

    if (t157 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x773 = UINT8_MAX;
	int16_t x775 = -1;
	int8_t x776 = INT8_MAX;
	uint32_t t158 = 2847U;

    t158 = (x773-(x774-(x775|x776)));

    if (t158 != 4293046542U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x777 = UINT32_MAX;
	uint32_t x779 = UINT32_MAX;
	int32_t x780 = INT32_MAX;
	volatile int64_t t159 = 87LL;

    t159 = (x777-(x778-(x779|x780)));

    if (t159 != -9223372028264841217LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x781 = 11U;
	int16_t x783 = INT16_MIN;
	static int32_t x784 = -1;
	static int32_t t160 = -777598;

    t160 = (x781-(x782-(x783|x784)));

    if (t160 != -614) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x789 = UINT16_MAX;
	int8_t x790 = 1;
	static int64_t x791 = -1LL;
	volatile int64_t t161 = -2465575311LL;

    t161 = (x789-(x790-(x791|x792)));

    if (t161 != 65533LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x793 = INT8_MAX;
	uint32_t x794 = 197994675U;
	uint8_t x796 = 78U;
	volatile uint32_t t162 = 616133528U;

    t162 = (x793-(x794-(x795|x796)));

    if (t162 != 4096972747U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x798 = INT64_MIN;
	volatile int8_t x800 = INT8_MIN;
	uint64_t t163 = 337LLU;

    t163 = (x797-(x798-(x799|x800)));

    if (t163 != 9223372036854775686LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x801 = INT32_MIN;
	volatile int64_t x802 = INT64_MIN;
	int16_t x803 = INT16_MAX;
	int8_t x804 = INT8_MIN;

    t164 = (x801-(x802-(x803|x804)));

    if (t164 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x805 = 25006U;
	volatile int8_t x806 = INT8_MAX;
	int16_t x807 = -1;
	int64_t x808 = INT64_MIN;
	volatile int64_t t165 = 1301598355012491428LL;

    t165 = (x805-(x806-(x807|x808)));

    if (t165 != 24878LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x810 = INT64_MAX;
	volatile uint32_t x811 = 33U;
	int8_t x812 = INT8_MIN;
	int64_t t166 = 65934110212883025LL;

    t166 = (x809-(x810-(x811|x812)));

    if (t166 != -9223372032559869661LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x813 = INT32_MIN;
	int64_t x814 = -66LL;
	int64_t x815 = -1LL;
	int64_t t167 = -31042878109028LL;

    t167 = (x813-(x814-(x815|x816)));

    if (t167 != -2147483583LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x817 = -1;
	uint32_t x818 = 365U;
	static uint32_t x819 = 28U;
	uint64_t t168 = 26017LLU;

    t168 = (x817-(x818-(x819|x820)));

    if (t168 != 18446744073709551280LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x821 = INT16_MIN;
	static int8_t x822 = INT8_MAX;
	int16_t x823 = -118;
	volatile int16_t x824 = INT16_MIN;
	int32_t t169 = 1857;

    t169 = (x821-(x822-(x823|x824)));

    if (t169 != -33013) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x825 = INT16_MIN;
	volatile int64_t x828 = INT64_MAX;
	volatile int64_t t170 = -12954701177422667LL;

    t170 = (x825-(x826-(x827|x828)));

    if (t170 != 2147450879LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x829 = 1;
	int64_t x830 = -1LL;
	volatile uint16_t x831 = 19U;
	static volatile int64_t t171 = -4196LL;

    t171 = (x829-(x830-(x831|x832)));

    if (t171 != 812729LL) { NG(); } else { ; }
	
}

void f172(void) {
    

    t172 = (x837-(x838-(x839|x840)));

    if (t172 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x847 = INT64_MIN;
	volatile int32_t x848 = -4;
	static volatile int64_t t173 = 3067763331735658739LL;

    t173 = (x845-(x846-(x847|x848)));

    if (t173 != -4294967306LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x849 = 1U;
	int16_t x850 = -4;
	uint16_t x852 = UINT16_MAX;
	int32_t t174 = 4734348;

    t174 = (x849-(x850-(x851|x852)));

    if (t174 != 65540) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x853 = 8U;
	int32_t x855 = 8;
	static int32_t x856 = -1;
	uint32_t t175 = 20420022U;

    t175 = (x853-(x854-(x855|x856)));

    if (t175 != 2147483655U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x857 = -1;
	int16_t x858 = 23;
	int8_t x859 = INT8_MAX;
	volatile int8_t x860 = -1;
	int32_t t176 = 1;

    t176 = (x857-(x858-(x859|x860)));

    if (t176 != -25) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x862 = INT32_MIN;
	int8_t x864 = INT8_MAX;
	volatile uint64_t t177 = 122177370874LLU;

    t177 = (x861-(x862-(x863|x864)));

    if (t177 != 18446744071562069942LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x865 = 24387U;
	int16_t x866 = -53;

    t178 = (x865-(x866-(x867|x868)));

    if (t178 != 24567) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x869 = -1;
	uint8_t x870 = 26U;
	int32_t x872 = 3;
	volatile int32_t t179 = 1607;

    t179 = (x869-(x870-(x871|x872)));

    if (t179 != -24) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x873 = UINT32_MAX;
	int64_t x874 = -120631LL;
	volatile int16_t x875 = INT16_MAX;
	volatile int8_t x876 = INT8_MIN;
	volatile int64_t t180 = 7300884746818941LL;

    t180 = (x873-(x874-(x875|x876)));

    if (t180 != 4295087925LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x877 = 224U;
	int8_t x878 = -1;
	int32_t x879 = INT32_MIN;
	uint8_t x880 = 1U;
	static volatile int32_t t181 = -137130627;

    t181 = (x877-(x878-(x879|x880)));

    if (t181 != -2147483422) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x885 = -1LL;
	int64_t x886 = -13LL;
	int64_t x887 = 187631159131LL;
	volatile int64_t t182 = -3823633296563651LL;

    t182 = (x885-(x886-(x887|x888)));

    if (t182 != 11LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x890 = -1;
	volatile int8_t x891 = -1;
	static int32_t x892 = -1;
	volatile int32_t t183 = -230;

    t183 = (x889-(x890-(x891|x892)));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x893 = 10554310U;
	int32_t x896 = INT32_MAX;
	uint32_t t184 = 0U;

    t184 = (x893-(x894-(x895|x896)));

    if (t184 != 10554310U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x897 = 1551U;
	int8_t x898 = -1;
	int32_t x899 = 776447365;
	int32_t x900 = -1;
	int32_t t185 = 47171272;

    t185 = (x897-(x898-(x899|x900)));

    if (t185 != 1551) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x901 = INT32_MIN;
	static uint32_t x902 = 89419U;
	uint64_t x903 = UINT64_MAX;
	volatile int16_t x904 = INT16_MIN;
	static uint64_t t186 = 26LLU;

    t186 = (x901-(x902-(x903|x904)));

    if (t186 != 18446744071561978548LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x905 = -1;
	static int16_t x906 = 12;
	int8_t x907 = INT8_MIN;
	static volatile int64_t x908 = INT64_MAX;
	int64_t t187 = -42824069LL;

    t187 = (x905-(x906-(x907|x908)));

    if (t187 != -14LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x909 = 821276077746911LLU;
	int8_t x910 = INT8_MIN;
	int8_t x911 = INT8_MAX;
	int64_t x912 = INT64_MIN;

    t188 = (x909-(x910-(x911|x912)));

    if (t188 != 9224193312932522974LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x914 = 2421579795316579528LLU;
	int64_t x915 = -1LL;
	static int32_t x916 = INT32_MIN;
	uint64_t t189 = 455004954885872LLU;

    t189 = (x913-(x914-(x915|x916)));

    if (t189 != 16025164278392971959LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x921 = 7422366113LL;
	int32_t x922 = INT32_MIN;
	int16_t x923 = -13;
	static uint32_t x924 = UINT32_MAX;

    t190 = (x921-(x922-(x923|x924)));

    if (t190 != 5274882464LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x926 = -1797;
	int32_t x927 = -1;
	int16_t x928 = INT16_MIN;
	static volatile int32_t t191 = 1180949;

    t191 = (x925-(x926-(x927|x928)));

    if (t191 != -617395931) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x930 = 24;
	uint16_t x931 = 2808U;
	volatile uint8_t x932 = UINT8_MAX;

    t192 = (x929-(x930-(x931|x932)));

    if (t192 != 2794) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x933 = UINT64_MAX;
	uint8_t x934 = UINT8_MAX;
	static int32_t x935 = 347;
	uint16_t x936 = UINT16_MAX;
	static uint64_t t193 = 2701544037025041147LLU;

    t193 = (x933-(x934-(x935|x936)));

    if (t193 != 65279LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x938 = -2423;
	uint64_t x939 = 2265053568677709023LLU;
	int8_t x940 = 0;

    t194 = (x937-(x938-(x939|x940)));

    if (t194 != 2265053566530227798LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x941 = INT64_MIN;
	uint8_t x942 = 2U;
	uint64_t x944 = 35690987121201936LLU;
	volatile uint64_t t195 = 11980684LLU;

    t195 = (x941-(x942-(x943|x944)));

    if (t195 != 9259063023975977753LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x946 = 21;
	int64_t x947 = INT64_MAX;
	int16_t x948 = -1;
	int64_t t196 = 2LL;

    t196 = (x945-(x946-(x947|x948)));

    if (t196 != 79031886528007374LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x950 = -10;
	int64_t x951 = 78315LL;
	int32_t x952 = -31826358;
	volatile int64_t t197 = -8387004LL;

    t197 = (x949-(x950-(x951|x952)));

    if (t197 != -31752208LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x957 = -1;
	uint64_t x958 = 46370082LLU;
	uint32_t x960 = 5259490U;
	static uint64_t t198 = 6422976LLU;

    t198 = (x957-(x958-(x959|x960)));

    if (t198 != 4248597212LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x965 = INT16_MIN;
	int64_t x966 = -1LL;
	volatile int16_t x968 = 15403;
	volatile int64_t t199 = -19LL;

    t199 = (x965-(x966-(x967|x968)));

    if (t199 != 32768LL) { NG(); } else { ; }
	
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

