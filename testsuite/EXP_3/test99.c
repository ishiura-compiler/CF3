
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

static int64_t x7 = -1LL;
static int8_t x8 = INT8_MIN;
volatile int64_t x25 = -1LL;
int64_t t4 = 11LL;
uint32_t x31 = 4U;
int32_t x35 = INT32_MIN;
int16_t x46 = INT16_MIN;
static int8_t x52 = INT8_MAX;
volatile uint8_t x56 = UINT8_MAX;
volatile int32_t t12 = 1;
int8_t x77 = INT8_MIN;
uint32_t x80 = 15809U;
uint32_t x82 = 8U;
volatile int32_t x86 = 196;
static volatile int8_t x103 = -1;
volatile int64_t x104 = -1LL;
static volatile uint64_t t21 = 5400748057947LLU;
int8_t x110 = INT8_MIN;
int8_t x121 = -1;
int32_t x129 = INT32_MAX;
volatile uint8_t x138 = UINT8_MAX;
int8_t x146 = -11;
volatile uint8_t x147 = UINT8_MAX;
int16_t x150 = INT16_MAX;
static volatile uint64_t x152 = 2287824876718513LLU;
int16_t x155 = INT16_MIN;
static int8_t x171 = INT8_MIN;
uint64_t x180 = 204735LLU;
volatile uint64_t t35 = 7LLU;
uint32_t t36 = 0U;
volatile uint8_t x197 = UINT8_MAX;
int32_t x198 = -1;
uint8_t x213 = 1U;
int8_t x214 = INT8_MAX;
volatile uint64_t t43 = 17334463120538106LLU;
volatile int16_t x219 = 7;
uint16_t x224 = UINT16_MAX;
volatile int32_t x238 = INT32_MIN;
volatile uint32_t t47 = 206U;
int8_t x243 = 0;
volatile int16_t x244 = INT16_MAX;
static int64_t x248 = -1LL;
volatile uint32_t t51 = 0U;
int32_t x266 = INT32_MIN;
int32_t x268 = INT32_MAX;
volatile int64_t t54 = 530583541036555820LL;
volatile uint32_t x270 = UINT32_MAX;
volatile int32_t x271 = -1;
static int64_t x272 = INT64_MAX;
volatile int64_t t56 = 0LL;
uint32_t x278 = 70U;
int16_t x279 = INT16_MAX;
int32_t x283 = INT32_MIN;
int32_t x287 = INT32_MIN;
int8_t x301 = INT8_MAX;
volatile int8_t x303 = -1;
volatile uint16_t x314 = 156U;
volatile uint64_t x315 = UINT64_MAX;
volatile uint8_t x317 = 1U;
volatile uint64_t t65 = 42190694379093LLU;
int8_t x330 = INT8_MIN;
uint64_t t67 = 1829712LLU;
int16_t x334 = -408;
uint32_t x341 = UINT32_MAX;
static volatile int32_t x343 = -1;
uint32_t x345 = 5073U;
int16_t x348 = INT16_MIN;
int16_t x364 = INT16_MIN;
uint32_t x365 = UINT32_MAX;
int32_t x366 = INT32_MIN;
volatile uint32_t x382 = UINT32_MAX;
int32_t x385 = -12;
int8_t x397 = 0;
volatile uint8_t x400 = UINT8_MAX;
volatile int16_t x402 = 5356;
volatile int16_t x404 = INT16_MIN;
int64_t x409 = INT64_MAX;
int8_t x412 = 14;
int8_t x419 = INT8_MIN;
volatile int64_t t85 = 1273LL;
uint64_t x426 = UINT64_MAX;
uint32_t x427 = UINT32_MAX;
volatile int64_t x429 = INT64_MAX;
int8_t x432 = INT8_MAX;
int32_t t87 = 0;
int64_t x433 = -1LL;
uint32_t x436 = UINT32_MAX;
volatile int64_t x443 = -67997623892431905LL;
uint8_t x444 = 2U;
int32_t x449 = 1252;
int8_t x456 = INT8_MAX;
int16_t x465 = INT16_MIN;
static volatile int64_t t96 = -527LL;
int8_t x478 = -1;
uint32_t x482 = UINT32_MAX;
int8_t x485 = -29;
uint8_t x491 = UINT8_MAX;
uint16_t x495 = UINT16_MAX;
uint32_t x498 = 312095U;
static int32_t x500 = -2506345;
int32_t t102 = 1995489;
uint32_t x507 = UINT32_MAX;
int64_t x508 = INT64_MIN;
static volatile int32_t t105 = INT32_MIN;
static uint8_t x522 = UINT8_MAX;
volatile uint8_t x526 = UINT8_MAX;
uint32_t x536 = 166785189U;
static volatile int64_t t111 = 33658827LL;
static volatile int8_t x541 = INT8_MIN;
volatile int16_t x546 = INT16_MAX;
static int64_t t114 = -1163LL;
uint64_t x554 = UINT64_MAX;
static volatile int8_t x556 = -1;
volatile int32_t x569 = INT32_MIN;
static volatile uint16_t x570 = UINT16_MAX;
int8_t x571 = 6;
volatile uint8_t x599 = UINT8_MAX;
static uint64_t x605 = UINT64_MAX;
uint16_t x606 = 8U;
static int64_t x612 = -1LL;
uint64_t x620 = 250867594754LLU;
uint64_t t126 = 201552727275197064LLU;
uint32_t x625 = UINT32_MAX;
static uint64_t t129 = 13494953LLU;
int64_t x636 = INT64_MIN;
int32_t x641 = 8717;
uint16_t x642 = UINT16_MAX;
int64_t x645 = INT64_MIN;
uint32_t x648 = 3796U;
uint32_t t133 = 335U;
uint8_t x650 = 2U;
uint16_t x651 = 124U;
int8_t x652 = INT8_MIN;
static volatile int32_t t134 = -799920;
static uint16_t x668 = 1964U;
int64_t x672 = 4LL;
volatile uint8_t x677 = 7U;
int32_t t141 = 3313;
int32_t t142 = 51363;
int64_t x689 = INT64_MAX;
volatile int8_t x693 = INT8_MIN;
volatile int8_t x699 = INT8_MAX;
uint8_t x707 = UINT8_MAX;
static uint64_t x711 = 429LLU;
uint64_t t148 = 61624648512LLU;
int8_t x713 = -1;
volatile int32_t t149 = -153501652;
uint8_t x717 = UINT8_MAX;
int8_t x720 = -1;
int64_t t152 = -1LL;
int32_t x730 = 55;
static int32_t x734 = -1;
static uint64_t t154 = 23077353LLU;
int16_t x741 = -4;
volatile int32_t x749 = INT32_MIN;
uint64_t t160 = 4107284550642LLU;
static volatile int64_t x784 = -3246689163164501035LL;
int64_t t163 = -2050171LL;
volatile uint8_t x786 = 64U;
int64_t x788 = 729762708911LL;
int64_t t164 = -9215312417781185LL;
int16_t x796 = -1;
volatile uint64_t t169 = 707934LLU;
int8_t x812 = INT8_MAX;
int32_t t170 = -2;
volatile int32_t x820 = 22;
int16_t x822 = INT16_MIN;
int16_t x823 = INT16_MIN;
uint64_t x824 = 7794290LLU;
uint64_t t173 = 125319677477LLU;
uint32_t x826 = 5084413U;
static int16_t x831 = -1;
uint32_t t177 = 36289928U;
static uint16_t x845 = UINT16_MAX;
uint16_t x846 = 27533U;
int16_t x847 = 71;
uint64_t x848 = 23111391092021350LLU;
uint64_t x855 = 4133633581361LLU;
static uint64_t x856 = 18LLU;
volatile int32_t x867 = INT32_MAX;
volatile int64_t x868 = INT64_MIN;
volatile int32_t t185 = 5;
volatile int64_t t186 = 62244LL;
volatile int64_t x878 = -1LL;
uint32_t x888 = 459743U;
volatile int64_t x891 = INT64_MAX;
int8_t x904 = INT8_MIN;
int32_t t192 = -184558332;
uint16_t x907 = UINT16_MAX;
int32_t t193 = -3193459;
int8_t x912 = -1;
static uint32_t x916 = 8366764U;
static volatile uint32_t t195 = 29641945U;
int16_t x917 = 5955;
volatile uint16_t x919 = 22471U;
int32_t x923 = INT32_MIN;
volatile int32_t x924 = 184816;
int32_t x926 = INT32_MIN;
uint16_t x931 = 1192U;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int16_t x2 = -37;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -61577239845369799LL;

    t0 = ((x1==x2)+(x3+x4));

    if (t0 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	static int32_t x6 = INT32_MAX;
	int64_t t1 = -110300254853610622LL;

    t1 = ((x5==x6)+(x7+x8));

    if (t1 != -129LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x13 = -11;
	uint64_t x14 = 2229764834070113406LLU;
	volatile int64_t x15 = 3066821727LL;
	volatile int8_t x16 = 1;
	volatile int64_t t2 = -2LL;

    t2 = ((x13==x14)+(x15+x16));

    if (t2 != 3066821728LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MIN;
	uint32_t x19 = UINT32_MAX;
	static uint8_t x20 = UINT8_MAX;
	static uint32_t t3 = 90052916U;

    t3 = ((x17==x18)+(x19+x20));

    if (t3 != 254U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x26 = 145LLU;
	int64_t x27 = -8158311432392913LL;
	int32_t x28 = INT32_MIN;

    t4 = ((x25==x26)+(x27+x28));

    if (t4 != -8158313579876561LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x29 = 30LL;
	int64_t x30 = -1LL;
	int32_t x32 = INT32_MIN;
	volatile uint32_t t5 = 14810U;

    t5 = ((x29==x30)+(x31+x32));

    if (t5 != 2147483652U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = 179;
	uint32_t x34 = 723U;
	int8_t x36 = INT8_MAX;
	int32_t t6 = 260;

    t6 = ((x33==x34)+(x35+x36));

    if (t6 != -2147483521) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = INT32_MIN;
	uint16_t x38 = 31U;
	int64_t x39 = 4116LL;
	volatile uint16_t x40 = UINT16_MAX;
	int64_t t7 = -81517765LL;

    t7 = ((x37==x38)+(x39+x40));

    if (t7 != 69651LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x45 = 43U;
	int64_t x47 = -35369LL;
	static volatile int16_t x48 = 0;
	volatile int64_t t8 = 2699890194LL;

    t8 = ((x45==x46)+(x47+x48));

    if (t8 != -35369LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	int16_t x51 = -55;
	static volatile int32_t t9 = 1;

    t9 = ((x49==x50)+(x51+x52));

    if (t9 != 72) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = INT8_MIN;
	uint8_t x54 = 1U;
	uint16_t x55 = 379U;
	static volatile int32_t t10 = -1742238;

    t10 = ((x53==x54)+(x55+x56));

    if (t10 != 634) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x57 = INT16_MIN;
	uint64_t x58 = 835516LLU;
	static uint64_t x59 = 12485029LLU;
	int8_t x60 = 23;
	uint64_t t11 = 912452553049LLU;

    t11 = ((x57==x58)+(x59+x60));

    if (t11 != 12485052LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = -1;
	static volatile int64_t x62 = INT64_MIN;
	int8_t x63 = 3;
	int32_t x64 = 916556;

    t12 = ((x61==x62)+(x63+x64));

    if (t12 != 916559) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	int16_t x67 = -1;
	int16_t x68 = -1;
	volatile int32_t t13 = -175961314;

    t13 = ((x65==x66)+(x67+x68));

    if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x73 = -1;
	int16_t x74 = 197;
	int8_t x75 = INT8_MAX;
	int16_t x76 = -1;
	volatile int32_t t14 = -37260040;

    t14 = ((x73==x74)+(x75+x76));

    if (t14 != 126) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x78 = 6U;
	int8_t x79 = INT8_MAX;
	uint32_t t15 = 157327265U;

    t15 = ((x77==x78)+(x79+x80));

    if (t15 != 15936U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = 348814587LLU;
	uint32_t x83 = UINT32_MAX;
	uint8_t x84 = 103U;
	uint32_t t16 = 551279U;

    t16 = ((x81==x82)+(x83+x84));

    if (t16 != 102U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x85 = UINT32_MAX;
	int8_t x87 = INT8_MAX;
	uint32_t x88 = 119U;
	uint32_t t17 = 2782270U;

    t17 = ((x85==x86)+(x87+x88));

    if (t17 != 246U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = -1;
	static int32_t x90 = -1;
	int16_t x91 = INT16_MIN;
	int32_t x92 = -1;
	volatile int32_t t18 = -517127978;

    t18 = ((x89==x90)+(x91+x92));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = INT16_MAX;
	static uint8_t x94 = 1U;
	uint16_t x95 = 45U;
	static int16_t x96 = INT16_MIN;
	int32_t t19 = 9198755;

    t19 = ((x93==x94)+(x95+x96));

    if (t19 != -32723) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = INT32_MIN;
	static volatile int16_t x102 = -33;
	int64_t t20 = -28280110321671LL;

    t20 = ((x101==x102)+(x103+x104));

    if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = 4726;
	int8_t x106 = -1;
	uint64_t x107 = 450754007LLU;
	int64_t x108 = INT64_MIN;

    t21 = ((x105==x106)+(x107+x108));

    if (t21 != 9223372037305529815LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x109 = 2U;
	int64_t x111 = -506443738LL;
	int16_t x112 = INT16_MIN;
	int64_t t22 = 906815491535436LL;

    t22 = ((x109==x110)+(x111+x112));

    if (t22 != -506476506LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x117 = UINT64_MAX;
	volatile int8_t x118 = -17;
	uint8_t x119 = UINT8_MAX;
	static int64_t x120 = -1LL;
	volatile int64_t t23 = -57330890731LL;

    t23 = ((x117==x118)+(x119+x120));

    if (t23 != 254LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x122 = -6;
	int8_t x123 = INT8_MIN;
	uint8_t x124 = 0U;
	volatile int32_t t24 = 1;

    t24 = ((x121==x122)+(x123+x124));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x125 = 1U;
	static uint16_t x126 = 6747U;
	static int32_t x127 = 50;
	int16_t x128 = 194;
	volatile int32_t t25 = -746982;

    t25 = ((x125==x126)+(x127+x128));

    if (t25 != 244) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x130 = 3U;
	int8_t x131 = -19;
	int64_t x132 = INT64_MAX;
	volatile int64_t t26 = 210208272129211628LL;

    t26 = ((x129==x130)+(x131+x132));

    if (t26 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x133 = UINT32_MAX;
	uint32_t x134 = UINT32_MAX;
	uint32_t x135 = UINT32_MAX;
	volatile uint64_t x136 = 22746563LLU;
	volatile uint64_t t27 = 1956127614581960LLU;

    t27 = ((x133==x134)+(x135+x136));

    if (t27 != 4317713859LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x137 = INT16_MAX;
	int16_t x139 = INT16_MAX;
	volatile int64_t x140 = -1LL;
	static volatile int64_t t28 = 78081683713493LL;

    t28 = ((x137==x138)+(x139+x140));

    if (t28 != 32766LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = -1;
	static int32_t x142 = INT32_MIN;
	uint16_t x143 = 1183U;
	int8_t x144 = -1;
	int32_t t29 = -52;

    t29 = ((x141==x142)+(x143+x144));

    if (t29 != 1182) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x145 = 3040U;
	static int32_t x148 = INT32_MIN;
	volatile int32_t t30 = -217;

    t30 = ((x145==x146)+(x147+x148));

    if (t30 != -2147483393) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = 5611;
	int64_t x151 = -1LL;
	static volatile uint64_t t31 = 129LLU;

    t31 = ((x149==x150)+(x151+x152));

    if (t31 != 2287824876718512LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x153 = INT8_MAX;
	volatile uint8_t x154 = 0U;
	int16_t x156 = INT16_MIN;
	volatile int32_t t32 = 36483;

    t32 = ((x153==x154)+(x155+x156));

    if (t32 != -65536) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x157 = -11332708;
	int16_t x158 = INT16_MAX;
	uint16_t x159 = 5179U;
	int8_t x160 = -1;
	volatile int32_t t33 = -470531783;

    t33 = ((x157==x158)+(x159+x160));

    if (t33 != 5178) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x169 = -13LL;
	int16_t x170 = INT16_MAX;
	int32_t x172 = -1;
	volatile int32_t t34 = 2;

    t34 = ((x169==x170)+(x171+x172));

    if (t34 != -129) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MIN;
	int8_t x179 = -1;

    t35 = ((x177==x178)+(x179+x180));

    if (t35 != 204735LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x181 = -1LL;
	volatile uint8_t x182 = 1U;
	static int8_t x183 = INT8_MIN;
	volatile uint32_t x184 = 3184U;

    t36 = ((x181==x182)+(x183+x184));

    if (t36 != 3056U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x185 = INT64_MIN;
	uint64_t x186 = UINT64_MAX;
	uint32_t x187 = 424215U;
	uint64_t x188 = 5419925763000609906LLU;
	volatile uint64_t t37 = 25LLU;

    t37 = ((x185==x186)+(x187+x188));

    if (t37 != 5419925763001034121LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x189 = INT8_MAX;
	volatile int8_t x190 = INT8_MIN;
	volatile int32_t x191 = 4;
	int16_t x192 = INT16_MAX;
	int32_t t38 = -7914;

    t38 = ((x189==x190)+(x191+x192));

    if (t38 != 32771) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x193 = 0;
	int16_t x194 = 939;
	int32_t x195 = INT32_MIN;
	int8_t x196 = 0;
	int32_t t39 = INT32_MIN;

    t39 = ((x193==x194)+(x195+x196));

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x199 = 490U;
	static int32_t x200 = -20065;
	volatile int32_t t40 = -3533;

    t40 = ((x197==x198)+(x199+x200));

    if (t40 != -19575) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x201 = UINT32_MAX;
	static int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MIN;
	static uint32_t x204 = 456022U;
	uint32_t t41 = 17950U;

    t41 = ((x201==x202)+(x203+x204));

    if (t41 != 423254U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x205 = 76U;
	volatile int8_t x206 = INT8_MIN;
	int32_t x207 = -9070325;
	static int16_t x208 = -1;
	volatile int32_t t42 = -458507;

    t42 = ((x205==x206)+(x207+x208));

    if (t42 != -9070326) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x215 = 1553095316078216608LLU;
	uint64_t x216 = 11802739412543999LLU;

    t43 = ((x213==x214)+(x215+x216));

    if (t43 != 1564898055490760607LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x217 = 3664486U;
	uint16_t x218 = 21293U;
	static uint8_t x220 = 0U;
	static volatile int32_t t44 = 580;

    t44 = ((x217==x218)+(x219+x220));

    if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x221 = -1LL;
	static volatile int64_t x222 = -1LL;
	uint16_t x223 = 185U;
	volatile int32_t t45 = 47287621;

    t45 = ((x221==x222)+(x223+x224));

    if (t45 != 65721) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x229 = UINT32_MAX;
	static uint64_t x230 = 353596553945LLU;
	static uint64_t x231 = UINT64_MAX;
	int64_t x232 = INT64_MIN;
	uint64_t t46 = 438988064LLU;

    t46 = ((x229==x230)+(x231+x232));

    if (t46 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x237 = -1;
	static uint32_t x239 = 918895U;
	static int16_t x240 = 15961;

    t47 = ((x237==x238)+(x239+x240));

    if (t47 != 934856U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x241 = 14LL;
	volatile int64_t x242 = 480297478082414604LL;
	static int32_t t48 = 320310930;

    t48 = ((x241==x242)+(x243+x244));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x245 = UINT64_MAX;
	volatile uint16_t x246 = 8U;
	int8_t x247 = 7;
	static int64_t t49 = -76LL;

    t49 = ((x245==x246)+(x247+x248));

    if (t49 != 6LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x249 = 5;
	static int8_t x250 = INT8_MIN;
	volatile uint8_t x251 = 1U;
	volatile int8_t x252 = INT8_MIN;
	int32_t t50 = 951859;

    t50 = ((x249==x250)+(x251+x252));

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x253 = 7988;
	static volatile int16_t x254 = -3311;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = INT32_MIN;

    t51 = ((x253==x254)+(x255+x256));

    if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x257 = UINT32_MAX;
	static uint8_t x258 = 3U;
	static int32_t x259 = INT32_MAX;
	int64_t x260 = 111LL;
	volatile int64_t t52 = 17080371154LL;

    t52 = ((x257==x258)+(x259+x260));

    if (t52 != 2147483758LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x261 = 9778425U;
	int8_t x262 = INT8_MIN;
	uint16_t x263 = 38U;
	int8_t x264 = INT8_MAX;
	volatile int32_t t53 = 3019;

    t53 = ((x261==x262)+(x263+x264));

    if (t53 != 165) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x265 = -1;
	int64_t x267 = INT64_MIN;

    t54 = ((x265==x266)+(x267+x268));

    if (t54 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x269 = INT64_MIN;
	volatile int64_t t55 = -22571052819584LL;

    t55 = ((x269==x270)+(x271+x272));

    if (t55 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x273 = 3U;
	static int32_t x274 = -4296054;
	static uint16_t x275 = 1614U;
	volatile int64_t x276 = 1LL;

    t56 = ((x273==x274)+(x275+x276));

    if (t56 != 1615LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x277 = INT8_MAX;
	static uint64_t x280 = 251LLU;
	volatile uint64_t t57 = 7225879299LLU;

    t57 = ((x277==x278)+(x279+x280));

    if (t57 != 33018LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x281 = 27U;
	volatile int8_t x282 = -9;
	int64_t x284 = INT64_MAX;
	volatile int64_t t58 = -3238116198389LL;

    t58 = ((x281==x282)+(x283+x284));

    if (t58 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x285 = -1;
	uint8_t x286 = 0U;
	static int16_t x288 = 0;
	int32_t t59 = INT32_MIN;

    t59 = ((x285==x286)+(x287+x288));

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x289 = -12;
	static int64_t x290 = INT64_MIN;
	static int32_t x291 = -1;
	int8_t x292 = 1;
	int32_t t60 = -31;

    t60 = ((x289==x290)+(x291+x292));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x297 = -1;
	int64_t x298 = -1LL;
	uint32_t x299 = 65036U;
	int8_t x300 = INT8_MAX;
	volatile uint32_t t61 = 18U;

    t61 = ((x297==x298)+(x299+x300));

    if (t61 != 65164U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x302 = INT64_MIN;
	volatile int32_t x304 = -3385851;
	int32_t t62 = 5104672;

    t62 = ((x301==x302)+(x303+x304));

    if (t62 != -3385852) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x309 = -1;
	int16_t x310 = INT16_MIN;
	uint16_t x311 = 1U;
	int8_t x312 = 1;
	static volatile int32_t t63 = -12;

    t63 = ((x309==x310)+(x311+x312));

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x313 = 11482U;
	volatile uint64_t x316 = 33698991959LLU;
	volatile uint64_t t64 = 1991LLU;

    t64 = ((x313==x314)+(x315+x316));

    if (t64 != 33698991958LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x318 = 1981;
	int64_t x319 = -1LL;
	uint64_t x320 = 379930986072LLU;

    t65 = ((x317==x318)+(x319+x320));

    if (t65 != 379930986071LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x321 = INT16_MIN;
	volatile uint32_t x322 = 1895380U;
	int16_t x323 = 4567;
	int64_t x324 = INT64_MIN;
	int64_t t66 = 39762706LL;

    t66 = ((x321==x322)+(x323+x324));

    if (t66 != -9223372036854771241LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x329 = UINT8_MAX;
	uint32_t x331 = 1599U;
	uint64_t x332 = UINT64_MAX;

    t67 = ((x329==x330)+(x331+x332));

    if (t67 != 1598LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x333 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	static volatile int16_t x336 = 0;
	volatile int32_t t68 = INT32_MIN;

    t68 = ((x333==x334)+(x335+x336));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x337 = INT32_MIN;
	int64_t x338 = -1LL;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t69 = -1;

    t69 = ((x337==x338)+(x339+x340));

    if (t69 != -32896) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x342 = UINT64_MAX;
	volatile int16_t x344 = INT16_MIN;
	static volatile int32_t t70 = 2352;

    t70 = ((x341==x342)+(x343+x344));

    if (t70 != -32769) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x346 = -1;
	int8_t x347 = -1;
	int32_t t71 = 89566;

    t71 = ((x345==x346)+(x347+x348));

    if (t71 != -32769) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x353 = UINT8_MAX;
	uint8_t x354 = UINT8_MAX;
	int64_t x355 = INT64_MIN;
	uint32_t x356 = 6U;
	volatile int64_t t72 = 2LL;

    t72 = ((x353==x354)+(x355+x356));

    if (t72 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x357 = 3361U;
	int8_t x358 = 0;
	static int16_t x359 = INT16_MIN;
	volatile uint16_t x360 = 12294U;
	int32_t t73 = 62;

    t73 = ((x357==x358)+(x359+x360));

    if (t73 != -20474) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x361 = -357;
	volatile int8_t x362 = INT8_MIN;
	volatile int32_t x363 = -12237;
	int32_t t74 = 1161;

    t74 = ((x361==x362)+(x363+x364));

    if (t74 != -45005) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x367 = INT8_MIN;
	uint16_t x368 = UINT16_MAX;
	int32_t t75 = 13454;

    t75 = ((x365==x366)+(x367+x368));

    if (t75 != 65407) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x369 = 1482U;
	uint32_t x370 = 14957738U;
	static int8_t x371 = INT8_MIN;
	uint8_t x372 = 1U;
	volatile int32_t t76 = -13015803;

    t76 = ((x369==x370)+(x371+x372));

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MAX;
	int64_t x375 = -1LL;
	volatile int64_t x376 = -2096034604593LL;
	volatile int64_t t77 = -211664LL;

    t77 = ((x373==x374)+(x375+x376));

    if (t77 != -2096034604594LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x377 = INT8_MAX;
	int16_t x378 = -1;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = 182452U;
	volatile uint32_t t78 = 618923U;

    t78 = ((x377==x378)+(x379+x380));

    if (t78 != 182324U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x381 = 31961LLU;
	volatile uint32_t x383 = 82259U;
	int16_t x384 = -1;
	uint32_t t79 = 40988904U;

    t79 = ((x381==x382)+(x383+x384));

    if (t79 != 82258U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x386 = -1LL;
	static volatile int32_t x387 = -1;
	static int16_t x388 = INT16_MAX;
	static int32_t t80 = 352430789;

    t80 = ((x385==x386)+(x387+x388));

    if (t80 != 32766) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x389 = INT8_MIN;
	static int16_t x390 = -2;
	int64_t x391 = -17036150392763LL;
	static int8_t x392 = INT8_MAX;
	int64_t t81 = 104634247LL;

    t81 = ((x389==x390)+(x391+x392));

    if (t81 != -17036150392636LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x398 = -1;
	volatile int64_t x399 = 7534248027LL;
	int64_t t82 = -1210225LL;

    t82 = ((x397==x398)+(x399+x400));

    if (t82 != 7534248282LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x401 = -1;
	static volatile int8_t x403 = 0;
	volatile int32_t t83 = 4307128;

    t83 = ((x401==x402)+(x403+x404));

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x410 = -81961217200034LL;
	static int8_t x411 = INT8_MIN;
	static int32_t t84 = 71908;

    t84 = ((x409==x410)+(x411+x412));

    if (t84 != -114) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x417 = -1;
	static uint16_t x418 = UINT16_MAX;
	int64_t x420 = -406161226LL;

    t85 = ((x417==x418)+(x419+x420));

    if (t85 != -406161354LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x425 = 3984U;
	int8_t x428 = INT8_MAX;
	volatile uint32_t t86 = 1883U;

    t86 = ((x425==x426)+(x427+x428));

    if (t86 != 126U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x430 = INT8_MAX;
	uint8_t x431 = 0U;

    t87 = ((x429==x430)+(x431+x432));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x434 = 5055875090LLU;
	int8_t x435 = -4;
	volatile uint32_t t88 = 587126721U;

    t88 = ((x433==x434)+(x435+x436));

    if (t88 != 4294967291U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x437 = INT64_MIN;
	static int8_t x438 = INT8_MIN;
	int16_t x439 = INT16_MIN;
	int8_t x440 = -1;
	int32_t t89 = 375723492;

    t89 = ((x437==x438)+(x439+x440));

    if (t89 != -32769) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x441 = 80U;
	uint64_t x442 = 177655858596035967LLU;
	volatile int64_t t90 = -294797466424LL;

    t90 = ((x441==x442)+(x443+x444));

    if (t90 != -67997623892431903LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x445 = 1U;
	volatile int64_t x446 = INT64_MIN;
	static volatile uint32_t x447 = 3U;
	uint32_t x448 = 3535589U;
	uint32_t t91 = 54277619U;

    t91 = ((x445==x446)+(x447+x448));

    if (t91 != 3535592U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x450 = INT64_MIN;
	int8_t x451 = 5;
	int16_t x452 = 145;
	volatile int32_t t92 = 72187;

    t92 = ((x449==x450)+(x451+x452));

    if (t92 != 150) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x453 = -1LL;
	int64_t x454 = -919LL;
	static int8_t x455 = INT8_MIN;
	int32_t t93 = -303;

    t93 = ((x453==x454)+(x455+x456));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x457 = INT8_MAX;
	static uint64_t x458 = 1366313681LLU;
	int16_t x459 = INT16_MIN;
	int8_t x460 = -1;
	volatile int32_t t94 = 232;

    t94 = ((x457==x458)+(x459+x460));

    if (t94 != -32769) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x466 = 7;
	int8_t x467 = -1;
	int32_t x468 = INT32_MAX;
	int32_t t95 = -31360;

    t95 = ((x465==x466)+(x467+x468));

    if (t95 != 2147483646) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x473 = 341998136;
	static uint16_t x474 = 3599U;
	uint32_t x475 = UINT32_MAX;
	int64_t x476 = -1277664LL;

    t96 = ((x473==x474)+(x475+x476));

    if (t96 != 4293689631LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x477 = -1766366007646585LL;
	uint8_t x479 = 24U;
	static int64_t x480 = INT64_MIN;
	static volatile int64_t t97 = 207242953842644500LL;

    t97 = ((x477==x478)+(x479+x480));

    if (t97 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x481 = 115374U;
	static int32_t x483 = -1;
	int16_t x484 = 55;
	volatile int32_t t98 = -48542654;

    t98 = ((x481==x482)+(x483+x484));

    if (t98 != 54) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x486 = UINT64_MAX;
	uint32_t x487 = 376968625U;
	int8_t x488 = -55;
	volatile uint32_t t99 = 10491U;

    t99 = ((x485==x486)+(x487+x488));

    if (t99 != 376968570U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x489 = -1;
	uint32_t x490 = 6130540U;
	uint16_t x492 = 250U;
	static volatile int32_t t100 = -3180;

    t100 = ((x489==x490)+(x491+x492));

    if (t100 != 505) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x493 = 0;
	volatile uint64_t x494 = 30631477473LLU;
	int64_t x496 = -1LL;
	volatile int64_t t101 = -60LL;

    t101 = ((x493==x494)+(x495+x496));

    if (t101 != 65534LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x497 = INT64_MAX;
	static int32_t x499 = -1;

    t102 = ((x497==x498)+(x499+x500));

    if (t102 != -2506346) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x501 = INT64_MIN;
	static int8_t x502 = INT8_MAX;
	uint16_t x503 = 7187U;
	int8_t x504 = -1;
	int32_t t103 = -230046873;

    t103 = ((x501==x502)+(x503+x504));

    if (t103 != 7186) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x505 = 1764032U;
	int64_t x506 = INT64_MAX;
	static volatile int64_t t104 = -2732818LL;

    t104 = ((x505==x506)+(x507+x508));

    if (t104 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x509 = UINT32_MAX;
	int16_t x510 = INT16_MAX;
	uint8_t x511 = 0U;
	int32_t x512 = INT32_MIN;

    t105 = ((x509==x510)+(x511+x512));

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x513 = UINT32_MAX;
	uint32_t x514 = 328740898U;
	volatile uint32_t x515 = 4U;
	static int8_t x516 = INT8_MIN;
	volatile uint32_t t106 = 821547U;

    t106 = ((x513==x514)+(x515+x516));

    if (t106 != 4294967172U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x517 = -3LL;
	int8_t x518 = 0;
	static volatile int32_t x519 = -1;
	int8_t x520 = INT8_MIN;
	volatile int32_t t107 = 6647772;

    t107 = ((x517==x518)+(x519+x520));

    if (t107 != -129) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x521 = -689;
	int32_t x523 = -1;
	static uint64_t x524 = UINT64_MAX;
	volatile uint64_t t108 = 10233941587LLU;

    t108 = ((x521==x522)+(x523+x524));

    if (t108 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x525 = 28023072955LLU;
	int64_t x527 = -192609568406LL;
	uint64_t x528 = UINT64_MAX;
	static uint64_t t109 = 2270060606380389LLU;

    t109 = ((x525==x526)+(x527+x528));

    if (t109 != 18446743881099983209LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x533 = INT8_MIN;
	volatile uint8_t x534 = 77U;
	int16_t x535 = 2264;
	volatile uint32_t t110 = 0U;

    t110 = ((x533==x534)+(x535+x536));

    if (t110 != 166787453U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x537 = INT8_MIN;
	uint64_t x538 = UINT64_MAX;
	static int64_t x539 = -1LL;
	static uint8_t x540 = UINT8_MAX;

    t111 = ((x537==x538)+(x539+x540));

    if (t111 != 254LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x542 = INT64_MIN;
	int32_t x543 = INT32_MAX;
	int8_t x544 = INT8_MIN;
	int32_t t112 = 1172;

    t112 = ((x541==x542)+(x543+x544));

    if (t112 != 2147483519) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x545 = INT64_MIN;
	int16_t x547 = INT16_MIN;
	int8_t x548 = -1;
	volatile int32_t t113 = -8623;

    t113 = ((x545==x546)+(x547+x548));

    if (t113 != -32769) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x549 = 26;
	uint16_t x550 = 587U;
	volatile int64_t x551 = -15133644LL;
	int64_t x552 = 7206905640577LL;

    t114 = ((x549==x550)+(x551+x552));

    if (t114 != 7206890506933LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x553 = INT64_MAX;
	int32_t x555 = -1;
	volatile int32_t t115 = 24727;

    t115 = ((x553==x554)+(x555+x556));

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x557 = 1U;
	int32_t x558 = INT32_MIN;
	volatile uint8_t x559 = 2U;
	int16_t x560 = -6;
	static volatile int32_t t116 = -28;

    t116 = ((x557==x558)+(x559+x560));

    if (t116 != -4) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x561 = 1;
	uint16_t x562 = 5891U;
	uint32_t x563 = UINT32_MAX;
	volatile int8_t x564 = INT8_MAX;
	volatile uint32_t t117 = 1348U;

    t117 = ((x561==x562)+(x563+x564));

    if (t117 != 126U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x565 = 5U;
	uint8_t x566 = 0U;
	int16_t x567 = INT16_MAX;
	static volatile uint8_t x568 = UINT8_MAX;
	static volatile int32_t t118 = 3085598;

    t118 = ((x565==x566)+(x567+x568));

    if (t118 != 33022) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x572 = -1;
	volatile int32_t t119 = 16865755;

    t119 = ((x569==x570)+(x571+x572));

    if (t119 != 5) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x577 = 36U;
	uint8_t x578 = UINT8_MAX;
	int32_t x579 = 725482475;
	static uint16_t x580 = 55U;
	volatile int32_t t120 = 1026;

    t120 = ((x577==x578)+(x579+x580));

    if (t120 != 725482530) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x585 = INT8_MIN;
	static int64_t x586 = 116031995899LL;
	volatile int16_t x587 = INT16_MAX;
	int16_t x588 = -1;
	int32_t t121 = -14340;

    t121 = ((x585==x586)+(x587+x588));

    if (t121 != 32766) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x597 = INT8_MIN;
	int8_t x598 = INT8_MIN;
	static int8_t x600 = 1;
	volatile int32_t t122 = 0;

    t122 = ((x597==x598)+(x599+x600));

    if (t122 != 257) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x607 = INT32_MIN;
	uint8_t x608 = 23U;
	static int32_t t123 = 50;

    t123 = ((x605==x606)+(x607+x608));

    if (t123 != -2147483625) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x609 = -9757752006387LL;
	static uint8_t x610 = 55U;
	static uint16_t x611 = UINT16_MAX;
	int64_t t124 = 1LL;

    t124 = ((x609==x610)+(x611+x612));

    if (t124 != 65534LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x613 = -1;
	uint16_t x614 = UINT16_MAX;
	uint32_t x615 = 5043U;
	uint32_t x616 = 41U;
	static uint32_t t125 = 234532U;

    t125 = ((x613==x614)+(x615+x616));

    if (t125 != 5084U) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x617 = -1;
	int32_t x618 = -18770384;
	volatile uint64_t x619 = UINT64_MAX;

    t126 = ((x617==x618)+(x619+x620));

    if (t126 != 250867594753LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x621 = -1;
	int8_t x622 = INT8_MIN;
	int32_t x623 = -1;
	static uint8_t x624 = 44U;
	volatile int32_t t127 = -114;

    t127 = ((x621==x622)+(x623+x624));

    if (t127 != 43) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x626 = -1LL;
	static uint16_t x627 = 3827U;
	uint16_t x628 = 15U;
	static volatile int32_t t128 = 1;

    t128 = ((x625==x626)+(x627+x628));

    if (t128 != 3842) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x629 = 43195908;
	static int16_t x630 = -29;
	static int32_t x631 = INT32_MIN;
	uint64_t x632 = 0LLU;

    t129 = ((x629==x630)+(x631+x632));

    if (t129 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x633 = -1;
	static int8_t x634 = INT8_MIN;
	int64_t x635 = 4064187395389LL;
	static volatile int64_t t130 = -185400LL;

    t130 = ((x633==x634)+(x635+x636));

    if (t130 != -9223367972667380419LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x637 = UINT32_MAX;
	static int32_t x638 = INT32_MIN;
	int64_t x639 = -1LL;
	volatile int32_t x640 = -1;
	static volatile int64_t t131 = 270732LL;

    t131 = ((x637==x638)+(x639+x640));

    if (t131 != -2LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x643 = INT8_MAX;
	static uint32_t x644 = 275611127U;
	uint32_t t132 = 4U;

    t132 = ((x641==x642)+(x643+x644));

    if (t132 != 275611254U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x646 = INT8_MIN;
	volatile int8_t x647 = INT8_MIN;

    t133 = ((x645==x646)+(x647+x648));

    if (t133 != 3668U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x649 = UINT8_MAX;

    t134 = ((x649==x650)+(x651+x652));

    if (t134 != -4) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x653 = INT64_MIN;
	volatile int8_t x654 = -1;
	uint32_t x655 = 682056U;
	volatile int64_t x656 = 31945268334LL;
	int64_t t135 = -11LL;

    t135 = ((x653==x654)+(x655+x656));

    if (t135 != 31945950390LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x661 = -1LL;
	volatile int64_t x662 = INT64_MAX;
	int32_t x663 = 55;
	int32_t x664 = 4244;
	int32_t t136 = 0;

    t136 = ((x661==x662)+(x663+x664));

    if (t136 != 4299) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x665 = -1LL;
	int16_t x666 = INT16_MIN;
	uint8_t x667 = UINT8_MAX;
	int32_t t137 = -24360;

    t137 = ((x665==x666)+(x667+x668));

    if (t137 != 2219) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x669 = INT64_MIN;
	static int16_t x670 = INT16_MIN;
	volatile uint8_t x671 = UINT8_MAX;
	int64_t t138 = -40405103066477874LL;

    t138 = ((x669==x670)+(x671+x672));

    if (t138 != 259LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x673 = -1LL;
	volatile int16_t x674 = -408;
	static int8_t x675 = -1;
	int8_t x676 = INT8_MIN;
	int32_t t139 = 775740556;

    t139 = ((x673==x674)+(x675+x676));

    if (t139 != -129) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x678 = UINT8_MAX;
	volatile int64_t x679 = -1LL;
	volatile uint8_t x680 = UINT8_MAX;
	int64_t t140 = 37948276227LL;

    t140 = ((x677==x678)+(x679+x680));

    if (t140 != 254LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x681 = 6U;
	volatile int32_t x682 = INT32_MAX;
	static int8_t x683 = INT8_MAX;
	int32_t x684 = INT32_MIN;

    t141 = ((x681==x682)+(x683+x684));

    if (t141 != -2147483521) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x685 = -569847LL;
	uint16_t x686 = UINT16_MAX;
	uint16_t x687 = UINT16_MAX;
	int16_t x688 = -6984;

    t142 = ((x685==x686)+(x687+x688));

    if (t142 != 58551) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x690 = INT8_MIN;
	uint16_t x691 = 13536U;
	volatile uint64_t x692 = 0LLU;
	uint64_t t143 = 2277LLU;

    t143 = ((x689==x690)+(x691+x692));

    if (t143 != 13536LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x694 = -1;
	static uint64_t x695 = UINT64_MAX;
	uint16_t x696 = UINT16_MAX;
	volatile uint64_t t144 = 1LLU;

    t144 = ((x693==x694)+(x695+x696));

    if (t144 != 65534LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x697 = UINT32_MAX;
	uint64_t x698 = 209198792165250LLU;
	int8_t x700 = -1;
	int32_t t145 = -2;

    t145 = ((x697==x698)+(x699+x700));

    if (t145 != 126) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x701 = INT8_MIN;
	uint16_t x702 = 16057U;
	int16_t x703 = 126;
	int16_t x704 = -1352;
	int32_t t146 = 28;

    t146 = ((x701==x702)+(x703+x704));

    if (t146 != -1226) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x705 = 508LLU;
	int64_t x706 = 41LL;
	uint64_t x708 = 28LLU;
	uint64_t t147 = 617292121909LLU;

    t147 = ((x705==x706)+(x707+x708));

    if (t147 != 283LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x709 = INT64_MIN;
	uint16_t x710 = 1005U;
	int8_t x712 = -1;

    t148 = ((x709==x710)+(x711+x712));

    if (t148 != 428LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x714 = INT8_MIN;
	uint8_t x715 = 11U;
	volatile uint16_t x716 = 1U;

    t149 = ((x713==x714)+(x715+x716));

    if (t149 != 12) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x718 = INT64_MIN;
	volatile int8_t x719 = INT8_MAX;
	int32_t t150 = 53;

    t150 = ((x717==x718)+(x719+x720));

    if (t150 != 126) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x721 = -1LL;
	volatile uint64_t x722 = 992LLU;
	int16_t x723 = INT16_MAX;
	volatile int8_t x724 = 1;
	static volatile int32_t t151 = 2586;

    t151 = ((x721==x722)+(x723+x724));

    if (t151 != 32768) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x725 = 85044824364127LLU;
	volatile int16_t x726 = -3;
	int64_t x727 = 1728434719303LL;
	int64_t x728 = -7989977132LL;

    t152 = ((x725==x726)+(x727+x728));

    if (t152 != 1720444742171LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x729 = 1926LL;
	static volatile uint64_t x731 = 25327022793LLU;
	static int16_t x732 = 88;
	uint64_t t153 = 41588LLU;

    t153 = ((x729==x730)+(x731+x732));

    if (t153 != 25327022881LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	static int16_t x735 = 3;
	uint64_t x736 = 95433212905501110LLU;

    t154 = ((x733==x734)+(x735+x736));

    if (t154 != 95433212905501114LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x737 = -4610665005LL;
	int32_t x738 = -453;
	int8_t x739 = -9;
	static int16_t x740 = INT16_MIN;
	int32_t t155 = -2;

    t155 = ((x737==x738)+(x739+x740));

    if (t155 != -32777) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x742 = 63419;
	static int8_t x743 = INT8_MIN;
	uint8_t x744 = UINT8_MAX;
	volatile int32_t t156 = -4895833;

    t156 = ((x741==x742)+(x743+x744));

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x745 = INT64_MIN;
	volatile int8_t x746 = 20;
	volatile int64_t x747 = -105854267LL;
	static int32_t x748 = INT32_MIN;
	volatile int64_t t157 = 3754550282529428LL;

    t157 = ((x745==x746)+(x747+x748));

    if (t157 != -2253337915LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x750 = INT32_MIN;
	uint16_t x751 = UINT16_MAX;
	int16_t x752 = -1;
	int32_t t158 = -423623;

    t158 = ((x749==x750)+(x751+x752));

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x753 = 4496U;
	int32_t x754 = INT32_MIN;
	static uint8_t x755 = 1U;
	uint32_t x756 = 48631533U;
	uint32_t t159 = 42295100U;

    t159 = ((x753==x754)+(x755+x756));

    if (t159 != 48631534U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x757 = UINT32_MAX;
	int32_t x758 = INT32_MIN;
	int64_t x759 = -12104456LL;
	volatile uint64_t x760 = 16LLU;

    t160 = ((x757==x758)+(x759+x760));

    if (t160 != 18446744073697447176LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x761 = 3853524193726485370LLU;
	int32_t x762 = 296;
	int16_t x763 = INT16_MIN;
	uint16_t x764 = UINT16_MAX;
	static int32_t t161 = -387371;

    t161 = ((x761==x762)+(x763+x764));

    if (t161 != 32767) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x765 = 511566;
	uint8_t x766 = 1U;
	int32_t x767 = -1;
	int8_t x768 = 0;
	int32_t t162 = 111;

    t162 = ((x765==x766)+(x767+x768));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x781 = 9U;
	volatile int64_t x782 = -81LL;
	uint8_t x783 = UINT8_MAX;

    t163 = ((x781==x782)+(x783+x784));

    if (t163 != -3246689163164500780LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x785 = 3763941096848LL;
	int64_t x787 = -1LL;

    t164 = ((x785==x786)+(x787+x788));

    if (t164 != 729762708910LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x789 = -35LL;
	static uint8_t x790 = UINT8_MAX;
	static uint16_t x791 = 3U;
	int8_t x792 = -1;
	volatile int32_t t165 = -501210;

    t165 = ((x789==x790)+(x791+x792));

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x793 = INT8_MAX;
	int32_t x794 = 85;
	int32_t x795 = -466535;
	static int32_t t166 = -7783981;

    t166 = ((x793==x794)+(x795+x796));

    if (t166 != -466536) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x797 = INT32_MIN;
	volatile uint32_t x798 = 3815U;
	volatile int16_t x799 = INT16_MIN;
	uint8_t x800 = 1U;
	volatile int32_t t167 = -121544;

    t167 = ((x797==x798)+(x799+x800));

    if (t167 != -32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x801 = 153734;
	uint8_t x802 = 0U;
	static int64_t x803 = 423LL;
	uint64_t x804 = 3032218808LLU;
	volatile uint64_t t168 = 249704789540971LLU;

    t168 = ((x801==x802)+(x803+x804));

    if (t168 != 3032219231LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x805 = 3U;
	static uint16_t x806 = 16464U;
	uint64_t x807 = 1317358LLU;
	uint32_t x808 = 14929U;

    t169 = ((x805==x806)+(x807+x808));

    if (t169 != 1332287LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x809 = -1;
	uint64_t x810 = 453140997155743LLU;
	volatile int32_t x811 = 401817414;

    t170 = ((x809==x810)+(x811+x812));

    if (t170 != 401817541) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x813 = -20771176;
	int32_t x814 = 2;
	int32_t x815 = -1;
	static volatile int16_t x816 = -1;
	volatile int32_t t171 = 1038194;

    t171 = ((x813==x814)+(x815+x816));

    if (t171 != -2) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x817 = UINT64_MAX;
	int8_t x818 = INT8_MIN;
	int64_t x819 = 10041557LL;
	volatile int64_t t172 = -1902542569751690978LL;

    t172 = ((x817==x818)+(x819+x820));

    if (t172 != 10041579LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x821 = INT16_MAX;

    t173 = ((x821==x822)+(x823+x824));

    if (t173 != 7761522LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x825 = INT64_MIN;
	uint8_t x827 = UINT8_MAX;
	int64_t x828 = -1LL;
	static volatile int64_t t174 = 1392LL;

    t174 = ((x825==x826)+(x827+x828));

    if (t174 != 254LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x829 = UINT32_MAX;
	volatile uint32_t x830 = 59U;
	int64_t x832 = 176693LL;
	static volatile int64_t t175 = 354012LL;

    t175 = ((x829==x830)+(x831+x832));

    if (t175 != 176692LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x833 = 1U;
	int8_t x834 = INT8_MIN;
	uint16_t x835 = 686U;
	int8_t x836 = INT8_MAX;
	volatile int32_t t176 = 50521;

    t176 = ((x833==x834)+(x835+x836));

    if (t176 != 813) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x837 = UINT8_MAX;
	int32_t x838 = -3165411;
	uint32_t x839 = 1096U;
	uint8_t x840 = UINT8_MAX;

    t177 = ((x837==x838)+(x839+x840));

    if (t177 != 1351U) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x841 = UINT64_MAX;
	int16_t x842 = INT16_MAX;
	uint64_t x843 = 1LLU;
	volatile int32_t x844 = INT32_MIN;
	volatile uint64_t t178 = 111101408106LLU;

    t178 = ((x841==x842)+(x843+x844));

    if (t178 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t t179 = 8205134301LLU;

    t179 = ((x845==x846)+(x847+x848));

    if (t179 != 23111391092021421LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x849 = 29U;
	int32_t x850 = INT32_MIN;
	int16_t x851 = INT16_MAX;
	static uint32_t x852 = 0U;
	static uint32_t t180 = 1850650U;

    t180 = ((x849==x850)+(x851+x852));

    if (t180 != 32767U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x853 = -6;
	int64_t x854 = INT64_MIN;
	uint64_t t181 = 1998LLU;

    t181 = ((x853==x854)+(x855+x856));

    if (t181 != 4133633581379LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x857 = UINT64_MAX;
	int16_t x858 = -1;
	static uint32_t x859 = 783769990U;
	uint8_t x860 = UINT8_MAX;
	uint32_t t182 = 1545203614U;

    t182 = ((x857==x858)+(x859+x860));

    if (t182 != 783770246U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x861 = INT64_MAX;
	int64_t x862 = INT64_MIN;
	volatile int16_t x863 = INT16_MIN;
	int8_t x864 = -1;
	volatile int32_t t183 = -7000622;

    t183 = ((x861==x862)+(x863+x864));

    if (t183 != -32769) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x865 = INT32_MIN;
	int64_t x866 = INT64_MAX;
	volatile int64_t t184 = -6720017193LL;

    t184 = ((x865==x866)+(x867+x868));

    if (t184 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x869 = 14U;
	int64_t x870 = -1LL;
	int32_t x871 = INT32_MIN;
	static int32_t x872 = 278;

    t185 = ((x869==x870)+(x871+x872));

    if (t185 != -2147483370) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x873 = 14431608;
	int64_t x874 = 3059837922LL;
	int64_t x875 = 218279LL;
	static uint16_t x876 = 1087U;

    t186 = ((x873==x874)+(x875+x876));

    if (t186 != 219366LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x877 = -26;
	volatile int8_t x879 = 1;
	int16_t x880 = INT16_MAX;
	static volatile int32_t t187 = 97154;

    t187 = ((x877==x878)+(x879+x880));

    if (t187 != 32768) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x881 = UINT16_MAX;
	static int64_t x882 = -87326595LL;
	static uint64_t x883 = UINT64_MAX;
	uint64_t x884 = UINT64_MAX;
	static uint64_t t188 = 34071561124533381LLU;

    t188 = ((x881==x882)+(x883+x884));

    if (t188 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x885 = INT32_MIN;
	volatile uint16_t x886 = UINT16_MAX;
	static volatile uint64_t x887 = UINT64_MAX;
	volatile uint64_t t189 = 3LLU;

    t189 = ((x885==x886)+(x887+x888));

    if (t189 != 459742LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x889 = -1;
	int8_t x890 = INT8_MAX;
	volatile int8_t x892 = -1;
	volatile int64_t t190 = 16LL;

    t190 = ((x889==x890)+(x891+x892));

    if (t190 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x897 = -1;
	uint8_t x898 = 15U;
	static int16_t x899 = INT16_MIN;
	uint8_t x900 = 1U;
	volatile int32_t t191 = 544;

    t191 = ((x897==x898)+(x899+x900));

    if (t191 != -32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x901 = 157390;
	int8_t x902 = 61;
	uint8_t x903 = UINT8_MAX;

    t192 = ((x901==x902)+(x903+x904));

    if (t192 != 127) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x905 = INT32_MAX;
	int64_t x906 = -317123229LL;
	static uint8_t x908 = UINT8_MAX;

    t193 = ((x905==x906)+(x907+x908));

    if (t193 != 65790) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x909 = INT8_MIN;
	int8_t x910 = INT8_MAX;
	volatile int16_t x911 = 0;
	volatile int32_t t194 = -1;

    t194 = ((x909==x910)+(x911+x912));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x913 = INT8_MIN;
	int8_t x914 = -1;
	int8_t x915 = INT8_MIN;

    t195 = ((x913==x914)+(x915+x916));

    if (t195 != 8366636U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x918 = -1;
	int8_t x920 = 1;
	static int32_t t196 = 1625427;

    t196 = ((x917==x918)+(x919+x920));

    if (t196 != 22472) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x921 = INT32_MIN;
	int64_t x922 = INT64_MIN;
	volatile int32_t t197 = 9836209;

    t197 = ((x921==x922)+(x923+x924));

    if (t197 != -2147298832) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x925 = INT8_MAX;
	volatile int64_t x927 = -1LL;
	volatile int8_t x928 = -1;
	int64_t t198 = 13638589967LL;

    t198 = ((x925==x926)+(x927+x928));

    if (t198 != -2LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x929 = -376;
	static int8_t x930 = INT8_MIN;
	int8_t x932 = INT8_MAX;
	int32_t t199 = -42092;

    t199 = ((x929==x930)+(x931+x932));

    if (t199 != 1319) { NG(); } else { ; }
	
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

