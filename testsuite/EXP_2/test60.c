#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = 76185246;
static int64_t x12 = INT64_MAX;
volatile uint64_t x16 = UINT64_MAX;
uint32_t x17 = 997U;
int8_t x20 = INT8_MIN;
static int16_t x21 = INT16_MIN;
int32_t x25 = INT32_MIN;
volatile int32_t t6 = 6;
int16_t x32 = INT16_MIN;
static int32_t t7 = 0;
int64_t x33 = -129LL;
static int32_t x42 = INT32_MAX;
volatile uint32_t x43 = 759435147U;
int16_t x44 = -1793;
volatile int32_t t9 = 1;
int8_t x50 = INT8_MIN;
uint16_t x52 = 13232U;
uint8_t x55 = 3U;
int32_t x62 = -1;
uint16_t x75 = UINT16_MAX;
volatile uint16_t x77 = UINT16_MAX;
static int8_t x84 = INT8_MAX;
uint8_t x87 = 32U;
uint64_t x91 = 252556LLU;
uint64_t x97 = 1LLU;
int32_t t26 = 4;
volatile int8_t x125 = -1;
static int16_t x130 = 70;
volatile int8_t x135 = 0;
uint32_t x136 = 250U;
static int32_t t29 = 212094;
uint32_t x140 = UINT32_MAX;
int16_t x149 = 1448;
volatile uint16_t x154 = 0U;
int16_t x157 = 48;
uint8_t x159 = 63U;
volatile int16_t x163 = INT16_MAX;
int8_t x165 = 9;
int64_t x171 = INT64_MAX;
volatile int16_t x177 = INT16_MIN;
int8_t x184 = INT8_MIN;
static volatile int64_t x185 = -368303894LL;
uint32_t x187 = UINT32_MAX;
static int32_t t40 = 468330;
volatile int64_t x192 = INT64_MIN;
static uint16_t x193 = UINT16_MAX;
uint16_t x199 = 639U;
int16_t x200 = INT16_MAX;
int16_t x201 = INT16_MIN;
uint8_t x204 = UINT8_MAX;
int32_t t45 = 208;
int32_t x213 = -1;
int8_t x216 = INT8_MAX;
volatile int32_t t49 = -655;
int64_t x227 = INT64_MIN;
volatile int32_t x228 = INT32_MIN;
static volatile int16_t x230 = 2257;
int8_t x238 = -13;
volatile int32_t t52 = 12630;
uint16_t x241 = 602U;
uint16_t x244 = 16U;
static int32_t t53 = -80453937;
uint16_t x258 = UINT16_MAX;
volatile int32_t t56 = -99535886;
uint16_t x261 = UINT16_MAX;
uint32_t x263 = UINT32_MAX;
int32_t t59 = 1662021;
volatile int8_t x277 = INT8_MAX;
int32_t x280 = INT32_MAX;
int32_t x296 = INT32_MIN;
static volatile int64_t x302 = 14380937861744908LL;
static int32_t t66 = -26017;
static volatile int32_t x313 = INT32_MIN;
int64_t x316 = 3484840769748LL;
int8_t x319 = INT8_MIN;
uint32_t x320 = UINT32_MAX;
int32_t t69 = -13904;
static volatile int64_t x333 = INT64_MIN;
uint16_t x335 = UINT16_MAX;
volatile uint16_t x340 = UINT16_MAX;
static volatile int32_t t73 = 28069;
static uint64_t x341 = UINT64_MAX;
int8_t x353 = INT8_MIN;
volatile int16_t x357 = -1;
volatile int32_t t77 = -3760;
volatile int32_t x361 = 925077170;
static int32_t x365 = INT32_MIN;
uint64_t x366 = 2LLU;
static int32_t x380 = INT32_MAX;
volatile int32_t t81 = 128286;
int64_t x385 = INT64_MIN;
int16_t x387 = INT16_MAX;
uint64_t x390 = 838564LLU;
static uint64_t x392 = UINT64_MAX;
static int16_t x393 = INT16_MIN;
int64_t x397 = -1LL;
static uint64_t x407 = 121845312012142LLU;
int32_t x412 = 1043966752;
uint8_t x413 = 3U;
static uint16_t x418 = 4199U;
volatile int32_t x420 = 125677349;
static volatile int32_t t90 = 216022;
volatile int16_t x427 = -7915;
uint8_t x429 = 3U;
int8_t x430 = INT8_MIN;
int32_t t94 = -1;
volatile int64_t x440 = INT64_MIN;
int32_t t95 = -146;
uint8_t x442 = 0U;
static int32_t x447 = INT32_MAX;
volatile int32_t t97 = -740521836;
int32_t x449 = 260407;
int8_t x450 = INT8_MIN;
uint64_t x452 = UINT64_MAX;
int64_t x454 = INT64_MAX;
int32_t t99 = -447694002;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	volatile int16_t x3 = INT16_MIN;
	uint16_t x4 = 3U;
	int32_t t0 = -3;

	t0 = ((x1%(x2+x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MIN;
	int32_t x7 = 41167430;
	volatile int64_t x8 = 7482997LL;
	static volatile int32_t t1 = 40859;

	t1 = ((x5%(x6+x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 3U;
	uint32_t x10 = 64520579U;
	int32_t x11 = 6374;
	int32_t t2 = -34673019;

	t2 = ((x9%(x10+x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1;
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = 1765199550U;
	static int32_t t3 = -3;

	t3 = ((x13%(x14+x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	volatile int16_t x19 = INT16_MIN;
	static volatile int32_t t4 = -34;

	t4 = ((x17%(x18+x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 45261973U;
	uint8_t x23 = UINT8_MAX;
	uint64_t x24 = UINT64_MAX;
	static volatile int32_t t5 = -251090539;

	t5 = ((x21%(x22+x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = 0;
	int16_t x27 = INT16_MIN;
	static volatile uint32_t x28 = UINT32_MAX;

	t6 = ((x25%(x26+x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static uint64_t x30 = 1568052LLU;
	int64_t x31 = -1LL;

	t7 = ((x29%(x30+x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x34 = 6U;
	volatile uint8_t x35 = 30U;
	static int64_t x36 = -6237337LL;
	volatile int32_t t8 = 2640;

	t8 = ((x33%(x34+x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = 23631U;

	t9 = ((x41%(x42+x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 10U;
	static int8_t x46 = INT8_MIN;
	uint8_t x47 = UINT8_MAX;
	volatile int64_t x48 = -133456192257LL;
	volatile int32_t t10 = -13;

	t10 = ((x45%(x46+x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 678294961U;
	static volatile int8_t x51 = 1;
	volatile int32_t t11 = -561675;

	t11 = ((x49%(x50+x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x54 = INT64_MIN;
	static int8_t x56 = INT8_MIN;
	static volatile int32_t t12 = -14;

	t12 = ((x53%(x54+x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = -1;
	static volatile int8_t x58 = INT8_MAX;
	uint8_t x59 = 37U;
	int8_t x60 = 45;
	static volatile int32_t t13 = 40;

	t13 = ((x57%(x58+x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = INT16_MAX;
	uint16_t x63 = 17312U;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t14 = -8;

	t14 = ((x61%(x62+x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x69 = 154U;
	int8_t x70 = -1;
	int64_t x71 = 1042173962327LL;
	uint64_t x72 = 326370LLU;
	int32_t t15 = -97;

	t15 = ((x69%(x70+x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 0U;
	uint16_t x74 = 7U;
	int8_t x76 = INT8_MIN;
	int32_t t16 = -2734;

	t16 = ((x73%(x74+x75))==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x78 = 3814U;
	int64_t x79 = -1LL;
	int64_t x80 = 4049754006LL;
	static int32_t t17 = -7533830;

	t17 = ((x77%(x78+x79))==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 297423364874LLU;
	int32_t x82 = -489640;
	static volatile int8_t x83 = INT8_MIN;
	int32_t t18 = 282;

	t18 = ((x81%(x82+x83))==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x85 = 6U;
	int8_t x86 = INT8_MIN;
	int8_t x88 = -6;
	int32_t t19 = -1;

	t19 = ((x85%(x86+x87))==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 6270U;
	int32_t x90 = -1;
	uint32_t x92 = 79603U;
	volatile int32_t t20 = -954402;

	t20 = ((x89%(x90+x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MAX;
	int64_t x95 = -1LL;
	int16_t x96 = -4722;
	static int32_t t21 = 1017054;

	t21 = ((x93%(x94+x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x98 = -21;
	int32_t x99 = -3;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t22 = 106269;

	t22 = ((x97%(x98+x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 48U;
	volatile int64_t x102 = -10701LL;
	uint16_t x103 = 7U;
	int8_t x104 = INT8_MAX;
	volatile int32_t t23 = -242196;

	t23 = ((x101%(x102+x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x105 = INT16_MAX;
	int16_t x106 = 873;
	uint8_t x107 = UINT8_MAX;
	volatile int32_t x108 = -88324837;
	volatile int32_t t24 = -17;

	t24 = ((x105%(x106+x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 51U;
	volatile int16_t x110 = 1964;
	uint64_t x111 = 30982392183LLU;
	int32_t x112 = -1;
	volatile int32_t t25 = -62014356;

	t25 = ((x109%(x110+x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 25251976;
	static int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MAX;
	int32_t x116 = -781608;

	t26 = ((x113%(x114+x115))==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x126 = UINT64_MAX;
	uint16_t x127 = 7U;
	uint8_t x128 = 5U;
	volatile int32_t t27 = 2;

	t27 = ((x125%(x126+x127))==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x129 = UINT8_MAX;
	int32_t x131 = 0;
	int64_t x132 = -4055185935LL;
	static int32_t t28 = 15578;

	t28 = ((x129%(x130+x131))==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = 0U;
	uint64_t x134 = 21547481LLU;

	t29 = ((x133%(x134+x135))==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 3924871U;
	volatile int16_t x138 = 6;
	int16_t x139 = -1;
	volatile int32_t t30 = 4492172;

	t30 = ((x137%(x138+x139))==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x145 = INT64_MIN;
	volatile uint32_t x146 = 187302U;
	static int8_t x147 = -3;
	uint32_t x148 = UINT32_MAX;
	int32_t t31 = 3;

	t31 = ((x145%(x146+x147))==x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x150 = 1U;
	static volatile int8_t x151 = 0;
	int16_t x152 = 1366;
	int32_t t32 = 8459203;

	t32 = ((x149%(x150+x151))==x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x153 = INT64_MIN;
	uint64_t x155 = UINT64_MAX;
	uint32_t x156 = 671184U;
	static int32_t t33 = 33019672;

	t33 = ((x153%(x154+x155))==x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x158 = INT32_MIN;
	static int32_t x160 = INT32_MIN;
	int32_t t34 = -1;

	t34 = ((x157%(x158+x159))==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MAX;
	volatile uint32_t x162 = 9985U;
	static int16_t x164 = INT16_MIN;
	volatile int32_t t35 = -448504;

	t35 = ((x161%(x162+x163))==x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x166 = INT8_MAX;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = 1804;
	int32_t t36 = 78;

	t36 = ((x165%(x166+x167))==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = 5;
	int32_t x170 = -132669;
	uint64_t x172 = 58743818LLU;
	int32_t t37 = 26032129;

	t37 = ((x169%(x170+x171))==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x178 = -37291788LL;
	uint16_t x179 = 297U;
	int16_t x180 = -74;
	int32_t t38 = -2023323;

	t38 = ((x177%(x178+x179))==x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = INT8_MIN;
	static uint16_t x182 = 0U;
	int8_t x183 = INT8_MIN;
	int32_t t39 = 63644;

	t39 = ((x181%(x182+x183))==x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x186 = INT16_MAX;
	int64_t x188 = -1LL;

	t40 = ((x185%(x186+x187))==x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = 426322809;
	int64_t x190 = 3981LL;
	int16_t x191 = 969;
	int32_t t41 = -14330793;

	t41 = ((x189%(x190+x191))==x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x194 = UINT32_MAX;
	volatile int8_t x195 = 40;
	uint16_t x196 = 11108U;
	int32_t t42 = -643293044;

	t42 = ((x193%(x194+x195))==x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x197 = -1LL;
	int8_t x198 = INT8_MAX;
	static int32_t t43 = 2049728;

	t43 = ((x197%(x198+x199))==x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x202 = INT16_MIN;
	volatile int32_t x203 = 9637;
	static int32_t t44 = -784;

	t44 = ((x201%(x202+x203))==x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x205 = 3U;
	int16_t x206 = 254;
	volatile int64_t x207 = -1LL;
	int16_t x208 = INT16_MAX;

	t45 = ((x205%(x206+x207))==x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x209 = -8410;
	static volatile int64_t x210 = -398LL;
	volatile uint64_t x211 = 8114981067840503LLU;
	uint8_t x212 = UINT8_MAX;
	static volatile int32_t t46 = 2;

	t46 = ((x209%(x210+x211))==x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x214 = UINT8_MAX;
	static volatile uint16_t x215 = 120U;
	int32_t t47 = 430114411;

	t47 = ((x213%(x214+x215))==x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MIN;
	static int32_t x218 = INT32_MIN;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = 224;
	int32_t t48 = -408497;

	t48 = ((x217%(x218+x219))==x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -24;
	static int32_t x222 = -855859;
	int32_t x223 = INT32_MAX;
	int8_t x224 = -1;

	t49 = ((x221%(x222+x223))==x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x225 = INT32_MAX;
	uint8_t x226 = 14U;
	volatile int32_t t50 = -17944973;

	t50 = ((x225%(x226+x227))==x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x229 = INT32_MAX;
	uint16_t x231 = 0U;
	static volatile int8_t x232 = -30;
	volatile int32_t t51 = -125505142;

	t51 = ((x229%(x230+x231))==x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x237 = 0;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = -1;

	t52 = ((x237%(x238+x239))==x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x242 = -1LL;
	int8_t x243 = INT8_MAX;

	t53 = ((x241%(x242+x243))==x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x245 = INT16_MAX;
	static int16_t x246 = -15;
	static uint64_t x247 = UINT64_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t54 = 104029189;

	t54 = ((x245%(x246+x247))==x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = INT64_MAX;
	uint64_t x254 = 38057253947242LLU;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 1U;
	int32_t t55 = -53385709;

	t55 = ((x253%(x254+x255))==x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x257 = -1;
	volatile int16_t x259 = -158;
	uint16_t x260 = 0U;

	t56 = ((x257%(x258+x259))==x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x262 = 5;
	volatile int16_t x264 = -1;
	static int32_t t57 = 20;

	t57 = ((x261%(x262+x263))==x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = -1;
	uint8_t x267 = UINT8_MAX;
	static volatile int16_t x268 = -312;
	int32_t t58 = -13555057;

	t58 = ((x265%(x266+x267))==x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x273 = 1569289;
	int32_t x274 = 971153;
	volatile uint32_t x275 = UINT32_MAX;
	volatile uint8_t x276 = 4U;

	t59 = ((x273%(x274+x275))==x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x278 = INT64_MAX;
	int32_t x279 = INT32_MIN;
	int32_t t60 = 271;

	t60 = ((x277%(x278+x279))==x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x281 = 8413LLU;
	int64_t x282 = -1LL;
	int32_t x283 = -10922159;
	int8_t x284 = INT8_MAX;
	volatile int32_t t61 = 3151;

	t61 = ((x281%(x282+x283))==x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x289 = 113986296045886LLU;
	uint64_t x290 = 253431LLU;
	int32_t x291 = INT32_MIN;
	volatile int8_t x292 = INT8_MIN;
	int32_t t62 = 402504985;

	t62 = ((x289%(x290+x291))==x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x293 = UINT8_MAX;
	int8_t x294 = INT8_MIN;
	volatile uint8_t x295 = 86U;
	volatile int32_t t63 = -264447581;

	t63 = ((x293%(x294+x295))==x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = INT64_MAX;
	static int8_t x298 = INT8_MIN;
	volatile uint32_t x299 = 203615364U;
	volatile int64_t x300 = INT64_MIN;
	volatile int32_t t64 = -18579253;

	t64 = ((x297%(x298+x299))==x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = -131532682;
	int32_t x303 = 21645;
	int64_t x304 = INT64_MIN;
	static volatile int32_t t65 = -70785;

	t65 = ((x301%(x302+x303))==x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x305 = -1;
	int32_t x306 = INT32_MIN;
	int64_t x307 = -2298898763LL;
	int64_t x308 = INT64_MAX;

	t66 = ((x305%(x306+x307))==x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x314 = 0;
	static int64_t x315 = 123207968332377444LL;
	static volatile int32_t t67 = -4693625;

	t67 = ((x313%(x314+x315))==x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x317 = INT64_MIN;
	static uint16_t x318 = 20070U;
	int32_t t68 = 9496259;

	t68 = ((x317%(x318+x319))==x320);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x321 = 2413351187LLU;
	int64_t x322 = INT64_MAX;
	static int16_t x323 = -1;
	volatile int32_t x324 = INT32_MIN;

	t69 = ((x321%(x322+x323))==x324);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x325 = UINT16_MAX;
	uint16_t x326 = UINT16_MAX;
	uint16_t x327 = UINT16_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t70 = -34357629;

	t70 = ((x325%(x326+x327))==x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x329 = INT64_MAX;
	int32_t x330 = -1;
	int64_t x331 = 39540877LL;
	int8_t x332 = INT8_MIN;
	int32_t t71 = 43261;

	t71 = ((x329%(x330+x331))==x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x334 = 51006627;
	static volatile uint64_t x336 = UINT64_MAX;
	volatile int32_t t72 = 298659;

	t72 = ((x333%(x334+x335))==x336);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x337 = UINT16_MAX;
	volatile uint8_t x338 = 117U;
	int16_t x339 = -3;

	t73 = ((x337%(x338+x339))==x340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MAX;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t74 = -524552;

	t74 = ((x341%(x342+x343))==x344);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x349 = INT64_MIN;
	uint64_t x350 = 45468194889323LLU;
	uint64_t x351 = 423707070743721018LLU;
	static uint64_t x352 = 153254873416883LLU;
	int32_t t75 = 8775;

	t75 = ((x349%(x350+x351))==x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x354 = 1;
	static volatile int8_t x355 = INT8_MAX;
	uint64_t x356 = 28257440347503LLU;
	static int32_t t76 = -1056364852;

	t76 = ((x353%(x354+x355))==x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x358 = INT32_MIN;
	uint64_t x359 = UINT64_MAX;
	uint64_t x360 = UINT64_MAX;

	t77 = ((x357%(x358+x359))==x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x362 = 4;
	static uint32_t x363 = 16U;
	static volatile int16_t x364 = INT16_MIN;
	int32_t t78 = 43154182;

	t78 = ((x361%(x362+x363))==x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x367 = -1LL;
	int16_t x368 = -1;
	int32_t t79 = -125368;

	t79 = ((x365%(x366+x367))==x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = -1;
	volatile int16_t x370 = -1;
	int8_t x371 = INT8_MAX;
	volatile uint64_t x372 = 94362813684632467LLU;
	volatile int32_t t80 = -1974045;

	t80 = ((x369%(x370+x371))==x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = -1;
	int8_t x378 = INT8_MAX;
	static int32_t x379 = 53;

	t81 = ((x377%(x378+x379))==x380);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MIN;
	uint64_t x384 = 523562021063LLU;
	volatile int32_t t82 = -95423;

	t82 = ((x381%(x382+x383))==x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x386 = 2099637067311389543LL;
	uint16_t x388 = UINT16_MAX;
	static volatile int32_t t83 = -6;

	t83 = ((x385%(x386+x387))==x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = 2875106LL;
	int16_t x391 = 0;
	int32_t t84 = -7;

	t84 = ((x389%(x390+x391))==x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x394 = INT64_MIN;
	uint8_t x395 = UINT8_MAX;
	static volatile int8_t x396 = INT8_MAX;
	int32_t t85 = 1033301;

	t85 = ((x393%(x394+x395))==x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x398 = -1;
	int32_t x399 = -1973;
	static volatile int16_t x400 = INT16_MIN;
	volatile int32_t t86 = -10;

	t86 = ((x397%(x398+x399))==x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x405 = 0U;
	int32_t x406 = 4574405;
	static uint16_t x408 = 10219U;
	int32_t t87 = -59764;

	t87 = ((x405%(x406+x407))==x408);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = -1;
	int32_t x410 = INT32_MIN;
	volatile int32_t x411 = INT32_MAX;
	static volatile int32_t t88 = -32437669;

	t88 = ((x409%(x410+x411))==x412);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x414 = 33U;
	int64_t x415 = 26839LL;
	volatile int32_t x416 = 2;
	volatile int32_t t89 = 5;

	t89 = ((x413%(x414+x415))==x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x417 = 1289U;
	int64_t x419 = INT64_MIN;

	t90 = ((x417%(x418+x419))==x420);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = -45;
	int8_t x422 = -15;
	static int64_t x423 = -1LL;
	int16_t x424 = -1;
	int32_t t91 = 15886;

	t91 = ((x421%(x422+x423))==x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = INT64_MIN;
	uint16_t x426 = 1876U;
	volatile uint64_t x428 = 452791472982LLU;
	int32_t t92 = -598;

	t92 = ((x425%(x426+x427))==x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x431 = INT8_MAX;
	uint32_t x432 = UINT32_MAX;
	volatile int32_t t93 = -980201239;

	t93 = ((x429%(x430+x431))==x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x433 = UINT32_MAX;
	int32_t x434 = -2442;
	int16_t x435 = -1;
	volatile int32_t x436 = -8;

	t94 = ((x433%(x434+x435))==x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x437 = 65;
	uint64_t x438 = UINT64_MAX;
	static int16_t x439 = -62;

	t95 = ((x437%(x438+x439))==x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x441 = INT8_MAX;
	uint8_t x443 = UINT8_MAX;
	volatile int32_t x444 = INT32_MAX;
	int32_t t96 = -3739810;

	t96 = ((x441%(x442+x443))==x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = -4804;
	int16_t x446 = -1;
	int32_t x448 = -659116389;

	t97 = ((x445%(x446+x447))==x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x451 = 48;
	int32_t t98 = -3;

	t98 = ((x449%(x450+x451))==x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x453 = 0U;
	int32_t x455 = INT32_MIN;
	int64_t x456 = -5353607014432LL;

	t99 = ((x453%(x454+x455))==x456);

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

