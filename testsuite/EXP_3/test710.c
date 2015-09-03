#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = 99185557983859LL;
static volatile int32_t t1 = -5000542;
int8_t x13 = INT8_MIN;
uint64_t x15 = 916743217222545LLU;
int32_t t3 = -1;
uint16_t x18 = UINT16_MAX;
int32_t x28 = INT32_MIN;
volatile uint32_t x30 = UINT32_MAX;
int64_t x31 = INT64_MIN;
uint16_t x38 = UINT16_MAX;
volatile int8_t x44 = -28;
int16_t x46 = 16320;
volatile int64_t x48 = -127802816577947952LL;
int8_t x55 = INT8_MIN;
static uint16_t x67 = 2U;
int8_t x68 = 50;
static volatile int32_t t14 = 8;
uint32_t x73 = UINT32_MAX;
int32_t x76 = INT32_MAX;
int32_t t15 = 4;
volatile int16_t x79 = -1;
int16_t x86 = -1;
volatile uint8_t x98 = 1U;
uint8_t x101 = 59U;
volatile int32_t t20 = 208900;
int16_t x106 = 1;
uint8_t x107 = 41U;
int32_t x112 = -1;
int16_t x124 = 1;
int32_t t23 = 687071;
int16_t x126 = INT16_MAX;
static uint16_t x127 = UINT16_MAX;
int32_t x131 = INT32_MIN;
int64_t x135 = 105872170403494LL;
uint64_t x137 = 307LLU;
static volatile uint64_t x138 = 102906LLU;
static volatile int32_t t28 = 1025903;
int8_t x146 = 2;
int16_t x151 = INT16_MIN;
int16_t x163 = 47;
int32_t x177 = 12809799;
int32_t x199 = INT32_MAX;
static int64_t x202 = -494269LL;
static int8_t x206 = -1;
uint32_t x207 = 52925818U;
int16_t x219 = -15;
uint64_t x220 = 647530789129690329LLU;
static int8_t x224 = INT8_MIN;
uint8_t x228 = 1U;
int64_t x240 = INT64_MIN;
uint64_t x245 = 228524418403LLU;
volatile int32_t t48 = -434;
uint32_t x266 = 55U;
static volatile uint8_t x281 = 0U;
static int16_t x284 = INT16_MIN;
static uint32_t x286 = UINT32_MAX;
int64_t x290 = 1404521144966419LL;
volatile int32_t t56 = 1;
uint32_t x322 = 114812U;
volatile int32_t t60 = 4206;
int16_t x331 = -1;
static uint64_t x336 = 100412229696LLU;
uint32_t x338 = UINT32_MAX;
volatile int8_t x342 = -1;
volatile int64_t x344 = 336496767469896LL;
uint32_t x355 = 2U;
int16_t x369 = INT16_MIN;
volatile int32_t t71 = -3522;
int8_t x385 = INT8_MIN;
volatile int8_t x401 = -1;
uint16_t x404 = 2240U;
int8_t x413 = 1;
int16_t x416 = INT16_MIN;
uint32_t x417 = 21619U;
int64_t x424 = 312436436366867744LL;
volatile int32_t t81 = 313806609;
volatile uint32_t x433 = UINT32_MAX;
uint16_t x440 = 2221U;
int32_t t84 = 4;
int32_t x447 = 1;
int16_t x448 = -1;
static volatile uint64_t x453 = 8739064350LLU;
static uint8_t x459 = UINT8_MAX;
uint16_t x464 = 122U;
int32_t t90 = 15415296;
volatile uint8_t x473 = 1U;
static int32_t x476 = INT32_MIN;
volatile int32_t t91 = 6968960;
uint32_t x482 = UINT32_MAX;
int64_t x484 = INT64_MAX;
int8_t x492 = INT8_MAX;
uint8_t x493 = 3U;
int64_t x495 = INT64_MIN;
volatile int32_t t96 = -30;
int64_t x509 = 59447744254LL;


void f0(void) {
	uint32_t x1 = 45599393U;
	int16_t x2 = 23;
	int8_t x3 = -1;
	int64_t x4 = -3989LL;
	int32_t t0 = -36745742;

	t0 = ((x1*x2)==(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	volatile int8_t x7 = 18;
	int16_t x8 = INT16_MIN;

	t1 = ((x5*x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 719;
	uint32_t x10 = 4735167U;
	int8_t x11 = -1;
	volatile int8_t x12 = -1;
	int32_t t2 = -4;

	t2 = ((x9*x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = 15U;
	int16_t x16 = INT16_MAX;

	t3 = ((x13*x14)==(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int8_t x19 = 0;
	static uint8_t x20 = 2U;
	volatile int32_t t4 = 129067981;

	t4 = ((x17*x18)==(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 20U;
	static uint16_t x26 = 620U;
	int16_t x27 = INT16_MAX;
	int32_t t5 = -27;

	t5 = ((x25*x26)==(x27%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = -1;
	uint8_t x32 = 119U;
	int32_t t6 = -1;

	t6 = ((x29*x30)==(x31%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = -1;
	uint8_t x39 = UINT8_MAX;
	static int8_t x40 = INT8_MIN;
	static volatile int32_t t7 = 6609;

	t7 = ((x37*x38)==(x39%x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 19;
	static volatile int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MAX;
	int32_t t8 = -22338;

	t8 = ((x41*x42)==(x43%x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x47 = UINT8_MAX;
	volatile int32_t t9 = 77052;

	t9 = ((x45*x46)==(x47%x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x49 = 10864U;
	volatile uint8_t x50 = 2U;
	static volatile int32_t x51 = 74711;
	int8_t x52 = INT8_MIN;
	volatile int32_t t10 = 2371800;

	t10 = ((x49*x50)==(x51%x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 48;
	int16_t x54 = INT16_MAX;
	int64_t x56 = -1LL;
	volatile int32_t t11 = 190411416;

	t11 = ((x53*x54)==(x55%x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	static int8_t x58 = 5;
	static int8_t x59 = INT8_MIN;
	static int8_t x60 = INT8_MAX;
	volatile int32_t t12 = -1;

	t12 = ((x57*x58)==(x59%x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 1932U;
	int16_t x62 = INT16_MIN;
	static uint32_t x63 = 66642263U;
	volatile int32_t x64 = -1153;
	static volatile int32_t t13 = -923364;

	t13 = ((x61*x62)==(x63%x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MAX;
	volatile uint8_t x66 = 1U;

	t14 = ((x65*x66)==(x67%x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x74 = 25700467U;
	int8_t x75 = INT8_MIN;

	t15 = ((x73*x74)==(x75%x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	volatile uint64_t x78 = 1022682691356020LLU;
	int64_t x80 = INT64_MIN;
	volatile int32_t t16 = 32621;

	t16 = ((x77*x78)==(x79%x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x85 = -1;
	static uint32_t x87 = 407055U;
	int32_t x88 = -23931;
	static int32_t t17 = -823387;

	t17 = ((x85*x86)==(x87%x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -13699059055770202LL;
	static int8_t x94 = 0;
	int8_t x95 = INT8_MIN;
	int64_t x96 = -3963000762776LL;
	volatile int32_t t18 = -316;

	t18 = ((x93*x94)==(x95%x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = 11;
	volatile int32_t x99 = INT32_MIN;
	int8_t x100 = INT8_MAX;
	volatile int32_t t19 = 1182192;

	t19 = ((x97*x98)==(x99%x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x102 = 742U;
	uint16_t x103 = 5U;
	int8_t x104 = 6;

	t20 = ((x101*x102)==(x103%x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = UINT8_MAX;
	int16_t x108 = 2795;
	int32_t t21 = 138;

	t21 = ((x105*x106)==(x107%x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 324713U;
	static int64_t x110 = 1LL;
	static volatile int64_t x111 = -1LL;
	volatile int32_t t22 = -634930068;

	t22 = ((x109*x110)==(x111%x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = INT8_MIN;
	volatile int8_t x122 = INT8_MIN;
	volatile int64_t x123 = INT64_MIN;

	t23 = ((x121*x122)==(x123%x124));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x125 = 151437195656LLU;
	static int8_t x128 = 1;
	volatile int32_t t24 = -55427144;

	t24 = ((x125*x126)==(x127%x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x129 = 48;
	int16_t x130 = INT16_MIN;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t25 = 6844;

	t25 = ((x129*x130)==(x131%x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x133 = 11U;
	uint64_t x134 = UINT64_MAX;
	volatile int64_t x136 = 1LL;
	int32_t t26 = -4178000;

	t26 = ((x133*x134)==(x135%x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 4U;
	int32_t t27 = 8745;

	t27 = ((x137*x138)==(x139%x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = -1LL;
	volatile uint8_t x142 = 61U;
	int32_t x143 = INT32_MIN;
	volatile int64_t x144 = INT64_MIN;

	t28 = ((x141*x142)==(x143%x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = -30;
	int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MAX;
	volatile int32_t t29 = 0;

	t29 = ((x145*x146)==(x147%x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = -6;
	uint16_t x150 = 3397U;
	int8_t x152 = -1;
	int32_t t30 = -124220;

	t30 = ((x149*x150)==(x151%x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x161 = -1;
	int8_t x162 = 4;
	int16_t x164 = -1;
	int32_t t31 = -1501966;

	t31 = ((x161*x162)==(x163%x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x169 = 23U;
	static uint16_t x170 = UINT16_MAX;
	uint16_t x171 = 1U;
	static int32_t x172 = INT32_MIN;
	int32_t t32 = 112;

	t32 = ((x169*x170)==(x171%x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x178 = 52U;
	volatile int16_t x179 = -1;
	volatile uint32_t x180 = 600U;
	volatile int32_t t33 = -3552122;

	t33 = ((x177*x178)==(x179%x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x185 = 1029957294714113485LLU;
	int8_t x186 = INT8_MAX;
	int64_t x187 = INT64_MIN;
	int16_t x188 = 1957;
	volatile int32_t t34 = -772;

	t34 = ((x185*x186)==(x187%x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x189 = -5297;
	int32_t x190 = 24;
	int32_t x191 = INT32_MIN;
	uint8_t x192 = 1U;
	int32_t t35 = -1;

	t35 = ((x189*x190)==(x191%x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = INT8_MIN;
	static int8_t x194 = 11;
	volatile uint16_t x195 = 243U;
	uint64_t x196 = 2789LLU;
	static volatile int32_t t36 = -24;

	t36 = ((x193*x194)==(x195%x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x197 = UINT16_MAX;
	uint64_t x198 = UINT64_MAX;
	volatile uint32_t x200 = 189923912U;
	static volatile int32_t t37 = -797959;

	t37 = ((x197*x198)==(x199%x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = -1;
	uint16_t x203 = UINT16_MAX;
	volatile int16_t x204 = 213;
	int32_t t38 = -17978;

	t38 = ((x201*x202)==(x203%x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	static volatile int8_t x208 = INT8_MIN;
	volatile int32_t t39 = 19888665;

	t39 = ((x205*x206)==(x207%x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x213 = 22;
	int16_t x214 = INT16_MIN;
	static int64_t x215 = INT64_MAX;
	static volatile int32_t x216 = 810192;
	int32_t t40 = 895834;

	t40 = ((x213*x214)==(x215%x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x217 = INT16_MAX;
	int32_t x218 = -6844;
	volatile int32_t t41 = -891;

	t41 = ((x217*x218)==(x219%x220));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = 209;
	uint8_t x222 = UINT8_MAX;
	int64_t x223 = INT64_MIN;
	volatile int32_t t42 = 454697519;

	t42 = ((x221*x222)==(x223%x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x225 = 2U;
	static int32_t x226 = -1;
	static volatile uint64_t x227 = 1354250423LLU;
	volatile int32_t t43 = 14492;

	t43 = ((x225*x226)==(x227%x228));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = 48;
	uint8_t x230 = UINT8_MAX;
	int16_t x231 = INT16_MIN;
	int32_t x232 = 3281631;
	static volatile int32_t t44 = 13726108;

	t44 = ((x229*x230)==(x231%x232));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x237 = INT32_MAX;
	int64_t x238 = 158070015LL;
	int16_t x239 = INT16_MIN;
	int32_t t45 = -3209;

	t45 = ((x237*x238)==(x239%x240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x241 = INT32_MIN;
	volatile uint8_t x242 = 0U;
	volatile int32_t x243 = -1;
	uint32_t x244 = 51471414U;
	volatile int32_t t46 = -82;

	t46 = ((x241*x242)==(x243%x244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x246 = INT64_MIN;
	volatile uint16_t x247 = 102U;
	int8_t x248 = INT8_MIN;
	int32_t t47 = -12600;

	t47 = ((x245*x246)==(x247%x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = 1488;
	uint8_t x250 = 105U;
	int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;

	t48 = ((x249*x250)==(x251%x252));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x261 = 118751LLU;
	int32_t x262 = -573757855;
	int16_t x263 = -1;
	volatile uint8_t x264 = UINT8_MAX;
	int32_t t49 = -1068;

	t49 = ((x261*x262)==(x263%x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x265 = INT16_MIN;
	int32_t x267 = 109945;
	int8_t x268 = -2;
	int32_t t50 = 20;

	t50 = ((x265*x266)==(x267%x268));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x269 = -741;
	volatile uint64_t x270 = 211606812803487799LLU;
	int16_t x271 = 1538;
	static int64_t x272 = INT64_MIN;
	static volatile int32_t t51 = 176690;

	t51 = ((x269*x270)==(x271%x272));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x273 = -50;
	int16_t x274 = INT16_MAX;
	volatile int8_t x275 = -1;
	int16_t x276 = INT16_MIN;
	int32_t t52 = -30766;

	t52 = ((x273*x274)==(x275%x276));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x282 = -446045506384LL;
	uint16_t x283 = 99U;
	volatile int32_t t53 = 45;

	t53 = ((x281*x282)==(x283%x284));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x285 = 250860629184344101LLU;
	int32_t x287 = INT32_MIN;
	int16_t x288 = -1;
	volatile int32_t t54 = -3;

	t54 = ((x285*x286)==(x287%x288));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x289 = 25U;
	uint64_t x291 = 515023580740109861LLU;
	static uint8_t x292 = UINT8_MAX;
	static int32_t t55 = 387129;

	t55 = ((x289*x290)==(x291%x292));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x293 = 296;
	static int8_t x294 = -1;
	volatile int16_t x295 = -7;
	int64_t x296 = -1LL;

	t56 = ((x293*x294)==(x295%x296));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = -1;
	int64_t x299 = -3163393236474554LL;
	static uint8_t x300 = 3U;
	volatile int32_t t57 = 1828;

	t57 = ((x297*x298)==(x299%x300));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x317 = -1LL;
	int32_t x318 = -1;
	uint32_t x319 = UINT32_MAX;
	int32_t x320 = -798073;
	volatile int32_t t58 = 4567;

	t58 = ((x317*x318)==(x319%x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x321 = INT32_MIN;
	volatile uint16_t x323 = 35U;
	uint16_t x324 = 503U;
	int32_t t59 = -92413;

	t59 = ((x321*x322)==(x323%x324));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x325 = 267776271346520LLU;
	volatile uint32_t x326 = 1633877U;
	int32_t x327 = INT32_MIN;
	volatile int16_t x328 = INT16_MIN;

	t60 = ((x325*x326)==(x327%x328));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x329 = 1;
	uint8_t x330 = UINT8_MAX;
	int64_t x332 = INT64_MIN;
	static int32_t t61 = -8072592;

	t61 = ((x329*x330)==(x331%x332));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x333 = 27U;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	volatile int32_t t62 = 4428275;

	t62 = ((x333*x334)==(x335%x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x337 = INT8_MAX;
	int32_t x339 = INT32_MIN;
	uint16_t x340 = 2227U;
	volatile int32_t t63 = 4;

	t63 = ((x337*x338)==(x339%x340));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x341 = UINT64_MAX;
	volatile int32_t x343 = 227359;
	int32_t t64 = -38872667;

	t64 = ((x341*x342)==(x343%x344));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x345 = UINT16_MAX;
	uint16_t x346 = 1297U;
	volatile uint16_t x347 = UINT16_MAX;
	int32_t x348 = -1;
	volatile int32_t t65 = 62;

	t65 = ((x345*x346)==(x347%x348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x349 = 3U;
	int8_t x350 = INT8_MAX;
	static int32_t x351 = 751135;
	volatile int32_t x352 = INT32_MAX;
	volatile int32_t t66 = -40316247;

	t66 = ((x349*x350)==(x351%x352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x353 = -3;
	uint16_t x354 = 823U;
	int16_t x356 = INT16_MAX;
	volatile int32_t t67 = -9812065;

	t67 = ((x353*x354)==(x355%x356));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x357 = UINT16_MAX;
	uint32_t x358 = UINT32_MAX;
	uint64_t x359 = 345990316202LLU;
	int64_t x360 = -1LL;
	int32_t t68 = -21107;

	t68 = ((x357*x358)==(x359%x360));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 11U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t69 = 534439545;

	t69 = ((x365*x366)==(x367%x368));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x370 = INT8_MIN;
	int16_t x371 = -1;
	static int16_t x372 = -15;
	int32_t t70 = -2296234;

	t70 = ((x369*x370)==(x371%x372));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x373 = -1;
	uint8_t x374 = 19U;
	int64_t x375 = 104945000LL;
	int64_t x376 = INT64_MIN;

	t71 = ((x373*x374)==(x375%x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x381 = UINT16_MAX;
	volatile int64_t x382 = -1LL;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = UINT64_MAX;
	int32_t t72 = 6;

	t72 = ((x381*x382)==(x383%x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x386 = INT16_MIN;
	uint16_t x387 = 10004U;
	static uint8_t x388 = 1U;
	static volatile int32_t t73 = -12;

	t73 = ((x385*x386)==(x387%x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x389 = -1;
	static int32_t x390 = -1;
	int32_t x391 = INT32_MIN;
	int8_t x392 = -1;
	int32_t t74 = 782937;

	t74 = ((x389*x390)==(x391%x392));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x393 = UINT8_MAX;
	int32_t x394 = -190;
	volatile int16_t x395 = -1481;
	uint8_t x396 = 3U;
	volatile int32_t t75 = -149;

	t75 = ((x393*x394)==(x395%x396));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x402 = -1LL;
	int16_t x403 = INT16_MIN;
	int32_t t76 = 5;

	t76 = ((x401*x402)==(x403%x404));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x405 = INT16_MAX;
	uint16_t x406 = UINT16_MAX;
	volatile uint8_t x407 = 50U;
	static int16_t x408 = INT16_MAX;
	volatile int32_t t77 = -23175694;

	t77 = ((x405*x406)==(x407%x408));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x409 = UINT8_MAX;
	uint32_t x410 = 578773816U;
	uint32_t x411 = 37143929U;
	volatile uint16_t x412 = 444U;
	volatile int32_t t78 = -13103;

	t78 = ((x409*x410)==(x411%x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x414 = 53U;
	int64_t x415 = -1LL;
	int32_t t79 = -449;

	t79 = ((x413*x414)==(x415%x416));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x418 = -1;
	uint16_t x419 = UINT16_MAX;
	static uint64_t x420 = 22153566787LLU;
	int32_t t80 = 1;

	t80 = ((x417*x418)==(x419%x420));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x421 = 51U;
	int64_t x422 = -2847LL;
	int32_t x423 = -1;

	t81 = ((x421*x422)==(x423%x424));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x429 = UINT16_MAX;
	int8_t x430 = 4;
	int32_t x431 = INT32_MIN;
	volatile uint16_t x432 = UINT16_MAX;
	volatile int32_t t82 = -2;

	t82 = ((x429*x430)==(x431%x432));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x434 = -1LL;
	int32_t x435 = INT32_MAX;
	volatile uint64_t x436 = 25089609759436LLU;
	int32_t t83 = 298;

	t83 = ((x433*x434)==(x435%x436));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x437 = 32;
	static int16_t x438 = -1;
	static int16_t x439 = -1;

	t84 = ((x437*x438)==(x439%x440));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x441 = 55U;
	uint32_t x442 = 145150586U;
	static uint64_t x443 = 301238629904LLU;
	int8_t x444 = 41;
	volatile int32_t t85 = 45430;

	t85 = ((x441*x442)==(x443%x444));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x445 = 12671LLU;
	int64_t x446 = INT64_MIN;
	int32_t t86 = 2883792;

	t86 = ((x445*x446)==(x447%x448));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x449 = -7370LL;
	int32_t x450 = 699;
	volatile int16_t x451 = INT16_MIN;
	int8_t x452 = -7;
	volatile int32_t t87 = 6035056;

	t87 = ((x449*x450)==(x451%x452));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x454 = 57104201204412LLU;
	volatile uint16_t x455 = UINT16_MAX;
	static int32_t x456 = -10738612;
	int32_t t88 = -17;

	t88 = ((x453*x454)==(x455%x456));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x457 = -4;
	int16_t x458 = INT16_MIN;
	uint16_t x460 = UINT16_MAX;
	static volatile int32_t t89 = 1;

	t89 = ((x457*x458)==(x459%x460));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x461 = UINT64_MAX;
	int8_t x462 = 0;
	int8_t x463 = 1;

	t90 = ((x461*x462)==(x463%x464));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x474 = 5;
	int32_t x475 = INT32_MAX;

	t91 = ((x473*x474)==(x475%x476));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x481 = -43;
	static int64_t x483 = -73756134LL;
	volatile int32_t t92 = 44469;

	t92 = ((x481*x482)==(x483%x484));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x489 = INT8_MIN;
	static volatile uint8_t x490 = UINT8_MAX;
	static uint32_t x491 = 4907882U;
	int32_t t93 = 262321992;

	t93 = ((x489*x490)==(x491%x492));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x494 = UINT32_MAX;
	uint64_t x496 = 1485LLU;
	volatile int32_t t94 = 577737;

	t94 = ((x493*x494)==(x495%x496));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x501 = 21U;
	int32_t x502 = -5;
	static volatile uint16_t x503 = 5U;
	uint8_t x504 = UINT8_MAX;
	volatile int32_t t95 = -961928761;

	t95 = ((x501*x502)==(x503%x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x505 = 1;
	volatile int64_t x506 = INT64_MAX;
	int8_t x507 = INT8_MIN;
	static uint64_t x508 = 125551LLU;

	t96 = ((x505*x506)==(x507%x508));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x510 = -1;
	volatile int64_t x511 = 435323424LL;
	volatile int16_t x512 = INT16_MAX;
	volatile int32_t t97 = -40;

	t97 = ((x509*x510)==(x511%x512));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x513 = -1;
	volatile uint16_t x514 = 3U;
	int32_t x515 = -1;
	volatile int16_t x516 = 4;
	int32_t t98 = -482;

	t98 = ((x513*x514)==(x515%x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x517 = INT16_MIN;
	int8_t x518 = INT8_MIN;
	uint32_t x519 = 3U;
	int16_t x520 = -1208;
	volatile int32_t t99 = 5339692;

	t99 = ((x517*x518)==(x519%x520));

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

