#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x12 = -1LL;
int8_t x15 = -1;
int8_t x18 = INT8_MIN;
int32_t t4 = 7;
int64_t x21 = INT64_MAX;
uint8_t x24 = UINT8_MAX;
volatile int32_t t5 = 40161;
volatile int8_t x26 = INT8_MAX;
uint8_t x29 = 15U;
uint16_t x31 = 1457U;
volatile int32_t t7 = 212;
uint32_t x38 = UINT32_MAX;
int32_t x40 = INT32_MAX;
int32_t t9 = 18;
volatile uint8_t x44 = 23U;
static volatile int32_t t10 = 36312;
int16_t x56 = -13;
volatile int64_t x57 = INT64_MIN;
uint32_t x68 = 7708202U;
static uint64_t x77 = 637LLU;
static uint32_t x78 = UINT32_MAX;
int64_t x81 = 48839887439841472LL;
uint64_t x83 = 13685427573LLU;
volatile int8_t x100 = INT8_MIN;
volatile int32_t x106 = INT32_MAX;
int32_t t26 = -6136;
int64_t x112 = INT64_MIN;
int32_t x113 = INT32_MIN;
int16_t x116 = -1;
static int16_t x123 = INT16_MIN;
int32_t x130 = 197659854;
uint8_t x132 = 14U;
uint64_t x138 = 16137LLU;
int64_t x145 = -1LL;
static volatile int32_t x146 = INT32_MIN;
volatile int32_t x149 = 1212;
int16_t x150 = INT16_MIN;
int32_t x161 = INT32_MIN;
volatile int32_t t40 = 418;
uint8_t x166 = 5U;
static uint64_t x168 = 1LLU;
int32_t x178 = INT32_MIN;
static int32_t x180 = INT32_MIN;
uint8_t x185 = UINT8_MAX;
int32_t t48 = -3961526;
static int8_t x197 = -1;
int32_t t49 = 232785178;
int64_t x204 = 12739610638742LL;
int8_t x207 = 4;
int32_t t52 = 76319;
uint8_t x218 = UINT8_MAX;
static int64_t x226 = -1LL;
int16_t x231 = 2883;
int32_t x241 = INT32_MIN;
static volatile int16_t x244 = INT16_MIN;
int64_t x256 = INT64_MIN;
static volatile uint32_t x262 = UINT32_MAX;
static uint16_t x263 = 2U;
int16_t x267 = INT16_MIN;
int64_t x269 = INT64_MIN;
int32_t x280 = INT32_MIN;
int32_t x283 = -18918860;
uint32_t x284 = UINT32_MAX;
int32_t t71 = -136040470;
int64_t x289 = 224041973161156262LL;
static int32_t x292 = INT32_MIN;
volatile int32_t x295 = -17521;
uint8_t x297 = 0U;
volatile int32_t t75 = -1853;
int64_t x305 = -862158372LL;
uint8_t x312 = 11U;
int64_t x313 = INT64_MAX;
static int32_t x314 = INT32_MIN;
int16_t x317 = 3826;
int16_t x337 = 0;
int32_t t84 = -2448252;
volatile int32_t x347 = INT32_MAX;
int64_t x350 = INT64_MIN;
volatile int8_t x355 = INT8_MIN;
int32_t t88 = -29491;
static volatile int32_t t90 = -292706735;
uint8_t x371 = 8U;
int32_t t92 = -58;
int8_t x376 = -1;
int32_t t94 = -2686;
int32_t t95 = -121571861;
uint64_t x400 = 6171645250858844212LLU;


void f0(void) {
	static int16_t x1 = 506;
	static volatile int32_t x2 = -5996;
	uint64_t x3 = 330273LLU;
	int8_t x4 = 1;
	volatile int32_t t0 = -52581925;

	t0 = (((x1==x2)<=x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	int8_t x6 = INT8_MIN;
	volatile int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MAX;
	int32_t t1 = -6;

	t1 = (((x5==x6)<=x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int8_t x10 = 2;
	int16_t x11 = -90;
	int32_t t2 = 622561515;

	t2 = (((x9==x10)<=x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 95885;

	t3 = (((x13==x14)<=x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 2U;
	int32_t x19 = -397597;
	int8_t x20 = INT8_MIN;

	t4 = (((x17==x18)<=x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x22 = 16044804078LLU;
	static volatile uint32_t x23 = 350100310U;

	t5 = (((x21==x22)<=x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = UINT16_MAX;
	static int64_t x27 = -614LL;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -341;

	t6 = (((x25==x26)<=x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = INT32_MIN;
	int8_t x32 = INT8_MAX;

	t7 = (((x29==x30)<=x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -6331253932153LL;
	volatile int8_t x34 = INT8_MIN;
	uint16_t x35 = UINT16_MAX;
	volatile int32_t x36 = INT32_MIN;
	int32_t t8 = -871134;

	t8 = (((x33==x34)<=x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 145515876U;
	int32_t x39 = INT32_MAX;

	t9 = (((x37==x38)<=x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	static volatile int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MIN;

	t10 = (((x41==x42)<=x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x45 = 1U;
	uint8_t x46 = UINT8_MAX;
	uint64_t x47 = 33LLU;
	static uint8_t x48 = UINT8_MAX;
	int32_t t11 = -2995;

	t11 = (((x45==x46)<=x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	volatile uint32_t x50 = UINT32_MAX;
	static uint64_t x51 = 79854LLU;
	volatile int16_t x52 = INT16_MIN;
	int32_t t12 = 1299;

	t12 = (((x49==x50)<=x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MAX;
	volatile uint16_t x54 = 1087U;
	int16_t x55 = INT16_MIN;
	int32_t t13 = 5910346;

	t13 = (((x53==x54)<=x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	volatile int16_t x59 = INT16_MAX;
	volatile int64_t x60 = -8043LL;
	int32_t t14 = -793177;

	t14 = (((x57==x58)<=x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static uint16_t x62 = 298U;
	int8_t x63 = INT8_MIN;
	volatile int16_t x64 = -1;
	int32_t t15 = 2892;

	t15 = (((x61==x62)<=x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 219478567380797846LL;
	static volatile uint32_t x66 = UINT32_MAX;
	volatile int32_t x67 = -134;
	volatile int32_t t16 = -3;

	t16 = (((x65==x66)<=x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 21263LLU;
	uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MAX;
	volatile int32_t t17 = 176385;

	t17 = (((x69==x70)<=x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -1LL;
	int64_t x74 = INT64_MAX;
	volatile int32_t x75 = -12;
	volatile uint8_t x76 = 2U;
	static volatile int32_t t18 = -227;

	t18 = (((x73==x74)<=x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	static volatile int32_t t19 = -15585;

	t19 = (((x77==x78)<=x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -1;
	int32_t x84 = -15;
	volatile int32_t t20 = -24145;

	t20 = (((x81==x82)<=x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	int16_t x87 = -1;
	int64_t x88 = INT64_MIN;
	static int32_t t21 = 0;

	t21 = (((x85==x86)<=x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 18U;
	uint16_t x90 = 1U;
	uint8_t x91 = UINT8_MAX;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -12;

	t22 = (((x89==x90)<=x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	uint8_t x94 = UINT8_MAX;
	uint16_t x95 = 10648U;
	volatile int64_t x96 = -1LL;
	static volatile int32_t t23 = -231;

	t23 = (((x93==x94)<=x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 1;
	static int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MAX;
	int32_t t24 = -517156297;

	t24 = (((x97==x98)<=x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	static volatile uint32_t x102 = UINT32_MAX;
	uint16_t x103 = 119U;
	volatile uint16_t x104 = 10806U;
	volatile int32_t t25 = 403379;

	t25 = (((x101==x102)<=x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MAX;
	int8_t x107 = INT8_MIN;
	volatile uint8_t x108 = 0U;

	t26 = (((x105==x106)<=x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = 0;
	uint32_t x111 = 77889506U;
	volatile int32_t t27 = -3291;

	t27 = (((x109==x110)<=x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = 2112434LL;
	uint64_t x115 = 3LLU;
	volatile int32_t t28 = -767505;

	t28 = (((x113==x114)<=x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 1;
	int8_t x118 = INT8_MAX;
	static int32_t x119 = INT32_MIN;
	int16_t x120 = -638;
	int32_t t29 = -16492877;

	t29 = (((x117==x118)<=x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	static volatile int64_t x122 = INT64_MIN;
	int32_t x124 = INT32_MIN;
	volatile int32_t t30 = -965;

	t30 = (((x121==x122)<=x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 135191315955493LLU;
	volatile int16_t x126 = 20;
	int16_t x127 = INT16_MIN;
	int32_t x128 = -6512281;
	int32_t t31 = -641203780;

	t31 = (((x125==x126)<=x127)<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 45295958428781516LLU;
	static volatile int64_t x131 = 2942LL;
	volatile int32_t t32 = -5;

	t32 = (((x129==x130)<=x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MAX;
	uint8_t x135 = 0U;
	int8_t x136 = -14;
	int32_t t33 = 1045416;

	t33 = (((x133==x134)<=x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -4324;
	volatile uint8_t x139 = 0U;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 82;

	t34 = (((x137==x138)<=x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x142 = -151858;
	int64_t x143 = INT64_MIN;
	int64_t x144 = -1LL;
	int32_t t35 = 1;

	t35 = (((x141==x142)<=x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x147 = -1098;
	uint16_t x148 = 17631U;
	int32_t t36 = -18446079;

	t36 = (((x145==x146)<=x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x151 = INT64_MAX;
	int64_t x152 = -1LL;
	static int32_t t37 = -898913;

	t37 = (((x149==x150)<=x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MIN;
	volatile int64_t x155 = INT64_MIN;
	int64_t x156 = 1751395740718242LL;
	int32_t t38 = 142773;

	t38 = (((x153==x154)<=x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x157 = -156908157;
	int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	int8_t x160 = 3;
	volatile int32_t t39 = -1143;

	t39 = (((x157==x158)<=x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = INT64_MAX;
	int16_t x163 = -518;
	int64_t x164 = INT64_MAX;

	t40 = (((x161==x162)<=x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 460303198U;
	static uint8_t x167 = 3U;
	int32_t t41 = -227215484;

	t41 = (((x165==x166)<=x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int16_t x170 = -3753;
	int64_t x171 = -1LL;
	int64_t x172 = -1LL;
	volatile int32_t t42 = -98860;

	t42 = (((x169==x170)<=x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int16_t x174 = INT16_MIN;
	volatile int16_t x175 = INT16_MIN;
	volatile uint16_t x176 = 333U;
	int32_t t43 = -159546786;

	t43 = (((x173==x174)<=x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -988;
	static uint64_t x179 = 1379LLU;
	int32_t t44 = 8501;

	t44 = (((x177==x178)<=x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 34;
	int32_t x182 = INT32_MAX;
	uint32_t x183 = 23030653U;
	volatile int64_t x184 = -1LL;
	volatile int32_t t45 = -226850567;

	t45 = (((x181==x182)<=x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = 3486;
	static int64_t x187 = 89268387149107882LL;
	static int16_t x188 = -3627;
	int32_t t46 = 6;

	t46 = (((x185==x186)<=x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = INT16_MIN;
	volatile uint64_t x192 = UINT64_MAX;
	int32_t t47 = 107404;

	t47 = (((x189==x190)<=x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	int8_t x194 = INT8_MAX;
	uint8_t x195 = 10U;
	uint32_t x196 = 7U;

	t48 = (((x193==x194)<=x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x198 = -7;
	int16_t x199 = INT16_MIN;
	static uint8_t x200 = 36U;

	t49 = (((x197==x198)<=x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 1;
	int32_t x202 = INT32_MIN;
	uint16_t x203 = UINT16_MAX;
	int32_t t50 = 681032078;

	t50 = (((x201==x202)<=x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	volatile uint8_t x206 = UINT8_MAX;
	static int32_t x208 = INT32_MIN;
	int32_t t51 = -5571;

	t51 = (((x205==x206)<=x207)<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int32_t x210 = INT32_MIN;
	static int8_t x211 = INT8_MIN;
	uint64_t x212 = 506LLU;

	t52 = (((x209==x210)<=x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = -1;
	volatile int32_t t53 = -1;

	t53 = (((x213==x214)<=x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 489;
	int64_t x219 = 51081102545LL;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 96;

	t54 = (((x217==x218)<=x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	volatile int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MIN;
	int32_t x224 = 18129387;
	static int32_t t55 = -126848;

	t55 = (((x221==x222)<=x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 504649LL;
	int32_t x227 = INT32_MIN;
	volatile int32_t x228 = INT32_MIN;
	int32_t t56 = -482044481;

	t56 = (((x225==x226)<=x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	static uint64_t x230 = 9LLU;
	uint64_t x232 = 159288LLU;
	int32_t t57 = -12339;

	t57 = (((x229==x230)<=x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -157508LL;
	int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MAX;
	int16_t x236 = INT16_MAX;
	static volatile int32_t t58 = -374246230;

	t58 = (((x233==x234)<=x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -1;
	volatile int8_t x238 = 15;
	static int64_t x239 = INT64_MIN;
	volatile int64_t x240 = -81011980191653593LL;
	int32_t t59 = 2;

	t59 = (((x237==x238)<=x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x242 = -1;
	uint8_t x243 = UINT8_MAX;
	volatile int32_t t60 = 828;

	t60 = (((x241==x242)<=x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -2LL;
	static int16_t x246 = INT16_MIN;
	int16_t x247 = -1;
	static int8_t x248 = 10;
	static volatile int32_t t61 = -15857;

	t61 = (((x245==x246)<=x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 1214727518071787LLU;
	int64_t x250 = 1306888221996LL;
	int8_t x251 = 1;
	uint64_t x252 = 306924299029LLU;
	int32_t t62 = 13478;

	t62 = (((x249==x250)<=x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	int8_t x254 = INT8_MAX;
	volatile int64_t x255 = INT64_MIN;
	int32_t t63 = 2823259;

	t63 = (((x253==x254)<=x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = 851;
	uint32_t x258 = 15U;
	uint32_t x259 = 2765589U;
	uint8_t x260 = 24U;
	volatile int32_t t64 = -10;

	t64 = (((x257==x258)<=x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 19U;
	int8_t x264 = -1;
	static int32_t t65 = -6015;

	t65 = (((x261==x262)<=x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	static int32_t x266 = -9900625;
	volatile int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 130095826;

	t66 = (((x265==x266)<=x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = 2510966033LL;
	static volatile int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 43985337;

	t67 = (((x269==x270)<=x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MAX;
	uint8_t x274 = 0U;
	uint16_t x275 = 8636U;
	int8_t x276 = INT8_MAX;
	static volatile int32_t t68 = -59;

	t68 = (((x273==x274)<=x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	volatile int8_t x278 = -1;
	int64_t x279 = INT64_MIN;
	static int32_t t69 = -2544012;

	t69 = (((x277==x278)<=x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	int64_t x282 = 1825377707LL;
	static int32_t t70 = -46315;

	t70 = (((x281==x282)<=x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = 96051U;
	static int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MAX;
	volatile int32_t x288 = INT32_MIN;

	t71 = (((x285==x286)<=x287)<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x290 = UINT64_MAX;
	int8_t x291 = 0;
	int32_t t72 = -95;

	t72 = (((x289==x290)<=x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MAX;
	static int64_t x294 = 57170724LL;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t73 = 1586554;

	t73 = (((x293==x294)<=x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x298 = UINT32_MAX;
	volatile int16_t x299 = 12171;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t74 = 43936849;

	t74 = (((x297==x298)<=x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 2197526454415199LLU;
	uint32_t x302 = 78U;
	int16_t x303 = -1;
	int16_t x304 = INT16_MAX;

	t75 = (((x301==x302)<=x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x306 = 0LLU;
	static int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t76 = 139132789;

	t76 = (((x305==x306)<=x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x309 = 11LL;
	int8_t x310 = 0;
	volatile int16_t x311 = -1;
	int32_t t77 = -1218;

	t77 = (((x309==x310)<=x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x315 = INT16_MIN;
	int64_t x316 = -1LL;
	int32_t t78 = 99;

	t78 = (((x313==x314)<=x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = 0;
	int32_t x319 = -1;
	static uint64_t x320 = 6161069012662901LLU;
	int32_t t79 = -16;

	t79 = (((x317==x318)<=x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x321 = 2U;
	static uint32_t x322 = 1390U;
	uint16_t x323 = 13U;
	uint8_t x324 = 0U;
	volatile int32_t t80 = 231879003;

	t80 = (((x321==x322)<=x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = -1LL;
	int64_t x326 = -516344327LL;
	int64_t x327 = INT64_MAX;
	volatile uint16_t x328 = UINT16_MAX;
	static volatile int32_t t81 = 373798;

	t81 = (((x325==x326)<=x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x329 = 284U;
	int32_t x330 = INT32_MIN;
	static int32_t x331 = -1;
	int16_t x332 = -1;
	int32_t t82 = -52;

	t82 = (((x329==x330)<=x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	int8_t x334 = INT8_MAX;
	int8_t x335 = INT8_MIN;
	static uint32_t x336 = 27846U;
	int32_t t83 = -6660;

	t83 = (((x333==x334)<=x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x338 = 3U;
	int16_t x339 = INT16_MAX;
	int16_t x340 = INT16_MAX;

	t84 = (((x337==x338)<=x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	int8_t x342 = INT8_MIN;
	int16_t x343 = 2;
	volatile int16_t x344 = 47;
	volatile int32_t t85 = -51;

	t85 = (((x341==x342)<=x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -1LL;
	volatile uint32_t x346 = UINT32_MAX;
	int32_t x348 = -1;
	volatile int32_t t86 = 11185411;

	t86 = (((x345==x346)<=x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x349 = INT64_MIN;
	static int16_t x351 = 1;
	static volatile uint16_t x352 = 17U;
	int32_t t87 = -357;

	t87 = (((x349==x350)<=x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 5250483236639011LLU;
	int8_t x354 = -1;
	volatile uint8_t x356 = 0U;

	t88 = (((x353==x354)<=x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 53;
	static uint64_t x358 = 455130LLU;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = 0U;
	int32_t t89 = 113200;

	t89 = (((x357==x358)<=x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -744107LL;
	uint16_t x362 = UINT16_MAX;
	volatile int64_t x363 = INT64_MAX;
	uint16_t x364 = UINT16_MAX;

	t90 = (((x361==x362)<=x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	int8_t x366 = -1;
	uint16_t x367 = 1U;
	int32_t x368 = -6;
	volatile int32_t t91 = -31977;

	t91 = (((x365==x366)<=x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 86;
	int64_t x370 = INT64_MIN;
	uint16_t x372 = 0U;

	t92 = (((x369==x370)<=x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -465;
	int8_t x374 = INT8_MIN;
	int16_t x375 = -5845;
	int32_t t93 = 28;

	t93 = (((x373==x374)<=x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -96019772490LL;
	static volatile int64_t x378 = INT64_MAX;
	int16_t x379 = INT16_MAX;
	int64_t x380 = 1477378506282LL;

	t94 = (((x377==x378)<=x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = -57255652;
	uint16_t x382 = 7U;
	int8_t x383 = INT8_MAX;
	int64_t x384 = INT64_MAX;

	t95 = (((x381==x382)<=x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	volatile int32_t x386 = 7877;
	volatile int8_t x387 = INT8_MIN;
	uint16_t x388 = 1898U;
	volatile int32_t t96 = -21119;

	t96 = (((x385==x386)<=x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 7075LLU;
	int8_t x390 = -1;
	int16_t x391 = INT16_MIN;
	int8_t x392 = 6;
	int32_t t97 = -330399;

	t97 = (((x389==x390)<=x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	uint16_t x394 = 38U;
	static uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MIN;
	int32_t t98 = 3369311;

	t98 = (((x393==x394)<=x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x397 = 1U;
	int64_t x398 = INT64_MAX;
	uint32_t x399 = UINT32_MAX;
	int32_t t99 = -3;

	t99 = (((x397==x398)<=x399)<=x400);

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

