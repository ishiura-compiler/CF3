#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x16 = INT64_MIN;
int8_t x18 = 28;
int64_t t4 = -2284566467747153LL;
uint16_t x22 = 7324U;
static volatile int8_t x30 = -1;
int32_t t6 = -2768;
int8_t x38 = 0;
volatile int16_t x41 = INT16_MIN;
int64_t x45 = 9323923LL;
uint8_t x54 = 1U;
uint64_t x56 = UINT64_MAX;
volatile int32_t x62 = -448565;
uint32_t x64 = 10425828U;
uint8_t x72 = 55U;
static int64_t x80 = INT64_MIN;
static int16_t x85 = INT16_MIN;
static volatile uint32_t t19 = 101403U;
uint64_t x89 = 1066994140010412533LLU;
volatile uint8_t x98 = UINT8_MAX;
static int8_t x100 = 5;
int64_t x101 = 6206383241809LL;
uint64_t x105 = 21925LLU;
uint32_t x122 = 31083U;
int16_t x124 = INT16_MAX;
uint64_t x126 = 49702655918445897LLU;
int8_t x127 = -1;
int32_t x129 = INT32_MIN;
int16_t x133 = INT16_MAX;
uint16_t x139 = 0U;
volatile int64_t t33 = 15409969713LL;
volatile int64_t t34 = 141195206427076LL;
uint8_t x150 = UINT8_MAX;
uint64_t x152 = 34LLU;
uint64_t x153 = 47341LLU;
volatile uint32_t x154 = UINT32_MAX;
int32_t x157 = INT32_MIN;
int8_t x162 = INT8_MIN;
static volatile uint8_t x165 = UINT8_MAX;
static int32_t x168 = INT32_MIN;
int32_t x169 = -703790300;
uint32_t t42 = 8U;
volatile int64_t t43 = 121400899LL;
uint32_t t44 = 364U;
volatile uint8_t x189 = 0U;
int16_t x191 = INT16_MIN;
uint32_t x192 = 2204U;
static int32_t x194 = -252786239;
volatile int64_t t48 = 27LL;
uint16_t x207 = 84U;
static volatile int16_t x225 = -1;
int8_t x230 = 1;
volatile int32_t x232 = -1;
int64_t t54 = 1729592881LL;
volatile int8_t x233 = 14;
uint8_t x236 = 3U;
volatile int64_t t55 = 8399095LL;
uint64_t t56 = UINT64_MAX;
volatile int32_t t57 = 1;
uint16_t x246 = 1U;
int64_t x248 = -201711909308616LL;
int16_t x249 = INT16_MIN;
uint8_t x251 = 2U;
volatile int32_t t59 = 990;
int8_t x255 = -1;
int8_t x258 = INT8_MIN;
int16_t x259 = 6493;
int32_t t61 = 1;
static uint16_t x274 = UINT16_MAX;
static volatile uint64_t x277 = 6089LLU;
uint64_t x280 = UINT64_MAX;
uint16_t x288 = 4U;
int64_t x303 = INT64_MAX;
int64_t t71 = 30179671533914LL;
int8_t x312 = INT8_MIN;
uint32_t t73 = 7361U;
volatile uint32_t x315 = 11U;
volatile int64_t x317 = -133LL;
uint64_t x318 = UINT64_MAX;
uint64_t t75 = 6756LLU;
int64_t x335 = -1LL;
uint32_t x339 = 965910540U;
uint16_t x340 = 171U;
int16_t x343 = -7233;
volatile int64_t t80 = -31813018104LL;
uint64_t x345 = 6320350862946778495LLU;
uint32_t x348 = 62U;
int16_t x358 = 0;
volatile int32_t t83 = 1;
static int64_t x366 = 28818051LL;
uint64_t x370 = 430LLU;
volatile uint64_t t85 = 635411810559736609LLU;
volatile uint64_t x378 = 16388127259950701LLU;
volatile uint64_t t87 = 466628808974LLU;
int32_t x384 = INT32_MAX;
static uint16_t x385 = 1341U;
static int16_t x386 = INT16_MIN;
uint8_t x387 = 17U;
volatile uint64_t t91 = 384503LLU;
uint32_t x399 = UINT32_MAX;
volatile int8_t x402 = -1;
int32_t t93 = -813671757;
static volatile int64_t x406 = INT64_MIN;
int16_t x417 = INT16_MIN;
uint8_t x419 = 3U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 889830191107LLU;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 9197LLU;

	t0 = ((x1%(x2+x3))|x4);

	if (t0 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	static int32_t x6 = INT32_MAX;
	int16_t x7 = INT16_MIN;
	int16_t x8 = 9472;
	volatile int32_t t1 = 0;

	t1 = ((x5%(x6+x7))|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	int64_t x10 = 102549LL;
	static uint8_t x11 = 3U;
	static volatile int64_t x12 = -54287928335959946LL;
	static int64_t t2 = 15590613186LL;

	t2 = ((x9%(x10+x11))|x12);

	if (t2 != -54287928335959945LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int64_t x14 = INT64_MAX;
	int8_t x15 = INT8_MIN;
	volatile int64_t t3 = -5LL;

	t3 = ((x13%(x14+x15))|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	int64_t x19 = 70147308804663753LL;
	uint32_t x20 = UINT32_MAX;

	t4 = ((x17%(x18+x19))|x20);

	if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int8_t x23 = -6;
	int8_t x24 = -1;
	int32_t t5 = 15;

	t5 = ((x21%(x22+x23))|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int16_t x31 = -1;
	int32_t x32 = -877819;

	t6 = ((x29%(x30+x31))|x32);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	volatile uint8_t x34 = UINT8_MAX;
	volatile uint64_t x35 = 7LLU;
	uint32_t x36 = 1368U;
	volatile uint64_t t7 = 17LLU;

	t7 = ((x33%(x34+x35))|x36);

	if (t7 != 1535LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = 1;
	int16_t x39 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t8 = 192102276;

	t8 = ((x37%(x38+x39))|x40);

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x42 = UINT64_MAX;
	uint8_t x43 = 14U;
	static uint32_t x44 = UINT32_MAX;
	volatile uint64_t t9 = 2452927169966979255LLU;

	t9 = ((x41%(x42+x43))|x44);

	if (t9 != 4294967295LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;
	volatile int16_t x48 = INT16_MAX;
	static int64_t t10 = 126535645074892788LL;

	t10 = ((x45%(x46+x47))|x48);

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	volatile uint32_t x50 = 1001907U;
	volatile uint16_t x51 = 285U;
	static volatile int32_t x52 = INT32_MAX;
	uint32_t t11 = 56036U;

	t11 = ((x49%(x50+x51))|x52);

	if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	volatile uint64_t x55 = 545366468891451LLU;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = ((x53%(x54+x55))|x56);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 96461401107806LLU;
	static int32_t x58 = -246777685;
	uint64_t x59 = 61254789LLU;
	int32_t x60 = INT32_MIN;
	static uint64_t t13 = 2316LLU;

	t13 = ((x57%(x58+x59))|x60);

	if (t13 != 18446744072292674910LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x61 = UINT64_MAX;
	int32_t x63 = 4817;
	uint64_t t14 = 3257275395692LLU;

	t14 = ((x61%(x62+x63))|x64);

	if (t14 != 10474983LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	static uint32_t x70 = 500U;
	int64_t x71 = 2097833248LL;
	volatile int64_t t15 = 231241LL;

	t15 = ((x69%(x70+x71))|x72);

	if (t15 != 49649919LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 32U;
	int32_t x74 = INT32_MIN;
	int64_t x75 = -14745LL;
	uint16_t x76 = 77U;
	volatile int64_t t16 = -729070169663951LL;

	t16 = ((x73%(x74+x75))|x76);

	if (t16 != 109LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -1LL;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = UINT16_MAX;
	volatile int64_t t17 = 12131692109977LL;

	t17 = ((x77%(x78+x79))|x80);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = -267203922;
	uint64_t x82 = 217LLU;
	uint16_t x83 = UINT16_MAX;
	static volatile int32_t x84 = -3;
	uint64_t t18 = UINT64_MAX;

	t18 = ((x81%(x82+x83))|x84);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x86 = UINT32_MAX;
	int32_t x87 = -1;
	volatile int8_t x88 = 1;

	t19 = ((x85%(x86+x87))|x88);

	if (t19 != 4294934529U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = -1;
	int16_t x91 = 11052;
	volatile uint16_t x92 = 17442U;
	volatile uint64_t t20 = 4195552822572592LLU;

	t20 = ((x89%(x90+x91))|x92);

	if (t20 != 24447LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	int32_t x94 = -11785204;
	uint64_t x95 = 9106LLU;
	uint16_t x96 = UINT16_MAX;
	static volatile uint64_t t21 = 6032LLU;

	t21 = ((x93%(x94+x95))|x96);

	if (t21 != 65535LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = INT64_MIN;
	int16_t x99 = -1;
	int64_t t22 = 59LL;

	t22 = ((x97%(x98+x99))|x100);

	if (t22 != -123LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x102 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	static int8_t x104 = -1;
	volatile int64_t t23 = -4144350127415LL;

	t23 = ((x101%(x102+x103))|x104);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = INT64_MIN;
	int32_t x107 = INT32_MAX;
	int8_t x108 = INT8_MIN;
	uint64_t t24 = 1214886146LLU;

	t24 = ((x105%(x106+x107))|x108);

	if (t24 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = -25;
	uint8_t x110 = 18U;
	volatile uint8_t x111 = UINT8_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t25 = 8163187;

	t25 = ((x109%(x110+x111))|x112);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 23954908;
	uint64_t x114 = UINT64_MAX;
	uint64_t x115 = UINT64_MAX;
	uint64_t x116 = UINT64_MAX;
	uint64_t t26 = UINT64_MAX;

	t26 = ((x113%(x114+x115))|x116);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = 11;
	static volatile int32_t x118 = INT32_MIN;
	uint8_t x119 = 103U;
	int16_t x120 = -60;
	volatile int32_t t27 = 0;

	t27 = ((x117%(x118+x119))|x120);

	if (t27 != -49) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = UINT16_MAX;
	static int16_t x123 = -3715;
	volatile uint32_t t28 = 11U;

	t28 = ((x121%(x122+x123))|x124);

	if (t28 != 32767U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MAX;
	static int8_t x128 = INT8_MAX;
	volatile uint64_t t29 = 2409840972133LLU;

	t29 = ((x125%(x126+x127))|x128);

	if (t29 != 28380691942285055LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = 6829;
	uint8_t x131 = UINT8_MAX;
	static int8_t x132 = -32;
	volatile int32_t t30 = 1;

	t30 = ((x129%(x130+x131))|x132);

	if (t30 != -20) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x134 = INT16_MAX;
	int8_t x135 = INT8_MAX;
	uint8_t x136 = 4U;
	static int32_t t31 = 7403122;

	t31 = ((x133%(x134+x135))|x136);

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MAX;
	int32_t x138 = INT32_MAX;
	int8_t x140 = INT8_MIN;
	int64_t t32 = -794LL;

	t32 = ((x137%(x138+x139))|x140);

	if (t32 != -127LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x141 = 343U;
	uint32_t x142 = 29U;
	static int64_t x143 = 21563019469426LL;
	int8_t x144 = INT8_MIN;

	t33 = ((x141%(x142+x143))|x144);

	if (t33 != -41LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = 3610LL;
	int8_t x146 = INT8_MAX;
	uint16_t x147 = 57U;
	static int32_t x148 = INT32_MIN;

	t34 = ((x145%(x146+x147))|x148);

	if (t34 != -2147483534LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	uint16_t x151 = UINT16_MAX;
	uint64_t t35 = 13928392886LLU;

	t35 = ((x149%(x150+x151))|x152);

	if (t35 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x155 = -1;
	volatile uint32_t x156 = UINT32_MAX;
	uint64_t t36 = 1984738373624LLU;

	t36 = ((x153%(x154+x155))|x156);

	if (t36 != 4294967295LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x158 = -18;
	int32_t x159 = INT32_MAX;
	int32_t x160 = INT32_MIN;
	static int32_t t37 = 77628;

	t37 = ((x157%(x158+x159))|x160);

	if (t37 != -19) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x161 = 27583U;
	int8_t x163 = INT8_MAX;
	uint32_t x164 = UINT32_MAX;
	uint32_t t38 = UINT32_MAX;

	t38 = ((x161%(x162+x163))|x164);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x166 = 1006U;
	uint64_t x167 = UINT64_MAX;
	volatile uint64_t t39 = 3290395243511LLU;

	t39 = ((x165%(x166+x167))|x168);

	if (t39 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x170 = INT64_MIN;
	uint8_t x171 = UINT8_MAX;
	int64_t x172 = INT64_MAX;
	int64_t t40 = -15LL;

	t40 = ((x169%(x170+x171))|x172);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x173 = INT8_MIN;
	volatile uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MAX;
	int8_t x176 = INT8_MAX;
	uint64_t t41 = 18LLU;

	t41 = ((x173%(x174+x175))|x176);

	if (t41 != 255LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = INT8_MIN;
	uint32_t x178 = 12U;
	uint16_t x179 = 82U;
	int32_t x180 = 440563;

	t42 = ((x177%(x178+x179))|x180);

	if (t42 != 440571U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = INT8_MIN;
	static int64_t x183 = -1LL;
	uint8_t x184 = UINT8_MAX;

	t43 = ((x181%(x182+x183))|x184);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -1;
	volatile uint32_t x186 = 1U;
	uint8_t x187 = 0U;
	int32_t x188 = 897;

	t44 = ((x185%(x186+x187))|x188);

	if (t44 != 897U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x190 = INT8_MIN;
	static volatile uint32_t t45 = 10608065U;

	t45 = ((x189%(x190+x191))|x192);

	if (t45 != 2204U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = INT32_MIN;
	int16_t x195 = 183;
	static int32_t x196 = -1;
	volatile int32_t t46 = -26836;

	t46 = ((x193%(x194+x195))|x196);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 192U;
	uint8_t x198 = 11U;
	int32_t x199 = INT32_MIN;
	uint64_t x200 = 439414LLU;
	volatile uint64_t t47 = 0LLU;

	t47 = ((x197%(x198+x199))|x200);

	if (t47 != 439542LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x201 = INT16_MAX;
	uint16_t x202 = 13U;
	volatile int64_t x203 = 24947834LL;
	int32_t x204 = INT32_MIN;

	t48 = ((x201%(x202+x203))|x204);

	if (t48 != -2147450881LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x205 = 429538453LLU;
	int64_t x206 = 305627067420957285LL;
	static int8_t x208 = -1;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = ((x205%(x206+x207))|x208);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = 67U;
	int64_t x210 = INT64_MAX;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MIN;
	int64_t t50 = -158003460092021LL;

	t50 = ((x209%(x210+x211))|x212);

	if (t50 != -2147483581LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -1;
	static volatile int64_t x218 = INT64_MAX;
	int64_t x219 = INT64_MIN;
	volatile uint16_t x220 = UINT16_MAX;
	int64_t t51 = -125098394518LL;

	t51 = ((x217%(x218+x219))|x220);

	if (t51 != 65535LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = UINT16_MAX;
	int16_t x222 = INT16_MAX;
	int64_t x223 = -1LL;
	int32_t x224 = 8;
	int64_t t52 = -426698346LL;

	t52 = ((x221%(x222+x223))|x224);

	if (t52 != 11LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x226 = 1U;
	int16_t x227 = 0;
	int8_t x228 = INT8_MIN;
	volatile int32_t t53 = 0;

	t53 = ((x225%(x226+x227))|x228);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = 6;
	int64_t x231 = INT64_MIN;

	t54 = ((x229%(x230+x231))|x232);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x234 = INT64_MIN;
	uint16_t x235 = 3U;

	t55 = ((x233%(x234+x235))|x236);

	if (t55 != 15LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = 1;
	int16_t x238 = INT16_MIN;
	static uint64_t x239 = 444638290267860LLU;
	int64_t x240 = -1LL;

	t56 = ((x237%(x238+x239))|x240);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MAX;
	volatile int16_t x244 = INT16_MAX;

	t57 = ((x241%(x242+x243))|x244);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = -1;
	volatile int16_t x247 = -483;
	int64_t t58 = -3963116157474LL;

	t58 = ((x245%(x246+x247))|x248);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x250 = INT8_MIN;
	volatile int8_t x252 = INT8_MAX;

	t59 = ((x249%(x250+x251))|x252);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x253 = 7655;
	static int8_t x254 = INT8_MIN;
	int32_t x256 = -1;
	int32_t t60 = -7;

	t60 = ((x253%(x254+x255))|x256);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = -1;
	int8_t x260 = INT8_MAX;

	t61 = ((x257%(x258+x259))|x260);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = 2U;
	int8_t x262 = -1;
	static uint8_t x263 = UINT8_MAX;
	static int64_t x264 = 2LL;
	static volatile int64_t t62 = -11126LL;

	t62 = ((x261%(x262+x263))|x264);

	if (t62 != 2LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MAX;
	uint64_t x271 = 14002942170923LLU;
	int16_t x272 = INT16_MAX;
	static volatile uint64_t t63 = 4518625164091784LLU;

	t63 = ((x269%(x270+x271))|x272);

	if (t63 != 10170505166847LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = -1;
	int32_t x275 = -4782;
	int8_t x276 = INT8_MIN;
	volatile int32_t t64 = -4;

	t64 = ((x273%(x274+x275))|x276);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x278 = -1;
	static uint8_t x279 = 0U;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = ((x277%(x278+x279))|x280);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x281 = 453402043122817LLU;
	int8_t x282 = INT8_MAX;
	volatile int64_t x283 = -144946540147996533LL;
	uint32_t x284 = UINT32_MAX;
	uint64_t t66 = 25077LLU;

	t66 = ((x281%(x282+x283))|x284);

	if (t66 != 453402517569535LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	int64_t x287 = INT64_MIN;
	int64_t t67 = 12057756LL;

	t67 = ((x285%(x286+x287))|x288);

	if (t67 != -124LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MAX;
	int32_t x291 = 440761;
	volatile int64_t x292 = INT64_MIN;
	volatile int64_t t68 = -13055863942LL;

	t68 = ((x289%(x290+x291))|x292);

	if (t68 != -9223372036854707473LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	static int8_t x294 = -25;
	int8_t x295 = INT8_MIN;
	int16_t x296 = -14862;
	int32_t t69 = -31515;

	t69 = ((x293%(x294+x295))|x296);

	if (t69 != -14) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = INT16_MIN;
	uint32_t x298 = 1U;
	int8_t x299 = INT8_MIN;
	uint16_t x300 = UINT16_MAX;
	static uint32_t t70 = UINT32_MAX;

	t70 = ((x297%(x298+x299))|x300);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x301 = INT64_MAX;
	int32_t x302 = -108866;
	int8_t x304 = -1;

	t71 = ((x301%(x302+x303))|x304);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -1;
	int32_t x306 = 56950372;
	static int32_t x307 = INT32_MIN;
	static volatile int16_t x308 = -3750;
	static volatile int32_t t72 = 807294590;

	t72 = ((x305%(x306+x307))|x308);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MIN;
	static uint32_t x310 = UINT32_MAX;
	int8_t x311 = -3;

	t73 = ((x309%(x310+x311))|x312);

	if (t73 != 4294967168U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MAX;
	static volatile int64_t x314 = INT64_MIN;
	int16_t x316 = -1;
	int64_t t74 = -79826202069732LL;

	t74 = ((x313%(x314+x315))|x316);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MIN;

	t75 = ((x317%(x318+x319))|x320);

	if (t75 != 9223372039002259324LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x325 = -137586;
	int32_t x326 = 375028;
	uint8_t x327 = 97U;
	volatile int32_t x328 = 166;
	int32_t t76 = -168097;

	t76 = ((x325%(x326+x327))|x328);

	if (t76 != -137554) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = -7530;
	static volatile int32_t x331 = -1;
	int8_t x332 = INT8_MIN;
	volatile int32_t t77 = -27783910;

	t77 = ((x329%(x330+x331))|x332);

	if (t77 != -84) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = 2748683105411768701LLU;
	static int8_t x334 = INT8_MIN;
	static int64_t x336 = INT64_MIN;
	uint64_t t78 = 2548800105LLU;

	t78 = ((x333%(x334+x335))|x336);

	if (t78 != 11972055142266544509LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = INT32_MIN;
	int64_t x338 = -8970481949941637LL;
	int64_t t79 = -23LL;

	t79 = ((x337%(x338+x339))|x340);

	if (t79 != -2147483477LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	volatile int64_t x342 = 20LL;
	volatile int32_t x344 = INT32_MIN;

	t80 = ((x341%(x342+x343))|x344);

	if (t80 != -2147483521LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x346 = -1;
	int64_t x347 = -1LL;
	uint64_t t81 = 15489LLU;

	t81 = ((x345%(x346+x347))|x348);

	if (t81 != 6320350862946778495LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x353 = UINT64_MAX;
	static volatile uint32_t x354 = UINT32_MAX;
	uint16_t x355 = UINT16_MAX;
	volatile int16_t x356 = -1;
	uint64_t t82 = UINT64_MAX;

	t82 = ((x353%(x354+x355))|x356);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x357 = UINT8_MAX;
	int8_t x359 = -5;
	int8_t x360 = 0;

	t83 = ((x357%(x358+x359))|x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x365 = UINT8_MAX;
	static int8_t x367 = INT8_MAX;
	int64_t x368 = INT64_MIN;
	int64_t t84 = -39529LL;

	t84 = ((x365%(x366+x367))|x368);

	if (t84 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x369 = -1LL;
	int16_t x371 = INT16_MIN;
	int32_t x372 = INT32_MIN;

	t85 = ((x369%(x370+x371))|x372);

	if (t85 != 18446744071562100305LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x373 = UINT16_MAX;
	volatile uint8_t x374 = 0U;
	static volatile int16_t x375 = INT16_MAX;
	static uint64_t x376 = 599572795LLU;
	volatile uint64_t t86 = 38113178914891911LLU;

	t86 = ((x373%(x374+x375))|x376);

	if (t86 != 599572795LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x377 = 334469LLU;
	volatile int32_t x379 = INT32_MIN;
	int64_t x380 = -1117956249LL;

	t87 = ((x377%(x378+x379))|x380);

	if (t87 != 18446744072591597543LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = -955944030413LL;
	static int32_t x382 = -1;
	volatile uint64_t x383 = UINT64_MAX;
	volatile uint64_t t88 = 29371856943LLU;

	t88 = ((x381%(x382+x383))|x384);

	if (t88 != 18446743118079328255LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x388 = 18;
	volatile int32_t t89 = 248600;

	t89 = ((x385%(x386+x387))|x388);

	if (t89 != 1343) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x389 = UINT16_MAX;
	uint8_t x390 = 0U;
	int32_t x391 = 1;
	uint64_t x392 = 757434955878729LLU;
	uint64_t t90 = 5990484017LLU;

	t90 = ((x389%(x390+x391))|x392);

	if (t90 != 757434955878729LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x393 = 1974U;
	volatile int32_t x394 = INT32_MIN;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = INT16_MIN;

	t91 = ((x393%(x394+x395))|x396);

	if (t91 != 18446744073709520822LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = 12;
	volatile int8_t x398 = -1;
	static volatile int8_t x400 = INT8_MIN;
	uint32_t t92 = 65556387U;

	t92 = ((x397%(x398+x399))|x400);

	if (t92 != 4294967180U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x401 = 1827U;
	uint16_t x403 = 32428U;
	int16_t x404 = 46;

	t93 = ((x401%(x402+x403))|x404);

	if (t93 != 1839) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x405 = INT32_MIN;
	uint8_t x407 = 69U;
	static uint8_t x408 = 1U;
	int64_t t94 = 1872191LL;

	t94 = ((x405%(x406+x407))|x408);

	if (t94 != -2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x409 = 8U;
	uint8_t x410 = UINT8_MAX;
	static int32_t x411 = 25727110;
	uint16_t x412 = 2U;
	volatile int32_t t95 = 28517006;

	t95 = ((x409%(x410+x411))|x412);

	if (t95 != 10) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = -1;
	static uint8_t x414 = 28U;
	uint16_t x415 = 85U;
	uint64_t x416 = UINT64_MAX;
	uint64_t t96 = UINT64_MAX;

	t96 = ((x413%(x414+x415))|x416);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x418 = INT32_MIN;
	int64_t x420 = INT64_MAX;
	int64_t t97 = 117317580LL;

	t97 = ((x417%(x418+x419))|x420);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MAX;
	static uint64_t x422 = 898LLU;
	uint64_t x423 = UINT64_MAX;
	static uint64_t x424 = 11790147LLU;
	uint64_t t98 = 5789907339279LLU;

	t98 = ((x421%(x422+x423))|x424);

	if (t98 != 11790207LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = INT16_MAX;
	int16_t x426 = -195;
	int16_t x427 = -1;
	volatile uint16_t x428 = 15666U;
	int32_t t99 = 272539;

	t99 = ((x425%(x426+x427))|x428);

	if (t99 != 15667) { NG(); } else { ; }
	
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

