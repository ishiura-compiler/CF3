#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -1;
int16_t x3 = INT16_MIN;
static volatile int32_t t3 = 1;
uint8_t x23 = UINT8_MAX;
int32_t t6 = 51;
uint16_t x29 = 125U;
static int64_t x37 = -1LL;
uint64_t x38 = 32764600296128055LLU;
static uint64_t x39 = 50539277120046522LLU;
int32_t x43 = INT32_MAX;
int16_t x47 = -1;
static uint32_t x51 = UINT32_MAX;
int32_t t12 = -80;
static uint64_t x54 = UINT64_MAX;
volatile int32_t t13 = 0;
static int64_t x63 = INT64_MIN;
static volatile uint64_t x68 = 64165179484184725LLU;
volatile int32_t t17 = 382234595;
int32_t x73 = -1;
uint32_t x74 = 2U;
volatile int32_t t18 = -1;
int8_t x78 = INT8_MAX;
volatile int8_t x79 = -1;
volatile int8_t x80 = INT8_MAX;
int64_t x93 = -206270510938719558LL;
volatile int8_t x95 = INT8_MAX;
volatile int32_t t25 = 491;
int32_t t26 = 43599;
int8_t x116 = INT8_MIN;
int64_t x118 = INT64_MIN;
volatile uint16_t x123 = 3357U;
uint64_t x127 = 46664LLU;
volatile int32_t x144 = INT32_MAX;
volatile uint32_t x147 = 193532U;
volatile uint16_t x151 = 5U;
uint32_t x154 = 110U;
int16_t x164 = -1;
int32_t t39 = 8292178;
int16_t x166 = -1;
int32_t x167 = INT32_MAX;
int32_t x176 = -1;
static int8_t x179 = INT8_MIN;
uint64_t x180 = UINT64_MAX;
int32_t t44 = 60;
volatile uint16_t x187 = UINT16_MAX;
static uint64_t x189 = UINT64_MAX;
static int8_t x195 = 0;
static uint32_t x198 = 10032U;
int32_t x202 = -1;
static int8_t x209 = -1;
int64_t x212 = -1LL;
int32_t t51 = 3079796;
static int8_t x214 = INT8_MIN;
uint8_t x215 = 57U;
uint64_t x219 = 543709275LLU;
int8_t x221 = -1;
int32_t t54 = 50394;
uint8_t x226 = UINT8_MAX;
int32_t t55 = -12717074;
int32_t x231 = INT32_MIN;
int8_t x235 = INT8_MIN;
volatile uint16_t x237 = 351U;
uint8_t x253 = 36U;
static uint64_t x255 = 668403197061396LLU;
int8_t x257 = 25;
uint64_t x260 = UINT64_MAX;
volatile uint32_t x264 = 10U;
int16_t x265 = 3030;
static int16_t x270 = INT16_MIN;
int8_t x285 = 25;
volatile int32_t t69 = -1660092;
volatile uint32_t x294 = UINT32_MAX;
uint8_t x296 = 6U;
int8_t x297 = -1;
int32_t x302 = -4;
int8_t x304 = -1;
volatile uint16_t x307 = UINT16_MAX;
int8_t x308 = INT8_MIN;
int64_t x313 = 5953717033LL;
volatile int16_t x315 = INT16_MAX;
int32_t t76 = -13993;
uint16_t x317 = UINT16_MAX;
volatile int64_t x318 = INT64_MAX;
uint8_t x321 = 9U;
int16_t x322 = INT16_MIN;
volatile int32_t t80 = 54732932;
uint64_t x349 = 15431554359LLU;
static int64_t x353 = -1LL;
volatile int32_t t83 = 53;
uint8_t x357 = UINT8_MAX;
int16_t x363 = 2160;
volatile int32_t t86 = -102199421;
static int64_t x369 = 737046160405428759LL;
volatile uint64_t x376 = 0LLU;
int16_t x384 = -1;
static uint32_t x391 = UINT32_MAX;
volatile int8_t x397 = INT8_MIN;
volatile int8_t x398 = INT8_MIN;
static uint8_t x405 = UINT8_MAX;


void f0(void) {
	static uint64_t x2 = 4793525563703LLU;
	int16_t x4 = 6;
	volatile int32_t t0 = 494742747;

	t0 = ((x1%(x2^x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 3870;
	uint32_t x6 = 1433078032U;
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -478297;

	t1 = ((x5%(x6^x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int32_t x10 = INT32_MIN;
	static uint16_t x11 = UINT16_MAX;
	uint8_t x12 = 3U;
	volatile int32_t t2 = -446046;

	t2 = ((x9%(x10^x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile uint8_t x14 = 0U;
	uint32_t x15 = 4770U;
	int16_t x16 = INT16_MIN;

	t3 = ((x13%(x14^x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	static uint32_t x18 = UINT32_MAX;
	int8_t x19 = INT8_MIN;
	int32_t x20 = 21941;
	volatile int32_t t4 = 94534;

	t4 = ((x17%(x18^x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 6U;
	int64_t x22 = 13LL;
	int64_t x24 = 377388LL;
	volatile int32_t t5 = 26;

	t5 = ((x21%(x22^x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	static int8_t x26 = INT8_MAX;
	uint32_t x27 = 2845784U;
	int16_t x28 = -691;

	t6 = ((x25%(x26^x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	volatile int32_t x31 = INT32_MAX;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 1555;

	t7 = ((x29%(x30^x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	static volatile int64_t x34 = INT64_MAX;
	uint32_t x35 = UINT32_MAX;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = -8164590;

	t8 = ((x33%(x34^x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x40 = 1598;
	static int32_t t9 = -1;

	t9 = ((x37%(x38^x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 13U;
	uint8_t x42 = 30U;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = 162;

	t10 = ((x41%(x42^x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = 0;
	int16_t x46 = INT16_MAX;
	uint64_t x48 = 13078141247LLU;
	volatile int32_t t11 = -32765906;

	t11 = ((x45%(x46^x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	static uint64_t x50 = 29LLU;
	static volatile int64_t x52 = INT64_MAX;

	t12 = ((x49%(x50^x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 103015946U;
	static uint16_t x55 = 957U;
	volatile int64_t x56 = INT64_MAX;

	t13 = ((x53%(x54^x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 3452661;
	int32_t x58 = -7290;
	volatile int8_t x59 = INT8_MIN;
	volatile int64_t x60 = 0LL;
	int32_t t14 = -74198166;

	t14 = ((x57%(x58^x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 4910;
	int8_t x62 = -1;
	volatile int8_t x64 = INT8_MAX;
	int32_t t15 = 62714530;

	t15 = ((x61%(x62^x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = UINT32_MAX;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = 23U;
	static volatile int32_t t16 = 1;

	t16 = ((x65%(x66^x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 28U;
	static int16_t x70 = 3852;
	uint32_t x71 = UINT32_MAX;
	static int64_t x72 = 25972220731833269LL;

	t17 = ((x69%(x70^x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x75 = 109742423780683LLU;
	uint32_t x76 = 1960363515U;

	t18 = ((x73%(x74^x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	static volatile int32_t t19 = 0;

	t19 = ((x77%(x78^x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int64_t x82 = 1162273267LL;
	static uint8_t x83 = 5U;
	static volatile int32_t x84 = -12207154;
	volatile int32_t t20 = 7;

	t20 = ((x81%(x82^x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int32_t x86 = -484873;
	volatile int32_t x87 = INT32_MAX;
	volatile int8_t x88 = -1;
	static int32_t t21 = -45;

	t21 = ((x85%(x86^x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 451311705146509511LLU;
	int64_t x90 = INT64_MIN;
	int64_t x91 = 47037LL;
	int64_t x92 = INT64_MAX;
	volatile int32_t t22 = 54682712;

	t22 = ((x89%(x90^x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x94 = 1U;
	int32_t x96 = -7833890;
	volatile int32_t t23 = 553980;

	t23 = ((x93%(x94^x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 41;
	uint64_t x98 = 31LLU;
	static uint32_t x99 = UINT32_MAX;
	int64_t x100 = INT64_MIN;
	int32_t t24 = 1587225;

	t24 = ((x97%(x98^x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1;
	static int16_t x102 = INT16_MAX;
	int64_t x103 = INT64_MIN;
	static uint64_t x104 = 12LLU;

	t25 = ((x101%(x102^x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	uint32_t x106 = UINT32_MAX;
	volatile int64_t x107 = INT64_MIN;
	int16_t x108 = 42;

	t26 = ((x105%(x106^x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = -472;
	int16_t x112 = INT16_MIN;
	static int32_t t27 = -3233279;

	t27 = ((x109%(x110^x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -16;
	uint8_t x114 = 1U;
	uint8_t x115 = 0U;
	static int32_t t28 = 247896000;

	t28 = ((x113%(x114^x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x119 = -2356LL;
	int32_t x120 = -841099;
	volatile int32_t t29 = 21615674;

	t29 = ((x117%(x118^x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 154U;
	uint16_t x122 = 32U;
	uint32_t x124 = 272U;
	int32_t t30 = -9751;

	t30 = ((x121%(x122^x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	volatile uint64_t x126 = 740301405182LLU;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 159685468;

	t31 = ((x125%(x126^x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	volatile int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	uint16_t x132 = 3116U;
	volatile int32_t t32 = 32595896;

	t32 = ((x129%(x130^x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	volatile int64_t x138 = 86842453674638LL;
	uint16_t x139 = UINT16_MAX;
	int64_t x140 = 1109858948896109LL;
	int32_t t33 = -20571141;

	t33 = ((x137%(x138^x139))<=x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x141 = -1;
	int16_t x142 = 95;
	uint32_t x143 = 275U;
	volatile int32_t t34 = -10;

	t34 = ((x141%(x142^x143))<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	volatile int64_t x146 = -1LL;
	int8_t x148 = 0;
	volatile int32_t t35 = 33996;

	t35 = ((x145%(x146^x147))<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int8_t x150 = INT8_MIN;
	static int16_t x152 = -1;
	int32_t t36 = 2766431;

	t36 = ((x149%(x150^x151))<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = INT8_MAX;
	int32_t x155 = 0;
	uint32_t x156 = 2U;
	static int32_t t37 = -100501;

	t37 = ((x153%(x154^x155))<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	uint16_t x158 = 2U;
	static int32_t x159 = INT32_MIN;
	uint8_t x160 = 2U;
	volatile int32_t t38 = -262;

	t38 = ((x157%(x158^x159))<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = INT16_MIN;
	uint16_t x162 = 15358U;
	volatile int8_t x163 = -1;

	t39 = ((x161%(x162^x163))<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 352091420U;
	uint64_t x168 = 15209669LLU;
	int32_t t40 = 480942;

	t40 = ((x165%(x166^x167))<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	uint16_t x170 = 6896U;
	int64_t x171 = -1LL;
	uint64_t x172 = 23601LLU;
	int32_t t41 = 127518772;

	t41 = ((x169%(x170^x171))<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 73504750LLU;
	int8_t x174 = -1;
	volatile uint16_t x175 = UINT16_MAX;
	volatile int32_t t42 = 45;

	t42 = ((x173%(x174^x175))<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = 10;
	int32_t t43 = 44547131;

	t43 = ((x177%(x178^x179))<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x181 = 39902712143983762LLU;
	int16_t x182 = INT16_MIN;
	static int64_t x183 = INT64_MIN;
	volatile uint8_t x184 = UINT8_MAX;

	t44 = ((x181%(x182^x183))<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 432;
	int64_t x186 = 544795224664515629LL;
	int16_t x188 = INT16_MIN;
	volatile int32_t t45 = -574826832;

	t45 = ((x185%(x186^x187))<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x190 = 1;
	static int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t46 = 112846;

	t46 = ((x189%(x190^x191))<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x193 = 815U;
	volatile uint32_t x194 = UINT32_MAX;
	static volatile uint64_t x196 = 35730145LLU;
	volatile int32_t t47 = 453471;

	t47 = ((x193%(x194^x195))<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = -1;
	int32_t x199 = INT32_MIN;
	volatile int64_t x200 = -25804245399770LL;
	static int32_t t48 = 338;

	t48 = ((x197%(x198^x199))<=x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x203 = 3;
	volatile uint64_t x204 = UINT64_MAX;
	int32_t t49 = 9909;

	t49 = ((x201%(x202^x203))<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 2U;
	int64_t x206 = -1LL;
	static uint16_t x207 = 19U;
	static int64_t x208 = INT64_MIN;
	int32_t t50 = -1370104;

	t50 = ((x205%(x206^x207))<=x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x210 = 51320475LLU;
	static uint16_t x211 = 3U;

	t51 = ((x209%(x210^x211))<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = 13650;
	int32_t x216 = INT32_MIN;
	volatile int32_t t52 = 23;

	t52 = ((x213%(x214^x215))<=x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 1U;
	static int8_t x218 = INT8_MIN;
	volatile int64_t x220 = 2295LL;
	int32_t t53 = -104992317;

	t53 = ((x217%(x218^x219))<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x222 = UINT8_MAX;
	volatile int16_t x223 = INT16_MIN;
	uint64_t x224 = 6468991434874066LLU;

	t54 = ((x221%(x222^x223))<=x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x227 = INT8_MIN;
	volatile uint8_t x228 = 11U;

	t55 = ((x225%(x226^x227))<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	uint16_t x230 = 1423U;
	int8_t x232 = -1;
	static int32_t t56 = -193;

	t56 = ((x229%(x230^x231))<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -1;
	volatile uint32_t x234 = 21675128U;
	int8_t x236 = INT8_MAX;
	static int32_t t57 = 98579786;

	t57 = ((x233%(x234^x235))<=x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x238 = 111U;
	int64_t x239 = -1LL;
	static volatile uint32_t x240 = UINT32_MAX;
	volatile int32_t t58 = 19917913;

	t58 = ((x237%(x238^x239))<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = 13U;
	int16_t x246 = -1;
	volatile int32_t x247 = 4;
	int16_t x248 = -699;
	int32_t t59 = -26;

	t59 = ((x245%(x246^x247))<=x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x250 = 1960123U;
	volatile uint8_t x251 = 6U;
	uint16_t x252 = 1097U;
	int32_t t60 = 334664;

	t60 = ((x249%(x250^x251))<=x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x254 = UINT16_MAX;
	volatile uint32_t x256 = 7056398U;
	int32_t t61 = -568567;

	t61 = ((x253%(x254^x255))<=x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x258 = INT32_MAX;
	uint32_t x259 = 1464767127U;
	volatile int32_t t62 = 25;

	t62 = ((x257%(x258^x259))<=x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x261 = INT16_MIN;
	uint16_t x262 = UINT16_MAX;
	static int64_t x263 = -22799LL;
	int32_t t63 = 1;

	t63 = ((x261%(x262^x263))<=x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x266 = UINT16_MAX;
	int64_t x267 = -1LL;
	int8_t x268 = INT8_MAX;
	int32_t t64 = 48967389;

	t64 = ((x265%(x266^x267))<=x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 7373024U;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MIN;
	static volatile int32_t t65 = -6564;

	t65 = ((x269%(x270^x271))<=x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -197;
	static int8_t x274 = INT8_MIN;
	volatile int16_t x275 = 6719;
	int64_t x276 = 4221183245344LL;
	static int32_t t66 = 609;

	t66 = ((x273%(x274^x275))<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x277 = -22;
	int8_t x278 = 33;
	int32_t x279 = INT32_MAX;
	int64_t x280 = INT64_MAX;
	int32_t t67 = 34243;

	t67 = ((x277%(x278^x279))<=x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	int8_t x282 = 5;
	int64_t x283 = 1839826090068LL;
	volatile uint64_t x284 = UINT64_MAX;
	int32_t t68 = 6998;

	t68 = ((x281%(x282^x283))<=x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x286 = 96172LLU;
	static volatile int32_t x287 = -1;
	int32_t x288 = -1;

	t69 = ((x285%(x286^x287))<=x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x289 = UINT32_MAX;
	int16_t x290 = -1562;
	int16_t x291 = INT16_MIN;
	uint64_t x292 = UINT64_MAX;
	static int32_t t70 = 108618299;

	t70 = ((x289%(x290^x291))<=x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x293 = -1LL;
	static int32_t x295 = -3;
	int32_t t71 = -18564047;

	t71 = ((x293%(x294^x295))<=x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x298 = UINT32_MAX;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MIN;
	static int32_t t72 = -168;

	t72 = ((x297%(x298^x299))<=x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x301 = 2U;
	int8_t x303 = -1;
	volatile int32_t t73 = 154236905;

	t73 = ((x301%(x302^x303))<=x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x305 = 108250340U;
	static int16_t x306 = 567;
	volatile int32_t t74 = 73;

	t74 = ((x305%(x306^x307))<=x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x309 = INT32_MIN;
	uint64_t x310 = 50135704564770006LLU;
	uint32_t x311 = 5606U;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t75 = -10815756;

	t75 = ((x309%(x310^x311))<=x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x314 = INT16_MIN;
	uint8_t x316 = 0U;

	t76 = ((x313%(x314^x315))<=x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x319 = 0U;
	int16_t x320 = -1208;
	volatile int32_t t77 = 7;

	t77 = ((x317%(x318^x319))<=x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x323 = INT32_MAX;
	uint8_t x324 = 2U;
	int32_t t78 = 87060;

	t78 = ((x321%(x322^x323))<=x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = 31;
	static uint8_t x334 = UINT8_MAX;
	volatile uint8_t x335 = 5U;
	uint8_t x336 = 0U;
	int32_t t79 = -50956200;

	t79 = ((x333%(x334^x335))<=x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MIN;
	static int32_t x338 = INT32_MIN;
	static volatile int64_t x339 = INT64_MAX;
	int32_t x340 = INT32_MIN;

	t80 = ((x337%(x338^x339))<=x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x341 = -392013308;
	int64_t x342 = INT64_MIN;
	uint64_t x343 = 469326924656634137LLU;
	static int32_t x344 = -1;
	volatile int32_t t81 = -669;

	t81 = ((x341%(x342^x343))<=x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x350 = INT8_MAX;
	volatile int32_t x351 = INT32_MIN;
	uint32_t x352 = 16106101U;
	int32_t t82 = 118064101;

	t82 = ((x349%(x350^x351))<=x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x354 = -1;
	int32_t x355 = INT32_MIN;
	static uint32_t x356 = UINT32_MAX;

	t83 = ((x353%(x354^x355))<=x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x358 = 0U;
	int64_t x359 = INT64_MIN;
	static int32_t x360 = -1;
	volatile int32_t t84 = -4;

	t84 = ((x357%(x358^x359))<=x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x361 = 0U;
	int32_t x362 = -203195;
	uint32_t x364 = 1122U;
	int32_t t85 = -11;

	t85 = ((x361%(x362^x363))<=x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MIN;
	static uint16_t x366 = 985U;
	int32_t x367 = INT32_MAX;
	static int8_t x368 = INT8_MIN;

	t86 = ((x365%(x366^x367))<=x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x370 = 3U;
	int64_t x371 = -1826059018745LL;
	static uint64_t x372 = UINT64_MAX;
	static volatile int32_t t87 = 0;

	t87 = ((x369%(x370^x371))<=x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x373 = 740U;
	uint16_t x374 = 5777U;
	volatile int8_t x375 = 12;
	volatile int32_t t88 = -859331;

	t88 = ((x373%(x374^x375))<=x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MIN;
	volatile uint8_t x378 = 1U;
	int32_t x379 = -1;
	int64_t x380 = 83174232215LL;
	volatile int32_t t89 = 93532342;

	t89 = ((x377%(x378^x379))<=x380);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MIN;
	uint8_t x382 = 9U;
	int64_t x383 = -1LL;
	int32_t t90 = 3209;

	t90 = ((x381%(x382^x383))<=x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = INT16_MAX;
	int16_t x386 = -1;
	int64_t x387 = 15112721894061LL;
	int64_t x388 = INT64_MIN;
	int32_t t91 = 132994;

	t91 = ((x385%(x386^x387))<=x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x389 = -8;
	uint8_t x390 = UINT8_MAX;
	static volatile uint64_t x392 = 30602475488771LLU;
	volatile int32_t t92 = 713070475;

	t92 = ((x389%(x390^x391))<=x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = -1LL;
	static uint64_t x394 = UINT64_MAX;
	int8_t x395 = 2;
	uint16_t x396 = UINT16_MAX;
	static int32_t t93 = -797;

	t93 = ((x393%(x394^x395))<=x396);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x399 = 247U;
	uint8_t x400 = 81U;
	int32_t t94 = -1;

	t94 = ((x397%(x398^x399))<=x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x401 = INT8_MIN;
	int64_t x402 = -7741LL;
	int16_t x403 = INT16_MIN;
	volatile int8_t x404 = INT8_MIN;
	int32_t t95 = 1387320;

	t95 = ((x401%(x402^x403))<=x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x406 = 62U;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MIN;
	volatile int32_t t96 = 7;

	t96 = ((x405%(x406^x407))<=x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x409 = INT16_MIN;
	int16_t x410 = -12204;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MIN;
	static int32_t t97 = -5688408;

	t97 = ((x409%(x410^x411))<=x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x413 = 18442869;
	int8_t x414 = INT8_MAX;
	int64_t x415 = INT64_MIN;
	int32_t x416 = 94610851;
	volatile int32_t t98 = 2408;

	t98 = ((x413%(x414^x415))<=x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = -1;
	volatile uint64_t x418 = 8379686151LLU;
	static uint64_t x419 = 10451911814LLU;
	volatile uint8_t x420 = 7U;
	volatile int32_t t99 = -3;

	t99 = ((x417%(x418^x419))<=x420);

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

