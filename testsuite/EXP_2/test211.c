#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 7659276283444LLU;
uint16_t x5 = 185U;
int32_t x6 = INT32_MAX;
static int64_t x15 = INT64_MIN;
static int8_t x18 = INT8_MIN;
static uint16_t x20 = 21U;
int16_t x22 = 3232;
int32_t x23 = -4904838;
uint16_t x33 = 1U;
static int64_t x34 = -5029LL;
int32_t x35 = INT32_MIN;
uint16_t x40 = UINT16_MAX;
int64_t t8 = -2406161LL;
int32_t x49 = 598;
static int8_t x57 = 17;
int64_t x58 = INT64_MIN;
int32_t x59 = INT32_MIN;
int64_t t12 = 281312854186169LL;
volatile int16_t x64 = -1;
uint64_t x65 = 0LLU;
volatile int8_t x67 = INT8_MAX;
volatile int32_t x68 = 0;
static volatile uint64_t x69 = 1LLU;
static int32_t x77 = INT32_MIN;
int32_t x78 = 3744950;
int64_t x80 = -1098LL;
static int32_t x95 = 9;
uint64_t x107 = UINT64_MAX;
int32_t x112 = -1;
volatile int32_t t20 = -3856828;
int32_t x115 = -61429;
uint16_t x125 = UINT16_MAX;
int8_t x127 = 6;
static int16_t x130 = -1;
volatile int32_t x131 = -762;
static int8_t x139 = -1;
int16_t x144 = -2440;
int16_t x149 = 18;
int16_t x156 = 1;
int64_t x158 = INT64_MIN;
volatile int32_t x174 = INT32_MIN;
uint32_t x175 = 257748U;
uint16_t x176 = UINT16_MAX;
int8_t x196 = -1;
static int64_t t39 = 27LL;
int8_t x197 = INT8_MAX;
int64_t x200 = -1LL;
uint32_t x201 = 81648851U;
volatile uint32_t t41 = 48332U;
uint8_t x211 = 30U;
static uint64_t x214 = 9147635LLU;
int16_t x220 = -582;
int8_t x223 = -4;
int8_t x225 = -1;
int64_t x228 = INT64_MAX;
int32_t x230 = INT32_MIN;
int64_t t48 = 4299097260441002048LL;
static int16_t x237 = INT16_MIN;
int64_t x240 = INT64_MAX;
volatile int8_t x246 = INT8_MAX;
int8_t x259 = INT8_MIN;
int16_t x260 = -38;
int64_t x266 = 55697778226LL;
volatile int8_t x269 = 0;
volatile int32_t t59 = 164;
int64_t x277 = INT64_MIN;
uint64_t x282 = 934284478292LLU;
uint32_t x292 = UINT32_MAX;
volatile uint32_t t62 = 1025605433U;
uint8_t x295 = UINT8_MAX;
volatile uint64_t t64 = 26429LLU;
int16_t x308 = INT16_MIN;
static volatile int64_t t66 = 429323LL;
uint64_t x315 = 946408780734518492LLU;
uint64_t x322 = 3006543795221LLU;
volatile uint64_t x323 = UINT64_MAX;
static uint8_t x326 = UINT8_MAX;
volatile int32_t t72 = 3483;
int8_t x344 = INT8_MAX;
int32_t x363 = -1;
volatile uint32_t x365 = UINT32_MAX;
int8_t x367 = -14;
static volatile int64_t x368 = -1LL;
int16_t x374 = INT16_MAX;
int16_t x375 = INT16_MIN;
volatile int64_t t79 = -176LL;
int64_t x378 = INT64_MIN;
int64_t t80 = 7009030439LL;
int8_t x389 = 3;
uint8_t x391 = UINT8_MAX;
volatile int8_t x396 = INT8_MIN;
int64_t t84 = 2290208326LL;
int64_t x399 = -12050706220318262LL;
static volatile int64_t x400 = -1LL;
int16_t x415 = INT16_MIN;
uint8_t x424 = 0U;
int16_t x428 = 8;
int8_t x429 = INT8_MIN;
int16_t x434 = 3631;
static int16_t x442 = INT16_MIN;
static int8_t x447 = -1;
int64_t x449 = 126659LL;
volatile uint64_t t97 = 49LLU;
volatile int16_t x480 = -1;
static int16_t x492 = INT16_MIN;
int64_t t99 = 960773LL;


void f0(void) {
	static int8_t x1 = 15;
	int8_t x2 = -48;
	uint8_t x3 = 0U;
	uint64_t x4 = UINT64_MAX;

	t0 = ((x1/(x2-x3))*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x7 = 10U;
	uint8_t x8 = 10U;
	volatile int32_t t1 = 176;

	t1 = ((x5/(x6-x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 507U;
	uint64_t x10 = 1456585313179LLU;
	static int32_t x11 = INT32_MAX;
	uint16_t x12 = UINT16_MAX;
	static volatile uint64_t t2 = 1482143647910780LLU;

	t2 = ((x9/(x10-x11))*x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	static volatile int8_t x14 = -1;
	int16_t x16 = -41;
	int64_t t3 = -1638088LL;

	t3 = ((x13/(x14-x15))*x16);

	if (t3 != -41LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	static uint64_t x19 = 12LLU;
	uint64_t t4 = 70282077879985LLU;

	t4 = ((x17/(x18-x19))*x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x24 = -1LL;
	volatile int64_t t5 = -32188749LL;

	t5 = ((x21/(x22-x23))*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	uint16_t x26 = UINT16_MAX;
	uint64_t x27 = 4002600333375490LLU;
	int8_t x28 = -1;
	volatile uint64_t t6 = 10418455029636LLU;

	t6 = ((x25/(x26-x27))*x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x36 = -28;
	int64_t t7 = 2428787458LL;

	t7 = ((x33/(x34-x35))*x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MAX;
	int64_t x38 = 146691417245124LL;
	static int32_t x39 = -1;

	t8 = ((x37/(x38-x39))*x40);

	if (t8 != 4120578660LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MIN;
	int64_t x42 = -1LL;
	static int8_t x43 = INT8_MIN;
	uint8_t x44 = UINT8_MAX;
	int64_t t9 = -28LL;

	t9 = ((x41/(x42-x43))*x44);

	if (t9 != -4311876600LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -25;
	int64_t x46 = -212244903LL;
	int8_t x47 = -6;
	uint8_t x48 = 8U;
	volatile int64_t t10 = 600926936702120LL;

	t10 = ((x45/(x46-x47))*x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = INT32_MIN;
	static int8_t x51 = 0;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t11 = 159763799000LLU;

	t11 = ((x49/(x50-x51))*x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x60 = -7;

	t12 = ((x57/(x58-x59))*x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = 999976LL;
	int8_t x62 = -1;
	int32_t x63 = INT32_MIN;
	int64_t t13 = 365381LL;

	t13 = ((x61/(x62-x63))*x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x66 = 2U;
	uint64_t t14 = 72839426742362LLU;

	t14 = ((x65/(x66-x67))*x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = -2304611558LL;
	uint64_t x71 = 432187758LLU;
	volatile int16_t x72 = 910;
	static uint64_t t15 = 390262664LLU;

	t15 = ((x69/(x70-x71))*x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x79 = 67344LLU;
	uint64_t t16 = 713960565LLU;

	t16 = ((x77/(x78-x79))*x80);

	if (t16 != 18441236543813588356LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x89 = 4102058757LL;
	uint64_t x90 = 817941041218226LLU;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t x92 = INT32_MIN;
	volatile uint64_t t17 = 165430LLU;

	t17 = ((x89/(x90-x91))*x92);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = UINT64_MAX;
	int8_t x94 = -22;
	int16_t x96 = INT16_MIN;
	static uint64_t t18 = 150478423944929LLU;

	t18 = ((x93/(x94-x95))*x96);

	if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x105 = INT8_MIN;
	volatile int32_t x106 = -14321;
	static int16_t x108 = -1;
	static uint64_t t19 = UINT64_MAX;

	t19 = ((x105/(x106-x107))*x108);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x109 = UINT8_MAX;
	volatile int16_t x110 = INT16_MIN;
	static int32_t x111 = -45;

	t20 = ((x109/(x110-x111))*x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = 6187234835LLU;
	static volatile int64_t x114 = INT64_MIN;
	volatile int16_t x116 = -8070;
	static uint64_t t21 = 32320274851159106LLU;

	t21 = ((x113/(x114-x115))*x116);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x117 = 28;
	static int16_t x118 = INT16_MAX;
	volatile int16_t x119 = -1;
	int64_t x120 = INT64_MAX;
	volatile int64_t t22 = -786LL;

	t22 = ((x117/(x118-x119))*x120);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = INT32_MIN;
	volatile uint32_t x122 = 60250220U;
	uint16_t x123 = 858U;
	static int16_t x124 = -1;
	volatile uint32_t t23 = 814568U;

	t23 = ((x121/(x122-x123))*x124);

	if (t23 != 4294967261U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x126 = -1;
	static int8_t x128 = INT8_MIN;
	int32_t t24 = 1971;

	t24 = ((x125/(x126-x127))*x128);

	if (t24 != 1198336) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = INT64_MIN;
	int16_t x132 = 0;
	int64_t t25 = 3LL;

	t25 = ((x129/(x130-x131))*x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = -10;
	int32_t x134 = -40;
	int64_t x135 = INT64_MIN;
	int64_t x136 = -1LL;
	int64_t t26 = -5LL;

	t26 = ((x133/(x134-x135))*x136);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x137 = -1;
	int8_t x138 = INT8_MIN;
	volatile int64_t x140 = INT64_MIN;
	int64_t t27 = -4219102406496LL;

	t27 = ((x137/(x138-x139))*x140);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x141 = UINT16_MAX;
	static int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	int32_t t28 = 0;

	t28 = ((x141/(x142-x143))*x144);

	if (t28 != 4880) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x145 = 0;
	uint64_t x146 = 343247LLU;
	int32_t x147 = -1;
	volatile int64_t x148 = INT64_MIN;
	volatile uint64_t t29 = 9141460958909LLU;

	t29 = ((x145/(x146-x147))*x148);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x150 = -3;
	volatile uint8_t x151 = UINT8_MAX;
	uint32_t x152 = 46U;
	static volatile uint32_t t30 = 1U;

	t30 = ((x149/(x150-x151))*x152);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = INT16_MIN;
	static uint32_t x154 = UINT32_MAX;
	int32_t x155 = 6858;
	uint32_t t31 = 69U;

	t31 = ((x153/(x154-x155))*x156);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = -3938999087LL;
	int64_t x159 = -1LL;
	volatile int8_t x160 = INT8_MAX;
	volatile int64_t t32 = -254193788379LL;

	t32 = ((x157/(x158-x159))*x160);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MAX;
	static volatile int8_t x162 = 7;
	static uint16_t x163 = 41U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t33 = -892;

	t33 = ((x161/(x162-x163))*x164);

	if (t33 != 98304) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = -1;
	volatile uint32_t t34 = 4U;

	t34 = ((x173/(x174-x175))*x176);

	if (t34 != 131070U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = -1;
	static int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	static int32_t x180 = INT32_MIN;
	volatile int64_t t35 = 17802771618776938LL;

	t35 = ((x177/(x178-x179))*x180);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = 7888U;
	uint64_t x184 = 1043310LLU;
	static uint64_t t36 = 681328181LLU;

	t36 = ((x181/(x182-x183))*x184);

	if (t36 != 1043310LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x185 = 616444280530489423LL;
	uint8_t x186 = UINT8_MAX;
	volatile int32_t x187 = -19103385;
	int8_t x188 = -2;
	static volatile int64_t t37 = 824115120204LL;

	t37 = ((x185/(x186-x187))*x188);

	if (t37 != -64536840154LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = -1LL;
	uint64_t x190 = UINT64_MAX;
	static uint8_t x191 = 105U;
	volatile uint16_t x192 = 3U;
	static uint64_t t38 = 442LLU;

	t38 = ((x189/(x190-x191))*x192);

	if (t38 != 3LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x193 = 3;
	volatile int64_t x194 = INT64_MAX;
	static uint16_t x195 = 0U;

	t39 = ((x193/(x194-x195))*x196);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x198 = -1LL;
	int8_t x199 = 6;
	int64_t t40 = -9816216597LL;

	t40 = ((x197/(x198-x199))*x200);

	if (t40 != 18LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x202 = UINT16_MAX;
	static int16_t x203 = INT16_MIN;
	uint16_t x204 = 526U;

	t41 = ((x201/(x202-x203))*x204);

	if (t41 != 436580U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x205 = -1;
	volatile uint64_t x206 = 164654LLU;
	static volatile uint16_t x207 = 884U;
	static int64_t x208 = INT64_MIN;
	static uint64_t t42 = 498704LLU;

	t42 = ((x205/(x206-x207))*x208);

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x209 = 1967239;
	static uint32_t x210 = UINT32_MAX;
	int8_t x212 = -1;
	volatile uint32_t t43 = 1518035U;

	t43 = ((x209/(x210-x211))*x212);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MAX;
	int8_t x215 = INT8_MAX;
	int32_t x216 = 96;
	static volatile uint64_t t44 = 84361114794554646LLU;

	t44 = ((x213/(x214-x215))*x216);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = -1;
	static int32_t x219 = -2;
	int32_t t45 = -217854;

	t45 = ((x217/(x218-x219))*x220);

	if (t45 != 19070976) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x221 = 39U;
	int16_t x222 = -1;
	int32_t x224 = 1;
	volatile int32_t t46 = 115280;

	t46 = ((x221/(x222-x223))*x224);

	if (t46 != 13) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x226 = INT8_MAX;
	uint16_t x227 = UINT16_MAX;
	volatile int64_t t47 = -16457LL;

	t47 = ((x225/(x226-x227))*x228);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x229 = -1;
	int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MIN;

	t48 = ((x229/(x230-x231))*x232);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x233 = UINT32_MAX;
	uint8_t x234 = 6U;
	volatile int16_t x235 = INT16_MAX;
	int16_t x236 = -3267;
	uint32_t t49 = 479U;

	t49 = ((x233/(x234-x235))*x236);

	if (t49 != 4294964029U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x238 = -30875918692LL;
	int32_t x239 = INT32_MIN;
	static int64_t t50 = -14641580110LL;

	t50 = ((x237/(x238-x239))*x240);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MAX;
	uint8_t x244 = 1U;
	int64_t t51 = 247856627958520LL;

	t51 = ((x241/(x242-x243))*x244);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x245 = -11450;
	static uint32_t x247 = UINT32_MAX;
	volatile int32_t x248 = INT32_MIN;
	volatile uint32_t t52 = 129796589U;

	t52 = ((x245/(x246-x247))*x248);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = -2576LL;
	int8_t x250 = INT8_MAX;
	static uint16_t x251 = 225U;
	int64_t x252 = -231601LL;
	int64_t t53 = -3657LL;

	t53 = ((x249/(x250-x251))*x252);

	if (t53 != -6021626LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x253 = UINT16_MAX;
	static volatile int8_t x254 = -5;
	int64_t x255 = 431LL;
	volatile int8_t x256 = 7;
	int64_t t54 = -497488710682908245LL;

	t54 = ((x253/(x254-x255))*x256);

	if (t54 != -1050LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x257 = 2U;
	volatile int8_t x258 = INT8_MAX;
	int32_t t55 = -167155761;

	t55 = ((x257/(x258-x259))*x260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x261 = -456276679511LL;
	int16_t x262 = INT16_MIN;
	int32_t x263 = INT32_MIN;
	int16_t x264 = 84;
	int64_t t56 = -25LL;

	t56 = ((x261/(x262-x263))*x264);

	if (t56 != -17808LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = UINT8_MAX;
	uint32_t x267 = 12U;
	int8_t x268 = INT8_MIN;
	int64_t t57 = 61LL;

	t57 = ((x265/(x266-x267))*x268);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x270 = UINT64_MAX;
	uint8_t x271 = 3U;
	int32_t x272 = INT32_MAX;
	static uint64_t t58 = 8092386686804129250LLU;

	t58 = ((x269/(x270-x271))*x272);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = 29274;
	static int16_t x274 = 3;
	int16_t x275 = INT16_MIN;
	static uint16_t x276 = 897U;

	t59 = ((x273/(x274-x275))*x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x278 = -1;
	int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	volatile int64_t t60 = 1905082235607109LL;

	t60 = ((x277/(x278-x279))*x280);

	if (t60 != 128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x281 = INT64_MIN;
	int64_t x283 = INT64_MAX;
	uint32_t x284 = 847566U;
	uint64_t t61 = 693100722LLU;

	t61 = ((x281/(x282-x283))*x284);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x289 = 0;
	int8_t x290 = 1;
	int16_t x291 = -55;

	t62 = ((x289/(x290-x291))*x292);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = 26;
	uint32_t x296 = 272094U;
	static volatile uint32_t t63 = 355566U;

	t63 = ((x293/(x294-x295))*x296);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = -1LL;
	volatile int64_t x298 = INT64_MIN;
	uint64_t x299 = 803311296LLU;
	uint64_t x300 = UINT64_MAX;

	t64 = ((x297/(x298-x299))*x300);

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x301 = 15315U;
	int16_t x302 = -54;
	static volatile int64_t x303 = 126123182365LL;
	static uint64_t x304 = UINT64_MAX;
	uint64_t t65 = 998504380140811LLU;

	t65 = ((x301/(x302-x303))*x304);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x305 = 168;
	int16_t x306 = INT16_MIN;
	static volatile int64_t x307 = -1LL;

	t66 = ((x305/(x306-x307))*x308);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = -1;
	int64_t x310 = 46115281012379517LL;
	int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	volatile int64_t t67 = 104905556934265LL;

	t67 = ((x309/(x310-x311))*x312);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x313 = INT32_MIN;
	volatile uint8_t x314 = 43U;
	volatile uint8_t x316 = 15U;
	static uint64_t t68 = 10331LLU;

	t68 = ((x313/(x314-x315))*x316);

	if (t68 != 15LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = -1;
	int16_t x318 = 1;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;
	int32_t t69 = -66351227;

	t69 = ((x317/(x318-x319))*x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x321 = -1LL;
	uint8_t x324 = 6U;
	uint64_t t70 = 573109448854LLU;

	t70 = ((x321/(x322-x323))*x324);

	if (t70 != 36813186LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x325 = -1;
	int8_t x327 = -1;
	int32_t x328 = INT32_MIN;
	int32_t t71 = -2585912;

	t71 = ((x325/(x326-x327))*x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = 29478U;
	volatile uint8_t x330 = UINT8_MAX;
	int16_t x331 = INT16_MAX;
	static volatile int16_t x332 = -114;

	t72 = ((x329/(x330-x331))*x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x341 = 14398739U;
	int16_t x342 = -764;
	int16_t x343 = INT16_MIN;
	static uint32_t t73 = 496623U;

	t73 = ((x341/(x342-x343))*x344);

	if (t73 != 57023U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = INT32_MAX;
	static int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	static uint8_t x348 = UINT8_MAX;
	volatile int64_t t74 = 6LL;

	t74 = ((x345/(x346-x347))*x348);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x349 = -1;
	uint64_t x350 = 7783069872038476250LLU;
	uint16_t x351 = UINT16_MAX;
	static int8_t x352 = INT8_MAX;
	static uint64_t t75 = 28745112515LLU;

	t75 = ((x349/(x350-x351))*x352);

	if (t75 != 254LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = INT64_MIN;
	static int64_t x354 = INT64_MIN;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MIN;
	static volatile int64_t t76 = -661LL;

	t76 = ((x353/(x354-x355))*x356);

	if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MIN;
	static int8_t x364 = -1;
	static volatile int64_t t77 = 6090LL;

	t77 = ((x361/(x362-x363))*x364);

	if (t77 != -4294967298LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x366 = 49348147907898LLU;
	uint64_t t78 = 96LLU;

	t78 = ((x365/(x366-x367))*x368);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = -1LL;
	int32_t x376 = -1;

	t79 = ((x373/(x374-x375))*x376);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = -795;
	int8_t x379 = -2;
	uint32_t x380 = UINT32_MAX;

	t80 = ((x377/(x378-x379))*x380);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x381 = -1LL;
	volatile uint32_t x382 = 3789U;
	int8_t x383 = -1;
	int64_t x384 = -116LL;
	volatile int64_t t81 = 341451489838229LL;

	t81 = ((x381/(x382-x383))*x384);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x385 = INT64_MAX;
	volatile uint8_t x386 = UINT8_MAX;
	static int32_t x387 = 6120;
	volatile int8_t x388 = 30;
	volatile int64_t t82 = -3310428563181297LL;

	t82 = ((x385/(x386-x387))*x388);

	if (t82 != -47178373590049980LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x390 = UINT16_MAX;
	int32_t x392 = 510868460;
	volatile int32_t t83 = 1;

	t83 = ((x389/(x390-x391))*x392);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x394 = 249U;
	static int64_t x395 = INT64_MAX;

	t84 = ((x393/(x394-x395))*x396);

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x397 = 76U;
	uint32_t x398 = 209749471U;
	int64_t t85 = -2LL;

	t85 = ((x397/(x398-x399))*x400);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x405 = 669736U;
	int8_t x406 = -7;
	volatile uint8_t x407 = 1U;
	int64_t x408 = -1LL;
	int64_t t86 = 25356977908008LL;

	t86 = ((x405/(x406-x407))*x408);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x409 = UINT64_MAX;
	static int16_t x410 = INT16_MIN;
	int32_t x411 = INT32_MIN;
	int8_t x412 = 28;
	volatile uint64_t t87 = 812927LLU;

	t87 = ((x409/(x410-x411))*x412);

	if (t87 != 240521838648LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x413 = 125U;
	volatile int64_t x414 = -1810LL;
	volatile int32_t x416 = INT32_MIN;
	volatile int64_t t88 = 246LL;

	t88 = ((x413/(x414-x415))*x416);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = 28842;
	uint16_t x422 = 236U;
	static int32_t x423 = 30057719;
	int32_t t89 = -28834616;

	t89 = ((x421/(x422-x423))*x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x425 = UINT32_MAX;
	uint16_t x426 = 4298U;
	volatile int32_t x427 = -73207;
	uint32_t t90 = 0U;

	t90 = ((x425/(x426-x427))*x428);

	if (t90 != 443320U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x430 = UINT8_MAX;
	int16_t x431 = INT16_MIN;
	static int32_t x432 = -1;
	int32_t t91 = 363148;

	t91 = ((x429/(x430-x431))*x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x433 = INT64_MIN;
	int16_t x435 = INT16_MAX;
	static int16_t x436 = -1;
	static volatile int64_t t92 = 2000LL;

	t92 = ((x433/(x434-x435))*x436);

	if (t92 != -316562741517530LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x441 = 22U;
	int8_t x443 = INT8_MIN;
	int32_t x444 = INT32_MIN;
	static volatile int32_t t93 = -488398514;

	t93 = ((x441/(x442-x443))*x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = INT8_MIN;
	uint8_t x446 = 0U;
	uint16_t x448 = UINT16_MAX;
	int32_t t94 = 4;

	t94 = ((x445/(x446-x447))*x448);

	if (t94 != -8388480) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x450 = 344018079318322991LL;
	int8_t x451 = 1;
	uint32_t x452 = 35U;
	int64_t t95 = 81247916143930LL;

	t95 = ((x449/(x450-x451))*x452);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x453 = INT16_MAX;
	int64_t x454 = INT64_MAX;
	volatile uint32_t x455 = UINT32_MAX;
	volatile int32_t x456 = INT32_MIN;
	int64_t t96 = 8767920235358476LL;

	t96 = ((x453/(x454-x455))*x456);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x457 = UINT16_MAX;
	uint64_t x458 = 5137627419199054LLU;
	int64_t x459 = -2104739815914262LL;
	uint64_t x460 = UINT64_MAX;

	t97 = ((x457/(x458-x459))*x460);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x477 = 651;
	int64_t x478 = INT64_MIN;
	int32_t x479 = INT32_MIN;
	int64_t t98 = -794411530639217315LL;

	t98 = ((x477/(x478-x479))*x480);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x489 = INT16_MIN;
	int64_t x490 = 26909634LL;
	int8_t x491 = INT8_MIN;

	t99 = ((x489/(x490-x491))*x492);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

