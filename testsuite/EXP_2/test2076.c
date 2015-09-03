#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = 11;
static uint8_t x13 = 1U;
static int64_t x15 = INT64_MIN;
int8_t x16 = INT8_MIN;
int32_t t5 = 19;
volatile int16_t x26 = -1;
uint64_t x33 = UINT64_MAX;
volatile uint64_t x35 = 22LLU;
int16_t x36 = INT16_MIN;
static uint16_t x45 = 10312U;
int8_t x61 = -1;
uint8_t x71 = UINT8_MAX;
int32_t t16 = 1949;
static int32_t x78 = -3;
uint32_t x80 = 506U;
volatile uint16_t x83 = UINT16_MAX;
volatile int32_t t18 = 1062482700;
uint64_t x85 = 12612753496996324LLU;
int32_t x86 = -14;
int16_t x87 = -1;
int8_t x93 = -1;
int32_t x104 = INT32_MAX;
int32_t t23 = -472561;
uint64_t x107 = UINT64_MAX;
static volatile int32_t x112 = INT32_MAX;
volatile int64_t x118 = -1LL;
int16_t x121 = -149;
static int16_t x122 = INT16_MIN;
static uint64_t x124 = UINT64_MAX;
int32_t t28 = -91001183;
int16_t x125 = INT16_MIN;
int8_t x126 = INT8_MIN;
volatile int32_t t31 = -20;
int16_t x139 = INT16_MIN;
int64_t x142 = -1LL;
int16_t x145 = -1;
int16_t x147 = INT16_MAX;
int16_t x149 = INT16_MAX;
int32_t x152 = INT32_MAX;
int8_t x170 = 12;
int16_t x171 = -1;
int16_t x172 = -2;
int64_t x184 = INT64_MAX;
int32_t t45 = 9;
static int8_t x205 = -38;
int32_t t48 = -3;
int64_t x214 = -2634843930670LL;
int16_t x216 = INT16_MIN;
volatile int32_t t51 = -4553;
uint8_t x228 = 28U;
static int32_t t54 = -980839728;
volatile uint64_t x235 = 2116862LLU;
int8_t x236 = INT8_MAX;
uint8_t x237 = 11U;
static volatile int16_t x239 = -1;
volatile int16_t x240 = -1;
uint32_t x243 = 2U;
int32_t x244 = -1;
int8_t x246 = -3;
int32_t x247 = INT32_MIN;
uint32_t x249 = UINT32_MAX;
int8_t x254 = INT8_MAX;
int32_t t60 = -582533;
volatile uint32_t x257 = 1118U;
int32_t x260 = -1;
static int64_t x268 = INT64_MIN;
volatile int32_t x275 = INT32_MIN;
static uint32_t x276 = 403846U;
volatile int32_t t66 = -3434;
static int16_t x281 = -19;
uint32_t x283 = 332504727U;
static uint8_t x289 = 60U;
uint16_t x303 = UINT16_MAX;
int8_t x309 = -1;
volatile int8_t x318 = INT8_MIN;
static int8_t x323 = 23;
static int64_t x328 = -1LL;
static uint16_t x337 = 42U;
int64_t x344 = INT64_MIN;
volatile int32_t x345 = -1;
static uint8_t x348 = 17U;
static int32_t t83 = -334922220;
int64_t x356 = INT64_MIN;
static int32_t t84 = -316;
int16_t x360 = INT16_MIN;
int16_t x362 = INT16_MIN;
volatile int32_t t86 = 1;
volatile uint32_t x365 = 357U;
int32_t x366 = 1965;
static int8_t x368 = -1;
int8_t x373 = -1;
uint8_t x376 = 0U;
int8_t x382 = -2;
int32_t x386 = 13;
static int32_t t91 = -16030616;
int8_t x390 = 1;
static volatile int32_t t92 = -640;
int64_t x396 = -229932LL;
int64_t x409 = INT64_MAX;
volatile int32_t t99 = 3857081;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = INT16_MIN;
	static int8_t x3 = INT8_MIN;
	static uint32_t x4 = 0U;
	volatile int32_t t0 = 4721027;

	t0 = ((x1/(x2^x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	int16_t x7 = INT16_MAX;
	int16_t x8 = -1;
	int32_t t1 = -1483502;

	t1 = ((x5/(x6^x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint64_t x10 = UINT64_MAX;
	int8_t x11 = INT8_MAX;
	int64_t x12 = INT64_MIN;
	static volatile int32_t t2 = -15265977;

	t2 = ((x9/(x10^x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MAX;
	int32_t t3 = 4207114;

	t3 = ((x13/(x14^x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	uint16_t x18 = 769U;
	uint16_t x19 = 190U;
	volatile int8_t x20 = 7;
	volatile int32_t t4 = -3439;

	t4 = ((x17/(x18^x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 17;
	static int16_t x22 = INT16_MIN;
	uint8_t x23 = 30U;
	static volatile uint64_t x24 = UINT64_MAX;

	t5 = ((x21/(x22^x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 0U;
	int16_t x27 = INT16_MIN;
	static int16_t x28 = INT16_MIN;
	static int32_t t6 = 60;

	t6 = ((x25/(x26^x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MIN;
	volatile int32_t t7 = 1296;

	t7 = ((x33/(x34^x35))<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MAX;
	uint64_t x38 = UINT64_MAX;
	uint8_t x39 = 28U;
	uint64_t x40 = UINT64_MAX;
	int32_t t8 = -1703288;

	t8 = ((x37/(x38^x39))<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	int32_t x42 = INT32_MIN;
	uint32_t x43 = 2300136U;
	static uint64_t x44 = 7LLU;
	int32_t t9 = 526653;

	t9 = ((x41/(x42^x43))<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x46 = INT8_MIN;
	int8_t x47 = -1;
	int16_t x48 = -1;
	volatile int32_t t10 = -716;

	t10 = ((x45/(x46^x47))<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 0U;
	int8_t x51 = -1;
	int16_t x52 = INT16_MIN;
	volatile int32_t t11 = -165;

	t11 = ((x49/(x50^x51))<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -1;
	volatile int8_t x54 = 0;
	int64_t x55 = 5264LL;
	int8_t x56 = INT8_MIN;
	int32_t t12 = -223263950;

	t12 = ((x53/(x54^x55))<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = -78712649062515666LL;
	int8_t x63 = INT8_MIN;
	volatile int64_t x64 = INT64_MIN;
	volatile int32_t t13 = -14845829;

	t13 = ((x61/(x62^x63))<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x65 = UINT64_MAX;
	volatile uint32_t x66 = 53161650U;
	uint32_t x67 = UINT32_MAX;
	int64_t x68 = INT64_MIN;
	volatile int32_t t14 = 39;

	t14 = ((x65/(x66^x67))<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = -2LL;
	int32_t x70 = -3660;
	int16_t x72 = -15;
	volatile int32_t t15 = 6;

	t15 = ((x69/(x70^x71))<x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MAX;
	volatile uint64_t x74 = 2134LLU;
	uint32_t x75 = 568632550U;
	uint32_t x76 = UINT32_MAX;

	t16 = ((x73/(x74^x75))<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x77 = 806;
	volatile uint16_t x79 = UINT16_MAX;
	volatile int32_t t17 = 29578;

	t17 = ((x77/(x78^x79))<x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = 4059;
	int8_t x82 = 5;
	uint64_t x84 = UINT64_MAX;

	t18 = ((x81/(x82^x83))<x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x88 = INT16_MIN;
	static volatile int32_t t19 = 108906577;

	t19 = ((x85/(x86^x87))<x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 22U;
	int32_t x90 = -1911183;
	int32_t x91 = 325661;
	static int64_t x92 = 187618970130066LL;
	volatile int32_t t20 = -101;

	t20 = ((x89/(x90^x91))<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	static int64_t x96 = -1LL;
	int32_t t21 = 0;

	t21 = ((x93/(x94^x95))<x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x97 = UINT32_MAX;
	int8_t x98 = -14;
	static volatile int64_t x99 = INT64_MAX;
	int16_t x100 = -1;
	int32_t t22 = 22150;

	t22 = ((x97/(x98^x99))<x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	static uint16_t x102 = UINT16_MAX;
	uint8_t x103 = 4U;

	t23 = ((x101/(x102^x103))<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = INT16_MIN;
	int32_t x106 = INT32_MIN;
	static uint64_t x108 = 574991600836857856LLU;
	static int32_t t24 = -526823809;

	t24 = ((x105/(x106^x107))<x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	volatile int16_t x110 = 13142;
	int64_t x111 = -1LL;
	int32_t t25 = -1284;

	t25 = ((x109/(x110^x111))<x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	static int64_t x114 = -1LL;
	volatile uint64_t x115 = 157049LLU;
	uint16_t x116 = 28U;
	int32_t t26 = -3341028;

	t26 = ((x113/(x114^x115))<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = 2LL;
	uint8_t x119 = 6U;
	volatile int32_t x120 = INT32_MIN;
	int32_t t27 = -7;

	t27 = ((x117/(x118^x119))<x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x123 = INT8_MAX;

	t28 = ((x121/(x122^x123))<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x127 = -1;
	uint32_t x128 = 7475040U;
	int32_t t29 = -2428;

	t29 = ((x125/(x126^x127))<x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x129 = INT64_MIN;
	static int64_t x130 = -1LL;
	int16_t x131 = INT16_MIN;
	static int8_t x132 = 1;
	int32_t t30 = 5217279;

	t30 = ((x129/(x130^x131))<x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 7809443982116558898LLU;
	volatile int8_t x134 = INT8_MAX;
	static int8_t x135 = INT8_MIN;
	volatile int32_t x136 = INT32_MIN;

	t31 = ((x133/(x134^x135))<x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 113981U;
	int64_t x138 = INT64_MIN;
	int32_t x140 = -1;
	int32_t t32 = -126073701;

	t32 = ((x137/(x138^x139))<x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	static volatile int32_t x144 = 614439;
	int32_t t33 = -30;

	t33 = ((x141/(x142^x143))<x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x146 = INT64_MIN;
	int32_t x148 = 3824673;
	volatile int32_t t34 = -180839352;

	t34 = ((x145/(x146^x147))<x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x150 = -1LL;
	int8_t x151 = 0;
	static volatile int32_t t35 = -46931;

	t35 = ((x149/(x150^x151))<x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x153 = -1;
	int64_t x154 = 33158760LL;
	static int64_t x155 = -1LL;
	int32_t x156 = INT32_MIN;
	volatile int32_t t36 = -154349930;

	t36 = ((x153/(x154^x155))<x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 1U;
	int32_t x158 = INT32_MIN;
	int64_t x159 = -436LL;
	int64_t x160 = -1LL;
	volatile int32_t t37 = -13;

	t37 = ((x157/(x158^x159))<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x161 = UINT16_MAX;
	uint8_t x162 = UINT8_MAX;
	uint8_t x163 = 16U;
	int32_t x164 = INT32_MAX;
	static volatile int32_t t38 = -4;

	t38 = ((x161/(x162^x163))<x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MAX;
	volatile int16_t x167 = INT16_MAX;
	int32_t x168 = 11;
	volatile int32_t t39 = 656;

	t39 = ((x165/(x166^x167))<x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	volatile int32_t t40 = 56;

	t40 = ((x169/(x170^x171))<x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 3U;
	uint8_t x174 = 57U;
	uint32_t x175 = 893240155U;
	uint16_t x176 = UINT16_MAX;
	int32_t t41 = -1;

	t41 = ((x173/(x174^x175))<x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MIN;
	uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t42 = 427;

	t42 = ((x177/(x178^x179))<x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = 2116112LL;
	static int64_t x182 = 312353282LL;
	int32_t x183 = -44290111;
	int32_t t43 = 7421763;

	t43 = ((x181/(x182^x183))<x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = -30;
	int8_t x190 = -1;
	uint32_t x191 = 5392U;
	uint16_t x192 = 1683U;
	volatile int32_t t44 = -68026;

	t44 = ((x189/(x190^x191))<x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = 7702673629058293232LLU;
	int16_t x194 = INT16_MIN;
	uint64_t x195 = 27234LLU;
	volatile int64_t x196 = -1LL;

	t45 = ((x193/(x194^x195))<x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = 1;
	static uint64_t x198 = 1027435215792897LLU;
	int16_t x199 = INT16_MIN;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t46 = -270;

	t46 = ((x197/(x198^x199))<x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MAX;
	int64_t x204 = INT64_MAX;
	static int32_t t47 = -1;

	t47 = ((x201/(x202^x203))<x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x206 = INT8_MAX;
	static int64_t x207 = -14775801854LL;
	int16_t x208 = -1;

	t48 = ((x205/(x206^x207))<x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	uint16_t x210 = 12195U;
	volatile uint32_t x211 = 7393U;
	int32_t x212 = -13226;
	int32_t t49 = -100642096;

	t49 = ((x209/(x210^x211))<x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = UINT16_MAX;
	uint8_t x215 = 3U;
	int32_t t50 = 50;

	t50 = ((x213/(x214^x215))<x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x217 = UINT16_MAX;
	int16_t x218 = INT16_MIN;
	static uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MIN;

	t51 = ((x217/(x218^x219))<x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = 6256U;
	uint32_t x222 = 51430U;
	uint64_t x223 = UINT64_MAX;
	static int64_t x224 = 10997718919LL;
	static int32_t t52 = -2468;

	t52 = ((x221/(x222^x223))<x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x225 = INT64_MIN;
	static int64_t x226 = INT64_MAX;
	uint64_t x227 = UINT64_MAX;
	volatile int32_t t53 = -1922;

	t53 = ((x225/(x226^x227))<x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x229 = 2U;
	int8_t x230 = INT8_MAX;
	int32_t x231 = -1;
	int8_t x232 = -1;

	t54 = ((x229/(x230^x231))<x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x233 = 2U;
	int32_t x234 = -668;
	static volatile int32_t t55 = -6;

	t55 = ((x233/(x234^x235))<x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x238 = 39768LLU;
	volatile int32_t t56 = 69966;

	t56 = ((x237/(x238^x239))<x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = UINT32_MAX;
	int8_t x242 = -8;
	volatile int32_t t57 = 20062427;

	t57 = ((x241/(x242^x243))<x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = UINT32_MAX;
	static int32_t x248 = -242731883;
	int32_t t58 = 786887203;

	t58 = ((x245/(x246^x247))<x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x250 = -284763240635969960LL;
	volatile uint64_t x251 = UINT64_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t59 = 84;

	t59 = ((x249/(x250^x251))<x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x253 = INT8_MIN;
	int16_t x255 = -10509;
	static int32_t x256 = INT32_MIN;

	t60 = ((x253/(x254^x255))<x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x258 = -9;
	volatile int32_t x259 = INT32_MAX;
	volatile int32_t t61 = -37;

	t61 = ((x257/(x258^x259))<x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 0;
	uint32_t x262 = 26562U;
	int16_t x263 = INT16_MIN;
	volatile int8_t x264 = -30;
	int32_t t62 = -636;

	t62 = ((x261/(x262^x263))<x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x265 = INT8_MIN;
	volatile int16_t x266 = INT16_MIN;
	volatile uint64_t x267 = 48LLU;
	int32_t t63 = -5;

	t63 = ((x265/(x266^x267))<x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = 29602U;
	static int64_t x270 = 6424230777LL;
	int16_t x271 = -1;
	int16_t x272 = INT16_MIN;
	volatile int32_t t64 = -416325975;

	t64 = ((x269/(x270^x271))<x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x273 = INT32_MAX;
	uint32_t x274 = 1837U;
	int32_t t65 = 1;

	t65 = ((x273/(x274^x275))<x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = -626760963268195LL;
	int32_t x278 = 28116;
	int16_t x279 = INT16_MAX;
	int64_t x280 = -1LL;

	t66 = ((x277/(x278^x279))<x280);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x282 = UINT16_MAX;
	int32_t x284 = -216;
	volatile int32_t t67 = 464257915;

	t67 = ((x281/(x282^x283))<x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = INT64_MIN;
	volatile uint8_t x286 = 4U;
	int32_t x287 = -3360286;
	int32_t x288 = INT32_MIN;
	volatile int32_t t68 = -2998007;

	t68 = ((x285/(x286^x287))<x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x290 = 1;
	uint32_t x291 = 7U;
	volatile uint32_t x292 = 524919249U;
	volatile int32_t t69 = 532112;

	t69 = ((x289/(x290^x291))<x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MIN;
	int16_t x295 = 3;
	uint32_t x296 = 39U;
	volatile int32_t t70 = 127;

	t70 = ((x293/(x294^x295))<x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x297 = 8630U;
	static uint16_t x298 = 142U;
	static int8_t x299 = INT8_MIN;
	uint16_t x300 = 12U;
	static volatile int32_t t71 = 749029268;

	t71 = ((x297/(x298^x299))<x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = -1;
	static int64_t x304 = INT64_MAX;
	int32_t t72 = -257;

	t72 = ((x301/(x302^x303))<x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x310 = -1;
	volatile int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;
	static int32_t t73 = 1785000;

	t73 = ((x309/(x310^x311))<x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 1291U;
	volatile int16_t x314 = 179;
	volatile uint64_t x315 = UINT64_MAX;
	int8_t x316 = INT8_MAX;
	int32_t t74 = -975;

	t74 = ((x313/(x314^x315))<x316);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x317 = INT32_MIN;
	static uint16_t x319 = UINT16_MAX;
	static int64_t x320 = INT64_MAX;
	volatile int32_t t75 = 11718853;

	t75 = ((x317/(x318^x319))<x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x321 = 44;
	volatile uint16_t x322 = 32U;
	int64_t x324 = -861904587871095308LL;
	int32_t t76 = -12611;

	t76 = ((x321/(x322^x323))<x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x325 = INT8_MIN;
	static uint32_t x326 = UINT32_MAX;
	static volatile int32_t x327 = -169;
	volatile int32_t t77 = -139354;

	t77 = ((x325/(x326^x327))<x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x329 = INT16_MAX;
	int8_t x330 = 0;
	int32_t x331 = -1;
	int8_t x332 = INT8_MIN;
	int32_t t78 = 351453;

	t78 = ((x329/(x330^x331))<x332);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 4U;
	int32_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MAX;
	volatile int32_t t79 = 1;

	t79 = ((x333/(x334^x335))<x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x338 = 15;
	volatile int32_t x339 = 385;
	uint16_t x340 = 23910U;
	int32_t t80 = -545;

	t80 = ((x337/(x338^x339))<x340);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = 1U;
	uint64_t x342 = 391079462LLU;
	static volatile int64_t x343 = INT64_MIN;
	volatile int32_t t81 = -1;

	t81 = ((x341/(x342^x343))<x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x346 = INT32_MAX;
	volatile int16_t x347 = INT16_MIN;
	int32_t t82 = 34949;

	t82 = ((x345/(x346^x347))<x348);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = 36783;
	uint64_t x350 = 63578LLU;
	static int8_t x351 = -1;
	static int8_t x352 = INT8_MAX;

	t83 = ((x349/(x350^x351))<x352);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = 238236609013183537LL;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = INT8_MIN;

	t84 = ((x353/(x354^x355))<x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = UINT16_MAX;
	uint8_t x358 = 5U;
	int32_t x359 = INT32_MAX;
	int32_t t85 = 28566;

	t85 = ((x357/(x358^x359))<x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x361 = 3739765LLU;
	volatile int8_t x363 = INT8_MIN;
	uint8_t x364 = 19U;

	t86 = ((x361/(x362^x363))<x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x367 = INT16_MIN;
	volatile int32_t t87 = -2843600;

	t87 = ((x365/(x366^x367))<x368);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x369 = UINT16_MAX;
	int64_t x370 = INT64_MAX;
	static int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MAX;
	static int32_t t88 = -103;

	t88 = ((x369/(x370^x371))<x372);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x374 = -1;
	static volatile uint32_t x375 = 100538U;
	int32_t t89 = 635;

	t89 = ((x373/(x374^x375))<x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x381 = -1;
	int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MAX;
	int32_t t90 = 1493559;

	t90 = ((x381/(x382^x383))<x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = INT16_MIN;
	volatile int64_t x387 = 17828773553LL;
	int64_t x388 = INT64_MAX;

	t91 = ((x385/(x386^x387))<x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = UINT8_MAX;
	static uint32_t x391 = 34302101U;
	volatile int16_t x392 = INT16_MIN;

	t92 = ((x389/(x390^x391))<x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x393 = INT32_MIN;
	static int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MAX;
	int32_t t93 = 113;

	t93 = ((x393/(x394^x395))<x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x397 = INT32_MIN;
	int8_t x398 = 7;
	int8_t x399 = INT8_MAX;
	int32_t x400 = INT32_MAX;
	int32_t t94 = 35351;

	t94 = ((x397/(x398^x399))<x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = -2968;
	uint16_t x402 = 6U;
	int64_t x403 = INT64_MAX;
	int16_t x404 = INT16_MAX;
	volatile int32_t t95 = -6260308;

	t95 = ((x401/(x402^x403))<x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x405 = -27725720874754LL;
	int8_t x406 = INT8_MAX;
	static volatile uint8_t x407 = 11U;
	static volatile int64_t x408 = -1LL;
	volatile int32_t t96 = 0;

	t96 = ((x405/(x406^x407))<x408);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x410 = INT32_MAX;
	int64_t x411 = INT64_MAX;
	static int32_t x412 = INT32_MAX;
	volatile int32_t t97 = 12419848;

	t97 = ((x409/(x410^x411))<x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x413 = 342887U;
	static int8_t x414 = -1;
	static uint32_t x415 = 18U;
	volatile uint32_t x416 = 7584933U;
	volatile int32_t t98 = 51813;

	t98 = ((x413/(x414^x415))<x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = INT32_MAX;
	uint32_t x418 = 2U;
	int16_t x419 = -1;
	int64_t x420 = 14694474748LL;

	t99 = ((x417/(x418^x419))<x420);

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

