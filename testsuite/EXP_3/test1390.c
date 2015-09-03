#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x14 = 7;
volatile int16_t x15 = INT16_MIN;
int64_t t2 = 780218LL;
volatile int64_t x18 = -3294384154592LL;
static volatile int32_t t7 = 1046451;
int16_t x46 = 251;
int64_t x48 = -1LL;
int32_t t10 = 115338689;
int32_t x56 = -127242;
int32_t t11 = -1;
int64_t t12 = -26821365155745LL;
int16_t x73 = -421;
volatile int64_t x77 = -127611762LL;
volatile int32_t t19 = -3546402;
volatile int8_t x107 = 18;
int32_t x109 = -949;
uint8_t x112 = 3U;
int64_t x116 = INT64_MIN;
volatile uint32_t t22 = 139U;
int16_t x117 = 2472;
int32_t x122 = -285;
static uint32_t x133 = UINT32_MAX;
int8_t x135 = -1;
volatile uint64_t t25 = 737594LLU;
uint64_t x137 = 578256LLU;
int8_t x156 = -3;
int8_t x161 = 3;
int64_t x189 = 164175LL;
volatile int8_t x193 = INT8_MAX;
static uint8_t x196 = 13U;
uint32_t x206 = 2U;
uint32_t t37 = 488U;
int32_t x210 = -1;
uint32_t x211 = UINT32_MAX;
int32_t t38 = 4;
int32_t x216 = -1;
int8_t x219 = INT8_MAX;
uint64_t x221 = 6652158758864360LLU;
int8_t x226 = INT8_MIN;
static uint8_t x240 = 2U;
uint16_t x248 = 130U;
int8_t x249 = 13;
int32_t x254 = -1;
static int64_t x260 = INT64_MAX;
volatile int64_t t52 = -293327LL;
volatile int16_t x275 = -43;
int64_t x278 = INT64_MAX;
int16_t x279 = INT16_MIN;
static volatile int64_t t54 = 28LL;
static int16_t x283 = -5;
uint32_t x285 = 5048281U;
int64_t x291 = INT64_MIN;
int16_t x295 = INT16_MIN;
volatile int32_t x305 = 103431;
int8_t x308 = INT8_MIN;
uint8_t x311 = 15U;
int32_t t60 = -44480;
int16_t x320 = 1906;
uint32_t x321 = UINT32_MAX;
int64_t x325 = -1LL;
volatile int64_t x327 = INT64_MIN;
int64_t t64 = 33581404LL;
volatile int32_t x331 = INT32_MAX;
uint64_t x335 = 67LLU;
volatile int64_t x336 = INT64_MIN;
uint16_t x340 = UINT16_MAX;
volatile uint64_t x342 = 1273LLU;
int16_t x352 = -39;
volatile int64_t x360 = INT64_MAX;
int64_t x368 = -154137665523028LL;
static int32_t t74 = -23;
int16_t x372 = INT16_MIN;
int32_t x377 = 1550350;
int16_t x378 = -1;
int64_t x379 = INT64_MAX;
static uint64_t x381 = UINT64_MAX;
uint64_t x384 = 1260257999LLU;
static uint16_t x385 = 9U;
static int32_t x394 = -18060227;
static int16_t x395 = -1;
int16_t x398 = INT16_MIN;
uint64_t x399 = UINT64_MAX;
int32_t t83 = 326529;
uint32_t x422 = 6576U;
int32_t t89 = -323474;
static volatile uint32_t t92 = 1251290U;
int64_t x458 = -1LL;
int32_t x463 = INT32_MAX;
int8_t x464 = INT8_MIN;
static int64_t t96 = 7546711972258186LL;


void f0(void) {
	volatile uint8_t x5 = 1U;
	int16_t x6 = INT16_MAX;
	uint8_t x7 = 1U;
	int8_t x8 = INT8_MAX;
	int32_t t0 = 36291596;

	t0 = ((x5*x6)|(x7<x8));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 90384325LLU;
	volatile int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	static int8_t x12 = -1;
	static volatile uint64_t t1 = 42100238530787LLU;

	t1 = ((x9*x10)|(x11<x12));

	if (t1 != 18252645213736534017LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int32_t x16 = INT32_MIN;

	t2 = ((x13*x14)|(x15<x16));

	if (t2 != -7LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = -1;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = 77U;
	int64_t t3 = 32190LL;

	t3 = ((x17*x18)|(x19<x20));

	if (t3 != 3294384154593LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 25U;
	int16_t x22 = -1;
	static volatile int64_t x23 = INT64_MIN;
	volatile int64_t x24 = INT64_MIN;
	int32_t t4 = -63141976;

	t4 = ((x21*x22)|(x23<x24));

	if (t4 != -25) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x25 = 10U;
	volatile int8_t x26 = -7;
	int32_t x27 = INT32_MIN;
	static int8_t x28 = 11;
	volatile uint32_t t5 = 60704453U;

	t5 = ((x25*x26)|(x27<x28));

	if (t5 != 4294967227U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	int64_t x30 = 201566LL;
	volatile int32_t x31 = INT32_MIN;
	static volatile uint64_t x32 = 144024LLU;
	int64_t t6 = 7640552726527LL;

	t6 = ((x29*x30)|(x31<x32));

	if (t6 != 51399330LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	static int16_t x34 = 1478;
	int64_t x35 = -1LL;
	static int64_t x36 = INT64_MIN;

	t7 = ((x33*x34)|(x35<x36));

	if (t7 != -1478) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	uint8_t x42 = UINT8_MAX;
	int64_t x43 = -1LL;
	volatile uint8_t x44 = 3U;
	int32_t t8 = -48238209;

	t8 = ((x41*x42)|(x43<x44));

	if (t8 != 16711425) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x45 = -13;
	volatile uint64_t x47 = 124316785546113187LLU;
	static volatile int32_t t9 = 3037;

	t9 = ((x45*x46)|(x47<x48));

	if (t9 != -3263) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = -7;
	static int8_t x50 = -1;
	int64_t x51 = INT64_MAX;
	uint64_t x52 = UINT64_MAX;

	t10 = ((x49*x50)|(x51<x52));

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MAX;
	static int32_t x55 = INT32_MAX;

	t11 = ((x53*x54)|(x55<x56));

	if (t11 != -4194176) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = -1LL;
	int64_t x59 = -1LL;
	volatile uint32_t x60 = 12186U;

	t12 = ((x57*x58)|(x59<x60));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	static uint16_t x66 = UINT16_MAX;
	volatile uint8_t x67 = 3U;
	int8_t x68 = -45;
	static volatile int32_t t13 = 604;

	t13 = ((x65*x66)|(x67<x68));

	if (t13 != -8388480) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -88722607LL;
	static uint16_t x70 = UINT16_MAX;
	uint8_t x71 = UINT8_MAX;
	uint32_t x72 = 12978761U;
	int64_t t14 = -67606532526785350LL;

	t14 = ((x69*x70)|(x71<x72));

	if (t14 != -5814436049745LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x74 = INT16_MAX;
	int16_t x75 = INT16_MIN;
	int32_t x76 = -1;
	static volatile int32_t t15 = -1117;

	t15 = ((x73*x74)|(x75<x76));

	if (t15 != -13794907) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x78 = -1;
	static uint64_t x79 = 657LLU;
	int64_t x80 = -1LL;
	volatile int64_t t16 = 2682515816LL;

	t16 = ((x77*x78)|(x79<x80));

	if (t16 != 127611763LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MIN;
	volatile int16_t x84 = 3407;
	volatile uint64_t t17 = 576055064141668LLU;

	t17 = ((x81*x82)|(x83<x84));

	if (t17 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 6997;
	int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	static int32_t x88 = INT32_MIN;
	int32_t t18 = 3;

	t18 = ((x85*x86)|(x87<x88));

	if (t18 != -229277696) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = -3;
	int16_t x94 = INT16_MIN;
	uint8_t x95 = 1U;
	int32_t x96 = INT32_MAX;

	t19 = ((x93*x94)|(x95<x96));

	if (t19 != 98305) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x105 = 16;
	volatile uint16_t x106 = 2880U;
	volatile int8_t x108 = INT8_MIN;
	int32_t t20 = -16542;

	t20 = ((x105*x106)|(x107<x108));

	if (t20 != 46080) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x110 = INT16_MIN;
	int16_t x111 = -4;
	static int32_t t21 = 1111091;

	t21 = ((x109*x110)|(x111<x112));

	if (t21 != 31096833) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x113 = -1;
	volatile uint32_t x114 = UINT32_MAX;
	int32_t x115 = INT32_MIN;

	t22 = ((x113*x114)|(x115<x116));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x118 = 44U;
	int32_t x119 = INT32_MIN;
	int8_t x120 = 0;
	int32_t t23 = -28704;

	t23 = ((x117*x118)|(x119<x120));

	if (t23 != 108769) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = 296;
	int64_t x123 = -1LL;
	static int64_t x124 = INT64_MIN;
	int32_t t24 = -11945156;

	t24 = ((x121*x122)|(x123<x124));

	if (t24 != -84360) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x134 = UINT64_MAX;
	int64_t x136 = INT64_MIN;

	t25 = ((x133*x134)|(x135<x136));

	if (t25 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x138 = INT32_MAX;
	int32_t x139 = INT32_MAX;
	static int8_t x140 = -6;
	uint64_t t26 = 121765LLU;

	t26 = ((x137*x138)|(x139<x140));

	if (t26 != 1241795303779632LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MIN;
	int32_t x152 = -1;
	volatile int32_t t27 = -5;

	t27 = ((x149*x150)|(x151<x152));

	if (t27 != 16385) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x153 = 0;
	volatile uint16_t x154 = 1979U;
	int64_t x155 = -592161612573727422LL;
	int32_t t28 = 5;

	t28 = ((x153*x154)|(x155<x156));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x162 = 6U;
	volatile int32_t x163 = INT32_MIN;
	volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t29 = -70741655;

	t29 = ((x161*x162)|(x163<x164));

	if (t29 != 19) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = 1793;
	int16_t x166 = -129;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MAX;
	static int32_t t30 = 124251526;

	t30 = ((x165*x166)|(x167<x168));

	if (t30 != -231297) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = -594259;
	uint32_t x170 = 15698505U;
	int8_t x171 = 1;
	int8_t x172 = INT8_MIN;
	uint32_t t31 = 29191U;

	t31 = ((x169*x170)|(x171<x172));

	if (t31 != 3986051413U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = 493088466U;
	int32_t x174 = INT32_MIN;
	static volatile uint32_t x175 = UINT32_MAX;
	int64_t x176 = INT64_MAX;
	uint32_t t32 = 1U;

	t32 = ((x173*x174)|(x175<x176));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = INT16_MIN;
	volatile uint64_t x186 = 161027LLU;
	volatile uint32_t x187 = UINT32_MAX;
	int32_t x188 = -685984543;
	volatile uint64_t t33 = 121260658LLU;

	t33 = ((x185*x186)|(x187<x188));

	if (t33 != 18446744068433018880LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MAX;
	volatile int64_t t34 = 74423658LL;

	t34 = ((x189*x190)|(x191<x192));

	if (t34 != -5379686399LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x194 = INT16_MIN;
	static uint64_t x195 = 4LLU;
	volatile int32_t t35 = 0;

	t35 = ((x193*x194)|(x195<x196));

	if (t35 != -4161535) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = INT8_MIN;
	uint32_t x198 = 20U;
	int32_t x199 = -1;
	uint64_t x200 = 3498194608862173319LLU;
	volatile uint32_t t36 = 1691846U;

	t36 = ((x197*x198)|(x199<x200));

	if (t36 != 4294964736U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x205 = INT16_MIN;
	volatile int8_t x207 = INT8_MAX;
	int64_t x208 = 450531LL;

	t37 = ((x205*x206)|(x207<x208));

	if (t37 != 4294901761U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x209 = 4;
	volatile int32_t x212 = -1;

	t38 = ((x209*x210)|(x211<x212));

	if (t38 != -4) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x213 = 115U;
	static int16_t x214 = -1;
	int64_t x215 = INT64_MIN;
	volatile int32_t t39 = -94;

	t39 = ((x213*x214)|(x215<x216));

	if (t39 != -115) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x217 = -4427036;
	int64_t x218 = 89560LL;
	static int64_t x220 = INT64_MAX;
	int64_t t40 = -777396995LL;

	t40 = ((x217*x218)|(x219<x220));

	if (t40 != -396485344159LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x222 = 21U;
	volatile int64_t x223 = -1LL;
	uint16_t x224 = 0U;
	volatile uint64_t t41 = 10166206419821LLU;

	t41 = ((x221*x222)|(x223<x224));

	if (t41 != 139695333936151561LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x225 = INT8_MIN;
	uint32_t x227 = 1474U;
	uint16_t x228 = 4410U;
	volatile int32_t t42 = -415;

	t42 = ((x225*x226)|(x227<x228));

	if (t42 != 16385) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x229 = UINT8_MAX;
	static int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MAX;
	int32_t x232 = 210884788;
	volatile int32_t t43 = -704;

	t43 = ((x229*x230)|(x231<x232));

	if (t43 != -8355839) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x233 = UINT64_MAX;
	int32_t x234 = -1;
	int32_t x235 = -20;
	uint16_t x236 = 13960U;
	static volatile uint64_t t44 = 2258685318LLU;

	t44 = ((x233*x234)|(x235<x236));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = INT16_MIN;
	uint64_t x238 = 47LLU;
	volatile uint16_t x239 = UINT16_MAX;
	volatile uint64_t t45 = 0LLU;

	t45 = ((x237*x238)|(x239<x240));

	if (t45 != 18446744073708011520LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = INT8_MAX;
	int16_t x242 = 1269;
	int32_t x243 = 2305;
	int8_t x244 = 45;
	volatile int32_t t46 = 22;

	t46 = ((x241*x242)|(x243<x244));

	if (t46 != 161163) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = -7;
	int16_t x246 = -1;
	volatile int64_t x247 = INT64_MIN;
	int32_t t47 = 14880021;

	t47 = ((x245*x246)|(x247<x248));

	if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x250 = -64;
	static int16_t x251 = -35;
	uint8_t x252 = 3U;
	static volatile int32_t t48 = -5159;

	t48 = ((x249*x250)|(x251<x252));

	if (t48 != -831) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = 2901403321LL;
	volatile int32_t x255 = INT32_MAX;
	int32_t x256 = INT32_MIN;
	int64_t t49 = 42LL;

	t49 = ((x253*x254)|(x255<x256));

	if (t49 != -2901403321LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = -1;
	volatile int32_t x258 = -11308936;
	int16_t x259 = -6314;
	volatile int32_t t50 = -1;

	t50 = ((x257*x258)|(x259<x260));

	if (t50 != 11308937) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x265 = 108U;
	volatile int16_t x266 = INT16_MAX;
	volatile uint16_t x267 = 11U;
	static uint16_t x268 = UINT16_MAX;
	int32_t t51 = 374977;

	t51 = ((x265*x266)|(x267<x268));

	if (t51 != 3538837) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x269 = -1;
	static int64_t x270 = -102329353215LL;
	volatile int64_t x271 = 4815464434199135LL;
	uint32_t x272 = UINT32_MAX;

	t52 = ((x269*x270)|(x271<x272));

	if (t52 != 102329353215LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x273 = 53U;
	uint32_t x274 = 945815531U;
	int64_t x276 = INT64_MIN;
	volatile uint32_t t53 = 1372396467U;

	t53 = ((x273*x274)|(x275<x276));

	if (t53 != 2883582887U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x277 = -1LL;
	int64_t x280 = 4LL;

	t54 = ((x277*x278)|(x279<x280));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x281 = -1;
	int8_t x282 = INT8_MAX;
	uint8_t x284 = 42U;
	static volatile int32_t t55 = 1;

	t55 = ((x281*x282)|(x283<x284));

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = INT32_MIN;
	uint8_t x288 = 10U;
	volatile uint64_t t56 = 130461105413327252LLU;

	t56 = ((x285*x286)|(x287<x288));

	if (t56 != 18446744073704503335LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x289 = INT16_MAX;
	static int16_t x290 = -28;
	volatile int32_t x292 = INT32_MIN;
	volatile int32_t t57 = 84339;

	t57 = ((x289*x290)|(x291<x292));

	if (t57 != -917475) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x293 = -1;
	int16_t x294 = INT16_MAX;
	static uint32_t x296 = 11998U;
	volatile int32_t t58 = -108;

	t58 = ((x293*x294)|(x295<x296));

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x306 = -1;
	int32_t x307 = INT32_MIN;
	int32_t t59 = 126232;

	t59 = ((x305*x306)|(x307<x308));

	if (t59 != -103431) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x309 = INT8_MAX;
	int8_t x310 = 33;
	int32_t x312 = -1;

	t60 = ((x309*x310)|(x311<x312));

	if (t60 != 4191) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x313 = UINT32_MAX;
	volatile uint64_t x314 = 86LLU;
	int8_t x315 = 3;
	int32_t x316 = INT32_MAX;
	static volatile uint64_t t61 = 577925975LLU;

	t61 = ((x313*x314)|(x315<x316));

	if (t61 != 369367187371LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = 0;
	static int32_t x319 = INT32_MIN;
	volatile int32_t t62 = -603;

	t62 = ((x317*x318)|(x319<x320));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x322 = INT8_MIN;
	uint64_t x323 = 56752LLU;
	uint16_t x324 = 18U;
	uint32_t t63 = 8U;

	t63 = ((x321*x322)|(x323<x324));

	if (t63 != 128U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x326 = 709062560U;
	volatile int64_t x328 = INT64_MIN;

	t64 = ((x325*x326)|(x327<x328));

	if (t64 != -709062560LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x329 = INT8_MIN;
	uint8_t x330 = UINT8_MAX;
	int32_t x332 = INT32_MAX;
	static volatile int32_t t65 = 15736405;

	t65 = ((x329*x330)|(x331<x332));

	if (t65 != -32640) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = INT8_MAX;
	volatile int32_t t66 = 0;

	t66 = ((x333*x334)|(x335<x336));

	if (t66 != -16255) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x337 = 44945799U;
	uint16_t x338 = UINT16_MAX;
	volatile int64_t x339 = INT64_MAX;
	volatile uint32_t t67 = 897U;

	t67 = ((x337*x338)|(x339<x340));

	if (t67 != 3470339705U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = INT16_MAX;
	int8_t x343 = INT8_MAX;
	uint32_t x344 = 18379512U;
	static uint64_t t68 = 2861505475LLU;

	t68 = ((x341*x342)|(x343<x344));

	if (t68 != 41712391LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x345 = 487U;
	static uint8_t x346 = 1U;
	int32_t x347 = INT32_MAX;
	static int8_t x348 = -1;
	int32_t t69 = -1021;

	t69 = ((x345*x346)|(x347<x348));

	if (t69 != 487) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x349 = 53U;
	static int16_t x350 = -1;
	uint8_t x351 = 1U;
	int32_t t70 = -1;

	t70 = ((x349*x350)|(x351<x352));

	if (t70 != -53) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x354 = UINT64_MAX;
	int64_t x355 = INT64_MAX;
	int16_t x356 = -1;
	volatile uint64_t t71 = 5903LLU;

	t71 = ((x353*x354)|(x355<x356));

	if (t71 != 32768LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x357 = 0;
	int8_t x358 = -1;
	int64_t x359 = -1LL;
	static int32_t t72 = 275;

	t72 = ((x357*x358)|(x359<x360));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x361 = 3062U;
	volatile int32_t x362 = 4628;
	int32_t x363 = 12705;
	int32_t x364 = INT32_MIN;
	uint32_t t73 = 30237U;

	t73 = ((x361*x362)|(x363<x364));

	if (t73 != 14170936U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x365 = -47979;
	uint8_t x366 = 3U;
	int64_t x367 = 897LL;

	t74 = ((x365*x366)|(x367<x368));

	if (t74 != -143937) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x369 = 1915786235919349LLU;
	static int8_t x370 = 42;
	int8_t x371 = INT8_MAX;
	uint64_t t75 = 63LLU;

	t75 = ((x369*x370)|(x371<x372));

	if (t75 != 80463021908612658LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x373 = 5995U;
	volatile uint32_t x374 = 1789873U;
	uint32_t x375 = 472308U;
	uint64_t x376 = 15528LLU;
	volatile uint32_t t76 = 1732U;

	t76 = ((x373*x374)|(x375<x376));

	if (t76 != 2140354043U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x380 = 2U;
	volatile int32_t t77 = 357160790;

	t77 = ((x377*x378)|(x379<x380));

	if (t77 != -1550350) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x382 = -1LL;
	volatile uint16_t x383 = UINT16_MAX;
	volatile uint64_t t78 = 555619754563551LLU;

	t78 = ((x381*x382)|(x383<x384));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x386 = UINT16_MAX;
	static uint64_t x387 = 40622975413LLU;
	static int8_t x388 = INT8_MIN;
	int32_t t79 = -32022119;

	t79 = ((x385*x386)|(x387<x388));

	if (t79 != 589815) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MIN;
	volatile int64_t x391 = 314369784607LL;
	uint64_t x392 = 4243422620559558256LLU;
	int32_t t80 = -1954306;

	t80 = ((x389*x390)|(x391<x392));

	if (t80 != 4194305) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x393 = 4U;
	int16_t x396 = -41;
	int32_t t81 = -1013878255;

	t81 = ((x393*x394)|(x395<x396));

	if (t81 != -72240908) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x400 = INT32_MAX;
	static int32_t t82 = 485910896;

	t82 = ((x397*x398)|(x399<x400));

	if (t82 != 1073741824) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x401 = INT16_MIN;
	static int8_t x402 = INT8_MIN;
	volatile int32_t x403 = INT32_MIN;
	static uint32_t x404 = UINT32_MAX;

	t83 = ((x401*x402)|(x403<x404));

	if (t83 != 4194305) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x405 = 0U;
	int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t84 = -3;

	t84 = ((x405*x406)|(x407<x408));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x413 = INT8_MIN;
	uint32_t x414 = UINT32_MAX;
	uint8_t x415 = 14U;
	uint16_t x416 = 21667U;
	uint32_t t85 = 5490U;

	t85 = ((x413*x414)|(x415<x416));

	if (t85 != 129U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x417 = 7U;
	int16_t x418 = 45;
	uint32_t x419 = 831696U;
	uint16_t x420 = 1U;
	volatile int32_t t86 = 3;

	t86 = ((x417*x418)|(x419<x420));

	if (t86 != 315) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x421 = INT8_MIN;
	int32_t x423 = INT32_MIN;
	uint16_t x424 = 1063U;
	volatile uint32_t t87 = 7035789U;

	t87 = ((x421*x422)|(x423<x424));

	if (t87 != 4294125569U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x425 = INT32_MIN;
	uint32_t x426 = UINT32_MAX;
	uint16_t x427 = 14013U;
	int16_t x428 = INT16_MIN;
	uint32_t t88 = 1182876U;

	t88 = ((x425*x426)|(x427<x428));

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x429 = -1;
	static int16_t x430 = INT16_MAX;
	int64_t x431 = -1LL;
	static int8_t x432 = INT8_MIN;

	t89 = ((x429*x430)|(x431<x432));

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x433 = -1;
	int16_t x434 = INT16_MAX;
	int32_t x435 = -1;
	uint64_t x436 = 1989LLU;
	int32_t t90 = -181;

	t90 = ((x433*x434)|(x435<x436));

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x437 = UINT8_MAX;
	int64_t x438 = -1LL;
	volatile uint32_t x439 = 9710827U;
	volatile int16_t x440 = INT16_MIN;
	int64_t t91 = 2LL;

	t91 = ((x437*x438)|(x439<x440));

	if (t91 != -255LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = -1;
	volatile uint32_t x442 = 514665997U;
	volatile int64_t x443 = -1LL;
	uint32_t x444 = 483U;

	t92 = ((x441*x442)|(x443<x444));

	if (t92 != 3780301299U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x457 = 152183891;
	int32_t x459 = INT32_MAX;
	uint32_t x460 = UINT32_MAX;
	int64_t t93 = 481789730LL;

	t93 = ((x457*x458)|(x459<x460));

	if (t93 != -152183891LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x461 = 3071656935752008LLU;
	volatile int8_t x462 = -1;
	uint64_t t94 = 7LLU;

	t94 = ((x461*x462)|(x463<x464));

	if (t94 != 18443672416773799608LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x465 = -12;
	int16_t x466 = 113;
	volatile int8_t x467 = 9;
	static int32_t x468 = -1;
	volatile int32_t t95 = -3747;

	t95 = ((x465*x466)|(x467<x468));

	if (t95 != -1356) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x473 = UINT32_MAX;
	int64_t x474 = -1LL;
	static uint64_t x475 = 5113070467682LLU;
	static int8_t x476 = -1;

	t96 = ((x473*x474)|(x475<x476));

	if (t96 != -4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x477 = UINT16_MAX;
	int64_t x478 = 3620LL;
	uint64_t x479 = 116LLU;
	uint32_t x480 = UINT32_MAX;
	static int64_t t97 = 1LL;

	t97 = ((x477*x478)|(x479<x480));

	if (t97 != 237236701LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x481 = UINT32_MAX;
	int16_t x482 = INT16_MAX;
	static volatile int64_t x483 = -1LL;
	volatile int8_t x484 = INT8_MAX;
	static volatile uint32_t t98 = 1320031U;

	t98 = ((x481*x482)|(x483<x484));

	if (t98 != 4294934529U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x485 = 0;
	uint8_t x486 = 2U;
	int64_t x487 = INT64_MAX;
	int64_t x488 = INT64_MIN;
	int32_t t99 = 1969;

	t99 = ((x485*x486)|(x487<x488));

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

