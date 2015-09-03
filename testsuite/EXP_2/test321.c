#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
int32_t x6 = 3504;
uint64_t x7 = 29988360465LLU;
int64_t x8 = INT64_MAX;
uint16_t x14 = 22150U;
volatile uint32_t x15 = 2530213U;
static int32_t x21 = -56;
int16_t x23 = -1;
static int16_t x24 = INT16_MAX;
volatile uint8_t x25 = 3U;
int32_t x28 = INT32_MAX;
volatile int32_t t7 = 2714;
static int64_t x41 = INT64_MAX;
int32_t x68 = INT32_MAX;
volatile int32_t t13 = 126;
static int8_t x71 = 0;
volatile int32_t t14 = 234;
int8_t x81 = INT8_MAX;
int8_t x89 = INT8_MIN;
int32_t t21 = 43;
uint32_t x104 = UINT32_MAX;
uint16_t x109 = UINT16_MAX;
static uint16_t x110 = 300U;
static volatile int8_t x111 = INT8_MIN;
volatile int16_t x119 = INT16_MIN;
int16_t x120 = INT16_MIN;
static int32_t t26 = -124;
static int32_t x126 = -6037;
uint32_t x130 = 182980U;
int16_t x132 = -93;
int32_t x143 = -7;
volatile uint64_t x145 = 5LLU;
int32_t x146 = -740834;
int16_t x150 = INT16_MIN;
volatile int32_t t33 = 1368849;
volatile uint8_t x158 = 9U;
int16_t x160 = INT16_MIN;
uint64_t x163 = 335LLU;
static volatile int16_t x169 = 1939;
static int16_t x170 = 0;
volatile int32_t t38 = 7107364;
static volatile uint32_t x185 = UINT32_MAX;
int8_t x197 = INT8_MAX;
static volatile int32_t t43 = -34156;
static uint32_t x213 = UINT32_MAX;
static volatile int64_t x214 = INT64_MIN;
int32_t x216 = INT32_MIN;
int32_t t44 = -406144889;
uint8_t x220 = UINT8_MAX;
volatile int32_t t47 = -823;
int16_t x236 = 1482;
static int32_t t49 = 186035;
static int32_t x246 = INT32_MIN;
uint64_t x250 = 7026290272LLU;
static int32_t x259 = -1;
uint8_t x260 = UINT8_MAX;
int32_t x266 = INT32_MIN;
volatile uint32_t x267 = 1099262U;
volatile int32_t t55 = 3;
static int64_t x279 = -1LL;
volatile int16_t x280 = INT16_MAX;
volatile int32_t t58 = 0;
static int8_t x286 = INT8_MAX;
uint16_t x290 = 69U;
int16_t x292 = -1;
static uint8_t x296 = 9U;
int8_t x297 = INT8_MIN;
int32_t x299 = -1;
uint16_t x301 = 111U;
static int64_t x303 = INT64_MIN;
volatile int8_t x310 = -2;
static int32_t t65 = -7578;
volatile int32_t t66 = -11;
int16_t x318 = 776;
int16_t x320 = -6652;
int16_t x325 = INT16_MAX;
int32_t x334 = INT32_MIN;
int8_t x335 = -1;
uint8_t x347 = 92U;
static volatile int32_t t73 = 19;
uint64_t x350 = 5966961574168LLU;
uint32_t x356 = 13U;
volatile int32_t x358 = -1;
int16_t x360 = 208;
static int16_t x366 = -339;
uint16_t x370 = 2800U;
uint64_t x378 = 2211854118LLU;
static volatile int32_t t83 = 480910;
uint64_t x400 = 93318LLU;
int64_t x407 = -937538397LL;
static uint16_t x416 = 842U;
int64_t x419 = -34270312845LL;
volatile int32_t t91 = 20;
int64_t x437 = INT64_MIN;
static int8_t x445 = -1;
volatile int16_t x455 = 794;
int32_t x457 = INT32_MIN;
int8_t x461 = 0;


void f0(void) {
	int32_t t0 = 407508656;

	t0 = ((x5|(x6-x7))<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 3U;
	static int16_t x10 = 12;
	int32_t x11 = INT32_MAX;
	uint16_t x12 = 7U;
	int32_t t1 = 337894649;

	t1 = ((x9|(x10-x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 1;
	int32_t x16 = INT32_MIN;
	static int32_t t2 = 750616681;

	t2 = ((x13|(x14-x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 16LLU;
	static uint32_t x18 = 8237963U;
	uint64_t x19 = 266055633LLU;
	int64_t x20 = INT64_MIN;
	static int32_t t3 = 9828901;

	t3 = ((x17|(x18-x19))<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x22 = -1;
	int32_t t4 = -690;

	t4 = ((x21|(x22-x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x26 = INT16_MIN;
	int8_t x27 = 17;
	int32_t t5 = -24622;

	t5 = ((x25|(x26-x27))<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = 1761813;
	uint32_t x34 = UINT32_MAX;
	static int8_t x35 = 0;
	int8_t x36 = INT8_MIN;
	volatile int32_t t6 = 8338843;

	t6 = ((x33|(x34-x35))<x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 2U;
	static volatile uint32_t x38 = UINT32_MAX;
	volatile uint8_t x39 = UINT8_MAX;
	int16_t x40 = INT16_MIN;

	t7 = ((x37|(x38-x39))<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x42 = -15;
	static int32_t x43 = -673244;
	int8_t x44 = -1;
	volatile int32_t t8 = -1161345;

	t8 = ((x41|(x42-x43))<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	int64_t x46 = 1141547LL;
	static volatile int8_t x47 = INT8_MIN;
	static int16_t x48 = INT16_MAX;
	volatile int32_t t9 = 266220357;

	t9 = ((x45|(x46-x47))<x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	volatile int8_t x50 = -53;
	static uint32_t x51 = UINT32_MAX;
	static int8_t x52 = 12;
	int32_t t10 = 166210;

	t10 = ((x49|(x50-x51))<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = INT8_MIN;
	uint32_t x54 = 102U;
	int16_t x55 = -68;
	uint16_t x56 = UINT16_MAX;
	int32_t t11 = 1;

	t11 = ((x53|(x54-x55))<x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 96U;
	int8_t x62 = -2;
	int32_t x63 = INT32_MIN;
	uint32_t x64 = UINT32_MAX;
	int32_t t12 = -85946799;

	t12 = ((x61|(x62-x63))<x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x65 = 180853;
	volatile int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MIN;

	t13 = ((x65|(x66-x67))<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 73700409284355LLU;
	uint32_t x70 = UINT32_MAX;
	volatile int64_t x72 = INT64_MIN;

	t14 = ((x69|(x70-x71))<x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 311770831LLU;
	uint64_t x74 = 18LLU;
	volatile int8_t x75 = -1;
	int32_t x76 = -1;
	static volatile int32_t t15 = -104970004;

	t15 = ((x73|(x74-x75))<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -1;
	uint16_t x78 = 724U;
	int16_t x79 = -1508;
	uint32_t x80 = 728849U;
	int32_t t16 = 77420;

	t16 = ((x77|(x78-x79))<x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x82 = 51213500339LLU;
	int64_t x83 = INT64_MAX;
	int64_t x84 = 27869451LL;
	volatile int32_t t17 = -74;

	t17 = ((x81|(x82-x83))<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x85 = 31121974204LLU;
	int16_t x86 = INT16_MAX;
	int32_t x87 = INT32_MAX;
	int16_t x88 = 0;
	volatile int32_t t18 = 12290629;

	t18 = ((x85|(x86-x87))<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = INT8_MIN;
	uint64_t x91 = 723270254LLU;
	uint64_t x92 = UINT64_MAX;
	int32_t t19 = 57;

	t19 = ((x89|(x90-x91))<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = 86749;
	int8_t x94 = -1;
	volatile int16_t x95 = INT16_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t20 = -2571;

	t20 = ((x93|(x94-x95))<x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 4786206783880LLU;
	volatile int8_t x98 = -1;
	int64_t x99 = 61748LL;
	static uint8_t x100 = 1U;

	t21 = ((x97|(x98-x99))<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -3834400LL;
	int32_t x102 = INT32_MAX;
	volatile uint64_t x103 = 1678672094LLU;
	int32_t t22 = 80;

	t22 = ((x101|(x102-x103))<x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -10;
	int8_t x106 = 4;
	int32_t x107 = INT32_MAX;
	int64_t x108 = -1LL;
	volatile int32_t t23 = 32;

	t23 = ((x105|(x106-x107))<x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x112 = -1;
	volatile int32_t t24 = -30909;

	t24 = ((x109|(x110-x111))<x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = 1122855U;
	int64_t x114 = INT64_MAX;
	int8_t x115 = INT8_MAX;
	uint64_t x116 = 4355LLU;
	volatile int32_t t25 = -24666;

	t25 = ((x113|(x114-x115))<x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x117 = -21213041;
	int32_t x118 = -1;

	t26 = ((x117|(x118-x119))<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = -1;
	int16_t x127 = 3527;
	volatile uint64_t x128 = UINT64_MAX;
	static int32_t t27 = -1;

	t27 = ((x125|(x126-x127))<x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = -6700658;
	volatile int8_t x131 = INT8_MIN;
	int32_t t28 = -29504446;

	t28 = ((x129|(x130-x131))<x132);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = 256575490LL;
	int16_t x134 = INT16_MAX;
	int8_t x135 = INT8_MAX;
	int32_t x136 = 122522608;
	int32_t t29 = -24;

	t29 = ((x133|(x134-x135))<x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -40274;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = 10;
	volatile int32_t x140 = -1;
	volatile int32_t t30 = -2795213;

	t30 = ((x137|(x138-x139))<x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = UINT64_MAX;
	uint32_t x142 = UINT32_MAX;
	int16_t x144 = -1;
	int32_t t31 = 1;

	t31 = ((x141|(x142-x143))<x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x147 = 1U;
	int32_t x148 = -1601;
	volatile int32_t t32 = 23;

	t32 = ((x145|(x146-x147))<x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = UINT16_MAX;
	volatile int8_t x151 = -1;
	uint32_t x152 = UINT32_MAX;

	t33 = ((x149|(x150-x151))<x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x153 = INT64_MIN;
	uint16_t x154 = 3992U;
	uint64_t x155 = UINT64_MAX;
	static volatile uint64_t x156 = UINT64_MAX;
	static int32_t t34 = 181;

	t34 = ((x153|(x154-x155))<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = UINT8_MAX;
	static int16_t x159 = -1;
	int32_t t35 = -214941;

	t35 = ((x157|(x158-x159))<x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 485046U;
	int64_t x162 = 3582LL;
	int32_t x164 = 0;
	volatile int32_t t36 = 21527;

	t36 = ((x161|(x162-x163))<x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = -1;
	int32_t t37 = 157;

	t37 = ((x169|(x170-x171))<x172);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	int32_t x174 = -1;
	uint8_t x175 = 1U;
	uint8_t x176 = UINT8_MAX;

	t38 = ((x173|(x174-x175))<x176);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MIN;
	int8_t x188 = -1;
	static volatile int32_t t39 = -26;

	t39 = ((x185|(x186-x187))<x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = 16652U;
	int8_t x194 = -1;
	int64_t x195 = -31822173LL;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t40 = 14;

	t40 = ((x193|(x194-x195))<x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x198 = -1;
	volatile int64_t x199 = INT64_MAX;
	int32_t x200 = -65059185;
	int32_t t41 = 196;

	t41 = ((x197|(x198-x199))<x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x201 = -11;
	static volatile int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t42 = -14009160;

	t42 = ((x201|(x202-x203))<x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = INT64_MAX;
	int16_t x206 = 1;
	static int8_t x207 = -3;
	uint16_t x208 = 23U;

	t43 = ((x205|(x206-x207))<x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x215 = 1945001783227543588LLU;

	t44 = ((x213|(x214-x215))<x216);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x217 = INT64_MIN;
	int16_t x218 = -5750;
	int64_t x219 = INT64_MIN;
	static int32_t t45 = -437235758;

	t45 = ((x217|(x218-x219))<x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x221 = 1U;
	uint32_t x222 = 27U;
	int64_t x223 = 218251814LL;
	volatile int32_t x224 = INT32_MIN;
	int32_t t46 = 216;

	t46 = ((x221|(x222-x223))<x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x225 = 417301729628408LLU;
	int32_t x226 = -1;
	static volatile int64_t x227 = -1LL;
	int8_t x228 = 1;

	t47 = ((x225|(x226-x227))<x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x233 = INT32_MAX;
	int8_t x234 = -1;
	int64_t x235 = -4908702872387LL;
	int32_t t48 = -1;

	t48 = ((x233|(x234-x235))<x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = 1;
	int16_t x238 = INT16_MIN;
	uint64_t x239 = 998192456LLU;
	uint64_t x240 = UINT64_MAX;

	t49 = ((x237|(x238-x239))<x240);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x241 = UINT64_MAX;
	static volatile int8_t x242 = 0;
	volatile int32_t x243 = INT32_MAX;
	int64_t x244 = INT64_MAX;
	static volatile int32_t t50 = -199446;

	t50 = ((x241|(x242-x243))<x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = INT16_MIN;
	int64_t x247 = -1LL;
	static int64_t x248 = 36984484596513LL;
	int32_t t51 = 4051;

	t51 = ((x245|(x246-x247))<x248);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = -1;
	uint8_t x251 = UINT8_MAX;
	volatile uint8_t x252 = 3U;
	int32_t t52 = 0;

	t52 = ((x249|(x250-x251))<x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x253 = -442496641117047LL;
	uint32_t x254 = 301U;
	int8_t x255 = 1;
	uint16_t x256 = UINT16_MAX;
	static int32_t t53 = -639;

	t53 = ((x253|(x254-x255))<x256);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = 24876242128700527LL;
	int16_t x258 = -1;
	int32_t t54 = -604342;

	t54 = ((x257|(x258-x259))<x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x265 = INT32_MIN;
	static int16_t x268 = INT16_MIN;

	t55 = ((x265|(x266-x267))<x268);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x269 = INT8_MIN;
	volatile int8_t x270 = INT8_MIN;
	static uint16_t x271 = 2U;
	int64_t x272 = INT64_MAX;
	volatile int32_t t56 = -302;

	t56 = ((x269|(x270-x271))<x272);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = 223;
	uint64_t x274 = 8106984602755829300LLU;
	volatile uint16_t x275 = UINT16_MAX;
	int32_t x276 = INT32_MIN;
	static int32_t t57 = 8929;

	t57 = ((x273|(x274-x275))<x276);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x277 = UINT16_MAX;
	uint64_t x278 = 10689902029943366LLU;

	t58 = ((x277|(x278-x279))<x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x285 = 51U;
	int16_t x287 = INT16_MAX;
	uint16_t x288 = 1446U;
	volatile int32_t t59 = -4;

	t59 = ((x285|(x286-x287))<x288);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = -1;
	volatile int64_t x291 = -1LL;
	int32_t t60 = -8340360;

	t60 = ((x289|(x290-x291))<x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = -1;
	int16_t x294 = INT16_MAX;
	volatile uint32_t x295 = 127536U;
	int32_t t61 = -221538628;

	t61 = ((x293|(x294-x295))<x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x298 = UINT64_MAX;
	int8_t x300 = -2;
	volatile int32_t t62 = 2036;

	t62 = ((x297|(x298-x299))<x300);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x302 = INT16_MIN;
	volatile uint64_t x304 = 91858081LLU;
	int32_t t63 = -28775;

	t63 = ((x301|(x302-x303))<x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x305 = 42631U;
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = UINT64_MAX;
	int32_t t64 = -6779;

	t64 = ((x305|(x306-x307))<x308);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x309 = 2U;
	uint8_t x311 = UINT8_MAX;
	int64_t x312 = -583508907133079LL;

	t65 = ((x309|(x310-x311))<x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x313 = INT64_MAX;
	static volatile int64_t x314 = -64005386364556LL;
	volatile int64_t x315 = -226LL;
	static int32_t x316 = INT32_MIN;

	t66 = ((x313|(x314-x315))<x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x317 = INT32_MIN;
	uint16_t x319 = UINT16_MAX;
	volatile int32_t t67 = 8;

	t67 = ((x317|(x318-x319))<x320);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x326 = 1034091345U;
	static int32_t x327 = 3;
	int64_t x328 = 116452755091LL;
	volatile int32_t t68 = -2447;

	t68 = ((x325|(x326-x327))<x328);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = -1;
	volatile int16_t x330 = -1;
	volatile int64_t x331 = 124848503506101LL;
	int64_t x332 = INT64_MAX;
	int32_t t69 = -1384;

	t69 = ((x329|(x330-x331))<x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x333 = -1LL;
	int32_t x336 = INT32_MIN;
	static volatile int32_t t70 = -2086427;

	t70 = ((x333|(x334-x335))<x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x337 = 8428834U;
	int64_t x338 = 72LL;
	volatile uint8_t x339 = 3U;
	volatile int8_t x340 = INT8_MAX;
	int32_t t71 = 69792;

	t71 = ((x337|(x338-x339))<x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x341 = 27U;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = 11U;
	volatile int16_t x344 = -1;
	volatile int32_t t72 = 29929670;

	t72 = ((x341|(x342-x343))<x344);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = 1;
	uint16_t x346 = UINT16_MAX;
	uint16_t x348 = UINT16_MAX;

	t73 = ((x345|(x346-x347))<x348);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x349 = -1;
	int32_t x351 = INT32_MIN;
	static int32_t x352 = -104416;
	volatile int32_t t74 = 93;

	t74 = ((x349|(x350-x351))<x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x353 = UINT16_MAX;
	volatile int32_t x354 = 31;
	int8_t x355 = INT8_MIN;
	static volatile int32_t t75 = 4;

	t75 = ((x353|(x354-x355))<x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = -2117LL;
	uint64_t x359 = 50081688LLU;
	volatile int32_t t76 = -34336785;

	t76 = ((x357|(x358-x359))<x360);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = UINT64_MAX;
	uint16_t x367 = 210U;
	int8_t x368 = INT8_MIN;
	volatile int32_t t77 = 6268;

	t77 = ((x365|(x366-x367))<x368);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x369 = 24;
	uint32_t x371 = 0U;
	int8_t x372 = INT8_MIN;
	volatile int32_t t78 = 178;

	t78 = ((x369|(x370-x371))<x372);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x373 = UINT32_MAX;
	volatile int8_t x374 = INT8_MIN;
	int16_t x375 = 9;
	volatile int8_t x376 = INT8_MIN;
	int32_t t79 = -27;

	t79 = ((x373|(x374-x375))<x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x377 = INT8_MIN;
	uint64_t x379 = 450615LLU;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t80 = 13337;

	t80 = ((x377|(x378-x379))<x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x381 = 7898314LLU;
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 695U;
	static uint64_t x384 = 1511546940891789694LLU;
	volatile int32_t t81 = 122295;

	t81 = ((x381|(x382-x383))<x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x385 = 0U;
	static uint8_t x386 = UINT8_MAX;
	int16_t x387 = 1;
	static uint16_t x388 = UINT16_MAX;
	static int32_t t82 = 125;

	t82 = ((x385|(x386-x387))<x388);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = 861781774;
	volatile uint8_t x395 = UINT8_MAX;
	int64_t x396 = INT64_MAX;

	t83 = ((x393|(x394-x395))<x396);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x397 = INT64_MIN;
	static uint64_t x398 = 2626LLU;
	static int64_t x399 = -1LL;
	volatile int32_t t84 = 1016;

	t84 = ((x397|(x398-x399))<x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x401 = -7;
	uint32_t x402 = UINT32_MAX;
	static volatile int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MAX;
	static int32_t t85 = -377705;

	t85 = ((x401|(x402-x403))<x404);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x405 = INT8_MAX;
	uint16_t x406 = 1U;
	uint16_t x408 = 12U;
	int32_t t86 = 7;

	t86 = ((x405|(x406-x407))<x408);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x409 = -2060LL;
	int32_t x410 = 124;
	int8_t x411 = -1;
	int16_t x412 = INT16_MAX;
	int32_t t87 = 14444361;

	t87 = ((x409|(x410-x411))<x412);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x413 = INT16_MAX;
	uint16_t x414 = UINT16_MAX;
	static int8_t x415 = 1;
	static volatile int32_t t88 = 6151;

	t88 = ((x413|(x414-x415))<x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = -139638805990717LL;
	static uint32_t x418 = UINT32_MAX;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t89 = -1219289;

	t89 = ((x417|(x418-x419))<x420);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x421 = 2858364U;
	uint64_t x422 = 7483386892826671LLU;
	int32_t x423 = INT32_MAX;
	int8_t x424 = 0;
	int32_t t90 = 2725522;

	t90 = ((x421|(x422-x423))<x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = -520;
	volatile int64_t x426 = INT64_MAX;
	uint64_t x427 = 6430LLU;
	int16_t x428 = 180;

	t91 = ((x425|(x426-x427))<x428);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x429 = 1U;
	uint16_t x430 = 2438U;
	static uint16_t x431 = UINT16_MAX;
	int32_t x432 = -1;
	int32_t t92 = -707;

	t92 = ((x429|(x430-x431))<x432);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x433 = -1;
	uint64_t x434 = UINT64_MAX;
	volatile uint16_t x435 = UINT16_MAX;
	uint8_t x436 = 2U;
	volatile int32_t t93 = 3996;

	t93 = ((x433|(x434-x435))<x436);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x438 = UINT64_MAX;
	static int64_t x439 = -101LL;
	static volatile int64_t x440 = -35253946694658LL;
	volatile int32_t t94 = 0;

	t94 = ((x437|(x438-x439))<x440);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x446 = 17;
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = INT8_MIN;
	static int32_t t95 = 363755;

	t95 = ((x445|(x446-x447))<x448);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = -1;
	static int8_t x454 = INT8_MIN;
	volatile int32_t x456 = -18;
	int32_t t96 = -5;

	t96 = ((x453|(x454-x455))<x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x458 = UINT8_MAX;
	volatile int32_t x459 = -1;
	volatile int8_t x460 = 1;
	int32_t t97 = 44497589;

	t97 = ((x457|(x458-x459))<x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x462 = INT16_MIN;
	uint32_t x463 = 1U;
	static uint16_t x464 = 846U;
	int32_t t98 = -1327571;

	t98 = ((x461|(x462-x463))<x464);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x465 = 4642;
	uint32_t x466 = 7079458U;
	int64_t x467 = 45144881136931LL;
	int16_t x468 = 260;
	int32_t t99 = -8466;

	t99 = ((x465|(x466-x467))<x468);

	if (t99 != 1) { NG(); } else { ; }
	
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

