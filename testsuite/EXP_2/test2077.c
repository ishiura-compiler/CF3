#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
int32_t t1 = -12724;
int8_t x15 = INT8_MIN;
uint64_t x18 = 233046868199LLU;
volatile int32_t x21 = INT32_MIN;
int16_t x22 = INT16_MAX;
int32_t x23 = -2438;
static int16_t x24 = INT16_MIN;
volatile int32_t t5 = 167627;
int32_t t8 = -119;
static int64_t x39 = INT64_MIN;
int8_t x45 = INT8_MIN;
static uint8_t x47 = 0U;
static int32_t t12 = -51021;
volatile int32_t x59 = INT32_MAX;
int64_t x65 = INT64_MIN;
int64_t x70 = -1555LL;
uint8_t x71 = 14U;
int16_t x73 = -1965;
int8_t x79 = 21;
volatile int32_t t19 = -163;
uint8_t x87 = 28U;
int8_t x92 = -4;
int8_t x93 = -3;
int32_t x94 = -1;
volatile int8_t x102 = INT8_MIN;
static volatile int32_t t24 = -950;
int64_t x105 = INT64_MIN;
int32_t x108 = -1;
volatile int32_t x115 = INT32_MIN;
int16_t x130 = -1;
volatile int32_t x131 = INT32_MIN;
uint32_t x140 = UINT32_MAX;
int32_t x146 = INT32_MAX;
static int64_t x155 = INT64_MIN;
uint16_t x164 = 14U;
uint16_t x165 = UINT16_MAX;
uint8_t x170 = 1U;
static uint64_t x176 = UINT64_MAX;
uint32_t x180 = 9U;
int8_t x182 = -51;
volatile int32_t x188 = -20625919;
int32_t t47 = -38477;
uint16_t x214 = 2727U;
int32_t x215 = INT32_MAX;
int64_t x217 = -1LL;
static int64_t x220 = INT64_MIN;
volatile uint16_t x222 = 11412U;
int32_t x227 = INT32_MIN;
volatile uint32_t x231 = 2927707U;
static int16_t x232 = INT16_MAX;
int64_t x238 = 1LL;
int32_t x241 = -13078569;
int64_t x243 = -1LL;
int16_t x244 = INT16_MAX;
static int8_t x245 = -3;
static int8_t x246 = -1;
int64_t x248 = INT64_MIN;
int32_t t59 = 2;
volatile int32_t t60 = -65021;
int8_t x254 = 0;
uint32_t x256 = UINT32_MAX;
volatile int32_t t61 = 1081805;
int8_t x261 = -1;
int32_t x263 = INT32_MIN;
volatile int32_t t65 = -3282;
static int8_t x274 = INT8_MIN;
int32_t t66 = 1467718;
uint8_t x288 = 119U;
volatile uint8_t x291 = 90U;
static int64_t x294 = -6374258917LL;
int32_t x307 = INT32_MAX;
int8_t x315 = -10;
volatile int8_t x318 = 56;
static uint8_t x320 = UINT8_MAX;
uint32_t x321 = 102U;
uint8_t x330 = 103U;
static int64_t x331 = -1LL;
volatile int32_t t77 = 3650;
volatile uint8_t x333 = 15U;
static int32_t x334 = INT32_MAX;
uint16_t x336 = 280U;
volatile int32_t t78 = -803690820;
int8_t x337 = 0;
static int8_t x339 = INT8_MAX;
uint16_t x340 = 31397U;
int64_t x341 = INT64_MAX;
int32_t t81 = -2;
int16_t x352 = 173;
int8_t x362 = 27;
int32_t t85 = 10;
volatile int32_t t87 = -313381969;
int32_t x373 = 3802646;
int32_t x375 = -155;
uint64_t x376 = UINT64_MAX;
uint16_t x384 = 1424U;
int16_t x386 = -1;
volatile uint32_t x387 = 66208356U;
static int32_t t91 = -410132709;
volatile int32_t t94 = 1;
uint32_t x401 = UINT32_MAX;
int8_t x408 = INT8_MIN;
int32_t x409 = 457788736;
int8_t x411 = -1;
uint16_t x416 = UINT16_MAX;
static volatile int32_t t98 = -13380361;
volatile int32_t t99 = 5476029;


void f0(void) {
	static uint32_t x1 = 1467126994U;
	static int16_t x2 = -1;
	int64_t x3 = 11995178080LL;
	volatile int32_t t0 = 3403;

	t0 = ((x1/(x2^x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 3456483U;
	volatile uint64_t x6 = 21864752235450LLU;
	uint32_t x7 = UINT32_MAX;
	static int8_t x8 = INT8_MIN;

	t1 = ((x5/(x6^x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 1LLU;
	int8_t x10 = INT8_MAX;
	static uint16_t x11 = 68U;
	volatile uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -395524500;

	t2 = ((x9/(x10^x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 1U;
	static uint16_t x14 = 0U;
	int64_t x16 = -74694738970661828LL;
	static int32_t t3 = 2;

	t3 = ((x13/(x14^x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static uint32_t x19 = 2905U;
	int8_t x20 = -1;
	int32_t t4 = 25610;

	t4 = ((x17/(x18^x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {


	t5 = ((x21/(x22^x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 2266U;
	int16_t x26 = INT16_MIN;
	int8_t x27 = 0;
	volatile uint64_t x28 = 549920LLU;
	int32_t t6 = 6436449;

	t6 = ((x25/(x26^x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	volatile uint64_t x30 = 8813361084861694LLU;
	uint64_t x31 = 739LLU;
	int64_t x32 = INT64_MIN;
	static int32_t t7 = -1;

	t7 = ((x29/(x30^x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = INT16_MAX;
	uint16_t x34 = 42U;
	static int64_t x35 = 368159690401296002LL;
	int16_t x36 = INT16_MIN;

	t8 = ((x33/(x34^x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 47U;
	static uint16_t x38 = 356U;
	uint16_t x40 = 1U;
	int32_t t9 = 583897540;

	t9 = ((x37/(x38^x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	volatile int16_t x42 = INT16_MAX;
	uint16_t x43 = 0U;
	volatile int64_t x44 = -1LL;
	int32_t t10 = -4;

	t10 = ((x41/(x42^x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	static uint64_t x48 = 152718245151428730LLU;
	static volatile int32_t t11 = 1;

	t11 = ((x45/(x46^x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = 1778921904651034LL;
	int8_t x50 = -24;
	int32_t x51 = -1;
	int16_t x52 = INT16_MIN;

	t12 = ((x49/(x50^x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -19860LL;
	int8_t x54 = INT8_MAX;
	volatile int32_t x55 = INT32_MIN;
	volatile int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 68014049;

	t13 = ((x53/(x54^x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 1;
	int8_t x58 = 6;
	uint64_t x60 = 2286148LLU;
	static volatile int32_t t14 = -23;

	t14 = ((x57/(x58^x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x66 = -1;
	uint64_t x67 = 1483075838LLU;
	int16_t x68 = INT16_MIN;
	volatile int32_t t15 = -15269417;

	t15 = ((x65/(x66^x67))<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int8_t x72 = 5;
	int32_t t16 = -128261;

	t16 = ((x69/(x70^x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x74 = 0U;
	int8_t x75 = INT8_MIN;
	static volatile int8_t x76 = 7;
	volatile int32_t t17 = 13686076;

	t17 = ((x73/(x74^x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	static int64_t x78 = -1LL;
	int64_t x80 = -14757791268786825LL;
	volatile int32_t t18 = -32536005;

	t18 = ((x77/(x78^x79))<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = UINT32_MAX;
	int64_t x82 = 914691642009LL;
	volatile uint32_t x83 = 1U;
	volatile int8_t x84 = 12;

	t19 = ((x81/(x82^x83))<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x85 = 827615406261525LLU;
	static volatile int8_t x86 = 0;
	int64_t x88 = INT64_MAX;
	volatile int32_t t20 = 597946882;

	t20 = ((x85/(x86^x87))<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	int8_t x90 = INT8_MIN;
	int8_t x91 = -8;
	volatile int32_t t21 = 19;

	t21 = ((x89/(x90^x91))<=x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x95 = 399U;
	int16_t x96 = 1877;
	volatile int32_t t22 = 162519;

	t22 = ((x93/(x94^x95))<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = -14;
	uint64_t x98 = 420LLU;
	volatile uint8_t x99 = UINT8_MAX;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t23 = -3227;

	t23 = ((x97/(x98^x99))<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = INT16_MIN;
	volatile uint16_t x103 = UINT16_MAX;
	int8_t x104 = 44;

	t24 = ((x101/(x102^x103))<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x106 = INT16_MIN;
	static int64_t x107 = INT64_MIN;
	static int32_t t25 = 33754207;

	t25 = ((x105/(x106^x107))<=x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -35251;
	uint64_t x110 = UINT64_MAX;
	volatile uint64_t x111 = 161490352049LLU;
	int16_t x112 = -3107;
	volatile int32_t t26 = -496;

	t26 = ((x109/(x110^x111))<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x113 = INT64_MIN;
	static volatile int16_t x114 = INT16_MAX;
	int32_t x116 = -1;
	volatile int32_t t27 = -113830;

	t27 = ((x113/(x114^x115))<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 1767LLU;
	int16_t x118 = 14633;
	uint32_t x119 = UINT32_MAX;
	volatile int16_t x120 = -522;
	int32_t t28 = -11537654;

	t28 = ((x117/(x118^x119))<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = 1561U;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t29 = 87600;

	t29 = ((x121/(x122^x123))<=x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	int32_t x128 = 0;
	int32_t t30 = -50198805;

	t30 = ((x125/(x126^x127))<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x129 = INT32_MIN;
	int64_t x132 = -1LL;
	static volatile int32_t t31 = -14;

	t31 = ((x129/(x130^x131))<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 314U;
	int8_t x134 = 6;
	int8_t x135 = INT8_MIN;
	uint16_t x136 = 106U;
	int32_t t32 = -1970;

	t32 = ((x133/(x134^x135))<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 2;
	int64_t x138 = INT64_MIN;
	static uint32_t x139 = UINT32_MAX;
	volatile int32_t t33 = -6;

	t33 = ((x137/(x138^x139))<=x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 7405607887LLU;
	uint8_t x142 = 18U;
	int16_t x143 = -1;
	volatile uint64_t x144 = UINT64_MAX;
	static int32_t t34 = 1071604;

	t34 = ((x141/(x142^x143))<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 2U;
	int32_t x147 = -1;
	int32_t x148 = 30;
	volatile int32_t t35 = 4;

	t35 = ((x145/(x146^x147))<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = INT64_MIN;
	int16_t x150 = INT16_MIN;
	uint16_t x151 = 211U;
	int32_t x152 = 126;
	volatile int32_t t36 = -259284;

	t36 = ((x149/(x150^x151))<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = 55U;
	int8_t x154 = 29;
	static int64_t x156 = -55LL;
	volatile int32_t t37 = 44;

	t37 = ((x153/(x154^x155))<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = 25009U;
	int8_t x158 = INT8_MIN;
	uint16_t x159 = 284U;
	uint8_t x160 = 3U;
	volatile int32_t t38 = -7108;

	t38 = ((x157/(x158^x159))<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	uint16_t x162 = 24305U;
	int16_t x163 = INT16_MAX;
	int32_t t39 = -252;

	t39 = ((x161/(x162^x163))<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x166 = INT64_MIN;
	static int8_t x167 = INT8_MIN;
	static int8_t x168 = INT8_MIN;
	int32_t t40 = 665487;

	t40 = ((x165/(x166^x167))<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x169 = 61855443LLU;
	int16_t x171 = 358;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t41 = -474314;

	t41 = ((x169/(x170^x171))<=x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -1;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = INT8_MIN;
	int32_t t42 = -10286;

	t42 = ((x173/(x174^x175))<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = INT16_MAX;
	volatile uint16_t x178 = 1U;
	int8_t x179 = INT8_MIN;
	int32_t t43 = 1;

	t43 = ((x177/(x178^x179))<=x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x181 = 0U;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	int32_t t44 = -31;

	t44 = ((x181/(x182^x183))<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x186 = 2234U;
	static uint16_t x187 = UINT16_MAX;
	volatile int32_t t45 = -8963213;

	t45 = ((x185/(x186^x187))<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MIN;
	uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MAX;
	int32_t t46 = 0;

	t46 = ((x189/(x190^x191))<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = -1;
	volatile uint8_t x194 = UINT8_MAX;
	volatile uint32_t x195 = 3078U;
	static int32_t x196 = INT32_MIN;

	t47 = ((x193/(x194^x195))<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x197 = 451201610LLU;
	int32_t x198 = -130;
	int8_t x199 = INT8_MAX;
	uint32_t x200 = 13615U;
	int32_t t48 = 0;

	t48 = ((x197/(x198^x199))<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x205 = 3U;
	volatile int8_t x206 = -1;
	volatile int16_t x207 = INT16_MIN;
	uint32_t x208 = 59U;
	int32_t t49 = 223;

	t49 = ((x205/(x206^x207))<=x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -1LL;
	static int16_t x210 = -1;
	volatile int16_t x211 = INT16_MIN;
	static uint16_t x212 = 2U;
	int32_t t50 = 590;

	t50 = ((x209/(x210^x211))<=x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x213 = -957917231297308LL;
	volatile int32_t x216 = INT32_MAX;
	volatile int32_t t51 = -400049025;

	t51 = ((x213/(x214^x215))<=x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x218 = 330980LL;
	static int32_t x219 = 32825;
	static volatile int32_t t52 = -1852;

	t52 = ((x217/(x218^x219))<=x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -1LL;
	static volatile int64_t x223 = INT64_MAX;
	uint16_t x224 = 4278U;
	volatile int32_t t53 = -129222;

	t53 = ((x221/(x222^x223))<=x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = -1;
	int8_t x226 = -1;
	uint64_t x228 = 7924348LLU;
	volatile int32_t t54 = -3097579;

	t54 = ((x225/(x226^x227))<=x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -25373;
	int64_t x230 = -456578493LL;
	volatile int32_t t55 = -86784915;

	t55 = ((x229/(x230^x231))<=x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -1;
	volatile int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	static int64_t x236 = 573LL;
	static volatile int32_t t56 = -30411;

	t56 = ((x233/(x234^x235))<=x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x237 = INT16_MAX;
	static int8_t x239 = INT8_MIN;
	volatile uint16_t x240 = UINT16_MAX;
	int32_t t57 = 69814;

	t57 = ((x237/(x238^x239))<=x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x242 = 28U;
	volatile int32_t t58 = -110698576;

	t58 = ((x241/(x242^x243))<=x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x247 = INT64_MAX;

	t59 = ((x245/(x246^x247))<=x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	uint64_t x250 = 24988169397LLU;
	int16_t x251 = -1;
	int64_t x252 = 130292723394763LL;

	t60 = ((x249/(x250^x251))<=x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x253 = UINT64_MAX;
	static int32_t x255 = 28;

	t61 = ((x253/(x254^x255))<=x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x257 = 3;
	uint8_t x258 = 87U;
	int64_t x259 = 16372239337867822LL;
	uint32_t x260 = 81261635U;
	volatile int32_t t62 = 1;

	t62 = ((x257/(x258^x259))<=x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x262 = INT8_MAX;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t63 = 9156;

	t63 = ((x261/(x262^x263))<=x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MIN;
	volatile uint32_t x266 = 2769726U;
	int16_t x267 = -1;
	int16_t x268 = -190;
	volatile int32_t t64 = -4683;

	t64 = ((x265/(x266^x267))<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = 53;
	static int64_t x270 = INT64_MAX;
	static volatile uint32_t x271 = UINT32_MAX;
	int64_t x272 = INT64_MIN;

	t65 = ((x269/(x270^x271))<=x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = 7LLU;
	int32_t x275 = 9412;
	uint16_t x276 = 848U;

	t66 = ((x273/(x274^x275))<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MIN;
	int64_t x283 = -1LL;
	int8_t x284 = INT8_MAX;
	volatile int32_t t67 = 311;

	t67 = ((x281/(x282^x283))<=x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x285 = 6755LLU;
	volatile int64_t x286 = INT64_MAX;
	int8_t x287 = INT8_MIN;
	volatile int32_t t68 = 222;

	t68 = ((x285/(x286^x287))<=x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x289 = -3508476798LL;
	uint16_t x290 = UINT16_MAX;
	volatile int64_t x292 = 47970804659LL;
	volatile int32_t t69 = -8143;

	t69 = ((x289/(x290^x291))<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x293 = UINT8_MAX;
	int64_t x295 = -4700598928368LL;
	volatile uint64_t x296 = 20907263544LLU;
	static volatile int32_t t70 = -816;

	t70 = ((x293/(x294^x295))<=x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x301 = 136933LLU;
	static volatile int64_t x302 = -85664905627298LL;
	int64_t x303 = INT64_MAX;
	int32_t x304 = -1;
	int32_t t71 = 7198;

	t71 = ((x301/(x302^x303))<=x304);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = INT16_MIN;
	static volatile int8_t x306 = INT8_MIN;
	int8_t x308 = -56;
	volatile int32_t t72 = 318736868;

	t72 = ((x305/(x306^x307))<=x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = INT16_MIN;
	int32_t x314 = INT32_MIN;
	uint64_t x316 = 77583115937616294LLU;
	int32_t t73 = -118399113;

	t73 = ((x313/(x314^x315))<=x316);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = INT64_MIN;
	int32_t x319 = INT32_MAX;
	int32_t t74 = 9;

	t74 = ((x317/(x318^x319))<=x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x322 = 214168020U;
	static uint8_t x323 = UINT8_MAX;
	volatile int64_t x324 = -1LL;
	int32_t t75 = 830;

	t75 = ((x321/(x322^x323))<=x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = 7;
	int16_t x326 = INT16_MIN;
	volatile int64_t x327 = -1LL;
	static uint32_t x328 = 486224U;
	volatile int32_t t76 = -760;

	t76 = ((x325/(x326^x327))<=x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x329 = -3116;
	int16_t x332 = INT16_MIN;

	t77 = ((x329/(x330^x331))<=x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x335 = -1LL;

	t78 = ((x333/(x334^x335))<=x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x338 = -1;
	int32_t t79 = 82;

	t79 = ((x337/(x338^x339))<=x340);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x342 = -1LL;
	static int16_t x343 = 2570;
	int32_t x344 = INT32_MAX;
	int32_t t80 = -22802;

	t80 = ((x341/(x342^x343))<=x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = -1;

	t81 = ((x345/(x346^x347))<=x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = -1;
	int8_t x350 = INT8_MAX;
	static uint64_t x351 = UINT64_MAX;
	volatile int32_t t82 = 81604487;

	t82 = ((x349/(x350^x351))<=x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x353 = INT64_MAX;
	int32_t x354 = INT32_MIN;
	static int8_t x355 = INT8_MIN;
	uint8_t x356 = 2U;
	volatile int32_t t83 = -2;

	t83 = ((x353/(x354^x355))<=x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = 1;
	uint8_t x358 = 48U;
	int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MIN;
	int32_t t84 = -97730;

	t84 = ((x357/(x358^x359))<=x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = 0;
	int8_t x363 = 0;
	uint16_t x364 = UINT16_MAX;

	t85 = ((x361/(x362^x363))<=x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = 933LL;
	int32_t x366 = INT32_MIN;
	volatile uint32_t x367 = 545248U;
	int64_t x368 = -2936056067818407538LL;
	volatile int32_t t86 = 3666;

	t86 = ((x365/(x366^x367))<=x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x369 = -1;
	static int64_t x370 = INT64_MIN;
	int16_t x371 = 72;
	int16_t x372 = INT16_MIN;

	t87 = ((x369/(x370^x371))<=x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x374 = 21535634LL;
	int32_t t88 = 96629;

	t88 = ((x373/(x374^x375))<=x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x377 = 110;
	static int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	static uint16_t x380 = 37U;
	int32_t t89 = 29781743;

	t89 = ((x377/(x378^x379))<=x380);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x381 = INT64_MIN;
	static int16_t x382 = INT16_MAX;
	static int8_t x383 = INT8_MIN;
	static volatile int32_t t90 = -1008246;

	t90 = ((x381/(x382^x383))<=x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MIN;
	static int16_t x388 = INT16_MIN;

	t91 = ((x385/(x386^x387))<=x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x390 = 198712U;
	int64_t x391 = -1LL;
	uint16_t x392 = 3537U;
	volatile int32_t t92 = 492410;

	t92 = ((x389/(x390^x391))<=x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MAX;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t93 = 0;

	t93 = ((x393/(x394^x395))<=x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x397 = UINT16_MAX;
	static uint64_t x398 = 731887392LLU;
	static volatile int8_t x399 = -1;
	volatile uint64_t x400 = 220399019LLU;

	t94 = ((x397/(x398^x399))<=x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x402 = 1U;
	int64_t x403 = INT64_MIN;
	volatile uint8_t x404 = 42U;
	volatile int32_t t95 = 150741;

	t95 = ((x401/(x402^x403))<=x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x405 = 329829424148056199LL;
	uint8_t x406 = UINT8_MAX;
	static int16_t x407 = 0;
	static int32_t t96 = -162616911;

	t96 = ((x405/(x406^x407))<=x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x410 = INT32_MAX;
	int64_t x412 = INT64_MAX;
	static volatile int32_t t97 = -18811;

	t97 = ((x409/(x410^x411))<=x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = INT8_MAX;
	uint8_t x414 = UINT8_MAX;
	uint64_t x415 = 18873LLU;

	t98 = ((x413/(x414^x415))<=x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = 1004U;
	uint64_t x418 = 1698157135LLU;
	int64_t x419 = INT64_MIN;
	uint8_t x420 = 3U;

	t99 = ((x417/(x418^x419))<=x420);

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

