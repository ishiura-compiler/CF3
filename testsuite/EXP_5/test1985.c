#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MAX;
static volatile int64_t x3 = -2796939050529LL;
int64_t x4 = INT64_MAX;
static volatile int32_t t4 = -86181003;
int64_t x23 = INT64_MIN;
uint16_t x29 = UINT16_MAX;
int8_t x36 = INT8_MIN;
static uint64_t x38 = 1428134650852689328LLU;
int32_t x43 = -1;
int32_t x45 = INT32_MAX;
static int64_t x46 = INT64_MAX;
int64_t x51 = -1LL;
static int8_t x68 = INT8_MAX;
int32_t x70 = 0;
volatile int16_t x71 = 0;
int8_t x78 = -62;
static int32_t x81 = -21147088;
uint8_t x84 = 1U;
static int32_t x92 = INT32_MIN;
static uint64_t x98 = 14160399706304741LLU;
int8_t x99 = INT8_MIN;
int16_t x100 = INT16_MIN;
int32_t x102 = 131342321;
int16_t x104 = 9;
int32_t t25 = -224835222;
int32_t t26 = -17449535;
uint32_t x111 = 20053U;
volatile int32_t x113 = INT32_MAX;
int64_t x120 = INT64_MAX;
volatile int64_t x121 = -1LL;
int32_t x124 = INT32_MIN;
volatile int32_t x128 = 2;
static int16_t x130 = INT16_MIN;
int32_t t32 = -1;
int32_t t33 = -13200;
volatile int8_t x145 = 0;
static volatile uint32_t x152 = 124641U;
volatile int32_t t39 = -2;
int64_t x165 = -1LL;
int8_t x175 = 1;
volatile int32_t t43 = -619905;
volatile int32_t t44 = 0;
int16_t x183 = INT16_MIN;
int8_t x187 = INT8_MIN;
volatile int32_t x198 = 498398;
volatile uint16_t x201 = 3798U;
static uint8_t x202 = 80U;
uint64_t x204 = 963996437LLU;
volatile int32_t t51 = -2;
int32_t x211 = -1;
volatile int32_t x216 = -18051864;
static int32_t t59 = -15;
int16_t x247 = -1;
int32_t t61 = -5;
volatile int32_t x249 = 24596445;
volatile int32_t x256 = 820566;
uint32_t x260 = 1667U;
uint8_t x262 = 26U;
int64_t x264 = -1LL;
int32_t x267 = INT32_MIN;
volatile int8_t x271 = -1;
static int8_t x274 = INT8_MIN;
uint16_t x276 = 1U;
int32_t x278 = INT32_MIN;
static int8_t x279 = INT8_MIN;
static volatile int32_t t69 = -8184;
int32_t x282 = -12977522;
uint8_t x284 = 0U;
int32_t t70 = 723444085;
static volatile uint8_t x298 = 7U;
int32_t t75 = -1576525;
int32_t x306 = -1;
static int64_t x310 = -1LL;
volatile int16_t x311 = INT16_MIN;
int16_t x312 = INT16_MIN;
int32_t t77 = -85871169;
uint8_t x313 = 0U;
uint8_t x314 = 2U;
uint64_t x318 = UINT64_MAX;
uint8_t x320 = UINT8_MAX;
uint8_t x324 = 27U;
int64_t x330 = 26768203933LL;
uint8_t x331 = 0U;
volatile uint32_t x335 = UINT32_MAX;
int32_t x337 = -29990;
uint16_t x341 = 1U;
static volatile uint16_t x342 = UINT16_MAX;
uint16_t x346 = UINT16_MAX;
int32_t t86 = 3;
int32_t x352 = 0;
int64_t x354 = -1LL;
int16_t x381 = INT16_MIN;
int8_t x392 = INT8_MAX;
static int32_t t97 = 93144;


void f0(void) {
	uint64_t x2 = 64400837LLU;
	int32_t t0 = 644033;

	t0 = (x1<((x2|x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = -173;
	int32_t x7 = INT32_MIN;
	int16_t x8 = -501;
	int32_t t1 = 9;

	t1 = (x5<((x6|x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 1;
	volatile int32_t x10 = INT32_MIN;
	int8_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	static volatile int32_t t2 = -14;

	t2 = (x9<((x10|x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	volatile int8_t x14 = -1;
	uint64_t x15 = 1647491864230LLU;
	int64_t x16 = -5153347147132LL;
	static int32_t t3 = -17592;

	t3 = (x13<((x14|x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -929734102LL;
	int8_t x18 = 0;
	int16_t x19 = 128;
	volatile uint64_t x20 = UINT64_MAX;

	t4 = (x17<((x18|x19)<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 25922U;
	int64_t x22 = -1LL;
	uint32_t x24 = UINT32_MAX;
	int32_t t5 = 14907;

	t5 = (x21<((x22|x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = 31;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -248;

	t6 = (x25<((x26|x27)<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 1458LLU;
	static uint8_t x31 = UINT8_MAX;
	int64_t x32 = -616901206324421410LL;
	static volatile int32_t t7 = -71;

	t7 = (x29<((x30|x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = 499377530;
	int32_t x35 = INT32_MIN;
	volatile int32_t t8 = -3;

	t8 = (x33<((x34|x35)<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int16_t x39 = -2757;
	volatile int64_t x40 = -1LL;
	volatile int32_t t9 = -6589;

	t9 = (x37<((x38|x39)<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -16910660791455925LL;
	int16_t x42 = -32;
	int32_t x44 = 793;
	volatile int32_t t10 = 1;

	t10 = (x41<((x42|x43)<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = INT32_MIN;
	volatile uint8_t x48 = 0U;
	volatile int32_t t11 = 37;

	t11 = (x45<((x46|x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = INT16_MAX;
	int64_t x50 = INT64_MIN;
	volatile uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = -55321;

	t12 = (x49<((x50|x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 81U;
	int64_t x54 = -1LL;
	volatile uint8_t x55 = 1U;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -1;

	t13 = (x53<((x54|x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -53;
	int16_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MAX;
	volatile int32_t t14 = -741705838;

	t14 = (x57<((x58|x59)<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = UINT32_MAX;
	int64_t x62 = -25975657LL;
	int64_t x63 = 193898855042LL;
	static uint16_t x64 = 0U;
	volatile int32_t t15 = 0;

	t15 = (x61<((x62|x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int8_t x66 = -1;
	int32_t x67 = 2058811;
	static volatile int32_t t16 = 18;

	t16 = (x65<((x66|x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	volatile uint8_t x72 = 0U;
	static int32_t t17 = -13;

	t17 = (x69<((x70|x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 1U;
	uint16_t x74 = 14U;
	int8_t x75 = INT8_MIN;
	static uint32_t x76 = UINT32_MAX;
	static int32_t t18 = 7762605;

	t18 = (x73<((x74|x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int8_t x79 = -44;
	static uint16_t x80 = UINT16_MAX;
	int32_t t19 = 69394574;

	t19 = (x77<((x78|x79)<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -1LL;
	int64_t x83 = INT64_MIN;
	int32_t t20 = 6270;

	t20 = (x81<((x82|x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	int8_t x88 = 3;
	volatile int32_t t21 = -7338;

	t21 = (x85<((x86|x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = UINT8_MAX;
	int64_t x90 = -1LL;
	uint32_t x91 = UINT32_MAX;
	volatile int32_t t22 = -4;

	t22 = (x89<((x90|x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -8835759502624LL;
	uint8_t x94 = 2U;
	uint64_t x95 = 33298529486LLU;
	volatile uint16_t x96 = 589U;
	static volatile int32_t t23 = -4;

	t23 = (x93<((x94|x95)<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int32_t t24 = 25860423;

	t24 = (x97<((x98|x99)<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int8_t x103 = 15;

	t25 = (x101<((x102|x103)<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 5U;
	int64_t x106 = INT64_MIN;
	static volatile int16_t x107 = 3;
	int8_t x108 = 2;

	t26 = (x105<((x106|x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static volatile uint64_t x110 = 4979LLU;
	uint64_t x112 = 15670250827LLU;
	static int32_t t27 = -789;

	t27 = (x109<((x110|x111)<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 14642U;
	static uint16_t x115 = 0U;
	volatile uint8_t x116 = UINT8_MAX;
	static int32_t t28 = 39618437;

	t28 = (x113<((x114|x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	volatile int16_t x118 = INT16_MAX;
	int32_t x119 = -1;
	volatile int32_t t29 = 6944;

	t29 = (x117<((x118|x119)<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x122 = 502U;
	uint8_t x123 = UINT8_MAX;
	volatile int32_t t30 = -4115667;

	t30 = (x121<((x122|x123)<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 69268U;
	uint64_t x126 = 18626453LLU;
	volatile int64_t x127 = -38093531LL;
	volatile int32_t t31 = 0;

	t31 = (x125<((x126|x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 565081LLU;
	volatile int8_t x131 = -1;
	int32_t x132 = INT32_MAX;

	t32 = (x129<((x130|x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint16_t x134 = 97U;
	int64_t x135 = INT64_MAX;
	static uint8_t x136 = 0U;

	t33 = (x133<((x134|x135)<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 4128809U;
	int8_t x138 = INT8_MIN;
	uint8_t x139 = 37U;
	int8_t x140 = -1;
	int32_t t34 = -116250;

	t34 = (x137<((x138|x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	volatile uint64_t x142 = 100544LLU;
	uint8_t x143 = 74U;
	uint32_t x144 = 786923608U;
	int32_t t35 = 0;

	t35 = (x141<((x142|x143)<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = -26888544200LL;
	int16_t x147 = 14307;
	static int8_t x148 = -9;
	int32_t t36 = 5;

	t36 = (x145<((x146|x147)<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 5U;
	int64_t x150 = 734126501523965LL;
	int8_t x151 = INT8_MAX;
	int32_t t37 = 477;

	t37 = (x149<((x150|x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 410U;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = INT32_MIN;
	volatile int32_t t38 = -3;

	t38 = (x153<((x154|x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	static uint16_t x158 = 2682U;
	static uint8_t x159 = UINT8_MAX;
	int64_t x160 = 777812157LL;

	t39 = (x157<((x158|x159)<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MAX;
	int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	int64_t x164 = -1LL;
	volatile int32_t t40 = 14166538;

	t40 = (x161<((x162|x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x166 = 148U;
	static volatile int8_t x167 = INT8_MIN;
	int32_t x168 = -1;
	volatile int32_t t41 = -524533100;

	t41 = (x165<((x166|x167)<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 0U;
	static int16_t x170 = INT16_MAX;
	static volatile int8_t x171 = INT8_MIN;
	uint16_t x172 = 2281U;
	int32_t t42 = 9753;

	t42 = (x169<((x170|x171)<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 15;
	int64_t x174 = INT64_MAX;
	static volatile int32_t x176 = INT32_MIN;

	t43 = (x173<((x174|x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MAX;
	static uint32_t x178 = 29U;
	int32_t x179 = 137;
	uint32_t x180 = 590373U;

	t44 = (x177<((x178|x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MAX;
	int32_t x182 = INT32_MIN;
	int64_t x184 = INT64_MAX;
	volatile int32_t t45 = 168;

	t45 = (x181<((x182|x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 15U;
	uint16_t x186 = UINT16_MAX;
	int16_t x188 = INT16_MAX;
	int32_t t46 = -2;

	t46 = (x185<((x186|x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 106094968LLU;
	volatile int16_t x190 = 583;
	static volatile int64_t x191 = INT64_MIN;
	static int64_t x192 = INT64_MAX;
	volatile int32_t t47 = 10;

	t47 = (x189<((x190|x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 14U;
	int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	int32_t x196 = -1;
	volatile int32_t t48 = 0;

	t48 = (x193<((x194|x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x197 = 2926U;
	int64_t x199 = INT64_MAX;
	uint8_t x200 = 2U;
	static int32_t t49 = 3;

	t49 = (x197<((x198|x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x203 = UINT32_MAX;
	volatile int32_t t50 = 31158;

	t50 = (x201<((x202|x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MAX;
	int16_t x207 = INT16_MIN;
	volatile int8_t x208 = INT8_MAX;

	t51 = (x205<((x206|x207)<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	int8_t x210 = INT8_MIN;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = -20672693;

	t52 = (x209<((x210|x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 58;
	int32_t x214 = INT32_MIN;
	volatile int32_t x215 = -1;
	int32_t t53 = 24478;

	t53 = (x213<((x214|x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	static int16_t x218 = 1;
	int32_t x219 = INT32_MAX;
	static int16_t x220 = -15593;
	int32_t t54 = 3244;

	t54 = (x217<((x218|x219)<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int64_t x222 = INT64_MIN;
	volatile int8_t x223 = INT8_MAX;
	static int32_t x224 = INT32_MIN;
	static volatile int32_t t55 = -512;

	t55 = (x221<((x222|x223)<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -1;
	int32_t x226 = INT32_MAX;
	int64_t x227 = -1LL;
	int64_t x228 = -35516052632828838LL;
	static volatile int32_t t56 = -2405289;

	t56 = (x225<((x226|x227)<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	int16_t x230 = INT16_MAX;
	static int8_t x231 = INT8_MAX;
	int8_t x232 = INT8_MIN;
	int32_t t57 = 18999783;

	t57 = (x229<((x230|x231)<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	volatile int32_t x236 = -1;
	volatile int32_t t58 = -98384;

	t58 = (x233<((x234|x235)<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = UINT8_MAX;
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = 3;
	int64_t x240 = INT64_MIN;

	t59 = (x237<((x238|x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 1;
	int8_t x242 = -2;
	static uint8_t x243 = 7U;
	uint8_t x244 = 65U;
	volatile int32_t t60 = 309855412;

	t60 = (x241<((x242|x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MIN;
	int16_t x246 = -1;
	uint64_t x248 = 9LLU;

	t61 = (x245<((x246|x247)<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x250 = 178463087U;
	int64_t x251 = INT64_MIN;
	uint8_t x252 = UINT8_MAX;
	int32_t t62 = -208092;

	t62 = (x249<((x250|x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint32_t x254 = 11999785U;
	int16_t x255 = INT16_MIN;
	static int32_t t63 = -5221648;

	t63 = (x253<((x254|x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = UINT32_MAX;
	volatile int16_t x258 = INT16_MIN;
	static volatile int8_t x259 = -1;
	volatile int32_t t64 = 29138;

	t64 = (x257<((x258|x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = 13U;
	int8_t x263 = -6;
	int32_t t65 = -88;

	t65 = (x261<((x262|x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = UINT32_MAX;
	int16_t x266 = 3282;
	int16_t x268 = -1;
	volatile int32_t t66 = -395;

	t66 = (x265<((x266|x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -73;
	static int8_t x270 = INT8_MIN;
	volatile int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -30090528;

	t67 = (x269<((x270|x271)<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	static int32_t x275 = INT32_MIN;
	int32_t t68 = 1043;

	t68 = (x273<((x274|x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 18884U;
	int32_t x280 = -1;

	t69 = (x277<((x278|x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 74U;
	int16_t x283 = 413;

	t70 = (x281<((x282|x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	uint8_t x286 = 1U;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -484005939LL;
	volatile int32_t t71 = 1855516;

	t71 = (x285<((x286|x287)<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	int16_t x290 = -29;
	int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MAX;
	int32_t t72 = 232;

	t72 = (x289<((x290|x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = -1;
	int16_t x295 = INT16_MIN;
	volatile int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = -2;

	t73 = (x293<((x294|x295)<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int64_t x299 = -31335030689LL;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 174056576;

	t74 = (x297<((x298|x299)<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = -1;
	int64_t x302 = INT64_MAX;
	uint16_t x303 = UINT16_MAX;
	uint16_t x304 = 696U;

	t75 = (x301<((x302|x303)<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = UINT8_MAX;
	static volatile int16_t x307 = INT16_MAX;
	uint8_t x308 = UINT8_MAX;
	static volatile int32_t t76 = -299399790;

	t76 = (x305<((x306|x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;

	t77 = (x309<((x310|x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x315 = UINT64_MAX;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t78 = 5635456;

	t78 = (x313<((x314|x315)<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	uint16_t x319 = 5U;
	static int32_t t79 = 27538;

	t79 = (x317<((x318|x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	static int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	volatile int32_t t80 = 340246372;

	t80 = (x321<((x322|x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 119471198752005804LL;
	volatile int64_t x326 = -6LL;
	int16_t x327 = -1;
	int32_t x328 = -6610;
	volatile int32_t t81 = 927193524;

	t81 = (x325<((x326|x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 75U;
	uint16_t x332 = UINT16_MAX;
	int32_t t82 = 228481266;

	t82 = (x329<((x330|x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = UINT32_MAX;
	int8_t x334 = INT8_MAX;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -4789;

	t83 = (x333<((x334|x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x338 = 13;
	uint64_t x339 = 179006072LLU;
	volatile int8_t x340 = INT8_MIN;
	int32_t t84 = 177758;

	t84 = (x337<((x338|x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t85 = -47759;

	t85 = (x341<((x342|x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = -105910000988371575LL;
	volatile int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MIN;

	t86 = (x345<((x346|x347)<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -4;
	static int16_t x350 = 2;
	uint64_t x351 = 2135014597149479757LLU;
	int32_t t87 = -193233209;

	t87 = (x349<((x350|x351)<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int32_t x355 = 39;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -6681845;

	t88 = (x353<((x354|x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	volatile int64_t x358 = -1LL;
	volatile uint8_t x359 = 61U;
	uint8_t x360 = 22U;
	int32_t t89 = 1;

	t89 = (x357<((x358|x359)<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int32_t x362 = INT32_MAX;
	uint64_t x363 = 75750318643238LLU;
	int16_t x364 = 1;
	int32_t t90 = -842;

	t90 = (x361<((x362|x363)<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 10016LLU;
	uint64_t x366 = UINT64_MAX;
	uint32_t x367 = UINT32_MAX;
	int64_t x368 = -1LL;
	volatile int32_t t91 = -5;

	t91 = (x365<((x366|x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int16_t x370 = -1;
	int64_t x371 = INT64_MIN;
	volatile int32_t x372 = INT32_MIN;
	volatile int32_t t92 = 247;

	t92 = (x369<((x370|x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 1;
	volatile int8_t x374 = -1;
	int64_t x375 = INT64_MIN;
	volatile uint8_t x376 = 17U;
	static int32_t t93 = 5280;

	t93 = (x373<((x374|x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	uint16_t x378 = 3366U;
	int16_t x379 = INT16_MAX;
	volatile uint32_t x380 = 442836U;
	int32_t t94 = 5089322;

	t94 = (x377<((x378|x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	uint16_t x384 = UINT16_MAX;
	static int32_t t95 = 122;

	t95 = (x381<((x382|x383)<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = -925456577;
	uint16_t x386 = UINT16_MAX;
	volatile int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 25289010;

	t96 = (x385<((x386|x387)<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 2387507U;
	uint32_t x390 = UINT32_MAX;
	volatile uint16_t x391 = UINT16_MAX;

	t97 = (x389<((x390|x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	int64_t x394 = INT64_MIN;
	volatile int64_t x395 = INT64_MIN;
	volatile uint8_t x396 = 3U;
	int32_t t98 = -90;

	t98 = (x393<((x394|x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -59;
	int64_t x398 = INT64_MIN;
	volatile uint16_t x399 = 1187U;
	static int8_t x400 = -1;
	volatile int32_t t99 = 2160;

	t99 = (x397<((x398|x399)<=x400));

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

