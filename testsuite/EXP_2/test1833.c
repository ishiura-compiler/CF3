#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x8 = 494814507208970067LLU;
int64_t t2 = 642707791200866889LL;
uint16_t x26 = UINT16_MAX;
uint64_t x27 = UINT64_MAX;
int64_t x31 = INT64_MAX;
int32_t x32 = INT32_MIN;
int8_t x34 = 2;
volatile int16_t x35 = 6173;
int64_t x44 = INT64_MIN;
int64_t t10 = INT64_MIN;
int8_t x47 = INT8_MIN;
static int64_t t12 = 31697428895LL;
int8_t x63 = -1;
static int8_t x82 = -1;
int16_t x83 = INT16_MIN;
volatile uint64_t t20 = 107LLU;
int8_t x86 = INT8_MIN;
static int8_t x88 = -33;
uint8_t x93 = UINT8_MAX;
static int16_t x94 = 776;
static volatile int32_t t28 = 1;
int32_t t29 = -82957152;
int8_t x123 = INT8_MIN;
static int16_t x124 = -213;
int32_t x127 = INT32_MIN;
int32_t x130 = INT32_MIN;
int64_t x132 = -40152018440LL;
uint64_t t33 = 229LLU;
volatile int64_t t34 = -1815214LL;
int16_t x141 = INT16_MAX;
int32_t x147 = 1630;
static int64_t x154 = -47900696LL;
volatile uint64_t t40 = 1427488360LLU;
int32_t x179 = -31466;
int32_t x180 = INT32_MIN;
int64_t t44 = 1755858997274LL;
static int32_t t45 = 35611406;
uint32_t x185 = UINT32_MAX;
static int16_t x187 = INT16_MIN;
volatile int64_t t46 = -31LL;
static uint16_t x197 = 3U;
uint32_t x198 = 1551057803U;
int16_t x202 = INT16_MIN;
int64_t x209 = INT64_MIN;
uint64_t x212 = 90226461LLU;
static int16_t x215 = INT16_MIN;
int16_t x222 = INT16_MAX;
int32_t x223 = INT32_MAX;
int64_t x226 = INT64_MIN;
static int16_t x227 = -118;
int32_t x229 = -2420;
static int32_t x231 = -1;
static volatile int16_t x232 = -1;
volatile int64_t x234 = 41LL;
int16_t x235 = INT16_MIN;
static uint16_t x236 = UINT16_MAX;
int8_t x237 = INT8_MAX;
int64_t x244 = 35LL;
int8_t x245 = INT8_MIN;
int32_t x247 = INT32_MIN;
uint32_t x250 = UINT32_MAX;
int32_t x252 = -146403;
volatile int32_t x254 = INT32_MAX;
static int32_t x257 = 544984005;
int64_t x266 = INT64_MAX;
uint16_t x267 = 231U;
int16_t x268 = 98;
volatile int64_t t66 = -276870432864680592LL;
uint16_t x271 = 3571U;
volatile int32_t t67 = -274894;
uint8_t x273 = UINT8_MAX;
int8_t x275 = INT8_MIN;
volatile int32_t t68 = -25;
int64_t x287 = -1020656100LL;
int16_t x289 = -1;
int8_t x293 = 2;
static uint32_t x305 = 221126U;
int16_t x308 = 8;
volatile uint32_t t77 = 157367U;
volatile uint32_t x314 = 61U;
uint64_t x318 = UINT64_MAX;
volatile int8_t x322 = -1;
uint64_t x323 = UINT64_MAX;
static volatile int64_t t81 = INT64_MIN;
uint32_t x333 = UINT32_MAX;
int8_t x336 = INT8_MAX;
static int32_t x337 = INT32_MIN;
static int64_t x338 = -1LL;
uint32_t x345 = 625U;
uint64_t x346 = 9060253498960LLU;
uint64_t t86 = 1576LLU;
int64_t x349 = 2254LL;
int8_t x354 = -4;
uint8_t x358 = 1U;
volatile int32_t x361 = INT32_MAX;
static uint64_t t90 = UINT64_MAX;
uint8_t x367 = 92U;
int8_t x368 = -35;
uint16_t x370 = 1U;
uint8_t x374 = UINT8_MAX;
uint8_t x382 = 1U;
int64_t x386 = -1LL;
int16_t x387 = INT16_MIN;
uint8_t x396 = 2U;
int32_t x399 = 44941988;


void f0(void) {
	uint16_t x1 = 1971U;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = UINT8_MAX;
	static volatile uint32_t t0 = 588407U;

	t0 = ((x1&(x2&x3))^x4);

	if (t0 != 1919U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 197248958;
	uint64_t x6 = UINT64_MAX;
	uint64_t x7 = 53715997456273LLU;
	uint64_t t1 = 3LLU;

	t1 = ((x5&(x6&x7))^x8);

	if (t1 != 494814507297065155LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int32_t x10 = -1;
	int16_t x11 = -1;
	int16_t x12 = 1;

	t2 = ((x9&(x10&x11))^x12);

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 5U;
	uint16_t x14 = 1381U;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = -1;
	uint32_t t3 = 81314U;

	t3 = ((x13&(x14&x15))^x16);

	if (t3 != 4294967290U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = -1;
	volatile int16_t x19 = -1;
	uint16_t x20 = 118U;
	static volatile int32_t t4 = -1896275;

	t4 = ((x17&(x18&x19))^x20);

	if (t4 != -32650) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int16_t x22 = -1;
	static volatile int8_t x23 = INT8_MIN;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 13114;

	t5 = ((x21&(x22&x23))^x24);

	if (t5 != -2147483520) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 379;
	int64_t x28 = -1933761116535539323LL;
	uint64_t t6 = 641307LLU;

	t6 = ((x25&(x26&x27))^x28);

	if (t6 != 16512982957174012158LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	static int64_t x30 = INT64_MIN;
	volatile int64_t t7 = -6144610236LL;

	t7 = ((x29&(x30&x31))^x32);

	if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 14381231112619013LL;
	int32_t x36 = -1;
	volatile int64_t t8 = -15LL;

	t8 = ((x33&(x34&x35))^x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 123384150587308828LLU;
	int8_t x38 = INT8_MAX;
	volatile int8_t x39 = -1;
	volatile int16_t x40 = INT16_MIN;
	volatile uint64_t t9 = 9534133295854644LLU;

	t9 = ((x37&(x38&x39))^x40);

	if (t9 != 18446744073709518876LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint16_t x42 = UINT16_MAX;
	uint8_t x43 = 1U;

	t10 = ((x41&(x42&x43))^x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int16_t x46 = -1;
	uint64_t x48 = 2282656705LLU;
	uint64_t t11 = 17063074713823135LLU;

	t11 = ((x45&(x46&x47))^x48);

	if (t11 != 18446744071426894913LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 795575U;
	uint32_t x50 = 2853U;
	static int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MIN;

	t12 = ((x49&(x50&x51))^x52);

	if (t12 != -128LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int64_t x54 = -8301LL;
	int64_t x55 = INT64_MIN;
	volatile uint64_t x56 = 787435054016575LLU;
	uint64_t t13 = 6826505LLU;

	t13 = ((x53&(x54&x55))^x56);

	if (t13 != 787435054016575LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	int64_t x58 = -1LL;
	static int64_t x59 = -1LL;
	int16_t x60 = INT16_MIN;
	int64_t t14 = -2LL;

	t14 = ((x57&(x58&x59))^x60);

	if (t14 != 32640LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 7U;
	static int32_t x62 = INT32_MIN;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 495;

	t15 = ((x61&(x62&x63))^x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MAX;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 6934;

	t16 = ((x65&(x66&x67))^x68);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int32_t x70 = INT32_MAX;
	static uint8_t x71 = 12U;
	uint8_t x72 = 28U;
	volatile int32_t t17 = 6059;

	t17 = ((x69&(x70&x71))^x72);

	if (t17 != 16) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	static int64_t x74 = -1LL;
	int32_t x75 = 5;
	uint64_t x76 = UINT64_MAX;
	static uint64_t t18 = 934659LLU;

	t18 = ((x73&(x74&x75))^x76);

	if (t18 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x78 = 495;
	int64_t x79 = 40547950LL;
	uint8_t x80 = 13U;
	int64_t t19 = 595918034785282LL;

	t19 = ((x77&(x78&x79))^x80);

	if (t19 != 13LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 10U;
	uint64_t x84 = 56883LLU;

	t20 = ((x81&(x82&x83))^x84);

	if (t20 != 56883LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	static int64_t x87 = -1LL;
	static int64_t t21 = -6069742885LL;

	t21 = ((x85&(x86&x87))^x88);

	if (t21 != -65441LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MIN;
	volatile int8_t x91 = 2;
	int16_t x92 = 117;
	int64_t t22 = 14962150581LL;

	t22 = ((x89&(x90&x91))^x92);

	if (t22 != 117LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x95 = 751U;
	uint8_t x96 = UINT8_MAX;
	volatile uint32_t t23 = 178090089U;

	t23 = ((x93&(x94&x95))^x96);

	if (t23 != 247U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = UINT64_MAX;
	uint32_t x98 = UINT32_MAX;
	uint8_t x99 = 8U;
	int8_t x100 = INT8_MIN;
	volatile uint64_t t24 = 11910038031709040LLU;

	t24 = ((x97&(x98&x99))^x100);

	if (t24 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -35592;
	volatile int8_t x102 = INT8_MIN;
	int16_t x103 = -1;
	volatile int64_t x104 = INT64_MIN;
	volatile int64_t t25 = 478LL;

	t25 = ((x101&(x102&x103))^x104);

	if (t25 != 9223372036854740096LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 1409372864347731543LLU;
	uint16_t x106 = 307U;
	int64_t x107 = 31787067LL;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t26 = 1393297268668LLU;

	t26 = ((x105&(x106&x107))^x108);

	if (t26 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -124749;
	static uint32_t x110 = UINT32_MAX;
	volatile int8_t x111 = INT8_MIN;
	uint16_t x112 = 3U;
	volatile uint32_t t27 = 2844U;

	t27 = ((x109&(x110&x111))^x112);

	if (t27 != 4294842499U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	volatile int16_t x114 = INT16_MIN;
	int32_t x115 = -9;
	int8_t x116 = 0;

	t28 = ((x113&(x114&x115))^x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	static int8_t x118 = INT8_MIN;
	volatile int8_t x119 = -1;
	int32_t x120 = -1;

	t29 = ((x117&(x118&x119))^x120);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	int64_t x122 = INT64_MIN;
	volatile int64_t t30 = -100434419973907LL;

	t30 = ((x121&(x122&x123))^x124);

	if (t30 != 9223372036854775595LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 0;
	volatile int8_t x126 = -1;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = 220;

	t31 = ((x125&(x126&x127))^x128);

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int32_t x131 = -3576;
	static int64_t t32 = 382743LL;

	t32 = ((x129&(x130&x131))^x132);

	if (t32 != -40152018440LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 547537116086122304LLU;
	int8_t x134 = INT8_MAX;
	uint32_t x135 = 11437U;
	volatile int16_t x136 = INT16_MIN;

	t33 = ((x133&(x134&x135))^x136);

	if (t33 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile int64_t x138 = -1LL;
	static int16_t x139 = -1;
	static int64_t x140 = -54147110LL;

	t34 = ((x137&(x138&x139))^x140);

	if (t34 != 54147162LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	static int64_t x143 = INT64_MIN;
	volatile int16_t x144 = INT16_MIN;
	static int64_t t35 = -788015826333763LL;

	t35 = ((x141&(x142&x143))^x144);

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -1;
	static int64_t x146 = -47051LL;
	int32_t x148 = -1;
	volatile int64_t t36 = -3137353LL;

	t36 = ((x145&(x146&x147))^x148);

	if (t36 != -21LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	uint16_t x152 = 15U;
	int64_t t37 = -2871632LL;

	t37 = ((x149&(x150&x151))^x152);

	if (t37 != 15LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	volatile uint64_t t38 = 131887884472091LLU;

	t38 = ((x153&(x154&x155))^x156);

	if (t38 != 47874048LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	uint64_t x158 = UINT64_MAX;
	int32_t x159 = -1;
	int64_t x160 = INT64_MIN;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x157&(x158&x159))^x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static uint64_t x162 = 7639LLU;
	static int8_t x163 = INT8_MIN;
	int16_t x164 = 0;

	t40 = ((x161&(x162&x163))^x164);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 10951945LLU;
	int32_t x166 = INT32_MIN;
	uint16_t x167 = 1194U;
	int8_t x168 = INT8_MAX;
	uint64_t t41 = 400LLU;

	t41 = ((x165&(x166&x167))^x168);

	if (t41 != 127LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	int16_t x170 = -8620;
	int32_t x171 = INT32_MIN;
	int32_t x172 = 261555;
	int32_t t42 = 394;

	t42 = ((x169&(x170&x171))^x172);

	if (t42 != -2147222093) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MIN;
	int64_t x175 = INT64_MAX;
	volatile int32_t x176 = INT32_MIN;
	int64_t t43 = -2370459131441LL;

	t43 = ((x173&(x174&x175))^x176);

	if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 2472U;
	volatile int64_t x178 = -1244723958689LL;

	t44 = ((x177&(x178&x179))^x180);

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -1;
	int8_t x182 = 0;
	int16_t x183 = INT16_MIN;
	static int16_t x184 = -1;

	t45 = ((x181&(x182&x183))^x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = INT16_MIN;
	int64_t x188 = INT64_MIN;

	t46 = ((x185&(x186&x187))^x188);

	if (t46 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 6LLU;
	uint32_t x190 = 1979524U;
	uint16_t x191 = UINT16_MAX;
	uint16_t x192 = UINT16_MAX;
	volatile uint64_t t47 = 32417901462674LLU;

	t47 = ((x189&(x190&x191))^x192);

	if (t47 != 65531LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	int32_t x194 = -440572796;
	volatile int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	static int32_t t48 = 4836;

	t48 = ((x193&(x194&x195))^x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x199 = 29943U;
	static uint8_t x200 = UINT8_MAX;
	static volatile uint32_t t49 = 815059214U;

	t49 = ((x197&(x198&x199))^x200);

	if (t49 != 252U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	static uint8_t x204 = 2U;
	uint32_t t50 = 286260375U;

	t50 = ((x201&(x202&x203))^x204);

	if (t50 != 2147483650U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static int32_t x206 = INT32_MIN;
	volatile int16_t x207 = INT16_MIN;
	uint8_t x208 = 1U;
	int32_t t51 = -28962;

	t51 = ((x205&(x206&x207))^x208);

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = -2638782778483763LL;
	int64_t x211 = -1LL;
	uint64_t t52 = 73018505337331LLU;

	t52 = ((x209&(x210&x211))^x212);

	if (t52 != 9223372036945002269LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	uint8_t x214 = 0U;
	int16_t x216 = INT16_MAX;
	int64_t t53 = -63LL;

	t53 = ((x213&(x214&x215))^x216);

	if (t53 != 32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MAX;
	uint8_t x218 = UINT8_MAX;
	volatile uint8_t x219 = 10U;
	int64_t x220 = -1LL;
	volatile int64_t t54 = -533092LL;

	t54 = ((x217&(x218&x219))^x220);

	if (t54 != -11LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x224 = -1LL;
	int64_t t55 = 5LL;

	t55 = ((x221&(x222&x223))^x224);

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int32_t x228 = 1;
	volatile int64_t t56 = -32129710LL;

	t56 = ((x225&(x226&x227))^x228);

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x230 = 2155U;
	int32_t t57 = 4601136;

	t57 = ((x229&(x230&x231))^x232);

	if (t57 != -9) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	volatile int64_t t58 = -152LL;

	t58 = ((x233&(x234&x235))^x236);

	if (t58 != 65535LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x238 = INT8_MAX;
	uint16_t x239 = UINT16_MAX;
	int32_t x240 = INT32_MAX;
	volatile int32_t t59 = 180518940;

	t59 = ((x237&(x238&x239))^x240);

	if (t59 != 2147483520) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MAX;
	uint32_t x242 = 91156586U;
	uint64_t x243 = UINT64_MAX;
	volatile uint64_t t60 = 19242LLU;

	t60 = ((x241&(x242&x243))^x244);

	if (t60 != 91156553LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x246 = 38;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 87366721;

	t61 = ((x245&(x246&x247))^x248);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -14;
	uint8_t x251 = 100U;
	volatile uint32_t t62 = 109U;

	t62 = ((x249&(x250&x251))^x252);

	if (t62 != 4294820989U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 34175162546552071LLU;
	uint8_t x255 = 24U;
	volatile uint32_t x256 = UINT32_MAX;
	uint64_t t63 = 287893066076619LLU;

	t63 = ((x253&(x254&x255))^x256);

	if (t63 != 4294967295LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = 6820;
	uint32_t x259 = 3U;
	static uint32_t x260 = UINT32_MAX;
	uint32_t t64 = UINT32_MAX;

	t64 = ((x257&(x258&x259))^x260);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 1;
	int8_t x262 = INT8_MAX;
	int32_t x263 = -7;
	int32_t x264 = INT32_MAX;
	int32_t t65 = -40984;

	t65 = ((x261&(x262&x263))^x264);

	if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 2U;

	t66 = ((x265&(x266&x267))^x268);

	if (t66 != 96LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MAX;
	uint8_t x272 = UINT8_MAX;

	t67 = ((x269&(x270&x271))^x272);

	if (t67 != 3455) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = -1;
	static int32_t x276 = -1789795;

	t68 = ((x273&(x274&x275))^x276);

	if (t68 != -1789923) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	volatile int16_t x279 = INT16_MAX;
	int8_t x280 = INT8_MAX;
	int32_t t69 = -31395;

	t69 = ((x277&(x278&x279))^x280);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 3910U;
	uint64_t x282 = 2227908554853800415LLU;
	int16_t x283 = -1;
	static volatile uint64_t x284 = 2216007874828643LLU;
	uint64_t t70 = 618348010084LLU;

	t70 = ((x281&(x282&x283))^x284);

	if (t70 != 2216007874826277LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 125245U;
	uint8_t x286 = 6U;
	int8_t x288 = 18;
	static volatile int64_t t71 = 348759LL;

	t71 = ((x285&(x286&x287))^x288);

	if (t71 != 22LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x290 = 7U;
	static int32_t x291 = -225720;
	volatile int64_t x292 = INT64_MAX;
	int64_t t72 = INT64_MAX;

	t72 = ((x289&(x290&x291))^x292);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -1;
	int16_t x295 = INT16_MIN;
	static volatile uint16_t x296 = 7698U;
	volatile int32_t t73 = 377;

	t73 = ((x293&(x294&x295))^x296);

	if (t73 != 7698) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	static int64_t x298 = 793199718LL;
	int64_t x299 = INT64_MAX;
	static int64_t x300 = 3850238951LL;
	int64_t t74 = 2995221LL;

	t74 = ((x297&(x298&x299))^x300);

	if (t74 != 3850238951LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	volatile int64_t x302 = INT64_MIN;
	volatile uint32_t x303 = 33165602U;
	static volatile int16_t x304 = -1;
	volatile int64_t t75 = 22623233LL;

	t75 = ((x301&(x302&x303))^x304);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 2549748004LLU;
	int16_t x307 = 768;
	volatile uint64_t t76 = 131517411198109LLU;

	t76 = ((x305&(x306&x307))^x308);

	if (t76 != 264LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 105U;
	uint8_t x310 = 4U;
	static volatile int8_t x311 = INT8_MIN;
	int32_t x312 = -115;

	t77 = ((x309&(x310&x311))^x312);

	if (t77 != 4294967181U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int32_t x315 = -1;
	static int32_t x316 = -1;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x313&(x314&x315))^x316);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x317 = INT16_MAX;
	int64_t x319 = -1LL;
	static int32_t x320 = 3236;
	volatile uint64_t t79 = 14088547LLU;

	t79 = ((x317&(x318&x319))^x320);

	if (t79 != 29531LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	static uint16_t x324 = 506U;
	uint64_t t80 = 14LLU;

	t80 = ((x321&(x322&x323))^x324);

	if (t80 != 9223372036854775301LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 952865378U;
	uint32_t x326 = 109U;
	volatile int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MIN;

	t81 = ((x325&(x326&x327))^x328);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 6U;
	int32_t x330 = INT32_MAX;
	int8_t x331 = INT8_MAX;
	int64_t x332 = INT64_MIN;
	volatile int64_t t82 = -1748983821LL;

	t82 = ((x329&(x330&x331))^x332);

	if (t82 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = -10;
	volatile uint32_t t83 = 2201U;

	t83 = ((x333&(x334&x335))^x336);

	if (t83 != 137U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x339 = -3545LL;
	int64_t x340 = 172582LL;
	int64_t t84 = -65638642840229835LL;

	t84 = ((x337&(x338&x339))^x340);

	if (t84 != -2147311066LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	uint64_t x342 = 16566009365799645LLU;
	static int8_t x343 = -1;
	static volatile uint32_t x344 = 1651U;
	volatile uint64_t t85 = 471911428498679636LLU;

	t85 = ((x341&(x342&x343))^x344);

	if (t85 != 1651LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = 7127;

	t86 = ((x345&(x346&x347))^x348);

	if (t86 != 6535LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 27509U;
	static int32_t x351 = INT32_MAX;
	uint64_t x352 = 3085056219LLU;
	volatile uint64_t t87 = 551181524LLU;

	t87 = ((x349&(x350&x351))^x352);

	if (t87 != 3085054111LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	static volatile int32_t x355 = 644;
	int16_t x356 = INT16_MAX;
	static int32_t t88 = 1;

	t88 = ((x353&(x354&x355))^x356);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 378LLU;
	uint32_t x359 = 451121492U;
	uint16_t x360 = UINT16_MAX;
	volatile uint64_t t89 = 2064948554144LLU;

	t89 = ((x357&(x358&x359))^x360);

	if (t89 != 65535LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = 10646LLU;
	int32_t x363 = INT32_MIN;
	int16_t x364 = -1;

	t90 = ((x361&(x362&x363))^x364);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = 18489;
	int64_t t91 = -2129231LL;

	t91 = ((x365&(x366&x367))^x368);

	if (t91 != -35LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	uint8_t x371 = 25U;
	int64_t x372 = INT64_MIN;
	volatile int64_t t92 = INT64_MIN;

	t92 = ((x369&(x370&x371))^x372);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	int16_t x375 = 22;
	static uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = 8;

	t93 = ((x373&(x374&x375))^x376);

	if (t93 != 65513) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = -2;
	int32_t x378 = INT32_MIN;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = 0LLU;
	static uint64_t t94 = 362LLU;

	t94 = ((x377&(x378&x379))^x380);

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MIN;
	static int64_t x383 = -42374637LL;
	static uint64_t x384 = 852643711770696LLU;
	static uint64_t t95 = 2138345756661LLU;

	t95 = ((x381&(x382&x383))^x384);

	if (t95 != 852643711770696LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -491;
	int32_t x388 = -1;
	int64_t t96 = -28813621LL;

	t96 = ((x385&(x386&x387))^x388);

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	int32_t x390 = -2529158;
	int64_t x391 = -166549073608631LL;
	static int16_t x392 = 4662;
	volatile int64_t t97 = 2800213734LL;

	t97 = ((x389&(x390&x391))^x392);

	if (t97 != 1166103166LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	int8_t x394 = -1;
	int32_t x395 = -53;
	uint64_t t98 = 11265820856404545LLU;

	t98 = ((x393&(x394&x395))^x396);

	if (t98 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = 1U;
	volatile uint32_t x398 = UINT32_MAX;
	int32_t x400 = -162;
	volatile uint32_t t99 = 408U;

	t99 = ((x397&(x398&x399))^x400);

	if (t99 != 4294967134U) { NG(); } else { ; }
	
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

