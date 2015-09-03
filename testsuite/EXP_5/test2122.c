#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 61118363321079LL;
int16_t x15 = -1;
volatile uint64_t x20 = UINT64_MAX;
int32_t t5 = 11626;
volatile int64_t x25 = -8964432289726LL;
int32_t t7 = -4288170;
static int8_t x36 = INT8_MIN;
volatile uint64_t t8 = 71769033861LLU;
int16_t x42 = -1957;
int8_t x56 = INT8_MIN;
volatile int16_t x58 = INT16_MIN;
int32_t t14 = 92;
int64_t x68 = INT64_MIN;
static int32_t t18 = -2;
volatile int32_t x78 = -22;
int16_t x88 = 9;
int16_t x93 = INT16_MAX;
int8_t x94 = INT8_MIN;
volatile int32_t x105 = 2628;
uint64_t x120 = 201021111778LLU;
int16_t x124 = 187;
int8_t x131 = INT8_MIN;
int16_t x132 = -929;
int64_t x146 = 130354562412553LL;
int8_t x148 = -1;
volatile uint64_t x156 = UINT64_MAX;
volatile int32_t x161 = INT32_MAX;
int8_t x166 = INT8_MIN;
int32_t t41 = 7322436;
static int16_t x172 = INT16_MIN;
volatile int8_t x174 = INT8_MIN;
int64_t x181 = -1LL;
volatile int64_t t45 = 859319395LL;
int8_t x191 = -1;
int8_t x193 = INT8_MIN;
int64_t x199 = -1LL;
int64_t x201 = INT64_MIN;
int8_t x217 = -1;
volatile uint64_t t55 = 236960244067869143LLU;
int32_t t56 = 380;
volatile int8_t x229 = INT8_MAX;
int8_t x231 = 15;
int32_t t57 = -23619666;
volatile int64_t x233 = 8153LL;
static int64_t x237 = INT64_MAX;
uint64_t x238 = UINT64_MAX;
uint32_t x239 = 5857U;
int64_t x243 = INT64_MIN;
int32_t t60 = -915647;
int64_t x249 = INT64_MIN;
static int64_t t62 = -188103930831LL;
static uint32_t x254 = 2539U;
int32_t x263 = -15;
volatile uint64_t t66 = 59LLU;
int32_t x270 = INT32_MIN;
int8_t x276 = INT8_MIN;
int32_t t68 = -169594570;
uint32_t x281 = UINT32_MAX;
volatile int64_t x282 = -1LL;
uint32_t x283 = 0U;
volatile uint32_t t70 = UINT32_MAX;
int8_t x289 = 1;
int8_t x291 = -1;
static uint8_t x293 = 52U;
int32_t x294 = 879721007;
volatile uint64_t x295 = UINT64_MAX;
static volatile int8_t x296 = -1;
uint64_t x310 = 16483787240LLU;
volatile int64_t x315 = -97941763LL;
static int8_t x323 = INT8_MIN;
int32_t x326 = 1484736;
uint8_t x327 = 25U;
int64_t t83 = 2044880394371796904LL;
int64_t x337 = INT64_MIN;
uint8_t x338 = 96U;
int32_t x343 = 4313;
uint32_t x353 = 6075357U;
static uint16_t x354 = UINT16_MAX;
static int32_t x355 = INT32_MIN;
int16_t x361 = INT16_MIN;
static int16_t x367 = INT16_MAX;
uint16_t x381 = 6U;
uint16_t x384 = UINT16_MAX;
uint16_t x389 = 2845U;
uint32_t x391 = 2U;
int16_t x393 = -11343;


void f0(void) {
	static volatile int32_t x2 = -830067576;
	uint16_t x3 = 401U;
	int8_t x4 = INT8_MIN;
	int64_t t0 = -1LL;

	t0 = (x1*((x2^x3)==x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 6292LLU;
	int8_t x6 = 0;
	static uint16_t x7 = UINT16_MAX;
	int8_t x8 = INT8_MIN;
	uint64_t t1 = 241441076048041948LLU;

	t1 = (x5*((x6^x7)==x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	static int16_t x10 = INT16_MIN;
	uint16_t x11 = 12809U;
	static int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -1;

	t2 = (x9*((x10^x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	volatile int64_t x14 = 22242262932768LL;
	int64_t x16 = -1LL;
	volatile int32_t t3 = -50;

	t3 = (x13*((x14^x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = -2LL;
	uint8_t x19 = UINT8_MAX;
	int32_t t4 = 977654078;

	t4 = (x17*((x18^x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	int64_t x22 = INT64_MIN;
	int16_t x23 = -1;
	int64_t x24 = -1LL;

	t5 = (x21*((x22^x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x26 = 1690998U;
	static int32_t x27 = INT32_MIN;
	int32_t x28 = 85;
	volatile int64_t t6 = -481813010493587LL;

	t6 = (x25*((x26^x27)==x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int32_t x30 = INT32_MAX;
	int64_t x31 = 277389509395633812LL;
	uint64_t x32 = 99187511414293LLU;

	t7 = (x29*((x30^x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 12635047828156465LLU;
	int16_t x34 = INT16_MAX;
	static uint32_t x35 = 8896U;

	t8 = (x33*((x34^x35)==x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int16_t x38 = -86;
	volatile uint32_t x39 = UINT32_MAX;
	static int32_t x40 = INT32_MAX;
	volatile int64_t t9 = 2382479779351LL;

	t9 = (x37*((x38^x39)==x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = UINT32_MAX;
	int32_t x43 = -1;
	volatile int16_t x44 = 59;
	uint32_t t10 = 47099726U;

	t10 = (x41*((x42^x43)==x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 59214547LLU;
	int32_t x46 = INT32_MAX;
	volatile int8_t x47 = INT8_MAX;
	uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 34112LLU;

	t11 = (x45*((x46^x47)==x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile int32_t x50 = INT32_MIN;
	int8_t x51 = -1;
	static int64_t x52 = -3619916161LL;
	volatile int32_t t12 = -147858185;

	t12 = (x49*((x50^x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 23U;
	uint64_t x54 = 4137839599LLU;
	int64_t x55 = -8811LL;
	int32_t t13 = -1386;

	t13 = (x53*((x54^x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 14;
	int32_t x59 = INT32_MIN;
	volatile int64_t x60 = 208LL;

	t14 = (x57*((x58^x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = UINT64_MAX;
	static int64_t x62 = 1015190685255LL;
	uint64_t x63 = 50287050971LLU;
	int8_t x64 = 1;
	volatile uint64_t t15 = 34101561LLU;

	t15 = (x61*((x62^x63)==x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 0;
	static volatile int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MAX;
	volatile int32_t t16 = 0;

	t16 = (x65*((x66^x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MAX;
	static int32_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	volatile uint64_t x72 = 80473502534453LLU;
	int32_t t17 = -6;

	t17 = (x69*((x70^x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = INT32_MIN;
	volatile int64_t x74 = INT64_MAX;
	static int8_t x75 = -1;
	uint32_t x76 = 1391942900U;

	t18 = (x73*((x74^x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 5362864382LLU;
	int64_t x79 = INT64_MIN;
	volatile uint16_t x80 = 474U;
	volatile uint64_t t19 = 2448127693581325909LLU;

	t19 = (x77*((x78^x79)==x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = UINT32_MAX;
	static volatile int32_t x82 = INT32_MIN;
	volatile uint8_t x83 = 3U;
	int8_t x84 = -1;
	uint32_t t20 = 905U;

	t20 = (x81*((x82^x83)==x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	volatile int16_t x86 = 1;
	uint32_t x87 = 269432U;
	static int32_t t21 = 18772098;

	t21 = (x85*((x86^x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int32_t x90 = INT32_MAX;
	uint8_t x91 = 27U;
	volatile int16_t x92 = 0;
	static volatile uint32_t t22 = 52670763U;

	t22 = (x89*((x90^x91)==x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x95 = INT8_MIN;
	int8_t x96 = 1;
	static int32_t t23 = -10942385;

	t23 = (x93*((x94^x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = -1;
	uint8_t x99 = UINT8_MAX;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -1;

	t24 = (x97*((x98^x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = UINT8_MAX;
	static int32_t x102 = 8;
	static uint16_t x103 = 1U;
	int32_t x104 = -1;
	static int32_t t25 = -76429;

	t25 = (x101*((x102^x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x106 = -1;
	static int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -1070443768;

	t26 = (x105*((x106^x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	volatile int32_t x110 = INT32_MAX;
	volatile int32_t x111 = -1;
	uint16_t x112 = 949U;
	volatile uint32_t t27 = 3421319U;

	t27 = (x109*((x110^x111)==x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -322544995400449633LL;
	int32_t x114 = -1394;
	static volatile int32_t x115 = INT32_MAX;
	int8_t x116 = INT8_MIN;
	int64_t t28 = -26864205874595685LL;

	t28 = (x113*((x114^x115)==x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 0U;
	int64_t x118 = INT64_MIN;
	int16_t x119 = INT16_MAX;
	int32_t t29 = -6;

	t29 = (x117*((x118^x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	static int32_t x122 = -47636;
	uint8_t x123 = 1U;
	static uint64_t t30 = 1LLU;

	t30 = (x121*((x122^x123)==x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 58U;
	int32_t x126 = -1;
	uint8_t x127 = 111U;
	static int32_t x128 = INT32_MAX;
	static volatile uint32_t t31 = 293420935U;

	t31 = (x125*((x126^x127)==x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MAX;
	volatile int16_t x130 = -15886;
	int32_t t32 = 57964;

	t32 = (x129*((x130^x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -1;
	uint32_t x134 = 678U;
	int64_t x135 = INT64_MAX;
	int8_t x136 = -1;
	volatile int32_t t33 = 297;

	t33 = (x133*((x134^x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = -1;
	static volatile uint16_t x139 = UINT16_MAX;
	int16_t x140 = 1;
	static volatile int32_t t34 = -22409973;

	t34 = (x137*((x138^x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	static int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	int64_t x144 = INT64_MIN;
	volatile int32_t t35 = 288343036;

	t35 = (x141*((x142^x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 2911U;
	int16_t x147 = 10381;
	uint32_t t36 = 542U;

	t36 = (x145*((x146^x147)==x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 628556852U;
	int32_t x150 = -423;
	int16_t x151 = INT16_MAX;
	uint32_t x152 = 10388155U;
	uint32_t t37 = 12087U;

	t37 = (x149*((x150^x151)==x152));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int32_t x154 = INT32_MAX;
	int8_t x155 = INT8_MAX;
	int32_t t38 = -3;

	t38 = (x153*((x154^x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int8_t x158 = 1;
	static uint16_t x159 = UINT16_MAX;
	static volatile int8_t x160 = INT8_MIN;
	int32_t t39 = -160113;

	t39 = (x157*((x158^x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MIN;
	volatile int16_t x163 = 12419;
	int64_t x164 = -53420228431721810LL;
	volatile int32_t t40 = 6332;

	t40 = (x161*((x162^x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -5700;
	int64_t x167 = INT64_MIN;
	int8_t x168 = -1;

	t41 = (x165*((x166^x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 5U;
	static int64_t x170 = INT64_MIN;
	static volatile int32_t x171 = INT32_MAX;
	volatile int32_t t42 = -924022296;

	t42 = (x169*((x170^x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 0;
	uint32_t x175 = 110658U;
	int32_t x176 = -1;
	int32_t t43 = 514874165;

	t43 = (x173*((x174^x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = -1;
	static int16_t x178 = -1419;
	int32_t x179 = -1;
	static int64_t x180 = 0LL;
	volatile int32_t t44 = 53815496;

	t44 = (x177*((x178^x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = -1;
	int64_t x183 = -53602445385041467LL;
	static int8_t x184 = -1;

	t45 = (x181*((x182^x183)==x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	uint64_t x186 = UINT64_MAX;
	int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = -987063371;

	t46 = (x185*((x186^x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	uint16_t x190 = 5008U;
	volatile uint32_t x192 = 82U;
	int64_t t47 = -44966507384176663LL;

	t47 = (x189*((x190^x191)==x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = UINT64_MAX;
	int16_t x195 = INT16_MAX;
	int16_t x196 = INT16_MIN;
	static int32_t t48 = 16879;

	t48 = (x193*((x194^x195)==x196));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	uint64_t x198 = UINT64_MAX;
	static volatile int8_t x200 = -2;
	volatile int32_t t49 = 1840;

	t49 = (x197*((x198^x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = 0;
	int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MAX;
	volatile int64_t t50 = -12599LL;

	t50 = (x201*((x202^x203)==x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	static int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MIN;
	volatile int8_t x208 = 1;
	volatile uint32_t t51 = 285786U;

	t51 = (x205*((x206^x207)==x208));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 8358;
	int64_t x210 = INT64_MAX;
	volatile int64_t x211 = INT64_MIN;
	static volatile uint32_t x212 = 13146U;
	int32_t t52 = 1;

	t52 = (x209*((x210^x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	int64_t x214 = 12639521469272029LL;
	uint64_t x215 = UINT64_MAX;
	volatile uint16_t x216 = UINT16_MAX;
	int32_t t53 = -475889;

	t53 = (x213*((x214^x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MIN;
	volatile int32_t x219 = INT32_MAX;
	static int8_t x220 = INT8_MAX;
	static volatile int32_t t54 = 0;

	t54 = (x217*((x218^x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = UINT64_MAX;
	int16_t x222 = INT16_MAX;
	volatile int32_t x223 = -1;
	int32_t x224 = INT32_MIN;

	t55 = (x221*((x222^x223)==x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	volatile int8_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MAX;

	t56 = (x225*((x226^x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MAX;
	uint64_t x232 = 204833948205511LLU;

	t57 = (x229*((x230^x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = -49;
	int32_t x235 = INT32_MIN;
	volatile int16_t x236 = INT16_MIN;
	volatile int64_t t58 = 25609LL;

	t58 = (x233*((x234^x235)==x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x240 = UINT64_MAX;
	int64_t t59 = 0LL;

	t59 = (x237*((x238^x239)==x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MIN;
	int16_t x244 = -1;

	t60 = (x241*((x242^x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	static int32_t x246 = 11324;
	uint32_t x247 = 351540U;
	int32_t x248 = -1;
	int32_t t61 = 1485;

	t61 = (x245*((x246^x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x250 = -43919560LL;
	int64_t x251 = INT64_MIN;
	int32_t x252 = INT32_MAX;

	t62 = (x249*((x250^x251)==x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = -125323581;

	t63 = (x253*((x254^x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 13580;
	volatile int64_t x258 = INT64_MIN;
	int8_t x259 = -28;
	int8_t x260 = INT8_MAX;
	int32_t t64 = 6837483;

	t64 = (x257*((x258^x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 2886949200413049614LL;
	int16_t x262 = -1;
	uint8_t x264 = 57U;
	volatile int64_t t65 = -1036950331LL;

	t65 = (x261*((x262^x263)==x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 146572869504821LLU;
	int64_t x266 = INT64_MIN;
	int8_t x267 = -1;
	int8_t x268 = -1;

	t66 = (x265*((x266^x267)==x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = 0U;
	static uint64_t x271 = 8533122162066955LLU;
	int32_t x272 = INT32_MIN;
	int32_t t67 = -30298;

	t67 = (x269*((x270^x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 1U;
	int16_t x274 = -1;
	int32_t x275 = 70013870;

	t68 = (x273*((x274^x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;
	int32_t t69 = 65490025;

	t69 = (x277*((x278^x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x284 = -1;

	t70 = (x281*((x282^x283)==x284));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	uint8_t x286 = UINT8_MAX;
	uint8_t x287 = 9U;
	int32_t x288 = -1;
	volatile int64_t t71 = 15426LL;

	t71 = (x285*((x286^x287)==x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x290 = -2391846;
	int32_t x292 = INT32_MAX;
	static volatile int32_t t72 = 125174370;

	t72 = (x289*((x290^x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t t73 = -3537;

	t73 = (x293*((x294^x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 38LLU;
	int8_t x298 = 6;
	int32_t x299 = INT32_MAX;
	volatile int32_t x300 = INT32_MAX;
	static uint64_t t74 = 206870186574852LLU;

	t74 = (x297*((x298^x299)==x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 11484800170LL;
	static int32_t x302 = INT32_MIN;
	uint32_t x303 = 2395912U;
	static volatile int64_t x304 = INT64_MIN;
	static volatile int64_t t75 = -100339LL;

	t75 = (x301*((x302^x303)==x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -52934254;
	static uint32_t x306 = 45992641U;
	int64_t x307 = 546509671LL;
	uint32_t x308 = 9862646U;
	volatile int32_t t76 = -9043;

	t76 = (x305*((x306^x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	int16_t x311 = INT16_MIN;
	static volatile int32_t x312 = INT32_MIN;
	int32_t t77 = 117499007;

	t77 = (x309*((x310^x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MIN;
	uint16_t x314 = 865U;
	volatile int32_t x316 = 46025;
	volatile int32_t t78 = 3;

	t78 = (x313*((x314^x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -101840;
	uint32_t x318 = UINT32_MAX;
	static int16_t x319 = 1564;
	int8_t x320 = INT8_MAX;
	volatile int32_t t79 = -41373;

	t79 = (x317*((x318^x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 4U;
	static volatile uint16_t x322 = UINT16_MAX;
	volatile uint64_t x324 = UINT64_MAX;
	int32_t t80 = 4656108;

	t80 = (x321*((x322^x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = 681371LL;
	volatile int64_t x328 = 31271096155842011LL;
	volatile int64_t t81 = 4LL;

	t81 = (x325*((x326^x327)==x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	static uint16_t x330 = 29953U;
	volatile int64_t x331 = -1LL;
	uint64_t x332 = 387643907726644LLU;
	int32_t t82 = 10375;

	t82 = (x329*((x330^x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = -23;
	static int64_t x335 = INT64_MIN;
	int16_t x336 = INT16_MIN;

	t83 = (x333*((x334^x335)==x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x339 = -1LL;
	uint8_t x340 = UINT8_MAX;
	static volatile int64_t t84 = 76321783943730LL;

	t84 = (x337*((x338^x339)==x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -5;
	static int64_t x342 = INT64_MIN;
	int32_t x344 = -398;
	int32_t t85 = -1;

	t85 = (x341*((x342^x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 935695042068175244LLU;
	int8_t x346 = INT8_MAX;
	uint32_t x347 = 959U;
	uint8_t x348 = 9U;
	volatile uint64_t t86 = 53516707LLU;

	t86 = (x345*((x346^x347)==x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 0;
	int64_t x350 = -21853344408LL;
	static uint8_t x351 = 36U;
	uint32_t x352 = UINT32_MAX;
	int32_t t87 = 255;

	t87 = (x349*((x350^x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x356 = INT32_MAX;
	static volatile uint32_t t88 = 18524U;

	t88 = (x353*((x354^x355)==x356));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -115233433534LL;
	uint8_t x358 = UINT8_MAX;
	volatile int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	volatile int64_t t89 = 3517254553731643LL;

	t89 = (x357*((x358^x359)==x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 1U;
	volatile int64_t x363 = INT64_MIN;
	static volatile int32_t x364 = INT32_MIN;
	volatile int32_t t90 = 397;

	t90 = (x361*((x362^x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = -1;
	volatile uint16_t x368 = UINT16_MAX;
	int32_t t91 = -61368;

	t91 = (x365*((x366^x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = 1450189580041LL;
	int16_t x370 = INT16_MIN;
	volatile int32_t x371 = INT32_MIN;
	int32_t x372 = INT32_MIN;
	int64_t t92 = -754873712346LL;

	t92 = (x369*((x370^x371)==x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	static uint16_t x374 = UINT16_MAX;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = UINT64_MAX;
	int32_t t93 = -113124398;

	t93 = (x373*((x374^x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = 549;
	int16_t x378 = -1;
	static int16_t x379 = INT16_MIN;
	uint8_t x380 = 17U;
	volatile int32_t t94 = -31042;

	t94 = (x377*((x378^x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	int64_t x383 = -1LL;
	static int32_t t95 = 6233750;

	t95 = (x381*((x382^x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	static int16_t x386 = 14339;
	int64_t x387 = -18917629078378LL;
	int16_t x388 = 147;
	int32_t t96 = 39839;

	t96 = (x385*((x386^x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = -735;
	uint32_t x392 = 2029U;
	static volatile int32_t t97 = 2;

	t97 = (x389*((x390^x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MIN;
	uint32_t x395 = UINT32_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = -702036638;

	t98 = (x393*((x394^x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int16_t x398 = 0;
	int8_t x399 = 1;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = 117997695;

	t99 = (x397*((x398^x399)==x400));

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

