#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -527;
volatile uint16_t x23 = 1543U;
static volatile uint32_t x24 = 13469U;
volatile int64_t t3 = -89LL;
static volatile uint64_t t4 = 1027175233LLU;
static volatile int64_t t6 = -193LL;
int16_t x43 = -13204;
int32_t t8 = 1;
uint32_t x52 = UINT32_MAX;
static uint64_t t10 = 176LLU;
uint16_t x61 = 483U;
int64_t t11 = -604791LL;
int64_t x67 = -968298LL;
int64_t t13 = 0LL;
uint16_t x80 = 14U;
uint8_t x81 = 26U;
int64_t t15 = 84221LL;
volatile uint64_t t16 = 152069520834437LLU;
int8_t x90 = INT8_MIN;
uint32_t x91 = 16129U;
int16_t x105 = INT16_MIN;
int32_t x110 = -1;
int8_t x117 = -3;
uint8_t x133 = 0U;
int32_t x135 = INT32_MIN;
volatile uint64_t t25 = 17183LLU;
static int16_t x142 = 1;
int64_t x143 = 30643019369232LL;
uint64_t x145 = 0LLU;
volatile int8_t x147 = INT8_MIN;
int32_t x149 = -158;
int16_t x151 = INT16_MAX;
static int16_t x155 = -655;
volatile int64_t x156 = INT64_MIN;
int32_t x158 = INT32_MIN;
volatile int16_t x161 = -5309;
static volatile int16_t x164 = INT16_MAX;
volatile uint64_t t32 = 1491423LLU;
uint32_t x182 = 15U;
uint64_t x191 = UINT64_MAX;
uint32_t x194 = 467114U;
int16_t x195 = INT16_MIN;
static uint32_t t35 = 380924U;
int8_t x197 = 38;
int32_t x199 = INT32_MAX;
static uint64_t x202 = 7550165886268465249LLU;
int32_t x203 = INT32_MAX;
int16_t x205 = INT16_MAX;
uint16_t x207 = 5U;
int16_t x208 = -1;
int32_t t38 = -640651;
static int32_t x215 = 8;
uint8_t x230 = 117U;
int32_t t42 = -189242878;
volatile uint8_t x235 = 19U;
uint16_t x244 = UINT16_MAX;
int32_t x249 = -1;
static uint8_t x252 = UINT8_MAX;
static volatile uint16_t x266 = 1U;
volatile uint16_t x267 = 22U;
static int64_t t49 = 94978450978559LL;
int64_t x277 = INT64_MAX;
int32_t x278 = 1;
uint16_t x281 = 118U;
int8_t x284 = 1;
volatile uint32_t x290 = UINT32_MAX;
volatile int64_t t54 = -687959404320323170LL;
static int8_t x306 = 0;
static int64_t x315 = INT64_MAX;
int32_t x320 = -15394041;
int32_t x329 = INT32_MIN;
uint16_t x331 = 15U;
int16_t x333 = INT16_MIN;
int16_t x336 = INT16_MIN;
int32_t t60 = 8197551;
int32_t x339 = INT32_MIN;
volatile int64_t t61 = -14802593842LL;
static int32_t t62 = 15451223;
uint16_t x354 = 2U;
int8_t x366 = INT8_MIN;
int64_t t66 = -392921586984787926LL;
int32_t x385 = -62673222;
uint64_t x387 = 2LLU;
volatile uint16_t x406 = 849U;
uint8_t x414 = 1U;
uint64_t t74 = 510218491LLU;
uint16_t x420 = 6U;
static volatile int32_t t77 = -180917;
uint32_t x442 = 216456492U;
int64_t x443 = 1LL;
int16_t x445 = -118;
int32_t x447 = -2;
uint32_t x455 = 379U;
uint64_t x469 = UINT64_MAX;
int32_t x487 = INT32_MIN;
int64_t x499 = INT64_MIN;
volatile uint64_t t85 = 33207649104937269LLU;
volatile uint64_t x502 = UINT64_MAX;
volatile uint16_t x504 = UINT16_MAX;
int16_t x507 = INT16_MIN;
static uint16_t x517 = 2360U;
uint64_t x523 = 8313140LLU;
static volatile int32_t x541 = 100887;
static volatile uint64_t x548 = UINT64_MAX;
static int8_t x550 = -1;
int16_t x563 = INT16_MIN;
volatile uint32_t x567 = UINT32_MAX;
volatile int64_t t98 = -1568527996196023LL;
int64_t x574 = -1887838884LL;
int64_t t99 = 19359714LL;


void f0(void) {
	volatile int8_t x9 = INT8_MIN;
	static uint16_t x10 = UINT16_MAX;
	int64_t x11 = -2805LL;
	uint8_t x12 = 88U;
	static volatile int64_t t0 = -3442107LL;

	t0 = (((x9*x10)/x11)*x12);

	if (t0 != 263120LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x13 = INT8_MIN;
	volatile int16_t x14 = -1891;
	uint16_t x15 = 98U;
	int16_t x16 = INT16_MIN;

	t1 = (((x13*x14)/x15)*x16);

	if (t1 != -80904192) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 17;
	uint16_t x18 = 2U;
	int64_t x19 = 11LL;
	volatile uint64_t x20 = UINT64_MAX;
	volatile uint64_t t2 = 7590664275282439LLU;

	t2 = (((x17*x18)/x19)*x20);

	if (t2 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 4762;
	static int64_t x22 = -1LL;

	t3 = (((x21*x22)/x23)*x24);

	if (t3 != -40407LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MAX;
	int32_t x27 = -4;
	int16_t x28 = INT16_MIN;

	t4 = (((x25*x26)/x27)*x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x29 = 124853U;
	int16_t x30 = -1;
	int8_t x31 = -1;
	int64_t x32 = -1LL;
	int64_t t5 = 0LL;

	t5 = (((x29*x30)/x31)*x32);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	int64_t x34 = -3940LL;
	volatile int8_t x35 = -1;
	static int16_t x36 = 1603;

	t6 = (((x33*x34)/x35)*x36);

	if (t6 != -6315820LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = 618LLU;
	int16_t x38 = -1;
	volatile int16_t x39 = INT16_MIN;
	uint16_t x40 = 13124U;
	volatile uint64_t t7 = 73470902428365743LLU;

	t7 = (((x37*x38)/x39)*x40);

	if (t7 != 13124LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -53;
	int8_t x42 = INT8_MIN;
	uint16_t x44 = 15U;

	t8 = (((x41*x42)/x43)*x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	volatile int32_t x46 = INT32_MAX;
	int8_t x47 = INT8_MIN;
	static int64_t x48 = -1LL;
	int64_t t9 = 93954LL;

	t9 = (((x45*x46)/x47)*x48);

	if (t9 != -16777215LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 927U;
	uint64_t x50 = 225504231596343LLU;
	int32_t x51 = INT32_MIN;

	t10 = (((x49*x50)/x51)*x52);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x62 = -1;
	int16_t x63 = INT16_MIN;
	int64_t x64 = 128448LL;

	t11 = (((x61*x62)/x63)*x64);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MAX;
	uint16_t x66 = UINT16_MAX;
	static volatile int8_t x68 = INT8_MIN;
	int64_t t12 = 5724795574483LL;

	t12 = (((x65*x66)/x67)*x68);

	if (t12 != 1024LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = 5LL;
	int8_t x74 = -55;
	int32_t x75 = INT32_MAX;
	int32_t x76 = INT32_MIN;

	t13 = (((x73*x74)/x75)*x76);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x77 = 0U;
	int8_t x78 = INT8_MIN;
	static int8_t x79 = 1;
	static volatile int32_t t14 = -60710;

	t14 = (((x77*x78)/x79)*x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x82 = 125U;
	static volatile int64_t x83 = 1847788391799LL;
	int32_t x84 = INT32_MAX;

	t15 = (((x81*x82)/x83)*x84);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MIN;
	static volatile uint64_t x86 = 3LLU;
	volatile int8_t x87 = INT8_MIN;
	volatile int16_t x88 = INT16_MIN;

	t16 = (((x85*x86)/x87)*x88);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MAX;
	uint8_t x92 = UINT8_MAX;
	static uint32_t t17 = 98362U;

	t17 = (((x89*x90)/x91)*x92);

	if (t17 != 67903185U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = UINT64_MAX;
	static int8_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = INT32_MAX;
	uint64_t t18 = 752772748557445LLU;

	t18 = (((x93*x94)/x95)*x96);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x101 = INT8_MAX;
	uint64_t x102 = 62523610447576508LLU;
	int64_t x103 = -1LL;
	int32_t x104 = INT32_MAX;
	static uint64_t t19 = 1332488LLU;

	t19 = (((x101*x102)/x103)*x104);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x106 = 1;
	int64_t x107 = -11760406LL;
	uint16_t x108 = 5876U;
	int64_t t20 = 153537970LL;

	t20 = (((x105*x106)/x107)*x108);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = INT8_MIN;
	uint8_t x111 = 1U;
	static int8_t x112 = -1;
	static volatile int32_t t21 = 25689989;

	t21 = (((x109*x110)/x111)*x112);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	static int16_t x114 = INT16_MIN;
	int64_t x115 = -1LL;
	static volatile int32_t x116 = -2760;
	static volatile int64_t t22 = -2167LL;

	t22 = (((x113*x114)/x115)*x116);

	if (t22 != 2963527434240LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x118 = 6736U;
	static int8_t x119 = -1;
	int32_t x120 = -1;
	volatile uint32_t t23 = 1U;

	t23 = (((x117*x118)/x119)*x120);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x125 = 150852188LLU;
	static int64_t x126 = -1LL;
	int64_t x127 = -669179563739984LL;
	int64_t x128 = INT64_MAX;
	volatile uint64_t t24 = 35630441LLU;

	t24 = (((x125*x126)/x127)*x128);

	if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x134 = UINT8_MAX;
	uint64_t x136 = UINT64_MAX;

	t25 = (((x133*x134)/x135)*x136);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x141 = 9312260070803LLU;
	int32_t x144 = INT32_MIN;
	static uint64_t t26 = 9LLU;

	t26 = (((x141*x142)/x143)*x144);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x146 = -2360353;
	int32_t x148 = INT32_MAX;
	uint64_t t27 = 6233278345351LLU;

	t27 = (((x145*x146)/x147)*x148);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x150 = INT8_MAX;
	static int32_t x152 = -1;
	static volatile int32_t t28 = 1;

	t28 = (((x149*x150)/x151)*x152);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x153 = 649399LLU;
	static uint8_t x154 = 10U;
	static uint64_t t29 = 26LLU;

	t29 = (((x153*x154)/x155)*x156);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = 4962668829775920LLU;
	int64_t x159 = -1LL;
	int64_t x160 = -1LL;
	volatile uint64_t t30 = 41829935762182LLU;

	t30 = (((x157*x158)/x159)*x160);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x162 = -1;
	int64_t x163 = 12777LL;
	static volatile int64_t t31 = -510771836409LL;

	t31 = (((x161*x162)/x163)*x164);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = -1LL;
	volatile uint16_t x170 = 1U;
	uint64_t x171 = UINT64_MAX;
	uint64_t x172 = 1034097336167844LLU;

	t32 = (((x169*x170)/x171)*x172);

	if (t32 != 1034097336167844LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x181 = INT16_MIN;
	int32_t x183 = -1;
	int8_t x184 = -1;
	static uint32_t t33 = 3293U;

	t33 = (((x181*x182)/x183)*x184);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = -1;
	uint32_t x190 = 12U;
	int8_t x192 = INT8_MIN;
	uint64_t t34 = 93145333LLU;

	t34 = (((x189*x190)/x191)*x192);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x193 = INT16_MIN;
	int8_t x196 = 1;

	t35 = (((x193*x194)/x195)*x196);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x198 = -1;
	volatile int32_t x200 = -40845;
	int32_t t36 = 2;

	t36 = (((x197*x198)/x199)*x200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x201 = INT16_MIN;
	volatile int32_t x204 = INT32_MAX;
	uint64_t t37 = 328015044LLU;

	t37 = (((x201*x202)/x203)*x204);

	if (t37 != 3895755345357635150LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x206 = 232U;

	t38 = (((x205*x206)/x207)*x208);

	if (t38 != -1520388) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x213 = -1;
	volatile uint32_t x214 = UINT32_MAX;
	int32_t x216 = -1;
	uint32_t t39 = 1U;

	t39 = (((x213*x214)/x215)*x216);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x221 = 31925U;
	uint8_t x222 = 1U;
	int8_t x223 = -1;
	uint16_t x224 = 93U;
	int32_t t40 = 1096077;

	t40 = (((x221*x222)/x223)*x224);

	if (t40 != -2969025) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MIN;
	uint32_t x226 = UINT32_MAX;
	int16_t x227 = INT16_MIN;
	volatile int8_t x228 = INT8_MIN;
	volatile uint32_t t41 = 216551U;

	t41 = (((x225*x226)/x227)*x228);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x229 = -1;
	int8_t x231 = 7;
	uint16_t x232 = 7728U;

	t42 = (((x229*x230)/x231)*x232);

	if (t42 != -123648) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x233 = 3LLU;
	int8_t x234 = -43;
	int64_t x236 = -1407LL;
	static volatile uint64_t t43 = 19122894LLU;

	t43 = (((x233*x234)/x235)*x236);

	if (t43 != 17475862806672216495LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x237 = 1U;
	volatile uint16_t x238 = UINT16_MAX;
	int16_t x239 = INT16_MIN;
	volatile int16_t x240 = -2730;
	volatile int32_t t44 = -334312517;

	t44 = (((x237*x238)/x239)*x240);

	if (t44 != 2730) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = 981;
	uint16_t x242 = 210U;
	int8_t x243 = INT8_MIN;
	volatile int32_t t45 = -592289877;

	t45 = (((x241*x242)/x243)*x244);

	if (t45 != -105445815) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x250 = INT8_MAX;
	int64_t x251 = INT64_MIN;
	static int64_t t46 = 140377825826915LL;

	t46 = (((x249*x250)/x251)*x252);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = INT16_MIN;
	int64_t x258 = 3941538597170LL;
	uint64_t x259 = 83923LLU;
	int64_t x260 = -1LL;
	volatile uint64_t t47 = 27259505862879LLU;

	t47 = (((x257*x258)/x259)*x260);

	if (t47 != 18446525807111158357LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x265 = 2U;
	uint8_t x268 = 53U;
	int32_t t48 = -3374863;

	t48 = (((x265*x266)/x267)*x268);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x273 = 1241254LL;
	static int16_t x274 = -12;
	static uint32_t x275 = 132U;
	uint32_t x276 = 90211547U;

	t49 = (((x273*x274)/x275)*x276);

	if (t49 != -10179561175027LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x279 = UINT16_MAX;
	uint16_t x280 = 4U;
	volatile int64_t t50 = 3767013032697159399LL;

	t50 = (((x277*x278)/x279)*x280);

	if (t50 != 562958543486976LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x282 = 3U;
	uint16_t x283 = 19U;
	static int32_t t51 = 15588;

	t51 = (((x281*x282)/x283)*x284);

	if (t51 != 18) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x289 = INT8_MAX;
	volatile int64_t x291 = -1LL;
	volatile int16_t x292 = INT16_MAX;
	volatile int64_t t52 = 74253516348844781LL;

	t52 = (((x289*x290)/x291)*x292);

	if (t52 != -140733189226623LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x293 = 3156U;
	int32_t x294 = -1;
	volatile int16_t x295 = INT16_MAX;
	int32_t x296 = -1;
	int32_t t53 = -28430;

	t53 = (((x293*x294)/x295)*x296);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x297 = INT16_MIN;
	static volatile uint8_t x298 = 1U;
	int64_t x299 = 3478LL;
	static uint16_t x300 = 494U;

	t54 = (((x297*x298)/x299)*x300);

	if (t54 != -4446LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x305 = INT64_MIN;
	uint32_t x307 = 1345U;
	uint8_t x308 = 78U;
	int64_t t55 = -799581976235130LL;

	t55 = (((x305*x306)/x307)*x308);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 7U;
	static int64_t x311 = INT64_MIN;
	static int16_t x312 = 126;
	volatile int64_t t56 = 14866154LL;

	t56 = (((x309*x310)/x311)*x312);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x313 = -1;
	volatile uint64_t x314 = UINT64_MAX;
	static int16_t x316 = INT16_MIN;
	static uint64_t t57 = 2322LLU;

	t57 = (((x313*x314)/x315)*x316);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = -1LL;
	int32_t x319 = INT32_MIN;
	volatile int64_t t58 = 144064332138724543LL;

	t58 = (((x317*x318)/x319)*x320);

	if (t58 != 15394041LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x330 = UINT32_MAX;
	int8_t x332 = 2;
	static volatile uint32_t t59 = 0U;

	t59 = (((x329*x330)/x331)*x332);

	if (t59 != 286331152U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x334 = -3;
	int32_t x335 = INT32_MAX;

	t60 = (((x333*x334)/x335)*x336);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x337 = 2981LL;
	int16_t x338 = -930;
	int8_t x340 = 2;

	t61 = (((x337*x338)/x339)*x340);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x341 = -944;
	volatile int8_t x342 = -1;
	int32_t x343 = INT32_MAX;
	volatile int16_t x344 = INT16_MAX;

	t62 = (((x341*x342)/x343)*x344);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x345 = 19475525532LL;
	int32_t x346 = 70;
	int32_t x347 = INT32_MIN;
	uint8_t x348 = 1U;
	volatile int64_t t63 = -5946257166956329LL;

	t63 = (((x345*x346)/x347)*x348);

	if (t63 != -634LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x353 = 117626042;
	uint64_t x355 = 14LLU;
	int64_t x356 = -1LL;
	uint64_t t64 = 3475LLU;

	t64 = (((x353*x354)/x355)*x356);

	if (t64 != 18446744073692747896LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x365 = -3;
	uint64_t x367 = 12590014993LLU;
	static int8_t x368 = INT8_MIN;
	uint64_t t65 = 6852LLU;

	t65 = (((x365*x366)/x367)*x368);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x373 = INT8_MIN;
	static uint8_t x374 = 7U;
	int64_t x375 = INT64_MIN;
	volatile int8_t x376 = -1;

	t66 = (((x373*x374)/x375)*x376);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x377 = 2910U;
	static uint64_t x378 = 631389LLU;
	static int32_t x379 = INT32_MIN;
	uint32_t x380 = UINT32_MAX;
	volatile uint64_t t67 = 62371784934LLU;

	t67 = (((x377*x378)/x379)*x380);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x381 = 15;
	int16_t x382 = 0;
	uint64_t x383 = 532348121929LLU;
	static uint16_t x384 = UINT16_MAX;
	static volatile uint64_t t68 = 11543748776LLU;

	t68 = (((x381*x382)/x383)*x384);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x386 = UINT32_MAX;
	volatile int64_t x388 = -96331LL;
	volatile uint64_t t69 = 2086624619142930231LLU;

	t69 = (((x385*x386)/x387)*x388);

	if (t69 != 18446741055022477375LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x389 = INT16_MIN;
	volatile uint8_t x390 = 4U;
	int64_t x391 = INT64_MAX;
	static uint16_t x392 = 89U;
	int64_t t70 = 7074LL;

	t70 = (((x389*x390)/x391)*x392);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = -11;
	int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MIN;
	volatile int32_t t71 = 3356;

	t71 = (((x393*x394)/x395)*x396);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x401 = -1LL;
	uint16_t x402 = UINT16_MAX;
	static uint32_t x403 = 3685U;
	uint32_t x404 = UINT32_MAX;
	volatile int64_t t72 = -15LL;

	t72 = (((x401*x402)/x403)*x404);

	if (t72 != -73014444015LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x405 = 31131U;
	uint16_t x407 = UINT16_MAX;
	static int16_t x408 = 92;
	volatile int32_t t73 = 41728;

	t73 = (((x405*x406)/x407)*x408);

	if (t73 != 37076) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x413 = 5LLU;
	volatile uint64_t x415 = UINT64_MAX;
	uint32_t x416 = 13U;

	t74 = (((x413*x414)/x415)*x416);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x417 = 96U;
	uint64_t x418 = UINT64_MAX;
	int8_t x419 = INT8_MAX;
	uint64_t t75 = 20369994161535551LLU;

	t75 = (((x417*x418)/x419)*x420);

	if (t75 != 871499720017774086LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x421 = 85U;
	int64_t x422 = -1LL;
	static int64_t x423 = INT64_MIN;
	volatile uint8_t x424 = 4U;
	volatile int64_t t76 = 2LL;

	t76 = (((x421*x422)/x423)*x424);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x429 = INT8_MIN;
	volatile uint8_t x430 = 8U;
	int16_t x431 = INT16_MIN;
	int8_t x432 = INT8_MIN;

	t77 = (((x429*x430)/x431)*x432);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x441 = 22U;
	volatile int64_t x444 = -169LL;
	int64_t t78 = -4222866909LL;

	t78 = (((x441*x442)/x443)*x444);

	if (t78 != -78935764232LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x446 = -460588;
	uint8_t x448 = 0U;
	volatile int32_t t79 = -18;

	t79 = (((x445*x446)/x447)*x448);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x453 = -10;
	static uint16_t x454 = 55U;
	int16_t x456 = INT16_MIN;
	uint32_t t80 = 2017U;

	t80 = (((x453*x454)/x455)*x456);

	if (t80 != 2323185664U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x457 = -782949298;
	uint32_t x458 = UINT32_MAX;
	int64_t x459 = INT64_MIN;
	uint8_t x460 = 79U;
	volatile int64_t t81 = -1002962865716428LL;

	t81 = (((x457*x458)/x459)*x460);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x470 = INT32_MIN;
	uint8_t x471 = UINT8_MAX;
	static int8_t x472 = INT8_MIN;
	uint64_t t82 = 13000704LLU;

	t82 = (((x469*x470)/x471)*x472);

	if (t82 != 18446744072631599104LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x481 = 13;
	volatile int8_t x482 = INT8_MAX;
	static volatile int32_t x483 = INT32_MAX;
	uint64_t x484 = 415688080064589244LLU;
	uint64_t t83 = 2365046LLU;

	t83 = (((x481*x482)/x483)*x484);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x485 = 43U;
	int16_t x486 = INT16_MIN;
	int16_t x488 = -1;
	volatile int32_t t84 = -1;

	t84 = (((x485*x486)/x487)*x488);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x497 = 1021;
	static int64_t x498 = -663628988720LL;
	static uint64_t x500 = UINT64_MAX;

	t85 = (((x497*x498)/x499)*x500);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x501 = -1LL;
	volatile int16_t x503 = INT16_MIN;
	uint64_t t86 = 8LLU;

	t86 = (((x501*x502)/x503)*x504);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x505 = -3;
	static int8_t x506 = 0;
	uint64_t x508 = 0LLU;
	volatile uint64_t t87 = 45LLU;

	t87 = (((x505*x506)/x507)*x508);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x509 = INT16_MIN;
	uint32_t x510 = 17736U;
	uint8_t x511 = 86U;
	int16_t x512 = 15;
	volatile uint32_t t88 = 16U;

	t88 = (((x509*x510)/x511)*x512);

	if (t88 != 647754765U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x518 = 6U;
	int16_t x519 = -9888;
	int16_t x520 = INT16_MIN;
	volatile int32_t t89 = 129279541;

	t89 = (((x517*x518)/x519)*x520);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x521 = INT16_MIN;
	int8_t x522 = INT8_MIN;
	static uint16_t x524 = UINT16_MAX;
	uint64_t t90 = 12090264065LLU;

	t90 = (((x521*x522)/x523)*x524);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x537 = -24;
	int16_t x538 = INT16_MIN;
	uint32_t x539 = 14338U;
	int8_t x540 = INT8_MIN;
	static volatile uint32_t t91 = 0U;

	t91 = (((x537*x538)/x539)*x540);

	if (t91 != 4294960384U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x542 = INT8_MAX;
	static uint8_t x543 = 4U;
	int64_t x544 = -130003575LL;
	static int64_t t92 = -889680849018LL;

	t92 = (((x541*x542)/x543)*x544);

	if (t92 != -416422511304150LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x545 = 15115U;
	static uint16_t x546 = 42U;
	uint8_t x547 = 1U;
	static volatile uint64_t t93 = 6434LLU;

	t93 = (((x545*x546)/x547)*x548);

	if (t93 != 18446744073708916786LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x549 = 0U;
	int8_t x551 = 10;
	volatile int8_t x552 = INT8_MAX;
	volatile int32_t t94 = -15158;

	t94 = (((x549*x550)/x551)*x552);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x557 = 52U;
	int64_t x558 = -17LL;
	volatile int16_t x559 = INT16_MIN;
	static volatile int16_t x560 = INT16_MIN;
	int64_t t95 = 39178679LL;

	t95 = (((x557*x558)/x559)*x560);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x561 = 0;
	int16_t x562 = INT16_MIN;
	int64_t x564 = INT64_MIN;
	int64_t t96 = 0LL;

	t96 = (((x561*x562)/x563)*x564);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x565 = -1;
	uint32_t x566 = 992717255U;
	uint64_t x568 = 55608818LLU;
	volatile uint64_t t97 = 117276LLU;

	t97 = (((x565*x566)/x567)*x568);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x569 = UINT16_MAX;
	uint32_t x570 = UINT32_MAX;
	int8_t x571 = 35;
	volatile int64_t x572 = -1LL;

	t98 = (((x569*x570)/x571)*x572);

	if (t98 != -122711478LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x573 = 102154401U;
	volatile int32_t x575 = INT32_MIN;
	int8_t x576 = 1;

	t99 = (((x573*x574)/x575)*x576);

	if (t99 != 89803268LL) { NG(); } else { ; }
	
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

