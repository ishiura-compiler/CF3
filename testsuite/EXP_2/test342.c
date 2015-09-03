#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 1U;
uint16_t x14 = 32U;
uint64_t x18 = 165390LLU;
volatile int64_t x20 = 1LL;
uint32_t x24 = UINT32_MAX;
volatile int64_t x28 = INT64_MAX;
volatile int64_t t5 = 16920227487LL;
volatile int32_t x33 = -451328;
volatile int32_t x42 = INT32_MAX;
uint16_t x51 = 17U;
uint8_t x66 = 78U;
static int32_t x90 = 2022;
int32_t x100 = INT32_MIN;
static uint8_t x106 = 0U;
volatile int8_t x107 = -2;
int64_t x108 = INT64_MAX;
volatile uint16_t x110 = 3568U;
static volatile int16_t x114 = -1;
uint8_t x117 = 9U;
int64_t x118 = 53185020472915LL;
static int8_t x119 = -17;
uint64_t t22 = 7851400735898LLU;
int64_t x130 = -1LL;
int32_t x140 = INT32_MAX;
uint32_t x154 = 1329U;
uint64_t x156 = UINT64_MAX;
int64_t x157 = -1LL;
static volatile uint32_t x165 = UINT32_MAX;
int8_t x166 = INT8_MAX;
static uint8_t x169 = 1U;
int64_t x172 = INT64_MIN;
volatile int64_t t29 = -135791LL;
int32_t x178 = -1;
int8_t x187 = INT8_MAX;
volatile uint32_t x194 = 0U;
volatile int32_t t35 = 1;
int32_t x208 = 3879;
static uint32_t t36 = 6U;
uint8_t x218 = 31U;
uint64_t t40 = 3138810LLU;
int32_t x225 = INT32_MIN;
static int16_t x230 = INT16_MIN;
volatile int64_t t42 = 8LL;
int8_t x235 = INT8_MIN;
int8_t x236 = INT8_MAX;
uint64_t t45 = 88LLU;
volatile int8_t x251 = INT8_MIN;
static volatile int16_t x254 = INT16_MAX;
volatile int16_t x256 = INT16_MIN;
volatile uint8_t x260 = 15U;
volatile int16_t x261 = -1;
static int8_t x271 = 8;
uint64_t t50 = 6650135336LLU;
int16_t x274 = INT16_MIN;
uint16_t x275 = 72U;
volatile int32_t x290 = -1;
int32_t x295 = 1;
int64_t x296 = INT64_MIN;
static uint64_t x302 = 1022373366LLU;
uint64_t t57 = 217196011196LLU;
int32_t x318 = 0;
static int64_t x319 = INT64_MAX;
static int16_t x325 = INT16_MAX;
int8_t x327 = 0;
int8_t x332 = -57;
int16_t x333 = INT16_MIN;
volatile uint32_t t62 = 1956238277U;
uint16_t x346 = UINT16_MAX;
int32_t x348 = INT32_MIN;
int32_t x352 = INT32_MAX;
volatile int64_t x360 = INT64_MIN;
volatile int8_t x361 = INT8_MAX;
volatile uint32_t x362 = 156U;
int16_t x369 = -3;
uint64_t x370 = 122337040454LLU;
volatile int16_t x384 = 13953;
int32_t x390 = INT32_MIN;
int16_t x394 = INT16_MAX;
static uint64_t x395 = 3264002932726052LLU;
uint16_t x407 = 353U;
int8_t x414 = -1;
uint8_t x418 = 2U;
uint32_t x420 = 79417493U;
volatile int8_t x422 = -1;
uint64_t t76 = 248369LLU;
volatile uint32_t t77 = 109U;
int32_t x448 = INT32_MIN;
static int64_t x449 = -1LL;
uint32_t x451 = 366198U;
uint8_t x459 = UINT8_MAX;
static uint8_t x462 = 13U;
static volatile uint64_t t82 = 950LLU;
volatile uint8_t x477 = UINT8_MAX;
volatile int32_t t85 = 212225;
static int64_t x497 = -1LL;
int16_t x498 = -1;
uint16_t x499 = UINT16_MAX;
uint16_t x500 = UINT16_MAX;
static volatile int64_t t89 = -5366LL;
volatile int16_t x521 = -1;
uint32_t t92 = 438870658U;
uint8_t x538 = UINT8_MAX;
static volatile int64_t t93 = -2197916219486359LL;
volatile uint16_t x544 = UINT16_MAX;
int8_t x550 = 3;
static uint32_t x552 = 38582392U;
volatile uint32_t t95 = 3U;
int64_t x554 = 102188400629940349LL;
int64_t x562 = -1LL;
volatile int64_t t98 = 2225066196LL;
int32_t x575 = INT32_MIN;


void f0(void) {
	uint8_t x5 = 40U;
	int8_t x7 = INT8_MAX;
	int16_t x8 = -1;
	volatile int32_t t0 = -844779;

	t0 = ((x5+(x6*x7))/x8);

	if (t0 != -167) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	uint32_t x10 = UINT32_MAX;
	int64_t x11 = 335LL;
	volatile int8_t x12 = INT8_MAX;
	volatile int64_t t1 = -88850694LL;

	t1 = ((x9+(x10*x11))/x12);

	if (t1 != 11329244181LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -5844;
	volatile int16_t x15 = -433;
	int32_t x16 = INT32_MAX;
	static volatile int32_t t2 = -442983141;

	t2 = ((x13+(x14*x15))/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	volatile int32_t x19 = INT32_MAX;
	uint64_t t3 = 1LLU;

	t3 = ((x17+(x18*x19))/x20);

	if (t3 != 355170172893682LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	static int16_t x22 = 0;
	uint8_t x23 = 23U;
	volatile uint32_t t4 = 471U;

	t4 = ((x21+(x22*x23))/x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -1;
	int16_t x26 = INT16_MIN;
	uint8_t x27 = 9U;

	t5 = ((x25+(x26*x27))/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x34 = 5301LLU;
	int32_t x35 = INT32_MIN;
	int64_t x36 = -1LL;
	static volatile uint64_t t6 = 1110095500LLU;

	t6 = ((x33+(x34*x35))/x36);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = 0;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = -1;
	volatile uint32_t t7 = 4U;

	t7 = ((x37+(x38*x39))/x40);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -1;
	static int16_t x43 = 1;
	int8_t x44 = INT8_MIN;
	int32_t t8 = 20396148;

	t8 = ((x41+(x42*x43))/x44);

	if (t8 != -16777215) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -5;
	volatile int64_t x46 = -21316215782177848LL;
	static uint8_t x47 = 52U;
	int8_t x48 = -1;
	static volatile int64_t t9 = 1842876128533428527LL;

	t9 = ((x45+(x46*x47))/x48);

	if (t9 != 1108443220673248101LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = 23;
	int32_t x52 = INT32_MAX;
	int32_t t10 = -7;

	t10 = ((x49+(x50*x51))/x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	static int16_t x54 = INT16_MIN;
	uint16_t x55 = UINT16_MAX;
	volatile int8_t x56 = -1;
	int32_t t11 = 3666;

	t11 = ((x53+(x54*x55))/x56);

	if (t11 != 2147450881) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x61 = 117U;
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = INT8_MIN;
	static uint64_t x64 = 4481615LLU;
	uint64_t t12 = 4047656208LLU;

	t12 = ((x61+(x62*x63))/x64);

	if (t12 != 4116092987394LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -1LL;
	int64_t x67 = -1LL;
	int32_t x68 = INT32_MIN;
	int64_t t13 = -218LL;

	t13 = ((x65+(x66*x67))/x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x73 = 0U;
	uint64_t x74 = UINT64_MAX;
	uint16_t x75 = 2U;
	volatile int8_t x76 = INT8_MIN;
	static uint64_t t14 = 335366LLU;

	t14 = ((x73+(x74*x75))/x76);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MIN;
	uint32_t x87 = 478789U;
	volatile uint64_t x88 = 53231LLU;
	static uint64_t t15 = 49472LLU;

	t15 = ((x85+(x86*x87))/x88);

	if (t15 != 173270688865553LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x91 = 228217800305LLU;
	volatile int8_t x92 = INT8_MIN;
	uint64_t t16 = 50591242948663LLU;

	t16 = ((x89+(x90*x91))/x92);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x97 = 3U;
	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = UINT32_MAX;
	uint32_t t17 = 118964U;

	t17 = ((x97+(x98*x99))/x100);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = -1;
	volatile int64_t t18 = 2562755700856464960LL;

	t18 = ((x105+(x106*x107))/x108);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = -1LL;
	static int8_t x111 = -1;
	volatile int64_t x112 = -117199429LL;
	static int64_t t19 = -18474999126245LL;

	t19 = ((x109+(x110*x111))/x112);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	static int32_t x115 = INT32_MAX;
	volatile int32_t x116 = INT32_MAX;
	volatile int32_t t20 = 41;

	t20 = ((x113+(x114*x115))/x116);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x120 = INT8_MIN;
	volatile int64_t t21 = 118775463725360LL;

	t21 = ((x117+(x118*x119))/x120);

	if (t21 != 7063635531558LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = -2;
	static volatile uint64_t x123 = 316207800837972LLU;
	volatile int16_t x124 = -1;

	t22 = ((x121+(x122*x123))/x124);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x129 = -3;
	uint32_t x131 = 235U;
	uint32_t x132 = UINT32_MAX;
	volatile int64_t t23 = -96599072LL;

	t23 = ((x129+(x130*x131))/x132);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = INT32_MAX;
	int32_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	static int32_t t24 = -28806453;

	t24 = ((x137+(x138*x139))/x140);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x153 = -5977250LL;
	uint64_t x155 = UINT64_MAX;
	uint64_t t25 = 13445LLU;

	t25 = ((x153+(x154*x155))/x156);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x158 = 0U;
	static uint8_t x159 = UINT8_MAX;
	volatile uint32_t x160 = 2459671U;
	static volatile int64_t t26 = 89LL;

	t26 = ((x157+(x158*x159))/x160);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x161 = 28U;
	static int64_t x162 = -476384LL;
	int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MAX;
	int64_t t27 = 4255853610197LL;

	t27 = ((x161+(x162*x163))/x164);

	if (t27 != 1860LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x167 = 1LL;
	int64_t x168 = INT64_MIN;
	static int64_t t28 = -6167LL;

	t28 = ((x165+(x166*x167))/x168);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x170 = 7;
	volatile uint8_t x171 = 1U;

	t29 = ((x169+(x170*x171))/x172);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x173 = -46321970LL;
	int8_t x174 = -1;
	uint32_t x175 = 155661473U;
	uint8_t x176 = UINT8_MAX;
	static volatile int64_t t30 = -1382LL;

	t30 = ((x173+(x174*x175))/x176);

	if (t30 != 16050917LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x177 = INT8_MIN;
	int8_t x179 = -1;
	uint32_t x180 = 5U;
	volatile uint32_t t31 = 96U;

	t31 = ((x177+(x178*x179))/x180);

	if (t31 != 858993433U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x181 = UINT64_MAX;
	static uint8_t x182 = 74U;
	int16_t x183 = -1;
	int32_t x184 = INT32_MIN;
	volatile uint64_t t32 = 48065807311838LLU;

	t32 = ((x181+(x182*x183))/x184);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x185 = INT32_MIN;
	static uint64_t x186 = 421482716LLU;
	int16_t x188 = -1825;
	uint64_t t33 = 16694LLU;

	t33 = ((x185+(x186*x187))/x188);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x193 = UINT8_MAX;
	volatile int32_t x195 = -10411242;
	uint32_t x196 = UINT32_MAX;
	static uint32_t t34 = 162587U;

	t34 = ((x193+(x194*x195))/x196);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x201 = INT8_MIN;
	static volatile int16_t x202 = INT16_MIN;
	volatile int8_t x203 = INT8_MIN;
	int16_t x204 = 95;

	t35 = ((x201+(x202*x203))/x204);

	if (t35 != 44149) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x205 = UINT32_MAX;
	volatile uint32_t x206 = 13239U;
	int8_t x207 = -1;

	t36 = ((x205+(x206*x207))/x208);

	if (t36 != 1107232U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x209 = -1LL;
	volatile int64_t x210 = INT64_MIN;
	uint16_t x211 = 0U;
	int32_t x212 = INT32_MAX;
	static int64_t t37 = 341274LL;

	t37 = ((x209+(x210*x211))/x212);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = -1;
	volatile int32_t x214 = -1;
	int16_t x215 = INT16_MIN;
	uint32_t x216 = UINT32_MAX;
	uint32_t t38 = 1971785U;

	t38 = ((x213+(x214*x215))/x216);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x217 = INT16_MIN;
	static uint16_t x219 = 485U;
	int64_t x220 = INT64_MIN;
	static int64_t t39 = -519228LL;

	t39 = ((x217+(x218*x219))/x220);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x221 = 364821748467554LLU;
	uint8_t x222 = 54U;
	static uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MIN;

	t40 = ((x221+(x222*x223))/x224);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x226 = 17U;
	uint64_t x227 = 345898204LLU;
	int16_t x228 = INT16_MIN;
	static volatile uint64_t t41 = 23299LLU;

	t41 = ((x225+(x226*x227))/x228);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x229 = -1LL;
	int32_t x231 = -1;
	int8_t x232 = INT8_MIN;

	t42 = ((x229+(x230*x231))/x232);

	if (t42 != -255LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x233 = 1U;
	volatile int32_t x234 = 18867;
	volatile int32_t t43 = 632942006;

	t43 = ((x233+(x234*x235))/x236);

	if (t43 != -19015) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x237 = 64844154887LLU;
	static volatile uint8_t x238 = 3U;
	uint16_t x239 = 2U;
	volatile uint16_t x240 = 16188U;
	volatile uint64_t t44 = 1083LLU;

	t44 = ((x237+(x238*x239))/x240);

	if (t44 != 4005692LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x241 = UINT64_MAX;
	int8_t x242 = -1;
	int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MIN;

	t45 = ((x241+(x242*x243))/x244);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x249 = INT16_MAX;
	volatile int8_t x250 = INT8_MIN;
	uint16_t x252 = 5U;
	volatile int32_t t46 = 872;

	t46 = ((x249+(x250*x251))/x252);

	if (t46 != 9830) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x253 = INT32_MIN;
	uint8_t x255 = 4U;
	volatile int32_t t47 = -4691848;

	t47 = ((x253+(x254*x255))/x256);

	if (t47 != 65532) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x257 = 1275133554471144364LLU;
	int32_t x258 = -1;
	static int8_t x259 = INT8_MIN;
	uint64_t t48 = 13886047LLU;

	t48 = ((x257+(x258*x259))/x260);

	if (t48 != 85008903631409632LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x262 = 2U;
	uint64_t x263 = UINT64_MAX;
	uint32_t x264 = 818U;
	volatile uint64_t t49 = 41642269856825071LLU;

	t49 = ((x261+(x262*x263))/x264);

	if (t49 != 22551031874950552LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x269 = 2811386294535LLU;
	static uint64_t x270 = 3423205871533978519LLU;
	int64_t x272 = -1LL;

	t50 = ((x269+(x270*x271))/x272);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x273 = INT16_MAX;
	int8_t x276 = INT8_MIN;
	volatile int32_t t51 = -1484870;

	t51 = ((x273+(x274*x275))/x276);

	if (t51 != 18176) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x277 = INT8_MIN;
	volatile int16_t x278 = -1;
	int16_t x279 = -2944;
	int16_t x280 = INT16_MIN;
	int32_t t52 = 2919859;

	t52 = ((x277+(x278*x279))/x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = 978;
	int8_t x286 = -1;
	static volatile uint8_t x287 = 11U;
	static uint8_t x288 = UINT8_MAX;
	int32_t t53 = 5789;

	t53 = ((x285+(x286*x287))/x288);

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x289 = -1LL;
	uint16_t x291 = 257U;
	uint32_t x292 = 699010209U;
	volatile int64_t t54 = 577378923175568LL;

	t54 = ((x289+(x290*x291))/x292);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x293 = -2;
	static volatile int64_t x294 = -186428427LL;
	int64_t t55 = -41906862924LL;

	t55 = ((x293+(x294*x295))/x296);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x297 = INT64_MIN;
	volatile int8_t x298 = INT8_MAX;
	volatile uint16_t x299 = 58U;
	volatile int64_t x300 = INT64_MAX;
	int64_t t56 = 144LL;

	t56 = ((x297+(x298*x299))/x300);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x301 = INT32_MIN;
	static int64_t x303 = -1LL;
	volatile int16_t x304 = INT16_MIN;

	t57 = ((x301+(x302*x303))/x304);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x317 = INT8_MIN;
	int64_t x320 = INT64_MAX;
	int64_t t58 = -31387307905LL;

	t58 = ((x317+(x318*x319))/x320);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x321 = INT16_MAX;
	static int16_t x322 = INT16_MAX;
	int16_t x323 = -1;
	uint32_t x324 = 34804677U;
	uint32_t t59 = 2541954U;

	t59 = ((x321+(x322*x323))/x324);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x326 = UINT64_MAX;
	int16_t x328 = INT16_MAX;
	volatile uint64_t t60 = 5735655LLU;

	t60 = ((x325+(x326*x327))/x328);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x329 = INT64_MAX;
	volatile uint8_t x330 = UINT8_MAX;
	static int16_t x331 = -1;
	volatile int64_t t61 = -16798692789499LL;

	t61 = ((x329+(x330*x331))/x332);

	if (t61 != -161813544506224132LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x334 = UINT32_MAX;
	static int16_t x335 = INT16_MIN;
	uint8_t x336 = 11U;

	t62 = ((x333+(x334*x335))/x336);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x345 = -1;
	int16_t x347 = INT16_MIN;
	volatile int32_t t63 = 103;

	t63 = ((x345+(x346*x347))/x348);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x349 = 1008630888;
	int8_t x350 = INT8_MAX;
	int32_t x351 = -1;
	volatile int32_t t64 = -1;

	t64 = ((x349+(x350*x351))/x352);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x357 = -1;
	int16_t x358 = INT16_MAX;
	uint16_t x359 = UINT16_MAX;
	int64_t t65 = -30976304667223LL;

	t65 = ((x357+(x358*x359))/x360);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x363 = INT32_MIN;
	uint8_t x364 = 7U;
	uint32_t t66 = 120573U;

	t66 = ((x361+(x362*x363))/x364);

	if (t66 != 18U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x371 = UINT64_MAX;
	static int32_t x372 = -1;
	volatile uint64_t t67 = 5187781LLU;

	t67 = ((x369+(x370*x371))/x372);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x381 = 1U;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = UINT32_MAX;
	static volatile uint32_t t68 = 5003U;

	t68 = ((x381+(x382*x383))/x384);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x389 = 1365590702287582135LL;
	uint64_t x391 = UINT64_MAX;
	volatile uint8_t x392 = 9U;
	volatile uint64_t t69 = 162553909054LLU;

	t69 = ((x389+(x390*x391))/x392);

	if (t69 != 151732300492785087LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x393 = 2U;
	int64_t x396 = 7652172175752363LL;
	uint64_t t70 = 4492726854039420LLU;

	t70 = ((x393+(x394*x395))/x396);

	if (t70 != 1923LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x401 = 24U;
	volatile int8_t x402 = INT8_MIN;
	uint32_t x403 = 18U;
	uint32_t x404 = 3062918U;
	uint32_t t71 = 13154966U;

	t71 = ((x401+(x402*x403))/x404);

	if (t71 != 1402U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x405 = INT32_MAX;
	static int32_t x406 = -1;
	volatile int64_t x408 = INT64_MAX;
	int64_t t72 = 570895527091811845LL;

	t72 = ((x405+(x406*x407))/x408);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x409 = UINT8_MAX;
	uint32_t x410 = 151335U;
	int32_t x411 = INT32_MAX;
	int32_t x412 = INT32_MIN;
	uint32_t t73 = 5979282U;

	t73 = ((x409+(x410*x411))/x412);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x413 = -1;
	int16_t x415 = INT16_MIN;
	volatile uint8_t x416 = 55U;
	static volatile int32_t t74 = 375577;

	t74 = ((x413+(x414*x415))/x416);

	if (t74 != 595) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x417 = 1U;
	uint8_t x419 = 94U;
	uint32_t t75 = 2012851430U;

	t75 = ((x417+(x418*x419))/x420);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x421 = INT16_MIN;
	volatile uint64_t x423 = 865030LLU;
	int16_t x424 = 12;

	t76 = ((x421+(x422*x423))/x424);

	if (t76 != 1537228672809054484LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = -1;
	static volatile uint32_t x426 = 722U;
	uint32_t x427 = UINT32_MAX;
	volatile int32_t x428 = 125;

	t77 = ((x425+(x426*x427))/x428);

	if (t77 != 34359732U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MAX;
	int32_t x447 = -212764;
	volatile int32_t t78 = -61734;

	t78 = ((x445+(x446*x447))/x448);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x450 = 201LLU;
	int8_t x452 = 36;
	uint64_t t79 = 2677373965027LLU;

	t79 = ((x449+(x450*x451))/x452);

	if (t79 != 2044605LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x457 = UINT16_MAX;
	uint8_t x458 = 6U;
	static int32_t x460 = -1;
	int32_t t80 = 40668;

	t80 = ((x457+(x458*x459))/x460);

	if (t80 != -67065) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x461 = -30808;
	uint16_t x463 = 1U;
	uint8_t x464 = 14U;
	volatile int32_t t81 = 42;

	t81 = ((x461+(x462*x463))/x464);

	if (t81 != -2199) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x469 = UINT64_MAX;
	uint32_t x470 = 162U;
	int8_t x471 = 1;
	int16_t x472 = INT16_MIN;

	t82 = ((x469+(x470*x471))/x472);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x478 = 3U;
	uint32_t x479 = 7994U;
	static int32_t x480 = INT32_MIN;
	uint32_t t83 = 12091952U;

	t83 = ((x477+(x478*x479))/x480);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x481 = 1U;
	int32_t x482 = -1;
	uint8_t x483 = 49U;
	static int64_t x484 = -1985201059838LL;
	int64_t t84 = -28319LL;

	t84 = ((x481+(x482*x483))/x484);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x489 = INT16_MAX;
	int16_t x490 = INT16_MAX;
	volatile int16_t x491 = -1;
	int8_t x492 = INT8_MAX;

	t85 = ((x489+(x490*x491))/x492);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t t86 = -1LL;

	t86 = ((x497+(x498*x499))/x500);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x501 = INT64_MIN;
	uint16_t x502 = 0U;
	uint8_t x503 = 4U;
	int8_t x504 = -8;
	static volatile int64_t t87 = -41953690199356LL;

	t87 = ((x501+(x502*x503))/x504);

	if (t87 != 1152921504606846976LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x505 = INT16_MAX;
	volatile int8_t x506 = INT8_MIN;
	int32_t x507 = -1;
	int16_t x508 = INT16_MIN;
	volatile int32_t t88 = -90311543;

	t88 = ((x505+(x506*x507))/x508);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x509 = -1;
	volatile int8_t x510 = INT8_MIN;
	int16_t x511 = INT16_MIN;
	int64_t x512 = INT64_MAX;

	t89 = ((x509+(x510*x511))/x512);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x522 = UINT8_MAX;
	uint16_t x523 = UINT16_MAX;
	uint8_t x524 = 10U;
	volatile int32_t t90 = -1;

	t90 = ((x521+(x522*x523))/x524);

	if (t90 != 1671142) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x525 = 10938098U;
	int32_t x526 = -1;
	volatile int8_t x527 = -1;
	int16_t x528 = 252;
	volatile uint32_t t91 = 1U;

	t91 = ((x525+(x526*x527))/x528);

	if (t91 != 43405U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x529 = UINT8_MAX;
	uint32_t x530 = 88056855U;
	static uint8_t x531 = UINT8_MAX;
	uint8_t x532 = 23U;

	t92 = ((x529+(x530*x531))/x532);

	if (t92 != 42593991U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x537 = -1LL;
	uint8_t x539 = UINT8_MAX;
	uint8_t x540 = 10U;

	t93 = ((x537+(x538*x539))/x540);

	if (t93 != 6502LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x541 = 1639697282446LL;
	static uint64_t x542 = 195LLU;
	static int32_t x543 = 226253076;
	volatile uint64_t t94 = 9LLU;

	t94 = ((x541+(x542*x543))/x544);

	if (t94 != 25693394LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x549 = UINT16_MAX;
	static volatile uint8_t x551 = UINT8_MAX;

	t95 = ((x549+(x550*x551))/x552);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x553 = 35918669U;
	uint64_t x555 = UINT64_MAX;
	uint16_t x556 = 98U;
	uint64_t t96 = 43544667529LLU;

	t96 = ((x553+(x554*x555))/x556);

	if (t96 != 187189343603219693LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x561 = INT64_MIN;
	int16_t x563 = INT16_MIN;
	static int8_t x564 = -11;
	volatile int64_t t97 = 25LL;

	t97 = ((x561+(x562*x563))/x564);

	if (t97 != 838488366986794821LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x565 = INT64_MIN;
	uint32_t x566 = UINT32_MAX;
	int16_t x567 = INT16_MAX;
	int64_t x568 = INT64_MAX;

	t98 = ((x565+(x566*x567))/x568);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x573 = 2191609812201504LL;
	uint32_t x574 = 670U;
	uint8_t x576 = 2U;
	static volatile int64_t t99 = 1460222153813841220LL;

	t99 = ((x573+(x574*x575))/x576);

	if (t99 != 1095804906100752LL) { NG(); } else { ; }
	
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

