#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -246358318166LL;
uint16_t x11 = 5071U;
uint64_t x12 = UINT64_MAX;
static volatile uint64_t x19 = 2215844082670LLU;
static int16_t x20 = -1;
int16_t x28 = -1994;
int32_t x32 = INT32_MIN;
static int32_t x35 = 26237;
int32_t x40 = INT32_MIN;
volatile int16_t x43 = -1;
static uint32_t x48 = 123U;
int32_t t11 = -1;
static int16_t x59 = INT16_MIN;
uint32_t x70 = UINT32_MAX;
int16_t x73 = INT16_MIN;
static int64_t x75 = 4496670012000608598LL;
uint8_t x77 = UINT8_MAX;
static volatile uint32_t x78 = UINT32_MAX;
volatile int32_t t18 = -6938565;
static uint16_t x83 = 28U;
int8_t x85 = 1;
int8_t x86 = -14;
int32_t t20 = 2;
static int16_t x94 = INT16_MIN;
volatile int8_t x96 = INT8_MAX;
int8_t x106 = INT8_MAX;
static volatile int32_t t25 = 587906704;
volatile int16_t x109 = 101;
uint8_t x112 = 6U;
int64_t x123 = INT64_MAX;
static volatile int32_t x124 = -1;
volatile int32_t t29 = 49105;
uint64_t x125 = 48882997430979635LLU;
int64_t x126 = INT64_MAX;
int64_t x128 = INT64_MAX;
static uint32_t x129 = 7U;
uint32_t t31 = 3319262U;
volatile int32_t t32 = 71410107;
uint64_t x137 = 113LLU;
static volatile int32_t x138 = -1;
uint64_t x139 = UINT64_MAX;
static uint64_t t33 = 10824627LLU;
int16_t x141 = 36;
static int8_t x145 = INT8_MIN;
int32_t x146 = -59;
static volatile uint16_t x149 = UINT16_MAX;
int32_t x154 = INT32_MIN;
static volatile int32_t x158 = INT32_MIN;
uint16_t x161 = 14U;
uint32_t x163 = 12957U;
static int16_t x164 = -337;
static volatile int32_t t39 = 112;
int8_t x175 = -1;
volatile int32_t x177 = INT32_MIN;
volatile int16_t x183 = 2296;
volatile uint32_t t45 = UINT32_MAX;
static uint8_t x190 = 43U;
uint16_t x191 = UINT16_MAX;
volatile int32_t t46 = -1010994;
volatile int16_t x194 = -1;
volatile int64_t x203 = -1LL;
int64_t x208 = -11717189795LL;
int8_t x213 = INT8_MAX;
int8_t x224 = -1;
volatile int32_t x227 = INT32_MIN;
int32_t x229 = INT32_MIN;
static uint8_t x234 = 59U;
uint32_t x237 = 2U;
volatile uint64_t x238 = UINT64_MAX;
int64_t x242 = INT64_MIN;
volatile uint8_t x247 = 8U;
int32_t x248 = INT32_MIN;
int16_t x253 = INT16_MIN;
volatile uint8_t x254 = 123U;
static int64_t x256 = -4LL;
int32_t x257 = -1;
int32_t x261 = INT32_MIN;
volatile int32_t t65 = -2;
int16_t x270 = -1;
int64_t x272 = 1633LL;
int8_t x276 = 12;
uint32_t x279 = 1U;
volatile uint32_t t70 = 1126436U;
int16_t x292 = INT16_MIN;
int32_t x303 = 0;
volatile int32_t t74 = -24332298;
volatile int64_t t76 = INT64_MIN;
volatile uint64_t x316 = UINT64_MAX;
volatile int64_t t78 = INT64_MIN;
int8_t x321 = INT8_MAX;
int32_t x322 = INT32_MAX;
static int32_t t80 = -1;
int8_t x345 = -1;
uint8_t x352 = UINT8_MAX;
static int64_t x354 = -1LL;
uint16_t x355 = 36U;
int16_t x356 = -1898;
volatile uint32_t x360 = 995246719U;
int64_t x362 = INT64_MIN;
int64_t t89 = -1122944607937279LL;
uint8_t x372 = 4U;
volatile int64_t x376 = INT64_MIN;
uint32_t x380 = 2U;
volatile uint8_t x397 = 2U;
static volatile int16_t x400 = 2;
int8_t x404 = INT8_MAX;


void f0(void) {
	int8_t x1 = 1;
	static int16_t x2 = 1;
	int64_t x3 = 1274854369177LL;
	int64_t x4 = -13941301LL;
	int32_t t0 = 1027962844;

	t0 = (x1+((x2<x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	volatile int8_t x6 = INT8_MIN;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = -378;

	t1 = (x5+((x6<x7)<=x8));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -254704;
	int16_t x10 = 1;
	static int32_t t2 = -2534768;

	t2 = (x9+((x10<x11)<=x12));

	if (t2 != -254703) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint64_t x14 = 0LLU;
	uint8_t x15 = 3U;
	int32_t x16 = INT32_MAX;
	int64_t t3 = 80859258655437LL;

	t3 = (x13+((x14<x15)<=x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -2369603;
	static int16_t x18 = INT16_MAX;
	volatile int32_t t4 = -126748;

	t4 = (x17+((x18<x19)<=x20));

	if (t4 != -2369603) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -57;
	int16_t x22 = -1;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = -1;
	int32_t t5 = 7;

	t5 = (x21+((x22<x23)<=x24));

	if (t5 != -57) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 34673722981394LLU;
	int32_t x26 = -1;
	int16_t x27 = -92;
	uint64_t t6 = 513067424290498LLU;

	t6 = (x25+((x26<x27)<=x28));

	if (t6 != 34673722981394LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 112U;
	int32_t x30 = INT32_MIN;
	uint8_t x31 = 7U;
	int32_t t7 = 52;

	t7 = (x29+((x30<x31)<=x32));

	if (t7 != 112) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int64_t x34 = INT64_MAX;
	uint16_t x36 = UINT16_MAX;
	int64_t t8 = -179718615761LL;

	t8 = (x33+((x34<x35)<=x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MAX;
	static uint32_t t9 = UINT32_MAX;

	t9 = (x37+((x38<x39)<=x40));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	volatile int64_t x42 = -1LL;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = 274;

	t10 = (x41+((x42<x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	volatile int64_t x46 = INT64_MAX;
	static uint32_t x47 = 6219U;

	t11 = (x45+((x46<x47)<=x48));

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = -1LL;
	int8_t x51 = -6;
	int8_t x52 = INT8_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x49+((x50<x51)<=x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = -1LL;
	int16_t x58 = -1;
	static int32_t x60 = -1;
	volatile int64_t t13 = -1LL;

	t13 = (x57+((x58<x59)<=x60));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 5812U;
	static int32_t x62 = INT32_MAX;
	volatile uint32_t x63 = 58U;
	int32_t x64 = 63241882;
	volatile int32_t t14 = 461;

	t14 = (x61+((x62<x63)<=x64));

	if (t14 != 5813) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -14132;
	int64_t x66 = INT64_MIN;
	volatile int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = -1;

	t15 = (x65+((x66<x67)<=x68));

	if (t15 != -14132) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -1LL;
	volatile int16_t x71 = INT16_MAX;
	static uint32_t x72 = 21457U;
	int64_t t16 = -343709779LL;

	t16 = (x69+((x70<x71)<=x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x74 = INT32_MAX;
	static uint32_t x76 = UINT32_MAX;
	static volatile int32_t t17 = 28893231;

	t17 = (x73+((x74<x75)<=x76));

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x79 = INT32_MIN;
	int8_t x80 = -1;

	t18 = (x77+((x78<x79)<=x80));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = -1LL;
	static int64_t x82 = INT64_MIN;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t19 = 1519809912LL;

	t19 = (x81+((x82<x83)<=x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x87 = UINT8_MAX;
	int8_t x88 = INT8_MIN;

	t20 = (x85+((x86<x87)<=x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MAX;
	volatile int32_t x91 = 58805596;
	volatile uint32_t x92 = UINT32_MAX;
	volatile int32_t t21 = 23;

	t21 = (x89+((x90<x91)<=x92));

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	static int8_t x95 = -1;
	volatile int32_t t22 = -211878853;

	t22 = (x93+((x94<x95)<=x96));

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = -1;
	volatile int16_t x98 = 5;
	static int32_t x99 = -1;
	int32_t x100 = INT32_MIN;
	volatile int32_t t23 = -544;

	t23 = (x97+((x98<x99)<=x100));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 3LLU;
	int16_t x102 = INT16_MAX;
	static uint64_t x103 = 568433985LLU;
	volatile int8_t x104 = -1;
	volatile uint64_t t24 = 4340019382502249357LLU;

	t24 = (x101+((x102<x103)<=x104));

	if (t24 != 3LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	int16_t x107 = INT16_MIN;
	volatile int64_t x108 = INT64_MIN;

	t25 = (x105+((x106<x107)<=x108));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MAX;
	static int32_t t26 = -22;

	t26 = (x109+((x110<x111)<=x112));

	if (t26 != 102) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x113 = INT64_MIN;
	volatile int8_t x114 = INT8_MAX;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = INT32_MAX;
	static volatile int64_t t27 = -2454892456391317LL;

	t27 = (x113+((x114<x115)<=x116));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 60LLU;
	int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	volatile int64_t x120 = INT64_MAX;
	uint64_t t28 = 1459289532568LLU;

	t28 = (x117+((x118<x119)<=x120));

	if (t28 != 61LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = 1;
	static uint16_t x122 = 6U;

	t29 = (x121+((x122<x123)<=x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x127 = INT8_MIN;
	volatile uint64_t t30 = 35361LLU;

	t30 = (x125+((x126<x127)<=x128));

	if (t30 != 48882997430979636LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = -1;
	uint8_t x131 = 3U;
	int32_t x132 = -1;

	t31 = (x129+((x130<x131)<=x132));

	if (t31 != 7U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	uint32_t x134 = 14U;
	uint64_t x135 = UINT64_MAX;
	static uint16_t x136 = UINT16_MAX;

	t32 = (x133+((x134<x135)<=x136));

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x140 = -1671828998976548289LL;

	t33 = (x137+((x138<x139)<=x140));

	if (t33 != 113LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x142 = INT64_MIN;
	int8_t x143 = -1;
	int64_t x144 = -1LL;
	volatile int32_t t34 = 41;

	t34 = (x141+((x142<x143)<=x144));

	if (t34 != 36) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x147 = 27U;
	volatile int8_t x148 = -1;
	volatile int32_t t35 = -535;

	t35 = (x145+((x146<x147)<=x148));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x150 = 5987941133595381782LLU;
	int16_t x151 = -1;
	uint8_t x152 = 2U;
	int32_t t36 = 6646951;

	t36 = (x149+((x150<x151)<=x152));

	if (t36 != 65536) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MAX;
	static uint64_t x155 = 111586LLU;
	volatile int8_t x156 = INT8_MAX;
	volatile int32_t t37 = -75649248;

	t37 = (x153+((x154<x155)<=x156));

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	volatile int8_t x159 = 6;
	uint64_t x160 = 125189434980880096LLU;
	int32_t t38 = -246660;

	t38 = (x157+((x158<x159)<=x160));

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x162 = UINT16_MAX;

	t39 = (x161+((x162<x163)<=x164));

	if (t39 != 14) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = UINT64_MAX;
	int64_t x166 = 146316618155724LL;
	uint32_t x167 = 1590U;
	int32_t x168 = INT32_MAX;
	uint64_t t40 = 93817809391LLU;

	t40 = (x165+((x166<x167)<=x168));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	volatile int8_t x170 = -1;
	int64_t x171 = -1LL;
	int64_t x172 = INT64_MAX;
	int32_t t41 = -1;

	t41 = (x169+((x170<x171)<=x172));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x173 = -6279379462485LL;
	static int8_t x174 = INT8_MAX;
	uint32_t x176 = 0U;
	int64_t t42 = 74381749243LL;

	t42 = (x173+((x174<x175)<=x176));

	if (t42 != -6279379462484LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x178 = INT8_MIN;
	uint32_t x179 = UINT32_MAX;
	static int8_t x180 = 1;
	int32_t t43 = 14087822;

	t43 = (x177+((x178<x179)<=x180));

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 0U;
	int16_t x182 = -476;
	int64_t x184 = INT64_MAX;
	static volatile int32_t t44 = -181646;

	t44 = (x181+((x182<x183)<=x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = UINT32_MAX;
	uint8_t x186 = 0U;
	int64_t x187 = 62566889046929902LL;
	int32_t x188 = INT32_MIN;

	t45 = (x185+((x186<x187)<=x188));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x189 = 233U;
	int32_t x192 = 1;

	t46 = (x189+((x190<x191)<=x192));

	if (t46 != 234) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x193 = INT8_MIN;
	static int64_t x195 = INT64_MIN;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t47 = -84775;

	t47 = (x193+((x194<x195)<=x196));

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x198 = -234822;
	int8_t x199 = INT8_MAX;
	static volatile int8_t x200 = INT8_MAX;
	uint64_t t48 = 4582838LLU;

	t48 = (x197+((x198<x199)<=x200));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = -1;
	int8_t x202 = 0;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t49 = -13;

	t49 = (x201+((x202<x203)<=x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x205 = 6251911LLU;
	volatile int64_t x206 = -1388290801281300315LL;
	static uint64_t x207 = 1031542290215078269LLU;
	uint64_t t50 = 19153085LLU;

	t50 = (x205+((x206<x207)<=x208));

	if (t50 != 6251911LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = 8063281;
	static int32_t x211 = INT32_MIN;
	volatile int64_t x212 = INT64_MIN;
	static int32_t t51 = -1277780;

	t51 = (x209+((x210<x211)<=x212));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x214 = INT8_MIN;
	static int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MAX;
	static volatile int32_t t52 = -473317;

	t52 = (x213+((x214<x215)<=x216));

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = 13257495;
	uint16_t x218 = UINT16_MAX;
	int64_t x219 = 373415248010LL;
	volatile int64_t x220 = -1LL;
	volatile int32_t t53 = -463134248;

	t53 = (x217+((x218<x219)<=x220));

	if (t53 != 13257495) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x221 = INT8_MIN;
	uint16_t x222 = 52U;
	int32_t x223 = INT32_MAX;
	volatile int32_t t54 = 125422927;

	t54 = (x221+((x222<x223)<=x224));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MAX;
	static uint8_t x226 = UINT8_MAX;
	uint8_t x228 = 2U;
	int32_t t55 = 6930;

	t55 = (x225+((x226<x227)<=x228));

	if (t55 != 32768) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x230 = 241U;
	static int8_t x231 = INT8_MIN;
	volatile uint8_t x232 = UINT8_MAX;
	int32_t t56 = -6;

	t56 = (x229+((x230<x231)<=x232));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x233 = UINT16_MAX;
	static volatile uint64_t x235 = UINT64_MAX;
	int64_t x236 = -1367125303070859LL;
	static volatile int32_t t57 = 12578442;

	t57 = (x233+((x234<x235)<=x236));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x239 = INT16_MIN;
	static uint16_t x240 = UINT16_MAX;
	uint32_t t58 = 900U;

	t58 = (x237+((x238<x239)<=x240));

	if (t58 != 3U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	uint32_t x243 = 13U;
	uint16_t x244 = UINT16_MAX;
	int32_t t59 = -1;

	t59 = (x241+((x242<x243)<=x244));

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x246 = 915988574U;
	static volatile int32_t t60 = -1;

	t60 = (x245+((x246<x247)<=x248));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x249 = 1035489682578758506LLU;
	int8_t x250 = -35;
	static int32_t x251 = INT32_MIN;
	int64_t x252 = -1LL;
	volatile uint64_t t61 = 49982690167788LLU;

	t61 = (x249+((x250<x251)<=x252));

	if (t61 != 1035489682578758506LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x255 = UINT32_MAX;
	static volatile int32_t t62 = 13910227;

	t62 = (x253+((x254<x255)<=x256));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x258 = 1U;
	int64_t x259 = -1LL;
	volatile int16_t x260 = -107;
	volatile int32_t t63 = 6052;

	t63 = (x257+((x258<x259)<=x260));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x262 = UINT8_MAX;
	int8_t x263 = 28;
	int8_t x264 = -1;
	volatile int32_t t64 = INT32_MIN;

	t64 = (x261+((x262<x263)<=x264));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x265 = -16;
	static int64_t x266 = -205100LL;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;

	t65 = (x265+((x266<x267)<=x268));

	if (t65 != -16) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x269 = UINT32_MAX;
	int16_t x271 = INT16_MAX;
	volatile uint32_t t66 = 11708934U;

	t66 = (x269+((x270<x271)<=x272));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	int8_t x275 = INT8_MIN;
	int32_t t67 = 237;

	t67 = (x273+((x274<x275)<=x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 5U;
	int8_t x278 = 24;
	uint32_t x280 = 63232U;
	volatile int32_t t68 = 32778148;

	t68 = (x277+((x278<x279)<=x280));

	if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = 10980;
	volatile int64_t x282 = -1LL;
	static int64_t x283 = -1LL;
	int8_t x284 = -3;
	static volatile int32_t t69 = 420;

	t69 = (x281+((x282<x283)<=x284));

	if (t69 != 10980) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x285 = 7U;
	uint8_t x286 = UINT8_MAX;
	volatile int32_t x287 = INT32_MIN;
	uint64_t x288 = UINT64_MAX;

	t70 = (x285+((x286<x287)<=x288));

	if (t70 != 8U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = UINT64_MAX;
	uint64_t x290 = 5LLU;
	static uint16_t x291 = UINT16_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x289+((x290<x291)<=x292));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x293 = INT16_MIN;
	static int16_t x294 = 2736;
	int16_t x295 = -1;
	uint8_t x296 = UINT8_MAX;
	static int32_t t72 = 0;

	t72 = (x293+((x294<x295)<=x296));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x297 = 23;
	int16_t x298 = -16;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t73 = -3211;

	t73 = (x297+((x298<x299)<=x300));

	if (t73 != 23) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x301 = 16U;
	uint16_t x302 = 32U;
	uint16_t x304 = UINT16_MAX;

	t74 = (x301+((x302<x303)<=x304));

	if (t74 != 17) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = 11958;
	int32_t x306 = 40;
	static uint32_t x307 = 926656348U;
	uint16_t x308 = 52U;
	int32_t t75 = -48811020;

	t75 = (x305+((x306<x307)<=x308));

	if (t75 != 11959) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	volatile int32_t x310 = INT32_MIN;
	volatile uint16_t x311 = UINT16_MAX;
	int16_t x312 = -3840;

	t76 = (x309+((x310<x311)<=x312));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MIN;
	volatile int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	int32_t t77 = 0;

	t77 = (x313+((x314<x315)<=x316));

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	static int32_t x318 = INT32_MAX;
	static volatile uint16_t x319 = 3U;
	int32_t x320 = INT32_MIN;

	t78 = (x317+((x318<x319)<=x320));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x323 = -5730310;
	int8_t x324 = -1;
	int32_t t79 = 343;

	t79 = (x321+((x322<x323)<=x324));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x325 = UINT8_MAX;
	int32_t x326 = INT32_MIN;
	static int64_t x327 = -1LL;
	uint64_t x328 = 739482484721223890LLU;

	t80 = (x325+((x326<x327)<=x328));

	if (t80 != 256) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = -1LL;
	int64_t x330 = INT64_MIN;
	volatile int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MIN;
	int64_t t81 = -1827104LL;

	t81 = (x329+((x330<x331)<=x332));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = 337802287065827LL;
	int8_t x334 = -9;
	int64_t x335 = -86LL;
	int8_t x336 = INT8_MAX;
	volatile int64_t t82 = 1955959LL;

	t82 = (x333+((x334<x335)<=x336));

	if (t82 != 337802287065828LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = UINT8_MAX;
	static int16_t x338 = INT16_MIN;
	volatile int8_t x339 = -1;
	int64_t x340 = -64167783LL;
	volatile int32_t t83 = 1;

	t83 = (x337+((x338<x339)<=x340));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x341 = INT32_MAX;
	volatile uint64_t x342 = 119107121017818LLU;
	int64_t x343 = INT64_MAX;
	int32_t x344 = INT32_MIN;
	int32_t t84 = INT32_MAX;

	t84 = (x341+((x342<x343)<=x344));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x346 = 129U;
	volatile int16_t x347 = 12862;
	int8_t x348 = 2;
	volatile int32_t t85 = 37710787;

	t85 = (x345+((x346<x347)<=x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x349 = INT32_MIN;
	int32_t x350 = -40;
	uint64_t x351 = 6297LLU;
	volatile int32_t t86 = 1;

	t86 = (x349+((x350<x351)<=x352));

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x353 = 211480710155510842LLU;
	volatile uint64_t t87 = 2570541829LLU;

	t87 = (x353+((x354<x355)<=x356));

	if (t87 != 211480710155510842LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x357 = 0U;
	uint64_t x358 = 1965268260760LLU;
	static int32_t x359 = INT32_MAX;
	int32_t t88 = -362;

	t88 = (x357+((x358<x359)<=x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x361 = -1LL;
	volatile int8_t x363 = INT8_MIN;
	uint32_t x364 = 19U;

	t89 = (x361+((x362<x363)<=x364));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = -911094591;
	int32_t x366 = -1;
	int16_t x367 = 5873;
	static int8_t x368 = INT8_MIN;
	int32_t t90 = 237710;

	t90 = (x365+((x366<x367)<=x368));

	if (t90 != -911094591) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = 11U;
	int8_t x370 = INT8_MIN;
	volatile int8_t x371 = INT8_MIN;
	int32_t t91 = -116370;

	t91 = (x369+((x370<x371)<=x372));

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x373 = 73767U;
	int16_t x374 = INT16_MAX;
	volatile uint32_t x375 = 142U;
	uint32_t t92 = 28814U;

	t92 = (x373+((x374<x375)<=x376));

	if (t92 != 73767U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = 0;
	uint32_t x378 = UINT32_MAX;
	uint8_t x379 = 12U;
	volatile int32_t t93 = 1;

	t93 = (x377+((x378<x379)<=x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MAX;
	static uint64_t x383 = UINT64_MAX;
	static int16_t x384 = INT16_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = (x381+((x382<x383)<=x384));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = 0U;
	int16_t x388 = INT16_MIN;
	volatile int32_t t95 = -6;

	t95 = (x385+((x386<x387)<=x388));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x389 = UINT16_MAX;
	volatile int16_t x390 = INT16_MAX;
	int16_t x391 = INT16_MIN;
	uint8_t x392 = 2U;
	int32_t t96 = 3038437;

	t96 = (x389+((x390<x391)<=x392));

	if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x393 = -2590186;
	volatile int16_t x394 = INT16_MIN;
	int8_t x395 = 1;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t97 = 306;

	t97 = (x393+((x394<x395)<=x396));

	if (t97 != -2590185) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x398 = 4939879633013666821LLU;
	int32_t x399 = INT32_MAX;
	volatile int32_t t98 = 7398839;

	t98 = (x397+((x398<x399)<=x400));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x401 = INT8_MAX;
	int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MAX;
	volatile int32_t t99 = -20040;

	t99 = (x401+((x402<x403)<=x404));

	if (t99 != 128) { NG(); } else { ; }
	
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

