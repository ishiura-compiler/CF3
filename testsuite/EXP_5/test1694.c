#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = 296786229164LLU;
int8_t x7 = 1;
uint16_t x11 = UINT16_MAX;
static int32_t x22 = INT32_MAX;
int64_t x23 = INT64_MAX;
volatile uint32_t x42 = 10U;
uint8_t x44 = 85U;
uint32_t t8 = 81U;
int16_t x49 = INT16_MIN;
static volatile uint64_t t11 = 21649860017493516LLU;
int16_t x58 = INT16_MAX;
int64_t x62 = -24215827744137625LL;
uint8_t x65 = 0U;
uint32_t x68 = 3U;
static volatile int64_t t15 = -155LL;
static volatile uint16_t x73 = 169U;
int64_t x74 = -1LL;
volatile uint64_t t17 = 158623LLU;
uint64_t t18 = 149539152811992LLU;
static uint64_t x86 = 16144756963LLU;
volatile int64_t x88 = -1LL;
int64_t x93 = INT64_MIN;
volatile int64_t t21 = -7093538470961629LL;
int16_t x97 = 14;
volatile int16_t x99 = -1;
uint64_t t23 = 2025LLU;
int8_t x114 = -3;
uint16_t x125 = 1212U;
uint16_t x126 = 15347U;
int64_t x140 = INT64_MAX;
uint8_t x141 = 24U;
int16_t x148 = INT16_MIN;
int64_t t32 = -652141LL;
static int32_t x149 = INT32_MIN;
int8_t x150 = INT8_MIN;
int8_t x151 = -1;
int16_t x162 = INT16_MIN;
int8_t x163 = -3;
int32_t x173 = -1;
static volatile int8_t x174 = 54;
static volatile int64_t x178 = INT64_MIN;
static int32_t x182 = -717070;
static volatile int16_t x184 = -33;
int8_t x188 = INT8_MIN;
static uint8_t x190 = UINT8_MAX;
uint64_t x191 = 134369694721LLU;
uint32_t x201 = 797232U;
volatile int32_t x206 = INT32_MAX;
uint64_t t45 = 13719LLU;
uint8_t x213 = 6U;
int8_t x215 = 1;
int64_t x218 = INT64_MAX;
static volatile int16_t x224 = INT16_MAX;
int32_t x229 = -13829;
volatile uint64_t t51 = 218LLU;
int32_t x238 = -1;
static volatile int32_t t54 = 33410622;
uint32_t x250 = UINT32_MAX;
static volatile int16_t x251 = -1;
int64_t x252 = -1LL;
uint32_t x255 = 1944146634U;
int32_t x273 = INT32_MIN;
volatile int32_t t61 = 912;
int32_t x281 = -3140377;
static int32_t t63 = 2193541;
volatile uint8_t x292 = UINT8_MAX;
volatile int32_t x311 = INT32_MAX;
int64_t x312 = 22254733957LL;
volatile int64_t t68 = 285395259498564LL;
volatile int32_t t69 = 0;
static volatile uint32_t t70 = 325197U;
int16_t x326 = INT16_MAX;
int8_t x332 = INT8_MIN;
static int16_t x336 = INT16_MAX;
static int32_t x341 = -1;
static volatile int64_t x342 = 51LL;
static uint64_t x345 = 19141917961130253LLU;
volatile int64_t x348 = INT64_MIN;
int64_t x349 = INT64_MIN;
static int8_t x354 = 3;
volatile int16_t x356 = INT16_MAX;
int16_t x363 = -115;
volatile int32_t t84 = 280409182;
int16_t x383 = INT16_MIN;
volatile int64_t t86 = 13917868LL;
uint8_t x386 = 43U;
int32_t x389 = INT32_MAX;
static volatile int8_t x395 = INT8_MAX;
int16_t x401 = INT16_MIN;
volatile uint8_t x411 = 0U;
volatile uint64_t x416 = UINT64_MAX;
uint64_t x428 = 1854LLU;
int8_t x434 = INT8_MAX;
int64_t x435 = INT64_MIN;
int32_t x437 = INT32_MIN;
int32_t x439 = -64227518;
int64_t x443 = INT64_MIN;


void f0(void) {
	int32_t x1 = -1;
	uint8_t x2 = 40U;
	volatile int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 240119LLU;

	t0 = (x1/((x2&x3)+x4));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 207U;
	int64_t x6 = -1LL;
	uint64_t x8 = 12742248014LLU;
	volatile uint64_t t1 = 4023921158175LLU;

	t1 = (x5/((x6&x7)+x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 3U;
	static int16_t x10 = INT16_MAX;
	static uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 385U;

	t2 = (x9/((x10&x11)+x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	int8_t x14 = INT8_MIN;
	volatile int16_t x15 = INT16_MAX;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -1;

	t3 = (x13/((x14&x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x18 = 747LL;
	int32_t x19 = -2;
	int32_t x20 = INT32_MAX;
	volatile int64_t t4 = 4210017727589974LL;

	t4 = (x17/((x18&x19)+x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -28865663;
	int32_t x24 = 426370136;
	volatile int64_t t5 = -2LL;

	t5 = (x21/((x22&x23)+x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int8_t x26 = INT8_MIN;
	int32_t x27 = -115747353;
	static int32_t x28 = -378568603;
	volatile int32_t t6 = -15431171;

	t6 = (x25/((x26&x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x33 = 89325902;
	int32_t x34 = -1;
	int64_t x35 = INT64_MIN;
	uint32_t x36 = UINT32_MAX;
	volatile int64_t t7 = 4628711330LL;

	t7 = (x33/((x34&x35)+x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 237929288U;
	volatile int16_t x43 = INT16_MAX;

	t8 = (x41/((x42&x43)+x44));

	if (t8 != 2504518U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = INT32_MIN;
	static uint16_t x46 = 15U;
	int64_t x47 = 216385LL;
	static int16_t x48 = 1;
	volatile int64_t t9 = 310446976LL;

	t9 = (x45/((x46&x47)+x48));

	if (t9 != -1073741824LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x50 = 13U;
	int64_t x51 = -62402496LL;
	static volatile int32_t x52 = -13211220;
	int64_t t10 = 1326431LL;

	t10 = (x49/((x50&x51)+x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 73884993582LLU;
	static volatile uint16_t x54 = 23U;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = INT8_MIN;

	t11 = (x53/((x54&x55)+x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -84107;
	uint32_t x59 = UINT32_MAX;
	volatile uint32_t x60 = 108U;
	volatile uint32_t t12 = 229787281U;

	t12 = (x57/((x58&x59)+x60));

	if (t12 != 130642U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = UINT64_MAX;
	uint64_t x63 = 15957576562LLU;
	static int32_t x64 = INT32_MAX;
	uint64_t t13 = 242900022927LLU;

	t13 = (x61/((x62&x63)+x64));

	if (t13 != 2515948422LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x66 = 5U;
	static uint8_t x67 = UINT8_MAX;
	uint32_t t14 = 286793231U;

	t14 = (x65/((x66&x67)+x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	int64_t x70 = 3785105511LL;
	int8_t x71 = INT8_MIN;
	uint32_t x72 = 1145557U;

	t15 = (x69/((x70&x71)+x72));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x75 = 7U;
	int64_t x76 = -1558436LL;
	volatile int64_t t16 = 3042643354287537314LL;

	t16 = (x73/((x74&x75)+x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x77 = 264587566809580447LLU;
	int64_t x78 = -6LL;
	volatile uint8_t x79 = 48U;
	static int64_t x80 = 384495065LL;

	t17 = (x77/((x78&x79)+x80));

	if (t17 != 688142860LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = UINT64_MAX;
	int16_t x82 = INT16_MIN;
	static int64_t x83 = 33196647302LL;
	uint16_t x84 = UINT16_MAX;

	t18 = (x81/((x82&x83)+x84));

	if (t18 != 555679992LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = -1;
	static volatile int32_t x87 = -1;
	static uint64_t t19 = 1032189054432340725LLU;

	t19 = (x85/((x86&x87)+x88));

	if (t19 != 1142584191LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x89 = INT16_MAX;
	volatile int32_t x90 = INT32_MIN;
	uint16_t x91 = UINT16_MAX;
	int8_t x92 = INT8_MAX;
	volatile int32_t t20 = 356;

	t20 = (x89/((x90&x91)+x92));

	if (t20 != 258) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x94 = UINT32_MAX;
	int64_t x95 = -71559768LL;
	int16_t x96 = -1;

	t21 = (x93/((x94&x95)+x96));

	if (t21 != -2183869772LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x98 = INT8_MIN;
	int8_t x100 = INT8_MAX;
	volatile int32_t t22 = -14936;

	t22 = (x97/((x98&x99)+x100));

	if (t22 != -14) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = INT8_MAX;
	volatile int64_t x103 = INT64_MIN;
	volatile uint64_t x104 = 6LLU;

	t23 = (x101/((x102&x103)+x104));

	if (t23 != 3074457345260344661LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	static int32_t x106 = -43;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = 0LL;
	int64_t t24 = 152LL;

	t24 = (x105/((x106&x107)+x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MIN;
	static volatile int32_t x111 = INT32_MIN;
	uint16_t x112 = 1427U;
	int32_t t25 = -1;

	t25 = (x109/((x110&x111)+x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = -1;
	int16_t x115 = 60;
	static int64_t x116 = INT64_MIN;
	static volatile int64_t t26 = 6LL;

	t26 = (x113/((x114&x115)+x116));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x121 = UINT32_MAX;
	volatile int32_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	static int64_t x124 = INT64_MIN;
	volatile int64_t t27 = 12LL;

	t27 = (x121/((x122&x123)+x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x127 = INT16_MIN;
	static int32_t x128 = 6201;
	volatile int32_t t28 = 1;

	t28 = (x125/((x126&x127)+x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x129 = 62U;
	static int64_t x130 = -13101599030463LL;
	static uint16_t x131 = 18818U;
	uint16_t x132 = 15U;
	static volatile int64_t t29 = -90914LL;

	t29 = (x129/((x130&x131)+x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int8_t x138 = INT8_MIN;
	volatile int16_t x139 = INT16_MIN;
	static uint64_t t30 = 33656790766LLU;

	t30 = (x137/((x138&x139)+x140));

	if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = INT16_MIN;
	volatile int64_t x143 = -1511741572891340LL;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t31 = -975022184863391520LL;

	t31 = (x141/((x142&x143)+x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MAX;
	volatile int16_t x146 = 0;
	int64_t x147 = INT64_MIN;

	t32 = (x145/((x146&x147)+x148));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x152 = -3385398459875LL;
	int64_t t33 = 1246299356037803LL;

	t33 = (x149/((x150&x151)+x152));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MAX;
	int64_t x154 = INT64_MIN;
	int64_t x155 = -1LL;
	int32_t x156 = 89;
	volatile int64_t t34 = 59LL;

	t34 = (x153/((x154&x155)+x156));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = -47610;
	int64_t x158 = 0LL;
	int8_t x159 = 11;
	uint16_t x160 = 6741U;
	int64_t t35 = -1LL;

	t35 = (x157/((x158&x159)+x160));

	if (t35 != -7LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x161 = -1;
	int32_t x164 = 62553;
	int32_t t36 = -126375736;

	t36 = (x161/((x162&x163)+x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = INT64_MAX;
	volatile uint32_t x170 = 31275U;
	int64_t x171 = INT64_MIN;
	uint64_t x172 = 161093996211112LLU;
	uint64_t t37 = 274893055622955LLU;

	t37 = (x169/((x170&x171)+x172));

	if (t37 != 57254LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x175 = 909282U;
	int8_t x176 = INT8_MIN;
	volatile uint32_t t38 = 89U;

	t38 = (x173/((x174&x175)+x176));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x177 = UINT32_MAX;
	uint16_t x179 = 4U;
	int64_t x180 = -1LL;
	static int64_t t39 = -675202209367485LL;

	t39 = (x177/((x178&x179)+x180));

	if (t39 != -4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MAX;
	static uint16_t x183 = 3296U;
	volatile int32_t t40 = -6808827;

	t40 = (x181/((x182&x183)+x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = -3;
	uint16_t x186 = 574U;
	int32_t x187 = -53;
	volatile int32_t t41 = 352810;

	t41 = (x185/((x186&x187)+x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x189 = 3088U;
	uint32_t x192 = 2712U;
	static uint64_t t42 = 2072160693LLU;

	t42 = (x189/((x190&x191)+x192));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = 59;
	static int64_t x194 = INT64_MIN;
	static int16_t x195 = INT16_MIN;
	static uint64_t x196 = 2294457991042547LLU;
	volatile uint64_t t43 = 108551995LLU;

	t43 = (x193/((x194&x195)+x196));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x202 = -45;
	uint16_t x203 = 376U;
	static int16_t x204 = INT16_MAX;
	volatile uint32_t t44 = 434378U;

	t44 = (x201/((x202&x203)+x204));

	if (t44 != 24U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = INT8_MIN;
	uint64_t x207 = 98LLU;
	volatile int64_t x208 = -1LL;

	t45 = (x205/((x206&x207)+x208));

	if (t45 != 190172619316593314LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = -7;
	static int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MIN;
	static uint16_t x212 = 4U;
	int64_t t46 = -2142826972871LL;

	t46 = (x209/((x210&x211)+x212));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x214 = INT8_MIN;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t47 = -14647;

	t47 = (x213/((x214&x215)+x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = UINT16_MAX;
	int64_t x219 = INT64_MAX;
	int64_t x220 = -1282133989723892LL;
	static int64_t t48 = 6185885LL;

	t48 = (x217/((x218&x219)+x220));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = -382LL;
	uint64_t x222 = UINT64_MAX;
	int8_t x223 = INT8_MIN;
	static volatile uint64_t t49 = 933LLU;

	t49 = (x221/((x222&x223)+x224));

	if (t49 != 565174915705430LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = -39LL;
	static int64_t x226 = INT64_MIN;
	static int8_t x227 = INT8_MIN;
	uint32_t x228 = 2042939963U;
	volatile int64_t t50 = 1546909799838301LL;

	t50 = (x225/((x226&x227)+x228));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x230 = INT8_MIN;
	volatile uint16_t x231 = UINT16_MAX;
	volatile uint64_t x232 = UINT64_MAX;

	t51 = (x229/((x230&x231)+x232));

	if (t51 != 282030120227338LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = INT64_MAX;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t52 = 80013916LLU;

	t52 = (x237/((x238&x239)+x240));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = UINT16_MAX;
	int16_t x242 = INT16_MIN;
	uint32_t x243 = 7238448U;
	uint32_t x244 = 2U;
	volatile uint32_t t53 = 6U;

	t53 = (x241/((x242&x243)+x244));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = 3U;
	static int8_t x246 = INT8_MAX;
	static int16_t x247 = -1;
	static uint8_t x248 = 0U;

	t54 = (x245/((x246&x247)+x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MAX;
	volatile int64_t t55 = -4175970161885935282LL;

	t55 = (x249/((x250&x251)+x252));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = INT8_MIN;
	uint32_t x254 = UINT32_MAX;
	static volatile uint16_t x256 = 5315U;
	volatile uint32_t t56 = 72U;

	t56 = (x253/((x254&x255)+x256));

	if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x257 = INT64_MIN;
	static int16_t x258 = 87;
	int64_t x259 = -1LL;
	uint16_t x260 = 72U;
	int64_t t57 = -5766LL;

	t57 = (x257/((x258&x259)+x260));

	if (t57 != -58008629162608652LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = 0U;
	uint16_t x262 = 2U;
	int64_t x263 = 123295LL;
	uint64_t x264 = 36616848LLU;
	volatile uint64_t t58 = 4096LLU;

	t58 = (x261/((x262&x263)+x264));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x265 = 1U;
	uint16_t x266 = 20916U;
	int64_t x267 = -1LL;
	uint32_t x268 = UINT32_MAX;
	volatile int64_t t59 = 176463003209453LL;

	t59 = (x265/((x266&x267)+x268));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = 3U;
	volatile int8_t x270 = -1;
	int8_t x271 = 21;
	int32_t x272 = -971079;
	volatile uint32_t t60 = 19075373U;

	t60 = (x269/((x270&x271)+x272));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x274 = 50;
	volatile int32_t x275 = 331;
	int16_t x276 = INT16_MIN;

	t61 = (x273/((x274&x275)+x276));

	if (t61 != 65540) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x277 = INT8_MIN;
	uint16_t x278 = 5524U;
	volatile int8_t x279 = -1;
	uint64_t x280 = 430923993677LLU;
	volatile uint64_t t62 = 7182109638LLU;

	t62 = (x277/((x278&x279)+x280));

	if (t62 != 42807418LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x282 = -53;
	int32_t x283 = -129454;
	static uint8_t x284 = UINT8_MAX;

	t63 = (x281/((x282&x283)+x284));

	if (t63 != 24) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x285 = 2;
	static uint32_t x286 = UINT32_MAX;
	int64_t x287 = INT64_MAX;
	int32_t x288 = INT32_MAX;
	static int64_t t64 = -497LL;

	t64 = (x285/((x286&x287)+x288));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = -51;
	static uint8_t x290 = 23U;
	static int16_t x291 = 7469;
	volatile int32_t t65 = 6;

	t65 = (x289/((x290&x291)+x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x297 = INT16_MAX;
	int32_t x298 = 141779858;
	int32_t x299 = -72;
	volatile int64_t x300 = 232762495225867245LL;
	int64_t t66 = -652151095762141468LL;

	t66 = (x297/((x298&x299)+x300));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x301 = 31026366523606LLU;
	int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	static int64_t x304 = 0LL;
	uint64_t t67 = 7684590227582LLU;

	t67 = (x301/((x302&x303)+x304));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x309 = 1U;
	int32_t x310 = INT32_MAX;

	t68 = (x309/((x310&x311)+x312));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MIN;
	static int32_t x314 = -1046584;
	uint16_t x315 = 2579U;
	int8_t x316 = INT8_MIN;

	t69 = (x313/((x314&x315)+x316));

	if (t69 != -5592405) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x317 = UINT16_MAX;
	volatile int16_t x318 = INT16_MIN;
	static uint32_t x319 = 5U;
	int32_t x320 = -1;

	t70 = (x317/((x318&x319)+x320));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = INT8_MIN;
	int16_t x322 = -1;
	static int16_t x323 = INT16_MIN;
	int8_t x324 = -1;
	int32_t t71 = -521191;

	t71 = (x321/((x322&x323)+x324));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x325 = -3;
	uint16_t x327 = 407U;
	uint16_t x328 = UINT16_MAX;
	int32_t t72 = -170834063;

	t72 = (x325/((x326&x327)+x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MIN;
	static int32_t t73 = 0;

	t73 = (x329/((x330&x331)+x332));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x333 = 53U;
	int16_t x334 = INT16_MIN;
	uint64_t x335 = 7619917640043303LLU;
	volatile uint64_t t74 = 52146777810998LLU;

	t74 = (x333/((x334&x335)+x336));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x337 = INT64_MAX;
	int64_t x338 = INT64_MIN;
	int8_t x339 = INT8_MAX;
	static int32_t x340 = -1;
	static volatile int64_t t75 = 31922102530LL;

	t75 = (x337/((x338&x339)+x340));

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x343 = 1;
	volatile int32_t x344 = INT32_MAX;
	static volatile int64_t t76 = 231413962442644LL;

	t76 = (x341/((x342&x343)+x344));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x346 = -3592803;
	uint8_t x347 = 61U;
	static uint64_t t77 = 55020LLU;

	t77 = (x345/((x346&x347)+x348));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x350 = 14717;
	volatile int32_t x351 = INT32_MAX;
	static uint16_t x352 = 568U;
	volatile int64_t t78 = 3LL;

	t78 = (x349/((x350&x351)+x352));

	if (t78 != -603426368129196LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = 175U;
	volatile int64_t x355 = INT64_MIN;
	volatile int64_t t79 = -18046970117262LL;

	t79 = (x353/((x354&x355)+x356));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x357 = 1U;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MAX;
	volatile int32_t t80 = 37175220;

	t80 = (x357/((x358&x359)+x360));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x361 = 147673647;
	uint16_t x362 = 3U;
	volatile int64_t x364 = -29046299LL;
	volatile int64_t t81 = -3806139769477LL;

	t81 = (x361/((x362&x363)+x364));

	if (t81 != -5LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = 680U;
	int8_t x366 = 13;
	volatile uint32_t x367 = 4883725U;
	int32_t x368 = INT32_MIN;
	volatile uint32_t t82 = 191063214U;

	t82 = (x365/((x366&x367)+x368));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = INT16_MIN;
	static uint64_t x370 = 3534LLU;
	volatile int64_t x371 = INT64_MIN;
	uint32_t x372 = 93U;
	volatile uint64_t t83 = 535208321LLU;

	t83 = (x369/((x370&x371)+x372));

	if (t83 != 198352086814080847LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = -48;
	int8_t x374 = -1;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = UINT8_MAX;

	t84 = (x373/((x374&x375)+x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x377 = 1U;
	static uint64_t x378 = UINT64_MAX;
	uint8_t x379 = 28U;
	volatile int16_t x380 = -1;
	uint64_t t85 = 3527847LLU;

	t85 = (x377/((x378&x379)+x380));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x381 = INT64_MIN;
	static int32_t x382 = 1022749;
	int16_t x384 = -1;

	t86 = (x381/((x382&x383)+x384));

	if (t86 != -9079846896954LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x385 = UINT32_MAX;
	int64_t x387 = INT64_MAX;
	static int32_t x388 = 73;
	int64_t t87 = -544693312421LL;

	t87 = (x385/((x386&x387)+x388));

	if (t87 != 37025580LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x390 = 75U;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	static volatile uint32_t t88 = 1045063933U;

	t88 = (x389/((x390&x391)+x392));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x393 = 1499LL;
	static volatile int16_t x394 = -1;
	int32_t x396 = INT32_MIN;
	int64_t t89 = -1142366533642644677LL;

	t89 = (x393/((x394&x395)+x396));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = INT64_MIN;
	uint8_t x398 = 4U;
	int64_t x399 = -1LL;
	volatile int8_t x400 = 21;
	int64_t t90 = 21LL;

	t90 = (x397/((x398&x399)+x400));

	if (t90 != -368934881474191032LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x402 = INT64_MAX;
	uint8_t x403 = 31U;
	uint32_t x404 = 20443974U;
	static int64_t t91 = -1996808439019LL;

	t91 = (x401/((x402&x403)+x404));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = -1;
	static uint32_t x410 = 1U;
	static int16_t x412 = -1;
	volatile uint32_t t92 = 55086729U;

	t92 = (x409/((x410&x411)+x412));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x413 = -12;
	uint16_t x414 = UINT16_MAX;
	int32_t x415 = INT32_MIN;
	volatile uint64_t t93 = 3831123556LLU;

	t93 = (x413/((x414&x415)+x416));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = 0;
	volatile uint64_t x418 = 136091LLU;
	volatile int16_t x419 = INT16_MIN;
	int8_t x420 = -1;
	static uint64_t t94 = 5974110752148410107LLU;

	t94 = (x417/((x418&x419)+x420));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = UINT32_MAX;
	int32_t x422 = INT32_MIN;
	static int64_t x423 = -1LL;
	uint16_t x424 = 16U;
	static int64_t t95 = -11916169108274892LL;

	t95 = (x421/((x422&x423)+x424));

	if (t95 != -2LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x425 = 11U;
	uint16_t x426 = 3728U;
	int16_t x427 = -1;
	uint64_t t96 = 490462277268078LLU;

	t96 = (x425/((x426&x427)+x428));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = 2;
	static int64_t x436 = 786732288549939LL;
	int64_t t97 = 64005846LL;

	t97 = (x433/((x434&x435)+x436));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x438 = -1;
	volatile int8_t x440 = 14;
	static volatile int32_t t98 = 7145758;

	t98 = (x437/((x438&x439)+x440));

	if (t98 != 33) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = -1;
	volatile int64_t x442 = INT64_MAX;
	volatile uint16_t x444 = UINT16_MAX;
	volatile int64_t t99 = -26572296897LL;

	t99 = (x441/((x442&x443)+x444));

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

