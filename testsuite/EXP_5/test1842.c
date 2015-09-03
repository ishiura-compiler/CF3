#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MIN;
uint64_t x3 = 33209962394LLU;
volatile int32_t x12 = INT32_MAX;
static volatile int32_t t2 = -22477;
volatile int8_t x15 = -1;
uint32_t x16 = 5U;
volatile int32_t t3 = -4;
int8_t x20 = 7;
static int32_t x23 = -1;
int8_t x25 = INT8_MAX;
uint32_t x32 = 0U;
static volatile int32_t t7 = 6;
int16_t x35 = INT16_MAX;
int32_t x37 = INT32_MIN;
static volatile int32_t t9 = -5;
volatile uint64_t x46 = UINT64_MAX;
volatile int32_t t11 = 50;
volatile uint8_t x52 = UINT8_MAX;
static int8_t x55 = -1;
int32_t t13 = 20653765;
volatile uint8_t x61 = UINT8_MAX;
int32_t x62 = INT32_MIN;
volatile int32_t x71 = INT32_MAX;
int32_t t18 = -266337783;
volatile int32_t t19 = 7819355;
static int64_t x87 = 1LL;
static int8_t x88 = INT8_MAX;
int16_t x98 = INT16_MIN;
static int32_t t26 = -1;
uint64_t x117 = 983LLU;
int16_t x121 = -1;
int64_t x124 = INT64_MAX;
static int32_t t30 = -3248;
int64_t x126 = INT64_MIN;
int32_t x128 = INT32_MIN;
static int64_t x131 = 237653388LL;
uint32_t x132 = 28760512U;
volatile int32_t t33 = -372601;
int32_t t34 = -14;
uint16_t x145 = UINT16_MAX;
int64_t x146 = INT64_MIN;
static int32_t t36 = 848151366;
static int64_t x160 = INT64_MAX;
static volatile int16_t x167 = INT16_MIN;
volatile int8_t x168 = -1;
static int32_t x175 = INT32_MAX;
static int8_t x178 = 1;
int8_t x183 = INT8_MIN;
volatile int32_t t45 = 2371547;
uint16_t x188 = 2U;
int64_t x194 = INT64_MIN;
uint8_t x195 = 0U;
static uint16_t x197 = 3809U;
static volatile int32_t t49 = -4003827;
int32_t x204 = INT32_MIN;
int32_t x210 = INT32_MIN;
uint32_t x224 = UINT32_MAX;
int64_t x226 = INT64_MAX;
volatile int64_t x230 = -14636736LL;
static uint64_t x232 = 56246437LLU;
uint64_t x235 = 30LLU;
uint16_t x239 = 6931U;
volatile uint8_t x246 = 1U;
uint16_t x258 = 6324U;
uint16_t x261 = 12U;
uint16_t x263 = 604U;
int32_t x269 = -39700241;
uint32_t x273 = 3236266U;
int64_t x274 = 19LL;
static volatile uint64_t x276 = 4473LLU;
volatile int64_t x279 = -31032299LL;
int32_t x292 = -1;
int32_t t72 = -806570;
uint64_t x303 = 1540977395LLU;
uint32_t x308 = UINT32_MAX;
int32_t x310 = INT32_MAX;
uint16_t x313 = 868U;
uint64_t x316 = 118448556474307620LLU;
static volatile int32_t t78 = -3877;
static volatile int64_t x319 = 76LL;
static volatile int16_t x320 = INT16_MAX;
static volatile int8_t x324 = INT8_MIN;
volatile uint64_t x326 = UINT64_MAX;
int64_t x327 = INT64_MAX;
uint32_t x337 = UINT32_MAX;
int8_t x341 = INT8_MIN;
volatile uint16_t x343 = 7723U;
uint32_t x344 = 7358U;
int64_t x345 = INT64_MAX;
volatile int32_t t86 = -17131;
int32_t x349 = INT32_MIN;
int32_t x363 = INT32_MAX;
uint32_t x364 = 126225056U;
static uint32_t x365 = UINT32_MAX;
uint8_t x372 = 16U;
int16_t x374 = -3941;
volatile int32_t t93 = -3941171;
int32_t x391 = INT32_MIN;
static int8_t x393 = INT8_MIN;
volatile int32_t t98 = 4031;
int32_t x397 = -264048027;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -314;

	t0 = (x1<((x2&x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	int8_t x6 = -41;
	volatile int8_t x7 = -1;
	volatile int32_t x8 = -1;
	int32_t t1 = -873022;

	t1 = (x5<((x6&x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 3499;
	static uint32_t x10 = UINT32_MAX;
	int32_t x11 = INT32_MAX;

	t2 = (x9<((x10&x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 4U;
	volatile int8_t x14 = -1;

	t3 = (x13<((x14&x15)|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 5131U;
	uint32_t x18 = 2143552266U;
	static int64_t x19 = -114495266065144631LL;
	volatile int32_t t4 = 0;

	t4 = (x17<((x18&x19)|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint16_t x22 = 1231U;
	static int16_t x24 = 2768;
	static volatile int32_t t5 = -368423;

	t5 = (x21<((x22&x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 3601458;
	uint64_t x27 = 150269519442LLU;
	static volatile uint32_t x28 = 727U;
	static int32_t t6 = -60976;

	t6 = (x25<((x26&x27)|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MAX;
	int16_t x31 = 234;

	t7 = (x29<((x30&x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 44U;
	static int8_t x34 = INT8_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = -2052319;

	t8 = (x33<((x34&x35)|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x38 = -1;
	uint16_t x39 = 3U;
	uint16_t x40 = 12U;

	t9 = (x37<((x38&x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	static uint32_t x42 = 917U;
	uint64_t x43 = UINT64_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 331;

	t10 = (x41<((x42&x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static int8_t x47 = 1;
	static int32_t x48 = 128486;

	t11 = (x45<((x46&x47)|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	static int64_t x50 = INT64_MIN;
	uint8_t x51 = 72U;
	int32_t t12 = -3806;

	t12 = (x49<((x50&x51)|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	static uint64_t x54 = 24234006139LLU;
	int8_t x56 = -1;

	t13 = (x53<((x54&x55)|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	uint8_t x58 = 7U;
	volatile uint64_t x59 = 20411214743LLU;
	int16_t x60 = INT16_MAX;
	static int32_t t14 = 40183711;

	t14 = (x57<((x58&x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x63 = INT16_MIN;
	static int32_t x64 = INT32_MAX;
	int32_t t15 = -11924279;

	t15 = (x61<((x62&x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint64_t x66 = 135152LLU;
	uint32_t x67 = UINT32_MAX;
	int8_t x68 = 2;
	int32_t t16 = 30764;

	t16 = (x65<((x66&x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 87U;
	int64_t x70 = INT64_MIN;
	int8_t x72 = -1;
	volatile int32_t t17 = -174137950;

	t17 = (x69<((x70&x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	int8_t x74 = INT8_MIN;
	uint8_t x75 = 2U;
	int8_t x76 = INT8_MIN;

	t18 = (x73<((x74&x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	int64_t x78 = -44517232957072100LL;
	int64_t x79 = -1LL;
	uint64_t x80 = UINT64_MAX;

	t19 = (x77<((x78&x79)|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -229005;
	volatile uint64_t x82 = 2077319546852027LLU;
	int16_t x83 = -5;
	static volatile int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 6;

	t20 = (x81<((x82&x83)|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 988210301103LL;
	static uint16_t x86 = 13U;
	int32_t t21 = 61;

	t21 = (x85<((x86&x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -4;
	int64_t x90 = -1LL;
	volatile int32_t x91 = INT32_MAX;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 1117;

	t22 = (x89<((x90&x91)|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = 20098U;
	volatile uint16_t x94 = UINT16_MAX;
	int16_t x95 = -1;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = -518;

	t23 = (x93<((x94&x95)|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -1LL;
	uint64_t x99 = 3818886628LLU;
	int16_t x100 = 1043;
	volatile int32_t t24 = 5237049;

	t24 = (x97<((x98&x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	uint8_t x102 = 1U;
	uint64_t x103 = 1LLU;
	uint8_t x104 = 6U;
	static volatile int32_t t25 = 366;

	t25 = (x101<((x102&x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = -13;
	int8_t x106 = -50;
	uint8_t x107 = UINT8_MAX;
	static int32_t x108 = -1;

	t26 = (x105<((x106&x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MIN;
	volatile uint64_t x111 = 630843138024LLU;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 33647;

	t27 = (x109<((x110&x111)|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = -2;
	int16_t x115 = INT16_MAX;
	volatile int8_t x116 = INT8_MIN;
	static int32_t t28 = 6;

	t28 = (x113<((x114&x115)|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = 33U;
	volatile int32_t x119 = -1;
	int16_t x120 = INT16_MIN;
	int32_t t29 = -1736350;

	t29 = (x117<((x118&x119)|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x122 = -1;
	int8_t x123 = -1;

	t30 = (x121<((x122&x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	static int32_t x127 = INT32_MIN;
	int32_t t31 = 6068;

	t31 = (x125<((x126&x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	uint32_t x130 = UINT32_MAX;
	volatile int32_t t32 = -548;

	t32 = (x129<((x130&x131)|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile int32_t x134 = INT32_MAX;
	uint16_t x135 = 5U;
	int64_t x136 = -740406809774927062LL;

	t33 = (x133<((x134&x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	int32_t x139 = -1;
	uint16_t x140 = 1U;

	t34 = (x137<((x138&x139)|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = -208;
	int8_t x143 = INT8_MIN;
	int16_t x144 = 3315;
	volatile int32_t t35 = -8;

	t35 = (x141<((x142&x143)|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MIN;

	t36 = (x145<((x146&x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 11219U;
	int64_t x150 = INT64_MIN;
	volatile uint8_t x151 = 7U;
	int8_t x152 = -12;
	int32_t t37 = -20;

	t37 = (x149<((x150&x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -6LL;
	volatile int32_t x154 = INT32_MIN;
	static int64_t x155 = INT64_MAX;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = -6863718;

	t38 = (x153<((x154&x155)|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x157 = 19U;
	int32_t x158 = INT32_MIN;
	volatile int64_t x159 = 4317628637317LL;
	int32_t t39 = 1132;

	t39 = (x157<((x158&x159)|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MAX;
	volatile uint64_t x162 = UINT64_MAX;
	int32_t x163 = -1;
	int64_t x164 = INT64_MIN;
	int32_t t40 = -154;

	t40 = (x161<((x162&x163)|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -4410;
	int8_t x166 = -1;
	int32_t t41 = 36;

	t41 = (x165<((x166&x167)|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MIN;
	uint32_t x170 = 5202765U;
	uint8_t x171 = 40U;
	int64_t x172 = -2LL;
	volatile int32_t t42 = -1;

	t42 = (x169<((x170&x171)|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = 9521;
	int8_t x174 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	int32_t t43 = -50;

	t43 = (x173<((x174&x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	volatile int8_t x179 = 3;
	uint16_t x180 = 3580U;
	static volatile int32_t t44 = 509;

	t44 = (x177<((x178&x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	static int16_t x182 = 4;
	int16_t x184 = -599;

	t45 = (x181<((x182&x183)|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 3LL;
	int16_t x186 = INT16_MIN;
	volatile int16_t x187 = -1;
	volatile int32_t t46 = -11;

	t46 = (x185<((x186&x187)|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	uint32_t x190 = 1049343U;
	volatile int16_t x191 = INT16_MIN;
	volatile int32_t x192 = INT32_MIN;
	static int32_t t47 = 311052143;

	t47 = (x189<((x190&x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x193 = 2048522683U;
	volatile int32_t x196 = INT32_MAX;
	volatile int32_t t48 = 59526061;

	t48 = (x193<((x194&x195)|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	static int8_t x200 = INT8_MIN;

	t49 = (x197<((x198&x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -1LL;
	int64_t x202 = -41LL;
	static uint8_t x203 = UINT8_MAX;
	static volatile int32_t t50 = -316590029;

	t50 = (x201<((x202&x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 1;
	static int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = INT64_MAX;
	volatile int32_t t51 = 53241014;

	t51 = (x205<((x206&x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MAX;
	int16_t x211 = -1;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 507305;

	t52 = (x209<((x210&x211)|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = 12;
	int16_t x214 = 83;
	uint64_t x215 = 68LLU;
	uint64_t x216 = UINT64_MAX;
	int32_t t53 = 126;

	t53 = (x213<((x214&x215)|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	uint64_t x218 = 48785797415LLU;
	static int64_t x219 = 1548330653531LL;
	int16_t x220 = INT16_MAX;
	static volatile int32_t t54 = -50;

	t54 = (x217<((x218&x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 461266U;
	uint32_t x222 = UINT32_MAX;
	uint64_t x223 = UINT64_MAX;
	volatile int32_t t55 = -1;

	t55 = (x221<((x222&x223)|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	volatile int64_t x227 = -1LL;
	int8_t x228 = 5;
	int32_t t56 = 3637;

	t56 = (x225<((x226&x227)|x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	volatile int64_t x231 = 3956666251912LL;
	static int32_t t57 = -6977826;

	t57 = (x229<((x230&x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	volatile int32_t x234 = INT32_MIN;
	static uint32_t x236 = UINT32_MAX;
	int32_t t58 = 55174;

	t58 = (x233<((x234&x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 195374286081LLU;
	int8_t x238 = INT8_MIN;
	int32_t x240 = 2558207;
	int32_t t59 = -110111635;

	t59 = (x237<((x238&x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = -484;
	int32_t x242 = -434;
	uint16_t x243 = 6673U;
	static volatile int16_t x244 = -3;
	volatile int32_t t60 = 10627;

	t60 = (x241<((x242&x243)|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = 53729099994LL;
	int64_t x247 = -1040LL;
	uint32_t x248 = 27167477U;
	volatile int32_t t61 = -387223781;

	t61 = (x245<((x246&x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 4392U;
	int16_t x250 = INT16_MIN;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = 59;
	int32_t t62 = 753829;

	t62 = (x249<((x250&x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	static volatile int32_t x254 = INT32_MIN;
	uint32_t x255 = UINT32_MAX;
	volatile uint64_t x256 = UINT64_MAX;
	static volatile int32_t t63 = -2;

	t63 = (x253<((x254&x255)|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MIN;
	static int32_t x259 = 247394396;
	static uint8_t x260 = 91U;
	int32_t t64 = -3;

	t64 = (x257<((x258&x259)|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x262 = 15U;
	static uint64_t x264 = 155441LLU;
	int32_t t65 = -12614;

	t65 = (x261<((x262&x263)|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	int8_t x266 = 4;
	int8_t x267 = INT8_MAX;
	uint16_t x268 = 142U;
	volatile int32_t t66 = 2;

	t66 = (x265<((x266&x267)|x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = UINT16_MAX;
	int64_t x271 = 721LL;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 16183;

	t67 = (x269<((x270&x271)|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x275 = INT8_MIN;
	static int32_t t68 = -226285;

	t68 = (x273<((x274&x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 44U;
	volatile int8_t x278 = INT8_MAX;
	static int32_t x280 = 710;
	int32_t t69 = -127;

	t69 = (x277<((x278&x279)|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = -15;
	int64_t x283 = -568492733002096LL;
	static int8_t x284 = -1;
	int32_t t70 = 50621074;

	t70 = (x281<((x282&x283)|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int16_t x286 = -115;
	static int64_t x287 = 1265229238269933288LL;
	int16_t x288 = INT16_MIN;
	int32_t t71 = 0;

	t71 = (x285<((x286&x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = UINT32_MAX;
	volatile uint8_t x290 = 0U;
	uint32_t x291 = UINT32_MAX;

	t72 = (x289<((x290&x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	uint32_t x294 = 287U;
	uint32_t x295 = 78U;
	int16_t x296 = 9;
	volatile int32_t t73 = 7373;

	t73 = (x293<((x294&x295)|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 143541139791739504LLU;
	uint64_t x298 = 565023254721853773LLU;
	static volatile uint64_t x299 = 499065206LLU;
	volatile uint64_t x300 = 5LLU;
	volatile int32_t t74 = 6;

	t74 = (x297<((x298&x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	static int64_t x302 = INT64_MAX;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = -249135;

	t75 = (x301<((x302&x303)|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static uint64_t x306 = UINT64_MAX;
	volatile int16_t x307 = 3;
	volatile int32_t t76 = 8827;

	t76 = (x305<((x306&x307)|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 320040LLU;
	int64_t x311 = 742809674301221442LL;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -1023245;

	t77 = (x309<((x310&x311)|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = -1;
	volatile uint16_t x315 = 282U;

	t78 = (x313<((x314&x315)|x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 10609U;
	volatile int64_t x318 = INT64_MIN;
	int32_t t79 = 271889090;

	t79 = (x317<((x318&x319)|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -501575498;
	int8_t x322 = 3;
	uint64_t x323 = UINT64_MAX;
	int32_t t80 = -29;

	t80 = (x321<((x322&x323)|x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x325 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = -5048135;

	t81 = (x325<((x326&x327)|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = -1;
	static int32_t x330 = 5023432;
	static volatile int16_t x331 = -1335;
	int32_t x332 = -1022073123;
	int32_t t82 = -1016;

	t82 = (x329<((x330&x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	volatile int16_t x334 = INT16_MIN;
	int8_t x335 = -1;
	uint64_t x336 = 1637805559955254637LLU;
	int32_t t83 = -30922;

	t83 = (x333<((x334&x335)|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = 6U;
	int8_t x339 = INT8_MIN;
	uint8_t x340 = 0U;
	int32_t t84 = 15038326;

	t84 = (x337<((x338&x339)|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x342 = 8561LLU;
	volatile int32_t t85 = -7751901;

	t85 = (x341<((x342&x343)|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x346 = INT8_MIN;
	static uint16_t x347 = UINT16_MAX;
	int8_t x348 = INT8_MIN;

	t86 = (x345<((x346&x347)|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x350 = UINT64_MAX;
	static volatile uint64_t x351 = 72670392916912196LLU;
	int8_t x352 = -1;
	int32_t t87 = -1764;

	t87 = (x349<((x350&x351)|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	volatile uint8_t x354 = 8U;
	int32_t x355 = INT32_MAX;
	static int64_t x356 = INT64_MIN;
	static volatile int32_t t88 = 1;

	t88 = (x353<((x354&x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 24402U;
	int16_t x358 = -907;
	volatile uint8_t x359 = UINT8_MAX;
	int32_t x360 = INT32_MIN;
	int32_t t89 = 295134;

	t89 = (x357<((x358&x359)|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -4513009;
	static uint64_t x362 = UINT64_MAX;
	static volatile int32_t t90 = 10886788;

	t90 = (x361<((x362&x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x366 = 9U;
	volatile int64_t x367 = 27396859879941LL;
	volatile int16_t x368 = 3717;
	static int32_t t91 = -167719809;

	t91 = (x365<((x366&x367)|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int32_t x370 = INT32_MIN;
	static uint16_t x371 = 25U;
	volatile int32_t t92 = -1;

	t92 = (x369<((x370&x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 10;
	int32_t x375 = -1;
	int16_t x376 = INT16_MAX;

	t93 = (x373<((x374&x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -172971856;
	static volatile int64_t x378 = INT64_MAX;
	uint8_t x379 = 3U;
	static volatile int32_t x380 = 2074;
	volatile int32_t t94 = -81711;

	t94 = (x377<((x378&x379)|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	uint32_t x382 = 3274193U;
	int64_t x383 = INT64_MAX;
	volatile uint16_t x384 = 29930U;
	int32_t t95 = 2;

	t95 = (x381<((x382&x383)|x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = -10227549337855319LL;
	uint32_t x386 = 500446259U;
	int64_t x387 = -119264598436751574LL;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t96 = 71634;

	t96 = (x385<((x386&x387)|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	uint8_t x392 = 1U;
	int32_t t97 = 941105860;

	t97 = (x389<((x390&x391)|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x394 = UINT32_MAX;
	static volatile int64_t x395 = INT64_MIN;
	uint64_t x396 = 10742LLU;

	t98 = (x393<((x394&x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 9U;
	int64_t x399 = -1LL;
	int32_t x400 = INT32_MAX;
	static volatile int32_t t99 = 0;

	t99 = (x397<((x398&x399)|x400));

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

