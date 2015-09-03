#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x8 = INT32_MIN;
int32_t t1 = -30647408;
uint64_t x17 = 8LLU;
static int32_t x21 = -1192;
int16_t x29 = INT16_MAX;
uint8_t x31 = UINT8_MAX;
int64_t x34 = INT64_MIN;
int64_t x35 = INT64_MIN;
static volatile int32_t t8 = 2800215;
int32_t x39 = INT32_MAX;
volatile uint16_t x41 = 405U;
int8_t x44 = INT8_MIN;
volatile int32_t t10 = 7;
int8_t x49 = 30;
int16_t x62 = INT16_MIN;
static int32_t t15 = -96993170;
int64_t x83 = -6357161LL;
volatile int16_t x84 = -1;
int8_t x85 = -1;
volatile int8_t x88 = INT8_MIN;
static volatile int8_t x89 = INT8_MAX;
volatile uint64_t x93 = UINT64_MAX;
int64_t x95 = INT64_MIN;
volatile int32_t t23 = 406496142;
volatile uint32_t x97 = 127724U;
int64_t x99 = INT64_MIN;
volatile int32_t x102 = INT32_MIN;
int32_t t25 = 0;
uint8_t x105 = UINT8_MAX;
static uint32_t x107 = 145U;
volatile int64_t x110 = INT64_MAX;
volatile int16_t x111 = 1326;
int64_t x112 = INT64_MIN;
int16_t x116 = INT16_MIN;
int32_t x120 = -1823;
int16_t x130 = INT16_MIN;
volatile int32_t t33 = -15;
int32_t x137 = -62;
int32_t x139 = INT32_MIN;
uint32_t x141 = 1157U;
int8_t x157 = INT8_MAX;
volatile int32_t t39 = 3;
static volatile uint64_t x163 = UINT64_MAX;
volatile uint16_t x170 = 877U;
volatile int32_t t42 = 13547785;
int32_t t43 = 23213;
static uint8_t x180 = 51U;
static uint16_t x181 = 6U;
int32_t t49 = 59;
int64_t x202 = 111852254303LL;
int64_t x203 = INT64_MIN;
int16_t x206 = INT16_MAX;
uint16_t x207 = UINT16_MAX;
static uint32_t x216 = 98009612U;
uint8_t x217 = 112U;
static volatile int64_t x220 = INT64_MIN;
volatile int64_t x223 = -1LL;
static volatile int32_t t55 = 435680;
volatile uint64_t x231 = 3326LLU;
int8_t x241 = -2;
volatile uint16_t x244 = 0U;
uint64_t x245 = UINT64_MAX;
int32_t x246 = 19581;
volatile int32_t t63 = -10100;
volatile int32_t t64 = 0;
static int32_t x263 = INT32_MAX;
volatile int32_t t65 = -436414424;
volatile int32_t t67 = 1;
uint16_t x277 = 253U;
int32_t x279 = INT32_MIN;
int32_t t69 = -8842;
int8_t x289 = INT8_MIN;
int8_t x290 = INT8_MIN;
uint8_t x292 = UINT8_MAX;
static volatile int32_t t73 = 5377115;
volatile int32_t t74 = 439;
volatile int32_t t75 = 1;
uint32_t x306 = 2097U;
static int32_t t76 = -3082;
int32_t x309 = -126;
uint64_t x310 = 8873364073426851LLU;
int64_t x318 = 4401345894LL;
volatile int32_t t80 = 3307882;
int16_t x332 = INT16_MIN;
static volatile int32_t t85 = 79382;
uint32_t x345 = 913U;
uint32_t x346 = UINT32_MAX;
int16_t x355 = INT16_MAX;
uint32_t x364 = 39743U;
volatile int32_t t90 = -3244341;
uint16_t x365 = 15649U;
volatile int64_t x369 = -1LL;
static int32_t t92 = 204;
uint16_t x376 = UINT16_MAX;
int8_t x383 = -13;
volatile int32_t t96 = 206706816;
int8_t x392 = INT8_MIN;
int32_t t97 = -7;


void f0(void) {
	uint16_t x1 = 6U;
	static volatile uint8_t x2 = UINT8_MAX;
	uint16_t x3 = 57U;
	volatile uint64_t x4 = 1LLU;
	volatile int32_t t0 = -1580887;

	t0 = (x1<((x2==x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 40U;
	int16_t x6 = INT16_MIN;
	volatile int16_t x7 = INT16_MAX;

	t1 = (x5<((x6==x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint8_t x10 = 3U;
	int8_t x11 = 1;
	uint16_t x12 = 6830U;
	int32_t t2 = -4;

	t2 = (x9<((x10==x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint32_t x14 = 0U;
	uint32_t x15 = 47U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 70960611;

	t3 = (x13<((x14==x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	volatile int64_t x19 = -1LL;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = -605930470;

	t4 = (x17<((x18==x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = UINT32_MAX;
	static int32_t x23 = INT32_MAX;
	int16_t x24 = 0;
	int32_t t5 = -152300282;

	t5 = (x21<((x22==x23)<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile int32_t x26 = INT32_MIN;
	uint16_t x27 = UINT16_MAX;
	static int8_t x28 = INT8_MIN;
	int32_t t6 = -54483620;

	t6 = (x25<((x26==x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = UINT8_MAX;
	int16_t x32 = 0;
	volatile int32_t t7 = 9987;

	t7 = (x29<((x30==x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -5541;
	int32_t x36 = 2;

	t8 = (x33<((x34==x35)<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = 137U;
	volatile uint32_t x40 = 6994886U;
	int32_t t9 = -16569350;

	t9 = (x37<((x38==x39)<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	volatile int8_t x43 = 14;

	t10 = (x41<((x42==x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	static uint32_t x46 = 109545746U;
	int16_t x47 = 791;
	static int16_t x48 = INT16_MAX;
	int32_t t11 = -1997656;

	t11 = (x45<((x46==x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x50 = INT8_MAX;
	int8_t x51 = INT8_MIN;
	int16_t x52 = 8;
	static int32_t t12 = -5;

	t12 = (x49<((x50==x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 59U;
	static int64_t x54 = 117081051699465048LL;
	volatile int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	int32_t t13 = 5;

	t13 = (x53<((x54==x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	volatile int8_t x58 = INT8_MIN;
	int8_t x59 = 60;
	int16_t x60 = -925;
	volatile int32_t t14 = -1026401;

	t14 = (x57<((x58==x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x63 = INT8_MIN;
	static uint64_t x64 = 6798531942209595LLU;

	t15 = (x61<((x62==x63)<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -32321198131922538LL;
	int16_t x66 = INT16_MAX;
	int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;
	int32_t t16 = 16115;

	t16 = (x65<((x66==x67)<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 0;
	int32_t x70 = INT32_MIN;
	int8_t x71 = INT8_MIN;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -3;

	t17 = (x69<((x70==x71)<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int16_t x74 = -1;
	int8_t x75 = INT8_MAX;
	int32_t x76 = -1;
	volatile int32_t t18 = 6334;

	t18 = (x73<((x74==x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = -1;
	int16_t x79 = INT16_MIN;
	int32_t x80 = -1;
	static int32_t t19 = -55054308;

	t19 = (x77<((x78==x79)<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = -1LL;
	volatile int16_t x82 = 59;
	volatile int32_t t20 = 29;

	t20 = (x81<((x82==x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	static volatile uint32_t x87 = 10919532U;
	int32_t t21 = -47172080;

	t21 = (x85<((x86==x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = -54;
	int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MAX;
	int32_t t22 = -174;

	t22 = (x89<((x90==x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = INT32_MIN;
	int64_t x96 = 3527453478LL;

	t23 = (x93<((x94==x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x98 = -1;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = -1;

	t24 = (x97<((x98==x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int32_t x103 = -1;
	static int64_t x104 = 12LL;

	t25 = (x101<((x102==x103)<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 0U;
	uint32_t x108 = 8U;
	int32_t t26 = -15;

	t26 = (x105<((x106==x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 119468870863LLU;
	volatile int32_t t27 = -1;

	t27 = (x109<((x110==x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	int16_t x115 = 10;
	static int32_t t28 = 450;

	t28 = (x113<((x114==x115)<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 8751;
	int64_t x118 = -356LL;
	int8_t x119 = 41;
	volatile int32_t t29 = -146198486;

	t29 = (x117<((x118==x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -26364900471LL;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = 7853U;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 33764;

	t30 = (x121<((x122==x123)<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int64_t x126 = 24623487177552961LL;
	int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 7929555;

	t31 = (x125<((x126==x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MAX;
	volatile int16_t x131 = INT16_MAX;
	static int32_t x132 = -230784464;
	int32_t t32 = 16314;

	t32 = (x129<((x130==x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	volatile int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MAX;
	static uint32_t x136 = 86U;

	t33 = (x133<((x134==x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 8U;
	volatile int64_t x140 = INT64_MAX;
	volatile int32_t t34 = 429805;

	t34 = (x137<((x138==x139)<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x142 = INT32_MIN;
	volatile uint32_t x143 = UINT32_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t35 = -59349021;

	t35 = (x141<((x142==x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 4U;
	volatile int32_t x146 = INT32_MIN;
	int16_t x147 = -1;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = -3375;

	t36 = (x145<((x146==x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	uint8_t x152 = UINT8_MAX;
	int32_t t37 = -47252412;

	t37 = (x149<((x150==x151)<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = 46;
	uint16_t x154 = 7488U;
	int16_t x155 = INT16_MIN;
	static uint16_t x156 = 734U;
	volatile int32_t t38 = 757;

	t38 = (x153<((x154==x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = UINT64_MAX;
	volatile uint64_t x159 = UINT64_MAX;
	int8_t x160 = 1;

	t39 = (x157<((x158==x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	volatile uint32_t x162 = 7U;
	static uint64_t x164 = 41740114307LLU;
	volatile int32_t t40 = -2369181;

	t40 = (x161<((x162==x163)<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = 10U;
	static volatile int8_t x166 = INT8_MIN;
	static volatile int8_t x167 = 1;
	uint64_t x168 = UINT64_MAX;
	volatile int32_t t41 = 979;

	t41 = (x165<((x166==x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	volatile uint8_t x171 = 29U;
	int64_t x172 = -1LL;

	t42 = (x169<((x170==x171)<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MAX;
	int32_t x174 = INT32_MIN;
	volatile int32_t x175 = INT32_MIN;
	static uint8_t x176 = 2U;

	t43 = (x173<((x174==x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	static int32_t x178 = INT32_MIN;
	static int16_t x179 = -1;
	int32_t t44 = -1;

	t44 = (x177<((x178==x179)<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = UINT8_MAX;
	static volatile uint64_t x183 = UINT64_MAX;
	volatile uint64_t x184 = UINT64_MAX;
	int32_t t45 = 110;

	t45 = (x181<((x182==x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = UINT64_MAX;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = UINT16_MAX;
	uint64_t x188 = UINT64_MAX;
	static int32_t t46 = -66422942;

	t46 = (x185<((x186==x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 14823056;
	static int8_t x190 = 1;
	int8_t x191 = -47;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = 1;

	t47 = (x189<((x190==x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -184;
	volatile uint32_t x194 = 3783U;
	int64_t x195 = -1LL;
	int16_t x196 = INT16_MIN;
	volatile int32_t t48 = -4;

	t48 = (x193<((x194==x195)<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	static uint8_t x200 = UINT8_MAX;

	t49 = (x197<((x198==x199)<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static int32_t x204 = INT32_MAX;
	volatile int32_t t50 = -22102072;

	t50 = (x201<((x202==x203)<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int64_t x208 = 12447LL;
	volatile int32_t t51 = -6;

	t51 = (x205<((x206==x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MIN;
	int8_t x210 = -19;
	static int64_t x211 = INT64_MIN;
	int32_t x212 = -201291;
	volatile int32_t t52 = -13;

	t52 = (x209<((x210==x211)<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static int64_t x214 = 2LL;
	static int8_t x215 = INT8_MIN;
	int32_t t53 = 304641;

	t53 = (x213<((x214==x215)<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x218 = 1945134LLU;
	int16_t x219 = -603;
	int32_t t54 = -12;

	t54 = (x217<((x218==x219)<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 62923732029754846LLU;
	uint8_t x222 = 1U;
	int64_t x224 = -51879479174LL;

	t55 = (x221<((x222==x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MIN;
	static int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MAX;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -2529504;

	t56 = (x225<((x226==x227)<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = 308144547451735800LLU;
	volatile int32_t x230 = -1523;
	int64_t x232 = INT64_MAX;
	int32_t t57 = -35533;

	t57 = (x229<((x230==x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	volatile int32_t x234 = 2;
	int8_t x235 = INT8_MIN;
	int8_t x236 = -25;
	int32_t t58 = -26704;

	t58 = (x233<((x234==x235)<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = UINT8_MAX;
	uint8_t x238 = UINT8_MAX;
	uint8_t x239 = 13U;
	int16_t x240 = INT16_MAX;
	int32_t t59 = 114665031;

	t59 = (x237<((x238==x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x242 = UINT32_MAX;
	volatile int32_t x243 = -1;
	volatile int32_t t60 = 55;

	t60 = (x241<((x242==x243)<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x247 = INT16_MIN;
	static uint8_t x248 = 1U;
	static volatile int32_t t61 = -2703954;

	t61 = (x245<((x246==x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -7833;
	int64_t x250 = INT64_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile uint8_t x252 = 25U;
	static volatile int32_t t62 = 54658;

	t62 = (x249<((x250==x251)<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = -1;
	int16_t x255 = INT16_MAX;
	int16_t x256 = 58;

	t63 = (x253<((x254==x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 2033714554LLU;
	int32_t x258 = INT32_MIN;
	int32_t x259 = 33;
	volatile int16_t x260 = INT16_MIN;

	t64 = (x257<((x258==x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x261 = 3781427;
	volatile int32_t x262 = INT32_MIN;
	static uint32_t x264 = 1U;

	t65 = (x261<((x262==x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 7U;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	uint64_t x268 = 216371LLU;
	static volatile int32_t t66 = 735;

	t66 = (x265<((x266==x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x269 = 9679712U;
	static uint16_t x270 = UINT16_MAX;
	uint32_t x271 = 14778599U;
	static volatile int16_t x272 = INT16_MIN;

	t67 = (x269<((x270==x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	volatile int16_t x274 = -52;
	int16_t x275 = 6;
	uint16_t x276 = UINT16_MAX;
	int32_t t68 = -2424184;

	t68 = (x273<((x274==x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = -143LL;
	int64_t x280 = 34625432675LL;

	t69 = (x277<((x278==x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 49693725703LLU;
	int8_t x282 = INT8_MAX;
	uint8_t x283 = 12U;
	volatile int16_t x284 = INT16_MIN;
	int32_t t70 = -102;

	t70 = (x281<((x282==x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = UINT64_MAX;
	static int8_t x286 = INT8_MIN;
	static int16_t x287 = INT16_MIN;
	int32_t x288 = 46261;
	int32_t t71 = -80868715;

	t71 = (x285<((x286==x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x291 = 20;
	volatile int32_t t72 = 1138054;

	t72 = (x289<((x290==x291)<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	int8_t x294 = -10;
	static int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MAX;

	t73 = (x293<((x294==x295)<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	uint64_t x298 = 12592909686608LLU;
	int32_t x299 = INT32_MIN;
	volatile int64_t x300 = INT64_MAX;

	t74 = (x297<((x298==x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	volatile int16_t x302 = INT16_MIN;
	int16_t x303 = -1;
	int32_t x304 = -2287125;

	t75 = (x301<((x302==x303)<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -15125;
	uint64_t x307 = UINT64_MAX;
	uint64_t x308 = 12LLU;

	t76 = (x305<((x306==x307)<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x311 = INT8_MAX;
	volatile uint8_t x312 = 3U;
	int32_t t77 = -39292;

	t77 = (x309<((x310==x311)<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 1;
	volatile int8_t x314 = 3;
	uint64_t x315 = 252737180585426178LLU;
	int16_t x316 = INT16_MAX;
	int32_t t78 = 44;

	t78 = (x313<((x314==x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	static int64_t x319 = -1LL;
	static int32_t x320 = -25292684;
	int32_t t79 = -45;

	t79 = (x317<((x318==x319)<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	volatile int16_t x323 = -1;
	volatile uint64_t x324 = UINT64_MAX;

	t80 = (x321<((x322==x323)<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 19187U;
	static int16_t x326 = INT16_MIN;
	uint16_t x327 = 23653U;
	volatile int64_t x328 = 1683527357514829777LL;
	int32_t t81 = -1037458;

	t81 = (x325<((x326==x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint32_t x330 = UINT32_MAX;
	int32_t x331 = INT32_MIN;
	int32_t t82 = -66161706;

	t82 = (x329<((x330==x331)<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int16_t x334 = INT16_MIN;
	int32_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	static volatile int32_t t83 = -176;

	t83 = (x333<((x334==x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 2055996LLU;
	volatile uint8_t x338 = 26U;
	uint16_t x339 = UINT16_MAX;
	uint8_t x340 = 1U;
	volatile int32_t t84 = 58898848;

	t84 = (x337<((x338==x339)<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	uint16_t x342 = UINT16_MAX;
	uint64_t x343 = 42986003LLU;
	int64_t x344 = -33269326945828143LL;

	t85 = (x341<((x342==x343)<=x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x347 = 26U;
	volatile int16_t x348 = INT16_MAX;
	int32_t t86 = 1;

	t86 = (x345<((x346==x347)<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	static uint64_t x350 = 90003872932LLU;
	static uint8_t x351 = 50U;
	uint32_t x352 = 2U;
	int32_t t87 = 24687939;

	t87 = (x349<((x350==x351)<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MAX;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = -7420730;

	t88 = (x353<((x354==x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 12291242U;
	int32_t x358 = 357391944;
	uint32_t x359 = 22592U;
	volatile int8_t x360 = 16;
	int32_t t89 = 63105;

	t89 = (x357<((x358==x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	volatile uint32_t x362 = 45U;
	static uint16_t x363 = 131U;

	t90 = (x361<((x362==x363)<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = 63LL;
	int16_t x367 = 13;
	volatile uint64_t x368 = 12473210LLU;
	int32_t t91 = 373032591;

	t91 = (x365<((x366==x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x370 = INT32_MIN;
	uint16_t x371 = 12U;
	int16_t x372 = -1;

	t92 = (x369<((x370==x371)<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	int16_t x374 = -1;
	volatile int32_t x375 = INT32_MIN;
	volatile int32_t t93 = -132387779;

	t93 = (x373<((x374==x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	uint8_t x378 = UINT8_MAX;
	int32_t x379 = INT32_MIN;
	int8_t x380 = -1;
	static volatile int32_t t94 = 15;

	t94 = (x377<((x378==x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MAX;
	uint16_t x384 = UINT16_MAX;
	int32_t t95 = 66226585;

	t95 = (x381<((x382==x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -5;
	volatile uint32_t x386 = 123506U;
	uint8_t x387 = 7U;
	uint8_t x388 = 0U;

	t96 = (x385<((x386==x387)<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = 6;
	static int64_t x390 = -1LL;
	int64_t x391 = INT64_MIN;

	t97 = (x389<((x390==x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	uint16_t x394 = 44U;
	int16_t x395 = 209;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -1;

	t98 = (x393<((x394==x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = -1;
	volatile int32_t x399 = INT32_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 12090;

	t99 = (x397<((x398==x399)<=x400));

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

