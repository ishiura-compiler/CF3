#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = INT8_MIN;
volatile uint64_t t0 = 116745LLU;
volatile int32_t t1 = -864673688;
int64_t x10 = INT64_MIN;
uint8_t x12 = 29U;
int8_t x13 = INT8_MIN;
volatile uint16_t x20 = UINT16_MAX;
volatile int32_t t5 = 32117;
int32_t t6 = -1019;
volatile uint8_t x31 = UINT8_MAX;
static volatile int16_t x35 = INT16_MAX;
static uint16_t x42 = 66U;
int64_t x43 = -129LL;
volatile int32_t t10 = 500329;
volatile int32_t t11 = -136144;
uint64_t x52 = 31623051671484814LLU;
int16_t x55 = INT16_MIN;
volatile int64_t t13 = 214937384222640LL;
int32_t t15 = -1884827;
volatile int32_t t16 = -7309;
uint16_t x83 = UINT16_MAX;
static int8_t x89 = INT8_MIN;
uint32_t x90 = 100201022U;
uint8_t x91 = 5U;
int16_t x92 = -1;
int32_t t22 = -348830;
static int32_t x97 = -1;
uint8_t x98 = 32U;
volatile int32_t t24 = 399197157;
volatile int8_t x106 = INT8_MIN;
static volatile int8_t x109 = INT8_MAX;
volatile int64_t x112 = 1996598780533LL;
static int64_t x114 = INT64_MIN;
int16_t x116 = INT16_MIN;
static uint64_t x118 = UINT64_MAX;
int64_t x120 = INT64_MIN;
volatile int16_t x126 = INT16_MIN;
static uint8_t x128 = UINT8_MAX;
int8_t x140 = -1;
int16_t x141 = INT16_MAX;
int32_t t35 = -122;
static int8_t x150 = INT8_MIN;
int8_t x161 = -3;
volatile uint32_t t38 = 91U;
volatile uint16_t x165 = 1006U;
volatile uint16_t x168 = 4U;
uint8_t x171 = UINT8_MAX;
int32_t t40 = -17;
uint64_t x176 = UINT64_MAX;
uint16_t x177 = 4889U;
volatile int32_t t42 = -663576;
uint32_t x186 = 2U;
int32_t x189 = INT32_MAX;
int64_t x192 = 37009819034855LL;
uint64_t x199 = 287749694905985LLU;
int8_t x217 = 13;
static int16_t x220 = -269;
static uint64_t x224 = 123757437694LLU;
int8_t x225 = INT8_MIN;
volatile int8_t x226 = -1;
volatile uint32_t t53 = 14U;
volatile uint64_t x240 = 1857782425LLU;
static volatile int32_t x243 = -1576;
static int64_t t57 = -4LL;
int64_t x246 = -1LL;
uint16_t x250 = UINT16_MAX;
int64_t x251 = 1547LL;
volatile int32_t x253 = -3;
int8_t x256 = -20;
uint32_t x262 = 165228123U;
int64_t x264 = 2029354068070LL;
int8_t x265 = 27;
static volatile int16_t x268 = INT16_MIN;
int32_t t63 = 13;
uint8_t x276 = 62U;
static int32_t t67 = -14839;
int16_t x285 = -1;
static int32_t x291 = 2843304;
int32_t x294 = -1;
volatile int32_t x298 = 113;
static volatile uint8_t x307 = 90U;
uint64_t x310 = 0LLU;
uint32_t x313 = UINT32_MAX;
static uint16_t x319 = 3U;
int64_t x320 = INT64_MIN;
static uint64_t x321 = 402LLU;
int32_t x329 = -319068;
static int8_t x330 = INT8_MIN;
int64_t x338 = INT64_MIN;
int8_t x343 = INT8_MIN;
static int32_t x347 = -1;
uint32_t x355 = 4841249U;
volatile int16_t x357 = -1;
uint16_t x358 = 11512U;
uint16_t x359 = 10U;
volatile int32_t t87 = 66;
static int8_t x366 = INT8_MIN;
volatile int16_t x375 = -1;
uint32_t x378 = UINT32_MAX;
uint32_t x387 = UINT32_MAX;
uint64_t x389 = UINT64_MAX;
int16_t x392 = INT16_MAX;
int32_t t94 = -271;
int64_t x393 = INT64_MIN;


void f0(void) {
	int32_t x2 = 0;
	int64_t x3 = INT64_MAX;
	static uint64_t x4 = 1467889823821LLU;

	t0 = (((x1|x2)==x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int8_t x6 = -1;
	int32_t x7 = -3771;
	static int8_t x8 = INT8_MIN;

	t1 = (((x5|x6)==x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static uint16_t x11 = UINT16_MAX;
	int32_t t2 = -91275131;

	t2 = (((x9|x10)==x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	int64_t x15 = INT64_MIN;
	static volatile int64_t x16 = 3638110895430LL;
	int64_t t3 = 282897457262LL;

	t3 = (((x13|x14)==x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	int64_t x18 = -1LL;
	int64_t x19 = -1LL;
	volatile int32_t t4 = 224404269;

	t4 = (((x17|x18)==x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	static int8_t x22 = INT8_MIN;
	uint8_t x23 = 1U;
	int8_t x24 = INT8_MAX;

	t5 = (((x21|x22)==x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 385U;
	uint64_t x26 = UINT64_MAX;
	volatile int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MAX;

	t6 = (((x25|x26)==x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint32_t x30 = 122936U;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 20857LLU;

	t7 = (((x29|x30)==x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1101630630U;
	uint16_t x34 = UINT16_MAX;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = -433479;

	t8 = (((x33|x34)==x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -707;
	static int64_t x38 = INT64_MIN;
	volatile int64_t x39 = -1LL;
	int16_t x40 = 7387;
	int32_t t9 = -111543;

	t9 = (((x37|x38)==x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 9552814974LL;
	static int16_t x44 = INT16_MIN;

	t10 = (((x41|x42)==x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	volatile int32_t x46 = INT32_MIN;
	uint64_t x47 = 677689964566LLU;
	uint8_t x48 = 100U;

	t11 = (((x45|x46)==x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int8_t x50 = INT8_MIN;
	volatile int64_t x51 = 585483987LL;
	static volatile uint64_t t12 = 69116103150867048LLU;

	t12 = (((x49|x50)==x51)/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int32_t x54 = INT32_MIN;
	static int64_t x56 = INT64_MAX;

	t13 = (((x53|x54)==x55)/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MAX;
	static uint64_t x58 = 1761087879LLU;
	static int16_t x59 = INT16_MIN;
	volatile uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = 13727322U;

	t14 = (((x57|x58)==x59)/x60);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint8_t x62 = UINT8_MAX;
	int64_t x63 = INT64_MAX;
	int16_t x64 = INT16_MIN;

	t15 = (((x61|x62)==x63)/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint32_t x66 = 149U;
	int32_t x67 = 2399889;
	int16_t x68 = INT16_MAX;

	t16 = (((x65|x66)==x67)/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	volatile uint8_t x70 = 3U;
	int16_t x71 = INT16_MIN;
	int32_t x72 = -1;
	int32_t t17 = -8074040;

	t17 = (((x69|x70)==x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = 56;
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MIN;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 1998654729879993701LLU;

	t18 = (((x73|x74)==x75)/x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = INT32_MIN;
	static int32_t x78 = 56350;
	volatile int8_t x79 = -17;
	int64_t x80 = -333LL;
	volatile int64_t t19 = 1LL;

	t19 = (((x77|x78)==x79)/x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 2638086234025441LL;
	uint16_t x82 = 28896U;
	uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 58335296820LLU;

	t20 = (((x81|x82)==x83)/x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int16_t x86 = -365;
	uint64_t x87 = 884LLU;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -1781;

	t21 = (((x85|x86)==x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {


	t22 = (((x89|x90)==x91)/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x99 = UINT16_MAX;
	int8_t x100 = -1;
	int32_t t23 = 27783019;

	t23 = (((x97|x98)==x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 14U;
	uint64_t x102 = 85LLU;
	int16_t x103 = INT16_MIN;
	int8_t x104 = -1;

	t24 = (((x101|x102)==x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1426;
	int16_t x107 = -425;
	volatile uint8_t x108 = 82U;
	int32_t t25 = 106233543;

	t25 = (((x105|x106)==x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	int64_t t26 = 0LL;

	t26 = (((x109|x110)==x111)/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = 0;
	uint8_t x115 = UINT8_MAX;
	int32_t t27 = -26;

	t27 = (((x113|x114)==x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 16518U;
	int16_t x119 = -1;
	int64_t t28 = 2460091156562114329LL;

	t28 = (((x117|x118)==x119)/x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = 52;
	volatile uint64_t x122 = UINT64_MAX;
	int64_t x123 = INT64_MIN;
	int8_t x124 = -1;
	volatile int32_t t29 = -25;

	t29 = (((x121|x122)==x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	volatile uint8_t x127 = 20U;
	volatile int32_t t30 = 502103;

	t30 = (((x125|x126)==x127)/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MIN;
	int32_t x131 = 35534;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t31 = 369U;

	t31 = (((x129|x130)==x131)/x132);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = INT32_MAX;
	static uint8_t x134 = 1U;
	static volatile uint16_t x135 = 15U;
	static int16_t x136 = INT16_MAX;
	int32_t t32 = 14526053;

	t32 = (((x133|x134)==x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -954718;
	int64_t x138 = INT64_MAX;
	static uint64_t x139 = 117033466LLU;
	volatile int32_t t33 = 5;

	t33 = (((x137|x138)==x139)/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x142 = INT64_MIN;
	volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MIN;
	volatile int32_t t34 = 4052752;

	t34 = (((x141|x142)==x143)/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	int8_t x146 = -1;
	int32_t x147 = INT32_MAX;
	uint16_t x148 = 30U;

	t35 = (((x145|x146)==x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t36 = -16172686;

	t36 = (((x149|x150)==x151)/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = -1;
	uint32_t x158 = UINT32_MAX;
	int16_t x159 = -1;
	volatile int16_t x160 = -99;
	int32_t t37 = 227934440;

	t37 = (((x157|x158)==x159)/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x162 = UINT16_MAX;
	volatile int32_t x163 = 1607;
	uint32_t x164 = 14352798U;

	t38 = (((x161|x162)==x163)/x164);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x166 = 6055116408LLU;
	static volatile uint16_t x167 = 0U;
	volatile int32_t t39 = 461;

	t39 = (((x165|x166)==x167)/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 0LLU;
	uint32_t x170 = UINT32_MAX;
	int8_t x172 = INT8_MIN;

	t40 = (((x169|x170)==x171)/x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x173 = UINT64_MAX;
	volatile int64_t x174 = 14745216992667979LL;
	volatile uint32_t x175 = UINT32_MAX;
	volatile uint64_t t41 = 39125478182579283LLU;

	t41 = (((x173|x174)==x175)/x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x178 = 19U;
	uint8_t x179 = 28U;
	int32_t x180 = 82;

	t42 = (((x177|x178)==x179)/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x181 = 1844U;
	static volatile uint64_t x182 = 6375301160926LLU;
	static volatile int64_t x183 = -1LL;
	int32_t x184 = -1;
	int32_t t43 = 207892;

	t43 = (((x181|x182)==x183)/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = -1;
	volatile int64_t x187 = INT64_MAX;
	uint32_t x188 = 59U;
	static uint32_t t44 = 335492969U;

	t44 = (((x185|x186)==x187)/x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x190 = -23261;
	static volatile uint32_t x191 = 753548050U;
	volatile int64_t t45 = 8837828557302706LL;

	t45 = (((x189|x190)==x191)/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = INT64_MIN;
	int64_t x194 = -1LL;
	uint32_t x195 = 253252959U;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t46 = 125415093U;

	t46 = (((x193|x194)==x195)/x196);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = -13818;
	int32_t x198 = 1742583;
	int16_t x200 = -1;
	volatile int32_t t47 = -2410658;

	t47 = (((x197|x198)==x199)/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 197U;
	uint32_t x202 = 180U;
	static int32_t x203 = INT32_MIN;
	uint32_t x204 = 2U;
	static volatile uint32_t t48 = 99U;

	t48 = (((x201|x202)==x203)/x204);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -1;
	int32_t x206 = -1;
	int64_t x207 = -3740372LL;
	int32_t x208 = INT32_MIN;
	volatile int32_t t49 = -1;

	t49 = (((x205|x206)==x207)/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = UINT32_MAX;
	static int16_t x214 = -3;
	int32_t x215 = -1;
	int16_t x216 = 14621;
	volatile int32_t t50 = 3774558;

	t50 = (((x213|x214)==x215)/x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x218 = 2977507652401868LL;
	volatile uint8_t x219 = 34U;
	static volatile int32_t t51 = -104730310;

	t51 = (((x217|x218)==x219)/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = UINT8_MAX;
	int64_t x222 = INT64_MIN;
	volatile uint8_t x223 = 17U;
	uint64_t t52 = 21000868407079LLU;

	t52 = (((x221|x222)==x223)/x224);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x227 = -11554231427LL;
	uint32_t x228 = 1618U;

	t53 = (((x225|x226)==x227)/x228);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x229 = -788;
	int64_t x230 = INT64_MIN;
	static int8_t x231 = 17;
	int32_t x232 = 59137;
	static int32_t t54 = 236;

	t54 = (((x229|x230)==x231)/x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MIN;
	volatile int8_t x234 = 1;
	static volatile int64_t x235 = INT64_MIN;
	int64_t x236 = -29380LL;
	volatile int64_t t55 = -34102818061LL;

	t55 = (((x233|x234)==x235)/x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = -34;
	int16_t x238 = INT16_MIN;
	int16_t x239 = 30;
	volatile uint64_t t56 = 7101LLU;

	t56 = (((x237|x238)==x239)/x240);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = INT32_MAX;
	uint8_t x242 = 84U;
	int64_t x244 = -1LL;

	t57 = (((x241|x242)==x243)/x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = 43;
	static int32_t x247 = -1;
	int8_t x248 = -1;
	volatile int32_t t58 = -921;

	t58 = (((x245|x246)==x247)/x248);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x249 = 0;
	static int16_t x252 = INT16_MIN;
	static int32_t t59 = 6377794;

	t59 = (((x249|x250)==x251)/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x254 = INT32_MIN;
	uint32_t x255 = 26963728U;
	volatile int32_t t60 = -59065;

	t60 = (((x253|x254)==x255)/x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = INT32_MIN;
	int64_t x258 = 0LL;
	volatile int16_t x259 = INT16_MIN;
	static uint32_t x260 = 956933U;
	uint32_t t61 = 88955U;

	t61 = (((x257|x258)==x259)/x260);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x261 = 32489U;
	uint64_t x263 = 2223993379331041661LLU;
	volatile int64_t t62 = -6900977668043426LL;

	t62 = (((x261|x262)==x263)/x264);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x266 = 87770727U;
	static int32_t x267 = INT32_MIN;

	t63 = (((x265|x266)==x267)/x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = INT16_MIN;
	int32_t x270 = 10453;
	volatile int16_t x271 = INT16_MIN;
	uint32_t x272 = 9U;
	static volatile uint32_t t64 = 25158U;

	t64 = (((x269|x270)==x271)/x272);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x273 = 1704372451U;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = 856978183790359LL;
	int32_t t65 = -580;

	t65 = (((x273|x274)==x275)/x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = 29U;
	uint32_t x278 = 1497438U;
	int32_t x279 = 26;
	int64_t x280 = 2121LL;
	volatile int64_t t66 = -3261LL;

	t66 = (((x277|x278)==x279)/x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = INT64_MIN;
	static int32_t x282 = -1;
	int16_t x283 = INT16_MAX;
	int32_t x284 = -131002;

	t67 = (((x281|x282)==x283)/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x286 = 0;
	uint16_t x287 = 70U;
	volatile uint16_t x288 = 18U;
	volatile int32_t t68 = 2599553;

	t68 = (((x285|x286)==x287)/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = 1008717989002677LL;
	static volatile int16_t x290 = -51;
	volatile uint32_t x292 = 1862148U;
	volatile uint32_t t69 = 62U;

	t69 = (((x289|x290)==x291)/x292);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x293 = -1;
	static int16_t x295 = -2229;
	uint16_t x296 = 2400U;
	static volatile int32_t t70 = 1576;

	t70 = (((x293|x294)==x295)/x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x299 = INT8_MAX;
	volatile uint8_t x300 = 23U;
	volatile int32_t t71 = 21902593;

	t71 = (((x297|x298)==x299)/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MAX;
	uint32_t x302 = UINT32_MAX;
	int16_t x303 = INT16_MIN;
	volatile uint16_t x304 = UINT16_MAX;
	volatile int32_t t72 = -2446060;

	t72 = (((x301|x302)==x303)/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x305 = INT64_MAX;
	static uint32_t x306 = UINT32_MAX;
	int16_t x308 = 61;
	volatile int32_t t73 = -2606;

	t73 = (((x305|x306)==x307)/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = -1;
	static int32_t x311 = 131887001;
	volatile int64_t x312 = 1378LL;
	int64_t t74 = 126716590LL;

	t74 = (((x309|x310)==x311)/x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x314 = INT64_MIN;
	uint8_t x315 = 8U;
	static volatile int64_t x316 = INT64_MIN;
	volatile int64_t t75 = -103808269724670LL;

	t75 = (((x313|x314)==x315)/x316);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	uint32_t x318 = 5117U;
	static int64_t t76 = 466930958662LL;

	t76 = (((x317|x318)==x319)/x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x322 = UINT32_MAX;
	uint8_t x323 = 2U;
	int32_t x324 = -1137;
	int32_t t77 = 1091603;

	t77 = (((x321|x322)==x323)/x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = 18;
	int16_t x326 = -8;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t78 = -9;

	t78 = (((x325|x326)==x327)/x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x331 = INT16_MIN;
	uint8_t x332 = 116U;
	int32_t t79 = -18969332;

	t79 = (((x329|x330)==x331)/x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MAX;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -17;
	volatile int32_t t80 = 102;

	t80 = (((x333|x334)==x335)/x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x337 = -205219197LL;
	static int32_t x339 = INT32_MAX;
	int16_t x340 = INT16_MIN;
	volatile int32_t t81 = -1;

	t81 = (((x337|x338)==x339)/x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x341 = 40U;
	volatile int8_t x342 = INT8_MIN;
	uint8_t x344 = UINT8_MAX;
	int32_t t82 = 232;

	t82 = (((x341|x342)==x343)/x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = 18550621229624892LL;
	int32_t x346 = INT32_MAX;
	static uint8_t x348 = UINT8_MAX;
	volatile int32_t t83 = -77634;

	t83 = (((x345|x346)==x347)/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x349 = 1719454LLU;
	static int8_t x350 = 1;
	uint64_t x351 = 14983704038128LLU;
	static uint32_t x352 = 10325U;
	uint32_t t84 = 41505766U;

	t84 = (((x349|x350)==x351)/x352);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MIN;
	uint16_t x356 = UINT16_MAX;
	int32_t t85 = -746895;

	t85 = (((x353|x354)==x355)/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x360 = UINT8_MAX;
	int32_t t86 = 4004502;

	t86 = (((x357|x358)==x359)/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = 142577LL;
	volatile int16_t x362 = INT16_MIN;
	int32_t x363 = -1;
	static volatile int16_t x364 = -2;

	t87 = (((x361|x362)==x363)/x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MAX;
	int8_t x367 = 0;
	int64_t x368 = INT64_MIN;
	volatile int64_t t88 = 660LL;

	t88 = (((x365|x366)==x367)/x368);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x370 = UINT16_MAX;
	static int16_t x371 = INT16_MAX;
	volatile uint16_t x372 = UINT16_MAX;
	volatile int32_t t89 = -431;

	t89 = (((x369|x370)==x371)/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x373 = INT32_MIN;
	static int32_t x374 = INT32_MAX;
	int16_t x376 = INT16_MAX;
	volatile int32_t t90 = 358;

	t90 = (((x373|x374)==x375)/x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = -194;
	int64_t x379 = 21429LL;
	volatile uint16_t x380 = 41U;
	int32_t t91 = -814;

	t91 = (((x377|x378)==x379)/x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MAX;
	static int8_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	int64_t x384 = INT64_MAX;
	int64_t t92 = 18457037LL;

	t92 = (((x381|x382)==x383)/x384);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x385 = UINT32_MAX;
	volatile uint64_t x386 = 92LLU;
	static volatile uint64_t x388 = UINT64_MAX;
	volatile uint64_t t93 = 7LLU;

	t93 = (((x385|x386)==x387)/x388);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x390 = INT64_MIN;
	int64_t x391 = 1873771478LL;

	t94 = (((x389|x390)==x391)/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x394 = 1318U;
	int32_t x395 = -1;
	uint16_t x396 = UINT16_MAX;
	int32_t t95 = 265;

	t95 = (((x393|x394)==x395)/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	volatile int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MIN;
	int32_t t96 = -52537;

	t96 = (((x397|x398)==x399)/x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x401 = 1U;
	volatile int8_t x402 = 3;
	static volatile int16_t x403 = -92;
	int16_t x404 = INT16_MIN;
	volatile int32_t t97 = 72103;

	t97 = (((x401|x402)==x403)/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MIN;
	volatile uint64_t x407 = 67115450LLU;
	static int32_t x408 = INT32_MAX;
	int32_t t98 = -44;

	t98 = (((x405|x406)==x407)/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x409 = 34;
	volatile int16_t x410 = -84;
	volatile int16_t x411 = -11;
	int64_t x412 = 125846444447770007LL;
	volatile int64_t t99 = -1075LL;

	t99 = (((x409|x410)==x411)/x412);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

