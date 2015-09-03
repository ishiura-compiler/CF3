#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -4414;
static volatile int32_t t0 = 0;
int16_t x13 = -1602;
int16_t x14 = INT16_MIN;
int8_t x17 = INT8_MAX;
static uint16_t x18 = 27U;
static int32_t t4 = 0;
int64_t x21 = INT64_MAX;
int32_t x22 = INT32_MAX;
static volatile int32_t t7 = 1036290;
int16_t x39 = -101;
static int16_t x40 = -24;
volatile int32_t x43 = -12206924;
int64_t x47 = INT64_MIN;
static volatile uint64_t x51 = 1947561386908LLU;
uint8_t x55 = 0U;
int16_t x57 = INT16_MIN;
int32_t x58 = INT32_MIN;
static volatile int32_t t14 = -123904970;
int64_t x71 = -1LL;
int32_t t17 = -472652;
volatile uint8_t x82 = UINT8_MAX;
uint16_t x84 = 9U;
uint16_t x87 = 9U;
static int8_t x95 = -1;
int32_t x97 = 1;
volatile uint16_t x99 = UINT16_MAX;
int32_t t23 = -10700;
int16_t x106 = -3;
uint64_t x108 = UINT64_MAX;
uint32_t x109 = 3U;
int64_t x113 = -1LL;
int8_t x120 = -1;
volatile uint8_t x121 = UINT8_MAX;
static int16_t x122 = INT16_MAX;
volatile int32_t t28 = -24;
int64_t x125 = INT64_MIN;
uint8_t x126 = 1U;
int8_t x128 = INT8_MIN;
int16_t x129 = -16;
int16_t x131 = INT16_MIN;
static int64_t x141 = INT64_MIN;
int32_t t36 = -515443;
uint16_t x158 = 6U;
uint64_t x163 = 129263LLU;
static int32_t t38 = 19681;
volatile int32_t t40 = 23318554;
uint8_t x175 = UINT8_MAX;
uint16_t x181 = 86U;
int64_t x185 = INT64_MIN;
volatile uint32_t x195 = UINT32_MAX;
static uint64_t x198 = 72370LLU;
static int16_t x202 = INT16_MAX;
int32_t t48 = -115;
static uint32_t x219 = UINT32_MAX;
int32_t t52 = -19061478;
static int32_t t53 = -491296;
uint64_t x239 = 21367LLU;
static int32_t x240 = -502;
static uint32_t x247 = 725488770U;
uint32_t x250 = UINT32_MAX;
static int32_t x254 = -1;
int32_t t59 = -21;
int16_t x263 = 230;
int32_t t61 = -309;
uint32_t x281 = UINT32_MAX;
int16_t x283 = 289;
static volatile int64_t x297 = INT64_MAX;
int8_t x301 = INT8_MIN;
int8_t x307 = 11;
int32_t x322 = INT32_MAX;
volatile uint64_t x324 = 57236675772741LLU;
volatile uint64_t x325 = 203678533519294LLU;
volatile int8_t x327 = INT8_MAX;
int32_t x328 = -1;
static volatile int32_t t76 = 425239;
static int16_t x336 = INT16_MIN;
int32_t x340 = -25;
int64_t x346 = -16631LL;
int32_t x347 = -8;
uint64_t x350 = 5023927015LLU;
volatile int32_t t82 = 830238123;
uint16_t x355 = UINT16_MAX;
int16_t x364 = INT16_MIN;
int16_t x371 = INT16_MAX;
uint16_t x382 = 28U;
int16_t x384 = INT16_MIN;
volatile int64_t x394 = INT64_MAX;
volatile int32_t t91 = -876270013;
static int32_t x401 = -80391334;
volatile uint16_t x402 = UINT16_MAX;
static int16_t x403 = INT16_MIN;
int16_t x404 = INT16_MIN;
int64_t x407 = INT64_MAX;
volatile int32_t t94 = 1;
int32_t x417 = INT32_MIN;
uint8_t x420 = UINT8_MAX;
volatile int64_t x421 = INT64_MIN;
int32_t x427 = INT32_MAX;
uint32_t x428 = UINT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int32_t x2 = -88564;
	int64_t x4 = INT64_MAX;

	t0 = ((x1/x2)<=(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int16_t x6 = INT16_MAX;
	int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 363325845;

	t1 = ((x5/x6)<=(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 40107;
	volatile int32_t x10 = INT32_MIN;
	int64_t x11 = 1515144088LL;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = -141711192;

	t2 = ((x9/x10)<=(x11+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x15 = 0U;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 1818315;

	t3 = ((x13/x14)<=(x15+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = 14780;
	uint64_t x20 = UINT64_MAX;

	t4 = ((x17/x18)<=(x19+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x23 = INT8_MAX;
	int8_t x24 = INT8_MAX;
	int32_t t5 = 2141460;

	t5 = ((x21/x22)<=(x23+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MAX;
	volatile int32_t x28 = INT32_MIN;
	int32_t t6 = -13;

	t6 = ((x25/x26)<=(x27+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 2U;
	int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MIN;
	int32_t x32 = 25849;

	t7 = ((x29/x30)<=(x31+x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 11U;
	static int8_t x34 = INT8_MIN;
	uint16_t x35 = 933U;
	static int64_t x36 = 16085LL;
	static volatile int32_t t8 = 237;

	t8 = ((x33/x34)<=(x35+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int32_t x38 = -1;
	static int32_t t9 = 50;

	t9 = ((x37/x38)<=(x39+x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MAX;
	static uint16_t x42 = 1U;
	int16_t x44 = 5269;
	static volatile int32_t t10 = -219898;

	t10 = ((x41/x42)<=(x43+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint32_t x46 = 6U;
	int16_t x48 = INT16_MAX;
	int32_t t11 = -122;

	t11 = ((x45/x46)<=(x47+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = 63344414U;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = 2334;

	t12 = ((x49/x50)<=(x51+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	uint64_t x54 = 786LLU;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -31;

	t13 = ((x53/x54)<=(x55+x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x59 = INT64_MAX;
	uint8_t x60 = 0U;

	t14 = ((x57/x58)<=(x59+x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 319LLU;
	volatile int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MAX;
	int16_t x64 = -1670;
	volatile int32_t t15 = 1;

	t15 = ((x61/x62)<=(x63+x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	static int8_t x66 = 23;
	volatile int64_t x67 = -1LL;
	int16_t x68 = 0;
	static int32_t t16 = 308004294;

	t16 = ((x65/x66)<=(x67+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MAX;
	uint8_t x70 = 2U;
	volatile int8_t x72 = INT8_MAX;

	t17 = ((x69/x70)<=(x71+x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MAX;
	static int16_t x78 = -30;
	static volatile uint32_t x79 = 1049374229U;
	int16_t x80 = -88;
	static int32_t t18 = 116481;

	t18 = ((x77/x78)<=(x79+x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = INT64_MAX;
	int16_t x83 = INT16_MAX;
	int32_t t19 = 97106;

	t19 = ((x81/x82)<=(x83+x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	volatile uint8_t x86 = UINT8_MAX;
	int64_t x88 = INT64_MIN;
	volatile int32_t t20 = -981;

	t20 = ((x85/x86)<=(x87+x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 1U;
	static uint8_t x94 = 108U;
	int8_t x96 = -1;
	int32_t t21 = 6606615;

	t21 = ((x93/x94)<=(x95+x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x98 = UINT64_MAX;
	volatile int64_t x100 = INT64_MIN;
	volatile int32_t t22 = 16152;

	t22 = ((x97/x98)<=(x99+x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 37U;
	volatile int64_t x102 = INT64_MIN;
	int32_t x103 = -125892;
	int64_t x104 = -41269018641LL;

	t23 = ((x101/x102)<=(x103+x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = INT8_MAX;
	int16_t x107 = INT16_MIN;
	volatile int32_t t24 = 8081684;

	t24 = ((x105/x106)<=(x107+x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = -6296403LL;
	int8_t x111 = -1;
	uint16_t x112 = 1695U;
	static volatile int32_t t25 = -455030432;

	t25 = ((x109/x110)<=(x111+x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x114 = INT8_MIN;
	volatile int64_t x115 = INT64_MIN;
	uint8_t x116 = 54U;
	int32_t t26 = -35683317;

	t26 = ((x113/x114)<=(x115+x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -16;
	uint16_t x118 = 2U;
	static uint64_t x119 = 121LLU;
	static volatile int32_t t27 = -27;

	t27 = ((x117/x118)<=(x119+x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x123 = INT64_MAX;
	int32_t x124 = -1;

	t28 = ((x121/x122)<=(x123+x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x127 = INT8_MAX;
	volatile int32_t t29 = -139419804;

	t29 = ((x125/x126)<=(x127+x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x130 = INT16_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t30 = 2512;

	t30 = ((x129/x130)<=(x131+x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MAX;
	volatile uint16_t x134 = 12092U;
	int32_t x135 = INT32_MIN;
	volatile int8_t x136 = 7;
	static volatile int32_t t31 = -8837;

	t31 = ((x133/x134)<=(x135+x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x137 = -1;
	volatile uint8_t x138 = 104U;
	static int64_t x139 = INT64_MAX;
	static uint64_t x140 = 40936LLU;
	volatile int32_t t32 = -1153;

	t32 = ((x137/x138)<=(x139+x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x142 = UINT16_MAX;
	static int8_t x143 = 1;
	int64_t x144 = INT64_MIN;
	int32_t t33 = 294541800;

	t33 = ((x141/x142)<=(x143+x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MAX;
	volatile int64_t x146 = INT64_MAX;
	volatile int8_t x147 = -1;
	uint32_t x148 = 389467U;
	volatile int32_t t34 = -14;

	t34 = ((x145/x146)<=(x147+x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x149 = 4261095277110719886LL;
	volatile uint64_t x150 = 165241356LLU;
	volatile uint8_t x151 = 11U;
	volatile uint16_t x152 = 8490U;
	int32_t t35 = 1954920;

	t35 = ((x149/x150)<=(x151+x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = -296LL;
	volatile uint8_t x154 = UINT8_MAX;
	static int16_t x155 = INT16_MIN;
	volatile int8_t x156 = -5;

	t36 = ((x153/x154)<=(x155+x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = 24;
	int64_t x159 = 187071944276783421LL;
	static volatile uint32_t x160 = 3659843U;
	int32_t t37 = -2;

	t37 = ((x157/x158)<=(x159+x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = INT64_MAX;
	int16_t x162 = INT16_MIN;
	int64_t x164 = 43985606405255LL;

	t38 = ((x161/x162)<=(x163+x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x165 = 6U;
	int32_t x166 = -10;
	volatile int16_t x167 = 3;
	volatile int16_t x168 = -1;
	int32_t t39 = 293;

	t39 = ((x165/x166)<=(x167+x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	uint32_t x170 = UINT32_MAX;
	static int8_t x171 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;

	t40 = ((x169/x170)<=(x171+x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = 3947854293453LL;
	volatile int16_t x174 = INT16_MIN;
	int8_t x176 = -1;
	volatile int32_t t41 = -54;

	t41 = ((x173/x174)<=(x175+x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	volatile int8_t x178 = INT8_MIN;
	uint16_t x179 = UINT16_MAX;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t42 = -259612557;

	t42 = ((x177/x178)<=(x179+x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x182 = -1;
	volatile int64_t x183 = INT64_MIN;
	int64_t x184 = 52LL;
	int32_t t43 = 2654092;

	t43 = ((x181/x182)<=(x183+x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x186 = 14641405LLU;
	volatile int32_t x187 = -1;
	int32_t x188 = -5906326;
	static int32_t t44 = 7565700;

	t44 = ((x185/x186)<=(x187+x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = 77167197;
	static uint32_t x190 = 7U;
	int8_t x191 = INT8_MIN;
	int32_t x192 = 51771;
	int32_t t45 = -3;

	t45 = ((x189/x190)<=(x191+x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = 1;
	int8_t x194 = -1;
	volatile int32_t x196 = INT32_MAX;
	volatile int32_t t46 = 97229878;

	t46 = ((x193/x194)<=(x195+x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MAX;
	int16_t x199 = -3;
	static int16_t x200 = -1;
	static volatile int32_t t47 = 1199054;

	t47 = ((x197/x198)<=(x199+x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -342;
	int64_t x203 = -1LL;
	int8_t x204 = INT8_MIN;

	t48 = ((x201/x202)<=(x203+x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = UINT8_MAX;
	int32_t x210 = INT32_MIN;
	int64_t x211 = -1LL;
	volatile uint64_t x212 = 183450011023129LLU;
	volatile int32_t t49 = 44602035;

	t49 = ((x209/x210)<=(x211+x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 2263963LLU;
	int64_t x214 = -14958565796765LL;
	static int32_t x215 = INT32_MAX;
	volatile int16_t x216 = -4;
	volatile int32_t t50 = -87376;

	t50 = ((x213/x214)<=(x215+x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = 252481599U;
	static volatile int32_t x218 = 4700576;
	volatile uint32_t x220 = 1208U;
	static int32_t t51 = 448974531;

	t51 = ((x217/x218)<=(x219+x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = -1;
	volatile uint8_t x222 = UINT8_MAX;
	volatile int32_t x223 = -1;
	int16_t x224 = -234;

	t52 = ((x221/x222)<=(x223+x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = 102U;
	static int32_t x226 = INT32_MAX;
	uint32_t x227 = 971590U;
	int32_t x228 = 740;

	t53 = ((x225/x226)<=(x227+x228));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = INT8_MAX;
	static int64_t x234 = -1291822LL;
	volatile int32_t x235 = -28;
	int16_t x236 = 3326;
	int32_t t54 = -6326;

	t54 = ((x233/x234)<=(x235+x236));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x237 = -3;
	uint16_t x238 = UINT16_MAX;
	volatile int32_t t55 = -4;

	t55 = ((x237/x238)<=(x239+x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MAX;
	uint16_t x242 = 62U;
	static volatile int8_t x243 = 9;
	uint8_t x244 = UINT8_MAX;
	int32_t t56 = -2746346;

	t56 = ((x241/x242)<=(x243+x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x245 = UINT8_MAX;
	volatile uint32_t x246 = 2496574U;
	volatile int64_t x248 = 117312172LL;
	static volatile int32_t t57 = -418629261;

	t57 = ((x245/x246)<=(x247+x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x249 = -3LL;
	int32_t x251 = -1;
	int16_t x252 = -1;
	volatile int32_t t58 = 42524280;

	t58 = ((x249/x250)<=(x251+x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = -1;
	int32_t x255 = -1;
	uint8_t x256 = 5U;

	t59 = ((x253/x254)<=(x255+x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = INT32_MIN;
	volatile int8_t x258 = -21;
	int16_t x259 = -1;
	int64_t x260 = -74994172533LL;
	int32_t t60 = -1;

	t60 = ((x257/x258)<=(x259+x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = -1;
	uint8_t x262 = UINT8_MAX;
	int8_t x264 = -1;

	t61 = ((x261/x262)<=(x263+x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = -1;
	int8_t x270 = INT8_MIN;
	int8_t x271 = -1;
	int64_t x272 = INT64_MAX;
	volatile int32_t t62 = 196;

	t62 = ((x269/x270)<=(x271+x272));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x273 = INT32_MIN;
	uint8_t x274 = UINT8_MAX;
	static int16_t x275 = -115;
	int16_t x276 = 24;
	volatile int32_t t63 = -29687;

	t63 = ((x273/x274)<=(x275+x276));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = INT64_MIN;
	volatile uint64_t x278 = UINT64_MAX;
	volatile int64_t x279 = -1LL;
	static uint64_t x280 = UINT64_MAX;
	volatile int32_t t64 = 7885421;

	t64 = ((x277/x278)<=(x279+x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x282 = INT16_MIN;
	int16_t x284 = INT16_MAX;
	volatile int32_t t65 = 6118718;

	t65 = ((x281/x282)<=(x283+x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	uint32_t x286 = 5445U;
	static int64_t x287 = -987145LL;
	uint64_t x288 = 52LLU;
	volatile int32_t t66 = 197;

	t66 = ((x285/x286)<=(x287+x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x289 = 6092LLU;
	int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MAX;
	volatile int32_t t67 = -40086;

	t67 = ((x289/x290)<=(x291+x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = INT32_MAX;
	int32_t x294 = -2362;
	int16_t x295 = 1005;
	int16_t x296 = INT16_MIN;
	int32_t t68 = -14386;

	t68 = ((x293/x294)<=(x295+x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	static uint8_t x300 = 3U;
	static volatile int32_t t69 = 73;

	t69 = ((x297/x298)<=(x299+x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x302 = -1;
	int32_t x303 = 10;
	int64_t x304 = INT64_MIN;
	static volatile int32_t t70 = 632219;

	t70 = ((x301/x302)<=(x303+x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = INT16_MIN;
	static volatile int16_t x306 = INT16_MAX;
	int16_t x308 = INT16_MAX;
	volatile int32_t t71 = 0;

	t71 = ((x305/x306)<=(x307+x308));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = -19;
	int32_t x310 = INT32_MIN;
	static int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;
	int32_t t72 = -95;

	t72 = ((x309/x310)<=(x311+x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = INT16_MAX;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MAX;
	int8_t x316 = INT8_MIN;
	static int32_t t73 = -65582857;

	t73 = ((x313/x314)<=(x315+x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = 3416010642135035LL;
	int64_t x318 = 11641778602485LL;
	int8_t x319 = -1;
	static volatile int64_t x320 = INT64_MAX;
	volatile int32_t t74 = -31;

	t74 = ((x317/x318)<=(x319+x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x321 = -1;
	static uint64_t x323 = 72768LLU;
	int32_t t75 = -78327;

	t75 = ((x321/x322)<=(x323+x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x326 = INT32_MAX;

	t76 = ((x325/x326)<=(x327+x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = -15096928LL;
	uint16_t x330 = UINT16_MAX;
	uint32_t x331 = UINT32_MAX;
	uint64_t x332 = UINT64_MAX;
	int32_t t77 = -2171;

	t77 = ((x329/x330)<=(x331+x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = 3U;
	int64_t x334 = -1LL;
	static int8_t x335 = -1;
	int32_t t78 = -50398;

	t78 = ((x333/x334)<=(x335+x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x337 = -1LL;
	int16_t x338 = -1;
	int8_t x339 = -1;
	volatile int32_t t79 = -81672;

	t79 = ((x337/x338)<=(x339+x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x341 = -1;
	static uint64_t x342 = 2832LLU;
	int32_t x343 = -5907778;
	static volatile uint8_t x344 = UINT8_MAX;
	volatile int32_t t80 = -26946278;

	t80 = ((x341/x342)<=(x343+x344));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = -1LL;
	int32_t x348 = -91;
	int32_t t81 = -1252071;

	t81 = ((x345/x346)<=(x347+x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = UINT16_MAX;
	static int16_t x351 = INT16_MIN;
	volatile int64_t x352 = 6061881643LL;

	t82 = ((x349/x350)<=(x351+x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x353 = UINT8_MAX;
	volatile uint64_t x354 = 17120106885LLU;
	int32_t x356 = -1;
	int32_t t83 = 1352;

	t83 = ((x353/x354)<=(x355+x356));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = 22U;
	static int64_t x358 = -486149498887LL;
	int16_t x359 = -481;
	volatile uint16_t x360 = 20U;
	int32_t t84 = -40449019;

	t84 = ((x357/x358)<=(x359+x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MAX;
	static int8_t x363 = 23;
	volatile int32_t t85 = 1408637;

	t85 = ((x361/x362)<=(x363+x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = INT64_MIN;
	static int64_t x366 = 1629LL;
	uint16_t x367 = UINT16_MAX;
	uint32_t x368 = UINT32_MAX;
	int32_t t86 = 1;

	t86 = ((x365/x366)<=(x367+x368));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x369 = UINT8_MAX;
	static uint32_t x370 = UINT32_MAX;
	volatile uint8_t x372 = 2U;
	volatile int32_t t87 = -247922;

	t87 = ((x369/x370)<=(x371+x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = -6;
	static int32_t x383 = -15;
	int32_t t88 = -863964132;

	t88 = ((x381/x382)<=(x383+x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MAX;
	int8_t x387 = -1;
	uint16_t x388 = UINT16_MAX;
	static int32_t t89 = 6867;

	t89 = ((x385/x386)<=(x387+x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x389 = 1U;
	volatile int32_t x390 = INT32_MIN;
	uint8_t x391 = 36U;
	int8_t x392 = INT8_MIN;
	volatile int32_t t90 = 229;

	t90 = ((x389/x390)<=(x391+x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x395 = 120U;
	int64_t x396 = INT64_MIN;

	t91 = ((x393/x394)<=(x395+x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x397 = 10LLU;
	volatile uint64_t x398 = UINT64_MAX;
	int8_t x399 = 0;
	uint64_t x400 = 16051032LLU;
	int32_t t92 = -1;

	t92 = ((x397/x398)<=(x399+x400));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t t93 = 18;

	t93 = ((x401/x402)<=(x403+x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = INT64_MIN;
	uint32_t x406 = 575061765U;
	volatile int8_t x408 = -1;

	t94 = ((x405/x406)<=(x407+x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = INT8_MAX;
	int32_t x410 = INT32_MIN;
	int16_t x411 = 105;
	int16_t x412 = -1;
	int32_t t95 = 3426;

	t95 = ((x409/x410)<=(x411+x412));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x413 = INT16_MIN;
	uint8_t x414 = 27U;
	volatile uint16_t x415 = 3534U;
	static int8_t x416 = 0;
	int32_t t96 = 2026;

	t96 = ((x413/x414)<=(x415+x416));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x418 = INT64_MIN;
	int16_t x419 = INT16_MIN;
	volatile int32_t t97 = -3852550;

	t97 = ((x417/x418)<=(x419+x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x422 = 14;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = 6030858510730LLU;
	volatile int32_t t98 = 16308;

	t98 = ((x421/x422)<=(x423+x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x425 = 159644020U;
	uint16_t x426 = UINT16_MAX;
	volatile int32_t t99 = 0;

	t99 = ((x425/x426)<=(x427+x428));

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

