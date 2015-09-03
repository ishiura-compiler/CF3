#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = -3;
static volatile int64_t x11 = INT64_MAX;
volatile int64_t t2 = -4068148864052874599LL;
int32_t t3 = 647955;
int16_t x18 = 0;
static int32_t x22 = INT32_MAX;
uint32_t x24 = UINT32_MAX;
uint32_t x52 = UINT32_MAX;
volatile int8_t x55 = INT8_MIN;
int64_t t12 = 4373938147559967361LL;
uint16_t x59 = 0U;
uint8_t x60 = 11U;
static int8_t x62 = -22;
uint8_t x65 = 28U;
static int64_t x69 = -836112240LL;
volatile int32_t x70 = INT32_MAX;
int64_t t16 = -11314250229LL;
static uint64_t x73 = 1184LLU;
static uint64_t x75 = UINT64_MAX;
volatile uint16_t x76 = 7U;
volatile int32_t x82 = INT32_MIN;
int16_t x83 = INT16_MIN;
static int16_t x90 = 0;
int16_t x92 = -1;
uint32_t t21 = 49U;
volatile int32_t t22 = -178;
static int16_t x104 = INT16_MIN;
int64_t x107 = INT64_MIN;
uint32_t x108 = 1296993910U;
volatile int8_t x113 = -1;
volatile uint32_t t27 = 559U;
int16_t x118 = 30;
uint64_t x124 = UINT64_MAX;
int16_t x127 = -5;
volatile uint64_t t30 = 13LLU;
volatile int64_t x135 = 17090496141LL;
int32_t x136 = -1;
volatile uint64_t x144 = 293590167997764LLU;
uint64_t x182 = 30857422157LLU;
int32_t x187 = INT32_MIN;
uint64_t t42 = 77874LLU;
static int32_t x196 = -1;
uint32_t x197 = UINT32_MAX;
static int8_t x198 = INT8_MAX;
volatile int8_t x200 = 2;
volatile int64_t t45 = -1LL;
uint32_t x205 = 3304151U;
int64_t t46 = -751LL;
int16_t x213 = INT16_MIN;
int32_t x216 = 261872;
static int8_t x218 = 16;
volatile uint32_t x222 = 1U;
static volatile int32_t x223 = -954;
volatile int8_t x229 = INT8_MIN;
int16_t x236 = -1;
uint64_t x238 = 20208575613782LLU;
uint64_t t53 = 47188642LLU;
uint32_t x250 = UINT32_MAX;
volatile uint32_t x257 = UINT32_MAX;
uint32_t t56 = 1U;
volatile int8_t x262 = -1;
static int64_t x263 = INT64_MIN;
static int64_t t57 = -355650513661098432LL;
int32_t t59 = 3;
static int8_t x274 = -18;
int32_t x275 = 0;
volatile int64_t x284 = -1LL;
volatile int16_t x292 = -1;
volatile uint8_t x293 = 0U;
uint64_t t68 = 987155732207930814LLU;
static int32_t x312 = 181978;
int32_t t71 = -7287;
static volatile uint8_t x323 = 64U;
uint64_t x328 = 73577123LLU;
uint16_t x329 = UINT16_MAX;
int8_t x330 = 1;
int32_t x352 = INT32_MAX;
uint32_t x356 = 493102445U;
int32_t x359 = -3165;
uint64_t t82 = 2626551921203LLU;
uint16_t x367 = 103U;
int64_t x371 = -1781503LL;
uint64_t x375 = 2998175LLU;
int64_t x381 = -1LL;
int32_t x390 = 3162105;
uint8_t x395 = 12U;
int8_t x401 = INT8_MIN;
volatile uint8_t x404 = 1U;
uint32_t x406 = UINT32_MAX;
static volatile int32_t x412 = INT32_MIN;
volatile int8_t x416 = -1;
volatile int64_t t97 = 52080177801LL;
int64_t t98 = 43920264680695LL;
volatile uint16_t x429 = 883U;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MAX;
	static int64_t x3 = INT64_MIN;
	int64_t t0 = 339660577100302LL;

	t0 = ((x1/(x2^x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	int8_t x7 = 2;
	volatile int64_t x8 = INT64_MAX;
	static int64_t t1 = -965512312392100249LL;

	t1 = ((x5/(x6^x7))&x8);

	if (t1 != 260LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int16_t x10 = INT16_MAX;
	int32_t x12 = INT32_MIN;

	t2 = ((x9/(x10^x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int32_t x14 = -5906767;
	int32_t x15 = -1;
	int16_t x16 = INT16_MIN;

	t3 = ((x13/(x14^x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	int64_t x19 = -2980549937088898498LL;
	static volatile int32_t x20 = INT32_MIN;
	volatile int64_t t4 = 754018579785062338LL;

	t4 = ((x17/(x18^x19))&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	uint32_t x23 = UINT32_MAX;
	volatile uint32_t t5 = 412870580U;

	t5 = ((x21/(x22^x23))&x24);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int32_t x26 = INT32_MIN;
	static int64_t x27 = -245574276808LL;
	int16_t x28 = INT16_MIN;
	int64_t t6 = 0LL;

	t6 = ((x25/(x26^x27))&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = 12;
	int8_t x34 = -1;
	volatile int32_t x35 = 108359;
	int8_t x36 = INT8_MAX;
	int32_t t7 = -57;

	t7 = ((x33/(x34^x35))&x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = 109989U;
	uint64_t x38 = UINT64_MAX;
	int64_t x39 = INT64_MIN;
	volatile int16_t x40 = INT16_MIN;
	uint64_t t8 = 33367434923LLU;

	t8 = ((x37/(x38^x39))&x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = 9925583802878LLU;
	int16_t x42 = INT16_MIN;
	uint64_t x43 = 5410642656749342LLU;
	uint8_t x44 = 17U;
	static uint64_t t9 = 83282264943289LLU;

	t9 = ((x41/(x42^x43))&x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x45 = 74U;
	static uint16_t x46 = 6U;
	int8_t x47 = 0;
	uint8_t x48 = 3U;
	volatile uint32_t t10 = 45U;

	t10 = ((x45/(x46^x47))&x48);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	uint8_t x50 = UINT8_MAX;
	int8_t x51 = INT8_MIN;
	volatile uint32_t t11 = 56350U;

	t11 = ((x49/(x50^x51))&x52);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = -1LL;
	int16_t x54 = INT16_MIN;
	int8_t x56 = INT8_MAX;

	t12 = ((x53/(x54^x55))&x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -94488864;
	volatile int64_t x58 = INT64_MIN;
	int64_t t13 = 109282927361102LL;

	t13 = ((x57/(x58^x59))&x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = 2;
	int16_t x63 = 194;
	volatile int8_t x64 = 1;
	volatile int32_t t14 = 1;

	t14 = ((x61/(x62^x63))&x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x66 = UINT16_MAX;
	int32_t x67 = 0;
	int16_t x68 = 46;
	int32_t t15 = 59;

	t15 = ((x65/(x66^x67))&x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x71 = INT8_MIN;
	int16_t x72 = 15;

	t16 = ((x69/(x70^x71))&x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x74 = 58U;
	volatile uint64_t t17 = 51013011LLU;

	t17 = ((x73/(x74^x75))&x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MIN;
	uint64_t x78 = 5744LLU;
	static volatile int64_t x79 = INT64_MAX;
	int32_t x80 = -22;
	uint64_t t18 = 2131040103886LLU;

	t18 = ((x77/(x78^x79))&x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MAX;
	static uint8_t x84 = 34U;
	int32_t t19 = -18275959;

	t19 = ((x81/(x82^x83))&x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x85 = UINT8_MAX;
	int32_t x86 = -114688;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 193U;
	uint32_t t20 = 483371U;

	t20 = ((x85/(x86^x87))&x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	uint16_t x91 = 2U;

	t21 = ((x89/(x90^x91))&x92);

	if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -46;
	static int16_t x94 = -1;
	uint8_t x95 = 0U;
	volatile int8_t x96 = 2;

	t22 = ((x93/(x94^x95))&x96);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -29641;
	uint32_t x98 = 485448U;
	volatile int16_t x99 = INT16_MIN;
	static int16_t x100 = INT16_MAX;
	static volatile uint32_t t23 = 255804U;

	t23 = ((x97/(x98^x99))&x100);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = -54LL;
	int16_t x102 = INT16_MIN;
	volatile int64_t x103 = -1LL;
	volatile int64_t t24 = -248364049653LL;

	t24 = ((x101/(x102^x103))&x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 916579703449LLU;
	volatile uint64_t t25 = 2015772801LLU;

	t25 = ((x105/(x106^x107))&x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	uint16_t x110 = 253U;
	volatile int32_t x111 = INT32_MIN;
	static int32_t x112 = INT32_MIN;
	int32_t t26 = 117577;

	t26 = ((x109/(x110^x111))&x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x114 = INT16_MAX;
	uint32_t x115 = 225U;
	int32_t x116 = INT32_MIN;

	t27 = ((x113/(x114^x115))&x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x117 = 6U;
	static int64_t x119 = -58225LL;
	uint32_t x120 = 884956190U;
	volatile int64_t t28 = -14882073533LL;

	t28 = ((x117/(x118^x119))&x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = -1;
	int64_t x123 = INT64_MAX;
	volatile uint64_t t29 = 1237586LLU;

	t29 = ((x121/(x122^x123))&x124);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 202492735813831LLU;
	uint64_t x126 = 258010LLU;
	volatile uint64_t x128 = 27LLU;

	t30 = ((x125/(x126^x127))&x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = INT64_MIN;
	static int8_t x130 = INT8_MIN;
	int8_t x131 = -1;
	int16_t x132 = -1491;
	int64_t t31 = 224810999282LL;

	t31 = ((x129/(x130^x131))&x132);

	if (t31 != -72624976668149203LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = 5;
	volatile int64_t x134 = INT64_MAX;
	volatile int64_t t32 = 31011266115812LL;

	t32 = ((x133/(x134^x135))&x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 0U;
	int64_t x138 = -1LL;
	uint16_t x139 = 1716U;
	static int32_t x140 = INT32_MAX;
	int64_t t33 = -18855806678LL;

	t33 = ((x137/(x138^x139))&x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	int64_t x142 = INT64_MAX;
	int16_t x143 = INT16_MAX;
	uint64_t t34 = 16724503872036LLU;

	t34 = ((x141/(x142^x143))&x144);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = 1;
	static int64_t x150 = 4LL;
	uint8_t x151 = 116U;
	static uint64_t x152 = 33771238321180718LLU;
	uint64_t t35 = 157236348939994994LLU;

	t35 = ((x149/(x150^x151))&x152);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 1LLU;
	static int16_t x154 = INT16_MIN;
	int8_t x155 = 1;
	static volatile int16_t x156 = INT16_MAX;
	volatile uint64_t t36 = 13569566307LLU;

	t36 = ((x153/(x154^x155))&x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x157 = -1;
	uint32_t x158 = 1440419831U;
	uint16_t x159 = 2849U;
	static int8_t x160 = INT8_MIN;
	static volatile uint32_t t37 = 61664599U;

	t37 = ((x157/(x158^x159))&x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x161 = -1;
	int8_t x162 = INT8_MIN;
	uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MAX;
	volatile uint64_t t38 = 12467962672LLU;

	t38 = ((x161/(x162^x163))&x164);

	if (t38 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 2369U;
	uint64_t x170 = UINT64_MAX;
	volatile int8_t x171 = -10;
	int64_t x172 = -17938129476LL;
	uint64_t t39 = 1023735604427538599LLU;

	t39 = ((x169/(x170^x171))&x172);

	if (t39 != 260LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = INT32_MIN;
	uint32_t x178 = 7751U;
	volatile int16_t x179 = INT16_MAX;
	int64_t x180 = INT64_MIN;
	volatile int64_t t40 = 8815873221LL;

	t40 = ((x177/(x178^x179))&x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x181 = UINT8_MAX;
	static int8_t x183 = INT8_MAX;
	static int64_t x184 = INT64_MAX;
	uint64_t t41 = 3LLU;

	t41 = ((x181/(x182^x183))&x184);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = 1961346548LLU;
	volatile uint16_t x186 = UINT16_MAX;
	int64_t x188 = -2703538591LL;

	t42 = ((x185/(x186^x187))&x188);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = 0;
	int64_t x194 = 1655633694157540LL;
	uint64_t x195 = 19615760062974LLU;
	volatile uint64_t t43 = 38231541LLU;

	t43 = ((x193/(x194^x195))&x196);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x199 = INT32_MIN;
	volatile uint32_t t44 = 26U;

	t44 = ((x197/(x198^x199))&x200);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x201 = INT64_MIN;
	volatile int32_t x202 = -1;
	int32_t x203 = 14332;
	static int16_t x204 = INT16_MAX;

	t45 = ((x201/(x202^x203))&x204);

	if (t45 != 7425LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x206 = INT64_MAX;
	volatile int16_t x207 = INT16_MIN;
	volatile uint8_t x208 = UINT8_MAX;

	t46 = ((x205/(x206^x207))&x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x214 = -3;
	volatile int8_t x215 = INT8_MIN;
	int32_t t47 = -2751406;

	t47 = ((x213/(x214^x215))&x216);

	if (t47 != 261872) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MAX;
	static volatile int32_t x219 = -1525;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t48 = -158269;

	t48 = ((x217/(x218^x219))&x220);

	if (t48 != 65515) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	int64_t t49 = -1524614205LL;

	t49 = ((x221/(x222^x223))&x224);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x225 = INT32_MAX;
	int32_t x226 = INT32_MIN;
	int32_t x227 = 1;
	int8_t x228 = INT8_MIN;
	volatile int32_t t50 = 226879176;

	t50 = ((x225/(x226^x227))&x228);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x230 = 3U;
	int64_t x231 = 78262683721260LL;
	int16_t x232 = INT16_MAX;
	volatile int64_t t51 = 4222036575958LL;

	t51 = ((x229/(x230^x231))&x232);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MAX;
	int16_t x234 = 0;
	int64_t x235 = -52065407360136675LL;
	volatile int64_t t52 = -227174LL;

	t52 = ((x233/(x234^x235))&x236);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x237 = INT8_MIN;
	int16_t x239 = INT16_MAX;
	int16_t x240 = INT16_MAX;

	t53 = ((x237/(x238^x239))&x240);

	if (t53 != 28081LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x245 = INT8_MIN;
	static uint16_t x246 = UINT16_MAX;
	volatile uint8_t x247 = UINT8_MAX;
	uint64_t x248 = 10202LLU;
	volatile uint64_t t54 = 399697589LLU;

	t54 = ((x245/(x246^x247))&x248);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -8783435;
	int8_t x251 = 5;
	static uint64_t x252 = UINT64_MAX;
	volatile uint64_t t55 = 48563390LLU;

	t55 = ((x249/(x250^x251))&x252);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x258 = UINT8_MAX;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;

	t56 = ((x257/(x258^x259))&x260);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x261 = -1;
	volatile int64_t x264 = INT64_MAX;

	t57 = ((x261/(x262^x263))&x264);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = -63;
	uint64_t x266 = 5614071LLU;
	static volatile int8_t x267 = 0;
	int64_t x268 = -85936697LL;
	static uint64_t t58 = 7972094681LLU;

	t58 = ((x265/(x266^x267))&x268);

	if (t58 != 3285788426435LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = -1;
	static int16_t x270 = INT16_MIN;
	int8_t x271 = 0;
	volatile int8_t x272 = -1;

	t59 = ((x269/(x270^x271))&x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x273 = INT32_MIN;
	static uint64_t x276 = UINT64_MAX;
	volatile uint64_t t60 = 178116011631288149LLU;

	t60 = ((x273/(x274^x275))&x276);

	if (t60 != 119304647LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = 615366U;
	uint64_t x278 = 3400479094LLU;
	int16_t x279 = -4;
	int64_t x280 = -869LL;
	uint64_t t61 = 476995350LLU;

	t61 = ((x277/(x278^x279))&x280);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x281 = 378267076681444LLU;
	uint64_t x282 = 34608414495353LLU;
	volatile int32_t x283 = -1;
	uint64_t t62 = 428277LLU;

	t62 = ((x281/(x282^x283))&x284);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = -1LL;
	static int16_t x286 = INT16_MAX;
	int8_t x287 = INT8_MIN;
	int8_t x288 = -1;
	static int64_t t63 = 28539LL;

	t63 = ((x285/(x286^x287))&x288);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = 2U;
	volatile uint32_t x290 = 102402U;
	uint16_t x291 = UINT16_MAX;
	volatile uint32_t t64 = 2008902U;

	t64 = ((x289/(x290^x291))&x292);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x294 = -1;
	int8_t x295 = 1;
	volatile uint64_t x296 = 112689392098206LLU;
	volatile uint64_t t65 = 113834140049800887LLU;

	t65 = ((x293/(x294^x295))&x296);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x297 = INT32_MIN;
	int64_t x298 = -1LL;
	volatile int64_t x299 = -135417370LL;
	int64_t x300 = -1LL;
	static volatile int64_t t66 = -24313LL;

	t66 = ((x297/(x298^x299))&x300);

	if (t66 != -15LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x301 = 18U;
	int64_t x302 = INT64_MAX;
	volatile uint8_t x303 = UINT8_MAX;
	int8_t x304 = -1;
	volatile int64_t t67 = -7135674630LL;

	t67 = ((x301/(x302^x303))&x304);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x305 = 202659580369359880LLU;
	int8_t x306 = INT8_MIN;
	static int64_t x307 = 19694918220LL;
	static volatile uint8_t x308 = 48U;

	t68 = ((x305/(x306^x307))&x308);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MAX;
	int64_t x310 = -1LL;
	uint16_t x311 = 2U;
	int64_t t69 = -86964LL;

	t69 = ((x309/(x310^x311))&x312);

	if (t69 != 181330LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = 107987458195841LL;
	int64_t x315 = INT64_MAX;
	uint64_t x316 = 29430270639LLU;
	uint64_t t70 = 3831LLU;

	t70 = ((x313/(x314^x315))&x316);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x317 = 993873;
	uint16_t x318 = 16U;
	static uint8_t x319 = 1U;
	uint16_t x320 = 45U;

	t71 = ((x317/(x318^x319))&x320);

	if (t71 != 13) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = -18;
	int8_t x322 = -1;
	volatile uint64_t x324 = UINT64_MAX;
	uint64_t t72 = 221502LLU;

	t72 = ((x321/(x322^x323))&x324);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x325 = 119U;
	int8_t x326 = 1;
	uint8_t x327 = 3U;
	static volatile uint64_t t73 = 26192LLU;

	t73 = ((x325/(x326^x327))&x328);

	if (t73 != 35LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x331 = -1;
	int8_t x332 = 1;
	volatile int32_t t74 = 214297387;

	t74 = ((x329/(x330^x331))&x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MAX;
	static uint16_t x335 = UINT16_MAX;
	uint16_t x336 = 349U;
	static volatile int32_t t75 = 121072241;

	t75 = ((x333/(x334^x335))&x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = INT64_MAX;
	static int8_t x338 = 1;
	uint16_t x339 = UINT16_MAX;
	int16_t x340 = -1;
	volatile int64_t t76 = 1974478179LL;

	t76 = ((x337/(x338^x339))&x340);

	if (t76 != 140741783453700LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = 21312641U;
	static int64_t x342 = INT64_MIN;
	int32_t x343 = -151;
	static volatile int16_t x344 = INT16_MAX;
	static int64_t t77 = 0LL;

	t77 = ((x341/(x342^x343))&x344);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = 778;
	int16_t x346 = -6673;
	volatile uint8_t x347 = 75U;
	static uint8_t x348 = 41U;
	volatile int32_t t78 = -22040;

	t78 = ((x345/(x346^x347))&x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x349 = 818195U;
	int16_t x350 = INT16_MAX;
	static volatile int16_t x351 = -1545;
	static uint32_t t79 = 311U;

	t79 = ((x349/(x350^x351))&x352);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = INT64_MIN;
	volatile uint64_t x354 = 29LLU;
	static int64_t x355 = INT64_MAX;
	static uint64_t t80 = 126751LLU;

	t80 = ((x353/(x354^x355))&x356);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x357 = INT8_MAX;
	volatile int64_t x358 = -5606610921LL;
	int8_t x360 = -24;
	volatile int64_t t81 = 4772LL;

	t81 = ((x357/(x358^x359))&x360);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x361 = 6460LL;
	uint64_t x362 = 1769146861454847535LLU;
	uint8_t x363 = UINT8_MAX;
	volatile int64_t x364 = INT64_MAX;

	t82 = ((x361/(x362^x363))&x364);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x365 = 1883134219LLU;
	uint32_t x366 = 7U;
	int8_t x368 = INT8_MIN;
	volatile uint64_t t83 = 56798814214787LLU;

	t83 = ((x365/(x366^x367))&x368);

	if (t83 != 19615872LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x369 = UINT8_MAX;
	uint16_t x370 = UINT16_MAX;
	uint64_t x372 = 4388937278LLU;
	uint64_t t84 = 15LLU;

	t84 = ((x369/(x370^x371))&x372);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MAX;
	static int8_t x376 = INT8_MAX;
	uint64_t t85 = 23908LLU;

	t85 = ((x373/(x374^x375))&x376);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = 398734457165LL;
	int64_t x378 = INT64_MAX;
	int64_t x379 = -1LL;
	volatile int64_t x380 = -88686612969952677LL;
	volatile int64_t t86 = 34312247017629375LL;

	t86 = ((x377/(x378^x379))&x380);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x382 = INT64_MIN;
	volatile int16_t x383 = INT16_MIN;
	static int64_t x384 = 67351570LL;
	volatile int64_t t87 = 694LL;

	t87 = ((x381/(x382^x383))&x384);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = -1;
	uint32_t x386 = UINT32_MAX;
	int64_t x387 = 136913478262393LL;
	static uint64_t x388 = 514373LLU;
	uint64_t t88 = 1LLU;

	t88 = ((x385/(x386^x387))&x388);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = -1;
	uint16_t x391 = 1U;
	int8_t x392 = 1;
	volatile int32_t t89 = 309323;

	t89 = ((x389/(x390^x391))&x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x393 = UINT64_MAX;
	uint32_t x394 = UINT32_MAX;
	static int16_t x396 = -29;
	volatile uint64_t t90 = 3LLU;

	t90 = ((x393/(x394^x395))&x396);

	if (t90 != 4294967297LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x397 = 953LL;
	volatile uint32_t x398 = UINT32_MAX;
	int64_t x399 = 35984011LL;
	int8_t x400 = INT8_MAX;
	volatile int64_t t91 = 66033971875104LL;

	t91 = ((x397/(x398^x399))&x400);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x402 = 99016;
	uint64_t x403 = 882346572399435246LLU;
	uint64_t t92 = 3730791LLU;

	t92 = ((x401/(x402^x403))&x404);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	uint32_t x407 = 245961406U;
	static int8_t x408 = INT8_MAX;
	uint32_t t93 = 25034U;

	t93 = ((x405/(x406^x407))&x408);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x409 = INT64_MAX;
	int16_t x410 = 130;
	volatile uint16_t x411 = 32024U;
	int64_t t94 = -16697LL;

	t94 = ((x409/(x410^x411))&x412);

	if (t94 != 286847980797952LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = 1;
	int32_t x414 = -250386912;
	uint32_t x415 = UINT32_MAX;
	uint32_t t95 = 133848U;

	t95 = ((x413/(x414^x415))&x416);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x417 = INT8_MIN;
	int32_t x418 = 110;
	int32_t x419 = INT32_MAX;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t96 = 13;

	t96 = ((x417/(x418^x419))&x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x421 = INT32_MIN;
	int64_t x422 = -1LL;
	int16_t x423 = 12;
	int16_t x424 = INT16_MIN;

	t97 = ((x421/(x422^x423))&x424);

	if (t97 != 165183488LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = INT16_MAX;
	static volatile int8_t x426 = 1;
	uint8_t x427 = 36U;
	int64_t x428 = 28068271659063LL;

	t98 = ((x425/(x426^x427))&x428);

	if (t98 != 53LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x430 = 8U;
	uint16_t x431 = UINT16_MAX;
	int32_t x432 = INT32_MAX;
	int32_t t99 = 620;

	t99 = ((x429/(x430^x431))&x432);

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

