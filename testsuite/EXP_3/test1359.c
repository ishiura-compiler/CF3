#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x14 = UINT64_MAX;
volatile int8_t x24 = INT8_MAX;
int32_t x25 = 7556453;
volatile int32_t t4 = 331134118;
int32_t x34 = -3;
volatile int32_t x60 = -1;
static uint8_t x65 = 7U;
uint32_t x66 = UINT32_MAX;
uint32_t t8 = 37112U;
volatile uint16_t x81 = 382U;
int8_t x116 = INT8_MAX;
static volatile uint64_t t15 = 258167547994306LLU;
int64_t x126 = 28750576959649544LL;
uint8_t x134 = 1U;
volatile uint16_t x136 = 576U;
volatile int32_t t17 = 40795;
uint32_t x142 = 161321U;
static volatile uint32_t t18 = 1U;
uint8_t x145 = 75U;
int32_t x146 = 31586;
uint64_t x161 = 4337721302LLU;
static int32_t x164 = INT32_MAX;
volatile int16_t x165 = -1;
int16_t x168 = 0;
volatile int64_t t23 = -1LL;
static volatile uint32_t x170 = 1176009333U;
uint32_t x173 = 28749U;
int8_t x178 = -1;
volatile int16_t x184 = 1925;
volatile uint16_t x209 = 23U;
int32_t x212 = INT32_MIN;
static int8_t x217 = -1;
int32_t t30 = 0;
static uint64_t x221 = UINT64_MAX;
int32_t x232 = INT32_MAX;
static volatile int64_t t32 = -7712812395536777LL;
int16_t x237 = -1;
uint16_t x240 = 1U;
volatile int32_t t34 = -10281;
volatile uint16_t x243 = UINT16_MAX;
volatile int8_t x244 = -1;
static int8_t x247 = INT8_MAX;
int16_t x249 = INT16_MAX;
volatile int32_t t37 = 283414;
int32_t x256 = INT32_MIN;
int8_t x262 = 51;
int32_t t40 = -945627526;
uint16_t x265 = UINT16_MAX;
int16_t x279 = INT16_MIN;
volatile uint64_t t44 = 0LLU;
volatile int8_t x290 = -63;
volatile int32_t t46 = 1;
int32_t t47 = 629022;
volatile uint64_t x302 = UINT64_MAX;
uint16_t x308 = 337U;
int64_t x309 = -1LL;
int16_t x313 = INT16_MAX;
static uint8_t x314 = 0U;
uint64_t x318 = 11627410LLU;
int8_t x329 = INT8_MAX;
static int64_t x337 = -1LL;
uint8_t x339 = 2U;
int16_t x341 = -1;
static volatile int64_t x351 = -632100884613681LL;
int64_t x353 = -1LL;
int8_t x365 = INT8_MIN;
static volatile int64_t x368 = INT64_MIN;
static volatile int32_t t62 = 173;
static volatile int32_t t63 = 4845730;
static int64_t x376 = INT64_MIN;
uint8_t x380 = UINT8_MAX;
static volatile int8_t x381 = INT8_MAX;
int8_t x384 = -4;
uint64_t x385 = UINT64_MAX;
int32_t t69 = -181;
int64_t x431 = -22851936LL;
static volatile uint64_t x437 = 211528LLU;
volatile int32_t x438 = -7237438;
int16_t x440 = -1;
volatile uint64_t t72 = 3LLU;
uint8_t x458 = UINT8_MAX;
volatile int16_t x459 = INT16_MIN;
volatile int8_t x460 = INT8_MAX;
uint32_t x463 = UINT32_MAX;
int32_t x464 = -912342;
uint64_t x469 = 47685495232947LLU;
volatile int8_t x472 = 1;
volatile uint64_t t75 = 18531LLU;
int64_t x479 = 143109592759361LL;
volatile uint16_t x480 = 1U;
static int32_t x482 = 101094;
volatile uint32_t x510 = UINT32_MAX;
int8_t x521 = INT8_MIN;
uint16_t x522 = 137U;
uint8_t x524 = UINT8_MAX;
volatile int16_t x527 = 0;
volatile uint8_t x529 = UINT8_MAX;
uint64_t x532 = 27411559852922LLU;
int8_t x535 = 7;
volatile uint32_t t86 = 152527740U;
static volatile uint32_t t87 = 2894855U;
volatile uint8_t x550 = 6U;
int64_t t89 = -122885740864LL;
uint8_t x557 = UINT8_MAX;
int16_t x558 = -1;
int32_t t90 = -1;
int8_t x561 = INT8_MAX;
uint16_t x577 = 111U;
int64_t x583 = 10409962481830126LL;
uint16_t x601 = 631U;
int8_t x602 = INT8_MAX;
int8_t x607 = INT8_MIN;
volatile int64_t x615 = INT64_MAX;


void f0(void) {
	int32_t x5 = -1;
	uint16_t x6 = 3U;
	uint16_t x7 = 3336U;
	int8_t x8 = INT8_MAX;
	int32_t t0 = -3005;

	t0 = ((x5+x6)>>(x7<x8));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 173LLU;
	int8_t x10 = 7;
	volatile int32_t x11 = -1;
	int32_t x12 = INT32_MAX;
	volatile uint64_t t1 = 298876355004211LLU;

	t1 = ((x9+x10)>>(x11<x12));

	if (t1 != 90LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = INT64_MAX;
	uint8_t x15 = 0U;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t2 = 336LLU;

	t2 = ((x13+x14)>>(x15<x16));

	if (t2 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = INT8_MIN;
	int32_t x22 = 912666;
	volatile int8_t x23 = 18;
	static int32_t t3 = -30038;

	t3 = ((x21+x22)>>(x23<x24));

	if (t3 != 456269) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x26 = -39;
	int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;

	t4 = ((x25+x26)>>(x27<x28));

	if (t4 != 7556414) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MAX;
	volatile int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MAX;
	static volatile int32_t t5 = -255430062;

	t5 = ((x33+x34)>>(x35<x36));

	if (t5 != 62) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = 577U;
	static uint16_t x42 = 1149U;
	volatile int64_t x43 = INT64_MAX;
	int64_t x44 = INT64_MAX;
	uint32_t t6 = 210U;

	t6 = ((x41+x42)>>(x43<x44));

	if (t6 != 1726U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x57 = UINT32_MAX;
	int16_t x58 = 15584;
	int16_t x59 = -15;
	uint32_t t7 = 2442U;

	t7 = ((x57+x58)>>(x59<x60));

	if (t7 != 7791U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x67 = 0U;
	static uint8_t x68 = 71U;

	t8 = ((x65+x66)>>(x67<x68));

	if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x77 = INT16_MAX;
	static uint64_t x78 = 1056431844283LLU;
	static int64_t x79 = 4366797194216410LL;
	static volatile int64_t x80 = INT64_MIN;
	uint64_t t9 = 2116LLU;

	t9 = ((x77+x78)>>(x79<x80));

	if (t9 != 1056431877050LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x82 = 35U;
	int64_t x83 = INT64_MIN;
	volatile uint8_t x84 = UINT8_MAX;
	volatile int32_t t10 = -26835603;

	t10 = ((x81+x82)>>(x83<x84));

	if (t10 != 208) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x93 = INT8_MIN;
	static uint16_t x94 = 966U;
	uint32_t x95 = UINT32_MAX;
	int16_t x96 = -1;
	volatile int32_t t11 = 501311;

	t11 = ((x93+x94)>>(x95<x96));

	if (t11 != 838) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x97 = -1;
	volatile int8_t x98 = INT8_MAX;
	static int16_t x99 = INT16_MAX;
	int64_t x100 = -512582353795675LL;
	int32_t t12 = 10069908;

	t12 = ((x97+x98)>>(x99<x100));

	if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MAX;
	volatile int8_t x103 = INT8_MIN;
	static int32_t x104 = INT32_MIN;
	uint32_t t13 = 3U;

	t13 = ((x101+x102)>>(x103<x104));

	if (t13 != 32766U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x109 = 1571;
	int8_t x110 = -1;
	static int32_t x111 = INT32_MIN;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t14 = -83;

	t14 = ((x109+x110)>>(x111<x112));

	if (t14 != 785) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x113 = 3891584392072LLU;
	int64_t x114 = INT64_MAX;
	int32_t x115 = -1;

	t15 = ((x113+x114)>>(x115<x116));

	if (t15 != 4611687964219583939LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x125 = INT32_MAX;
	static uint8_t x127 = UINT8_MAX;
	int8_t x128 = -1;
	volatile int64_t t16 = -230828235919009LL;

	t16 = ((x125+x126)>>(x127<x128));

	if (t16 != 28750579107133191LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x133 = 229U;
	int8_t x135 = INT8_MIN;

	t17 = ((x133+x134)>>(x135<x136));

	if (t17 != 115) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x141 = INT8_MAX;
	int64_t x143 = -3816078931LL;
	int64_t x144 = -12LL;

	t18 = ((x141+x142)>>(x143<x144));

	if (t18 != 80724U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x147 = -2188369632842116166LL;
	int64_t x148 = INT64_MAX;
	int32_t t19 = -5230;

	t19 = ((x145+x146)>>(x147<x148));

	if (t19 != 15830) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x149 = -1;
	static volatile int32_t x150 = INT32_MAX;
	volatile int8_t x151 = 24;
	int32_t x152 = INT32_MIN;
	volatile int32_t t20 = -85050;

	t20 = ((x149+x150)>>(x151<x152));

	if (t20 != 2147483646) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x153 = 86904673U;
	uint64_t x154 = 5264448760775494828LLU;
	static int32_t x155 = -1;
	int8_t x156 = INT8_MIN;
	static uint64_t t21 = 54359755904LLU;

	t21 = ((x153+x154)>>(x155<x156));

	if (t21 != 5264448760862399501LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x162 = 11;
	uint16_t x163 = 13U;
	volatile uint64_t t22 = 517825LLU;

	t22 = ((x161+x162)>>(x163<x164));

	if (t22 != 2168860656LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x166 = INT64_MAX;
	uint16_t x167 = 0U;

	t23 = ((x165+x166)>>(x167<x168));

	if (t23 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x169 = INT8_MIN;
	int64_t x171 = 1295LL;
	int32_t x172 = INT32_MIN;
	volatile uint32_t t24 = 269U;

	t24 = ((x169+x170)>>(x171<x172));

	if (t24 != 1176009205U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x174 = 34U;
	static int32_t x175 = 53621629;
	uint16_t x176 = UINT16_MAX;
	static volatile uint32_t t25 = 313387U;

	t25 = ((x173+x174)>>(x175<x176));

	if (t25 != 28783U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x177 = UINT32_MAX;
	volatile uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MIN;
	static uint32_t t26 = 15676U;

	t26 = ((x177+x178)>>(x179<x180));

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = -1;
	static uint64_t x183 = 28LLU;
	volatile int32_t t27 = 1832;

	t27 = ((x181+x182)>>(x183<x184));

	if (t27 != 1073741823) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x185 = INT16_MAX;
	volatile uint64_t x186 = UINT64_MAX;
	int32_t x187 = -7;
	int64_t x188 = INT64_MIN;
	static volatile uint64_t t28 = 62658632348240LLU;

	t28 = ((x185+x186)>>(x187<x188));

	if (t28 != 32766LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x210 = 4824;
	uint64_t x211 = 0LLU;
	int32_t t29 = -981894;

	t29 = ((x209+x210)>>(x211<x212));

	if (t29 != 2423) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x218 = UINT16_MAX;
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;

	t30 = ((x217+x218)>>(x219<x220));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x222 = 47;
	static int32_t x223 = INT32_MIN;
	uint8_t x224 = 1U;
	volatile uint64_t t31 = 4084710489978551LLU;

	t31 = ((x221+x222)>>(x223<x224));

	if (t31 != 23LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x229 = -21LL;
	volatile int8_t x230 = INT8_MAX;
	uint64_t x231 = 783LLU;

	t32 = ((x229+x230)>>(x231<x232));

	if (t32 != 53LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x233 = INT8_MIN;
	uint64_t x234 = UINT64_MAX;
	uint16_t x235 = 1433U;
	volatile int16_t x236 = INT16_MAX;
	uint64_t t33 = 6LLU;

	t33 = ((x233+x234)>>(x235<x236));

	if (t33 != 9223372036854775743LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x238 = 61;
	int16_t x239 = INT16_MAX;

	t34 = ((x237+x238)>>(x239<x240));

	if (t34 != 60) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x241 = -184;
	uint16_t x242 = 569U;
	volatile int32_t t35 = 4066;

	t35 = ((x241+x242)>>(x243<x244));

	if (t35 != 385) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x245 = UINT8_MAX;
	int8_t x246 = INT8_MAX;
	static int64_t x248 = INT64_MAX;
	int32_t t36 = 32018;

	t36 = ((x245+x246)>>(x247<x248));

	if (t36 != 191) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x250 = 8U;
	volatile int32_t x251 = INT32_MIN;
	int8_t x252 = -1;

	t37 = ((x249+x250)>>(x251<x252));

	if (t37 != 16387) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x253 = -1;
	int32_t x254 = INT32_MAX;
	uint32_t x255 = 422U;
	volatile int32_t t38 = 394051815;

	t38 = ((x253+x254)>>(x255<x256));

	if (t38 != 1073741823) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x257 = UINT64_MAX;
	static int32_t x258 = INT32_MIN;
	volatile int8_t x259 = INT8_MIN;
	static volatile int32_t x260 = -1;
	uint64_t t39 = 594577934594723LLU;

	t39 = ((x257+x258)>>(x259<x260));

	if (t39 != 9223372035781033983LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x261 = 109;
	static int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MAX;

	t40 = ((x261+x262)>>(x263<x264));

	if (t40 != 80) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x266 = -1019;
	int64_t x267 = -143081774171281285LL;
	static uint32_t x268 = 1313241U;
	int32_t t41 = 999886588;

	t41 = ((x265+x266)>>(x267<x268));

	if (t41 != 32258) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int8_t x270 = -1;
	static int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MIN;
	volatile uint64_t t42 = 18080851863426429LLU;

	t42 = ((x269+x270)>>(x271<x272));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x273 = INT8_MAX;
	uint8_t x274 = 5U;
	volatile int16_t x275 = INT16_MIN;
	int32_t x276 = -53459;
	volatile int32_t t43 = -3124;

	t43 = ((x273+x274)>>(x275<x276));

	if (t43 != 132) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x277 = 9366034LLU;
	static int32_t x278 = INT32_MIN;
	int16_t x280 = -1;

	t44 = ((x277+x278)>>(x279<x280));

	if (t44 != 9223372035785717001LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MIN;
	volatile int8_t x287 = -1;
	int8_t x288 = -1;
	int32_t t45 = 229;

	t45 = ((x285+x286)>>(x287<x288));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x289 = 561U;
	uint8_t x291 = UINT8_MAX;
	uint16_t x292 = UINT16_MAX;

	t46 = ((x289+x290)>>(x291<x292));

	if (t46 != 249) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x293 = INT16_MAX;
	static uint8_t x294 = 112U;
	uint64_t x295 = 17455LLU;
	uint64_t x296 = 576701960335846LLU;

	t47 = ((x293+x294)>>(x295<x296));

	if (t47 != 16439) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x301 = UINT8_MAX;
	static int64_t x303 = INT64_MIN;
	int64_t x304 = -1LL;
	uint64_t t48 = 502351192LLU;

	t48 = ((x301+x302)>>(x303<x304));

	if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x305 = 69019;
	int64_t x306 = 4270LL;
	static uint16_t x307 = UINT16_MAX;
	volatile int64_t t49 = -650494509567527795LL;

	t49 = ((x305+x306)>>(x307<x308));

	if (t49 != 73289LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x310 = INT16_MAX;
	uint64_t x311 = 130LLU;
	static volatile int32_t x312 = 0;
	int64_t t50 = 61792540LL;

	t50 = ((x309+x310)>>(x311<x312));

	if (t50 != 32766LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x315 = -1;
	int16_t x316 = INT16_MIN;
	int32_t t51 = 5313952;

	t51 = ((x313+x314)>>(x315<x316));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x317 = INT16_MAX;
	static int8_t x319 = INT8_MAX;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t52 = 1003588747480202762LLU;

	t52 = ((x317+x318)>>(x319<x320));

	if (t52 != 11660177LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x321 = INT32_MAX;
	static int8_t x322 = -9;
	uint16_t x323 = UINT16_MAX;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t53 = 97474;

	t53 = ((x321+x322)>>(x323<x324));

	if (t53 != 2147483638) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x330 = -23;
	int32_t x331 = INT32_MIN;
	uint16_t x332 = UINT16_MAX;
	int32_t t54 = -850717;

	t54 = ((x329+x330)>>(x331<x332));

	if (t54 != 52) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x333 = INT8_MIN;
	static int64_t x334 = INT64_MAX;
	uint16_t x335 = 177U;
	int8_t x336 = INT8_MAX;
	volatile int64_t t55 = -38996307674LL;

	t55 = ((x333+x334)>>(x335<x336));

	if (t55 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x338 = 6U;
	int64_t x340 = -1LL;
	static int64_t t56 = 450502LL;

	t56 = ((x337+x338)>>(x339<x340));

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x342 = 85276U;
	volatile int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MAX;
	uint32_t t57 = 1U;

	t57 = ((x341+x342)>>(x343<x344));

	if (t57 != 42637U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x345 = INT32_MAX;
	static uint64_t x346 = 1352118786117397LLU;
	volatile int16_t x347 = INT16_MAX;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t58 = 1646122306135772805LLU;

	t58 = ((x345+x346)>>(x347<x348));

	if (t58 != 1352120933601044LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x349 = INT16_MAX;
	volatile uint64_t x350 = UINT64_MAX;
	uint64_t x352 = 2LLU;
	volatile uint64_t t59 = 10749364433705LLU;

	t59 = ((x349+x350)>>(x351<x352));

	if (t59 != 32766LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x354 = 1;
	volatile int16_t x355 = -1;
	int32_t x356 = 9066765;
	volatile int64_t t60 = 383513379LL;

	t60 = ((x353+x354)>>(x355<x356));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x357 = 1U;
	static int32_t x358 = -1;
	int64_t x359 = INT64_MIN;
	uint16_t x360 = UINT16_MAX;
	static volatile uint32_t t61 = 329920231U;

	t61 = ((x357+x358)>>(x359<x360));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x366 = 282U;
	volatile uint16_t x367 = UINT16_MAX;

	t62 = ((x365+x366)>>(x367<x368));

	if (t62 != 154) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x369 = 46U;
	uint16_t x370 = 1374U;
	static int8_t x371 = 0;
	static volatile int64_t x372 = INT64_MIN;

	t63 = ((x369+x370)>>(x371<x372));

	if (t63 != 1420) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x373 = 0LL;
	int32_t x374 = INT32_MAX;
	int64_t x375 = INT64_MIN;
	static int64_t t64 = -211480442LL;

	t64 = ((x373+x374)>>(x375<x376));

	if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = INT8_MAX;
	volatile int32_t t65 = 2;

	t65 = ((x377+x378)>>(x379<x380));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x382 = -1LL;
	int16_t x383 = -758;
	volatile int64_t t66 = -157987379LL;

	t66 = ((x381+x382)>>(x383<x384));

	if (t66 != 63LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x386 = -59;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t67 = 6775044809410LLU;

	t67 = ((x385+x386)>>(x387<x388));

	if (t67 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x389 = -1;
	uint32_t x390 = UINT32_MAX;
	volatile uint64_t x391 = 57LLU;
	volatile uint16_t x392 = 28U;
	static volatile uint32_t t68 = 0U;

	t68 = ((x389+x390)>>(x391<x392));

	if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x393 = INT8_MIN;
	uint8_t x394 = UINT8_MAX;
	static volatile uint16_t x395 = 24U;
	uint16_t x396 = 20791U;

	t69 = ((x393+x394)>>(x395<x396));

	if (t69 != 63) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x421 = -1;
	uint8_t x422 = 61U;
	static volatile int64_t x423 = -3LL;
	volatile uint8_t x424 = 29U;
	int32_t t70 = -50;

	t70 = ((x421+x422)>>(x423<x424));

	if (t70 != 30) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x429 = UINT64_MAX;
	volatile int8_t x430 = INT8_MIN;
	int8_t x432 = -3;
	volatile uint64_t t71 = 22714LLU;

	t71 = ((x429+x430)>>(x431<x432));

	if (t71 != 9223372036854775743LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x439 = -2;

	t72 = ((x437+x438)>>(x439<x440));

	if (t72 != 9223372036851262853LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x457 = 2416152910518970LLU;
	uint64_t t73 = 91968456LLU;

	t73 = ((x457+x458)>>(x459<x460));

	if (t73 != 1208076455259612LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x461 = INT16_MIN;
	volatile uint64_t x462 = 41632840375049656LLU;
	uint64_t t74 = 63134LLU;

	t74 = ((x461+x462)>>(x463<x464));

	if (t74 != 41632840375016888LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x470 = -1;
	int64_t x471 = INT64_MAX;

	t75 = ((x469+x470)>>(x471<x472));

	if (t75 != 47685495232946LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x477 = 52484;
	int32_t x478 = -1;
	static volatile int32_t t76 = -30716;

	t76 = ((x477+x478)>>(x479<x480));

	if (t76 != 52483) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x481 = 7U;
	int16_t x483 = INT16_MIN;
	static int8_t x484 = -1;
	int32_t t77 = -1;

	t77 = ((x481+x482)>>(x483<x484));

	if (t77 != 50550) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x493 = INT64_MAX;
	int8_t x494 = -19;
	int8_t x495 = -31;
	volatile int8_t x496 = -8;
	volatile int64_t t78 = -12394274480LL;

	t78 = ((x493+x494)>>(x495<x496));

	if (t78 != 4611686018427387894LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x497 = UINT32_MAX;
	static volatile int16_t x498 = 532;
	static volatile int32_t x499 = INT32_MAX;
	int64_t x500 = INT64_MIN;
	uint32_t t79 = 1966U;

	t79 = ((x497+x498)>>(x499<x500));

	if (t79 != 531U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x509 = 8;
	uint32_t x511 = UINT32_MAX;
	int64_t x512 = -1LL;
	volatile uint32_t t80 = 14U;

	t80 = ((x509+x510)>>(x511<x512));

	if (t80 != 7U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x513 = UINT16_MAX;
	uint16_t x514 = 967U;
	uint16_t x515 = 2634U;
	uint64_t x516 = 443829876LLU;
	int32_t t81 = 85105405;

	t81 = ((x513+x514)>>(x515<x516));

	if (t81 != 33251) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x517 = 23933U;
	uint16_t x518 = 232U;
	uint16_t x519 = UINT16_MAX;
	uint32_t x520 = UINT32_MAX;
	uint32_t t82 = 425U;

	t82 = ((x517+x518)>>(x519<x520));

	if (t82 != 12082U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x523 = 0U;
	static int32_t t83 = 0;

	t83 = ((x521+x522)>>(x523<x524));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x525 = 6;
	static int8_t x526 = 46;
	volatile uint32_t x528 = UINT32_MAX;
	int32_t t84 = 1609;

	t84 = ((x525+x526)>>(x527<x528));

	if (t84 != 26) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x530 = UINT32_MAX;
	int8_t x531 = INT8_MIN;
	volatile uint32_t t85 = 249285202U;

	t85 = ((x529+x530)>>(x531<x532));

	if (t85 != 254U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x533 = UINT32_MAX;
	volatile uint32_t x534 = 4032692U;
	uint64_t x536 = 5832793001420LLU;

	t86 = ((x533+x534)>>(x535<x536));

	if (t86 != 2016345U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x537 = UINT32_MAX;
	uint8_t x538 = 50U;
	int32_t x539 = -1;
	static uint16_t x540 = 106U;

	t87 = ((x537+x538)>>(x539<x540));

	if (t87 != 24U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x541 = 45U;
	volatile int8_t x542 = 0;
	int8_t x543 = -31;
	volatile int8_t x544 = -1;
	int32_t t88 = -3584;

	t88 = ((x541+x542)>>(x543<x544));

	if (t88 != 22) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x549 = 1LL;
	int8_t x551 = -1;
	int16_t x552 = 0;

	t89 = ((x549+x550)>>(x551<x552));

	if (t89 != 3LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x559 = INT32_MIN;
	static int32_t x560 = -27743;

	t90 = ((x557+x558)>>(x559<x560));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x562 = -1;
	uint8_t x563 = UINT8_MAX;
	static uint32_t x564 = UINT32_MAX;
	volatile int32_t t91 = -18764;

	t91 = ((x561+x562)>>(x563<x564));

	if (t91 != 63) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x578 = 2879907U;
	int64_t x579 = -1LL;
	uint8_t x580 = UINT8_MAX;
	volatile uint32_t t92 = 36336U;

	t92 = ((x577+x578)>>(x579<x580));

	if (t92 != 1440009U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x581 = INT64_MAX;
	uint64_t x582 = 69689296317893112LLU;
	int64_t x584 = INT64_MIN;
	volatile uint64_t t93 = 1045831356044920LLU;

	t93 = ((x581+x582)>>(x583<x584));

	if (t93 != 9293061333172668919LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x585 = 3;
	static int8_t x586 = -2;
	static uint16_t x587 = 6U;
	volatile uint8_t x588 = 51U;
	int32_t t94 = 874255;

	t94 = ((x585+x586)>>(x587<x588));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x593 = -1LL;
	int64_t x594 = 3900592798LL;
	int64_t x595 = INT64_MAX;
	volatile int8_t x596 = INT8_MAX;
	volatile int64_t t95 = 17866467849587552LL;

	t95 = ((x593+x594)>>(x595<x596));

	if (t95 != 3900592797LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x603 = -21;
	int16_t x604 = 8;
	static volatile int32_t t96 = 3;

	t96 = ((x601+x602)>>(x603<x604));

	if (t96 != 379) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x605 = INT16_MAX;
	int16_t x606 = -1;
	int64_t x608 = 0LL;
	int32_t t97 = -56393646;

	t97 = ((x605+x606)>>(x607<x608));

	if (t97 != 16383) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x609 = INT16_MIN;
	uint64_t x610 = 364018LLU;
	uint8_t x611 = UINT8_MAX;
	static int64_t x612 = INT64_MAX;
	volatile uint64_t t98 = 2411970801474LLU;

	t98 = ((x609+x610)>>(x611<x612));

	if (t98 != 165625LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x613 = 2845U;
	int32_t x614 = -1;
	int16_t x616 = 96;
	uint32_t t99 = 160U;

	t99 = ((x613+x614)>>(x615<x616));

	if (t99 != 2844U) { NG(); } else { ; }
	
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

