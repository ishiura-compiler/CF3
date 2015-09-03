#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 214187;
int32_t x11 = INT32_MAX;
volatile uint32_t x12 = 661267U;
int16_t x19 = INT16_MAX;
int32_t t7 = 583121;
uint8_t x37 = 3U;
volatile int32_t x38 = -1;
uint16_t x39 = UINT16_MAX;
int8_t x48 = -1;
volatile uint32_t x50 = UINT32_MAX;
volatile int8_t x51 = -1;
volatile int8_t x52 = INT8_MIN;
int32_t t12 = -1986978;
int16_t x59 = 590;
static int32_t x62 = 329258;
static uint8_t x65 = UINT8_MAX;
int8_t x66 = INT8_MIN;
volatile int32_t t16 = 0;
int16_t x70 = INT16_MIN;
int32_t x73 = INT32_MAX;
int64_t x80 = INT64_MIN;
uint64_t x83 = 23216262890LLU;
volatile uint16_t x88 = 141U;
volatile int16_t x90 = 4;
uint8_t x96 = 0U;
int32_t t24 = 0;
int16_t x101 = INT16_MIN;
int32_t t28 = -88;
static volatile int32_t x142 = INT32_MIN;
int16_t x143 = -1;
uint64_t x148 = 134767643447LLU;
volatile uint64_t t36 = 7994068686170LLU;
uint16_t x159 = 204U;
int8_t x160 = INT8_MAX;
int8_t x161 = INT8_MAX;
int64_t x166 = -857999LL;
volatile uint32_t x167 = UINT32_MAX;
static int32_t x170 = INT32_MAX;
volatile int32_t t42 = 227;
int16_t x175 = INT16_MAX;
volatile int32_t t43 = -158761;
int8_t x177 = -2;
static int32_t x179 = INT32_MIN;
static volatile uint32_t t44 = 914U;
volatile int16_t x192 = INT16_MIN;
uint8_t x194 = UINT8_MAX;
volatile uint8_t x201 = 10U;
int32_t t51 = 61891318;
int64_t x214 = 276461948597664902LL;
int64_t x221 = INT64_MAX;
volatile uint8_t x230 = UINT8_MAX;
volatile int32_t x236 = -1;
static volatile uint32_t x237 = 2123879240U;
int16_t x239 = INT16_MAX;
int32_t x240 = INT32_MIN;
volatile int32_t t59 = INT32_MIN;
static int32_t x248 = -1;
volatile uint64_t t62 = 8LLU;
int32_t t63 = -8;
uint16_t x270 = 20334U;
int64_t t67 = 78733304364LL;
uint8_t x278 = 3U;
uint8_t x283 = UINT8_MAX;
int32_t t70 = -1015519213;
int64_t x287 = -1LL;
volatile int32_t t71 = -28037;
int8_t x290 = INT8_MIN;
uint8_t x297 = UINT8_MAX;
int32_t t74 = INT32_MAX;
uint32_t t75 = UINT32_MAX;
int8_t x307 = INT8_MIN;
static int8_t x308 = 1;
int32_t x311 = 434990;
int32_t t78 = -2039528;
static int64_t x320 = -1LL;
int32_t t80 = 1;
int32_t x329 = -1;
int8_t x332 = INT8_MIN;
int64_t x333 = 125127LL;
static int32_t x335 = -1;
static int8_t x339 = INT8_MIN;
static int32_t t84 = INT32_MAX;
int32_t x341 = INT32_MIN;
int8_t x349 = -3;
uint32_t x355 = 260173U;
int16_t x356 = INT16_MIN;
volatile int16_t x359 = INT16_MIN;
static uint32_t x361 = UINT32_MAX;
volatile uint32_t x371 = 50885U;
volatile int32_t t92 = 377;
int16_t x373 = -2372;
uint64_t x375 = UINT64_MAX;
static volatile int8_t x381 = -29;
int16_t x387 = 1;
static int32_t x396 = -58019216;
static volatile int8_t x397 = -28;
uint16_t x398 = UINT16_MAX;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int16_t x2 = -108;
	static uint32_t x3 = 575U;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = 964040;

	t0 = ((x1<(x2^x3))|x4);

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	volatile int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MAX;
	int32_t x8 = -714658566;

	t1 = ((x5<(x6^x7))|x8);

	if (t1 != -714658566) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int32_t x10 = -490;
	volatile uint32_t t2 = 3843U;

	t2 = ((x9<(x10^x11))|x12);

	if (t2 != 661267U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	int64_t x14 = 8094LL;
	int8_t x15 = 1;
	int32_t x16 = -1;
	volatile int32_t t3 = 294979042;

	t3 = ((x13<(x14^x15))|x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 3;
	static int32_t x18 = INT32_MIN;
	static uint8_t x20 = 1U;
	int32_t t4 = 1980235;

	t4 = ((x17<(x18^x19))|x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int32_t x22 = -398907;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -343;

	t5 = ((x21<(x22^x23))|x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 10U;
	int16_t x26 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = 120U;
	static volatile int32_t t6 = -3744700;

	t6 = ((x25<(x26^x27))|x28);

	if (t6 != 121) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x30 = UINT64_MAX;
	static int64_t x31 = -10261081432461LL;
	static int16_t x32 = INT16_MIN;

	t7 = ((x29<(x30^x31))|x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 16299LL;
	volatile int8_t x34 = 1;
	static int16_t x35 = -1;
	int64_t x36 = INT64_MAX;
	int64_t t8 = INT64_MAX;

	t8 = ((x33<(x34^x35))|x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x40 = 23222716U;
	uint32_t t9 = 1329419U;

	t9 = ((x37<(x38^x39))|x40);

	if (t9 != 23222716U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	static volatile uint32_t x42 = UINT32_MAX;
	static int32_t x43 = INT32_MIN;
	volatile int64_t x44 = 54388LL;
	static int64_t t10 = -4508865001434531593LL;

	t10 = ((x41<(x42^x43))|x44);

	if (t10 != 54389LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -1LL;
	int64_t x46 = INT64_MIN;
	static uint16_t x47 = 1U;
	volatile int32_t t11 = 734695805;

	t11 = ((x45<(x46^x47))|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;

	t12 = ((x49<(x50^x51))|x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 29U;
	int16_t x54 = INT16_MAX;
	int8_t x55 = INT8_MAX;
	int32_t x56 = -783;
	int32_t t13 = 469;

	t13 = ((x53<(x54^x55))|x56);

	if (t13 != -783) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	volatile int16_t x58 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;
	static int32_t t14 = -998726943;

	t14 = ((x57<(x58^x59))|x60);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int64_t x63 = 1256LL;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = -5;

	t15 = ((x61<(x62^x63))|x64);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x67 = INT8_MIN;
	volatile int16_t x68 = 9097;

	t16 = ((x65<(x66^x67))|x68);

	if (t16 != 9097) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 364;
	uint8_t x71 = 33U;
	uint16_t x72 = 2587U;
	volatile int32_t t17 = 8;

	t17 = ((x69<(x70^x71))|x72);

	if (t17 != 2587) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 1U;
	int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MIN;
	static int32_t t18 = 6886;

	t18 = ((x73<(x74^x75))|x76);

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MAX;
	volatile int16_t x79 = INT16_MAX;
	int64_t t19 = 929LL;

	t19 = ((x77<(x78^x79))|x80);

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint8_t x82 = 0U;
	int64_t x84 = -15586860323001LL;
	int64_t t20 = 7364LL;

	t20 = ((x81<(x82^x83))|x84);

	if (t20 != -15586860323001LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -3599;
	int8_t x86 = 41;
	uint8_t x87 = 13U;
	volatile int32_t t21 = 7048976;

	t21 = ((x85<(x86^x87))|x88);

	if (t21 != 141) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -387;
	int64_t x91 = INT64_MIN;
	static volatile uint16_t x92 = 683U;
	int32_t t22 = -6;

	t22 = ((x89<(x90^x91))|x92);

	if (t22 != 683) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = -27;
	volatile uint8_t x94 = 6U;
	uint32_t x95 = 882722U;
	int32_t t23 = 105061332;

	t23 = ((x93<(x94^x95))|x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1996796LL;
	volatile int64_t x98 = INT64_MAX;
	uint8_t x99 = UINT8_MAX;
	volatile uint8_t x100 = 1U;

	t24 = ((x97<(x98^x99))|x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x102 = INT32_MAX;
	volatile uint64_t x103 = UINT64_MAX;
	volatile uint8_t x104 = 35U;
	int32_t t25 = 10;

	t25 = ((x101<(x102^x103))|x104);

	if (t25 != 35) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = 162;
	uint32_t x106 = 143U;
	int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = 3638825;

	t26 = ((x105<(x106^x107))|x108);

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	volatile int8_t x110 = INT8_MIN;
	static int8_t x111 = INT8_MAX;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = INT32_MAX;

	t27 = ((x109<(x110^x111))|x112);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = 4;
	static uint16_t x114 = 8941U;
	int64_t x115 = -1LL;
	static uint8_t x116 = 3U;

	t28 = ((x113<(x114^x115))|x116);

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = INT8_MIN;
	static volatile uint64_t x118 = 60109004625305LLU;
	uint64_t x119 = 297309757LLU;
	int64_t x120 = INT64_MIN;
	int64_t t29 = INT64_MIN;

	t29 = ((x117<(x118^x119))|x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	volatile int8_t x122 = INT8_MIN;
	int32_t x123 = 249072;
	static int8_t x124 = INT8_MAX;
	static volatile int32_t t30 = -1;

	t30 = ((x121<(x122^x123))|x124);

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int16_t x126 = 4426;
	static int16_t x127 = -1;
	uint8_t x128 = UINT8_MAX;
	static volatile int32_t t31 = -98530224;

	t31 = ((x125<(x126^x127))|x128);

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	int32_t x130 = 10802;
	int8_t x131 = -1;
	uint8_t x132 = 0U;
	int32_t t32 = -1422847;

	t32 = ((x129<(x130^x131))|x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = UINT16_MAX;
	uint64_t x134 = 682049LLU;
	uint64_t x135 = 0LLU;
	static int32_t x136 = INT32_MAX;
	volatile int32_t t33 = INT32_MAX;

	t33 = ((x133<(x134^x135))|x136);

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MAX;
	uint64_t x138 = 659696348917518LLU;
	int32_t x139 = 91785;
	int32_t x140 = -138749;
	int32_t t34 = 782806431;

	t34 = ((x137<(x138^x139))|x140);

	if (t34 != -138749) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -880;

	t35 = ((x141<(x142^x143))|x144);

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	int32_t x147 = INT32_MAX;

	t36 = ((x145<(x146^x147))|x148);

	if (t36 != 134767643447LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 83639562135481LL;
	uint8_t x150 = UINT8_MAX;
	static uint32_t x151 = UINT32_MAX;
	volatile int16_t x152 = INT16_MAX;
	int32_t t37 = 182324;

	t37 = ((x149<(x150^x151))|x152);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 1707252LLU;
	int64_t x154 = INT64_MIN;
	volatile int16_t x155 = INT16_MIN;
	uint64_t x156 = 572LLU;
	volatile uint64_t t38 = 629440044463145LLU;

	t38 = ((x153<(x154^x155))|x156);

	if (t38 != 573LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -742;
	static int8_t x158 = INT8_MAX;
	volatile int32_t t39 = -3073411;

	t39 = ((x157<(x158^x159))|x160);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x162 = 2U;
	uint32_t x163 = 1418905885U;
	int32_t x164 = 1;
	int32_t t40 = 296910;

	t40 = ((x161<(x162^x163))|x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	int64_t x168 = INT64_MAX;
	volatile int64_t t41 = INT64_MAX;

	t41 = ((x165<(x166^x167))|x168);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 7073766;
	uint64_t x171 = UINT64_MAX;
	uint8_t x172 = 6U;

	t42 = ((x169<(x170^x171))|x172);

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int64_t x174 = INT64_MIN;
	static volatile uint8_t x176 = 1U;

	t43 = ((x173<(x174^x175))|x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MAX;
	uint32_t x180 = 4809818U;

	t44 = ((x177<(x178^x179))|x180);

	if (t44 != 4809818U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -45019;
	uint32_t x182 = UINT32_MAX;
	uint32_t x183 = 6442056U;
	volatile int32_t x184 = 1;
	int32_t t45 = 65983928;

	t45 = ((x181<(x182^x183))|x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 740U;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = 84U;
	static volatile int64_t x188 = INT64_MIN;
	int64_t t46 = INT64_MIN;

	t46 = ((x185<(x186^x187))|x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = -1;
	static int32_t x191 = -1;
	volatile int32_t t47 = 4;

	t47 = ((x189<(x190^x191))|x192);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -169;
	volatile uint16_t x195 = UINT16_MAX;
	int8_t x196 = -63;
	volatile int32_t t48 = -192258169;

	t48 = ((x193<(x194^x195))|x196);

	if (t48 != -63) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = -1;
	static uint64_t x199 = 1099LLU;
	volatile int8_t x200 = -1;
	static int32_t t49 = -480544;

	t49 = ((x197<(x198^x199))|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x202 = -80LL;
	int64_t x203 = -50960043641LL;
	int8_t x204 = -1;
	volatile int32_t t50 = 245538653;

	t50 = ((x201<(x202^x203))|x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 5U;
	uint16_t x206 = UINT16_MAX;
	volatile int8_t x207 = -1;
	uint8_t x208 = 19U;

	t51 = ((x205<(x206^x207))|x208);

	if (t51 != 19) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = 969254U;
	static int64_t x210 = -3115748932LL;
	uint16_t x211 = UINT16_MAX;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = -36418;

	t52 = ((x209<(x210^x211))|x212);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	uint32_t x215 = 58422577U;
	static volatile int32_t x216 = INT32_MAX;
	volatile int32_t t53 = INT32_MAX;

	t53 = ((x213<(x214^x215))|x216);

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 11U;
	int16_t x218 = INT16_MAX;
	static int16_t x219 = -2;
	int64_t x220 = INT64_MAX;
	static int64_t t54 = INT64_MAX;

	t54 = ((x217<(x218^x219))|x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = 1020;
	int8_t x223 = INT8_MIN;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = -142443586;

	t55 = ((x221<(x222^x223))|x224);

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int64_t x226 = INT64_MIN;
	static volatile int64_t x227 = INT64_MIN;
	int16_t x228 = -1;
	volatile int32_t t56 = 104;

	t56 = ((x225<(x226^x227))|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 1463U;
	int32_t x231 = -1689;
	uint64_t x232 = 3743406251224924682LLU;
	volatile uint64_t t57 = 235614LLU;

	t57 = ((x229<(x230^x231))|x232);

	if (t57 != 3743406251224924682LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	int16_t x234 = INT16_MAX;
	uint16_t x235 = UINT16_MAX;
	int32_t t58 = 176;

	t58 = ((x233<(x234^x235))|x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = 980;

	t59 = ((x237<(x238^x239))|x240);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -11;
	int8_t x242 = -1;
	uint16_t x243 = 11U;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -207150;

	t60 = ((x241<(x242^x243))|x244);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 1400LL;
	uint64_t x246 = 227LLU;
	int16_t x247 = INT16_MAX;
	static int32_t t61 = 15532;

	t61 = ((x245<(x246^x247))|x248);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static int16_t x250 = -1;
	volatile uint16_t x251 = 16U;
	uint64_t x252 = 12LLU;

	t62 = ((x249<(x250^x251))|x252);

	if (t62 != 13LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = -1263;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = UINT8_MAX;

	t63 = ((x253<(x254^x255))|x256);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MIN;
	static volatile int16_t x259 = -1;
	static int64_t x260 = -4021073459573395LL;
	int64_t t64 = -94062LL;

	t64 = ((x257<(x258^x259))|x260);

	if (t64 != -4021073459573395LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x261 = 3U;
	volatile int64_t x262 = 3027292530455230896LL;
	volatile uint8_t x263 = UINT8_MAX;
	int16_t x264 = INT16_MIN;
	int32_t t65 = -1;

	t65 = ((x261<(x262^x263))|x264);

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = 27381500LL;
	static volatile uint64_t x266 = UINT64_MAX;
	int8_t x267 = INT8_MAX;
	static uint16_t x268 = UINT16_MAX;
	volatile int32_t t66 = 515;

	t66 = ((x265<(x266^x267))|x268);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = -2LL;
	int64_t x271 = INT64_MIN;
	int64_t x272 = -4132593186503LL;

	t67 = ((x269<(x270^x271))|x272);

	if (t67 != -4132593186503LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 116U;
	volatile int16_t x274 = 9955;
	volatile int64_t x275 = -405467532LL;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 856;

	t68 = ((x273<(x274^x275))|x276);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	static volatile int8_t x279 = 5;
	volatile int64_t x280 = INT64_MIN;
	int64_t t69 = -2529701764502LL;

	t69 = ((x277<(x278^x279))|x280);

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -776010898;
	static volatile int16_t x282 = -1;
	int16_t x284 = INT16_MIN;

	t70 = ((x281<(x282^x283))|x284);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x285 = UINT64_MAX;
	uint16_t x286 = 7158U;
	volatile int8_t x288 = INT8_MAX;

	t71 = ((x285<(x286^x287))|x288);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	uint8_t x291 = 4U;
	uint8_t x292 = 0U;
	int32_t t72 = -1668102;

	t72 = ((x289<(x290^x291))|x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	volatile uint32_t x294 = UINT32_MAX;
	int16_t x295 = 0;
	int8_t x296 = 5;
	static int32_t t73 = -81;

	t73 = ((x293<(x294^x295))|x296);

	if (t73 != 5) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = 0;
	int16_t x299 = -203;
	int32_t x300 = INT32_MAX;

	t74 = ((x297<(x298^x299))|x300);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 1193;
	static int16_t x302 = INT16_MAX;
	static int32_t x303 = INT32_MAX;
	uint32_t x304 = UINT32_MAX;

	t75 = ((x301<(x302^x303))|x304);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = -1;
	volatile int8_t x306 = INT8_MAX;
	static volatile int32_t t76 = -1;

	t76 = ((x305<(x306^x307))|x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	static int64_t x310 = INT64_MIN;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = 0;

	t77 = ((x309<(x310^x311))|x312);

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	static uint16_t x315 = 0U;
	uint16_t x316 = 2070U;

	t78 = ((x313<(x314^x315))|x316);

	if (t78 != 2070) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MAX;
	int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MAX;
	volatile int64_t t79 = 75990797788735LL;

	t79 = ((x317<(x318^x319))|x320);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MAX;
	static int16_t x323 = INT16_MIN;
	int16_t x324 = -1;

	t80 = ((x321<(x322^x323))|x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = 0;
	static int64_t x326 = INT64_MIN;
	int16_t x327 = -1;
	static int64_t x328 = INT64_MIN;
	int64_t t81 = 28488952103LL;

	t81 = ((x325<(x326^x327))|x328);

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x330 = -1;
	int16_t x331 = -1;
	volatile int32_t t82 = 182155028;

	t82 = ((x329<(x330^x331))|x332);

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MIN;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = INT32_MIN;

	t83 = ((x333<(x334^x335))|x336);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	volatile uint64_t x338 = UINT64_MAX;
	int32_t x340 = INT32_MAX;

	t84 = ((x337<(x338^x339))|x340);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = 0;
	static volatile int64_t x343 = -42082963981385020LL;
	uint32_t x344 = UINT32_MAX;
	static uint32_t t85 = UINT32_MAX;

	t85 = ((x341<(x342^x343))|x344);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	uint16_t x346 = 4U;
	int64_t x347 = INT64_MIN;
	static volatile int64_t x348 = INT64_MIN;
	int64_t t86 = INT64_MIN;

	t86 = ((x345<(x346^x347))|x348);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = 17LLU;
	int64_t x351 = -1LL;
	uint16_t x352 = 1530U;
	volatile int32_t t87 = -42655937;

	t87 = ((x349<(x350^x351))|x352);

	if (t87 != 1530) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 26;
	volatile uint64_t x354 = 3309LLU;
	int32_t t88 = 0;

	t88 = ((x353<(x354^x355))|x356);

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = INT64_MIN;
	uint16_t x358 = UINT16_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t89 = -1;

	t89 = ((x357<(x358^x359))|x360);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = 469767LL;
	static int32_t x363 = 468;
	static volatile int32_t x364 = INT32_MIN;
	volatile int32_t t90 = INT32_MIN;

	t90 = ((x361<(x362^x363))|x364);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	volatile int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	uint16_t x368 = 3382U;
	static volatile int32_t t91 = -296498727;

	t91 = ((x365<(x366^x367))|x368);

	if (t91 != 3382) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	static int16_t x370 = -3779;
	static int32_t x372 = -28;

	t92 = ((x369<(x370^x371))|x372);

	if (t92 != -28) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MIN;
	uint64_t x376 = 1317617661589496LLU;
	volatile uint64_t t93 = 5649621LLU;

	t93 = ((x373<(x374^x375))|x376);

	if (t93 != 1317617661589496LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MIN;
	static int32_t x379 = INT32_MIN;
	int64_t x380 = INT64_MIN;
	volatile int64_t t94 = 2770480434418383177LL;

	t94 = ((x377<(x378^x379))|x380);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -343271610608200277LL;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = UINT8_MAX;
	static volatile int32_t t95 = 0;

	t95 = ((x381<(x382^x383))|x384);

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 6U;
	volatile uint32_t x386 = 385739966U;
	uint32_t x388 = 59108U;
	static uint32_t t96 = 2820U;

	t96 = ((x385<(x386^x387))|x388);

	if (t96 != 59109U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 956472233;
	int32_t x390 = 77973;
	int32_t x391 = 12;
	uint8_t x392 = 121U;
	volatile int32_t t97 = 3158;

	t97 = ((x389<(x390^x391))|x392);

	if (t97 != 121) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	uint32_t x394 = 42120U;
	uint8_t x395 = 62U;
	int32_t t98 = -57227;

	t98 = ((x393<(x394^x395))|x396);

	if (t98 != -58019216) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x399 = 5887U;
	volatile int64_t x400 = 7593973381931382LL;
	int64_t t99 = 139926LL;

	t99 = ((x397<(x398^x399))|x400);

	if (t99 != 7593973381931383LL) { NG(); } else { ; }
	
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

