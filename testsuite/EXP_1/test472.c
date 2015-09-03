#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MIN;
int64_t x12 = 192229LL;
volatile int64_t t1 = -2889571LL;
static volatile int32_t t2 = 145555;
int64_t x22 = -10LL;
uint16_t x30 = 2423U;
int64_t x35 = -1449787613381LL;
int32_t x36 = -1;
int16_t x38 = INT16_MAX;
int32_t t7 = 74227;
static volatile uint8_t x41 = 0U;
uint64_t x42 = 35740LLU;
uint64_t x43 = UINT64_MAX;
int16_t x67 = -1;
volatile int8_t x70 = INT8_MIN;
int64_t x82 = -1LL;
volatile int64_t t14 = -7428LL;
int64_t x85 = -13002LL;
volatile int64_t x87 = INT64_MIN;
volatile int8_t x101 = -24;
int8_t x103 = INT8_MAX;
static int16_t x112 = 3;
static volatile int64_t t19 = -5633LL;
volatile uint64_t t20 = 1018029267811257673LLU;
int8_t x117 = -58;
static int64_t t24 = 396424754111412590LL;
int32_t x151 = -24;
static int32_t x157 = -1;
uint8_t x158 = 4U;
static int64_t x160 = INT64_MIN;
static int8_t x162 = -9;
volatile uint64_t t31 = 29289LLU;
static uint8_t x175 = 0U;
uint64_t x189 = 417886LLU;
int16_t x190 = INT16_MIN;
int32_t x192 = -40738;
static uint64_t x193 = UINT64_MAX;
int8_t x198 = INT8_MIN;
static int8_t x216 = INT8_MIN;
int64_t t39 = 7284494LL;
uint8_t x228 = 19U;
int8_t x237 = INT8_MAX;
uint8_t x239 = 54U;
volatile uint32_t t45 = 6291855U;
static int64_t x262 = -1LL;
static int8_t x264 = INT8_MIN;
int32_t x273 = -853;
uint64_t x281 = UINT64_MAX;
int8_t x282 = INT8_MIN;
volatile uint64_t t51 = 213LLU;
static int16_t x316 = -3;
uint32_t t56 = 23U;
int64_t x323 = -4173LL;
static int64_t x326 = INT64_MAX;
uint64_t x332 = 6661328189071347886LLU;
uint64_t x341 = UINT64_MAX;
uint8_t x344 = UINT8_MAX;
volatile int64_t t63 = -78905088767256925LL;
static uint64_t x349 = 962599174453419796LLU;
uint8_t x362 = UINT8_MAX;
uint64_t x364 = 3114570021192353LLU;
volatile int32_t t67 = 744928;
uint16_t x378 = UINT16_MAX;
int16_t x382 = 2993;
static int16_t x385 = INT16_MAX;
static uint64_t t71 = 403611010LLU;
volatile uint64_t t72 = 103326LLU;
int64_t x400 = INT64_MIN;
int64_t t75 = -9LL;
static volatile int32_t x406 = -1;
uint32_t x413 = 7774536U;
uint64_t x419 = 513LLU;
static int16_t x421 = INT16_MIN;
volatile int16_t x422 = INT16_MIN;
uint64_t x429 = 30074702648440LLU;
volatile int64_t x433 = INT64_MIN;
uint64_t x434 = UINT64_MAX;
volatile int16_t x464 = INT16_MAX;
static int32_t t86 = -122884;
static int64_t t87 = -8463379716896LL;
int16_t x480 = 29;
int32_t x487 = -726;
volatile uint32_t x499 = UINT32_MAX;
volatile int16_t x517 = -114;
volatile int64_t x523 = 55587663189LL;
uint64_t x529 = UINT64_MAX;
int32_t x533 = 4944726;
int8_t x534 = -1;


void f0(void) {
	uint8_t x9 = 17U;
	uint16_t x11 = 8U;
	volatile int64_t t0 = 3789813967000357965LL;

	t0 = (((x9*x10)&x11)/x12);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	int64_t x14 = 555498535153633027LL;
	int64_t x15 = -3138235388895LL;
	int8_t x16 = -1;

	t1 = (((x13*x14)&x15)/x16);

	if (t1 != 555498545897527263LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = UINT8_MAX;
	uint8_t x18 = 61U;
	int16_t x19 = -11;
	int8_t x20 = -1;

	t2 = (((x17*x18)&x19)/x20);

	if (t2 != -15553) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x21 = INT32_MIN;
	uint16_t x23 = 6121U;
	volatile int8_t x24 = INT8_MAX;
	int64_t t3 = -221187637666924335LL;

	t3 = (((x21*x22)&x23)/x24);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 28U;
	static uint8_t x26 = 11U;
	volatile uint64_t x27 = 12356371936934LLU;
	uint64_t x28 = UINT64_MAX;
	uint64_t t4 = 736576152431207LLU;

	t4 = (((x25*x26)&x27)/x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x29 = 13359277532724919LLU;
	int32_t x31 = INT32_MAX;
	volatile int16_t x32 = -20;
	uint64_t t5 = 114138841632758LLU;

	t5 = (((x29*x30)&x31)/x32);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	int8_t x34 = INT8_MIN;
	int64_t t6 = -134LL;

	t6 = (((x33*x34)&x35)/x36);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MAX;
	int32_t x39 = INT32_MAX;
	static int32_t x40 = -1;

	t7 = (((x37*x38)&x39)/x40);

	if (t7 != -4161409) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x44 = UINT8_MAX;
	volatile uint64_t t8 = 392629LLU;

	t8 = (((x41*x42)&x43)/x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -103;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t9 = -7;

	t9 = (((x45*x46)&x47)/x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	volatile int16_t x54 = INT16_MAX;
	uint16_t x55 = 17399U;
	volatile int32_t x56 = INT32_MIN;
	static int32_t t10 = -132404407;

	t10 = (((x53*x54)&x55)/x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = -1LL;
	uint64_t x58 = 1697LLU;
	volatile int8_t x59 = INT8_MAX;
	int32_t x60 = -1;
	uint64_t t11 = 502927477906LLU;

	t11 = (((x57*x58)&x59)/x60);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 1U;
	int64_t x66 = INT64_MIN;
	volatile uint64_t x68 = 24703656LLU;
	volatile uint64_t t12 = 60294LLU;

	t12 = (((x65*x66)&x67)/x68);

	if (t12 != 373360608521LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = UINT64_MAX;
	uint32_t x71 = 17332U;
	int8_t x72 = INT8_MIN;
	static volatile uint64_t t13 = 6798204139757410LLU;

	t13 = (((x69*x70)&x71)/x72);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -1LL;
	int16_t x83 = INT16_MIN;
	int32_t x84 = -1;

	t14 = (((x81*x82)&x83)/x84);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x86 = UINT16_MAX;
	uint64_t x88 = 59LLU;
	volatile uint64_t t15 = 42567540LLU;

	t15 = (((x85*x86)&x87)/x88);

	if (t15 != 156328339607708064LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x89 = 1474236984LLU;
	int8_t x90 = 0;
	uint16_t x91 = 108U;
	int8_t x92 = INT8_MIN;
	static volatile uint64_t t16 = 2126433LLU;

	t16 = (((x89*x90)&x91)/x92);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x97 = INT16_MAX;
	volatile int16_t x98 = INT16_MIN;
	uint32_t x99 = 14U;
	volatile int64_t x100 = INT64_MIN;
	int64_t t17 = -1764615306992128LL;

	t17 = (((x97*x98)&x99)/x100);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x102 = INT8_MIN;
	volatile uint64_t x104 = 30757416589214452LLU;
	uint64_t t18 = 5774022523795437893LLU;

	t18 = (((x101*x102)&x103)/x104);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x109 = 183U;
	int16_t x110 = -9;
	static int64_t x111 = INT64_MIN;

	t19 = (((x109*x110)&x111)/x112);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x113 = 310U;
	uint8_t x114 = 116U;
	uint64_t x115 = 32076LLU;
	uint8_t x116 = 2U;

	t20 = (((x113*x114)&x115)/x116);

	if (t20 != 1572LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x118 = -1;
	static uint16_t x119 = UINT16_MAX;
	int64_t x120 = INT64_MAX;
	int64_t t21 = 6426799754673LL;

	t21 = (((x117*x118)&x119)/x120);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = -22971327251LL;
	int64_t x122 = -1LL;
	int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MIN;
	volatile int64_t t22 = 1618910104149518660LL;

	t22 = (((x121*x122)&x123)/x124);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = 168378LL;
	uint8_t x130 = 0U;
	static int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MAX;
	volatile int64_t t23 = 16LL;

	t23 = (((x129*x130)&x131)/x132);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = 1729LL;
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = -1;
	int16_t x136 = -1;

	t24 = (((x133*x134)&x135)/x136);

	if (t24 != -7425998453055LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x137 = 4U;
	volatile int16_t x138 = INT16_MIN;
	volatile int32_t x139 = -1;
	int8_t x140 = INT8_MIN;
	volatile int32_t t25 = -375;

	t25 = (((x137*x138)&x139)/x140);

	if (t25 != 1024) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = INT8_MIN;
	static volatile uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MIN;
	volatile int64_t x144 = INT64_MAX;
	uint64_t t26 = 15463803LLU;

	t26 = (((x141*x142)&x143)/x144);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x145 = 1U;
	int32_t x146 = INT32_MAX;
	int32_t x147 = -9588;
	int16_t x148 = INT16_MIN;
	static int32_t t27 = 266130643;

	t27 = (((x145*x146)&x147)/x148);

	if (t27 != -65535) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x149 = 5U;
	uint16_t x150 = 767U;
	static int64_t x152 = INT64_MIN;
	int64_t t28 = 29023LL;

	t28 = (((x149*x150)&x151)/x152);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x159 = INT16_MAX;
	int64_t t29 = 1964412055878298LL;

	t29 = (((x157*x158)&x159)/x160);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x161 = UINT8_MAX;
	volatile uint16_t x163 = 29717U;
	uint16_t x164 = 180U;
	volatile int32_t t30 = -35;

	t30 = (((x161*x162)&x163)/x164);

	if (t30 != 164) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x169 = UINT64_MAX;
	int64_t x170 = -9452412073320097LL;
	int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MAX;

	t31 = (((x169*x170)&x171)/x172);

	if (t31 != 74428435194307LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x173 = INT8_MAX;
	uint8_t x174 = 0U;
	int8_t x176 = INT8_MIN;
	int32_t t32 = 2623;

	t32 = (((x173*x174)&x175)/x176);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x177 = 111U;
	volatile uint16_t x178 = 23U;
	static int16_t x179 = INT16_MIN;
	uint64_t x180 = 58591563588LLU;
	uint64_t t33 = 139639048798693LLU;

	t33 = (((x177*x178)&x179)/x180);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x181 = 492;
	static volatile int16_t x182 = INT16_MIN;
	int64_t x183 = 1339331LL;
	int16_t x184 = INT16_MIN;
	volatile int64_t t34 = -2066161633LL;

	t34 = (((x181*x182)&x183)/x184);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x191 = INT32_MIN;
	uint64_t t35 = 56745962LLU;

	t35 = (((x189*x190)&x191)/x192);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x194 = 963;
	volatile int64_t x195 = -4425424989233403259LL;
	static int32_t x196 = 780730463;
	static uint64_t t36 = 1839721727LLU;

	t36 = (((x193*x194)&x195)/x196);

	if (t36 != 17959231449LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = -1;
	int64_t x199 = -89078533LL;
	uint64_t x200 = 28479433136894681LLU;
	volatile uint64_t t37 = 1105LLU;

	t37 = (((x197*x198)&x199)/x200);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x205 = INT8_MIN;
	volatile int32_t x206 = -1;
	uint8_t x207 = 68U;
	uint8_t x208 = 1U;
	volatile int32_t t38 = 6261;

	t38 = (((x205*x206)&x207)/x208);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x213 = 60U;
	int64_t x214 = 66698260051149753LL;
	uint32_t x215 = 52370U;

	t39 = (((x213*x214)&x215)/x216);

	if (t39 != -408LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x217 = 37;
	uint16_t x218 = UINT16_MAX;
	static int8_t x219 = INT8_MAX;
	static uint64_t x220 = 54730008135LLU;
	static volatile uint64_t t40 = 10279LLU;

	t40 = (((x217*x218)&x219)/x220);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x221 = 785481LLU;
	uint16_t x222 = 7067U;
	int16_t x223 = 3;
	static int16_t x224 = -1;
	uint64_t t41 = 581LLU;

	t41 = (((x221*x222)&x223)/x224);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x225 = INT16_MIN;
	static int32_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int32_t t42 = 18041757;

	t42 = (((x225*x226)&x227)/x228);

	if (t42 != 1724) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x229 = -32415487;
	static uint32_t x230 = 1808424U;
	int64_t x231 = INT64_MAX;
	uint64_t x232 = 50301426626594LLU;
	uint64_t t43 = 112LLU;

	t43 = (((x229*x230)&x231)/x232);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x233 = 76U;
	int16_t x234 = INT16_MIN;
	static int32_t x235 = -1071563564;
	int16_t x236 = INT16_MAX;
	volatile int32_t t44 = 476692832;

	t44 = (((x233*x234)&x235)/x236);

	if (t44 != -32769) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x238 = 824U;
	int8_t x240 = INT8_MAX;

	t45 = (((x237*x238)&x239)/x240);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x245 = INT8_MIN;
	volatile int8_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MAX;
	volatile int32_t t46 = 23018;

	t46 = (((x245*x246)&x247)/x248);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x257 = 2LLU;
	volatile int32_t x258 = 248;
	int32_t x259 = 757186536;
	uint16_t x260 = 4U;
	static uint64_t t47 = 4684335LLU;

	t47 = (((x257*x258)&x259)/x260);

	if (t47 != 120LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x261 = -21314778827852964LL;
	uint16_t x263 = 0U;
	int64_t t48 = 120LL;

	t48 = (((x261*x262)&x263)/x264);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x274 = 0U;
	uint8_t x275 = 90U;
	static int32_t x276 = -15873;
	volatile int32_t t49 = 3414;

	t49 = (((x273*x274)&x275)/x276);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x277 = 117U;
	uint8_t x278 = UINT8_MAX;
	static uint8_t x279 = 11U;
	volatile int32_t x280 = INT32_MAX;
	static volatile uint32_t t50 = 663724U;

	t50 = (((x277*x278)&x279)/x280);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x283 = 15827;
	uint32_t x284 = 260297836U;

	t51 = (((x281*x282)&x283)/x284);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x289 = 0;
	static int8_t x290 = -14;
	uint64_t x291 = UINT64_MAX;
	int64_t x292 = INT64_MIN;
	volatile uint64_t t52 = 297074327492416416LLU;

	t52 = (((x289*x290)&x291)/x292);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x297 = 43;
	uint8_t x298 = 31U;
	int16_t x299 = -373;
	uint8_t x300 = UINT8_MAX;
	int32_t t53 = 37964;

	t53 = (((x297*x298)&x299)/x300);

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x305 = 1467749U;
	static int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	uint16_t x308 = 4871U;
	volatile uint64_t t54 = 11152LLU;

	t54 = (((x305*x306)&x307)/x308);

	if (t54 != 843172LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = -1;
	uint8_t x311 = 2U;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t55 = 400;

	t55 = (((x309*x310)&x311)/x312);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x313 = INT8_MIN;
	volatile uint32_t x314 = 29056U;
	int8_t x315 = INT8_MAX;

	t56 = (((x313*x314)&x315)/x316);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x317 = 0;
	int16_t x318 = INT16_MIN;
	int8_t x319 = 0;
	volatile int64_t x320 = INT64_MIN;
	static int64_t t57 = -329094LL;

	t57 = (((x317*x318)&x319)/x320);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = 406023;
	int8_t x322 = 26;
	static uint16_t x324 = UINT16_MAX;
	int64_t t58 = 7100163000150682LL;

	t58 = (((x321*x322)&x323)/x324);

	if (t58 != 161LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x325 = -1;
	volatile int32_t x327 = INT32_MAX;
	int32_t x328 = INT32_MIN;
	int64_t t59 = 14094693LL;

	t59 = (((x325*x326)&x327)/x328);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x329 = 53953785LLU;
	int8_t x330 = INT8_MIN;
	volatile uint8_t x331 = 3U;
	volatile uint64_t t60 = 45120713989372LLU;

	t60 = (((x329*x330)&x331)/x332);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x333 = -39939512;
	int16_t x334 = 1;
	uint8_t x335 = 12U;
	int16_t x336 = -1;
	int32_t t61 = 50940621;

	t61 = (((x333*x334)&x335)/x336);

	if (t61 != -8) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x342 = -28986844;
	volatile int64_t x343 = -20009690837LL;
	uint64_t t62 = 9401LLU;

	t62 = (((x341*x342)&x343)/x344);

	if (t62 != 69978LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x345 = 0;
	uint16_t x346 = 718U;
	static int16_t x347 = INT16_MAX;
	volatile int64_t x348 = INT64_MIN;

	t63 = (((x345*x346)&x347)/x348);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x350 = INT32_MIN;
	volatile uint64_t x351 = 20716018693595137LLU;
	volatile int64_t x352 = -1LL;
	volatile uint64_t t64 = 8500LLU;

	t64 = (((x349*x350)&x351)/x352);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x357 = UINT32_MAX;
	int16_t x358 = -1;
	int64_t x359 = -602094426007375509LL;
	int8_t x360 = INT8_MIN;
	volatile int64_t t65 = 154738LL;

	t65 = (((x357*x358)&x359)/x360);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x361 = 4U;
	uint64_t x363 = 406005984LLU;
	volatile uint64_t t66 = 11361015885855LLU;

	t66 = (((x361*x362)&x363)/x364);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x365 = -1;
	static int8_t x366 = -1;
	static int8_t x367 = 1;
	uint8_t x368 = UINT8_MAX;

	t67 = (((x365*x366)&x367)/x368);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x369 = 3U;
	int16_t x370 = INT16_MIN;
	int8_t x371 = -1;
	int16_t x372 = INT16_MIN;
	volatile int32_t t68 = 1754;

	t68 = (((x369*x370)&x371)/x372);

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x377 = 388U;
	int64_t x379 = INT64_MIN;
	int16_t x380 = 36;
	int64_t t69 = -112329850733LL;

	t69 = (((x377*x378)&x379)/x380);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x381 = 166723416LL;
	volatile int32_t x383 = INT32_MIN;
	uint32_t x384 = UINT32_MAX;
	volatile int64_t t70 = 244814166445044LL;

	t70 = (((x381*x382)&x383)/x384);

	if (t70 != 116LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x386 = 3109724U;
	uint64_t x387 = 14LLU;
	int32_t x388 = INT32_MAX;

	t71 = (((x385*x386)&x387)/x388);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x389 = 1419374833395428943LLU;
	int32_t x390 = -1;
	volatile int32_t x391 = INT32_MIN;
	int64_t x392 = -210924821045442LL;

	t72 = (((x389*x390)&x391)/x392);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x393 = 5557669781LLU;
	int32_t x394 = INT32_MAX;
	static int16_t x395 = -1;
	int8_t x396 = INT8_MAX;
	volatile uint64_t t73 = 7947663578914LLU;

	t73 = (((x393*x394)&x395)/x396);

	if (t73 != 93976417087587175LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x397 = INT16_MIN;
	static int32_t x398 = -1;
	uint16_t x399 = UINT16_MAX;
	volatile int64_t t74 = 134LL;

	t74 = (((x397*x398)&x399)/x400);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x401 = INT16_MIN;
	int64_t x402 = 0LL;
	int32_t x403 = INT32_MIN;
	static int8_t x404 = INT8_MIN;

	t75 = (((x401*x402)&x403)/x404);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x405 = 41;
	static int8_t x407 = INT8_MIN;
	volatile uint32_t x408 = 27U;
	uint32_t t76 = 461954528U;

	t76 = (((x405*x406)&x407)/x408);

	if (t76 != 159072858U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x409 = 14126LLU;
	int16_t x410 = INT16_MAX;
	uint8_t x411 = 60U;
	uint16_t x412 = 1840U;
	volatile uint64_t t77 = 3682LLU;

	t77 = (((x409*x410)&x411)/x412);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x414 = 179U;
	static int32_t x415 = INT32_MAX;
	int8_t x416 = INT8_MIN;
	volatile uint32_t t78 = 19U;

	t78 = (((x413*x414)&x415)/x416);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x417 = INT8_MIN;
	uint64_t x418 = UINT64_MAX;
	volatile int64_t x420 = -9LL;
	static uint64_t t79 = 17LLU;

	t79 = (((x417*x418)&x419)/x420);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x423 = -1;
	uint64_t x424 = 3317358299132088205LLU;
	volatile uint64_t t80 = 26222143335LLU;

	t80 = (((x421*x422)&x423)/x424);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x430 = UINT8_MAX;
	int32_t x431 = INT32_MIN;
	volatile int64_t x432 = -1LL;
	volatile uint64_t t81 = 42LLU;

	t81 = (((x429*x430)&x431)/x432);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x435 = UINT16_MAX;
	static int64_t x436 = INT64_MAX;
	static uint64_t t82 = 364009898LLU;

	t82 = (((x433*x434)&x435)/x436);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x441 = 0U;
	volatile uint64_t x442 = 22415844LLU;
	uint8_t x443 = 6U;
	int8_t x444 = INT8_MIN;
	volatile uint64_t t83 = 11931LLU;

	t83 = (((x441*x442)&x443)/x444);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x453 = 880256913197LLU;
	static uint8_t x454 = 44U;
	volatile uint16_t x455 = 255U;
	static int64_t x456 = -3060306444269508858LL;
	uint64_t t84 = 21LLU;

	t84 = (((x453*x454)&x455)/x456);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x457 = INT8_MIN;
	int64_t x458 = -56646994785557062LL;
	uint32_t x459 = 24717333U;
	static int32_t x460 = -1;
	volatile int64_t t85 = -12LL;

	t85 = (((x457*x458)&x459)/x460);

	if (t85 != -2695168LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x461 = -3156;
	static int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MIN;

	t86 = (((x461*x462)&x463)/x464);

	if (t86 != 3156) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x465 = UINT16_MAX;
	uint32_t x466 = 3560042U;
	int8_t x467 = -1;
	volatile int64_t x468 = INT64_MAX;

	t87 = (((x465*x466)&x467)/x468);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x469 = -1LL;
	int8_t x470 = -1;
	uint32_t x471 = UINT32_MAX;
	volatile uint16_t x472 = UINT16_MAX;
	int64_t t88 = 1LL;

	t88 = (((x469*x470)&x471)/x472);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = -1;
	uint16_t x478 = 28U;
	int32_t x479 = -3;
	static volatile int32_t t89 = 121;

	t89 = (((x477*x478)&x479)/x480);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x485 = INT16_MIN;
	volatile int16_t x486 = 50;
	int16_t x488 = INT16_MIN;
	int32_t t90 = 208980496;

	t90 = (((x485*x486)&x487)/x488);

	if (t90 != 50) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x489 = 4U;
	int8_t x490 = 0;
	int32_t x491 = INT32_MAX;
	int32_t x492 = INT32_MIN;
	volatile int32_t t91 = 164;

	t91 = (((x489*x490)&x491)/x492);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x493 = 103U;
	static int16_t x494 = -1;
	uint32_t x495 = 824516572U;
	int16_t x496 = -1;
	uint32_t t92 = 0U;

	t92 = (((x493*x494)&x495)/x496);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x497 = 50335436;
	static int8_t x498 = -1;
	uint64_t x500 = 205LLU;
	volatile uint64_t t93 = 4464LLU;

	t93 = (((x497*x498)&x499)/x500);

	if (t93 != 20705521LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x501 = 28LLU;
	int32_t x502 = INT32_MAX;
	int32_t x503 = -47;
	volatile int16_t x504 = INT16_MIN;
	uint64_t t94 = 2895862754227596LLU;

	t94 = (((x501*x502)&x503)/x504);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x513 = -1;
	static volatile int64_t x514 = 437203LL;
	volatile uint64_t x515 = 26770LLU;
	int64_t x516 = 222628742LL;
	static volatile uint64_t t95 = 1294247468413303LLU;

	t95 = (((x513*x514)&x515)/x516);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x518 = 1733U;
	static int8_t x519 = INT8_MAX;
	int16_t x520 = INT16_MAX;
	volatile int32_t t96 = 387995012;

	t96 = (((x517*x518)&x519)/x520);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x521 = 28U;
	int16_t x522 = INT16_MAX;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t97 = 11201003264620LLU;

	t97 = (((x521*x522)&x523)/x524);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x530 = INT16_MAX;
	static volatile uint32_t x531 = 110052733U;
	int32_t x532 = -1;
	volatile uint64_t t98 = 8207871497258635691LLU;

	t98 = (((x529*x530)&x531)/x532);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x535 = 4042;
	static uint8_t x536 = 36U;
	int32_t t99 = -4479081;

	t99 = (((x533*x534)&x535)/x536);

	if (t99 != 89) { NG(); } else { ; }
	
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

