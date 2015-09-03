#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = UINT64_MAX;
int16_t x4 = -35;
volatile int32_t t1 = 1;
volatile int8_t x16 = -5;
volatile int32_t t2 = 1461;
volatile int32_t t3 = 0;
int32_t t4 = -165491;
int16_t x26 = INT16_MIN;
uint16_t x28 = UINT16_MAX;
volatile int32_t x34 = 15732625;
int16_t x35 = INT16_MIN;
static uint64_t x42 = 15450054454LLU;
int8_t x47 = INT8_MAX;
static uint32_t x59 = 109190330U;
int8_t x61 = INT8_MAX;
int32_t x65 = INT32_MIN;
static uint16_t x66 = 0U;
volatile int64_t x71 = -1LL;
volatile int32_t x73 = INT32_MIN;
uint32_t x74 = 1015434U;
volatile int64_t x76 = -50588677915LL;
int8_t x80 = INT8_MAX;
static volatile uint32_t x93 = UINT32_MAX;
volatile int16_t x95 = INT16_MIN;
int64_t x98 = 31499061839032LL;
volatile int16_t x99 = INT16_MIN;
volatile int32_t t21 = 7938;
int8_t x102 = INT8_MAX;
volatile int32_t x126 = 10345499;
static uint8_t x164 = 0U;
static int32_t t33 = 4594;
static int32_t x170 = -1;
volatile int32_t t34 = 3229606;
int32_t x175 = -1;
int64_t x176 = -1LL;
volatile uint32_t x180 = 13178U;
uint64_t x183 = 2267742710376141327LLU;
int64_t x185 = INT64_MIN;
uint8_t x186 = 37U;
int8_t x192 = -1;
uint64_t x195 = 490LLU;
static volatile uint8_t x200 = UINT8_MAX;
int16_t x201 = INT16_MIN;
volatile int32_t t42 = 51;
volatile int16_t x218 = INT16_MAX;
uint32_t x220 = UINT32_MAX;
int32_t t46 = -1;
int64_t x221 = INT64_MAX;
int16_t x223 = 1;
volatile uint8_t x226 = 0U;
static int8_t x227 = -1;
int64_t x234 = INT64_MIN;
volatile uint16_t x235 = 1852U;
volatile int32_t t50 = -109569841;
uint64_t x238 = UINT64_MAX;
volatile int8_t x241 = INT8_MAX;
volatile int8_t x244 = INT8_MAX;
static uint32_t x246 = 53036064U;
static int16_t x250 = -1;
int8_t x253 = 6;
int64_t x259 = INT64_MIN;
static int64_t x265 = INT64_MAX;
volatile int32_t t63 = 63;
static uint64_t x296 = 1465671352LLU;
uint64_t x305 = 30283798LLU;
uint8_t x308 = 18U;
int32_t t70 = -7000636;
uint64_t x329 = UINT64_MAX;
uint16_t x348 = 1U;
volatile int32_t t76 = 21;
uint16_t x365 = 7737U;
static volatile uint64_t x375 = 47225147516549LLU;
volatile int32_t t83 = -3785075;
int32_t x382 = INT32_MIN;
int64_t x387 = INT64_MIN;
volatile int32_t t85 = 1970;
volatile int64_t x401 = -1LL;
int64_t x402 = INT64_MAX;
volatile uint8_t x407 = 1U;
volatile int32_t t89 = -165291869;
int8_t x412 = INT8_MIN;
volatile uint16_t x414 = 797U;
volatile int8_t x422 = INT8_MIN;
int64_t x426 = -95LL;
int64_t x427 = INT64_MIN;
static int32_t t93 = -266086797;
uint32_t x432 = 232U;
volatile int32_t t95 = 46557543;
int8_t x440 = INT8_MIN;
static int32_t t96 = 97183418;
int32_t x450 = INT32_MIN;
int32_t x451 = 6617;
int16_t x453 = -1563;
uint8_t x455 = UINT8_MAX;
int32_t t99 = -57;


void f0(void) {
	int32_t x2 = -1;
	uint16_t x3 = 1U;
	volatile int32_t t0 = 120111528;

	t0 = (x1<=(x2&(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 344U;
	int32_t x6 = INT32_MIN;
	uint32_t x7 = 4504570U;
	int16_t x8 = -603;

	t1 = (x5<=(x6&(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 208068080379LLU;
	int64_t x14 = -2179371LL;
	int64_t x15 = INT64_MIN;

	t2 = (x13<=(x14&(x15-x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = -1LL;
	static uint8_t x18 = 1U;
	uint64_t x19 = 161008189265307769LLU;
	uint16_t x20 = 14U;

	t3 = (x17<=(x18&(x19-x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	uint8_t x22 = 0U;
	uint16_t x23 = UINT16_MAX;
	static uint32_t x24 = 499033U;

	t4 = (x21<=(x22&(x23-x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = UINT64_MAX;
	int16_t x27 = -575;
	int32_t t5 = -590562516;

	t5 = (x25<=(x26&(x27-x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	static int32_t x30 = INT32_MIN;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = INT32_MIN;
	int32_t t6 = 12;

	t6 = (x29<=(x30&(x31-x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int16_t x36 = -892;
	volatile int32_t t7 = 362;

	t7 = (x33<=(x34&(x35-x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 28U;
	static volatile uint16_t x38 = UINT16_MAX;
	static volatile int8_t x39 = INT8_MAX;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t8 = 2216;

	t8 = (x37<=(x38&(x39-x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 1662U;
	int8_t x43 = 6;
	static volatile int16_t x44 = 17;
	static int32_t t9 = 1;

	t9 = (x41<=(x42&(x43-x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = 5814;
	int16_t x46 = INT16_MIN;
	int64_t x48 = -1LL;
	int32_t t10 = -3093;

	t10 = (x45<=(x46&(x47-x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -9638198864781LL;
	int32_t x50 = 927896;
	volatile int8_t x51 = -1;
	static int8_t x52 = INT8_MIN;
	int32_t t11 = -10;

	t11 = (x49<=(x50&(x51-x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x57 = INT16_MIN;
	uint64_t x58 = 1046912398361781LLU;
	int8_t x60 = INT8_MIN;
	volatile int32_t t12 = -415242;

	t12 = (x57<=(x58&(x59-x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x62 = -1;
	uint16_t x63 = UINT16_MAX;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t13 = 45814151;

	t13 = (x61<=(x62&(x63-x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x67 = INT32_MIN;
	int64_t x68 = -1LL;
	volatile int32_t t14 = 483159168;

	t14 = (x65<=(x66&(x67-x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -72806451325110LL;
	int64_t x70 = 21420832981163LL;
	uint32_t x72 = 14961U;
	int32_t t15 = -2866;

	t15 = (x69<=(x70&(x71-x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x75 = -1;
	volatile int32_t t16 = 59;

	t16 = (x73<=(x74&(x75-x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = 1;
	static uint64_t x78 = 48292072LLU;
	int32_t x79 = 106;
	volatile int32_t t17 = 6547;

	t17 = (x77<=(x78&(x79-x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	int64_t x84 = 6504LL;
	static int32_t t18 = -191;

	t18 = (x81<=(x82&(x83-x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MAX;
	static int16_t x86 = -1;
	static int64_t x87 = -237464055541LL;
	static uint32_t x88 = 2891307U;
	static int32_t t19 = -1;

	t19 = (x85<=(x86&(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x94 = 11800269;
	int32_t x96 = INT32_MIN;
	volatile int32_t t20 = 25009;

	t20 = (x93<=(x94&(x95-x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	int16_t x100 = 118;

	t21 = (x97<=(x98&(x99-x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = INT8_MIN;
	volatile uint8_t x103 = UINT8_MAX;
	static volatile uint64_t x104 = UINT64_MAX;
	int32_t t22 = -11;

	t22 = (x101<=(x102&(x103-x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x105 = 5542U;
	static int64_t x106 = 19LL;
	int8_t x107 = -22;
	int64_t x108 = INT64_MIN;
	static int32_t t23 = 22;

	t23 = (x105<=(x106&(x107-x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x109 = INT16_MIN;
	uint32_t x110 = 28U;
	uint64_t x111 = 3281645001183232059LLU;
	uint64_t x112 = 117794824968157LLU;
	volatile int32_t t24 = 365013346;

	t24 = (x109<=(x110&(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 22U;
	int8_t x114 = 0;
	int64_t x115 = INT64_MAX;
	volatile int32_t x116 = INT32_MAX;
	int32_t t25 = -50314;

	t25 = (x113<=(x114&(x115-x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 13U;
	static uint16_t x118 = 81U;
	int64_t x119 = 7407398139LL;
	static uint8_t x120 = 27U;
	volatile int32_t t26 = -2;

	t26 = (x117<=(x118&(x119-x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 0U;
	int32_t x122 = 1846783;
	int16_t x123 = -1;
	int8_t x124 = INT8_MAX;
	int32_t t27 = 270005;

	t27 = (x121<=(x122&(x123-x124)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x127 = 4538;
	volatile int32_t x128 = -1;
	int32_t t28 = -110;

	t28 = (x125<=(x126&(x127-x128)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = UINT8_MAX;
	uint32_t x134 = UINT32_MAX;
	static uint64_t x135 = 17495179209573086LLU;
	volatile int8_t x136 = INT8_MIN;
	static int32_t t29 = 849;

	t29 = (x133<=(x134&(x135-x136)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 6U;
	volatile int8_t x142 = 1;
	uint16_t x143 = 7100U;
	uint16_t x144 = UINT16_MAX;
	int32_t t30 = -1203;

	t30 = (x141<=(x142&(x143-x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x145 = 140916770730371855LL;
	int8_t x146 = -1;
	int64_t x147 = -15LL;
	int64_t x148 = -26031935347LL;
	int32_t t31 = 7960;

	t31 = (x145<=(x146&(x147-x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	volatile int32_t x150 = 344398902;
	uint32_t x151 = 3462U;
	int16_t x152 = INT16_MAX;
	int32_t t32 = -13392;

	t32 = (x149<=(x150&(x151-x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = 15604083181745LL;
	uint8_t x162 = 5U;
	static int8_t x163 = INT8_MIN;

	t33 = (x161<=(x162&(x163-x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x169 = -50;
	int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MAX;

	t34 = (x169<=(x170&(x171-x172)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x173 = INT64_MAX;
	int64_t x174 = 19034103627385LL;
	static int32_t t35 = -324185010;

	t35 = (x173<=(x174&(x175-x176)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = 3342105130175LL;
	static int32_t x178 = -145458710;
	volatile int32_t x179 = 25;
	static int32_t t36 = 5;

	t36 = (x177<=(x178&(x179-x180)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = -145;
	int8_t x182 = -1;
	int8_t x184 = INT8_MIN;
	volatile int32_t t37 = 1;

	t37 = (x181<=(x182&(x183-x184)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x187 = 0U;
	int16_t x188 = 5;
	int32_t t38 = 0;

	t38 = (x185<=(x186&(x187-x188)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = INT32_MIN;
	uint8_t x190 = 20U;
	static int64_t x191 = INT64_MIN;
	volatile int32_t t39 = 808;

	t39 = (x189<=(x190&(x191-x192)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x193 = INT64_MIN;
	uint32_t x194 = 1141U;
	static volatile int32_t x196 = INT32_MIN;
	volatile int32_t t40 = 617;

	t40 = (x193<=(x194&(x195-x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = INT32_MAX;
	static int32_t x198 = INT32_MAX;
	uint32_t x199 = UINT32_MAX;
	int32_t t41 = -482543505;

	t41 = (x197<=(x198&(x199-x200)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x202 = INT32_MAX;
	volatile int64_t x203 = -1LL;
	int32_t x204 = -1;

	t42 = (x201<=(x202&(x203-x204)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = -54261605631LL;
	int8_t x206 = INT8_MIN;
	static uint8_t x207 = 3U;
	int16_t x208 = INT16_MIN;
	int32_t t43 = 1;

	t43 = (x205<=(x206&(x207-x208)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = INT64_MIN;
	static uint32_t x210 = 6272U;
	volatile uint32_t x211 = 11U;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t44 = 11232056;

	t44 = (x209<=(x210&(x211-x212)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = INT32_MIN;
	int32_t x214 = INT32_MAX;
	volatile int16_t x215 = -1;
	int64_t x216 = 1338LL;
	volatile int32_t t45 = 135726;

	t45 = (x213<=(x214&(x215-x216)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x217 = -1LL;
	int32_t x219 = INT32_MIN;

	t46 = (x217<=(x218&(x219-x220)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x222 = INT64_MIN;
	volatile int8_t x224 = 1;
	static int32_t t47 = 107050;

	t47 = (x221<=(x222&(x223-x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MIN;
	uint16_t x228 = 13361U;
	int32_t t48 = 19;

	t48 = (x225<=(x226&(x227-x228)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x229 = 17U;
	int8_t x230 = INT8_MIN;
	static int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t49 = -4026890;

	t49 = (x229<=(x230&(x231-x232)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;

	t50 = (x233<=(x234&(x235-x236)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = 13;
	int16_t x239 = INT16_MIN;
	volatile int64_t x240 = -14667LL;
	volatile int32_t t51 = -46;

	t51 = (x237<=(x238&(x239-x240)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x242 = -4437;
	uint16_t x243 = 320U;
	static int32_t t52 = 1491418;

	t52 = (x241<=(x242&(x243-x244)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = INT64_MAX;
	static uint64_t x247 = 1397853403301350LLU;
	uint16_t x248 = UINT16_MAX;
	static volatile int32_t t53 = 1596;

	t53 = (x245<=(x246&(x247-x248)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = -24;
	uint32_t x251 = 22U;
	uint16_t x252 = 4780U;
	volatile int32_t t54 = 9;

	t54 = (x249<=(x250&(x251-x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 242832781U;
	int16_t x256 = 59;
	static volatile int32_t t55 = -8462598;

	t55 = (x253<=(x254&(x255-x256)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x258 = INT32_MAX;
	int16_t x260 = INT16_MIN;
	volatile int32_t t56 = -628709366;

	t56 = (x257<=(x258&(x259-x260)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = INT8_MIN;
	int32_t x262 = -29767609;
	static volatile int8_t x263 = INT8_MIN;
	uint32_t x264 = 2315U;
	volatile int32_t t57 = 201;

	t57 = (x261<=(x262&(x263-x264)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x266 = -1465471666578089LL;
	int8_t x267 = INT8_MIN;
	static int32_t x268 = -1;
	static int32_t t58 = 2113260;

	t58 = (x265<=(x266&(x267-x268)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x273 = -428973563572LL;
	volatile int32_t x274 = INT32_MIN;
	int16_t x275 = 68;
	int32_t x276 = -1;
	int32_t t59 = 694456635;

	t59 = (x273<=(x274&(x275-x276)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = -1;
	int16_t x279 = 0;
	int16_t x280 = INT16_MIN;
	int32_t t60 = -9626990;

	t60 = (x277<=(x278&(x279-x280)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = 35U;
	static volatile int64_t x282 = INT64_MAX;
	volatile int8_t x283 = INT8_MIN;
	static uint64_t x284 = 3847147423076LLU;
	volatile int32_t t61 = 1299230;

	t61 = (x281<=(x282&(x283-x284)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = 34097;
	int16_t x286 = INT16_MIN;
	static uint32_t x287 = UINT32_MAX;
	uint8_t x288 = 55U;
	volatile int32_t t62 = 84168;

	t62 = (x285<=(x286&(x287-x288)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x289 = UINT16_MAX;
	uint16_t x290 = 88U;
	int64_t x291 = -1LL;
	int8_t x292 = INT8_MIN;

	t63 = (x289<=(x290&(x291-x292)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x293 = INT16_MAX;
	int32_t x294 = 911;
	static uint32_t x295 = UINT32_MAX;
	int32_t t64 = -19290273;

	t64 = (x293<=(x294&(x295-x296)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x297 = INT32_MIN;
	volatile int32_t x298 = -27;
	static volatile uint32_t x299 = 59938170U;
	static int16_t x300 = -1;
	static int32_t t65 = -392;

	t65 = (x297<=(x298&(x299-x300)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x301 = 0U;
	static int16_t x302 = 0;
	int32_t x303 = 303839588;
	int16_t x304 = INT16_MIN;
	volatile int32_t t66 = 4;

	t66 = (x301<=(x302&(x303-x304)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x306 = INT64_MAX;
	int64_t x307 = INT64_MAX;
	volatile int32_t t67 = -2363966;

	t67 = (x305<=(x306&(x307-x308)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x309 = 30;
	volatile int32_t x310 = INT32_MIN;
	int32_t x311 = -1;
	uint64_t x312 = 33593244786431LLU;
	int32_t t68 = 1195398;

	t68 = (x309<=(x310&(x311-x312)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x317 = 0;
	uint64_t x318 = 9214039958LLU;
	volatile uint16_t x319 = UINT16_MAX;
	volatile int16_t x320 = INT16_MIN;
	int32_t t69 = 0;

	t69 = (x317<=(x318&(x319-x320)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	volatile uint32_t x323 = 7667235U;
	int16_t x324 = INT16_MIN;

	t70 = (x321<=(x322&(x323-x324)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x330 = 4;
	int8_t x331 = -1;
	volatile int8_t x332 = 7;
	volatile int32_t t71 = -102073;

	t71 = (x329<=(x330&(x331-x332)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = -1;
	int32_t x334 = -476;
	uint32_t x335 = 53412U;
	static int16_t x336 = 196;
	int32_t t72 = -1;

	t72 = (x333<=(x334&(x335-x336)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = 183650282LLU;
	int16_t x338 = INT16_MAX;
	static uint16_t x339 = 8216U;
	volatile uint64_t x340 = UINT64_MAX;
	int32_t t73 = 144542;

	t73 = (x337<=(x338&(x339-x340)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x341 = 256398140LLU;
	volatile int16_t x342 = INT16_MIN;
	static int16_t x343 = -1;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t74 = 1;

	t74 = (x341<=(x342&(x343-x344)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x345 = UINT16_MAX;
	uint32_t x346 = UINT32_MAX;
	uint64_t x347 = 37492413LLU;
	volatile int32_t t75 = -767;

	t75 = (x345<=(x346&(x347-x348)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x349 = INT64_MAX;
	uint64_t x350 = 874869548229943174LLU;
	uint16_t x351 = 290U;
	uint16_t x352 = 80U;

	t76 = (x349<=(x350&(x351-x352)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = -1LL;
	static uint16_t x355 = 1362U;
	static int32_t x356 = -954816;
	volatile int32_t t77 = 258373;

	t77 = (x353<=(x354&(x355-x356)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = 573957281407942509LL;
	int32_t x358 = -1;
	int16_t x359 = 42;
	uint16_t x360 = 7U;
	volatile int32_t t78 = -114;

	t78 = (x357<=(x358&(x359-x360)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x361 = 3LLU;
	int64_t x362 = INT64_MAX;
	volatile uint16_t x363 = 1744U;
	static int16_t x364 = -1;
	volatile int32_t t79 = 1;

	t79 = (x361<=(x362&(x363-x364)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x366 = -1;
	int64_t x367 = INT64_MIN;
	volatile int8_t x368 = -1;
	volatile int32_t t80 = 17;

	t80 = (x365<=(x366&(x367-x368)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = INT16_MAX;
	uint32_t x370 = 4021U;
	int16_t x371 = INT16_MAX;
	volatile uint16_t x372 = UINT16_MAX;
	volatile int32_t t81 = 1;

	t81 = (x369<=(x370&(x371-x372)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = -18;
	int16_t x374 = 6;
	int64_t x376 = INT64_MAX;
	volatile int32_t t82 = 680697;

	t82 = (x373<=(x374&(x375-x376)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = -1;
	static int16_t x378 = INT16_MIN;
	int16_t x379 = 2281;
	int16_t x380 = INT16_MAX;

	t83 = (x377<=(x378&(x379-x380)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x381 = 10;
	int8_t x383 = -3;
	int8_t x384 = INT8_MIN;
	int32_t t84 = 2036;

	t84 = (x381<=(x382&(x383-x384)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = 2288;
	uint32_t x386 = UINT32_MAX;
	int16_t x388 = INT16_MIN;

	t85 = (x385<=(x386&(x387-x388)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MAX;
	int64_t x395 = 158241935111LL;
	volatile int64_t x396 = -1LL;
	volatile int32_t t86 = -1;

	t86 = (x393<=(x394&(x395-x396)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = -1;
	volatile int16_t x398 = INT16_MIN;
	volatile uint32_t x399 = 130684U;
	volatile uint64_t x400 = 275539377109604LLU;
	int32_t t87 = -7417;

	t87 = (x397<=(x398&(x399-x400)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x403 = UINT32_MAX;
	volatile int8_t x404 = INT8_MIN;
	volatile int32_t t88 = -1842341;

	t88 = (x401<=(x402&(x403-x404)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = 449158091U;
	uint16_t x406 = UINT16_MAX;
	int8_t x408 = -1;

	t89 = (x405<=(x406&(x407-x408)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x409 = 25U;
	int64_t x410 = -344LL;
	volatile uint32_t x411 = UINT32_MAX;
	int32_t t90 = -469857964;

	t90 = (x409<=(x410&(x411-x412)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x413 = -1;
	int64_t x415 = INT64_MIN;
	int16_t x416 = -1;
	int32_t t91 = -563;

	t91 = (x413<=(x414&(x415-x416)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x421 = 5U;
	static int16_t x423 = -91;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t92 = -3122;

	t92 = (x421<=(x422&(x423-x424)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x425 = UINT8_MAX;
	uint64_t x428 = 1862443400937659LLU;

	t93 = (x425<=(x426&(x427-x428)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x429 = INT16_MIN;
	volatile int16_t x430 = -1;
	static uint32_t x431 = 113U;
	int32_t t94 = -53205304;

	t94 = (x429<=(x430&(x431-x432)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x433 = INT8_MIN;
	volatile int32_t x434 = -51;
	static volatile uint8_t x435 = 13U;
	static int16_t x436 = INT16_MIN;

	t95 = (x433<=(x434&(x435-x436)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x437 = INT8_MIN;
	volatile int16_t x438 = -1;
	int32_t x439 = INT32_MIN;

	t96 = (x437<=(x438&(x439-x440)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = -1LL;
	uint8_t x442 = UINT8_MAX;
	static uint16_t x443 = 5U;
	static int64_t x444 = -1LL;
	static volatile int32_t t97 = 46337;

	t97 = (x441<=(x442&(x443-x444)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = -1;
	static int32_t x452 = -7;
	int32_t t98 = -22175256;

	t98 = (x449<=(x450&(x451-x452)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x454 = UINT64_MAX;
	volatile int8_t x456 = INT8_MAX;

	t99 = (x453<=(x454&(x455-x456)));

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

