#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
int64_t x7 = 7210LL;
int32_t x15 = -3;
static volatile int8_t x29 = INT8_MIN;
int8_t x32 = -1;
static int16_t x49 = INT16_MIN;
int16_t x55 = -2;
int32_t t10 = 0;
int64_t x63 = 6717632002872LL;
static int64_t x65 = INT64_MIN;
volatile uint64_t x67 = 1568LLU;
int64_t x68 = INT64_MIN;
int32_t t13 = 10;
int32_t x87 = INT32_MAX;
int16_t x88 = -1929;
int8_t x90 = INT8_MIN;
int8_t x91 = -30;
int32_t x94 = 6011920;
uint8_t x100 = 8U;
static volatile int16_t x105 = -1;
int8_t x112 = 7;
volatile int32_t t23 = 240334827;
int64_t x115 = INT64_MIN;
volatile int8_t x121 = INT8_MAX;
int16_t x122 = INT16_MIN;
int64_t x139 = INT64_MAX;
int32_t x147 = 545768;
uint32_t x150 = UINT32_MAX;
volatile int16_t x152 = INT16_MAX;
volatile int32_t t31 = -1;
volatile int16_t x153 = 12348;
int8_t x155 = INT8_MIN;
static int32_t x156 = INT32_MIN;
static int16_t x162 = -183;
int32_t x178 = -12009;
static volatile int32_t t37 = 9792375;
uint32_t x181 = UINT32_MAX;
int16_t x188 = INT16_MAX;
uint32_t x190 = 1319379U;
volatile int32_t t42 = 45991;
int16_t x223 = -1;
int8_t x227 = INT8_MAX;
static int32_t x228 = INT32_MAX;
static volatile uint8_t x231 = 0U;
volatile uint32_t x236 = 988238U;
int16_t x244 = 0;
static int8_t x251 = INT8_MIN;
volatile int32_t t53 = -582564;
uint16_t x261 = UINT16_MAX;
volatile int64_t x263 = INT64_MIN;
static volatile int16_t x265 = INT16_MIN;
static int8_t x280 = -7;
volatile int32_t t57 = -1604;
uint8_t x284 = UINT8_MAX;
volatile int32_t t58 = -165;
volatile uint8_t x287 = 108U;
uint8_t x288 = UINT8_MAX;
volatile int16_t x290 = -1120;
static volatile int32_t t61 = 8;
int32_t t64 = -22;
int16_t x316 = INT16_MIN;
static volatile int32_t x327 = INT32_MIN;
static int32_t t67 = -1712253;
int64_t x329 = 266956888212225LL;
int16_t x330 = -60;
int32_t t68 = -78940;
uint16_t x345 = UINT16_MAX;
static int64_t x348 = 4202LL;
volatile int32_t t70 = -4571;
uint32_t x358 = UINT32_MAX;
uint16_t x359 = 545U;
volatile int8_t x360 = INT8_MIN;
volatile int8_t x364 = -1;
int8_t x378 = INT8_MAX;
int64_t x386 = -532526096155LL;
uint16_t x390 = 140U;
int64_t x397 = -174886070LL;
int16_t x400 = -1;
uint16_t x401 = 7U;
static uint8_t x402 = UINT8_MAX;
volatile int32_t t83 = -1;
uint16_t x424 = 1926U;
static int8_t x425 = -1;
volatile uint32_t x431 = 476016U;
int8_t x437 = 0;
static int16_t x438 = 50;
uint16_t x440 = UINT16_MAX;
volatile int32_t t90 = 1;
int8_t x443 = INT8_MIN;
static volatile int16_t x445 = 12;
uint32_t x446 = 127091U;
int32_t t92 = 0;
static int8_t x453 = -12;
int64_t x454 = INT64_MIN;
static int64_t x468 = INT64_MIN;
uint8_t x472 = 0U;
int64_t x476 = INT64_MIN;


void f0(void) {
	volatile int64_t x1 = 21458143LL;
	static uint16_t x2 = UINT16_MAX;
	static uint32_t x3 = 1053812673U;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 221897544;

	t0 = (((x1-x2)<=x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int64_t x8 = 69221029990196501LL;
	int32_t t1 = -1396;

	t1 = (((x5-x6)<=x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MAX;
	int32_t x10 = -1;
	int16_t x11 = INT16_MAX;
	static uint32_t x12 = 3125679U;
	int32_t t2 = -6;

	t2 = (((x9-x10)<=x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 16996386591LLU;
	uint8_t x14 = 4U;
	static int32_t x16 = INT32_MIN;
	int32_t t3 = -397193575;

	t3 = (((x13-x14)<=x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = UINT8_MAX;
	uint32_t x26 = UINT32_MAX;
	int16_t x27 = INT16_MIN;
	static uint32_t x28 = 89719U;
	int32_t t4 = -4964;

	t4 = (((x25-x26)<=x27)<x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x30 = INT8_MAX;
	static int32_t x31 = INT32_MIN;
	int32_t t5 = -58330491;

	t5 = (((x29-x30)<=x31)<x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -257491186;
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t6 = -14703348;

	t6 = (((x33-x34)<=x35)<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	int64_t x40 = -1LL;
	static int32_t t7 = -579;

	t7 = (((x37-x38)<=x39)<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 36U;
	static int8_t x42 = -1;
	volatile int8_t x43 = INT8_MAX;
	uint16_t x44 = UINT16_MAX;
	static volatile int32_t t8 = -57;

	t8 = (((x41-x42)<=x43)<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x50 = INT16_MAX;
	uint64_t x51 = 131747092388684LLU;
	static volatile int32_t x52 = INT32_MAX;
	int32_t t9 = -482147081;

	t9 = (((x49-x50)<=x51)<x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = UINT32_MAX;
	static uint16_t x54 = 953U;
	int16_t x56 = INT16_MAX;

	t10 = (((x53-x54)<=x55)<x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = -5;
	int16_t x62 = INT16_MIN;
	int16_t x64 = 1;
	int32_t t11 = -373;

	t11 = (((x61-x62)<=x63)<x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x66 = -1;
	static int32_t t12 = -2;

	t12 = (((x65-x66)<=x67)<x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	volatile int32_t x70 = INT32_MIN;
	static uint8_t x71 = UINT8_MAX;
	volatile int8_t x72 = INT8_MIN;

	t13 = (((x69-x70)<=x71)<x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = 1LL;
	int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MIN;
	volatile int32_t x76 = -13631336;
	volatile int32_t t14 = 3;

	t14 = (((x73-x74)<=x75)<x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x77 = INT64_MAX;
	uint16_t x78 = UINT16_MAX;
	uint16_t x79 = 10U;
	int16_t x80 = 1;
	int32_t t15 = -1;

	t15 = (((x77-x78)<=x79)<x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = 11730;
	volatile int16_t x82 = INT16_MAX;
	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t16 = 9;

	t16 = (((x81-x82)<=x83)<x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x85 = 39321751773534LLU;
	uint64_t x86 = 33800989842LLU;
	volatile int32_t t17 = 32;

	t17 = (((x85-x86)<=x87)<x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x89 = -194;
	static int32_t x92 = INT32_MIN;
	static int32_t t18 = 1855110;

	t18 = (((x89-x90)<=x91)<x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = UINT16_MAX;
	volatile uint32_t x95 = 0U;
	uint32_t x96 = 679U;
	volatile int32_t t19 = -351074;

	t19 = (((x93-x94)<=x95)<x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 5U;
	static int16_t x98 = 2426;
	uint8_t x99 = UINT8_MAX;
	static volatile int32_t t20 = 2;

	t20 = (((x97-x98)<=x99)<x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = UINT8_MAX;
	int8_t x102 = 1;
	static uint64_t x103 = 3268124911120LLU;
	int64_t x104 = -1LL;
	static int32_t t21 = -85206474;

	t21 = (((x101-x102)<=x103)<x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x106 = 717U;
	static int64_t x107 = INT64_MIN;
	int16_t x108 = -1;
	static volatile int32_t t22 = 81320026;

	t22 = (((x105-x106)<=x107)<x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 1410U;
	uint16_t x110 = UINT16_MAX;
	volatile int8_t x111 = -1;

	t23 = (((x109-x110)<=x111)<x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MIN;
	volatile int16_t x114 = -1;
	static int64_t x116 = 150558423792985LL;
	volatile int32_t t24 = -418613056;

	t24 = (((x113-x114)<=x115)<x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = 1U;
	uint16_t x118 = 23U;
	uint64_t x119 = 1765486873784LLU;
	int32_t x120 = INT32_MAX;
	volatile int32_t t25 = 66961239;

	t25 = (((x117-x118)<=x119)<x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x123 = INT32_MIN;
	static volatile int8_t x124 = -3;
	int32_t t26 = 374;

	t26 = (((x121-x122)<=x123)<x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x133 = 8685624LLU;
	int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	int8_t x136 = -11;
	int32_t t27 = -19187455;

	t27 = (((x133-x134)<=x135)<x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = INT64_MAX;
	static int16_t x138 = 423;
	static uint32_t x140 = 496U;
	int32_t t28 = -3942623;

	t28 = (((x137-x138)<=x139)<x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x141 = INT16_MAX;
	int32_t x142 = 0;
	uint8_t x143 = UINT8_MAX;
	static volatile int8_t x144 = -1;
	int32_t t29 = 1020417381;

	t29 = (((x141-x142)<=x143)<x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 65U;
	volatile int16_t x146 = INT16_MIN;
	int8_t x148 = 59;
	volatile int32_t t30 = -6933;

	t30 = (((x145-x146)<=x147)<x148);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = -9;
	volatile int64_t x151 = INT64_MIN;

	t31 = (((x149-x150)<=x151)<x152);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x154 = INT64_MAX;
	int32_t t32 = -3;

	t32 = (((x153-x154)<=x155)<x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x161 = 6;
	int16_t x163 = INT16_MIN;
	static uint32_t x164 = 2U;
	int32_t t33 = -297750623;

	t33 = (((x161-x162)<=x163)<x164);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = -1082;
	int8_t x166 = -27;
	uint8_t x167 = 8U;
	int8_t x168 = 59;
	volatile int32_t t34 = 1599;

	t34 = (((x165-x166)<=x167)<x168);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MIN;
	uint32_t x170 = 972U;
	int16_t x171 = -1;
	int64_t x172 = INT64_MIN;
	int32_t t35 = 3007;

	t35 = (((x169-x170)<=x171)<x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x173 = -1LL;
	static uint8_t x174 = 16U;
	uint8_t x175 = 57U;
	int8_t x176 = INT8_MIN;
	volatile int32_t t36 = -3310171;

	t36 = (((x173-x174)<=x175)<x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x177 = -1LL;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;

	t37 = (((x177-x178)<=x179)<x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x182 = 122347328902LL;
	int16_t x183 = -1;
	static int32_t x184 = 408854;
	volatile int32_t t38 = -7525;

	t38 = (((x181-x182)<=x183)<x184);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = -7;
	int32_t x186 = 21370;
	volatile int32_t x187 = -6125;
	volatile int32_t t39 = 18244;

	t39 = (((x185-x186)<=x187)<x188);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x189 = INT16_MAX;
	volatile int16_t x191 = -1845;
	static int64_t x192 = INT64_MIN;
	volatile int32_t t40 = 7174;

	t40 = (((x189-x190)<=x191)<x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x197 = -6057496;
	static volatile uint8_t x198 = 3U;
	static volatile int32_t x199 = 1;
	static volatile int16_t x200 = INT16_MIN;
	volatile int32_t t41 = 29482251;

	t41 = (((x197-x198)<=x199)<x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 140LLU;
	int8_t x202 = 29;
	uint16_t x203 = 1017U;
	int32_t x204 = INT32_MIN;

	t42 = (((x201-x202)<=x203)<x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x209 = UINT32_MAX;
	int32_t x210 = INT32_MIN;
	static int8_t x211 = 19;
	volatile int8_t x212 = INT8_MIN;
	int32_t t43 = -332339;

	t43 = (((x209-x210)<=x211)<x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x213 = UINT16_MAX;
	int16_t x214 = INT16_MAX;
	uint64_t x215 = 234852348LLU;
	volatile int8_t x216 = 0;
	static volatile int32_t t44 = -133097;

	t44 = (((x213-x214)<=x215)<x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x217 = UINT32_MAX;
	int64_t x218 = -446873850LL;
	int16_t x219 = INT16_MAX;
	int8_t x220 = -1;
	volatile int32_t t45 = -8162078;

	t45 = (((x217-x218)<=x219)<x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = -1;
	volatile int8_t x224 = -1;
	volatile int32_t t46 = 6;

	t46 = (((x221-x222)<=x223)<x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x225 = UINT64_MAX;
	uint32_t x226 = 214U;
	volatile int32_t t47 = -7;

	t47 = (((x225-x226)<=x227)<x228);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MIN;
	static uint16_t x230 = UINT16_MAX;
	uint16_t x232 = 8U;
	int32_t t48 = 181;

	t48 = (((x229-x230)<=x231)<x232);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x233 = 3837U;
	int8_t x234 = -1;
	int64_t x235 = INT64_MIN;
	int32_t t49 = -99716;

	t49 = (((x233-x234)<=x235)<x236);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x237 = -1;
	static uint32_t x238 = 1287U;
	uint32_t x239 = 6U;
	uint8_t x240 = 0U;
	int32_t t50 = -33767;

	t50 = (((x237-x238)<=x239)<x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = 36;
	uint16_t x242 = 73U;
	int8_t x243 = INT8_MIN;
	static volatile int32_t t51 = -8008329;

	t51 = (((x241-x242)<=x243)<x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x249 = INT32_MIN;
	volatile int16_t x250 = INT16_MIN;
	int8_t x252 = INT8_MIN;
	static int32_t t52 = 3;

	t52 = (((x249-x250)<=x251)<x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x253 = 55889U;
	int32_t x254 = INT32_MAX;
	uint64_t x255 = 6505LLU;
	static volatile int32_t x256 = INT32_MIN;

	t53 = (((x253-x254)<=x255)<x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x262 = -1;
	int16_t x264 = INT16_MIN;
	int32_t t54 = 59461;

	t54 = (((x261-x262)<=x263)<x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x266 = 0;
	int32_t x267 = INT32_MIN;
	static uint8_t x268 = UINT8_MAX;
	int32_t t55 = -1441;

	t55 = (((x265-x266)<=x267)<x268);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x269 = -1;
	static int8_t x270 = INT8_MIN;
	uint16_t x271 = UINT16_MAX;
	uint8_t x272 = UINT8_MAX;
	static int32_t t56 = 7;

	t56 = (((x269-x270)<=x271)<x272);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x277 = -15161;
	int64_t x278 = 189LL;
	uint64_t x279 = 117079082056479678LLU;

	t57 = (((x277-x278)<=x279)<x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x281 = UINT16_MAX;
	static uint32_t x282 = 1017492U;
	int64_t x283 = INT64_MIN;

	t58 = (((x281-x282)<=x283)<x284);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x285 = 1U;
	int8_t x286 = -1;
	volatile int32_t t59 = 71253400;

	t59 = (((x285-x286)<=x287)<x288);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x289 = -1LL;
	int8_t x291 = INT8_MAX;
	uint8_t x292 = 3U;
	int32_t t60 = -261232704;

	t60 = (((x289-x290)<=x291)<x292);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x293 = -1LL;
	static int16_t x294 = 34;
	uint32_t x295 = 317661U;
	static int64_t x296 = INT64_MIN;

	t61 = (((x293-x294)<=x295)<x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x297 = INT64_MIN;
	static int32_t x298 = INT32_MIN;
	static int32_t x299 = INT32_MIN;
	volatile int64_t x300 = INT64_MIN;
	static int32_t t62 = -347260338;

	t62 = (((x297-x298)<=x299)<x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x305 = -1LL;
	volatile int8_t x306 = -7;
	uint64_t x307 = UINT64_MAX;
	static int32_t x308 = -207;
	int32_t t63 = 425079;

	t63 = (((x305-x306)<=x307)<x308);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x309 = UINT64_MAX;
	volatile uint16_t x310 = 1729U;
	uint8_t x311 = UINT8_MAX;
	uint8_t x312 = 24U;

	t64 = (((x309-x310)<=x311)<x312);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x313 = INT16_MIN;
	int16_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	int32_t t65 = 52713646;

	t65 = (((x313-x314)<=x315)<x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x321 = 37282357U;
	int8_t x322 = -12;
	volatile int16_t x323 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t66 = 730877610;

	t66 = (((x321-x322)<=x323)<x324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int32_t x326 = INT32_MIN;
	volatile int8_t x328 = INT8_MIN;

	t67 = (((x325-x326)<=x327)<x328);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x331 = UINT8_MAX;
	int32_t x332 = INT32_MIN;

	t68 = (((x329-x330)<=x331)<x332);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x346 = INT8_MAX;
	volatile uint64_t x347 = 4296358291055108353LLU;
	volatile int32_t t69 = 68637;

	t69 = (((x345-x346)<=x347)<x348);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x349 = INT8_MIN;
	volatile int16_t x350 = -310;
	int32_t x351 = -1;
	int64_t x352 = INT64_MIN;

	t70 = (((x349-x350)<=x351)<x352);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = -13349;
	volatile int16_t x354 = INT16_MIN;
	uint16_t x355 = UINT16_MAX;
	uint64_t x356 = UINT64_MAX;
	int32_t t71 = -141;

	t71 = (((x353-x354)<=x355)<x356);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x357 = 12465002384275388LLU;
	int32_t t72 = -1;

	t72 = (((x357-x358)<=x359)<x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x361 = 0U;
	static int16_t x362 = INT16_MIN;
	int16_t x363 = -1;
	int32_t t73 = 7640;

	t73 = (((x361-x362)<=x363)<x364);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x365 = -13893020056613LL;
	int32_t x366 = 21396;
	static int16_t x367 = 84;
	int8_t x368 = -1;
	volatile int32_t t74 = 16;

	t74 = (((x365-x366)<=x367)<x368);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x369 = 56U;
	uint16_t x370 = 3447U;
	uint64_t x371 = 859621LLU;
	uint8_t x372 = UINT8_MAX;
	int32_t t75 = -57;

	t75 = (((x369-x370)<=x371)<x372);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x373 = 12628U;
	int8_t x374 = INT8_MAX;
	int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MAX;
	volatile int32_t t76 = 213742564;

	t76 = (((x373-x374)<=x375)<x376);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x377 = -1;
	uint16_t x379 = 62U;
	int16_t x380 = -1;
	static volatile int32_t t77 = 0;

	t77 = (((x377-x378)<=x379)<x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x381 = INT16_MAX;
	uint32_t x382 = UINT32_MAX;
	volatile int32_t x383 = -148;
	int64_t x384 = -1LL;
	int32_t t78 = -709;

	t78 = (((x381-x382)<=x383)<x384);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x385 = INT8_MIN;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = 93058;
	int32_t t79 = 24;

	t79 = (((x385-x386)<=x387)<x388);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x389 = UINT64_MAX;
	uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MIN;
	volatile int32_t t80 = 240587;

	t80 = (((x389-x390)<=x391)<x392);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x398 = 47211266U;
	volatile int8_t x399 = INT8_MAX;
	volatile int32_t t81 = -444549;

	t81 = (((x397-x398)<=x399)<x400);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x403 = 42530155190868449LLU;
	int16_t x404 = -2;
	static int32_t t82 = -214;

	t82 = (((x401-x402)<=x403)<x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x405 = INT8_MIN;
	static int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MIN;
	int8_t x408 = -1;

	t83 = (((x405-x406)<=x407)<x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x413 = 2;
	int16_t x414 = 834;
	int16_t x415 = INT16_MIN;
	volatile uint8_t x416 = 55U;
	int32_t t84 = 44821641;

	t84 = (((x413-x414)<=x415)<x416);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x417 = 13410U;
	volatile int16_t x418 = -1;
	static int16_t x419 = -1;
	volatile int8_t x420 = -1;
	int32_t t85 = -25355;

	t85 = (((x417-x418)<=x419)<x420);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x421 = 12LL;
	uint64_t x422 = UINT64_MAX;
	volatile uint16_t x423 = 4U;
	volatile int32_t t86 = 142;

	t86 = (((x421-x422)<=x423)<x424);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x426 = 46063001368LLU;
	static int16_t x427 = INT16_MIN;
	int64_t x428 = INT64_MIN;
	volatile int32_t t87 = 565;

	t87 = (((x425-x426)<=x427)<x428);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x429 = INT32_MIN;
	static uint32_t x430 = 88654940U;
	int32_t x432 = INT32_MIN;
	int32_t t88 = -61;

	t88 = (((x429-x430)<=x431)<x432);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x433 = UINT64_MAX;
	uint32_t x434 = 52220U;
	int8_t x435 = -1;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t89 = 8094050;

	t89 = (((x433-x434)<=x435)<x436);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x439 = UINT16_MAX;

	t90 = (((x437-x438)<=x439)<x440);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x441 = INT16_MIN;
	int16_t x442 = -12;
	int16_t x444 = 15;
	int32_t t91 = 0;

	t91 = (((x441-x442)<=x443)<x444);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x447 = 4;
	static uint32_t x448 = 961U;

	t92 = (((x445-x446)<=x447)<x448);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x449 = 3580U;
	static uint32_t x450 = UINT32_MAX;
	static uint16_t x451 = 7274U;
	volatile int16_t x452 = INT16_MIN;
	int32_t t93 = -586533;

	t93 = (((x449-x450)<=x451)<x452);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x455 = -932297;
	int32_t x456 = INT32_MIN;
	volatile int32_t t94 = 926314;

	t94 = (((x453-x454)<=x455)<x456);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x461 = 45090064230LLU;
	uint32_t x462 = 6252U;
	volatile uint8_t x463 = 23U;
	int16_t x464 = -1245;
	volatile int32_t t95 = -106162617;

	t95 = (((x461-x462)<=x463)<x464);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x465 = -1;
	int8_t x466 = INT8_MIN;
	static int8_t x467 = INT8_MIN;
	static volatile int32_t t96 = -85802006;

	t96 = (((x465-x466)<=x467)<x468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x469 = 1508488812LLU;
	uint8_t x470 = 6U;
	int8_t x471 = INT8_MIN;
	volatile int32_t t97 = -890;

	t97 = (((x469-x470)<=x471)<x472);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x473 = INT8_MIN;
	int32_t x474 = INT32_MIN;
	static int8_t x475 = 0;
	volatile int32_t t98 = 39562;

	t98 = (((x473-x474)<=x475)<x476);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x477 = -1;
	volatile uint8_t x478 = UINT8_MAX;
	uint32_t x479 = UINT32_MAX;
	int16_t x480 = 1;
	volatile int32_t t99 = -5;

	t99 = (((x477-x478)<=x479)<x480);

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

