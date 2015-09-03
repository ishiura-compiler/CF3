#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -42926LL;
int8_t x8 = INT8_MIN;
int32_t t1 = -766533;
int8_t x10 = INT8_MIN;
volatile int16_t x11 = INT16_MAX;
int32_t t3 = 0;
volatile uint64_t x17 = 995250600592936LLU;
int32_t x31 = INT32_MAX;
int32_t x34 = INT32_MIN;
int32_t t12 = -5059674;
int8_t x58 = INT8_MIN;
int8_t x61 = INT8_MIN;
static int8_t x79 = -1;
volatile int32_t t17 = -432202;
uint16_t x89 = UINT16_MAX;
volatile int32_t x95 = -89;
int16_t x96 = -51;
volatile int32_t t21 = -4945162;
static uint16_t x97 = 12074U;
int32_t x98 = INT32_MAX;
int64_t x102 = -1LL;
int64_t x103 = INT64_MIN;
volatile int32_t t23 = -5813076;
int32_t t25 = 8;
int32_t t26 = 88;
uint8_t x118 = 7U;
volatile int16_t x119 = INT16_MIN;
volatile int64_t x120 = -53685063663668LL;
volatile uint16_t x125 = UINT16_MAX;
int32_t x130 = -1052096;
uint8_t x138 = 4U;
static uint64_t x140 = UINT64_MAX;
uint32_t x143 = 48U;
static int64_t x148 = 1071282LL;
static uint8_t x149 = 44U;
uint32_t x151 = UINT32_MAX;
static volatile uint64_t x154 = 139588630LLU;
int64_t x169 = INT64_MIN;
volatile int32_t x172 = -503;
int32_t t37 = -49;
volatile uint64_t x179 = UINT64_MAX;
static uint64_t x181 = UINT64_MAX;
int16_t x186 = INT16_MIN;
volatile int32_t t41 = 3073;
volatile uint16_t x190 = 1U;
volatile int8_t x194 = 1;
int32_t t46 = -14223339;
int64_t x215 = -1LL;
static uint16_t x217 = UINT16_MAX;
static volatile int32_t t49 = -98451;
uint32_t x221 = 11587U;
int8_t x222 = INT8_MAX;
static int8_t x229 = -15;
uint16_t x231 = 445U;
static uint32_t x244 = 2U;
volatile int32_t t55 = 223;
int8_t x249 = INT8_MAX;
int64_t x251 = 13276872235LL;
uint8_t x252 = 74U;
volatile int64_t x264 = INT64_MIN;
int64_t x270 = INT64_MIN;
int64_t x281 = -1LL;
int32_t t63 = 211822;
int16_t x293 = -287;
static int32_t x304 = -1947308;
volatile int64_t x305 = -1LL;
static int64_t x312 = INT64_MIN;
int32_t t72 = -34010;
volatile uint8_t x332 = 1U;
int16_t x334 = -7;
int8_t x335 = INT8_MAX;
volatile int32_t t75 = -38964;
volatile uint64_t x350 = 43157131LLU;
int16_t x355 = INT16_MIN;
int32_t t77 = -668246047;
int64_t x362 = -1LL;
int32_t t80 = -470;
static int32_t x377 = INT32_MAX;
int64_t x381 = INT64_MAX;
volatile int32_t t83 = -476280;
int16_t x389 = -1;
int8_t x394 = INT8_MIN;
static volatile int32_t t86 = 0;
static int32_t x400 = INT32_MIN;
uint8_t x405 = 9U;
int8_t x407 = INT8_MIN;
static int32_t t91 = 12035;
int8_t x423 = -1;
uint16_t x429 = 4341U;
uint16_t x430 = 55U;
int32_t t94 = -13879396;
uint32_t x437 = 84086U;
int64_t x439 = 1080398928267853031LL;
int64_t x445 = -1LL;
int32_t x448 = 118;
volatile uint32_t x450 = 40493U;
volatile int32_t x456 = 1;


void f0(void) {
	static uint32_t x1 = 27U;
	uint64_t x3 = 28846LLU;
	volatile int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -44538681;

	t0 = (((x1/x2)-x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 0LLU;
	static volatile int16_t x6 = -1;
	uint32_t x7 = 84146U;

	t1 = (((x5/x6)-x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int64_t x12 = INT64_MIN;
	int32_t t2 = -131762957;

	t2 = (((x9/x10)-x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	static int8_t x14 = INT8_MIN;
	uint8_t x15 = UINT8_MAX;
	volatile uint8_t x16 = 2U;

	t3 = (((x13/x14)-x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x18 = 31635U;
	volatile uint8_t x19 = UINT8_MAX;
	int8_t x20 = INT8_MAX;
	int32_t t4 = 1;

	t4 = (((x17/x18)-x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 8549;
	static int8_t x22 = -1;
	static volatile int16_t x23 = -7011;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -6901;

	t5 = (((x21/x22)-x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MAX;
	uint8_t x27 = UINT8_MAX;
	static int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -1;

	t6 = (((x25/x26)-x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	uint32_t x32 = 65442394U;
	int32_t t7 = 10;

	t7 = (((x29/x30)-x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int64_t x35 = -2079499LL;
	static volatile uint8_t x36 = 41U;
	static volatile int32_t t8 = -19742883;

	t8 = (((x33/x34)-x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	volatile uint16_t x38 = 11821U;
	uint32_t x39 = 639U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -225928203;

	t9 = (((x37/x38)-x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 0U;
	int64_t x42 = INT64_MIN;
	volatile int32_t x43 = 1960348;
	volatile int64_t x44 = -520290LL;
	volatile int32_t t10 = 104;

	t10 = (((x41/x42)-x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 977U;
	static int8_t x46 = INT8_MIN;
	static int64_t x47 = -1LL;
	volatile uint8_t x48 = 1U;
	static volatile int32_t t11 = -493;

	t11 = (((x45/x46)-x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = -1LL;
	int32_t x54 = INT32_MIN;
	volatile int8_t x55 = INT8_MIN;
	volatile int16_t x56 = INT16_MIN;

	t12 = (((x53/x54)-x55)<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 1;
	volatile int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MIN;
	volatile int32_t t13 = 1;

	t13 = (((x57/x58)-x59)<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x62 = 124210LLU;
	int64_t x63 = INT64_MIN;
	volatile int16_t x64 = INT16_MIN;
	int32_t t14 = 4;

	t14 = (((x61/x62)-x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = INT32_MAX;
	int16_t x66 = 16134;
	int64_t x67 = -1608636747115636LL;
	int64_t x68 = -1LL;
	static int32_t t15 = 2;

	t15 = (((x65/x66)-x67)<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	static int8_t x71 = INT8_MAX;
	int64_t x72 = INT64_MAX;
	static int32_t t16 = -5;

	t16 = (((x69/x70)-x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 52U;
	uint64_t x78 = UINT64_MAX;
	volatile int32_t x80 = INT32_MIN;

	t17 = (((x77/x78)-x79)<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -9993LL;
	uint8_t x82 = 5U;
	static uint16_t x83 = UINT16_MAX;
	int32_t x84 = -1;
	int32_t t18 = 47684429;

	t18 = (((x81/x82)-x83)<=x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	int16_t x86 = 420;
	int32_t x87 = -1;
	volatile int16_t x88 = INT16_MIN;
	int32_t t19 = 578938;

	t19 = (((x85/x86)-x87)<=x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x90 = UINT8_MAX;
	int16_t x91 = 840;
	static volatile int8_t x92 = -14;
	static volatile int32_t t20 = -3973659;

	t20 = (((x89/x90)-x91)<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 1U;
	static volatile int16_t x94 = -1;

	t21 = (((x93/x94)-x95)<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x99 = -5093000393257LL;
	volatile int32_t x100 = INT32_MIN;
	volatile int32_t t22 = -8;

	t22 = (((x97/x98)-x99)<=x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 1U;
	int16_t x104 = INT16_MIN;

	t23 = (((x101/x102)-x103)<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 972LLU;
	int8_t x106 = -1;
	static volatile uint32_t x107 = 29U;
	uint32_t x108 = 116198U;
	int32_t t24 = 985981246;

	t24 = (((x105/x106)-x107)<=x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 3330U;
	int8_t x110 = INT8_MAX;
	int16_t x111 = INT16_MAX;
	int32_t x112 = 3;

	t25 = (((x109/x110)-x111)<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x113 = 48U;
	int64_t x114 = -301382694LL;
	static int8_t x115 = INT8_MIN;
	int64_t x116 = -1LL;

	t26 = (((x113/x114)-x115)<=x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x117 = 67408407685LL;
	volatile int32_t t27 = -8;

	t27 = (((x117/x118)-x119)<=x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -1;
	int32_t x122 = -5;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = -1LL;
	static int32_t t28 = -788963640;

	t28 = (((x121/x122)-x123)<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	int16_t x128 = -18;
	volatile int32_t t29 = -908680;

	t29 = (((x125/x126)-x127)<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 130264139LLU;
	static uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MIN;
	volatile int32_t t30 = 6;

	t30 = (((x129/x130)-x131)<=x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x137 = 40U;
	uint32_t x139 = 215U;
	int32_t t31 = -2112209;

	t31 = (((x137/x138)-x139)<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	static int16_t x142 = INT16_MIN;
	volatile int16_t x144 = -1;
	int32_t t32 = 3565;

	t32 = (((x141/x142)-x143)<=x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = UINT8_MAX;
	int8_t x146 = -1;
	static uint16_t x147 = 13U;
	int32_t t33 = 130247;

	t33 = (((x145/x146)-x147)<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x150 = INT32_MIN;
	volatile int8_t x152 = -1;
	volatile int32_t t34 = 1;

	t34 = (((x149/x150)-x151)<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = -1029LL;
	static int16_t x155 = INT16_MAX;
	int8_t x156 = INT8_MAX;
	int32_t t35 = -3107;

	t35 = (((x153/x154)-x155)<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 7U;
	int8_t x158 = INT8_MAX;
	static uint16_t x159 = 1U;
	static int8_t x160 = INT8_MIN;
	int32_t t36 = 13918;

	t36 = (((x157/x158)-x159)<=x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x170 = -221;
	uint8_t x171 = 20U;

	t37 = (((x169/x170)-x171)<=x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -1;
	uint32_t x174 = UINT32_MAX;
	int64_t x175 = -1286LL;
	static int64_t x176 = INT64_MAX;
	int32_t t38 = -126;

	t38 = (((x173/x174)-x175)<=x176);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MAX;
	static int64_t x178 = INT64_MIN;
	static int8_t x180 = 0;
	volatile int32_t t39 = 2129554;

	t39 = (((x177/x178)-x179)<=x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x182 = -1LL;
	int64_t x183 = INT64_MIN;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t40 = 21790;

	t40 = (((x181/x182)-x183)<=x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = 57U;
	int8_t x187 = INT8_MIN;
	int32_t x188 = -42;

	t41 = (((x185/x186)-x187)<=x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = -6784020974LL;
	int16_t x191 = INT16_MAX;
	volatile int16_t x192 = -1;
	volatile int32_t t42 = -6875;

	t42 = (((x189/x190)-x191)<=x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MAX;
	int64_t x195 = INT64_MAX;
	uint32_t x196 = 1U;
	volatile int32_t t43 = -420655;

	t43 = (((x193/x194)-x195)<=x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = -5;
	uint64_t x198 = 28129695LLU;
	int8_t x199 = -1;
	volatile int32_t x200 = INT32_MIN;
	int32_t t44 = 1;

	t44 = (((x197/x198)-x199)<=x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 24937U;
	volatile uint64_t x202 = 354952186414648022LLU;
	int8_t x203 = INT8_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t45 = 31;

	t45 = (((x201/x202)-x203)<=x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x205 = 19U;
	int16_t x206 = -1;
	int16_t x207 = INT16_MAX;
	uint64_t x208 = 3239103211380LLU;

	t46 = (((x205/x206)-x207)<=x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MAX;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	static int8_t x212 = -1;
	volatile int32_t t47 = 227991;

	t47 = (((x209/x210)-x211)<=x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x213 = INT32_MAX;
	static int8_t x214 = -1;
	uint32_t x216 = UINT32_MAX;
	volatile int32_t t48 = 22390501;

	t48 = (((x213/x214)-x215)<=x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x218 = -4072;
	int64_t x219 = INT64_MIN;
	static uint32_t x220 = 142185U;

	t49 = (((x217/x218)-x219)<=x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x223 = -6;
	int64_t x224 = INT64_MAX;
	static int32_t t50 = 2512847;

	t50 = (((x221/x222)-x223)<=x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x225 = -1;
	volatile int32_t x226 = INT32_MIN;
	volatile uint8_t x227 = UINT8_MAX;
	static int32_t x228 = 1453;
	int32_t t51 = -522854;

	t51 = (((x225/x226)-x227)<=x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x230 = 8190;
	static int64_t x232 = -27245459939265LL;
	volatile int32_t t52 = 1;

	t52 = (((x229/x230)-x231)<=x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	uint32_t x235 = 103062447U;
	static volatile int64_t x236 = -1LL;
	volatile int32_t t53 = -1934;

	t53 = (((x233/x234)-x235)<=x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x237 = INT16_MAX;
	uint64_t x238 = 2030735219LLU;
	volatile int32_t x239 = -2096;
	volatile int8_t x240 = INT8_MAX;
	int32_t t54 = -12900;

	t54 = (((x237/x238)-x239)<=x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;
	volatile int32_t x243 = -1;

	t55 = (((x241/x242)-x243)<=x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = 1;
	volatile int8_t x247 = 0;
	static uint8_t x248 = 44U;
	volatile int32_t t56 = 316014;

	t56 = (((x245/x246)-x247)<=x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x250 = 6715U;
	volatile int32_t t57 = -567;

	t57 = (((x249/x250)-x251)<=x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 7330U;
	int32_t x254 = -1;
	int8_t x255 = -1;
	volatile int64_t x256 = INT64_MAX;
	int32_t t58 = 526609;

	t58 = (((x253/x254)-x255)<=x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x261 = 6U;
	static uint8_t x262 = 19U;
	static volatile int64_t x263 = 52765526407LL;
	int32_t t59 = 75166;

	t59 = (((x261/x262)-x263)<=x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = 25249849779185LLU;
	int16_t x267 = INT16_MIN;
	static int16_t x268 = 6449;
	static int32_t t60 = 57201;

	t60 = (((x265/x266)-x267)<=x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	volatile int32_t t61 = 0;

	t61 = (((x269/x270)-x271)<=x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x273 = 4U;
	int32_t x274 = INT32_MAX;
	int64_t x275 = INT64_MAX;
	int64_t x276 = INT64_MIN;
	volatile int32_t t62 = 215;

	t62 = (((x273/x274)-x275)<=x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x282 = 3891504LL;
	static int64_t x283 = 580LL;
	volatile uint64_t x284 = 0LLU;

	t63 = (((x281/x282)-x283)<=x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = -1;
	uint16_t x287 = 1U;
	int8_t x288 = INT8_MIN;
	int32_t t64 = -3449847;

	t64 = (((x285/x286)-x287)<=x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;
	uint16_t x296 = 4U;
	volatile int32_t t65 = -492500;

	t65 = (((x293/x294)-x295)<=x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = -1;
	int64_t x298 = -1LL;
	static uint64_t x299 = UINT64_MAX;
	uint32_t x300 = 2518U;
	static volatile int32_t t66 = -128;

	t66 = (((x297/x298)-x299)<=x300);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x301 = 13U;
	int16_t x302 = INT16_MAX;
	volatile int8_t x303 = INT8_MIN;
	int32_t t67 = -669;

	t67 = (((x301/x302)-x303)<=x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x306 = INT32_MAX;
	static uint32_t x307 = 156U;
	static int64_t x308 = -528068507LL;
	static volatile int32_t t68 = -1115168;

	t68 = (((x305/x306)-x307)<=x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = UINT16_MAX;
	static int16_t x310 = INT16_MAX;
	uint32_t x311 = 18008U;
	int32_t t69 = 251719;

	t69 = (((x309/x310)-x311)<=x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x313 = -47;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = 28;
	int64_t x316 = -28084304634070036LL;
	static volatile int32_t t70 = 33871630;

	t70 = (((x313/x314)-x315)<=x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x317 = -1;
	volatile int64_t x318 = INT64_MIN;
	uint32_t x319 = 5872U;
	volatile int64_t x320 = INT64_MIN;
	volatile int32_t t71 = -621;

	t71 = (((x317/x318)-x319)<=x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = INT64_MIN;
	static int16_t x326 = INT16_MAX;
	static uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MIN;

	t72 = (((x325/x326)-x327)<=x328);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MIN;
	uint8_t x331 = 2U;
	int32_t t73 = -1676884;

	t73 = (((x329/x330)-x331)<=x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = 2604;
	int32_t x336 = INT32_MAX;
	int32_t t74 = 0;

	t74 = (((x333/x334)-x335)<=x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x337 = -325;
	static volatile int8_t x338 = INT8_MIN;
	int16_t x339 = 1;
	int32_t x340 = INT32_MIN;

	t75 = (((x337/x338)-x339)<=x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x349 = INT64_MIN;
	volatile int32_t x351 = -122977100;
	int32_t x352 = INT32_MIN;
	static int32_t t76 = 96352;

	t76 = (((x349/x350)-x351)<=x352);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x353 = INT32_MIN;
	uint64_t x354 = 48917LLU;
	int16_t x356 = -1;

	t77 = (((x353/x354)-x355)<=x356);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = 1;
	int8_t x359 = 6;
	uint32_t x360 = 449U;
	volatile int32_t t78 = -534009776;

	t78 = (((x357/x358)-x359)<=x360);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = -6313509;
	int64_t x363 = 85434158510LL;
	int32_t x364 = INT32_MIN;
	volatile int32_t t79 = 75677375;

	t79 = (((x361/x362)-x363)<=x364);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = INT16_MIN;
	uint64_t x370 = UINT64_MAX;
	uint8_t x371 = 3U;
	uint64_t x372 = 57330118745876LLU;

	t80 = (((x369/x370)-x371)<=x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MIN;
	static int64_t x374 = INT64_MIN;
	static uint64_t x375 = 7421453788LLU;
	int16_t x376 = INT16_MAX;
	int32_t t81 = 8691;

	t81 = (((x373/x374)-x375)<=x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x378 = INT8_MAX;
	static volatile uint16_t x379 = 1U;
	static uint16_t x380 = 13U;
	int32_t t82 = 26;

	t82 = (((x377/x378)-x379)<=x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x382 = -1;
	static int8_t x383 = INT8_MIN;
	uint64_t x384 = 50LLU;

	t83 = (((x381/x382)-x383)<=x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MAX;
	static int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MAX;
	int16_t x388 = -30;
	volatile int32_t t84 = 9;

	t84 = (((x385/x386)-x387)<=x388);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x390 = INT16_MIN;
	static volatile int8_t x391 = INT8_MIN;
	static volatile uint32_t x392 = 1732701299U;
	volatile int32_t t85 = -432387841;

	t85 = (((x389/x390)-x391)<=x392);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = -3LL;
	static int8_t x395 = INT8_MAX;
	static volatile uint64_t x396 = 51790189808058LLU;

	t86 = (((x393/x394)-x395)<=x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x397 = UINT32_MAX;
	uint8_t x398 = 26U;
	int8_t x399 = -2;
	volatile int32_t t87 = -1008;

	t87 = (((x397/x398)-x399)<=x400);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x401 = -1396;
	volatile int8_t x402 = INT8_MIN;
	uint64_t x403 = 5702014916LLU;
	volatile int64_t x404 = -9646610092968756LL;
	int32_t t88 = 55176;

	t88 = (((x401/x402)-x403)<=x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x406 = -1;
	int16_t x408 = INT16_MIN;
	volatile int32_t t89 = 375495974;

	t89 = (((x405/x406)-x407)<=x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = INT32_MIN;
	static int32_t x414 = -889885458;
	uint16_t x415 = UINT16_MAX;
	uint8_t x416 = 20U;
	volatile int32_t t90 = -205112;

	t90 = (((x413/x414)-x415)<=x416);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x417 = 977U;
	static uint64_t x418 = 356522058780LLU;
	static int32_t x419 = INT32_MAX;
	int16_t x420 = INT16_MIN;

	t91 = (((x417/x418)-x419)<=x420);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x421 = -1LL;
	volatile int32_t x422 = INT32_MAX;
	volatile int8_t x424 = INT8_MAX;
	volatile int32_t t92 = -4176060;

	t92 = (((x421/x422)-x423)<=x424);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = -1;
	volatile int16_t x426 = INT16_MIN;
	uint32_t x427 = 162U;
	int32_t x428 = -1;
	static int32_t t93 = 7827776;

	t93 = (((x425/x426)-x427)<=x428);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x431 = -8;
	uint16_t x432 = 112U;

	t94 = (((x429/x430)-x431)<=x432);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x438 = INT8_MIN;
	int32_t x440 = -1;
	volatile int32_t t95 = -2182122;

	t95 = (((x437/x438)-x439)<=x440);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x441 = UINT16_MAX;
	int8_t x442 = INT8_MIN;
	uint16_t x443 = UINT16_MAX;
	int16_t x444 = -1;
	int32_t t96 = -325975186;

	t96 = (((x441/x442)-x443)<=x444);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x446 = -1;
	static int32_t x447 = INT32_MAX;
	static volatile int32_t t97 = 3;

	t97 = (((x445/x446)-x447)<=x448);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x449 = -1LL;
	volatile uint64_t x451 = UINT64_MAX;
	int32_t x452 = INT32_MAX;
	volatile int32_t t98 = -201;

	t98 = (((x449/x450)-x451)<=x452);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x453 = INT16_MAX;
	int64_t x454 = INT64_MAX;
	uint64_t x455 = 79841197376LLU;
	static volatile int32_t t99 = 58;

	t99 = (((x453/x454)-x455)<=x456);

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

