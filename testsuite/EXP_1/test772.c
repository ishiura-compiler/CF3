#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
volatile int8_t x3 = INT8_MIN;
volatile int32_t x11 = INT32_MAX;
int8_t x21 = INT8_MIN;
volatile int32_t t5 = 4193976;
uint32_t x32 = 246884U;
int16_t x39 = INT16_MIN;
int8_t x40 = INT8_MAX;
volatile int64_t x52 = INT64_MIN;
uint16_t x55 = UINT16_MAX;
volatile int16_t x59 = INT16_MIN;
static int32_t x60 = 16959853;
int32_t t13 = 56;
int8_t x73 = -3;
int32_t x78 = INT32_MIN;
uint8_t x81 = 94U;
int64_t t19 = -2627350359792639931LL;
int8_t x86 = INT8_MAX;
static volatile uint16_t x92 = 35U;
uint8_t x95 = UINT8_MAX;
uint32_t x96 = UINT32_MAX;
uint32_t t22 = 37U;
int16_t x98 = INT16_MAX;
static uint32_t t24 = 1U;
static volatile int64_t x106 = -1LL;
int8_t x109 = INT8_MAX;
int32_t t27 = -2764626;
volatile int32_t t28 = -77070;
static int32_t x121 = -1177905;
volatile uint64_t x124 = 477LLU;
int8_t x129 = INT8_MAX;
int32_t x133 = INT32_MIN;
int32_t x139 = INT32_MIN;
int64_t x142 = INT64_MIN;
int8_t x143 = INT8_MAX;
static int8_t x151 = INT8_MAX;
int8_t x152 = -3;
volatile int64_t x164 = -742980120LL;
int64_t t38 = 16017LL;
int32_t x166 = INT32_MAX;
static volatile int32_t t41 = 586;
static uint64_t x178 = 79048427843318019LLU;
int32_t t42 = -5;
int64_t x183 = INT64_MAX;
int32_t x191 = -932;
volatile int64_t x194 = -6632915LL;
uint64_t x196 = UINT64_MAX;
int64_t x201 = INT64_MAX;
int16_t x205 = -1;
uint32_t x206 = 224U;
uint64_t t49 = 241328306117LLU;
int32_t x210 = INT32_MIN;
volatile int8_t x212 = 3;
volatile int32_t t50 = -38913882;
static uint32_t t52 = 10406866U;
static volatile int32_t t53 = 1310;
int8_t x225 = INT8_MIN;
volatile int16_t x231 = INT16_MAX;
volatile int32_t t55 = -176;
static volatile int32_t t57 = -14577770;
int8_t x243 = -37;
volatile int64_t t59 = -997435563891259LL;
uint16_t x251 = 7U;
int64_t x253 = -1LL;
int16_t x255 = -1;
volatile int32_t t61 = 90375;
int32_t x257 = INT32_MIN;
volatile int32_t t63 = -26509274;
static volatile int16_t x266 = INT16_MIN;
volatile int32_t t64 = 1034168;
uint8_t x275 = 0U;
static int16_t x280 = INT16_MAX;
volatile int32_t t67 = 1983059;
int8_t x282 = -1;
uint8_t x284 = UINT8_MAX;
int64_t t69 = -4016LL;
uint8_t x292 = 5U;
int64_t x293 = INT64_MAX;
uint8_t x304 = 25U;
static uint16_t x305 = UINT16_MAX;
int32_t x307 = 29;
int16_t x308 = -10719;
static int32_t x311 = INT32_MIN;
static int64_t x313 = 4265434216846656LL;
int8_t x320 = 5;
volatile int16_t x332 = INT16_MIN;
volatile int32_t t80 = -907909;
uint8_t x334 = 1U;
static int64_t x335 = INT64_MAX;
int8_t x336 = INT8_MAX;
int32_t x353 = INT32_MAX;
volatile int64_t x356 = -1LL;
volatile uint16_t x357 = 884U;
uint8_t x360 = UINT8_MAX;
volatile int16_t x364 = INT16_MIN;
int32_t t88 = 93760;
int32_t x367 = INT32_MIN;
static volatile int16_t x376 = -1;
int16_t x377 = -1;
int16_t x380 = -6;
int8_t x381 = INT8_MIN;
static int64_t t93 = -3917953589LL;
int32_t t97 = 1567470;
volatile int32_t x401 = -1;
volatile int8_t x404 = INT8_MIN;


void f0(void) {
	int16_t x1 = -2;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 1012;

	t0 = (((x1%x2)==x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	uint16_t x6 = 160U;
	int32_t x7 = -1;
	uint32_t x8 = 24728U;
	volatile uint32_t t1 = 78370686U;

	t1 = (((x5%x6)==x7)%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static int8_t x10 = -1;
	static uint16_t x12 = 4U;
	int32_t t2 = -4651353;

	t2 = (((x9%x10)==x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 272339LLU;
	uint8_t x14 = 3U;
	int8_t x15 = 9;
	static volatile int64_t x16 = 530LL;
	volatile int64_t t3 = -30931116640LL;

	t3 = (((x13%x14)==x15)%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = 2561234960439322260LL;
	static int8_t x19 = 41;
	int32_t x20 = -1;
	volatile int32_t t4 = 540746;

	t4 = (((x17%x18)==x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	volatile int8_t x23 = INT8_MIN;
	static volatile int32_t x24 = 1;

	t5 = (((x21%x22)==x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = INT32_MAX;
	int64_t x28 = INT64_MIN;
	static volatile int64_t t6 = 76447463866160917LL;

	t6 = (((x25%x26)==x27)%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -60203236296830027LL;
	volatile int16_t x30 = INT16_MAX;
	uint64_t x31 = 90448194080855LLU;
	volatile uint32_t t7 = 6U;

	t7 = (((x29%x30)==x31)%x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	static volatile int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 681844;

	t8 = (((x33%x34)==x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int32_t x38 = INT32_MAX;
	volatile int32_t t9 = 32;

	t9 = (((x37%x38)==x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int8_t x42 = 36;
	volatile int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = 325665;

	t10 = (((x41%x42)==x43)%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MAX;
	volatile int64_t t11 = 1695684165LL;

	t11 = (((x49%x50)==x51)%x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -755355999;
	int16_t x54 = -1;
	uint16_t x56 = UINT16_MAX;
	int32_t t12 = -6686;

	t12 = (((x53%x54)==x55)%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1170485LL;
	int16_t x58 = INT16_MIN;

	t13 = (((x57%x58)==x59)%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 1U;
	uint16_t x62 = 4932U;
	int32_t x63 = -9;
	int16_t x64 = INT16_MAX;
	static volatile int32_t t14 = 993093;

	t14 = (((x61%x62)==x63)%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = -3;
	volatile int16_t x66 = INT16_MIN;
	uint64_t x67 = 141046921427735325LLU;
	int16_t x68 = INT16_MAX;
	volatile int32_t t15 = -233470022;

	t15 = (((x65%x66)==x67)%x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t16 = 15686921;

	t16 = (((x69%x70)==x71)%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x74 = 20623224U;
	int16_t x75 = -3178;
	static int16_t x76 = INT16_MAX;
	volatile int32_t t17 = -851347;

	t17 = (((x73%x74)==x75)%x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -485295049;
	int64_t x79 = -827543328222007LL;
	uint8_t x80 = UINT8_MAX;
	static volatile int32_t t18 = -755189264;

	t18 = (((x77%x78)==x79)%x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	int64_t x84 = -1LL;

	t19 = (((x81%x82)==x83)%x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = -1;
	int8_t x87 = -1;
	static int32_t x88 = INT32_MIN;
	int32_t t20 = 71;

	t20 = (((x85%x86)==x87)%x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MIN;
	int8_t x90 = 4;
	uint8_t x91 = 0U;
	int32_t t21 = -184536;

	t21 = (((x89%x90)==x91)%x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x93 = 34938U;
	volatile uint32_t x94 = 4250179U;

	t22 = (((x93%x94)==x95)%x96);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x97 = UINT16_MAX;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	static int32_t t23 = -1885;

	t23 = (((x97%x98)==x99)%x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = UINT16_MAX;
	int16_t x102 = 5424;
	volatile uint16_t x103 = UINT16_MAX;
	volatile uint32_t x104 = 78609481U;

	t24 = (((x101%x102)==x103)%x104);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x107 = -1LL;
	static uint64_t x108 = UINT64_MAX;
	volatile uint64_t t25 = 6147200089068520LLU;

	t25 = (((x105%x106)==x107)%x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MAX;
	int8_t x112 = -1;
	volatile int32_t t26 = 244194323;

	t26 = (((x109%x110)==x111)%x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 120895022177936LLU;
	int16_t x114 = INT16_MAX;
	uint8_t x115 = 27U;
	int16_t x116 = 14;

	t27 = (((x113%x114)==x115)%x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = 32159072;
	static volatile int64_t x118 = 5LL;
	uint64_t x119 = 2360672709LLU;
	int16_t x120 = INT16_MIN;

	t28 = (((x117%x118)==x119)%x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x122 = INT8_MAX;
	uint8_t x123 = UINT8_MAX;
	volatile uint64_t t29 = 6LLU;

	t29 = (((x121%x122)==x123)%x124);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	uint16_t x126 = 12675U;
	volatile uint16_t x127 = 52U;
	volatile uint64_t x128 = 5435074687263LLU;
	uint64_t t30 = 12LLU;

	t30 = (((x125%x126)==x127)%x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x130 = UINT64_MAX;
	volatile uint16_t x131 = 3U;
	uint32_t x132 = 31654U;
	uint32_t t31 = 5417859U;

	t31 = (((x129%x130)==x131)%x132);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = 1457477;
	static int64_t x135 = -1LL;
	int32_t x136 = INT32_MAX;
	int32_t t32 = 0;

	t32 = (((x133%x134)==x135)%x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	uint32_t x138 = 49U;
	int64_t x140 = 549030844586751LL;
	static int64_t t33 = -11225LL;

	t33 = (((x137%x138)==x139)%x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x141 = UINT8_MAX;
	volatile uint16_t x144 = UINT16_MAX;
	int32_t t34 = -11000206;

	t34 = (((x141%x142)==x143)%x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = INT32_MAX;
	volatile int8_t x146 = INT8_MIN;
	int64_t x147 = -1LL;
	static int16_t x148 = INT16_MIN;
	static volatile int32_t t35 = -277139449;

	t35 = (((x145%x146)==x147)%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -3;
	int64_t x150 = INT64_MIN;
	volatile int32_t t36 = 199393568;

	t36 = (((x149%x150)==x151)%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 11U;
	static volatile int64_t x158 = INT64_MIN;
	uint64_t x159 = UINT64_MAX;
	static uint16_t x160 = 349U;
	int32_t t37 = -57;

	t37 = (((x157%x158)==x159)%x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x161 = -1;
	int16_t x162 = -1190;
	uint8_t x163 = 2U;

	t38 = (((x161%x162)==x163)%x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x165 = INT16_MAX;
	volatile int8_t x167 = INT8_MAX;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t39 = 986046857LLU;

	t39 = (((x165%x166)==x167)%x168);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -1;
	int8_t x170 = 28;
	uint32_t x171 = UINT32_MAX;
	static int8_t x172 = -1;
	static volatile int32_t t40 = -131200817;

	t40 = (((x169%x170)==x171)%x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = -1;
	static int64_t x175 = -1LL;
	int32_t x176 = -1;

	t41 = (((x173%x174)==x175)%x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -2;
	volatile int64_t x179 = 3597LL;
	int16_t x180 = INT16_MIN;

	t42 = (((x177%x178)==x179)%x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -1306108986911162180LL;
	volatile uint64_t x182 = 246052823644997029LLU;
	uint64_t x184 = 10298337291LLU;
	volatile uint64_t t43 = 4579826275118799LLU;

	t43 = (((x181%x182)==x183)%x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	static uint8_t x186 = 1U;
	int16_t x187 = 4;
	static int16_t x188 = INT16_MIN;
	static volatile int32_t t44 = -1561;

	t44 = (((x185%x186)==x187)%x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x189 = UINT64_MAX;
	int16_t x190 = -1;
	volatile int16_t x192 = 13575;
	volatile int32_t t45 = 74560706;

	t45 = (((x189%x190)==x191)%x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = INT16_MIN;
	uint8_t x195 = UINT8_MAX;
	uint64_t t46 = 834834054353LLU;

	t46 = (((x193%x194)==x195)%x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 5U;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MIN;
	int64_t x200 = -10413646936107LL;
	volatile int64_t t47 = -2265356LL;

	t47 = (((x197%x198)==x199)%x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x202 = -6;
	static uint16_t x203 = UINT16_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t48 = 471708326;

	t48 = (((x201%x202)==x203)%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x207 = INT32_MIN;
	volatile uint64_t x208 = 6254169487LLU;

	t49 = (((x205%x206)==x207)%x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = UINT32_MAX;
	static int64_t x211 = INT64_MIN;

	t50 = (((x209%x210)==x211)%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -270982724LL;
	volatile uint64_t x214 = 1724334904294244LLU;
	int8_t x215 = 17;
	static uint16_t x216 = 2U;
	static volatile int32_t t51 = -2112125;

	t51 = (((x213%x214)==x215)%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = 68U;
	static volatile uint16_t x218 = UINT16_MAX;
	volatile int8_t x219 = INT8_MAX;
	uint32_t x220 = 101121513U;

	t52 = (((x217%x218)==x219)%x220);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MIN;
	static int32_t x222 = -1;
	static volatile int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;

	t53 = (((x221%x222)==x223)%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x226 = INT64_MIN;
	int16_t x227 = 632;
	volatile uint16_t x228 = 3838U;
	int32_t t54 = 2737718;

	t54 = (((x225%x226)==x227)%x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = INT64_MAX;
	int16_t x232 = -1;

	t55 = (((x229%x230)==x231)%x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 772045U;
	int8_t x234 = INT8_MIN;
	static uint64_t x235 = 5LLU;
	uint32_t x236 = 766U;
	volatile uint32_t t56 = 146659944U;

	t56 = (((x233%x234)==x235)%x236);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	static uint32_t x238 = 11070421U;
	int32_t x239 = -1;
	uint8_t x240 = UINT8_MAX;

	t57 = (((x237%x238)==x239)%x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x241 = 150U;
	int8_t x242 = -19;
	static volatile int64_t x244 = INT64_MIN;
	volatile int64_t t58 = 6100017277545867LL;

	t58 = (((x241%x242)==x243)%x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x245 = INT64_MAX;
	volatile uint16_t x246 = 3587U;
	static int64_t x247 = INT64_MAX;
	int64_t x248 = INT64_MIN;

	t59 = (((x245%x246)==x247)%x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MIN;
	uint32_t x250 = 37648U;
	static uint64_t x252 = UINT64_MAX;
	volatile uint64_t t60 = 97636261112LLU;

	t60 = (((x249%x250)==x251)%x252);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x254 = -25;
	int8_t x256 = 1;

	t61 = (((x253%x254)==x255)%x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x258 = INT32_MIN;
	uint8_t x259 = UINT8_MAX;
	static int64_t x260 = INT64_MIN;
	volatile int64_t t62 = -118305430341966LL;

	t62 = (((x257%x258)==x259)%x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	static volatile uint8_t x262 = 1U;
	int32_t x263 = -1;
	int32_t x264 = INT32_MIN;

	t63 = (((x261%x262)==x263)%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = UINT16_MAX;
	static int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MAX;

	t64 = (((x265%x266)==x267)%x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x269 = INT8_MAX;
	int16_t x270 = -2;
	int8_t x271 = -8;
	int16_t x272 = INT16_MIN;
	volatile int32_t t65 = 1840441;

	t65 = (((x269%x270)==x271)%x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = 1;
	int64_t x276 = -1LL;
	static volatile int64_t t66 = -62165557276682LL;

	t66 = (((x273%x274)==x275)%x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -7021646LL;
	int16_t x278 = -1;
	int8_t x279 = 0;

	t67 = (((x277%x278)==x279)%x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MAX;
	volatile uint64_t x283 = 16659LLU;
	int32_t t68 = -184;

	t68 = (((x281%x282)==x283)%x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = 15;
	volatile int64_t x286 = -1LL;
	int32_t x287 = INT32_MAX;
	int64_t x288 = INT64_MAX;

	t69 = (((x285%x286)==x287)%x288);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 101595733U;
	int8_t x290 = -1;
	int32_t x291 = 174832;
	int32_t t70 = 26;

	t70 = (((x289%x290)==x291)%x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x294 = INT8_MIN;
	volatile uint8_t x295 = 61U;
	int64_t x296 = 272664838082332458LL;
	volatile int64_t t71 = -27039LL;

	t71 = (((x293%x294)==x295)%x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x297 = 154LL;
	uint64_t x298 = 13011935962LLU;
	static uint32_t x299 = 8U;
	static int16_t x300 = INT16_MIN;
	int32_t t72 = 545974464;

	t72 = (((x297%x298)==x299)%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = 5;
	static int64_t x302 = 7435586262286864LL;
	int64_t x303 = INT64_MAX;
	volatile int32_t t73 = -226144491;

	t73 = (((x301%x302)==x303)%x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x306 = INT8_MIN;
	static volatile int32_t t74 = 180306;

	t74 = (((x305%x306)==x307)%x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = 6;
	int32_t x310 = INT32_MIN;
	int16_t x312 = -1;
	int32_t t75 = 611;

	t75 = (((x309%x310)==x311)%x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x314 = UINT8_MAX;
	int8_t x315 = 1;
	int32_t x316 = -1;
	volatile int32_t t76 = -18509562;

	t76 = (((x313%x314)==x315)%x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -1;
	static uint8_t x318 = 3U;
	int32_t x319 = INT32_MIN;
	volatile int32_t t77 = 432299580;

	t77 = (((x317%x318)==x319)%x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = 111;
	volatile int64_t x323 = INT64_MIN;
	int32_t x324 = INT32_MIN;
	static int32_t t78 = -3967;

	t78 = (((x321%x322)==x323)%x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MAX;
	static uint64_t x328 = 13042196556029153LLU;
	volatile uint64_t t79 = 370255851646969160LLU;

	t79 = (((x325%x326)==x327)%x328);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = 4;
	int64_t x330 = -1748368695LL;
	int64_t x331 = INT64_MAX;

	t80 = (((x329%x330)==x331)%x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x333 = 2U;
	int32_t t81 = -6834379;

	t81 = (((x333%x334)==x335)%x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = UINT32_MAX;
	uint16_t x338 = UINT16_MAX;
	uint8_t x339 = 2U;
	volatile int16_t x340 = -7;
	volatile int32_t t82 = -1;

	t82 = (((x337%x338)==x339)%x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = INT8_MIN;
	int16_t x342 = -4;
	uint8_t x343 = 20U;
	static volatile uint16_t x344 = 123U;
	volatile int32_t t83 = -295;

	t83 = (((x341%x342)==x343)%x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x345 = UINT8_MAX;
	uint8_t x346 = 57U;
	int64_t x347 = -1LL;
	uint16_t x348 = 3116U;
	volatile int32_t t84 = -5;

	t84 = (((x345%x346)==x347)%x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = -1;
	static volatile int8_t x351 = 10;
	int32_t x352 = 6;
	volatile int32_t t85 = -4872557;

	t85 = (((x349%x350)==x351)%x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	int64_t t86 = -5691412298LL;

	t86 = (((x353%x354)==x355)%x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x358 = INT16_MIN;
	int64_t x359 = -1LL;
	volatile int32_t t87 = 890517;

	t87 = (((x357%x358)==x359)%x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x361 = INT16_MAX;
	volatile uint16_t x362 = 11U;
	int64_t x363 = INT64_MIN;

	t88 = (((x361%x362)==x363)%x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x365 = 552;
	uint16_t x366 = 4U;
	int64_t x368 = -1LL;
	static int64_t t89 = 1LL;

	t89 = (((x365%x366)==x367)%x368);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x369 = INT32_MIN;
	uint16_t x370 = UINT16_MAX;
	static uint8_t x371 = UINT8_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t90 = 373599;

	t90 = (((x369%x370)==x371)%x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	uint16_t x374 = 17322U;
	static uint64_t x375 = 989247LLU;
	static int32_t t91 = 5;

	t91 = (((x373%x374)==x375)%x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x378 = INT16_MAX;
	volatile int64_t x379 = INT64_MIN;
	volatile int32_t t92 = 0;

	t92 = (((x377%x378)==x379)%x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x382 = UINT32_MAX;
	int16_t x383 = INT16_MAX;
	static volatile int64_t x384 = INT64_MIN;

	t93 = (((x381%x382)==x383)%x384);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x385 = 7340LLU;
	volatile uint64_t x386 = 2378464801689LLU;
	static int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MIN;
	volatile int64_t t94 = -2022LL;

	t94 = (((x385%x386)==x387)%x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x390 = 81260U;
	static int8_t x391 = -1;
	int32_t x392 = -1;
	int32_t t95 = 791296;

	t95 = (((x389%x390)==x391)%x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	volatile uint8_t x395 = UINT8_MAX;
	uint64_t x396 = UINT64_MAX;
	uint64_t t96 = 214529476260101007LLU;

	t96 = (((x393%x394)==x395)%x396);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x397 = 795U;
	int32_t x398 = -1;
	uint16_t x399 = 2064U;
	int8_t x400 = -1;

	t97 = (((x397%x398)==x399)%x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x402 = -1;
	int8_t x403 = INT8_MIN;
	volatile int32_t t98 = 27419;

	t98 = (((x401%x402)==x403)%x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x405 = 1U;
	int8_t x406 = INT8_MIN;
	static int8_t x407 = -1;
	volatile int32_t x408 = INT32_MIN;
	int32_t t99 = 11560;

	t99 = (((x405%x406)==x407)%x408);

	if (t99 != 0) { NG(); } else { ; }
	
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

