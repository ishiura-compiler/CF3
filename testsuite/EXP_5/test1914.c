#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
int8_t x5 = 2;
volatile uint32_t x6 = 3860767U;
volatile int32_t x13 = INT32_MIN;
static uint32_t x14 = UINT32_MAX;
uint64_t x21 = 278980707890903LLU;
static int16_t x33 = INT16_MIN;
int16_t x37 = INT16_MAX;
int8_t x39 = INT8_MAX;
int32_t x40 = -1;
volatile int32_t x41 = -1;
static int16_t x44 = 3;
uint32_t x46 = 13493U;
static volatile int16_t x48 = 6;
int8_t x52 = INT8_MAX;
volatile int64_t t13 = -6988016762360962LL;
int16_t x63 = -107;
int8_t x64 = -1;
int64_t t19 = 244071816327923124LL;
volatile int16_t x87 = 1;
int32_t t21 = -1658;
static int8_t x101 = -1;
static uint64_t x108 = UINT64_MAX;
volatile uint64_t t25 = 25360093584726LLU;
static uint8_t x110 = UINT8_MAX;
uint16_t x112 = 3U;
int8_t x113 = 2;
uint8_t x114 = UINT8_MAX;
volatile int32_t x118 = INT32_MAX;
int8_t x119 = -5;
uint32_t x121 = 431796U;
uint8_t x124 = 127U;
volatile uint8_t x126 = UINT8_MAX;
int16_t x128 = 1;
static volatile uint64_t x129 = UINT64_MAX;
int16_t x140 = -1;
int32_t x141 = 0;
volatile int8_t x146 = INT8_MIN;
volatile int64_t x154 = INT64_MAX;
uint64_t t36 = 88LLU;
int8_t x157 = -1;
int8_t x158 = INT8_MIN;
int16_t x159 = -1;
int64_t t37 = 2135276847LL;
int32_t x174 = INT32_MAX;
int8_t x177 = -1;
int8_t x183 = -1;
uint16_t x184 = 46U;
int8_t x188 = 1;
int16_t x193 = 10083;
static volatile int64_t x198 = -51465932651428LL;
uint64_t t46 = 83995520617048832LLU;
static int16_t x207 = INT16_MIN;
int8_t x208 = INT8_MIN;
int32_t x210 = 11597;
int32_t t48 = 94066;
uint8_t x220 = 54U;
static int64_t x227 = INT64_MAX;
int8_t x230 = INT8_MIN;
uint8_t x247 = 3U;
static uint64_t x248 = 51575411895274LLU;
volatile uint8_t x257 = 94U;
static uint64_t t60 = 34857720LLU;
int32_t x266 = -1;
volatile int64_t x268 = -12LL;
uint16_t x269 = UINT16_MAX;
static uint8_t x276 = UINT8_MAX;
volatile int64_t x278 = INT64_MAX;
uint16_t x285 = 22U;
int32_t x293 = INT32_MIN;
volatile int64_t x295 = -268LL;
int64_t t68 = 5LL;
int16_t x310 = INT16_MAX;
volatile int64_t t72 = 485LL;
static volatile int8_t x324 = 1;
uint32_t x326 = 89405282U;
uint8_t x327 = 4U;
volatile int64_t t74 = 135622222382LL;
int32_t x334 = INT32_MIN;
static int32_t t76 = 42367616;
volatile int32_t x337 = -1;
uint32_t x343 = 2U;
int64_t x344 = INT64_MIN;
static int64_t x345 = 3667LL;
volatile int32_t x346 = 1;
static int64_t x362 = INT64_MAX;
volatile uint16_t x364 = 170U;
uint32_t x370 = UINT32_MAX;
int16_t x376 = -1;
int32_t x379 = INT32_MIN;
int64_t x380 = 2278266232715557369LL;
static int32_t x382 = -1;
static uint64_t t87 = 800948LLU;
static int16_t x385 = INT16_MIN;
int32_t x388 = INT32_MAX;
int32_t x390 = INT32_MIN;
uint16_t x392 = 76U;
uint64_t x400 = UINT64_MAX;
static int32_t x413 = INT32_MIN;
int64_t x422 = -13258597224LL;
int8_t x424 = INT8_MIN;
volatile int32_t t97 = 2446418;
uint64_t x434 = 4343225380082267LLU;


void f0(void) {
	int64_t x2 = -519535LL;
	int32_t x3 = INT32_MAX;
	volatile uint32_t x4 = 173676U;
	volatile int64_t t0 = 3688714LL;

	t0 = (x1*((x2|x3)%x4));

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x7 = INT64_MIN;
	int16_t x8 = -1;
	int64_t t1 = -118LL;

	t1 = (x5*((x6|x7)%x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 1U;
	int16_t x10 = 23;
	int8_t x11 = -42;
	volatile uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 162057103U;

	t2 = (x9*((x10|x11)%x12));

	if (t2 != 4294967255U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MAX;
	int64_t t3 = 1698678665919LL;

	t3 = (x13*((x14|x15)%x16));

	if (t3 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static int8_t x18 = INT8_MIN;
	int64_t x19 = INT64_MIN;
	int32_t x20 = -1;
	static volatile int64_t t4 = 65383858LL;

	t4 = (x17*((x18|x19)%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	int64_t x24 = -1LL;
	volatile uint64_t t5 = 5204869422136975LLU;

	t5 = (x21*((x22|x23)%x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint32_t x26 = 22627U;
	static int8_t x27 = INT8_MIN;
	volatile uint8_t x28 = UINT8_MAX;
	volatile uint32_t t6 = 110U;

	t6 = (x25*((x26|x27)%x28));

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x34 = 37U;
	static volatile uint32_t x35 = 0U;
	int64_t x36 = INT64_MAX;
	volatile int64_t t7 = -22880911LL;

	t7 = (x33*((x34|x35)%x36));

	if (t7 != -1212416LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = -207;
	int32_t t8 = -4983160;

	t8 = (x37*((x38|x39)%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x42 = 1;
	volatile int16_t x43 = -14;
	int32_t t9 = 1;

	t9 = (x41*((x42|x43)%x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int64_t x47 = -1LL;
	volatile int64_t t10 = -2LL;

	t10 = (x45*((x46|x47)%x48));

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -479;
	int8_t x50 = -1;
	static int64_t x51 = 2031LL;
	static volatile int64_t t11 = 45896818336LL;

	t11 = (x49*((x50|x51)%x52));

	if (t11 != 479LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	uint32_t x54 = 0U;
	static int64_t x55 = INT64_MIN;
	uint8_t x56 = UINT8_MAX;
	static volatile int64_t t12 = 716107743630508LL;

	t12 = (x53*((x54|x55)%x56));

	if (t12 != 128LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 191;
	volatile int64_t x58 = 2667361LL;
	int8_t x59 = -1;
	uint8_t x60 = UINT8_MAX;

	t13 = (x57*((x58|x59)%x60));

	if (t13 != -191LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 115;
	static int8_t x62 = 17;
	int32_t t14 = 535364063;

	t14 = (x61*((x62|x63)%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = -3604697;
	int8_t x67 = INT8_MIN;
	static int16_t x68 = INT16_MAX;
	volatile int32_t t15 = -7301992;

	t15 = (x65*((x66|x67)%x68));

	if (t15 != 2916352) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	static volatile int32_t x70 = -628;
	volatile int8_t x71 = INT8_MIN;
	volatile uint16_t x72 = 1U;
	volatile int32_t t16 = -635615486;

	t16 = (x69*((x70|x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	uint16_t x75 = 6468U;
	int16_t x76 = INT16_MAX;
	int64_t t17 = -3221747LL;

	t17 = (x73*((x74|x75)%x76));

	if (t17 != -15032385536LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = -1;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = -3284533925LL;
	static int8_t x80 = INT8_MIN;
	int64_t t18 = 16942397748009408LL;

	t18 = (x77*((x78|x79)%x80));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 111161U;
	int64_t x82 = INT64_MAX;
	static uint16_t x83 = 3396U;
	int16_t x84 = INT16_MIN;

	t19 = (x81*((x82|x83)%x84));

	if (t19 != 3642412487LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 1027U;
	volatile int8_t x86 = INT8_MIN;
	uint16_t x88 = 5U;
	int32_t t20 = -11;

	t20 = (x85*((x86|x87)%x88));

	if (t20 != -2054) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = -1;
	int32_t x90 = -1;
	volatile int32_t x91 = 6;
	int32_t x92 = -1;

	t21 = (x89*((x90|x91)%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x93 = 5U;
	int64_t x94 = INT64_MAX;
	static int16_t x95 = INT16_MAX;
	int32_t x96 = -57295;
	int64_t t22 = 72LL;

	t22 = (x93*((x94|x95)%x96));

	if (t22 != 113085LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	int32_t x99 = -12137772;
	int8_t x100 = 45;
	volatile int64_t t23 = -71160312827321222LL;

	t23 = (x97*((x98|x99)%x100));

	if (t23 != 393216LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = INT64_MIN;
	static int16_t x103 = -1;
	int16_t x104 = INT16_MIN;
	int64_t t24 = -1451LL;

	t24 = (x101*((x102|x103)%x104));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -1;
	volatile int16_t x106 = INT16_MAX;
	volatile uint32_t x107 = UINT32_MAX;

	t25 = (x105*((x106|x107)%x108));

	if (t25 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = -89;
	volatile uint32_t x111 = UINT32_MAX;
	static volatile uint32_t t26 = 253U;

	t26 = (x109*((x110|x111)%x112));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x115 = 1U;
	uint32_t x116 = 26U;
	volatile uint32_t t27 = 35060U;

	t27 = (x113*((x114|x115)%x116));

	if (t27 != 42U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	int64_t x120 = 844621905LL;
	volatile int64_t t28 = 1599342463LL;

	t28 = (x117*((x118|x119)%x120));

	if (t28 != 2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x122 = UINT16_MAX;
	volatile int64_t x123 = -1LL;
	volatile int64_t t29 = 2032272627556948LL;

	t29 = (x121*((x122|x123)%x124));

	if (t29 != -431796LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 6183273U;
	int8_t x127 = INT8_MIN;
	volatile uint32_t t30 = 3231951U;

	t30 = (x125*((x126|x127)%x128));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = -1;
	static uint16_t x131 = 15U;
	int8_t x132 = -7;
	static volatile uint64_t t31 = 3666387659604LLU;

	t31 = (x129*((x130|x131)%x132));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = INT32_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	int32_t x139 = -3;
	int32_t t32 = -2391;

	t32 = (x137*((x138|x139)%x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = 3920;
	int32_t x143 = INT32_MIN;
	int8_t x144 = -1;
	int32_t t33 = 187;

	t33 = (x141*((x142|x143)%x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = UINT16_MAX;
	volatile int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MIN;
	int64_t t34 = -21250476LL;

	t34 = (x145*((x146|x147)%x148));

	if (t34 != -8388480LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x149 = 1;
	volatile int16_t x150 = INT16_MIN;
	uint64_t x151 = UINT64_MAX;
	int32_t x152 = INT32_MAX;
	uint64_t t35 = 3111793074LLU;

	t35 = (x149*((x150|x151)%x152));

	if (t35 != 3LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 13768U;
	uint64_t x155 = UINT64_MAX;
	uint8_t x156 = 19U;

	t36 = (x153*((x154|x155)%x156));

	if (t36 != 220288LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x160 = INT64_MAX;

	t37 = (x157*((x158|x159)%x160));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -1;
	volatile uint16_t x170 = 6U;
	int32_t x171 = 5;
	uint8_t x172 = UINT8_MAX;
	int32_t t38 = -186515109;

	t38 = (x169*((x170|x171)%x172));

	if (t38 != -7) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -227LL;
	volatile int64_t x175 = INT64_MAX;
	uint64_t x176 = 359593018985LLU;
	uint64_t t39 = 0LLU;

	t39 = (x173*((x174|x175)%x176));

	if (t39 != 18446688273134346457LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x178 = 1796050369LL;
	uint32_t x179 = UINT32_MAX;
	static int32_t x180 = INT32_MIN;
	volatile int64_t t40 = -358LL;

	t40 = (x177*((x178|x179)%x180));

	if (t40 != -2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x181 = UINT16_MAX;
	volatile int64_t x182 = -20778405LL;
	volatile int64_t t41 = -6416025435LL;

	t41 = (x181*((x182|x183)%x184));

	if (t41 != -65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = UINT64_MAX;
	int32_t x186 = -1;
	volatile int16_t x187 = INT16_MIN;
	uint64_t t42 = 19446396450LLU;

	t42 = (x185*((x186|x187)%x188));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x189 = 20064U;
	volatile int32_t x190 = INT32_MAX;
	uint64_t x191 = 14218401LLU;
	uint64_t x192 = UINT64_MAX;
	uint64_t t43 = 117477284LLU;

	t43 = (x189*((x190|x191)%x192));

	if (t43 != 43087111893408LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -1;
	volatile int32_t t44 = 220333621;

	t44 = (x193*((x194|x195)%x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MAX;
	int64_t x199 = -1565848140444061LL;
	static uint64_t x200 = UINT64_MAX;
	uint64_t t45 = 3819356468397050LLU;

	t45 = (x197*((x198|x199)%x200));

	if (t45 != 9223372038064976257LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x201 = 22277928728363787LLU;
	volatile int32_t x202 = INT32_MIN;
	volatile uint32_t x203 = 240666U;
	volatile int8_t x204 = INT8_MAX;

	t46 = (x201*((x202|x203)%x204));

	if (t46 != 200501358555274083LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = -13477464823459LL;
	int64_t x206 = -1LL;
	int64_t t47 = -173346504LL;

	t47 = (x205*((x206|x207)%x208));

	if (t47 != 13477464823459LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x209 = 2U;
	int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MIN;

	t48 = (x209*((x210|x211)%x212));

	if (t48 != -102) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = -3894699;
	int8_t x214 = INT8_MIN;
	static volatile int16_t x215 = INT16_MAX;
	static uint32_t x216 = 1956U;
	uint32_t t49 = 201524U;

	t49 = (x213*((x214|x215)%x216));

	if (t49 != 3909392095U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = -1;
	int16_t x219 = -166;
	int32_t t50 = -124;

	t50 = (x217*((x218|x219)%x220));

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	static volatile int64_t x222 = INT64_MIN;
	volatile uint64_t x223 = 15LLU;
	int64_t x224 = -14036756456397133LL;
	static volatile uint64_t t51 = 25LLU;

	t51 = (x221*((x222|x223)%x224));

	if (t51 != 18446744041497296896LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = 1U;
	uint16_t x226 = 4U;
	int64_t x228 = -1LL;
	int64_t t52 = 53103388973LL;

	t52 = (x225*((x226|x227)%x228));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = -1;
	int16_t x231 = -54;
	int8_t x232 = INT8_MIN;
	int32_t t53 = -26711;

	t53 = (x229*((x230|x231)%x232));

	if (t53 != 54) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = -329;
	int64_t x235 = INT64_MIN;
	int8_t x236 = -1;
	int64_t t54 = 17048158024070744LL;

	t54 = (x233*((x234|x235)%x236));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x237 = 11LLU;
	static int8_t x238 = -1;
	int64_t x239 = INT64_MAX;
	int64_t x240 = INT64_MIN;
	uint64_t t55 = 767438146637LLU;

	t55 = (x237*((x238|x239)%x240));

	if (t55 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = 0;
	int16_t x242 = -5;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	int32_t t56 = 224073;

	t56 = (x241*((x242|x243)%x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = UINT8_MAX;
	static int16_t x246 = INT16_MAX;
	static uint64_t t57 = 1838149578554LLU;

	t57 = (x245*((x246|x247)%x248));

	if (t57 != 8355585LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x249 = INT64_MIN;
	volatile uint16_t x250 = 2U;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = 1;
	volatile int64_t t58 = -6320606LL;

	t58 = (x249*((x250|x251)%x252));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x253 = 4538U;
	int8_t x254 = 6;
	int32_t x255 = 229125167;
	int64_t x256 = INT64_MIN;
	static int64_t t59 = 11885192062005LL;

	t59 = (x253*((x254|x255)%x256));

	if (t59 != 1039770007846LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x258 = 53616600;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MIN;

	t60 = (x257*((x258|x259)%x260));

	if (t60 != 201863462818LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = INT64_MIN;
	int64_t x262 = 120382991720347LL;
	volatile int64_t x263 = 485212LL;
	int8_t x264 = -1;
	static int64_t t61 = -4765207865253LL;

	t61 = (x261*((x262|x263)%x264));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = -3;
	volatile int8_t x267 = INT8_MIN;
	int64_t t62 = 4872280LL;

	t62 = (x265*((x266|x267)%x268));

	if (t62 != 3LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x270 = 1;
	volatile int8_t x271 = 1;
	int32_t x272 = INT32_MIN;
	volatile int32_t t63 = -163960131;

	t63 = (x269*((x270|x271)%x272));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x273 = 17436U;
	int16_t x274 = INT16_MIN;
	uint32_t x275 = 223U;
	static uint32_t t64 = 1762426U;

	t64 = (x273*((x274|x275)%x276));

	if (t64 != 1673856U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x279 = 0;
	int32_t x280 = INT32_MIN;
	volatile int64_t t65 = -647459LL;

	t65 = (x277*((x278|x279)%x280));

	if (t65 != 547608329985LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MIN;
	volatile uint32_t x282 = 1796354313U;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = INT64_MIN;
	volatile int64_t t66 = 6LL;

	t66 = (x281*((x282|x283)%x284));

	if (t66 != -140737488322560LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x286 = 5599U;
	volatile int8_t x287 = -3;
	int16_t x288 = -8;
	volatile int32_t t67 = 3;

	t67 = (x285*((x286|x287)%x288));

	if (t67 != -22) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x294 = -1;
	uint32_t x296 = 6U;

	t68 = (x293*((x294|x295)%x296));

	if (t68 != 2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x297 = 32565986394LLU;
	uint64_t x298 = 3690866789447LLU;
	uint64_t x299 = UINT64_MAX;
	volatile int16_t x300 = 2;
	uint64_t t69 = 184225024601113LLU;

	t69 = (x297*((x298|x299)%x300));

	if (t69 != 32565986394LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x301 = 1U;
	static uint8_t x302 = 0U;
	volatile uint8_t x303 = 40U;
	int32_t x304 = INT32_MAX;
	static volatile uint32_t t70 = 290U;

	t70 = (x301*((x302|x303)%x304));

	if (t70 != 40U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x309 = 349LLU;
	int8_t x311 = -40;
	uint64_t x312 = 4033LLU;
	volatile uint64_t t71 = 4960146LLU;

	t71 = (x309*((x310|x311)%x312));

	if (t71 != 1049792LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MAX;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	uint8_t x316 = UINT8_MAX;

	t72 = (x313*((x314|x315)%x316));

	if (t72 != -16256LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = INT16_MIN;
	int16_t x322 = -3;
	int64_t x323 = INT64_MAX;
	volatile int64_t t73 = -3657485539548LL;

	t73 = (x321*((x322|x323)%x324));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = 187500922883LL;
	volatile int64_t x328 = -1LL;

	t74 = (x325*((x326|x327)%x328));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x329 = INT8_MAX;
	uint16_t x330 = 25U;
	volatile int16_t x331 = -1;
	int32_t x332 = 1;
	int32_t t75 = -1;

	t75 = (x329*((x330|x331)%x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x335 = 1;
	static uint8_t x336 = 18U;

	t76 = (x333*((x334|x335)%x336));

	if (t76 != -255) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x338 = 4U;
	int64_t x339 = 86257528957LL;
	volatile int32_t x340 = INT32_MIN;
	int64_t t77 = -39335LL;

	t77 = (x337*((x338|x339)%x340));

	if (t77 != -358183037LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = -1;
	volatile uint64_t x342 = UINT64_MAX;
	volatile uint64_t t78 = 9242LLU;

	t78 = (x341*((x342|x343)%x344));

	if (t78 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x347 = -473LL;
	int32_t x348 = -1;
	volatile int64_t t79 = -7487LL;

	t79 = (x345*((x346|x347)%x348));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x350 = 1523U;
	volatile uint64_t x351 = 1508443307LLU;
	int8_t x352 = INT8_MIN;
	uint64_t t80 = 294746745LLU;

	t80 = (x349*((x350|x351)%x352));

	if (t80 != 18446743880628765312LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = 718LLU;
	static int8_t x354 = -1;
	int64_t x355 = -1LL;
	uint32_t x356 = UINT32_MAX;
	volatile uint64_t t81 = 2362613LLU;

	t81 = (x353*((x354|x355)%x356));

	if (t81 != 18446744073709550898LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = -3;
	volatile int8_t x363 = 0;
	volatile int64_t t82 = 1768868399731157LL;

	t82 = (x361*((x362|x363)%x364));

	if (t82 != -381LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MAX;
	volatile int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MAX;
	volatile int64_t t83 = 4385203675LL;

	t83 = (x365*((x366|x367)%x368));

	if (t83 != 70111046139904LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x369 = -1;
	volatile int8_t x371 = -28;
	int16_t x372 = -1;
	volatile uint32_t t84 = 931U;

	t84 = (x369*((x370|x371)%x372));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x373 = 3430U;
	int64_t x374 = INT64_MIN;
	int64_t x375 = 38882393783076LL;
	volatile int64_t t85 = 1128506134814LL;

	t85 = (x373*((x374|x375)%x376));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = UINT64_MAX;
	int64_t x378 = -65978442888488LL;
	volatile uint64_t t86 = 778105625532819044LLU;

	t86 = (x377*((x378|x379)%x380));

	if (t86 != 1302770984LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = 94646420992LLU;
	volatile int16_t x383 = INT16_MIN;
	static volatile int32_t x384 = 24839;

	t87 = (x381*((x382|x383)%x384));

	if (t87 != 18446743979063130624LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x386 = INT8_MIN;
	uint8_t x387 = 0U;
	volatile int32_t t88 = 28339043;

	t88 = (x385*((x386|x387)%x388));

	if (t88 != 4194304) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = -1;
	uint32_t x391 = 8210942U;
	uint32_t t89 = 796U;

	t89 = (x389*((x390|x391)%x392));

	if (t89 != 4294967258U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x393 = -819;
	uint64_t x394 = UINT64_MAX;
	volatile int8_t x395 = 4;
	int64_t x396 = -7931LL;
	uint64_t t90 = 541572LLU;

	t90 = (x393*((x394|x395)%x396));

	if (t90 != 18446744073703056946LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 289857282139364LLU;
	int8_t x398 = INT8_MAX;
	volatile uint32_t x399 = UINT32_MAX;
	uint64_t t91 = 10076784939LLU;

	t91 = (x397*((x398|x399)%x400));

	if (t91 != 12129703719502191388LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x401 = 19;
	int16_t x402 = -1;
	volatile int16_t x403 = -1186;
	volatile int8_t x404 = INT8_MIN;
	int32_t t92 = 1;

	t92 = (x401*((x402|x403)%x404));

	if (t92 != -19) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -1;
	int32_t x406 = -1;
	int8_t x407 = INT8_MAX;
	int8_t x408 = -1;
	static volatile int32_t t93 = -3215811;

	t93 = (x405*((x406|x407)%x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MAX;
	int64_t x410 = INT64_MIN;
	static uint64_t x411 = 22LLU;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t94 = 1159655916189782680LLU;

	t94 = (x409*((x410|x411)%x412));

	if (t94 != 9223372036854775786LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x414 = UINT16_MAX;
	int16_t x415 = 7;
	int64_t x416 = -1LL;
	volatile int64_t t95 = 1475372LL;

	t95 = (x413*((x414|x415)%x416));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = INT16_MIN;
	int16_t x423 = -1;
	int64_t t96 = 35997LL;

	t96 = (x421*((x422|x423)%x424));

	if (t96 != 32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x425 = UINT8_MAX;
	int8_t x426 = INT8_MIN;
	int8_t x427 = 13;
	int32_t x428 = -319799772;

	t97 = (x425*((x426|x427)%x428));

	if (t97 != -29325) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = INT8_MIN;
	int32_t x430 = INT32_MIN;
	static uint8_t x431 = UINT8_MAX;
	int8_t x432 = -13;
	volatile int32_t t98 = 64422845;

	t98 = (x429*((x430|x431)%x432));

	if (t98 != 384) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x433 = INT32_MAX;
	static int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;
	volatile uint64_t t99 = 54619LLU;

	t99 = (x433*((x434|x435)%x436));

	if (t99 != 8861616414231522725LLU) { NG(); } else { ; }
	
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

