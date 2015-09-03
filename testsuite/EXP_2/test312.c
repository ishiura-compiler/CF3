#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 23;
volatile int8_t x9 = 0;
volatile int64_t t2 = -2405LL;
volatile int64_t x16 = INT64_MIN;
volatile int64_t t3 = -454LL;
static int16_t x23 = -1;
int64_t t6 = 14952793LL;
int64_t x41 = -1LL;
int64_t t10 = 102LL;
static uint64_t x50 = UINT64_MAX;
int64_t x51 = -361432330503006537LL;
int32_t x70 = INT32_MAX;
int64_t x74 = -96161062924LL;
int16_t x78 = -15;
uint64_t t19 = 143140683859634LLU;
uint8_t x87 = 11U;
int64_t t20 = 821056126142149LL;
int16_t x92 = INT16_MIN;
int16_t x100 = 44;
uint32_t x106 = 87247451U;
volatile uint8_t x107 = 13U;
volatile uint32_t t25 = 728784404U;
static int64_t x110 = INT64_MIN;
volatile int16_t x117 = -471;
volatile int32_t x120 = INT32_MAX;
volatile int64_t t28 = 175240LL;
int32_t t29 = 1;
int16_t x127 = INT16_MIN;
uint64_t x130 = 3123459445315958923LLU;
uint64_t t31 = 3954553498LLU;
static volatile int16_t x135 = INT16_MIN;
uint32_t x136 = UINT32_MAX;
volatile uint32_t x138 = UINT32_MAX;
int64_t x142 = -1LL;
uint32_t x143 = 254156847U;
volatile int64_t t35 = 1680108845009226617LL;
int32_t t38 = 14286;
uint64_t x167 = 104819109087593LLU;
uint64_t t40 = 52818758900168LLU;
uint32_t t42 = 376202871U;
volatile int64_t x192 = INT64_MIN;
int64_t x193 = -1LL;
static volatile int64_t t49 = 19970595525LL;
static int16_t x209 = 164;
int16_t x216 = -141;
uint16_t x220 = UINT16_MAX;
volatile uint64_t t52 = 918555253LLU;
int16_t x226 = INT16_MAX;
int16_t x232 = -1348;
volatile uint64_t t55 = 1960146776415539LLU;
static uint32_t x233 = UINT32_MAX;
int16_t x234 = 6;
static int64_t x240 = 2930396916LL;
int16_t x255 = -1;
uint64_t x260 = 733717138930809303LLU;
int64_t x264 = -1291463684358LL;
int8_t x265 = -14;
static int8_t x266 = -2;
uint64_t x271 = 3874LLU;
int32_t x272 = -1;
uint64_t t65 = 57589128LLU;
int16_t x274 = -3785;
int16_t x277 = 248;
uint32_t x279 = 1119U;
volatile uint32_t t67 = 652978U;
static int8_t x281 = 34;
int16_t x285 = INT16_MAX;
int64_t x286 = 9052832919LL;
static uint8_t x287 = 12U;
int64_t t69 = 2148LL;
int64_t x290 = -1LL;
volatile uint64_t t70 = 750073435611044988LLU;
static int16_t x294 = -5;
int16_t x296 = INT16_MIN;
uint32_t x299 = 11355806U;
static int64_t x300 = INT64_MIN;
volatile int32_t x301 = INT32_MAX;
uint16_t x302 = 191U;
volatile uint64_t t73 = 12899423LLU;
int64_t x311 = INT64_MIN;
uint64_t x313 = 4LLU;
int64_t x314 = INT64_MAX;
int16_t x325 = 445;
volatile int64_t t80 = -629308357LL;
static int32_t x337 = INT32_MAX;
volatile uint64_t x338 = 12LLU;
uint64_t t81 = 77485669LLU;
int8_t x352 = 6;
static int16_t x354 = INT16_MAX;
int16_t x359 = 117;
volatile int8_t x361 = -1;
volatile uint64_t x363 = UINT64_MAX;
volatile int64_t x370 = -1LL;
volatile uint64_t x374 = 108491LLU;
uint32_t x376 = 6408U;
int16_t x378 = INT16_MIN;
static volatile int64_t t91 = -1733593113284LL;
volatile uint32_t x385 = 860359U;
int32_t x387 = -4306;
static int32_t x388 = INT32_MIN;
volatile uint32_t t92 = 1U;
volatile uint64_t x389 = 2362110LLU;
uint64_t x392 = UINT64_MAX;
int64_t x393 = -1LL;
static int64_t x394 = INT64_MIN;
volatile int16_t x396 = -1;
uint8_t x405 = 4U;


void f0(void) {
	volatile int8_t x1 = -1;
	uint8_t x2 = 2U;
	uint8_t x3 = 109U;
	static int8_t x4 = INT8_MIN;

	t0 = ((x1&(x2-x3))^x4);

	if (t0 != 21) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -8268565773428284LL;
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	int16_t x8 = 2409;
	static volatile int64_t t1 = 1908324710657663LL;

	t1 = ((x5&(x6-x7))^x8);

	if (t1 != -8268565773481623LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = -1LL;
	uint16_t x11 = UINT16_MAX;
	uint8_t x12 = UINT8_MAX;

	t2 = ((x9&(x10-x11))^x12);

	if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = INT8_MIN;
	uint32_t x15 = 1810765952U;

	t3 = ((x13&(x14-x15))^x16);

	if (t3 != -9223372034370600960LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	uint64_t x18 = 1391LLU;
	int16_t x19 = INT16_MAX;
	volatile int8_t x20 = -1;
	uint64_t t4 = 11420LLU;

	t4 = ((x17&(x18-x19))^x20);

	if (t4 != 32767LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint64_t x22 = UINT64_MAX;
	int32_t x24 = INT32_MIN;
	volatile uint64_t t5 = 168259LLU;

	t5 = ((x21&(x22-x23))^x24);

	if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -531;
	volatile uint8_t x26 = 0U;
	int16_t x27 = INT16_MAX;
	static int64_t x28 = INT64_MAX;

	t6 = ((x25&(x26-x27))^x28);

	if (t6 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 447LL;
	int16_t x30 = INT16_MAX;
	int32_t x31 = INT32_MAX;
	volatile int8_t x32 = -1;
	static volatile int64_t t7 = -45830093LL;

	t7 = ((x29&(x30-x31))^x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 27;
	volatile int64_t x34 = -1LL;
	int8_t x35 = -1;
	int64_t x36 = 265920917731LL;
	int64_t t8 = 422212905305719907LL;

	t8 = ((x33&(x34-x35))^x36);

	if (t8 != 265920917731LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 78950;
	static int64_t x38 = INT64_MAX;
	static int8_t x39 = 20;
	static uint16_t x40 = 539U;
	int64_t t9 = 254089LL;

	t9 = ((x37&(x38-x39))^x40);

	if (t9 != 79481LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MAX;
	uint32_t x43 = 14238885U;
	int8_t x44 = -1;

	t10 = ((x41&(x42-x43))^x44);

	if (t10 != -2133244763LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -3992073;
	int8_t x52 = -1;
	uint64_t t11 = 467150394762823LLU;

	t11 = ((x49&(x50-x51))^x52);

	if (t11 != 18085311743210225343LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 10010LLU;
	uint32_t x54 = UINT32_MAX;
	static int64_t x55 = -1LL;
	uint8_t x56 = 6U;
	volatile uint64_t t12 = 10802251LLU;

	t12 = ((x53&(x54-x55))^x56);

	if (t12 != 6LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 0U;
	static uint16_t x58 = UINT16_MAX;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = -3038745831158LL;
	static volatile int64_t t13 = -6839993790LL;

	t13 = ((x57&(x58-x59))^x60);

	if (t13 != -3038745831158LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	int64_t x62 = INT64_MAX;
	uint8_t x63 = 48U;
	static uint32_t x64 = UINT32_MAX;
	uint64_t t14 = 903LLU;

	t14 = ((x61&(x62-x63))^x64);

	if (t14 != 9223372032559808560LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = INT32_MIN;
	int8_t x66 = -1;
	static uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MIN;
	volatile int64_t t15 = -54559530403587999LL;

	t15 = ((x65&(x66-x67))^x68);

	if (t15 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = 19;
	int16_t x71 = 0;
	uint32_t x72 = 12U;
	uint32_t t16 = 5U;

	t16 = ((x69&(x70-x71))^x72);

	if (t16 != 31U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x73 = 1936LLU;
	int32_t x75 = INT32_MAX;
	uint32_t x76 = 199685U;
	volatile uint64_t t17 = 33089618517517LLU;

	t17 = ((x73&(x74-x75))^x76);

	if (t17 != 199573LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = 1;
	int8_t x79 = -2;
	uint8_t x80 = 59U;
	static int32_t t18 = 123220;

	t18 = ((x77&(x78-x79))^x80);

	if (t18 != 58) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MIN;
	uint64_t x82 = UINT64_MAX;
	static int16_t x83 = -1;
	static int8_t x84 = 0;

	t19 = ((x81&(x82-x83))^x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	static uint16_t x86 = 4819U;
	static uint8_t x88 = 7U;

	t20 = ((x85&(x86-x87))^x88);

	if (t20 != 7LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 0U;
	uint8_t x90 = UINT8_MAX;
	int8_t x91 = 0;
	int32_t t21 = -2763;

	t21 = ((x89&(x90-x91))^x92);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -19685236;
	int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	int32_t x96 = 41589;
	int64_t t22 = 878LL;

	t22 = ((x93&(x94-x95))^x96);

	if (t22 != 9223372034707333749LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	static volatile uint32_t x98 = 5257547U;
	int8_t x99 = 0;
	static uint32_t t23 = 1U;

	t23 = ((x97&(x98-x99))^x100);

	if (t23 != 5257516U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MAX;
	static volatile int64_t x103 = -926LL;
	int8_t x104 = INT8_MIN;
	int64_t t24 = 367927071101LL;

	t24 = ((x101&(x102-x103))^x104);

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x105 = 127999856U;
	volatile uint8_t x108 = 31U;

	t25 = ((x105&(x106-x107))^x108);

	if (t25 != 86051423U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 1066674390783031227LLU;
	static volatile int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MAX;
	static volatile uint64_t t26 = 1978LLU;

	t26 = ((x109&(x110-x111))^x112);

	if (t26 != 32895LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -61593LL;
	int64_t x114 = -1LL;
	static uint32_t x115 = UINT32_MAX;
	int32_t x116 = -1;
	int64_t t27 = -205750127670LL;

	t27 = ((x113&(x114-x115))^x116);

	if (t27 != 4294967295LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = INT64_MIN;
	int8_t x119 = 0;

	t28 = ((x117&(x118-x119))^x120);

	if (t28 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = INT32_MIN;
	static int16_t x122 = -8;
	static int16_t x123 = INT16_MAX;
	volatile int32_t x124 = INT32_MIN;

	t29 = ((x121&(x122-x123))^x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	int64_t x126 = INT64_MIN;
	volatile int8_t x128 = 2;
	int64_t t30 = -22172431702269LL;

	t30 = ((x125&(x126-x127))^x128);

	if (t30 != 32770LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	static volatile int64_t x131 = INT64_MIN;
	volatile uint64_t x132 = 24072751642777443LLU;

	t31 = ((x129&(x130-x131))^x132);

	if (t31 != 12325586762549850083LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = -1;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = ((x133&(x134-x135))^x136);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -153487314957870LL;
	uint8_t x139 = 1U;
	static int8_t x140 = 3;
	int64_t t33 = -1595186690010685775LL;

	t33 = ((x137&(x138-x139))^x140);

	if (t33 != 1931299281LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MAX;
	static int64_t x144 = INT64_MIN;
	static int64_t t34 = -1207690255178488LL;

	t34 = ((x141&(x142-x143))^x144);

	if (t34 != -9223372036854751280LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = 45;
	static uint8_t x146 = 0U;
	int32_t x147 = -10;
	volatile int64_t x148 = 81496238751LL;

	t35 = ((x145&(x146-x147))^x148);

	if (t35 != 81496238743LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MAX;
	uint8_t x150 = 7U;
	uint32_t x151 = UINT32_MAX;
	static volatile int64_t x152 = INT64_MIN;
	static volatile int64_t t36 = -175152654932301787LL;

	t36 = ((x149&(x150-x151))^x152);

	if (t36 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x153 = UINT16_MAX;
	static int64_t x154 = -1LL;
	int8_t x155 = -1;
	volatile uint32_t x156 = 487597772U;
	int64_t t37 = -562407773561156LL;

	t37 = ((x153&(x154-x155))^x156);

	if (t37 != 487597772LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = INT16_MAX;
	int8_t x158 = -1;
	volatile uint8_t x159 = UINT8_MAX;
	volatile int32_t x160 = 134;

	t38 = ((x157&(x158-x159))^x160);

	if (t38 != 32646) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = 2LL;
	volatile int64_t x162 = 61LL;
	uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MIN;
	uint64_t t39 = 1307057928LLU;

	t39 = ((x161&(x162-x163))^x164);

	if (t39 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 2U;
	static int64_t x166 = INT64_MAX;
	static uint16_t x168 = UINT16_MAX;

	t40 = ((x165&(x166-x167))^x168);

	if (t40 != 65533LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 2U;
	int16_t x174 = INT16_MIN;
	volatile int16_t x175 = -1;
	volatile int32_t x176 = INT32_MIN;
	volatile int32_t t41 = INT32_MIN;

	t41 = ((x173&(x174-x175))^x176);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = 7;
	static uint32_t x178 = 4978U;
	int16_t x179 = 3819;
	uint32_t x180 = 239999U;

	t42 = ((x177&(x178-x179))^x180);

	if (t42 != 239992U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = -1;
	volatile int32_t x182 = -1;
	int64_t x183 = INT64_MAX;
	uint32_t x184 = 1U;
	int64_t t43 = 6547764LL;

	t43 = ((x181&(x182-x183))^x184);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = 48;
	static int16_t x186 = 16;
	uint8_t x187 = UINT8_MAX;
	uint8_t x188 = 64U;
	int32_t t44 = 141532;

	t44 = ((x185&(x186-x187))^x188);

	if (t44 != 80) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = 25U;
	int8_t x190 = INT8_MAX;
	int32_t x191 = -1;
	int64_t t45 = INT64_MIN;

	t45 = ((x189&(x190-x191))^x192);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x194 = -1;
	volatile int64_t x195 = -1LL;
	int32_t x196 = INT32_MIN;
	static int64_t t46 = 252931090LL;

	t46 = ((x193&(x194-x195))^x196);

	if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x197 = 480;
	uint16_t x198 = UINT16_MAX;
	volatile int64_t x199 = -1741137309639229LL;
	uint32_t x200 = UINT32_MAX;
	int64_t t47 = -48767LL;

	t47 = ((x197&(x198-x199))^x200);

	if (t47 != 4294967263LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x201 = 2U;
	volatile int32_t x202 = INT32_MIN;
	volatile int16_t x203 = -1;
	static int8_t x204 = -1;
	int32_t t48 = 1;

	t48 = ((x201&(x202-x203))^x204);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MAX;
	volatile int64_t x206 = 1812121LL;
	int16_t x207 = -6;
	static uint32_t x208 = 10360U;

	t49 = ((x205&(x206-x207))^x208);

	if (t49 != 10343LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int64_t x212 = INT64_MIN;
	volatile int64_t t50 = 441970448LL;

	t50 = ((x209&(x210-x211))^x212);

	if (t50 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = INT64_MAX;
	volatile int32_t x214 = -182419094;
	int64_t x215 = INT64_MIN;
	static int64_t t51 = 194499636646LL;

	t51 = ((x213&(x214-x215))^x216);

	if (t51 != -9223372036672356839LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x217 = -7;
	volatile int64_t x218 = INT64_MAX;
	static uint64_t x219 = UINT64_MAX;

	t52 = ((x217&(x218-x219))^x220);

	if (t52 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = 0;
	int8_t x222 = INT8_MIN;
	static int8_t x223 = INT8_MIN;
	uint64_t x224 = 60968LLU;
	static volatile uint64_t t53 = 9101261108339533440LLU;

	t53 = ((x221&(x222-x223))^x224);

	if (t53 != 60968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MIN;
	static int16_t x227 = -1;
	uint64_t x228 = 286LLU;
	uint64_t t54 = 24356LLU;

	t54 = ((x225&(x226-x227))^x228);

	if (t54 != 286LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x229 = UINT64_MAX;
	uint8_t x230 = 0U;
	volatile uint32_t x231 = UINT32_MAX;

	t55 = ((x229&(x230-x231))^x232);

	if (t55 != 18446744073709550269LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x235 = 16152U;
	int16_t x236 = INT16_MAX;
	static volatile uint32_t t56 = 2U;

	t56 = ((x233&(x234-x235))^x236);

	if (t56 != 4294950673U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x237 = -1LL;
	volatile uint32_t x238 = UINT32_MAX;
	static int16_t x239 = 1;
	int64_t t57 = 1415LL;

	t57 = ((x237&(x238-x239))^x240);

	if (t57 != 1364570378LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x241 = 3616U;
	volatile int32_t x242 = -1;
	uint8_t x243 = 7U;
	int32_t x244 = INT32_MIN;
	volatile int32_t t58 = -13;

	t58 = ((x241&(x242-x243))^x244);

	if (t58 != -2147480032) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x245 = 379U;
	uint32_t x246 = 1343585169U;
	int64_t x247 = 5546981964654402LL;
	uint8_t x248 = 7U;
	static int64_t t59 = -4983LL;

	t59 = ((x245&(x246-x247))^x248);

	if (t59 != 76LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x249 = INT64_MIN;
	volatile uint32_t x250 = UINT32_MAX;
	volatile uint8_t x251 = 93U;
	int8_t x252 = -1;
	int64_t t60 = -75021301274LL;

	t60 = ((x249&(x250-x251))^x252);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = 5423;
	int32_t x254 = 133288236;
	int64_t x256 = INT64_MAX;
	volatile int64_t t61 = -101667313LL;

	t61 = ((x253&(x254-x255))^x256);

	if (t61 != 9223372036854771410LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MIN;
	static uint32_t x259 = 3126399U;
	static uint64_t t62 = 1177LLU;

	t62 = ((x257&(x258-x259))^x260);

	if (t62 != 733717138930809302LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = 8U;
	static int32_t x262 = -1;
	int8_t x263 = -7;
	static int64_t t63 = -312712388967556LL;

	t63 = ((x261&(x262-x263))^x264);

	if (t63 != -1291463684358LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x267 = -1;
	int32_t x268 = -1;
	volatile int32_t t64 = -671;

	t64 = ((x265&(x266-x267))^x268);

	if (t64 != 13) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = -344633;

	t65 = ((x269&(x270-x271))^x272);

	if (t65 != 18446744069414932826LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = 23U;
	int8_t x275 = INT8_MAX;
	static uint8_t x276 = 38U;
	volatile int32_t t66 = -21832893;

	t66 = ((x273&(x274-x275))^x276);

	if (t66 != 54) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x278 = 136U;
	int16_t x280 = -1;

	t67 = ((x277&(x278-x279))^x280);

	if (t67 != 4294967255U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x282 = UINT32_MAX;
	uint8_t x283 = 0U;
	static uint8_t x284 = 1U;
	volatile uint32_t t68 = 1199U;

	t68 = ((x281&(x282-x283))^x284);

	if (t68 != 35U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x288 = 1;

	t69 = ((x285&(x286-x287))^x288);

	if (t69 != 17546LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x289 = 1656LLU;
	int64_t x291 = -1LL;
	int8_t x292 = INT8_MIN;

	t70 = ((x289&(x290-x291))^x292);

	if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = 10;
	static uint64_t x295 = 6LLU;
	uint64_t t71 = 122150519997732120LLU;

	t71 = ((x293&(x294-x295))^x296);

	if (t71 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	volatile uint64_t x298 = 1094LLU;
	volatile uint64_t t72 = 6724046862028468322LLU;

	t72 = ((x297&(x298-x299))^x300);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x303 = 4930674LLU;
	static volatile uint8_t x304 = UINT8_MAX;

	t73 = ((x301&(x302-x303))^x304);

	if (t73 != 2142553266LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = 3U;
	int8_t x307 = 24;
	int8_t x308 = INT8_MIN;
	int32_t t74 = 76370078;

	t74 = ((x305&(x306-x307))^x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = INT64_MAX;
	int16_t x310 = -332;
	volatile uint64_t x312 = 678668650LLU;
	volatile uint64_t t75 = 3116508662281041686LLU;

	t75 = ((x309&(x310-x311))^x312);

	if (t75 != 9223372036176107486LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = 30912;
	uint64_t t76 = 15619761LLU;

	t76 = ((x313&(x314-x315))^x316);

	if (t76 != 30912LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x321 = UINT16_MAX;
	int64_t x322 = -370464001016851LL;
	uint64_t x323 = UINT64_MAX;
	uint64_t x324 = 41682696LLU;
	volatile uint64_t t77 = 3389744851310675753LLU;

	t77 = ((x321&(x322-x323))^x324);

	if (t77 != 41696486LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x326 = UINT8_MAX;
	uint8_t x327 = 1U;
	int32_t x328 = INT32_MAX;
	static volatile int32_t t78 = -8828;

	t78 = ((x325&(x326-x327))^x328);

	if (t78 != 2147483459) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x329 = 1U;
	static int64_t x330 = -1LL;
	static int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;
	int64_t t79 = 6LL;

	t79 = ((x329&(x330-x331))^x332);

	if (t79 != -32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	int32_t x335 = -1;
	uint32_t x336 = 154U;

	t80 = ((x333&(x334-x335))^x336);

	if (t80 != -9223372036854775654LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x339 = -42;
	int32_t x340 = INT32_MIN;

	t81 = ((x337&(x338-x339))^x340);

	if (t81 != 18446744071562068022LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MIN;
	static int8_t x346 = 7;
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	static int32_t t82 = -1;

	t82 = ((x345&(x346-x347))^x348);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x349 = INT64_MIN;
	volatile uint8_t x350 = 9U;
	volatile uint32_t x351 = 243423U;
	volatile int64_t t83 = -416330535911602LL;

	t83 = ((x349&(x350-x351))^x352);

	if (t83 != 6LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = -1LL;
	int16_t x355 = 383;
	uint8_t x356 = UINT8_MAX;
	volatile int64_t t84 = 25860413848599LL;

	t84 = ((x353&(x354-x355))^x356);

	if (t84 != 32383LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int8_t x358 = -7;
	int32_t x360 = INT32_MIN;
	int32_t t85 = -174351500;

	t85 = ((x357&(x358-x359))^x360);

	if (t85 != -2147418236) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x362 = 3LLU;
	volatile int8_t x364 = INT8_MIN;
	uint64_t t86 = 7007LLU;

	t86 = ((x361&(x362-x363))^x364);

	if (t86 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -12996585;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = -1;
	static uint16_t x368 = 378U;
	volatile int32_t t87 = -517153769;

	t87 = ((x365&(x366-x367))^x368);

	if (t87 != 378) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x369 = -1LL;
	int16_t x371 = 15;
	int8_t x372 = INT8_MAX;
	static int64_t t88 = -612715708323LL;

	t88 = ((x369&(x370-x371))^x372);

	if (t88 != -113LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x373 = 20934179596729LLU;
	static int8_t x375 = INT8_MAX;
	static uint64_t t89 = 17990178LLU;

	t89 = ((x373&(x374-x375))^x376);

	if (t89 != 47104LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MAX;
	static uint32_t x379 = 150U;
	int16_t x380 = 16;
	static uint32_t t90 = 117806220U;

	t90 = ((x377&(x378-x379))^x380);

	if (t90 != 122U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = -184003LL;
	uint8_t x382 = 96U;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = INT16_MIN;

	t91 = ((x381&(x382-x383))^x384);

	if (t91 != 176417LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x386 = -2903;

	t92 = ((x385&(x386-x387))^x388);

	if (t92 != 2147483715U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MAX;
	static uint64_t t93 = UINT64_MAX;

	t93 = ((x389&(x390-x391))^x392);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x395 = -1;
	int64_t t94 = 34186887656909132LL;

	t94 = ((x393&(x394-x395))^x396);

	if (t94 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x406 = -1597789385LL;
	volatile int16_t x407 = -1;
	int8_t x408 = -1;
	int64_t t95 = 2LL;

	t95 = ((x405&(x406-x407))^x408);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = -57;
	volatile uint32_t x414 = 2U;
	int16_t x415 = -2000;
	volatile int16_t x416 = INT16_MAX;
	volatile uint32_t t96 = 1578575U;

	t96 = ((x413&(x414-x415))^x416);

	if (t96 != 30781U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x417 = INT64_MIN;
	volatile uint8_t x418 = UINT8_MAX;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t x420 = -1;
	volatile int64_t t97 = INT64_MAX;

	t97 = ((x417&(x418-x419))^x420);

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x425 = 1723485454U;
	int64_t x426 = 1325007201LL;
	static uint32_t x427 = 108U;
	int32_t x428 = 126495905;
	volatile int64_t t98 = -9601121480LL;

	t98 = ((x425&(x426-x427))^x428);

	if (t98 != 1093676197LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = -43518790;
	int64_t x430 = -1LL;
	static int64_t x431 = 4466984LL;
	int8_t x432 = INT8_MIN;
	volatile int64_t t99 = 594LL;

	t99 = ((x429&(x430-x431))^x432);

	if (t99 != 47983378LL) { NG(); } else { ; }
	
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

