#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x7 = INT32_MIN;
uint8_t x13 = UINT8_MAX;
uint8_t x15 = 24U;
uint32_t x17 = 1U;
uint8_t x18 = UINT8_MAX;
static int32_t x26 = INT32_MIN;
volatile int8_t x27 = INT8_MIN;
int32_t x32 = INT32_MIN;
int8_t x33 = INT8_MIN;
static uint8_t x41 = UINT8_MAX;
volatile int16_t x45 = -1;
int16_t x46 = INT16_MIN;
static int8_t x54 = -1;
int64_t x58 = -3205836151004057LL;
uint64_t x59 = 68134957061LLU;
uint64_t x66 = UINT64_MAX;
int32_t t17 = -30907562;
int64_t x73 = INT64_MIN;
volatile int16_t x78 = -1;
int16_t x79 = INT16_MIN;
volatile int32_t t19 = 14;
int8_t x81 = INT8_MAX;
static volatile int32_t x82 = INT32_MIN;
volatile int16_t x83 = INT16_MIN;
int64_t x84 = INT64_MIN;
volatile int32_t x91 = INT32_MIN;
static int32_t t23 = -350;
uint8_t x103 = UINT8_MAX;
uint64_t x121 = 0LLU;
static volatile int32_t t30 = 41870;
volatile int64_t x125 = INT64_MIN;
volatile int16_t x126 = -1;
uint16_t x127 = UINT16_MAX;
uint32_t x131 = 742835998U;
int32_t x133 = INT32_MIN;
volatile int32_t x144 = INT32_MIN;
int32_t x147 = 24913760;
uint16_t x157 = UINT16_MAX;
int8_t x167 = INT8_MAX;
uint32_t x169 = 1422851574U;
int8_t x173 = INT8_MIN;
int64_t x176 = INT64_MIN;
static int8_t x182 = -7;
volatile int32_t t45 = -64576690;
uint64_t x186 = 150LLU;
uint32_t x195 = UINT32_MAX;
static int32_t x203 = 333;
int32_t x205 = INT32_MIN;
volatile int16_t x208 = -14;
uint8_t x220 = UINT8_MAX;
volatile int32_t t54 = 1;
int16_t x221 = INT16_MIN;
volatile int32_t t55 = 17409;
int16_t x228 = 62;
volatile int32_t t56 = 110728995;
uint16_t x230 = UINT16_MAX;
uint32_t x233 = 182U;
volatile int16_t x235 = INT16_MAX;
int32_t x236 = 1;
static int32_t x237 = INT32_MIN;
volatile int64_t x239 = INT64_MIN;
int32_t x243 = -2686988;
volatile int32_t t60 = -212931;
int32_t x248 = -1;
static uint64_t x257 = 1087839049962648LLU;
volatile uint64_t x268 = 432LLU;
int32_t t67 = 0;
int16_t x283 = 1;
static uint32_t x284 = UINT32_MAX;
static volatile int16_t x287 = 13;
int16_t x295 = INT16_MIN;
volatile uint8_t x300 = 0U;
int32_t t76 = -252553479;
int8_t x312 = -1;
int16_t x315 = 159;
int32_t t78 = -3159;
volatile int32_t t79 = 108;
int8_t x322 = -1;
int64_t x323 = -397LL;
static int16_t x324 = -209;
uint32_t x327 = UINT32_MAX;
static int8_t x333 = -1;
int64_t x337 = INT64_MIN;
uint16_t x340 = UINT16_MAX;
static int64_t x342 = -2793167364015LL;
volatile int32_t t87 = 783302;
volatile int64_t x353 = -9190LL;
int32_t t88 = 63;
static uint8_t x368 = 18U;
int32_t t91 = -711393;
volatile int32_t t92 = -171634120;
volatile int16_t x383 = -1177;
volatile int8_t x389 = INT8_MIN;
static uint16_t x396 = 4U;
volatile int32_t t99 = 1584060;


void f0(void) {
	int8_t x1 = -1;
	int64_t x2 = -1LL;
	int16_t x3 = 13743;
	static int8_t x4 = 20;
	static int32_t t0 = 8063252;

	t0 = ((x1<(x2<=x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 13U;
	int64_t x6 = -1LL;
	static int8_t x8 = -1;
	int32_t t1 = 1306;

	t1 = ((x5<(x6<=x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	static int8_t x10 = -1;
	static int32_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -934216;

	t2 = ((x9<(x10<=x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x14 = 348U;
	int8_t x16 = 2;
	volatile int32_t t3 = 0;

	t3 = ((x13<(x14<=x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = -1LL;
	int64_t x20 = INT64_MAX;
	volatile int32_t t4 = 2965;

	t4 = ((x17<(x18<=x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 2U;
	uint16_t x22 = UINT16_MAX;
	static uint16_t x23 = 7U;
	int64_t x24 = 2494225142LL;
	volatile int32_t t5 = 244081;

	t5 = ((x21<(x22<=x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 15U;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = 2175883;

	t6 = ((x25<(x26<=x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -1;
	uint8_t x30 = 3U;
	uint16_t x31 = 3U;
	int32_t t7 = -10148820;

	t7 = ((x29<(x30<=x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x34 = 11408U;
	static int8_t x35 = -3;
	static int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -60233;

	t8 = ((x33<(x34<=x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = 1;
	int32_t x39 = 528;
	int32_t x40 = -1;
	int32_t t9 = -4335435;

	t9 = ((x37<(x38<=x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	uint8_t x43 = 4U;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = 421;

	t10 = ((x41<(x42<=x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = INT32_MIN;
	uint16_t x48 = 13U;
	int32_t t11 = 3580932;

	t11 = ((x45<(x46<=x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	volatile uint32_t x50 = 6U;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = -129344;

	t12 = ((x49<(x50<=x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int8_t x55 = INT8_MAX;
	volatile int32_t x56 = -1;
	static volatile int32_t t13 = 120482;

	t13 = ((x53<(x54<=x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int64_t x60 = INT64_MIN;
	int32_t t14 = -38;

	t14 = ((x57<(x58<=x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 53U;
	int64_t x62 = INT64_MAX;
	static uint64_t x63 = UINT64_MAX;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 2;

	t15 = ((x61<(x62<=x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint64_t x67 = 882085662528256520LLU;
	volatile uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -242;

	t16 = ((x65<(x66<=x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 5U;
	uint64_t x70 = 14014838LLU;
	uint8_t x71 = UINT8_MAX;
	int16_t x72 = -1;

	t17 = ((x69<(x70<=x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x74 = 19137174;
	volatile int16_t x75 = INT16_MIN;
	static int32_t x76 = -1;
	volatile int32_t t18 = -201;

	t18 = ((x73<(x74<=x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int16_t x80 = INT16_MIN;

	t19 = ((x77<(x78<=x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t t20 = 0;

	t20 = ((x81<(x82<=x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	uint8_t x86 = 102U;
	int64_t x87 = -1LL;
	int16_t x88 = INT16_MAX;
	int32_t t21 = -2781;

	t21 = ((x85<(x86<=x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = 2051466420LL;
	int16_t x90 = INT16_MIN;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = 89209199;

	t22 = ((x89<(x90<=x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int64_t x94 = INT64_MIN;
	static int64_t x95 = INT64_MIN;
	static int16_t x96 = INT16_MAX;

	t23 = ((x93<(x94<=x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x97 = INT64_MIN;
	int8_t x98 = -1;
	static volatile uint64_t x99 = UINT64_MAX;
	static volatile int64_t x100 = -1LL;
	int32_t t24 = -124;

	t24 = ((x97<(x98<=x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 4U;
	static int32_t x102 = INT32_MAX;
	uint8_t x104 = 30U;
	volatile int32_t t25 = 241;

	t25 = ((x101<(x102<=x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1U;
	static uint16_t x106 = 950U;
	uint64_t x107 = 28781942LLU;
	volatile uint8_t x108 = 91U;
	int32_t t26 = -142230566;

	t26 = ((x105<(x106<=x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	static int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MAX;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 66381415;

	t27 = ((x109<(x110<=x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	int16_t x114 = 1;
	int64_t x115 = INT64_MAX;
	int64_t x116 = -1LL;
	volatile int32_t t28 = -37;

	t28 = ((x113<(x114<=x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int32_t x118 = 30;
	int64_t x119 = 1983386057170855012LL;
	static uint32_t x120 = UINT32_MAX;
	int32_t t29 = -78642038;

	t29 = ((x117<(x118<=x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x122 = INT32_MAX;
	static int16_t x123 = INT16_MAX;
	int64_t x124 = -839296073677LL;

	t30 = ((x121<(x122<=x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x128 = 54;
	int32_t t31 = -960;

	t31 = ((x125<(x126<=x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MAX;
	uint8_t x130 = UINT8_MAX;
	volatile int32_t x132 = -1;
	volatile int32_t t32 = -1;

	t32 = ((x129<(x130<=x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MIN;
	static int64_t x135 = INT64_MIN;
	static volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = -2401;

	t33 = ((x133<(x134<=x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	volatile uint16_t x138 = 531U;
	static volatile int16_t x139 = 0;
	int32_t x140 = 117;
	int32_t t34 = -185900;

	t34 = ((x137<(x138<=x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	int16_t x142 = INT16_MAX;
	static uint32_t x143 = 1915407U;
	volatile int32_t t35 = 20637568;

	t35 = ((x141<(x142<=x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 462897625U;
	int32_t x146 = -1;
	int32_t x148 = INT32_MAX;
	static volatile int32_t t36 = 7;

	t36 = ((x145<(x146<=x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 42LLU;
	int8_t x150 = -1;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = 327U;
	int32_t t37 = -33;

	t37 = ((x149<(x150<=x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x153 = UINT8_MAX;
	int32_t x154 = -1282219;
	volatile int16_t x155 = -48;
	int64_t x156 = -1LL;
	int32_t t38 = -170;

	t38 = ((x153<(x154<=x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 63U;
	int64_t x159 = 2LL;
	uint32_t x160 = 938U;
	static volatile int32_t t39 = 13;

	t39 = ((x157<(x158<=x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	int8_t x162 = INT8_MAX;
	static int32_t x163 = -3134;
	volatile int8_t x164 = -2;
	volatile int32_t t40 = 16;

	t40 = ((x161<(x162<=x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint8_t x166 = 33U;
	int8_t x168 = -1;
	int32_t t41 = -2246;

	t41 = ((x165<(x166<=x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MIN;
	uint8_t x171 = 84U;
	uint32_t x172 = 1U;
	int32_t t42 = -803634;

	t42 = ((x169<(x170<=x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = UINT16_MAX;
	int64_t x175 = INT64_MAX;
	volatile int32_t t43 = -99;

	t43 = ((x173<(x174<=x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	static int8_t x178 = -1;
	static volatile uint64_t x179 = UINT64_MAX;
	static int64_t x180 = -444241806230078LL;
	int32_t t44 = -1916908;

	t44 = ((x177<(x178<=x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	volatile int64_t x183 = 161009927874873581LL;
	uint32_t x184 = UINT32_MAX;

	t45 = ((x181<(x182<=x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	static int64_t x187 = -3027212752916442381LL;
	int8_t x188 = 1;
	int32_t t46 = -345352006;

	t46 = ((x185<(x186<=x187))==x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 5847743U;
	int64_t x190 = INT64_MAX;
	int64_t x191 = -2LL;
	int64_t x192 = -1LL;
	int32_t t47 = -4075147;

	t47 = ((x189<(x190<=x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = 226110LLU;
	volatile int8_t x194 = INT8_MAX;
	static uint64_t x196 = UINT64_MAX;
	int32_t t48 = -9824;

	t48 = ((x193<(x194<=x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MIN;
	volatile int64_t x200 = INT64_MIN;
	static int32_t t49 = 0;

	t49 = ((x197<(x198<=x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	uint64_t x202 = 1589047625682627278LLU;
	int8_t x204 = -17;
	volatile int32_t t50 = -449436;

	t50 = ((x201<(x202<=x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x206 = 31630403703LL;
	static int16_t x207 = INT16_MAX;
	volatile int32_t t51 = 1;

	t51 = ((x205<(x206<=x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 9U;
	static int64_t x210 = 86122291242452LL;
	int64_t x211 = INT64_MAX;
	static int32_t x212 = -40;
	volatile int32_t t52 = 30922;

	t52 = ((x209<(x210<=x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -829355821136339LL;
	static int64_t x214 = -1LL;
	int64_t x215 = -1LL;
	int64_t x216 = INT64_MAX;
	int32_t t53 = -29781021;

	t53 = ((x213<(x214<=x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MIN;
	volatile int64_t x219 = INT64_MAX;

	t54 = ((x217<(x218<=x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = UINT64_MAX;
	static int16_t x223 = -1;
	int16_t x224 = INT16_MAX;

	t55 = ((x221<(x222<=x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	volatile int32_t x226 = INT32_MAX;
	static uint8_t x227 = 5U;

	t56 = ((x225<(x226<=x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x229 = INT8_MAX;
	static volatile int32_t x231 = -7;
	int32_t x232 = -9;
	int32_t t57 = 105;

	t57 = ((x229<(x230<=x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x234 = INT64_MAX;
	volatile int32_t t58 = 980;

	t58 = ((x233<(x234<=x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x238 = 1571734396081096LL;
	int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 0;

	t59 = ((x237<(x238<=x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	uint8_t x242 = 0U;
	volatile uint64_t x244 = UINT64_MAX;

	t60 = ((x241<(x242<=x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 52518U;
	uint32_t x246 = UINT32_MAX;
	volatile uint8_t x247 = 30U;
	int32_t t61 = 313178307;

	t61 = ((x245<(x246<=x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -36458539987703LL;
	int64_t x250 = INT64_MIN;
	static int32_t x251 = -18657;
	int8_t x252 = INT8_MAX;
	static int32_t t62 = 0;

	t62 = ((x249<(x250<=x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = 36U;
	static uint64_t x254 = 2209206018LLU;
	static int32_t x255 = INT32_MIN;
	volatile uint32_t x256 = 0U;
	static int32_t t63 = -981;

	t63 = ((x253<(x254<=x255))==x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MAX;
	int32_t x259 = INT32_MAX;
	volatile int16_t x260 = INT16_MAX;
	volatile int32_t t64 = 37;

	t64 = ((x257<(x258<=x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MAX;
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	int16_t x264 = INT16_MAX;
	int32_t t65 = 7506;

	t65 = ((x261<(x262<=x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	uint64_t x266 = 926334804LLU;
	uint64_t x267 = UINT64_MAX;
	static volatile int32_t t66 = 226823;

	t66 = ((x265<(x266<=x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	static int16_t x270 = INT16_MIN;
	static uint32_t x271 = UINT32_MAX;
	uint16_t x272 = UINT16_MAX;

	t67 = ((x269<(x270<=x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 414U;
	volatile int64_t x274 = INT64_MAX;
	int16_t x275 = 0;
	static int16_t x276 = -7;
	volatile int32_t t68 = -5;

	t68 = ((x273<(x274<=x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	static uint16_t x278 = 17047U;
	uint32_t x279 = 0U;
	static volatile int16_t x280 = 40;
	static int32_t t69 = -845801670;

	t69 = ((x277<(x278<=x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	volatile int16_t x282 = -1;
	int32_t t70 = 1472478;

	t70 = ((x281<(x282<=x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 287U;
	static int64_t x286 = INT64_MIN;
	volatile uint32_t x288 = 2713U;
	volatile int32_t t71 = 0;

	t71 = ((x285<(x286<=x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	static volatile int64_t x290 = INT64_MIN;
	uint8_t x291 = 1U;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -53304174;

	t72 = ((x289<(x290<=x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 52U;
	uint16_t x294 = UINT16_MAX;
	static uint16_t x296 = 29148U;
	volatile int32_t t73 = 67937926;

	t73 = ((x293<(x294<=x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MAX;
	static int64_t x299 = -1LL;
	volatile int32_t t74 = -129;

	t74 = ((x297<(x298<=x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 238797622;
	int16_t x302 = INT16_MIN;
	volatile uint64_t x303 = 1013475495617891LLU;
	int64_t x304 = -1LL;
	int32_t t75 = 132846010;

	t75 = ((x301<(x302<=x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static uint16_t x306 = UINT16_MAX;
	volatile int32_t x307 = 9;
	uint16_t x308 = 10159U;

	t76 = ((x305<(x306<=x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MAX;
	static int8_t x310 = 3;
	uint16_t x311 = UINT16_MAX;
	volatile int32_t t77 = 13;

	t77 = ((x309<(x310<=x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint32_t x314 = UINT32_MAX;
	int32_t x316 = INT32_MIN;

	t78 = ((x313<(x314<=x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile int32_t x318 = INT32_MIN;
	volatile int16_t x319 = 3401;
	uint8_t x320 = UINT8_MAX;

	t79 = ((x317<(x318<=x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	static int32_t t80 = -241;

	t80 = ((x321<(x322<=x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 11;
	uint8_t x326 = 5U;
	uint64_t x328 = 7723123787996LLU;
	int32_t t81 = 54968;

	t81 = ((x325<(x326<=x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 1327U;
	int32_t x330 = -23184749;
	volatile int32_t x331 = -1;
	volatile int32_t x332 = INT32_MAX;
	int32_t t82 = -20704;

	t82 = ((x329<(x330<=x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = 36U;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t x336 = INT32_MAX;
	int32_t t83 = 1250786;

	t83 = ((x333<(x334<=x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = -3;
	int8_t x339 = -1;
	static int32_t t84 = 0;

	t84 = ((x337<(x338<=x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 556590798265LLU;
	static int8_t x343 = 22;
	uint64_t x344 = 34475300LLU;
	volatile int32_t t85 = 0;

	t85 = ((x341<(x342<=x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 2950;
	static int16_t x346 = INT16_MIN;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -1LL;
	volatile int32_t t86 = 5;

	t86 = ((x345<(x346<=x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	static uint64_t x350 = UINT64_MAX;
	static int64_t x351 = INT64_MAX;
	static uint8_t x352 = 80U;

	t87 = ((x349<(x350<=x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -515475479;
	uint8_t x355 = UINT8_MAX;
	int64_t x356 = INT64_MIN;

	t88 = ((x353<(x354<=x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	static int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MIN;
	int32_t x360 = -1;
	int32_t t89 = -2;

	t89 = ((x357<(x358<=x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	static int64_t x362 = -1LL;
	int8_t x363 = -1;
	int8_t x364 = -1;
	static int32_t t90 = 60;

	t90 = ((x361<(x362<=x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = 8027746408407311846LLU;
	volatile int16_t x366 = INT16_MIN;
	static int64_t x367 = -582LL;

	t91 = ((x365<(x366<=x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	volatile int32_t x370 = -1;
	static int16_t x371 = -1526;
	uint32_t x372 = 28U;

	t92 = ((x369<(x370<=x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	static int64_t x374 = -1LL;
	volatile int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MAX;
	int32_t t93 = -265795507;

	t93 = ((x373<(x374<=x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1LLU;
	uint64_t x378 = UINT64_MAX;
	int8_t x379 = INT8_MIN;
	uint8_t x380 = 23U;
	int32_t t94 = -883786;

	t94 = ((x377<(x378<=x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x381 = UINT16_MAX;
	uint64_t x382 = 13LLU;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 807694;

	t95 = ((x381<(x382<=x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 758106234125LLU;
	int64_t x386 = -1LL;
	uint16_t x387 = UINT16_MAX;
	int8_t x388 = 0;
	int32_t t96 = 194198;

	t96 = ((x385<(x386<=x387))==x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = UINT16_MAX;
	uint32_t x391 = 6913U;
	int16_t x392 = INT16_MAX;
	static volatile int32_t t97 = 1;

	t97 = ((x389<(x390<=x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -474234;
	int64_t x394 = INT64_MAX;
	int32_t x395 = -1;
	volatile int32_t t98 = 15370;

	t98 = ((x393<(x394<=x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 66LLU;
	static uint32_t x398 = 1499465717U;
	volatile uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MIN;

	t99 = ((x397<(x398<=x399))==x400);

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

