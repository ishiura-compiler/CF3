#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
uint8_t x5 = UINT8_MAX;
volatile uint64_t x6 = 154LLU;
int32_t t1 = -23;
static int32_t x10 = INT32_MIN;
uint16_t x11 = UINT16_MAX;
static volatile int32_t t2 = 37083592;
int16_t x17 = INT16_MAX;
uint16_t x30 = UINT16_MAX;
static volatile int16_t x33 = -1;
static int64_t x40 = INT64_MAX;
uint8_t x47 = UINT8_MAX;
volatile uint8_t x49 = 3U;
volatile int8_t x50 = 1;
volatile int16_t x52 = -921;
uint8_t x55 = UINT8_MAX;
static uint32_t x79 = 68666U;
int64_t x80 = INT64_MAX;
int16_t x90 = 4;
int32_t x94 = INT32_MIN;
uint64_t x96 = 116797400LLU;
int64_t x107 = 4255068499LL;
static uint16_t x108 = UINT16_MAX;
volatile int64_t x122 = -1LL;
int16_t x130 = -442;
int16_t x133 = INT16_MAX;
static int64_t x145 = INT64_MAX;
int16_t x152 = 2;
int32_t t37 = 1;
static uint16_t x153 = UINT16_MAX;
int16_t x157 = INT16_MAX;
uint8_t x158 = 2U;
int16_t x159 = -1;
volatile int8_t x170 = -14;
static int64_t x174 = INT64_MIN;
int8_t x182 = -1;
volatile int32_t t45 = -47;
int64_t x185 = 0LL;
uint64_t x189 = UINT64_MAX;
static uint8_t x192 = UINT8_MAX;
volatile int32_t t47 = -3;
int16_t x198 = -1;
uint8_t x206 = 0U;
static uint16_t x210 = 3U;
int32_t t52 = -880;
int16_t x214 = -1;
static uint32_t x216 = 1341460U;
volatile int32_t t53 = -22354;
uint8_t x219 = UINT8_MAX;
int8_t x221 = 1;
int16_t x227 = INT16_MIN;
uint32_t x228 = 252U;
static int8_t x238 = INT8_MAX;
uint8_t x251 = UINT8_MAX;
static uint8_t x252 = 12U;
static uint16_t x271 = UINT16_MAX;
volatile int32_t t67 = 27407;
int16_t x273 = INT16_MIN;
volatile int32_t t68 = -826;
int8_t x277 = 1;
uint64_t x282 = 92679LLU;
volatile int32_t t70 = 9;
uint64_t x294 = 42071162328LLU;
volatile int32_t x299 = 953;
int16_t x304 = -6570;
int8_t x305 = -59;
static uint16_t x308 = UINT16_MAX;
uint64_t x312 = UINT64_MAX;
static int32_t t77 = -26521572;
uint64_t x324 = 316278377LLU;
volatile int32_t x327 = -1;
int32_t t83 = 2273;
int16_t x344 = INT16_MAX;
static volatile int32_t t86 = -7;
int64_t x365 = INT64_MAX;
static volatile int32_t t93 = 1;
int16_t x383 = -1;
static volatile int32_t t96 = -1039898328;
int32_t x392 = 1;
static uint64_t x394 = 4269LLU;
int8_t x395 = 1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int32_t x3 = 13930340;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -70369;

	t0 = ((x1==(x2<x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x7 = -1;
	volatile uint8_t x8 = 50U;

	t1 = ((x5==(x6<x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 18;
	static int64_t x12 = 743856161456258LL;

	t2 = ((x9==(x10<x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = -9;
	volatile int32_t x15 = INT32_MAX;
	static uint16_t x16 = 1U;
	int32_t t3 = 125253;

	t3 = ((x13==(x14<x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = INT8_MIN;
	uint64_t x19 = UINT64_MAX;
	volatile uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -18;

	t4 = ((x17==(x18<x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = INT16_MAX;
	int16_t x22 = 3;
	volatile int16_t x23 = INT16_MIN;
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = -176788;

	t5 = ((x21==(x22<x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = UINT64_MAX;
	uint16_t x26 = 361U;
	uint16_t x27 = 7290U;
	static int8_t x28 = 1;
	int32_t t6 = 432401694;

	t6 = ((x25==(x26<x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int64_t x31 = -43154521404LL;
	int16_t x32 = INT16_MAX;
	static int32_t t7 = 5625;

	t7 = ((x29==(x30<x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = 1U;
	int32_t x35 = INT32_MIN;
	int32_t x36 = INT32_MAX;
	int32_t t8 = -75;

	t8 = ((x33==(x34<x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 2068217669U;
	int16_t x38 = INT16_MIN;
	int32_t x39 = 12720161;
	volatile int32_t t9 = 196417146;

	t9 = ((x37==(x38<x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1447632227U;
	uint64_t x42 = UINT64_MAX;
	volatile int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -10;

	t10 = ((x41==(x42<x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 7508879U;
	int64_t x46 = -1LL;
	static int8_t x48 = -1;
	volatile int32_t t11 = 883034;

	t11 = ((x45==(x46<x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x51 = -3395288LL;
	int32_t t12 = 1019807693;

	t12 = ((x49==(x50<x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 15U;
	static volatile int16_t x54 = -1;
	int8_t x56 = -1;
	int32_t t13 = -125622346;

	t13 = ((x53==(x54<x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -16305;
	uint64_t x58 = 18LLU;
	int32_t x59 = -1;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 21998565;

	t14 = ((x57==(x58<x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = UINT8_MAX;
	int32_t x62 = INT32_MIN;
	volatile int8_t x63 = -1;
	int8_t x64 = INT8_MIN;
	static volatile int32_t t15 = -1595;

	t15 = ((x61==(x62<x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 243017480466LLU;
	static int8_t x66 = INT8_MIN;
	static volatile int64_t x67 = -31655979895832678LL;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = 5978;

	t16 = ((x65==(x66<x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	int8_t x70 = 1;
	int8_t x71 = -1;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -1;

	t17 = ((x69==(x70<x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int32_t x74 = INT32_MIN;
	volatile uint16_t x75 = 2U;
	int32_t x76 = -1;
	int32_t t18 = -1535;

	t18 = ((x73==(x74<x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 2U;
	int64_t x78 = -7820917783217615LL;
	volatile int32_t t19 = -41;

	t19 = ((x77==(x78<x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -132617630;
	volatile int64_t x82 = 663086392LL;
	int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 2463123;

	t20 = ((x81==(x82<x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	int8_t x87 = 1;
	static int8_t x88 = INT8_MAX;
	int32_t t21 = 1;

	t21 = ((x85==(x86<x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = INT16_MAX;
	volatile int8_t x91 = INT8_MIN;
	int8_t x92 = -1;
	static int32_t t22 = -130502;

	t22 = ((x89==(x90<x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -9590;
	volatile int8_t x95 = -1;
	volatile int32_t t23 = -12849306;

	t23 = ((x93==(x94<x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	uint8_t x98 = 13U;
	static int32_t x99 = INT32_MAX;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -38;

	t24 = ((x97==(x98<x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	int64_t x102 = -1LL;
	uint8_t x103 = 1U;
	int32_t x104 = 228173;
	static int32_t t25 = 2;

	t25 = ((x101==(x102<x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -1;
	static volatile int8_t x106 = -13;
	volatile int32_t t26 = -1;

	t26 = ((x105==(x106<x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = UINT64_MAX;
	int32_t x110 = INT32_MIN;
	static volatile uint16_t x111 = UINT16_MAX;
	static int8_t x112 = 0;
	int32_t t27 = -11958280;

	t27 = ((x109==(x110<x111))==x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 3443U;
	int32_t x114 = INT32_MAX;
	int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;
	static volatile int32_t t28 = 0;

	t28 = ((x113==(x114<x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = 1625418458U;
	int64_t x118 = INT64_MAX;
	int64_t x119 = -1LL;
	int64_t x120 = INT64_MAX;
	volatile int32_t t29 = -12683;

	t29 = ((x117==(x118<x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int16_t x123 = 47;
	volatile int64_t x124 = 51803717LL;
	int32_t t30 = -570;

	t30 = ((x121==(x122<x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	int32_t x126 = -2;
	int32_t x127 = INT32_MIN;
	static int64_t x128 = INT64_MAX;
	volatile int32_t t31 = -3;

	t31 = ((x125==(x126<x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 62U;
	int16_t x131 = -1;
	int8_t x132 = INT8_MAX;
	int32_t t32 = -65142495;

	t32 = ((x129==(x130<x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 247U;
	int8_t x135 = INT8_MIN;
	volatile int64_t x136 = -1LL;
	int32_t t33 = 7;

	t33 = ((x133==(x134<x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 22;
	volatile uint64_t x138 = UINT64_MAX;
	uint16_t x139 = 222U;
	int32_t x140 = INT32_MIN;
	int32_t t34 = -1;

	t34 = ((x137==(x138<x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 3494446;
	int16_t x142 = -105;
	static volatile uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t35 = 7;

	t35 = ((x141==(x142<x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x146 = -8;
	uint8_t x147 = 27U;
	int32_t x148 = INT32_MIN;
	static int32_t t36 = -14058463;

	t36 = ((x145==(x146<x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -3;
	static volatile uint8_t x150 = 67U;
	int16_t x151 = -1;

	t37 = ((x149==(x150<x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = UINT16_MAX;
	volatile int32_t x155 = -1;
	int64_t x156 = INT64_MIN;
	int32_t t38 = 55;

	t38 = ((x153==(x154<x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -570;

	t39 = ((x157==(x158<x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint16_t x162 = 6674U;
	static volatile int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MAX;
	int32_t t40 = -2259740;

	t40 = ((x161==(x162<x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 3521U;
	int8_t x166 = INT8_MIN;
	volatile uint64_t x167 = UINT64_MAX;
	int16_t x168 = -1;
	int32_t t41 = -95091879;

	t41 = ((x165==(x166<x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = -6052;
	volatile int64_t x171 = INT64_MIN;
	static int8_t x172 = INT8_MAX;
	int32_t t42 = 32;

	t42 = ((x169==(x170<x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = -187779547;
	static int32_t t43 = 59561;

	t43 = ((x173==(x174<x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 191U;
	int8_t x178 = -2;
	int8_t x179 = -1;
	int64_t x180 = 28LL;
	int32_t t44 = 40;

	t44 = ((x177==(x178<x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	uint64_t x183 = 17270439LLU;
	volatile uint8_t x184 = UINT8_MAX;

	t45 = ((x181==(x182<x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = INT64_MAX;
	volatile uint64_t x187 = UINT64_MAX;
	uint64_t x188 = 0LLU;
	volatile int32_t t46 = 15617;

	t46 = ((x185==(x186<x187))==x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	int16_t x191 = INT16_MIN;

	t47 = ((x189==(x190<x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x194 = UINT8_MAX;
	static uint16_t x195 = 1211U;
	static volatile int64_t x196 = -1LL;
	static int32_t t48 = -2808293;

	t48 = ((x193==(x194<x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static int16_t x199 = INT16_MAX;
	int32_t x200 = INT32_MIN;
	int32_t t49 = 1;

	t49 = ((x197==(x198<x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -385870LL;
	int8_t x202 = INT8_MIN;
	static int16_t x203 = -5404;
	static int8_t x204 = INT8_MAX;
	volatile int32_t t50 = -5843;

	t50 = ((x201==(x202<x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	static int8_t x207 = INT8_MIN;
	int16_t x208 = 14;
	static volatile int32_t t51 = 2132;

	t51 = ((x205==(x206<x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MIN;
	int64_t x211 = 38995348575235563LL;
	volatile int16_t x212 = 789;

	t52 = ((x209==(x210<x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	static volatile uint16_t x215 = UINT16_MAX;

	t53 = ((x213==(x214<x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = 1530;
	volatile int64_t x218 = INT64_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 0;

	t54 = ((x217==(x218<x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x222 = 118874806LL;
	volatile int8_t x223 = 1;
	uint8_t x224 = UINT8_MAX;
	int32_t t55 = 0;

	t55 = ((x221==(x222<x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	uint32_t x226 = 53U;
	static volatile int32_t t56 = 340;

	t56 = ((x225==(x226<x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 315552634LLU;
	volatile int16_t x230 = INT16_MIN;
	static uint64_t x231 = 27565718380809LLU;
	uint8_t x232 = UINT8_MAX;
	int32_t t57 = 4;

	t57 = ((x229==(x230<x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1267;
	static int32_t x234 = -1;
	int64_t x235 = -1LL;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = -2;

	t58 = ((x233==(x234<x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -124429333402771LL;
	int8_t x239 = -1;
	int64_t x240 = -1327411812403819LL;
	volatile int32_t t59 = 7659613;

	t59 = ((x237==(x238<x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	uint8_t x242 = 1U;
	uint64_t x243 = 244216LLU;
	volatile int32_t x244 = -1;
	static volatile int32_t t60 = 3155;

	t60 = ((x241==(x242<x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = 245;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -1;
	int32_t t61 = -3526874;

	t61 = ((x245==(x246<x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int64_t x250 = 10072LL;
	int32_t t62 = 191827625;

	t62 = ((x249==(x250<x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MAX;
	volatile int64_t x254 = -708203181822931286LL;
	uint16_t x255 = 120U;
	uint16_t x256 = 236U;
	volatile int32_t t63 = -604967487;

	t63 = ((x253==(x254<x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 29654U;
	int8_t x258 = -11;
	volatile uint64_t x259 = 1920036919131747LLU;
	volatile int32_t x260 = -1;
	static int32_t t64 = -21283948;

	t64 = ((x257==(x258<x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	volatile int32_t x262 = INT32_MIN;
	int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MAX;
	volatile int32_t t65 = 152492245;

	t65 = ((x261==(x262<x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	static int16_t x266 = INT16_MAX;
	volatile int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MAX;
	int32_t t66 = -2;

	t66 = ((x265==(x266<x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = -81;
	int16_t x272 = 1;

	t67 = ((x269==(x270<x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = -55176638LL;
	volatile int16_t x275 = INT16_MIN;
	uint32_t x276 = 0U;

	t68 = ((x273==(x274<x275))==x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MAX;
	uint8_t x279 = 13U;
	volatile int32_t x280 = -71;
	int32_t t69 = 2;

	t69 = ((x277==(x278<x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	static int8_t x283 = INT8_MIN;
	uint32_t x284 = UINT32_MAX;

	t70 = ((x281==(x282<x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int64_t x286 = -288751163LL;
	int64_t x287 = INT64_MAX;
	uint8_t x288 = 101U;
	int32_t t71 = -587;

	t71 = ((x285==(x286<x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MIN;
	int16_t x291 = -113;
	int64_t x292 = INT64_MIN;
	int32_t t72 = 3567;

	t72 = ((x289==(x290<x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 20U;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = 11781;

	t73 = ((x293==(x294<x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 0U;
	uint8_t x298 = 88U;
	volatile uint16_t x300 = 5U;
	int32_t t74 = -17992788;

	t74 = ((x297==(x298<x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	uint32_t x302 = 13992614U;
	static volatile uint64_t x303 = 3825349495LLU;
	int32_t t75 = -1;

	t75 = ((x301==(x302<x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	static int32_t x307 = INT32_MIN;
	volatile int32_t t76 = -29450;

	t76 = ((x305==(x306<x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	uint64_t x310 = 12986547740125628LLU;
	static volatile int32_t x311 = -1;

	t77 = ((x309==(x310<x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = -1LL;
	static int32_t x314 = INT32_MIN;
	int32_t x315 = 891349;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 0;

	t78 = ((x313==(x314<x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = 0;
	uint32_t x318 = 533452827U;
	static volatile uint16_t x319 = 1734U;
	uint16_t x320 = 5U;
	static volatile int32_t t79 = -243;

	t79 = ((x317==(x318<x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x322 = 4236650786952748287LLU;
	uint16_t x323 = 7U;
	int32_t t80 = -1563;

	t80 = ((x321==(x322<x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = 2619U;
	static int64_t x326 = -1LL;
	static volatile uint64_t x328 = 40291365167LLU;
	volatile int32_t t81 = 412;

	t81 = ((x325==(x326<x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int16_t x330 = -14;
	int64_t x331 = INT64_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t82 = 646879;

	t82 = ((x329==(x330<x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -28178;
	static uint16_t x334 = 59U;
	static uint32_t x335 = 31108U;
	static volatile int8_t x336 = INT8_MAX;

	t83 = ((x333==(x334<x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	int32_t x338 = INT32_MIN;
	uint16_t x339 = 15720U;
	int8_t x340 = INT8_MIN;
	int32_t t84 = 0;

	t84 = ((x337==(x338<x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static uint16_t x342 = UINT16_MAX;
	int32_t x343 = 13758;
	int32_t t85 = -5674;

	t85 = ((x341==(x342<x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	int64_t x346 = INT64_MAX;
	int8_t x347 = 34;
	uint64_t x348 = 3LLU;

	t86 = ((x345==(x346<x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = -104;
	int32_t x350 = -1;
	int32_t x351 = -1;
	int8_t x352 = 0;
	int32_t t87 = 453587;

	t87 = ((x349==(x350<x351))==x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 1856U;
	static int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	volatile int64_t x356 = 1724626806LL;
	volatile int32_t t88 = 3274630;

	t88 = ((x353==(x354<x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MAX;
	int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	uint16_t x360 = 4U;
	volatile int32_t t89 = 25;

	t89 = ((x357==(x358<x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 12LLU;
	int16_t x362 = INT16_MIN;
	static volatile int32_t x363 = 29808720;
	volatile uint64_t x364 = 2024LLU;
	static int32_t t90 = 82465276;

	t90 = ((x361==(x362<x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x366 = 442335240157070324LLU;
	static volatile uint16_t x367 = 0U;
	int8_t x368 = INT8_MIN;
	volatile int32_t t91 = 691;

	t91 = ((x365==(x366<x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -18842544371278LL;
	static int64_t x370 = INT64_MAX;
	int16_t x371 = -3;
	uint16_t x372 = 1742U;
	volatile int32_t t92 = 368;

	t92 = ((x369==(x370<x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = 113211149897LL;
	int16_t x374 = INT16_MAX;
	int64_t x375 = INT64_MIN;
	uint32_t x376 = UINT32_MAX;

	t93 = ((x373==(x374<x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	volatile int32_t x378 = 32991994;
	static uint32_t x379 = 13459971U;
	int8_t x380 = INT8_MAX;
	volatile int32_t t94 = 4056;

	t94 = ((x377==(x378<x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = UINT16_MAX;
	int8_t x382 = INT8_MIN;
	int8_t x384 = -1;
	static int32_t t95 = 1;

	t95 = ((x381==(x382<x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 64882U;
	static int16_t x386 = -10;
	volatile uint8_t x387 = 47U;
	uint64_t x388 = 88917450663LLU;

	t96 = ((x385==(x386<x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -2420121;
	uint16_t x390 = 21U;
	int8_t x391 = INT8_MIN;
	int32_t t97 = 67875991;

	t97 = ((x389==(x390<x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MAX;
	static int32_t x396 = INT32_MAX;
	volatile int32_t t98 = -173885040;

	t98 = ((x393==(x394<x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = -8;
	int64_t x399 = 272961998213899LL;
	volatile int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -946;

	t99 = ((x397==(x398<x399))==x400);

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

