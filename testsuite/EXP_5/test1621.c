#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = INT64_MIN;
int64_t x9 = -1LL;
int64_t x19 = -1LL;
uint32_t x22 = UINT32_MAX;
volatile int8_t x26 = INT8_MIN;
static int32_t x30 = INT32_MAX;
volatile int64_t x37 = INT64_MIN;
int64_t x40 = -1LL;
int8_t x45 = 1;
int16_t x50 = INT16_MIN;
int32_t t14 = -55629728;
uint32_t x66 = 3050U;
int16_t x71 = -1;
int8_t x74 = INT8_MIN;
volatile int32_t t18 = -1332;
int16_t x77 = INT16_MIN;
volatile int32_t t20 = 0;
int32_t t22 = 1;
int32_t t23 = -919687;
int16_t x97 = 1;
volatile int32_t t24 = -6949;
int64_t x101 = INT64_MIN;
int8_t x106 = -3;
volatile uint16_t x112 = 9562U;
volatile int32_t t27 = 10;
int8_t x114 = -1;
volatile int8_t x116 = INT8_MIN;
static int32_t x117 = INT32_MAX;
int64_t x118 = 717719001904924LL;
volatile int32_t t29 = -2409768;
int8_t x125 = 2;
uint64_t x128 = UINT64_MAX;
int8_t x131 = INT8_MIN;
int32_t x138 = 12;
uint64_t x140 = 57616903LLU;
int16_t x142 = INT16_MIN;
volatile int32_t x144 = -1;
int32_t x150 = -67451;
int8_t x156 = 0;
volatile int32_t t38 = 325;
int32_t x166 = INT32_MAX;
int32_t t41 = 10066;
static volatile int8_t x173 = -47;
int32_t t45 = 64534;
int32_t t46 = -84505;
uint8_t x192 = 28U;
int8_t x195 = 0;
int16_t x196 = INT16_MIN;
volatile uint32_t x198 = UINT32_MAX;
int16_t x200 = -6;
static uint64_t x201 = 32822795LLU;
static volatile int32_t t50 = 3;
static uint32_t x207 = 2255U;
static volatile int32_t t51 = 240952696;
static uint64_t x211 = 325821LLU;
uint64_t x212 = UINT64_MAX;
int32_t x215 = -1;
volatile uint32_t x216 = 1408266767U;
static int32_t x219 = 245449530;
static int32_t t54 = -6;
int16_t x222 = INT16_MIN;
int64_t x229 = INT64_MAX;
volatile int8_t x230 = 0;
int32_t t57 = 21;
int32_t x236 = INT32_MAX;
static int32_t t58 = -56903;
volatile int32_t t59 = -197750;
uint8_t x244 = 6U;
int32_t x246 = INT32_MIN;
volatile int8_t x254 = -1;
int64_t x272 = 388570917LL;
static int32_t t67 = 2;
uint64_t x274 = 2492531751434026591LLU;
volatile int32_t t69 = 423;
int32_t x286 = 65660404;
uint32_t x297 = UINT32_MAX;
static volatile int32_t t74 = -197450048;
static int16_t x305 = 1;
static int32_t t78 = 56;
uint8_t x318 = UINT8_MAX;
uint8_t x319 = 6U;
volatile int32_t t81 = 3100167;
volatile int8_t x331 = INT8_MIN;
volatile uint32_t x334 = 2400U;
volatile int32_t t83 = 203;
volatile uint32_t x339 = 35437U;
static volatile int64_t x341 = 235730691305LL;
int8_t x347 = INT8_MIN;
volatile int64_t x350 = -1LL;
volatile int64_t x362 = INT64_MIN;
static int64_t x367 = INT64_MIN;
volatile int32_t t91 = 146;
static volatile int32_t x383 = 28618511;
int32_t x388 = 11699887;
int32_t x391 = INT32_MIN;
int8_t x395 = INT8_MIN;
volatile int16_t x396 = -1;
int64_t x397 = -1LL;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MAX;
	volatile uint8_t x4 = 2U;
	volatile int32_t t0 = -5700473;

	t0 = (x1<((x2<=x3)==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 7U;
	uint16_t x6 = 338U;
	int32_t x7 = -460;
	static volatile uint16_t x8 = 14945U;
	int32_t t1 = 58614953;

	t1 = (x5<((x6<=x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -23;
	volatile int32_t x11 = -6787;
	int64_t x12 = INT64_MAX;
	int32_t t2 = -16202512;

	t2 = (x9<((x10<=x11)==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int64_t x14 = 98LL;
	int64_t x15 = -1LL;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -29269996;

	t3 = (x13<((x14<=x15)==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int64_t x18 = INT64_MIN;
	volatile int8_t x20 = INT8_MAX;
	int32_t t4 = -436778;

	t4 = (x17<((x18<=x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 260946127;
	int8_t x23 = INT8_MAX;
	uint16_t x24 = 9U;
	volatile int32_t t5 = 3528266;

	t5 = (x21<((x22<=x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 559074098U;
	static int16_t x27 = -1;
	uint64_t x28 = UINT64_MAX;
	int32_t t6 = 413779;

	t6 = (x25<((x26<=x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = 267U;
	static int32_t t7 = -117574310;

	t7 = (x29<((x30<=x31)==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int16_t x34 = -116;
	int16_t x35 = -1;
	volatile int8_t x36 = 9;
	volatile int32_t t8 = 700772;

	t8 = (x33<((x34<=x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 20U;
	int8_t x39 = INT8_MIN;
	volatile int32_t t9 = 0;

	t9 = (x37<((x38<=x39)==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int64_t x42 = INT64_MIN;
	static uint16_t x43 = UINT16_MAX;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -1;

	t10 = (x41<((x42<=x43)==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	uint8_t x47 = 5U;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -194845;

	t11 = (x45<((x46<=x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	volatile int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -10249233;

	t12 = (x49<((x50<=x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 0U;
	int32_t x54 = -1;
	static volatile int64_t x55 = INT64_MIN;
	volatile uint16_t x56 = 0U;
	volatile int32_t t13 = -12416779;

	t13 = (x53<((x54<=x55)==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint8_t x58 = 28U;
	int8_t x59 = INT8_MIN;
	int64_t x60 = 234372990LL;

	t14 = (x57<((x58<=x59)==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MAX;
	int32_t x63 = INT32_MIN;
	int8_t x64 = -22;
	volatile int32_t t15 = -54549498;

	t15 = (x61<((x62<=x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	int32_t x67 = INT32_MIN;
	int16_t x68 = -7186;
	int32_t t16 = -9137220;

	t16 = (x65<((x66<=x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = -1;
	volatile uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = -33172;

	t17 = (x69<((x70<=x71)==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 97U;
	volatile uint16_t x75 = 235U;
	uint8_t x76 = 99U;

	t18 = (x73<((x74<=x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = 29030779;
	static int16_t x79 = INT16_MIN;
	int32_t x80 = 807;
	static int32_t t19 = 0;

	t19 = (x77<((x78<=x79)==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	static int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MAX;
	volatile int8_t x84 = -1;

	t20 = (x81<((x82<=x83)==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	static volatile uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MIN;
	volatile int8_t x88 = -1;
	volatile int32_t t21 = 12449320;

	t21 = (x85<((x86<=x87)==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MAX;
	int64_t x90 = INT64_MAX;
	volatile int16_t x91 = INT16_MIN;
	int8_t x92 = -1;

	t22 = (x89<((x90<=x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	static uint8_t x95 = 73U;
	uint16_t x96 = 7U;

	t23 = (x93<((x94<=x95)==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = INT64_MIN;
	int8_t x99 = -1;
	uint16_t x100 = 4U;

	t24 = (x97<((x98<=x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = 1199977050U;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = 104U;
	volatile int32_t t25 = 12;

	t25 = (x101<((x102<=x103)==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = UINT32_MAX;
	volatile int32_t x107 = -1;
	int8_t x108 = -1;
	int32_t t26 = -3;

	t26 = (x105<((x106<=x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x109 = 360014U;
	int8_t x110 = 2;
	int16_t x111 = -1;

	t27 = (x109<((x110<=x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	int64_t x115 = INT64_MAX;
	static int32_t t28 = -87;

	t28 = (x113<((x114<=x115)==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x119 = UINT64_MAX;
	uint16_t x120 = 7190U;

	t29 = (x117<((x118<=x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 6981580118085969LL;
	static int32_t x122 = INT32_MAX;
	int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = -23495;

	t30 = (x121<((x122<=x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = 1;
	int8_t x127 = -1;
	volatile int32_t t31 = 47;

	t31 = (x125<((x126<=x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	uint32_t x130 = UINT32_MAX;
	volatile int8_t x132 = -3;
	static int32_t t32 = -5;

	t32 = (x129<((x130<=x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 3U;
	uint16_t x134 = UINT16_MAX;
	int16_t x135 = -1;
	volatile int16_t x136 = 8071;
	static int32_t t33 = -30706;

	t33 = (x133<((x134<=x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x137 = 21659644;
	uint64_t x139 = 1008777205LLU;
	volatile int32_t t34 = 43;

	t34 = (x137<((x138<=x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	uint16_t x143 = 5U;
	int32_t t35 = 28034;

	t35 = (x141<((x142<=x143)==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MAX;
	uint16_t x146 = 9U;
	uint64_t x147 = UINT64_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = -12;

	t36 = (x145<((x146<=x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 0;
	uint32_t x151 = 78122023U;
	uint64_t x152 = 3LLU;
	static volatile int32_t t37 = 1;

	t37 = (x149<((x150<=x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 6723129583678762LLU;
	int32_t x154 = -1;
	int16_t x155 = INT16_MIN;

	t38 = (x153<((x154<=x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MAX;
	static uint8_t x159 = 6U;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 39136069;

	t39 = (x157<((x158<=x159)==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	volatile int16_t x162 = INT16_MAX;
	static volatile int64_t x163 = 3982919923105134LL;
	int8_t x164 = -1;
	volatile int32_t t40 = -5;

	t40 = (x161<((x162<=x163)==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MIN;
	static volatile int8_t x167 = INT8_MAX;
	uint64_t x168 = UINT64_MAX;

	t41 = (x165<((x166<=x167)==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = -1;
	uint16_t x170 = 477U;
	static int8_t x171 = -1;
	volatile int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 9;

	t42 = (x169<((x170<=x171)==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = 0;
	int16_t x175 = INT16_MAX;
	static int8_t x176 = INT8_MIN;
	int32_t t43 = 8073;

	t43 = (x173<((x174<=x175)==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MAX;
	uint8_t x178 = UINT8_MAX;
	uint8_t x179 = 8U;
	int64_t x180 = INT64_MIN;
	static int32_t t44 = 1;

	t44 = (x177<((x178<=x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 49U;
	volatile uint8_t x182 = 0U;
	uint8_t x183 = 10U;
	int16_t x184 = -1;

	t45 = (x181<((x182<=x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	uint32_t x186 = UINT32_MAX;
	static uint64_t x187 = 2LLU;
	static int16_t x188 = -1;

	t46 = (x185<((x186<=x187)==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -763564529919441LL;
	int16_t x190 = -3811;
	int64_t x191 = INT64_MAX;
	volatile int32_t t47 = 6897694;

	t47 = (x189<((x190<=x191)==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -188;
	static int16_t x194 = INT16_MIN;
	int32_t t48 = 5;

	t48 = (x193<((x194<=x195)==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 389444LL;
	uint64_t x199 = UINT64_MAX;
	volatile int32_t t49 = -181446;

	t49 = (x197<((x198<=x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MAX;
	static int32_t x204 = INT32_MIN;

	t50 = (x201<((x202<=x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 0U;
	int64_t x206 = INT64_MAX;
	uint32_t x208 = 2U;

	t51 = (x205<((x206<=x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -97;
	int64_t x210 = INT64_MIN;
	volatile int32_t t52 = 3411602;

	t52 = (x209<((x210<=x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -3;
	uint32_t x214 = 1532225915U;
	int32_t t53 = 172;

	t53 = (x213<((x214<=x215)==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = 1;
	uint16_t x218 = 1064U;
	uint16_t x220 = UINT16_MAX;

	t54 = (x217<((x218<=x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = -1LL;
	static int8_t x223 = INT8_MAX;
	volatile int32_t x224 = INT32_MIN;
	static int32_t t55 = -231590;

	t55 = (x221<((x222<=x223)==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = 38U;
	volatile uint16_t x226 = 3U;
	int8_t x227 = -1;
	int64_t x228 = 14LL;
	volatile int32_t t56 = -240;

	t56 = (x225<((x226<=x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x231 = -1;
	static volatile int16_t x232 = INT16_MAX;

	t57 = (x229<((x230<=x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 3310U;
	int16_t x234 = -1;
	volatile uint8_t x235 = 24U;

	t58 = (x233<((x234<=x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	uint32_t x238 = 194U;
	int8_t x239 = 1;
	int16_t x240 = -1;

	t59 = (x237<((x238<=x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	uint64_t x242 = 643428211LLU;
	int16_t x243 = INT16_MAX;
	static volatile int32_t t60 = -260741651;

	t60 = (x241<((x242<=x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 7U;
	uint64_t x247 = 1016LLU;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = -51566852;

	t61 = (x245<((x246<=x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -56;
	int16_t x250 = INT16_MIN;
	static int16_t x251 = -1;
	uint16_t x252 = 28038U;
	static volatile int32_t t62 = 15479807;

	t62 = (x249<((x250<=x251)==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x255 = INT16_MIN;
	int8_t x256 = -1;
	int32_t t63 = -2;

	t63 = (x253<((x254<=x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int16_t x258 = 5860;
	volatile int32_t x259 = INT32_MIN;
	int32_t x260 = INT32_MIN;
	static volatile int32_t t64 = -53278398;

	t64 = (x257<((x258<=x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = -10;
	uint8_t x262 = 0U;
	int64_t x263 = -2148188206585307423LL;
	uint32_t x264 = 6U;
	static int32_t t65 = -1619715;

	t65 = (x261<((x262<=x263)==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 1505U;
	static uint16_t x266 = 0U;
	int16_t x267 = 1;
	int64_t x268 = -1LL;
	int32_t t66 = 180886;

	t66 = (x265<((x266<=x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 67156LLU;
	int16_t x270 = INT16_MAX;
	uint64_t x271 = 212159417369949LLU;

	t67 = (x269<((x270<=x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MAX;
	uint8_t x275 = 4U;
	uint16_t x276 = 2U;
	volatile int32_t t68 = -88;

	t68 = (x273<((x274<=x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int16_t x278 = -11;
	int16_t x279 = 940;
	static uint16_t x280 = UINT16_MAX;

	t69 = (x277<((x278<=x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 2942U;
	volatile uint8_t x282 = UINT8_MAX;
	volatile uint8_t x283 = UINT8_MAX;
	int8_t x284 = -1;
	volatile int32_t t70 = -9;

	t70 = (x281<((x282<=x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	static volatile uint8_t x287 = UINT8_MAX;
	volatile int8_t x288 = 60;
	int32_t t71 = -38401;

	t71 = (x285<((x286<=x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 6U;
	uint32_t x290 = 4462U;
	int64_t x291 = -15204615714LL;
	int32_t x292 = 13130;
	static int32_t t72 = -3;

	t72 = (x289<((x290<=x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	static int32_t x294 = 1;
	int64_t x295 = INT64_MIN;
	static int16_t x296 = -1;
	int32_t t73 = 3;

	t73 = (x293<((x294<=x295)==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = -1;
	volatile int8_t x299 = -1;
	uint32_t x300 = 406142319U;

	t74 = (x297<((x298<=x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	static int64_t x302 = -1LL;
	int8_t x303 = INT8_MAX;
	static int16_t x304 = INT16_MIN;
	int32_t t75 = 54240852;

	t75 = (x301<((x302<=x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x306 = 7U;
	int16_t x307 = 20;
	volatile int32_t x308 = INT32_MAX;
	volatile int32_t t76 = 5;

	t76 = (x305<((x306<=x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	static uint16_t x310 = 1U;
	static uint64_t x311 = 217711074709448400LLU;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 0;

	t77 = (x309<((x310<=x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	uint16_t x314 = 1U;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 2U;

	t78 = (x313<((x314<=x315)==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int64_t x320 = INT64_MAX;
	volatile int32_t t79 = -8264;

	t79 = (x317<((x318<=x319)==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 897303386;
	int32_t x322 = INT32_MIN;
	volatile int64_t x323 = -7073049LL;
	int16_t x324 = INT16_MIN;
	static int32_t t80 = 6;

	t80 = (x321<((x322<=x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	uint16_t x326 = UINT16_MAX;
	int8_t x327 = INT8_MAX;
	int64_t x328 = -37218570697LL;

	t81 = (x325<((x326<=x327)==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = 21U;
	int64_t x330 = -1595917769LL;
	static int16_t x332 = -1;
	volatile int32_t t82 = 435;

	t82 = (x329<((x330<=x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	volatile uint8_t x335 = 108U;
	uint32_t x336 = UINT32_MAX;

	t83 = (x333<((x334<=x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	static volatile int16_t x338 = 182;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t84 = 14208095;

	t84 = (x337<((x338<=x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -1LL;
	volatile int8_t x343 = INT8_MIN;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 351;

	t85 = (x341<((x342<=x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	static int8_t x346 = INT8_MAX;
	int32_t x348 = 1004;
	volatile int32_t t86 = 113805297;

	t86 = (x345<((x346<=x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 1568U;
	int16_t x351 = 1215;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -64765947;

	t87 = (x349<((x350<=x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	static int16_t x354 = 184;
	int32_t x355 = -17423177;
	int16_t x356 = -1;
	int32_t t88 = -197172;

	t88 = (x353<((x354<=x355)==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 13U;
	int64_t x358 = 126LL;
	int32_t x359 = INT32_MAX;
	static int32_t x360 = -1;
	static volatile int32_t t89 = 519724;

	t89 = (x357<((x358<=x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 20U;
	int32_t x363 = INT32_MIN;
	volatile int8_t x364 = -1;
	int32_t t90 = -1498720;

	t90 = (x361<((x362<=x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	uint32_t x366 = UINT32_MAX;
	uint64_t x368 = UINT64_MAX;

	t91 = (x365<((x366<=x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 1U;
	uint64_t x370 = 2090542501989LLU;
	int16_t x371 = INT16_MAX;
	int8_t x372 = 1;
	int32_t t92 = 95452;

	t92 = (x369<((x370<=x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = 61U;
	static volatile int64_t x374 = -11611LL;
	uint16_t x375 = 625U;
	static uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = -1556379;

	t93 = (x373<((x374<=x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	static int32_t x378 = -2737518;
	static int32_t x379 = -17;
	static int32_t x380 = INT32_MAX;
	int32_t t94 = -6;

	t94 = (x377<((x378<=x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	volatile uint8_t x382 = 20U;
	uint64_t x384 = 51064LLU;
	int32_t t95 = 361674876;

	t95 = (x381<((x382<=x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 1U;
	uint32_t x386 = 255324756U;
	int64_t x387 = -1LL;
	int32_t t96 = 0;

	t96 = (x385<((x386<=x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -1LL;
	uint32_t x390 = 44632U;
	int32_t x392 = -1;
	int32_t t97 = 309233;

	t97 = (x389<((x390<=x391)==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -9;
	uint16_t x394 = 27801U;
	int32_t t98 = -10;

	t98 = (x393<((x394<=x395)==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = 15495;
	int8_t x399 = -1;
	uint32_t x400 = UINT32_MAX;
	int32_t t99 = 16;

	t99 = (x397<((x398<=x399)==x400));

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

