#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x4 = 12U;
int8_t x6 = 39;
int8_t x16 = INT8_MIN;
int32_t x19 = INT32_MIN;
volatile int32_t x21 = INT32_MIN;
volatile int64_t t5 = -116879698LL;
volatile int8_t x34 = INT8_MAX;
int64_t x38 = INT64_MIN;
int64_t t9 = 431390526447LL;
volatile uint16_t x43 = UINT16_MAX;
uint16_t x44 = UINT16_MAX;
int32_t x45 = 65077183;
int32_t x46 = -1;
volatile int64_t t13 = INT64_MAX;
int64_t x59 = -1LL;
int16_t x60 = 1;
volatile int32_t x64 = INT32_MIN;
int64_t x65 = 85272412991LL;
uint32_t x66 = UINT32_MAX;
static volatile int64_t t16 = 15601LL;
volatile int64_t t17 = 18232LL;
static uint64_t x82 = 4661733147526080364LLU;
int32_t t21 = 205990;
static int64_t x89 = INT64_MAX;
volatile uint32_t x92 = UINT32_MAX;
uint64_t x96 = 3721806740LLU;
uint8_t x104 = 3U;
static uint16_t x108 = UINT16_MAX;
int64_t x109 = INT64_MIN;
static volatile int32_t x112 = INT32_MIN;
int32_t x120 = -1;
volatile uint32_t x128 = UINT32_MAX;
static int8_t x129 = INT8_MAX;
uint8_t x134 = 9U;
int64_t x135 = -444413980484043364LL;
int16_t x159 = -1;
static uint16_t x168 = 1759U;
uint16_t x175 = UINT16_MAX;
volatile int64_t t44 = 3779971LL;
int64_t x184 = -1LL;
uint16_t x185 = 60U;
uint64_t x187 = UINT64_MAX;
int32_t x191 = -1;
uint64_t x192 = 42073551791LLU;
volatile int16_t x199 = INT16_MIN;
volatile int64_t t49 = -40LL;
static int64_t t50 = 912LL;
volatile int64_t x211 = INT64_MIN;
static uint64_t x214 = 24577627948LLU;
int16_t x215 = INT16_MAX;
int16_t x225 = -1;
uint32_t t58 = UINT32_MAX;
int64_t x240 = -1LL;
volatile int64_t t59 = 200196588677LL;
volatile int32_t t61 = -26;
static uint8_t x250 = 4U;
int64_t x252 = 120528LL;
static uint8_t x259 = 112U;
volatile uint16_t x260 = UINT16_MAX;
int64_t x263 = -1LL;
int8_t x269 = -5;
int16_t x272 = 5528;
uint64_t t67 = 81810978560LLU;
volatile int8_t x274 = 0;
int8_t x275 = -1;
int16_t x284 = 1138;
int8_t x290 = INT8_MIN;
volatile int32_t x293 = INT32_MAX;
int16_t x311 = -6;
static volatile int64_t x313 = INT64_MIN;
int8_t x316 = 0;
volatile uint32_t x319 = UINT32_MAX;
uint64_t t79 = 59785995826503549LLU;
volatile uint64_t x324 = 4LLU;
int64_t x327 = -1LL;
static int32_t x333 = -304253792;
static int16_t x335 = -1;
uint16_t x353 = UINT16_MAX;
int64_t x355 = -23003LL;
volatile uint64_t t88 = UINT64_MAX;
uint64_t x362 = 24503967619934LLU;
uint8_t x369 = UINT8_MAX;
uint8_t x373 = 8U;
uint32_t x386 = UINT32_MAX;
int16_t x393 = INT16_MAX;
int64_t t98 = 27997251244354LL;


void f0(void) {
	int32_t x1 = -1;
	int16_t x2 = -9;
	static volatile int64_t x3 = INT64_MIN;
	int64_t t0 = -1LL;

	t0 = ((x1|(x2&x3))|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	static int64_t x7 = -8676668LL;
	int64_t x8 = -82388LL;
	int64_t t1 = 1305LL;

	t1 = ((x5|(x6&x7))|x8);

	if (t1 != -82388LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = 69;
	volatile int32_t x11 = INT32_MIN;
	static int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 2;

	t2 = ((x9|(x10&x11))|x12);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	int64_t x14 = -1LL;
	int32_t x15 = INT32_MIN;
	static uint64_t t3 = UINT64_MAX;

	t3 = ((x13|(x14&x15))|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1U;
	int64_t x18 = -1LL;
	uint8_t x20 = 30U;
	int64_t t4 = -1LL;

	t4 = ((x17|(x18&x19))|x20);

	if (t4 != -2147483617LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = INT64_MIN;

	t5 = ((x21|(x22&x23))|x24);

	if (t5 != -2147483393LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x25 = 746617227542819767LLU;
	static int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	int16_t x28 = 1548;
	uint64_t t6 = 60318358904701245LLU;

	t6 = ((x25|(x26&x27))|x28);

	if (t6 != 18446744073709549503LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 7;
	int8_t x30 = INT8_MIN;
	volatile int8_t x31 = INT8_MAX;
	uint64_t x32 = UINT64_MAX;
	static volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x29|(x30&x31))|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int32_t x35 = 47557;
	uint16_t x36 = 5596U;
	int32_t t8 = -1714;

	t8 = ((x33|(x34&x35))|x36);

	if (t8 != -27171) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 140U;
	int32_t x39 = -1;
	int8_t x40 = -1;

	t9 = ((x37|(x38&x39))|x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -1LL;
	uint16_t x42 = 3526U;
	volatile int64_t t10 = 2762711527070446608LL;

	t10 = ((x41|(x42&x43))|x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x47 = 1;
	static uint8_t x48 = 7U;
	volatile int32_t t11 = 116;

	t11 = ((x45|(x46&x47))|x48);

	if (t11 != 65077183) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	volatile uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MIN;
	static uint64_t t12 = UINT64_MAX;

	t12 = ((x49|(x50&x51))|x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	volatile int32_t x54 = -29;
	static int16_t x55 = INT16_MAX;
	int64_t x56 = INT64_MAX;

	t13 = ((x53|(x54&x55))|x56);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	uint32_t x58 = 236743380U;
	static int64_t t14 = -2655LL;

	t14 = ((x57|(x58&x59))|x60);

	if (t14 != 236743423LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -5220;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	int32_t t15 = 50;

	t15 = ((x61|(x62&x63))|x64);

	if (t15 != -5220) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x67 = -1;
	volatile int32_t x68 = 143719541;

	t16 = ((x65|(x66&x67))|x68);

	if (t16 != 85899345919LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static uint16_t x70 = 9U;
	static uint16_t x71 = 379U;
	static int64_t x72 = INT64_MIN;

	t17 = ((x69|(x70&x71))|x72);

	if (t17 != -2147483639LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 707785525479911LLU;
	int32_t x74 = INT32_MIN;
	int8_t x75 = -1;
	int32_t x76 = INT32_MIN;
	volatile uint64_t t18 = 3497945LLU;

	t18 = ((x73|(x74&x75))|x76);

	if (t18 != 18446744072246970855LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	int64_t x78 = -12428911624378144LL;
	int32_t x79 = INT32_MAX;
	uint64_t x80 = 107266761615LLU;
	static uint64_t t19 = 75495933365829LLU;

	t19 = ((x77|(x78&x79))|x80);

	if (t19 != 107269319679LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x83 = 1U;
	volatile uint16_t x84 = UINT16_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = ((x81|(x82&x83))|x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int16_t x86 = -1;
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MAX;

	t21 = ((x85|(x86&x87))|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x90 = UINT8_MAX;
	int16_t x91 = INT16_MIN;
	int64_t t22 = INT64_MAX;

	t22 = ((x89|(x90&x91))|x92);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int16_t x94 = INT16_MIN;
	uint64_t x95 = 131783449LLU;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x93|(x94&x95))|x96);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = -1LL;
	int64_t x99 = INT64_MAX;
	uint16_t x100 = 7844U;
	int64_t t24 = 74669698LL;

	t24 = ((x97|(x98&x99))|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -335;
	volatile uint64_t x102 = 95252527656LLU;
	int64_t x103 = INT64_MIN;
	volatile uint64_t t25 = 21728167403928139LLU;

	t25 = ((x101|(x102&x103))|x104);

	if (t25 != 18446744073709551283LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -1691;
	static volatile uint8_t x106 = 7U;
	uint8_t x107 = 94U;
	static volatile int32_t t26 = 103227;

	t26 = ((x105|(x106&x107))|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	int32_t x111 = 773832901;
	volatile int64_t t27 = -27721439505992LL;

	t27 = ((x109|(x110&x111))|x112);

	if (t27 != -1373667328LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x113 = 15LLU;
	int64_t x114 = -4375514165985LL;
	int64_t x115 = INT64_MIN;
	volatile int64_t x116 = -1LL;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x113|(x114&x115))|x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x117 = 421475446U;
	uint8_t x118 = 67U;
	int8_t x119 = INT8_MIN;
	uint32_t t29 = UINT32_MAX;

	t29 = ((x117|(x118&x119))|x120);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static uint8_t x122 = 1U;
	int64_t x123 = INT64_MAX;
	int8_t x124 = -1;
	volatile int64_t t30 = -520867285LL;

	t30 = ((x121|(x122&x123))|x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -14116;
	uint64_t x126 = 182232LLU;
	int32_t x127 = INT32_MAX;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x125|(x126&x127))|x128);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 0U;
	static int32_t x131 = 1;
	volatile uint16_t x132 = UINT16_MAX;
	static volatile int32_t t32 = -1550;

	t32 = ((x129|(x130&x131))|x132);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	volatile int32_t x136 = INT32_MIN;
	int64_t t33 = 463450937964LL;

	t33 = ((x133|(x134&x135))|x136);

	if (t33 != -120LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = -434LL;
	static int8_t x139 = -2;
	int8_t x140 = INT8_MIN;
	int64_t t34 = 752573803112LL;

	t34 = ((x137|(x138&x139))|x140);

	if (t34 != -50LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	int16_t x142 = INT16_MIN;
	int32_t x143 = 174071381;
	uint16_t x144 = 252U;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x141|(x142&x143))|x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -34243LL;
	int32_t x146 = -1;
	uint16_t x147 = 117U;
	int32_t x148 = -47181599;
	static volatile int64_t t36 = 1129693171470998308LL;

	t36 = ((x145|(x146&x147))|x148);

	if (t36 != -34051LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 46U;
	int64_t x150 = INT64_MAX;
	int64_t x151 = -2187114172622682378LL;
	static int64_t x152 = INT64_MAX;
	static int64_t t37 = INT64_MAX;

	t37 = ((x149|(x150&x151))|x152);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = 2U;
	int16_t x154 = -1;
	volatile uint32_t x155 = 91986U;
	static volatile int32_t x156 = -14655;
	volatile uint32_t t38 = 12U;

	t38 = ((x153|(x154&x155))|x156);

	if (t38 != 4294961107U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = -601060LL;
	uint16_t x160 = 0U;
	static volatile int64_t t39 = -10879919829973075LL;

	t39 = ((x157|(x158&x159))|x160);

	if (t39 != -601060LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 1357U;
	int16_t x162 = 7633;
	static uint32_t x163 = 14U;
	volatile int8_t x164 = -57;
	uint32_t t40 = 1078U;

	t40 = ((x161|(x162&x163))|x164);

	if (t40 != 4294967247U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = 11879;
	static volatile int8_t x166 = INT8_MAX;
	int32_t x167 = -1;
	static int32_t t41 = -58490252;

	t41 = ((x165|(x166&x167))|x168);

	if (t41 != 12031) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	int32_t x170 = 10;
	static int64_t x171 = INT64_MIN;
	int16_t x172 = -1;
	static volatile int64_t t42 = 29733LL;

	t42 = ((x169|(x170&x171))|x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int16_t x174 = INT16_MAX;
	volatile int32_t x176 = 7202504;
	volatile int32_t t43 = 17272519;

	t43 = ((x173|(x174&x175))|x176);

	if (t43 != 7208959) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x177 = INT64_MIN;
	static volatile int16_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	volatile int16_t x180 = -7437;

	t44 = ((x177|(x178&x179))|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = UINT16_MAX;
	int32_t x182 = INT32_MIN;
	volatile int32_t x183 = INT32_MIN;
	volatile int64_t t45 = -7705373785456LL;

	t45 = ((x181|(x182&x183))|x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x186 = 1;
	int8_t x188 = -30;
	uint64_t t46 = UINT64_MAX;

	t46 = ((x185|(x186&x187))|x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = 5U;
	uint64_t x190 = 4757887846533267333LLU;
	volatile uint64_t t47 = 274405812378431646LLU;

	t47 = ((x189|(x190&x191))|x192);

	if (t47 != 4757887847640825775LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MAX;
	uint64_t x195 = 32981288934548LLU;
	static int8_t x196 = INT8_MIN;
	uint64_t t48 = 364049LLU;

	t48 = ((x193|(x194&x195))|x196);

	if (t48 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 3998789170738447LL;
	static int64_t x198 = -1LL;
	int16_t x200 = INT16_MIN;

	t49 = ((x197|(x198&x199))|x200);

	if (t49 != -19185LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 0;
	int8_t x202 = -1;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MAX;

	t50 = ((x201|(x202&x203))|x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	static uint32_t x206 = 370U;
	uint64_t x207 = 1596771830512LLU;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x205|(x206&x207))|x208);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	uint8_t x210 = UINT8_MAX;
	uint8_t x212 = 1U;
	int64_t t52 = 345448186428551089LL;

	t52 = ((x209|(x210&x211))|x212);

	if (t52 != 4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	volatile int64_t x216 = 39713598LL;
	volatile uint64_t t53 = 1010185506LLU;

	t53 = ((x213|(x214&x215))|x216);

	if (t53 != 18446744071601782590LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -1;
	volatile int64_t x218 = -25354LL;
	int8_t x219 = INT8_MAX;
	volatile int32_t x220 = -100;
	static int64_t t54 = -110620LL;

	t54 = ((x217|(x218&x219))|x220);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x221 = INT16_MIN;
	int8_t x222 = -13;
	int64_t x223 = INT64_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	static int64_t t55 = 4236155021LL;

	t55 = ((x221|(x222&x223))|x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 26U;
	uint8_t x227 = 3U;
	static volatile uint64_t x228 = 1402361667572LLU;
	static uint64_t t56 = UINT64_MAX;

	t56 = ((x225|(x226&x227))|x228);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 2U;
	int16_t x230 = INT16_MAX;
	int32_t x231 = 13682279;
	uint16_t x232 = 132U;
	volatile int32_t t57 = 496938;

	t57 = ((x229|(x230&x231))|x232);

	if (t57 != 18151) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	static int16_t x234 = -1;
	static int8_t x235 = INT8_MAX;
	uint32_t x236 = 2214275U;

	t58 = ((x233|(x234&x235))|x236);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -13LL;
	volatile int8_t x238 = -1;
	uint8_t x239 = 1U;

	t59 = ((x237|(x238&x239))|x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 3U;
	static int8_t x242 = -1;
	int8_t x243 = INT8_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t60 = -65069353;

	t60 = ((x241|(x242&x243))|x244);

	if (t60 != -2147483521) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	volatile int16_t x246 = -78;
	int8_t x247 = 63;
	uint16_t x248 = 3895U;

	t61 = ((x245|(x246&x247))|x248);

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = 284U;
	uint16_t x251 = 2U;
	int64_t t62 = 118LL;

	t62 = ((x249|(x250&x251))|x252);

	if (t62 != 120796LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = 76558997LLU;
	static uint8_t x254 = UINT8_MAX;
	uint64_t x255 = 166258299465977LLU;
	int16_t x256 = 1;
	uint64_t t63 = 8243LLU;

	t63 = ((x253|(x254&x255))|x256);

	if (t63 != 76559101LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = -456054417977593LL;
	volatile int64_t t64 = -860673623LL;

	t64 = ((x257|(x258&x259))|x260);

	if (t64 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 35675780412LLU;
	volatile int16_t x262 = INT16_MIN;
	volatile int32_t x264 = 12;
	uint64_t t65 = 1321835670160LLU;

	t65 = ((x261|(x262&x263))|x264);

	if (t65 != 18446744073709532476LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static int16_t x266 = 12;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MAX;
	int32_t t66 = 57;

	t66 = ((x265|(x266&x267))|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 70586LLU;
	int32_t x271 = 5089668;

	t67 = ((x269|(x270&x271))|x272);

	if (t67 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int16_t x276 = INT16_MAX;
	int32_t t68 = -7;

	t68 = ((x273|(x274&x275))|x276);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	static int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	volatile int16_t x280 = 1095;
	int64_t t69 = -79221630657886178LL;

	t69 = ((x277|(x278&x279))|x280);

	if (t69 != -2147482553LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = -115063;
	static volatile uint32_t x283 = UINT32_MAX;
	volatile uint32_t t70 = 28U;

	t70 = ((x281|(x282&x283))|x284);

	if (t70 != 4294852347U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	uint8_t x286 = 1U;
	static uint16_t x287 = UINT16_MAX;
	int64_t x288 = -14210145LL;
	static int64_t t71 = -346538122598LL;

	t71 = ((x285|(x286&x287))|x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	static int64_t x291 = INT64_MIN;
	static int8_t x292 = -1;
	static volatile int64_t t72 = 236099801490176194LL;

	t72 = ((x289|(x290&x291))|x292);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = 4;
	static uint16_t x295 = UINT16_MAX;
	static uint8_t x296 = UINT8_MAX;
	int32_t t73 = INT32_MAX;

	t73 = ((x293|(x294&x295))|x296);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 67114604U;
	int64_t x298 = -293922701LL;
	int16_t x299 = INT16_MAX;
	static int32_t x300 = -1;
	static volatile int64_t t74 = -326226184LL;

	t74 = ((x297|(x298&x299))|x300);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = 11;
	int64_t x302 = INT64_MIN;
	uint8_t x303 = 50U;
	uint32_t x304 = 6172568U;
	volatile int64_t t75 = -47774189LL;

	t75 = ((x301|(x302&x303))|x304);

	if (t75 != 6172571LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -20821843244028LL;
	int8_t x306 = INT8_MIN;
	static uint8_t x307 = 23U;
	int32_t x308 = INT32_MIN;
	int64_t t76 = -258671152279659991LL;

	t76 = ((x305|(x306&x307))|x308);

	if (t76 != -1989276668LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int32_t x310 = -1;
	volatile uint8_t x312 = 83U;
	volatile int32_t t77 = 35016456;

	t77 = ((x309|(x310&x311))|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = 6;
	volatile int64_t x315 = -36788110765736130LL;
	int64_t t78 = -2LL;

	t78 = ((x313|(x314&x315))|x316);

	if (t78 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -225;
	uint64_t x318 = 2077976LLU;
	uint16_t x320 = 87U;

	t79 = ((x317|(x318&x319))|x320);

	if (t79 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	int64_t x322 = 6496680LL;
	int32_t x323 = INT32_MIN;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x321|(x322&x323))|x324);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = -1;
	int8_t x326 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	int64_t t81 = 910LL;

	t81 = ((x325|(x326&x327))|x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 22465440U;
	int8_t x330 = -1;
	int32_t x331 = -54829;
	volatile int32_t x332 = INT32_MIN;
	uint32_t t82 = 155322U;

	t82 = ((x329|(x330&x331))|x332);

	if (t82 != 4294962163U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = 1U;
	static uint8_t x336 = 0U;
	int32_t t83 = 14738;

	t83 = ((x333|(x334&x335))|x336);

	if (t83 != -304253791) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 1U;
	int32_t x338 = INT32_MIN;
	uint16_t x339 = UINT16_MAX;
	int64_t x340 = -856594902816LL;
	int64_t t84 = 988204LL;

	t84 = ((x337|(x338&x339))|x340);

	if (t84 != -856594902815LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = 0;
	static uint8_t x342 = 21U;
	int64_t x343 = INT64_MAX;
	int64_t x344 = -1LL;
	static int64_t t85 = 63LL;

	t85 = ((x341|(x342&x343))|x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	uint32_t x346 = 104U;
	static volatile int8_t x347 = -9;
	volatile int64_t x348 = INT64_MIN;
	uint64_t t86 = UINT64_MAX;

	t86 = ((x345|(x346&x347))|x348);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MAX;
	uint8_t x351 = UINT8_MAX;
	int8_t x352 = -1;
	int32_t t87 = 144227;

	t87 = ((x349|(x350&x351))|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = 1663971450135LLU;
	static int32_t x356 = -138;

	t88 = ((x353|(x354&x355))|x356);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	static int8_t x358 = INT8_MAX;
	volatile uint16_t x359 = 2982U;
	int16_t x360 = INT16_MIN;
	int32_t t89 = 473543;

	t89 = ((x357|(x358&x359))|x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int64_t x363 = -29680638247006733LL;
	int64_t x364 = INT64_MIN;
	volatile uint64_t t90 = 0LLU;

	t90 = ((x361|(x362&x363))|x364);

	if (t90 != 9223376474696845695LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = 3085;
	int8_t x366 = -10;
	volatile int32_t x367 = INT32_MAX;
	int32_t x368 = INT32_MIN;
	int32_t t91 = -215588403;

	t91 = ((x365|(x366&x367))|x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x370 = 130694439285LLU;
	int32_t x371 = INT32_MIN;
	uint32_t x372 = 241859919U;
	static volatile uint64_t t92 = 0LLU;

	t92 = ((x369|(x370&x371))|x372);

	if (t92 != 129090878975LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = UINT32_MAX;
	int8_t x375 = INT8_MIN;
	int8_t x376 = -1;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = ((x373|(x374&x375))|x376);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	uint32_t x378 = UINT32_MAX;
	static int8_t x379 = 2;
	uint16_t x380 = 0U;
	volatile int64_t t94 = INT64_MAX;

	t94 = ((x377|(x378&x379))|x380);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	int64_t x382 = -1LL;
	volatile uint64_t x383 = 1033652041782527261LLU;
	static int32_t x384 = INT32_MAX;
	uint64_t t95 = 834LLU;

	t95 = ((x381|(x382&x383))|x384);

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MIN;
	uint64_t x387 = 22486668275672755LLU;
	volatile uint8_t x388 = 3U;
	volatile uint64_t t96 = 13873743LLU;

	t96 = ((x385|(x386&x387))|x388);

	if (t96 != 18446744073709545139LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = 807;
	int64_t x391 = 6727120083927LL;
	uint64_t x392 = 24582130272LLU;
	uint64_t t97 = 1221621411000081LLU;

	t97 = ((x389|(x390&x391))|x392);

	if (t97 != 18446744073709521767LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x394 = 1U;
	int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MIN;

	t98 = ((x393|(x394&x395))|x396);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 1;
	static volatile int8_t x398 = INT8_MIN;
	int64_t x399 = -51814206029055LL;
	volatile int16_t x400 = INT16_MIN;
	int64_t t99 = -5369547LL;

	t99 = ((x397|(x398&x399))|x400);

	if (t99 != -15615LL) { NG(); } else { ; }
	
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

