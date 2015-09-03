#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 2U;
int64_t t0 = 236514LL;
uint8_t x11 = 1U;
uint32_t x21 = UINT32_MAX;
uint32_t t4 = 62958760U;
static volatile int16_t x28 = INT16_MIN;
volatile uint64_t x46 = 12558855227054442LLU;
uint8_t x49 = 2U;
uint8_t x50 = UINT8_MAX;
volatile int8_t x54 = -1;
static int64_t x67 = -10LL;
int32_t t14 = -1496;
volatile uint16_t x73 = 191U;
static int32_t x79 = INT32_MAX;
static int8_t x80 = -1;
static int16_t x89 = INT16_MAX;
int16_t x92 = INT16_MIN;
uint16_t x96 = UINT16_MAX;
uint16_t x103 = UINT16_MAX;
uint32_t x104 = UINT32_MAX;
uint32_t x105 = 6U;
uint8_t x106 = UINT8_MAX;
static uint32_t t23 = 162716186U;
int32_t x111 = INT32_MAX;
int8_t x112 = INT8_MIN;
volatile uint64_t t24 = 2604322867LLU;
int16_t x117 = 353;
int32_t x118 = 384309;
static volatile int32_t x119 = -1;
uint64_t x120 = UINT64_MAX;
int64_t x129 = INT64_MAX;
static int16_t x132 = INT16_MAX;
int32_t x134 = -3592633;
uint32_t t29 = 3721U;
int16_t x137 = 1;
int32_t x138 = INT32_MIN;
uint8_t x139 = 101U;
uint64_t x140 = 1177795LLU;
static int64_t x141 = 1LL;
int32_t x143 = -1;
int64_t x145 = -1LL;
static volatile uint64_t x147 = 9210508547LLU;
volatile int64_t t35 = -66616702LL;
uint64_t x168 = 764799373353LLU;
uint64_t t36 = 6LLU;
uint16_t x172 = UINT16_MAX;
static uint64_t x182 = 395244808103312LLU;
volatile uint64_t t40 = 22605LLU;
uint32_t x193 = 24226U;
static int32_t x196 = INT32_MAX;
static int64_t x198 = INT64_MAX;
int64_t x201 = -1LL;
int8_t x204 = -48;
int64_t t43 = 5974773794993LL;
int32_t x207 = INT32_MIN;
static uint64_t x215 = UINT64_MAX;
uint16_t x219 = 91U;
volatile uint32_t t47 = 914491990U;
uint32_t x226 = 83990989U;
volatile int64_t x227 = -51LL;
int64_t t49 = -1065102687862071LL;
int16_t x239 = INT16_MIN;
volatile uint64_t t53 = 121708352036955LLU;
int8_t x247 = -1;
int64_t t54 = -41627547LL;
uint8_t x254 = 8U;
volatile int32_t t56 = -170407;
static uint8_t x258 = UINT8_MAX;
uint8_t x259 = 3U;
uint32_t x261 = UINT32_MAX;
volatile uint32_t t58 = 78U;
volatile uint64_t t64 = 51980656LLU;
uint16_t x301 = 21U;
int32_t x303 = -1;
int64_t x304 = -1LL;
static uint32_t x307 = 10U;
static volatile uint32_t t66 = 585082U;
int16_t x328 = INT16_MIN;
int64_t t70 = 4390259898955LL;
uint16_t x331 = 22853U;
uint16_t x339 = 0U;
uint32_t t75 = 2514981U;
uint64_t x354 = 36222255911033LLU;
int32_t x355 = 331;
int32_t x357 = INT32_MIN;
static uint16_t x361 = 116U;
static int16_t x362 = INT16_MIN;
int64_t x374 = -2851018LL;
static int16_t x375 = INT16_MAX;
int32_t x377 = -1;
static int64_t x378 = INT64_MAX;
int32_t x381 = -1;
volatile int16_t x397 = INT16_MIN;
uint16_t x399 = 0U;
volatile int32_t t85 = 10;
static volatile int32_t t88 = 147;
static uint32_t t90 = 513U;
volatile int64_t x426 = 267996951377LL;
int32_t x427 = INT32_MIN;
int64_t t91 = 3824574677325255LL;
volatile int8_t x431 = -1;
int32_t x439 = -1;
uint16_t x447 = 4U;
static uint8_t x449 = UINT8_MAX;
static int32_t t95 = -991765134;
int16_t x459 = INT16_MIN;
uint16_t x477 = UINT16_MAX;
volatile uint8_t x479 = 6U;


void f0(void) {
	volatile int64_t x1 = -1LL;
	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;

	t0 = (((x1+x2)&x3)/x4);

	if (t0 != -1073741888LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	uint64_t x6 = 35058LLU;
	volatile int32_t x7 = INT32_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile uint64_t t1 = 1LLU;

	t1 = (((x5+x6)&x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MAX;
	uint32_t x10 = 962752923U;
	static int32_t x12 = INT32_MIN;
	uint32_t t2 = 151275U;

	t2 = (((x9+x10)&x11)/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 17643404LL;
	int64_t x14 = -1LL;
	int64_t x15 = INT64_MAX;
	uint16_t x16 = UINT16_MAX;
	int64_t t3 = -1780876501064640LL;

	t3 = (((x13+x14)&x15)/x16);

	if (t3 != 269LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x22 = -1;
	int16_t x23 = 0;
	volatile int8_t x24 = 4;

	t4 = (((x21+x22)&x23)/x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 12U;
	volatile int16_t x26 = INT16_MAX;
	volatile uint64_t x27 = UINT64_MAX;
	uint64_t t5 = 1449281236477063592LLU;

	t5 = (((x25+x26)&x27)/x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	uint8_t x30 = UINT8_MAX;
	int64_t x31 = -13LL;
	static volatile uint32_t x32 = UINT32_MAX;
	static int64_t t6 = 642217426822694LL;

	t6 = (((x29+x30)&x31)/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 4962343;
	static volatile int16_t x34 = 413;
	static int64_t x35 = -4022508004183LL;
	static uint16_t x36 = 19U;
	volatile int64_t t7 = 501916769980LL;

	t7 = (((x33+x34)&x35)/x36);

	if (t7 != 229706LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MAX;
	volatile int32_t x39 = INT32_MAX;
	int8_t x40 = -1;
	int32_t t8 = -1;

	t8 = (((x37+x38)&x39)/x40);

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	int64_t x47 = -2875911190809LL;
	int64_t x48 = INT64_MIN;
	static volatile uint64_t t9 = 187LLU;

	t9 = (((x45+x46)&x47)/x48);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x51 = 18745036LLU;
	volatile int16_t x52 = -9853;
	uint64_t t10 = 117LLU;

	t10 = (((x49+x50)&x51)/x52);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MAX;
	int16_t x55 = INT16_MIN;
	uint16_t x56 = UINT16_MAX;
	int64_t t11 = 49242152066LL;

	t11 = (((x53+x54)&x55)/x56);

	if (t11 != 140739635871744LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = INT16_MIN;
	static uint8_t x62 = 6U;
	uint64_t x63 = 29986853693333LLU;
	static volatile uint64_t x64 = 63319074LLU;
	uint64_t t12 = 6LLU;

	t12 = (((x61+x62)&x63)/x64);

	if (t12 != 473583LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	volatile uint64_t x66 = 1867LLU;
	int16_t x68 = -1;
	volatile uint64_t t13 = 80813864LLU;

	t13 = (((x65+x66)&x67)/x68);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x69 = UINT16_MAX;
	uint8_t x70 = UINT8_MAX;
	static int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MAX;

	t14 = (((x69+x70)&x71)/x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = 6723LL;
	volatile int8_t x75 = -7;
	volatile int32_t x76 = INT32_MAX;
	int64_t t15 = -95027455031438352LL;

	t15 = (((x73+x74)&x75)/x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = 0;
	uint32_t x78 = 26U;
	volatile uint32_t t16 = 16U;

	t16 = (((x77+x78)&x79)/x80);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -1;
	int32_t x82 = -28585;
	int8_t x83 = -3;
	int64_t x84 = INT64_MAX;
	static int64_t t17 = 4415472029463041LL;

	t17 = (((x81+x82)&x83)/x84);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	int8_t x86 = INT8_MIN;
	static uint8_t x87 = 2U;
	uint32_t x88 = 40U;
	uint32_t t18 = 2400023U;

	t18 = (((x85+x86)&x87)/x88);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = -4;
	uint16_t x91 = 7U;
	volatile int32_t t19 = -2060;

	t19 = (((x89+x90)&x91)/x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	static volatile int8_t x94 = INT8_MAX;
	int8_t x95 = 0;
	int32_t t20 = 23840655;

	t20 = (((x93+x94)&x95)/x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = INT8_MIN;
	uint64_t x98 = 38996996518LLU;
	uint16_t x99 = 62U;
	int16_t x100 = INT16_MIN;
	volatile uint64_t t21 = 7LLU;

	t21 = (((x97+x98)&x99)/x100);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = 77;
	int16_t x102 = INT16_MIN;
	volatile uint32_t t22 = 49365347U;

	t22 = (((x101+x102)&x103)/x104);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x107 = -19491;
	int8_t x108 = INT8_MIN;

	t23 = (((x105+x106)&x107)/x108);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = -1;
	static uint64_t x110 = 33032713448971LLU;

	t24 = (((x109+x110)&x111)/x112);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -101;
	int8_t x114 = -1;
	static uint32_t x115 = 73164050U;
	uint16_t x116 = 234U;
	uint32_t t25 = 778U;

	t25 = (((x113+x114)&x115)/x116);

	if (t25 != 312666U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t t26 = 16012120978769LLU;

	t26 = (((x117+x118)&x119)/x120);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = 0U;
	uint32_t x126 = UINT32_MAX;
	int32_t x127 = INT32_MAX;
	static int8_t x128 = INT8_MAX;
	uint32_t t27 = 50226U;

	t27 = (((x125+x126)&x127)/x128);

	if (t27 != 16909320U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x130 = INT64_MIN;
	uint8_t x131 = 2U;
	static int64_t t28 = 7315173012LL;

	t28 = (((x129+x130)&x131)/x132);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = -1;
	static volatile int32_t x135 = INT32_MAX;
	uint32_t x136 = 2910294U;

	t29 = (((x133+x134)&x135)/x136);

	if (t29 != 736U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t t30 = 4235760376951959648LLU;

	t30 = (((x137+x138)&x139)/x140);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x142 = INT32_MIN;
	int32_t x144 = -5221571;
	volatile int64_t t31 = 1443LL;

	t31 = (((x141+x142)&x143)/x144);

	if (t31 != 411LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x146 = UINT64_MAX;
	int8_t x148 = -1;
	static uint64_t t32 = 3997025076941545700LLU;

	t32 = (((x145+x146)&x147)/x148);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -1;
	volatile int16_t x150 = INT16_MAX;
	uint32_t x151 = 7842U;
	int64_t x152 = -42062LL;
	volatile int64_t t33 = 13945412359LL;

	t33 = (((x149+x150)&x151)/x152);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MIN;
	int8_t x154 = 1;
	static volatile int16_t x155 = INT16_MIN;
	volatile uint8_t x156 = 6U;
	volatile int64_t t34 = -29LL;

	t34 = (((x153+x154)&x155)/x156);

	if (t34 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 18362157U;
	int64_t x158 = INT64_MIN;
	int8_t x159 = -1;
	int8_t x160 = INT8_MIN;

	t35 = (((x157+x158)&x159)/x160);

	if (t35 != 72057594037784481LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -1LL;
	int16_t x166 = 4532;
	int8_t x167 = 1;

	t36 = (((x165+x166)&x167)/x168);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = -1;
	int32_t x170 = 3759092;
	int8_t x171 = -2;
	volatile int32_t t37 = 7550;

	t37 = (((x169+x170)&x171)/x172);

	if (t37 != 57) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 560U;
	int16_t x174 = INT16_MAX;
	uint16_t x175 = UINT16_MAX;
	uint32_t x176 = 11114U;
	uint32_t t38 = 44121469U;

	t38 = (((x173+x174)&x175)/x176);

	if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -2623006LL;
	uint8_t x178 = 21U;
	int16_t x179 = 0;
	int16_t x180 = INT16_MIN;
	static volatile int64_t t39 = -73LL;

	t39 = (((x177+x178)&x179)/x180);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x181 = 431050LLU;
	volatile int8_t x183 = -3;
	uint32_t x184 = 181412744U;

	t40 = (((x181+x182)&x183)/x184);

	if (t40 != 2178704LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x194 = -1;
	uint8_t x195 = UINT8_MAX;
	static uint32_t t41 = 14656993U;

	t41 = (((x193+x194)&x195)/x196);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = INT32_MIN;
	static int64_t x199 = INT64_MAX;
	static volatile int64_t x200 = INT64_MIN;
	int64_t t42 = -144297748460LL;

	t42 = (((x197+x198)&x199)/x200);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x202 = 22592U;
	static int32_t x203 = 201;

	t43 = (((x201+x202)&x203)/x204);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x205 = -1;
	volatile uint16_t x206 = 23403U;
	int64_t x208 = -25529LL;
	volatile int64_t t44 = -1LL;

	t44 = (((x205+x206)&x207)/x208);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x209 = 26;
	int8_t x210 = INT8_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	int16_t x212 = INT16_MIN;
	uint32_t t45 = 189621U;

	t45 = (((x209+x210)&x211)/x212);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x213 = 19U;
	int16_t x214 = INT16_MIN;
	uint16_t x216 = 2827U;
	uint64_t t46 = 271106LLU;

	t46 = (((x213+x214)&x215)/x216);

	if (t46 != 6525201299508142LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = 1;
	uint32_t x218 = 1534204430U;
	static volatile int32_t x220 = -1;

	t47 = (((x217+x218)&x219)/x220);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = -1;
	uint16_t x222 = 11U;
	int32_t x223 = INT32_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t48 = 1865994;

	t48 = (((x221+x222)&x223)/x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = INT8_MAX;
	int32_t x228 = INT32_MIN;

	t49 = (((x225+x226)&x227)/x228);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = -35778564;
	volatile int32_t x230 = -1;
	int64_t x231 = 30220073776615996LL;
	int16_t x232 = INT16_MIN;
	volatile int64_t t50 = 2102352124958269LL;

	t50 = (((x229+x230)&x231)/x232);

	if (t50 != -922243461396LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = -8;
	volatile int8_t x234 = INT8_MIN;
	int32_t x235 = -1;
	uint32_t x236 = 109U;
	uint32_t t51 = 6441U;

	t51 = (((x233+x234)&x235)/x236);

	if (t51 != 39403368U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = -56LL;
	uint64_t x240 = 2LLU;
	uint64_t t52 = 3636145279202380LLU;

	t52 = (((x237+x238)&x239)/x240);

	if (t52 != 9223372035781017600LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 65U;
	uint32_t x242 = 948189U;
	volatile uint64_t x243 = UINT64_MAX;
	int16_t x244 = 1;

	t53 = (((x241+x242)&x243)/x244);

	if (t53 != 948254LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x245 = 213LL;
	int64_t x246 = -1LL;
	int16_t x248 = INT16_MIN;

	t54 = (((x245+x246)&x247)/x248);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = -1;
	static int8_t x251 = INT8_MIN;
	volatile int8_t x252 = -13;
	volatile int32_t t55 = 28158339;

	t55 = (((x249+x250)&x251)/x252);

	if (t55 != 2530) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x253 = 12U;
	int16_t x255 = -1;
	int16_t x256 = -1;

	t56 = (((x253+x254)&x255)/x256);

	if (t56 != -20) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	uint32_t x260 = 1552044723U;
	volatile uint32_t t57 = 27U;

	t57 = (((x257+x258)&x259)/x260);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x262 = -1965;
	static int32_t x263 = 242;
	uint8_t x264 = UINT8_MAX;

	t58 = (((x261+x262)&x263)/x264);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = INT16_MIN;
	static volatile uint16_t x270 = 1312U;
	static int8_t x271 = 2;
	static volatile uint64_t x272 = 2486101230278LLU;
	volatile uint64_t t59 = 457220069307064995LLU;

	t59 = (((x269+x270)&x271)/x272);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = -2093366LL;
	int32_t x274 = -2;
	uint32_t x275 = 413U;
	uint8_t x276 = UINT8_MAX;
	int64_t t60 = 1951749386277593679LL;

	t60 = (((x273+x274)&x275)/x276);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = UINT32_MAX;
	volatile uint16_t x278 = 0U;
	int8_t x279 = -1;
	int8_t x280 = INT8_MIN;
	static uint32_t t61 = 24403U;

	t61 = (((x277+x278)&x279)/x280);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x285 = 3U;
	volatile uint64_t x286 = 18772242769241161LLU;
	int64_t x287 = INT64_MAX;
	uint8_t x288 = UINT8_MAX;
	uint64_t t62 = 831418741150LLU;

	t62 = (((x285+x286)&x287)/x288);

	if (t62 != 73616638310749LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = 37U;
	volatile int32_t x290 = INT32_MAX;
	volatile int8_t x291 = INT8_MIN;
	static volatile int16_t x292 = INT16_MAX;
	static uint32_t t63 = 40715U;

	t63 = (((x289+x290)&x291)/x292);

	if (t63 != 65538U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x293 = 52818256LLU;
	int8_t x294 = INT8_MAX;
	uint32_t x295 = 11186215U;
	int64_t x296 = -1LL;

	t64 = (((x293+x294)&x295)/x296);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x302 = UINT16_MAX;
	static int64_t t65 = -2626880955213LL;

	t65 = (((x301+x302)&x303)/x304);

	if (t65 != -65556LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x305 = UINT16_MAX;
	volatile int8_t x306 = INT8_MAX;
	static int32_t x308 = INT32_MAX;

	t66 = (((x305+x306)&x307)/x308);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = -254;
	int16_t x310 = -6;
	int8_t x311 = INT8_MIN;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t67 = -863877;

	t67 = (((x309+x310)&x311)/x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x317 = INT16_MAX;
	int32_t x318 = -58;
	static int8_t x319 = INT8_MIN;
	int64_t x320 = 246200190406934791LL;
	int64_t t68 = -46702150839LL;

	t68 = (((x317+x318)&x319)/x320);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x321 = INT8_MIN;
	uint32_t x322 = 1046U;
	volatile int16_t x323 = -15172;
	int16_t x324 = INT16_MIN;
	uint32_t t69 = 82U;

	t69 = (((x321+x322)&x323)/x324);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = INT64_MIN;
	volatile uint16_t x326 = 7136U;
	int32_t x327 = INT32_MIN;

	t70 = (((x325+x326)&x327)/x328);

	if (t70 != 281474976710656LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	volatile uint64_t x332 = 80759717626LLU;
	uint64_t t71 = 114284672419090319LLU;

	t71 = (((x329+x330)&x331)/x332);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x333 = INT32_MIN;
	volatile uint16_t x334 = 4U;
	int16_t x335 = 3043;
	int32_t x336 = -584124;
	int32_t t72 = -161403;

	t72 = (((x333+x334)&x335)/x336);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x337 = -4215256;
	volatile int8_t x338 = -29;
	volatile int16_t x340 = 32;
	int32_t t73 = -21339;

	t73 = (((x337+x338)&x339)/x340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x345 = 767292U;
	uint8_t x346 = 4U;
	uint16_t x347 = 10U;
	uint8_t x348 = UINT8_MAX;
	volatile uint32_t t74 = 29U;

	t74 = (((x345+x346)&x347)/x348);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x349 = 748U;
	static volatile uint8_t x350 = 122U;
	volatile uint32_t x351 = 11811171U;
	int16_t x352 = -1;

	t75 = (((x349+x350)&x351)/x352);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x353 = INT32_MIN;
	volatile uint32_t x356 = UINT32_MAX;
	uint64_t t76 = 7113653LLU;

	t76 = (((x353+x354)&x355)/x356);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x358 = 824025489;
	static int8_t x359 = 1;
	uint16_t x360 = 5215U;
	volatile int32_t t77 = -72946;

	t77 = (((x357+x358)&x359)/x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x363 = UINT8_MAX;
	int32_t x364 = 40322;
	int32_t t78 = -494360131;

	t78 = (((x361+x362)&x363)/x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = 0;
	uint32_t x376 = 27U;
	int64_t t79 = 7642409235251002LL;

	t79 = (((x373+x374)&x375)/x376);

	if (t79 != 1206LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x379 = 16063U;
	int16_t x380 = 141;
	volatile int64_t t80 = 17LL;

	t80 = (((x377+x378)&x379)/x380);

	if (t80 != 113LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x382 = 358U;
	uint64_t x383 = 481966022266302LLU;
	static int64_t x384 = 34948LL;
	volatile uint64_t t81 = 1842137207LLU;

	t81 = (((x381+x382)&x383)/x384);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x385 = 2U;
	int64_t x386 = INT64_MIN;
	static volatile int64_t x387 = -1LL;
	uint32_t x388 = 625204247U;
	volatile int64_t t82 = -47LL;

	t82 = (((x385+x386)&x387)/x388);

	if (t82 != -14752574188LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x389 = INT8_MAX;
	uint8_t x390 = UINT8_MAX;
	uint8_t x391 = UINT8_MAX;
	volatile int16_t x392 = -1664;
	volatile int32_t t83 = 1;

	t83 = (((x389+x390)&x391)/x392);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x393 = 41738LLU;
	int16_t x394 = 3;
	static uint8_t x395 = 6U;
	uint64_t x396 = 9LLU;
	volatile uint64_t t84 = 0LLU;

	t84 = (((x393+x394)&x395)/x396);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x398 = INT16_MIN;
	int8_t x400 = 5;

	t85 = (((x397+x398)&x399)/x400);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x401 = UINT64_MAX;
	int8_t x402 = INT8_MIN;
	volatile int32_t x403 = INT32_MAX;
	volatile int64_t x404 = INT64_MIN;
	uint64_t t86 = 3712LLU;

	t86 = (((x401+x402)&x403)/x404);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x405 = INT32_MIN;
	uint64_t x406 = 678736189LLU;
	int64_t x407 = INT64_MIN;
	uint32_t x408 = 14537840U;
	uint64_t t87 = 1LLU;

	t87 = (((x405+x406)&x407)/x408);

	if (t87 != 634438956327LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x409 = -7;
	static uint16_t x410 = 0U;
	volatile int16_t x411 = -162;
	static int16_t x412 = 33;

	t88 = (((x409+x410)&x411)/x412);

	if (t88 != -5) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x413 = INT16_MIN;
	int8_t x414 = INT8_MAX;
	static volatile uint32_t x415 = 958U;
	uint64_t x416 = 5673LLU;
	static uint64_t t89 = 567753827160313LLU;

	t89 = (((x413+x414)&x415)/x416);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x417 = 0U;
	int8_t x418 = 5;
	uint32_t x419 = 110338U;
	volatile int32_t x420 = INT32_MAX;

	t90 = (((x417+x418)&x419)/x420);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x425 = 29U;
	uint32_t x428 = 12U;

	t91 = (((x425+x426)&x427)/x428);

	if (t91 != 22190664362LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x429 = 901U;
	volatile int32_t x430 = -2783857;
	int16_t x432 = INT16_MIN;
	uint32_t t92 = 16611235U;

	t92 = (((x429+x430)&x431)/x432);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x437 = 1474368287U;
	int64_t x438 = -54246116LL;
	int32_t x440 = -8109;
	volatile int64_t t93 = 31567LL;

	t93 = (((x437+x438)&x439)/x440);

	if (t93 != -175129LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = INT64_MIN;
	uint32_t x446 = UINT32_MAX;
	int16_t x448 = 31;
	static int64_t t94 = 194LL;

	t94 = (((x445+x446)&x447)/x448);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x450 = -1273;
	volatile int32_t x451 = INT32_MIN;
	int16_t x452 = 98;

	t95 = (((x449+x450)&x451)/x452);

	if (t95 != -21913098) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x457 = UINT8_MAX;
	int16_t x458 = 0;
	int16_t x460 = INT16_MAX;
	int32_t t96 = 1685102;

	t96 = (((x457+x458)&x459)/x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x461 = -1LL;
	volatile uint64_t x462 = UINT64_MAX;
	int64_t x463 = -1LL;
	static int16_t x464 = -1;
	volatile uint64_t t97 = 1744418LLU;

	t97 = (((x461+x462)&x463)/x464);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x473 = -16846384;
	uint8_t x474 = 71U;
	static int8_t x475 = -1;
	int64_t x476 = -1LL;
	static int64_t t98 = 541551370LL;

	t98 = (((x473+x474)&x475)/x476);

	if (t98 != 16846313LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x478 = UINT32_MAX;
	int16_t x480 = 81;
	uint32_t t99 = 13U;

	t99 = (((x477+x478)&x479)/x480);

	if (t99 != 0U) { NG(); } else { ; }
	
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

