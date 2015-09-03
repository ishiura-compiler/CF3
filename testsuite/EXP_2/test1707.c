#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
volatile int32_t t0 = -141;
volatile int32_t x11 = INT32_MAX;
volatile uint64_t t4 = 533438561728LLU;
static uint8_t x25 = 106U;
int32_t t6 = 18;
static int8_t x33 = INT8_MIN;
int64_t x38 = 2989324LL;
static uint8_t x40 = 1U;
int8_t x45 = INT8_MAX;
int16_t x47 = INT16_MAX;
uint64_t x49 = 1820446845LLU;
int32_t x56 = INT32_MIN;
uint8_t x62 = UINT8_MAX;
static uint64_t t15 = 17LLU;
int16_t x66 = -1;
int64_t x67 = -1LL;
int8_t x85 = INT8_MIN;
int16_t x89 = -1;
int64_t x101 = 1907793419503923916LL;
volatile int16_t x103 = 89;
static volatile int64_t x121 = -125LL;
uint64_t x123 = 204073770146204LLU;
static int64_t x126 = 8000899LL;
int32_t x127 = 1;
uint16_t x128 = UINT16_MAX;
volatile int64_t t33 = 2706808748362LL;
int32_t x149 = -1;
uint64_t x150 = UINT64_MAX;
static int16_t x164 = 2048;
volatile int8_t x173 = 14;
int8_t x174 = 0;
static volatile int32_t x176 = -53789025;
uint64_t t38 = 1077231790620874LLU;
int16_t x182 = INT16_MIN;
static int32_t x189 = -19204779;
volatile int16_t x190 = INT16_MAX;
volatile uint16_t x192 = 1304U;
int32_t x197 = INT32_MIN;
uint8_t x200 = 1U;
int8_t x201 = INT8_MAX;
static int8_t x207 = -29;
uint64_t t46 = 133191465988342502LLU;
static int32_t x222 = 1249;
int8_t x225 = -1;
volatile int32_t x226 = -17;
uint16_t x228 = 1U;
volatile int32_t x229 = INT32_MIN;
int64_t x230 = -2498LL;
uint16_t x232 = 25U;
int16_t x244 = INT16_MAX;
int32_t t55 = -10099723;
volatile int16_t x252 = INT16_MAX;
volatile int32_t t58 = -28681;
uint8_t x269 = 1U;
uint32_t t61 = 14U;
static uint64_t x276 = 240298LLU;
static int32_t x289 = INT32_MIN;
static volatile int16_t x290 = 1;
int64_t t64 = -27LL;
int16_t x300 = INT16_MAX;
uint64_t t67 = 6156LLU;
static volatile int64_t t68 = 2623040596746874796LL;
int64_t x309 = INT64_MIN;
int32_t x311 = INT32_MIN;
int32_t x312 = INT32_MAX;
volatile uint64_t x319 = 23840555LLU;
int8_t x321 = 9;
int64_t t72 = -68439355002358LL;
static volatile int16_t x329 = 252;
volatile int16_t x331 = INT16_MAX;
int64_t x337 = -6968784475LL;
int8_t x370 = 45;
int64_t t83 = -37868625383439LL;
static int32_t x387 = INT32_MIN;
uint16_t x392 = UINT16_MAX;
int8_t x394 = 4;
uint32_t x395 = UINT32_MAX;
uint64_t t86 = 540LLU;
static volatile int16_t x397 = INT16_MAX;
int32_t x399 = INT32_MIN;
uint8_t x403 = 0U;
uint16_t x405 = UINT16_MAX;
int8_t x407 = -1;
uint8_t x409 = UINT8_MAX;
int16_t x410 = INT16_MIN;
int32_t x414 = -1;
volatile int64_t t94 = 5552648506648LL;
static uint32_t x429 = 6U;
static int16_t x437 = INT16_MAX;
int32_t x444 = 56517;


void f0(void) {
	int32_t x1 = -1;
	volatile int32_t x2 = -10991;
	volatile int32_t x3 = -1;

	t0 = ((x1-(x2&x3))/x4);

	if (t0 != -10990) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 23821595117318173LL;
	int32_t x6 = INT32_MIN;
	static int64_t x7 = -1LL;
	uint64_t x8 = 123553LLU;
	volatile uint64_t t1 = 66466240275514LLU;

	t1 = ((x5-(x6&x7))/x8);

	if (t1 != 192804685153LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static uint8_t x10 = 1U;
	static int16_t x12 = INT16_MAX;
	int32_t t2 = -11436;

	t2 = ((x9-(x10&x11))/x12);

	if (t2 != 65538) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = INT32_MIN;
	volatile int32_t x16 = 1174;
	volatile uint64_t t3 = 92086949LLU;

	t3 = ((x13-(x14&x15))/x16);

	if (t3 != 7856364598809420LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -35;
	uint64_t x18 = UINT64_MAX;
	static uint32_t x19 = UINT32_MAX;
	volatile uint16_t x20 = 9268U;

	t4 = ((x17-(x18&x19))/x20);

	if (t4 != 1990369450735280LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = -1;
	static uint32_t x23 = 13376U;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = 710643979977960LL;

	t5 = ((x21-(x22&x23))/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 1U;
	static int32_t x27 = -120894;
	volatile int16_t x28 = INT16_MIN;

	t6 = ((x25-(x26&x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 4LL;
	static uint64_t x30 = 12433060377565526LLU;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = 89030986U;
	uint64_t t7 = 5781567116061578918LLU;

	t7 = ((x29-(x30&x31))/x32);

	if (t7 != 207055002347LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	uint64_t x35 = 4394172LLU;
	static volatile uint64_t x36 = 23LLU;
	uint64_t t8 = 237133573063LLU;

	t8 = ((x33-(x34&x35))/x36);

	if (t8 != 802032351030850064LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 155U;
	static volatile int32_t x39 = INT32_MIN;
	static volatile int64_t t9 = 90110732903LL;

	t9 = ((x37-(x38&x39))/x40);

	if (t9 != 155LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 1312068285289781LLU;
	uint64_t x42 = 39LLU;
	static uint64_t x43 = UINT64_MAX;
	uint32_t x44 = UINT32_MAX;
	uint64_t t10 = 478625645LLU;

	t10 = ((x41-(x42&x43))/x44);

	if (t10 != 305489LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MAX;
	static int8_t x48 = 1;
	int64_t t11 = 2894696LL;

	t11 = ((x45-(x46&x47))/x48);

	if (t11 != -32640LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = -1;
	volatile uint64_t x51 = 20084372197LLU;
	int64_t x52 = INT64_MIN;
	uint64_t t12 = 1030677246552LLU;

	t12 = ((x49-(x50&x51))/x52);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static uint8_t x54 = 27U;
	static volatile uint64_t x55 = UINT64_MAX;
	volatile uint64_t t13 = 7672490664LLU;

	t13 = ((x53-(x54&x55))/x56);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 16249899217LLU;
	uint8_t x58 = 1U;
	static int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MIN;
	volatile uint64_t t14 = 2163781154652623LLU;

	t14 = ((x57-(x58&x59))/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	uint64_t x63 = UINT64_MAX;
	volatile int8_t x64 = -1;

	t15 = ((x61-(x62&x63))/x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int16_t x68 = 230;
	volatile int64_t t16 = -135471LL;

	t16 = ((x65-(x66&x67))/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint64_t x70 = 52473011112204LLU;
	uint64_t x71 = 2582256973429LLU;
	uint16_t x72 = 16U;
	uint64_t t17 = 3041LLU;

	t17 = ((x69-(x70&x71))/x72);

	if (t17 != 1152921360438136831LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MAX;
	static int64_t x74 = INT64_MIN;
	volatile uint16_t x75 = 169U;
	int64_t x76 = INT64_MIN;
	static int64_t t18 = 880075213225664LL;

	t18 = ((x73-(x74&x75))/x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = 11834277378825LL;
	uint8_t x87 = 6U;
	int16_t x88 = 180;
	volatile int64_t t19 = 0LL;

	t19 = ((x85-(x86&x87))/x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x90 = -1734;
	volatile int8_t x91 = -1;
	uint64_t x92 = 13050104414106880LLU;
	uint64_t t20 = 273348552996LLU;

	t20 = ((x89-(x90&x91))/x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x93 = 106;
	volatile uint8_t x94 = 1U;
	uint16_t x95 = UINT16_MAX;
	uint64_t x96 = UINT64_MAX;
	static uint64_t t21 = 57247329LLU;

	t21 = ((x93-(x94&x95))/x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x97 = 24097396U;
	uint8_t x98 = 89U;
	uint8_t x99 = UINT8_MAX;
	volatile int32_t x100 = -1;
	uint32_t t22 = 232U;

	t22 = ((x97-(x98&x99))/x100);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x102 = -92476;
	int64_t x104 = -1944043LL;
	int64_t t23 = -223299180918344LL;

	t23 = ((x101-(x102&x103))/x104);

	if (t23 != -981353508900LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 3U;
	uint32_t x106 = UINT32_MAX;
	int8_t x107 = -1;
	int64_t x108 = INT64_MIN;
	int64_t t24 = -280786774548774LL;

	t24 = ((x105-(x106&x107))/x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 19U;
	int8_t x110 = INT8_MAX;
	int32_t x111 = -1;
	int64_t x112 = INT64_MAX;
	int64_t t25 = 1576699LL;

	t25 = ((x109-(x110&x111))/x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 3178U;
	int8_t x114 = -6;
	int32_t x115 = INT32_MIN;
	uint32_t x116 = 1933491U;
	static uint32_t t26 = 73U;

	t26 = ((x113-(x114&x115))/x116);

	if (t26 != 1110U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -27LL;
	int8_t x118 = 14;
	int64_t x119 = -477106626LL;
	uint16_t x120 = UINT16_MAX;
	volatile int64_t t27 = 2880583967676LL;

	t27 = ((x117-(x118&x119))/x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = -1;
	static uint8_t x124 = 60U;
	volatile uint64_t t28 = 915800492208LLU;

	t28 = ((x121-(x122&x123))/x124);

	if (t28 != 307442333332323421LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MAX;
	static int64_t t29 = -6299128573LL;

	t29 = ((x125-(x126&x127))/x128);

	if (t29 != 140739635871744LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MAX;
	uint64_t x130 = 691432LLU;
	int64_t x131 = INT64_MAX;
	volatile uint32_t x132 = UINT32_MAX;
	static uint64_t t30 = 55423558LLU;

	t30 = ((x129-(x130&x131))/x132);

	if (t30 != 4294967296LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MIN;
	volatile uint8_t x135 = 0U;
	int8_t x136 = -6;
	int32_t t31 = 325497704;

	t31 = ((x133-(x134&x135))/x136);

	if (t31 != 5461) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -3LL;
	int64_t x142 = 922132134201374014LL;
	uint32_t x143 = 3807U;
	uint32_t x144 = 477675U;
	int64_t t32 = -46604415620LL;

	t32 = ((x141-(x142&x143))/x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 14;
	static int64_t x146 = INT64_MIN;
	uint32_t x147 = UINT32_MAX;
	volatile int32_t x148 = INT32_MIN;

	t33 = ((x145-(x146&x147))/x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x151 = -1LL;
	uint16_t x152 = UINT16_MAX;
	uint64_t t34 = 1325452072LLU;

	t34 = ((x149-(x150&x151))/x152);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -1LL;
	volatile int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MIN;
	static int64_t x160 = INT64_MIN;
	volatile int64_t t35 = -627922379LL;

	t35 = ((x157-(x158&x159))/x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x161 = INT64_MIN;
	volatile uint16_t x162 = 9297U;
	volatile int32_t x163 = INT32_MIN;
	volatile int64_t t36 = 0LL;

	t36 = ((x161-(x162&x163))/x164);

	if (t36 != -4503599627370496LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 1375U;
	int8_t x166 = -1;
	int64_t x167 = -34353LL;
	uint64_t x168 = 7270455929204LLU;
	uint64_t t37 = 1457LLU;

	t37 = ((x165-(x166&x167))/x168);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x175 = 340535983LLU;

	t38 = ((x173-(x174&x175))/x176);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = UINT32_MAX;
	static int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	volatile uint32_t t39 = 10914356U;

	t39 = ((x181-(x182&x183))/x184);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x185 = INT16_MAX;
	uint8_t x186 = UINT8_MAX;
	int8_t x187 = INT8_MIN;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t40 = -50218;

	t40 = ((x185-(x186&x187))/x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x191 = 5U;
	int32_t t41 = 356884;

	t41 = ((x189-(x190&x191))/x192);

	if (t41 != -14727) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = -2560309;
	volatile int64_t x194 = -1LL;
	volatile int16_t x195 = -2582;
	uint8_t x196 = 7U;
	int64_t t42 = -157LL;

	t42 = ((x193-(x194&x195))/x196);

	if (t42 != -365389LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x198 = 45LLU;
	int64_t x199 = INT64_MIN;
	volatile uint64_t t43 = 11LLU;

	t43 = ((x197-(x198&x199))/x200);

	if (t43 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x202 = -1;
	static volatile int64_t x203 = 10885627771125LL;
	volatile int8_t x204 = -3;
	static int64_t t44 = 256202528927LL;

	t44 = ((x201-(x202&x203))/x204);

	if (t44 != 3628542590332LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MIN;
	static volatile int64_t x206 = -811LL;
	volatile int64_t x208 = 52345LL;
	int64_t t45 = -1LL;

	t45 = ((x205-(x206&x207))/x208);

	if (t45 != -41025LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x209 = INT16_MIN;
	uint64_t x210 = 218382955LLU;
	int16_t x211 = 5;
	volatile int8_t x212 = INT8_MIN;

	t46 = ((x209-(x210&x211))/x212);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = 4U;
	int64_t x214 = INT64_MAX;
	static int16_t x215 = INT16_MIN;
	volatile int8_t x216 = INT8_MIN;
	volatile int64_t t47 = -24150LL;

	t47 = ((x213-(x214&x215))/x216);

	if (t47 != 72057594037927679LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = -1;
	int16_t x219 = 6327;
	static int16_t x220 = INT16_MAX;
	volatile int32_t t48 = 1;

	t48 = ((x217-(x218&x219))/x220);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x221 = INT32_MAX;
	static uint32_t x223 = 714891105U;
	int8_t x224 = -1;
	uint32_t t49 = 10U;

	t49 = ((x221-(x222&x223))/x224);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x227 = 1720777U;
	static volatile uint32_t t50 = 13032U;

	t50 = ((x225-(x226&x227))/x228);

	if (t50 != 4293246518U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x231 = UINT8_MAX;
	int64_t t51 = 1LL;

	t51 = ((x229-(x230&x231))/x232);

	if (t51 != -85899348LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MIN;
	volatile int16_t x234 = -1;
	volatile int32_t x235 = 190798131;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t52 = 25;

	t52 = ((x233-(x234&x235))/x236);

	if (t52 != -2911) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x237 = 1;
	int16_t x238 = -1;
	int8_t x239 = INT8_MAX;
	uint8_t x240 = 5U;
	int32_t t53 = 680792;

	t53 = ((x237-(x238&x239))/x240);

	if (t53 != -25) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = 305491012820458191LLU;
	uint8_t x242 = 0U;
	uint16_t x243 = UINT16_MAX;
	uint64_t t54 = 3575172LLU;

	t54 = ((x241-(x242&x243))/x244);

	if (t54 != 9323130369593LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = -1;
	int8_t x246 = INT8_MIN;
	int8_t x247 = -1;
	uint8_t x248 = 2U;

	t55 = ((x245-(x246&x247))/x248);

	if (t55 != 63) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x249 = 4413U;
	static volatile int8_t x250 = 60;
	int32_t x251 = 3353748;
	int32_t t56 = -1192031;

	t56 = ((x249-(x250&x251))/x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = INT16_MIN;
	volatile uint32_t x254 = 32930742U;
	int64_t x255 = INT64_MIN;
	volatile uint64_t x256 = 252963055LLU;
	uint64_t t57 = 3LLU;

	t57 = ((x253-(x254&x255))/x256);

	if (t57 != 72922680640LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x257 = INT32_MIN;
	volatile int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	static int16_t x260 = 3;

	t58 = ((x257-(x258&x259))/x260);

	if (t58 != -715827882) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x261 = INT8_MIN;
	volatile int8_t x262 = 28;
	uint32_t x263 = 2088442394U;
	int8_t x264 = INT8_MIN;
	uint32_t t59 = 2U;

	t59 = ((x261-(x262&x263))/x264);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = -1;
	int64_t x266 = INT64_MIN;
	int32_t x267 = INT32_MIN;
	int16_t x268 = -1;
	static int64_t t60 = -211356LL;

	t60 = ((x265-(x266&x267))/x268);

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = -1;
	volatile uint32_t x271 = 916502U;
	int16_t x272 = 38;

	t61 = ((x269-(x270&x271))/x272);

	if (t61 != 113001336U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = INT16_MIN;
	volatile uint64_t x274 = 856894664327227LLU;
	uint32_t x275 = UINT32_MAX;
	volatile uint64_t t62 = 610662290281430LLU;

	t62 = ((x273-(x274&x275))/x276);

	if (t62 != 76766115707435LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x281 = INT16_MIN;
	volatile int64_t x282 = INT64_MIN;
	volatile int64_t x283 = INT64_MAX;
	static volatile int32_t x284 = INT32_MIN;
	int64_t t63 = 1015931809261LL;

	t63 = ((x281-(x282&x283))/x284);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x291 = 0;
	volatile int64_t x292 = -1LL;

	t64 = ((x289-(x290&x291))/x292);

	if (t64 != 2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x293 = 1U;
	static uint16_t x294 = 994U;
	int32_t x295 = INT32_MAX;
	uint8_t x296 = 2U;
	int32_t t65 = 9;

	t65 = ((x293-(x294&x295))/x296);

	if (t65 != -496) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = 157;
	static int16_t x298 = -11098;
	int16_t x299 = INT16_MIN;
	int32_t t66 = 161;

	t66 = ((x297-(x298&x299))/x300);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = 3U;
	uint64_t x302 = 976LLU;
	uint16_t x303 = 7355U;
	static int8_t x304 = INT8_MIN;

	t67 = ((x301-(x302&x303))/x304);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = 4;
	volatile int16_t x306 = -13;
	static int64_t x307 = -1LL;
	volatile int8_t x308 = -14;

	t68 = ((x305-(x306&x307))/x308);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x310 = INT8_MIN;
	volatile int64_t t69 = -1126296LL;

	t69 = ((x309-(x310&x311))/x312);

	if (t69 != -4294967297LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = INT8_MAX;
	int64_t x318 = INT64_MIN;
	volatile uint16_t x320 = UINT16_MAX;
	volatile uint64_t t70 = 14889267809041LLU;

	t70 = ((x317-(x318&x319))/x320);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x322 = 44U;
	uint64_t x323 = 3682077165940098LLU;
	uint32_t x324 = UINT32_MAX;
	volatile uint64_t t71 = 117197773810061850LLU;

	t71 = ((x321-(x322&x323))/x324);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = INT32_MIN;
	volatile int64_t x326 = INT64_MIN;
	static uint8_t x327 = 4U;
	int32_t x328 = INT32_MIN;

	t72 = ((x325-(x326&x327))/x328);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x330 = UINT16_MAX;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t73 = 344979372;

	t73 = ((x329-(x330&x331))/x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x333 = 12U;
	uint32_t x334 = 25U;
	uint64_t x335 = UINT64_MAX;
	int32_t x336 = -62852;
	uint64_t t74 = 228LLU;

	t74 = ((x333-(x334&x335))/x336);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x338 = -1;
	uint32_t x339 = 263869351U;
	static uint32_t x340 = 884940U;
	volatile int64_t t75 = -65153393LL;

	t75 = ((x337-(x338&x339))/x340);

	if (t75 != -8173LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = 1530504877U;
	int16_t x342 = -1;
	volatile int64_t x343 = 1LL;
	int8_t x344 = INT8_MIN;
	volatile int64_t t76 = 995556LL;

	t76 = ((x341-(x342&x343))/x344);

	if (t76 != -11957069LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = 5;
	volatile int16_t x346 = INT16_MAX;
	volatile uint64_t x347 = 8238471728LLU;
	uint64_t x348 = 1130210680498329LLU;
	uint64_t t77 = 6255158408LLU;

	t77 = ((x345-(x346&x347))/x348);

	if (t77 != 16321LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x349 = -1LL;
	int32_t x350 = -12469;
	static uint64_t x351 = 14257LLU;
	static uint16_t x352 = UINT16_MAX;
	volatile uint64_t t78 = 25573336LLU;

	t78 = ((x349-(x350&x351))/x352);

	if (t78 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = -3LL;
	static volatile int8_t x354 = -2;
	int32_t x355 = 3;
	volatile int8_t x356 = 1;
	int64_t t79 = 639954979LL;

	t79 = ((x353-(x354&x355))/x356);

	if (t79 != -5LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x361 = 0U;
	uint16_t x362 = 5027U;
	static volatile int8_t x363 = -19;
	int64_t x364 = INT64_MAX;
	volatile int64_t t80 = 698LL;

	t80 = ((x361-(x362&x363))/x364);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = -1;
	uint16_t x371 = 1673U;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t81 = 114233873LLU;

	t81 = ((x369-(x370&x371))/x372);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MAX;
	int32_t x379 = 119886;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t82 = -24;

	t82 = ((x377-(x378&x379))/x380);

	if (t82 != -85) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = INT8_MIN;
	volatile int16_t x382 = 88;
	int64_t x383 = -18971190444LL;
	uint16_t x384 = UINT16_MAX;

	t83 = ((x381-(x382&x383))/x384);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x385 = -1;
	uint8_t x386 = 3U;
	static uint32_t x388 = 5485U;
	uint32_t t84 = 22352370U;

	t84 = ((x385-(x386&x387))/x388);

	if (t84 != 783038U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = INT32_MIN;
	static uint64_t x390 = UINT64_MAX;
	volatile int64_t x391 = INT64_MAX;
	uint64_t t85 = 1590024158818LLU;

	t85 = ((x389-(x390&x391))/x392);

	if (t85 != 140739635838976LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x393 = 9U;
	uint64_t x396 = 187564LLU;

	t86 = ((x393-(x394&x395))/x396);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x398 = INT8_MAX;
	int16_t x400 = INT16_MIN;
	volatile int32_t t87 = 2340;

	t87 = ((x397-(x398&x399))/x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x401 = 5921;
	int8_t x402 = INT8_MAX;
	volatile int64_t x404 = -391801763236098LL;
	int64_t t88 = -54LL;

	t88 = ((x401-(x402&x403))/x404);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x406 = INT16_MAX;
	int16_t x408 = -1;
	int32_t t89 = 906492;

	t89 = ((x405-(x406&x407))/x408);

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x411 = INT8_MIN;
	int8_t x412 = 1;
	int32_t t90 = 233;

	t90 = ((x409-(x410&x411))/x412);

	if (t90 != 33023) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x413 = 14907595686637428LLU;
	int64_t x415 = INT64_MIN;
	uint32_t x416 = 5484U;
	static volatile uint64_t t91 = 4605713630LLU;

	t91 = ((x413-(x414&x415))/x416);

	if (t91 != 1684587825044021LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x417 = INT16_MIN;
	static int32_t x418 = -2765;
	static int8_t x419 = INT8_MAX;
	uint64_t x420 = 258799LLU;
	static volatile uint64_t t92 = 6411559385LLU;

	t92 = ((x417-(x418&x419))/x420);

	if (t92 != 71278266429582LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x421 = INT32_MAX;
	int32_t x422 = INT32_MIN;
	volatile uint8_t x423 = 30U;
	int32_t x424 = 19166749;
	volatile int32_t t93 = 168;

	t93 = ((x421-(x422&x423))/x424);

	if (t93 != 112) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x425 = -1LL;
	uint16_t x426 = 2U;
	int64_t x427 = INT64_MIN;
	volatile int32_t x428 = -1;

	t94 = ((x425-(x426&x427))/x428);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x430 = 0U;
	volatile int8_t x431 = INT8_MIN;
	uint32_t x432 = 100995U;
	uint32_t t95 = 11108U;

	t95 = ((x429-(x430&x431))/x432);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = -1;
	static int32_t x434 = INT32_MIN;
	uint32_t x435 = 40658U;
	int32_t x436 = 6;
	volatile uint32_t t96 = 11726675U;

	t96 = ((x433-(x434&x435))/x436);

	if (t96 != 715827882U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x438 = 883U;
	int64_t x439 = INT64_MAX;
	int16_t x440 = INT16_MIN;
	volatile int64_t t97 = 6LL;

	t97 = ((x437-(x438&x439))/x440);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = 54;
	int8_t x442 = -14;
	uint8_t x443 = UINT8_MAX;
	int32_t t98 = -14;

	t98 = ((x441-(x442&x443))/x444);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x445 = 3LLU;
	volatile int32_t x446 = INT32_MIN;
	int64_t x447 = INT64_MAX;
	int8_t x448 = -1;
	uint64_t t99 = 329LLU;

	t99 = ((x445-(x446&x447))/x448);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

