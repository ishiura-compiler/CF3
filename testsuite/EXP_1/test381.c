#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int32_t x4 = INT32_MIN;
static volatile uint32_t t0 = 14U;
uint8_t x20 = UINT8_MAX;
uint64_t x28 = 9936133510095670LLU;
uint16_t x40 = UINT16_MAX;
uint32_t x48 = UINT32_MAX;
volatile uint64_t t8 = 5979404568963415154LLU;
volatile int32_t x49 = -180;
static int16_t x50 = INT16_MIN;
int16_t x54 = INT16_MIN;
int16_t x55 = INT16_MIN;
int64_t x59 = INT64_MAX;
int32_t x63 = INT32_MAX;
static uint32_t t13 = 19528982U;
int8_t x82 = -7;
uint64_t x85 = UINT64_MAX;
uint8_t x99 = 1U;
static int8_t x104 = INT8_MIN;
int8_t x112 = -1;
uint64_t x114 = UINT64_MAX;
int32_t x121 = INT32_MAX;
int32_t x122 = -1;
volatile int8_t x124 = -26;
uint32_t x126 = 594272168U;
int8_t x128 = INT8_MIN;
int64_t x143 = 8586427014LL;
uint32_t x144 = 54U;
static volatile int64_t t29 = 335153101137LL;
int8_t x157 = INT8_MIN;
volatile int16_t x159 = INT16_MAX;
int8_t x173 = -1;
volatile uint64_t t34 = 1288870748099951958LLU;
volatile int64_t t35 = 440095904LL;
static int16_t x201 = INT16_MAX;
uint64_t x217 = UINT64_MAX;
uint8_t x218 = UINT8_MAX;
uint8_t x229 = UINT8_MAX;
uint16_t x230 = UINT16_MAX;
uint32_t x232 = UINT32_MAX;
static uint64_t x240 = 612239LLU;
volatile uint64_t t41 = 3875645511LLU;
int64_t x243 = INT64_MIN;
static uint32_t x250 = 6103232U;
int8_t x256 = INT8_MIN;
int32_t x260 = INT32_MIN;
uint8_t x280 = UINT8_MAX;
volatile uint32_t x292 = 1U;
int64_t x299 = INT64_MIN;
volatile int64_t t54 = -76440646672LL;
static int16_t x308 = -1;
int16_t x314 = 53;
volatile int64_t t57 = -220567706250981675LL;
volatile int64_t x317 = -2025043614205LL;
int32_t x319 = INT32_MIN;
volatile int32_t x322 = -1;
static int8_t x337 = -1;
uint16_t x338 = 7U;
volatile int16_t x340 = -699;
static volatile int32_t x342 = -6;
static int64_t t64 = -96093607127903070LL;
static volatile int64_t t65 = 2LL;
uint16_t x362 = 2971U;
static int16_t x376 = INT16_MIN;
uint64_t x378 = UINT64_MAX;
int32_t x382 = -1;
int8_t x385 = -1;
uint16_t x386 = UINT16_MAX;
volatile int16_t x387 = -1;
int16_t x390 = INT16_MIN;
static int8_t x391 = -7;
int16_t x392 = -1;
uint8_t x397 = 1U;
static uint8_t x398 = 3U;
uint16_t x400 = UINT16_MAX;
static uint64_t x407 = 155499996063LLU;
volatile uint8_t x418 = 0U;
int8_t x419 = INT8_MAX;
static int16_t x420 = -1;
uint64_t x426 = UINT64_MAX;
volatile uint64_t t79 = 55206314518525LLU;
int16_t x432 = INT16_MIN;
volatile int64_t x434 = 15900LL;
uint16_t x452 = UINT16_MAX;
int64_t x456 = -4323358453384183268LL;
uint32_t x463 = UINT32_MAX;
int64_t t87 = -646873556809661LL;
uint16_t x473 = 13U;
uint16_t x475 = UINT16_MAX;
int64_t x492 = INT64_MIN;
uint64_t x509 = 77959598393020LLU;
uint16_t x517 = 1U;
volatile int16_t x518 = INT16_MIN;
int32_t x522 = INT32_MIN;
int64_t x538 = -1LL;
static uint64_t x545 = 377606169621300LLU;


void f0(void) {
	uint32_t x1 = 13U;
	int32_t x3 = -94;

	t0 = (((x1*x2)/x3)/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 8450405315645LLU;
	int64_t x14 = 532075362LL;
	int8_t x15 = INT8_MAX;
	static int16_t x16 = INT16_MIN;
	volatile uint64_t t1 = 56964694722441LLU;

	t1 = (((x13*x14)/x15)/x16);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = INT64_MAX;
	uint64_t x18 = UINT64_MAX;
	static int64_t x19 = 1267LL;
	static uint64_t t2 = 57951777855LLU;

	t2 = (((x17*x18)/x19)/x20);

	if (t2 != 28547818799556LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x25 = UINT8_MAX;
	static volatile int8_t x26 = -15;
	int64_t x27 = INT64_MIN;
	static volatile uint64_t t3 = 6LLU;

	t3 = (((x25*x26)/x27)/x28);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = 14U;
	int64_t x30 = 1LL;
	int64_t x31 = 10811369613466LL;
	uint8_t x32 = 57U;
	static volatile int64_t t4 = 679432LL;

	t4 = (((x29*x30)/x31)/x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x33 = -1;
	uint32_t x34 = 7339U;
	int32_t x35 = INT32_MIN;
	static volatile int8_t x36 = 53;
	uint32_t t5 = 11904U;

	t5 = (((x33*x34)/x35)/x36);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 5U;
	uint32_t x38 = 223594470U;
	int64_t x39 = 1LL;
	int64_t t6 = -3332980384493LL;

	t6 = (((x37*x38)/x39)/x40);

	if (t6 != 17059LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 11U;
	static volatile uint16_t x42 = 0U;
	uint8_t x43 = UINT8_MAX;
	int16_t x44 = -8;
	uint32_t t7 = 7650323U;

	t7 = (((x41*x42)/x43)/x44);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x45 = 33238332U;
	static uint32_t x46 = 10095U;
	uint64_t x47 = UINT64_MAX;

	t8 = (((x45*x46)/x47)/x48);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x51 = INT32_MIN;
	volatile uint16_t x52 = 36U;
	static int32_t t9 = 333882;

	t9 = (((x49*x50)/x51)/x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 239511U;
	volatile int64_t x56 = INT64_MAX;
	int64_t t10 = 3674407796394773863LL;

	t10 = (((x53*x54)/x55)/x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x57 = 112043U;
	static uint8_t x58 = 25U;
	uint64_t x60 = 273LLU;
	static volatile uint64_t t11 = 8LLU;

	t11 = (((x57*x58)/x59)/x60);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = 811;
	int16_t x62 = INT16_MIN;
	int8_t x64 = 1;
	int32_t t12 = 16;

	t12 = (((x61*x62)/x63)/x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	uint16_t x67 = 3U;
	uint32_t x68 = UINT32_MAX;

	t13 = (((x65*x66)/x67)/x68);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x70 = 1U;
	int64_t x71 = INT64_MIN;
	volatile uint16_t x72 = 7U;
	int64_t t14 = 613839LL;

	t14 = (((x69*x70)/x71)/x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x81 = -601;
	int32_t x83 = INT32_MIN;
	uint16_t x84 = 1U;
	volatile int32_t t15 = 7;

	t15 = (((x81*x82)/x83)/x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x86 = 56950U;
	int32_t x87 = -64170;
	int32_t x88 = -64826;
	volatile uint64_t t16 = 157LLU;

	t16 = (((x85*x86)/x87)/x88);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x89 = 117U;
	int8_t x90 = INT8_MAX;
	uint32_t x91 = 1432592631U;
	uint8_t x92 = UINT8_MAX;
	volatile uint32_t t17 = 155U;

	t17 = (((x89*x90)/x91)/x92);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = 24727089900037080LLU;
	int8_t x94 = -1;
	static volatile int16_t x95 = -29;
	int8_t x96 = -1;
	uint64_t t18 = 78711LLU;

	t18 = (((x93*x94)/x95)/x96);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = 456U;
	int16_t x98 = -349;
	static int8_t x100 = INT8_MIN;
	int32_t t19 = 182;

	t19 = (((x97*x98)/x99)/x100);

	if (t19 != 1243) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = -1;
	uint64_t x102 = 44893LLU;
	volatile uint32_t x103 = UINT32_MAX;
	static uint64_t t20 = 20457792161784020LLU;

	t20 = (((x101*x102)/x103)/x104);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x105 = 0;
	int64_t x106 = -1LL;
	static int8_t x107 = 56;
	static uint16_t x108 = UINT16_MAX;
	int64_t t21 = -68LL;

	t21 = (((x105*x106)/x107)/x108);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = UINT64_MAX;
	int32_t x110 = -14433;
	volatile int32_t x111 = INT32_MIN;
	uint64_t t22 = 14910889938LLU;

	t22 = (((x109*x110)/x111)/x112);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MAX;
	static int32_t x115 = INT32_MIN;
	int32_t x116 = -1;
	static uint64_t t23 = 0LLU;

	t23 = (((x113*x114)/x115)/x116);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = 3781;
	uint64_t x118 = 27994315836144431LLU;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = -9302;
	uint64_t t24 = 1425592599261LLU;

	t24 = (((x117*x118)/x119)/x120);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x123 = INT16_MAX;
	int32_t t25 = 1;

	t25 = (((x121*x122)/x123)/x124);

	if (t25 != 2520) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 1445089057870993585LLU;
	int64_t x127 = INT64_MIN;
	static volatile uint64_t t26 = 3591LLU;

	t26 = (((x125*x126)/x127)/x128);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = 200139LL;
	static volatile int16_t x134 = 350;
	uint8_t x135 = 3U;
	static uint64_t x136 = 34LLU;
	volatile uint64_t t27 = 59376LLU;

	t27 = (((x133*x134)/x135)/x136);

	if (t27 != 686751LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = INT8_MIN;
	volatile uint16_t x142 = 3996U;
	int64_t t28 = 482929064LL;

	t28 = (((x141*x142)/x143)/x144);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = INT16_MAX;
	int8_t x146 = -1;
	static int64_t x147 = 3506834687LL;
	volatile int16_t x148 = -3328;

	t29 = (((x145*x146)/x147)/x148);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x158 = 1;
	uint8_t x160 = 3U;
	volatile int32_t t30 = -257471;

	t30 = (((x157*x158)/x159)/x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x165 = 4157082123653594LLU;
	uint32_t x166 = UINT32_MAX;
	int8_t x167 = INT8_MAX;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t31 = 372035LLU;

	t31 = (((x165*x166)/x167)/x168);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x174 = -1LL;
	static int16_t x175 = 5;
	static int64_t x176 = INT64_MIN;
	int64_t t32 = -118868182344868022LL;

	t32 = (((x173*x174)/x175)/x176);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x181 = 1U;
	int32_t x182 = INT32_MAX;
	volatile int32_t x183 = -209849809;
	static int32_t x184 = INT32_MIN;
	static volatile int32_t t33 = -3;

	t33 = (((x181*x182)/x183)/x184);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x189 = 12124;
	volatile uint8_t x190 = 20U;
	static uint8_t x191 = UINT8_MAX;
	volatile uint64_t x192 = 8221922463466LLU;

	t34 = (((x189*x190)/x191)/x192);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x193 = 0U;
	static uint32_t x194 = 64431U;
	int32_t x195 = 150;
	int64_t x196 = INT64_MIN;

	t35 = (((x193*x194)/x195)/x196);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x202 = -1LL;
	volatile int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	volatile int64_t t36 = -1719047921614296172LL;

	t36 = (((x201*x202)/x203)/x204);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x209 = 9319234240441LLU;
	int8_t x210 = -1;
	int32_t x211 = INT32_MAX;
	volatile int32_t x212 = 120783504;
	static volatile uint64_t t37 = 82739844041LLU;

	t37 = (((x209*x210)/x211)/x212);

	if (t37 != 71LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x219 = INT16_MIN;
	uint8_t x220 = UINT8_MAX;
	volatile uint64_t t38 = 17992608LLU;

	t38 = (((x217*x218)/x219)/x220);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x225 = 1;
	uint64_t x226 = 265971364LLU;
	int32_t x227 = INT32_MAX;
	int32_t x228 = 1;
	uint64_t t39 = 99LLU;

	t39 = (((x225*x226)/x227)/x228);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x231 = 10116507;
	static uint32_t t40 = 13783358U;

	t40 = (((x229*x230)/x231)/x232);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x237 = 4410951896LLU;
	volatile uint64_t x238 = 5320769230327LLU;
	int64_t x239 = -1LL;

	t41 = (((x237*x238)/x239)/x240);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x241 = -1;
	uint32_t x242 = 0U;
	int16_t x244 = INT16_MIN;
	int64_t t42 = 1LL;

	t42 = (((x241*x242)/x243)/x244);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x245 = -23;
	int16_t x246 = INT16_MAX;
	static int64_t x247 = INT64_MAX;
	uint64_t x248 = 39LLU;
	static volatile uint64_t t43 = 52871LLU;

	t43 = (((x245*x246)/x247)/x248);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x249 = -1;
	int32_t x251 = INT32_MIN;
	int16_t x252 = 1;
	uint32_t t44 = 7619269U;

	t44 = (((x249*x250)/x251)/x252);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x253 = -1174;
	int32_t x254 = -1153;
	static int16_t x255 = 164;
	int32_t t45 = 500757530;

	t45 = (((x253*x254)/x255)/x256);

	if (t45 != -64) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x257 = -1LL;
	int64_t x258 = -1LL;
	uint64_t x259 = 4653622LLU;
	uint64_t t46 = 47607LLU;

	t46 = (((x257*x258)/x259)/x260);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x265 = 1825172548693823LLU;
	volatile int16_t x266 = 5;
	int64_t x267 = INT64_MIN;
	int32_t x268 = 463957;
	uint64_t t47 = 164461409664607744LLU;

	t47 = (((x265*x266)/x267)/x268);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x269 = INT8_MIN;
	uint32_t x270 = 24587008U;
	int32_t x271 = -1;
	int16_t x272 = -112;
	volatile uint32_t t48 = 4013U;

	t48 = (((x269*x270)/x271)/x272);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x277 = -705273428704970514LL;
	uint16_t x278 = 2U;
	int32_t x279 = -1;
	volatile int64_t t49 = 70LL;

	t49 = (((x277*x278)/x279)/x280);

	if (t49 != 5531556303568396LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x281 = 23;
	uint64_t x282 = 48064766670711843LLU;
	uint32_t x283 = UINT32_MAX;
	uint16_t x284 = UINT16_MAX;
	volatile uint64_t t50 = 2866031549217LLU;

	t50 = (((x281*x282)/x283)/x284);

	if (t50 != 3927LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x285 = 6337U;
	static uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 1U;
	int8_t x288 = -1;
	volatile uint64_t t51 = 3209377376824308016LLU;

	t51 = (((x285*x286)/x287)/x288);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MAX;
	int8_t x291 = -1;
	volatile uint32_t t52 = 3153834U;

	t52 = (((x289*x290)/x291)/x292);

	if (t52 != 16256U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x293 = 4201394270292171LLU;
	volatile uint64_t x294 = UINT64_MAX;
	uint32_t x295 = 2U;
	static volatile uint32_t x296 = 334U;
	uint64_t t53 = 1387192499LLU;

	t53 = (((x293*x294)/x295)/x296);

	if (t53 != 27608596825507873LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x297 = 168033U;
	int32_t x298 = INT32_MIN;
	int16_t x300 = -424;

	t54 = (((x297*x298)/x299)/x300);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x305 = UINT64_MAX;
	static volatile uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MAX;
	volatile uint64_t t55 = 29848LLU;

	t55 = (((x305*x306)/x307)/x308);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x309 = 11U;
	uint64_t x310 = 1LLU;
	static int16_t x311 = INT16_MAX;
	static volatile int8_t x312 = -1;
	uint64_t t56 = 4109384111236152226LLU;

	t56 = (((x309*x310)/x311)/x312);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x313 = -1;
	static uint8_t x315 = UINT8_MAX;
	int64_t x316 = INT64_MIN;

	t57 = (((x313*x314)/x315)/x316);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x318 = 0LLU;
	int64_t x320 = INT64_MIN;
	uint64_t t58 = 503278LLU;

	t58 = (((x317*x318)/x319)/x320);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = -1;
	uint8_t x323 = 2U;
	int8_t x324 = 8;
	static int32_t t59 = -474613;

	t59 = (((x321*x322)/x323)/x324);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x325 = 11U;
	int64_t x326 = -1LL;
	static uint32_t x327 = UINT32_MAX;
	uint8_t x328 = 90U;
	volatile int64_t t60 = -53671LL;

	t60 = (((x325*x326)/x327)/x328);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x329 = 316U;
	volatile int8_t x330 = 0;
	int32_t x331 = INT32_MIN;
	int8_t x332 = 14;
	volatile int32_t t61 = 873935639;

	t61 = (((x329*x330)/x331)/x332);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = 0;
	int8_t x334 = INT8_MAX;
	uint32_t x335 = 9U;
	uint32_t x336 = 1642767U;
	uint32_t t62 = 775458793U;

	t62 = (((x333*x334)/x335)/x336);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x339 = -12597062;
	volatile int32_t t63 = -6;

	t63 = (((x337*x338)/x339)/x340);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x341 = -1LL;
	int32_t x343 = 43566;
	int32_t x344 = INT32_MIN;

	t64 = (((x341*x342)/x343)/x344);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x345 = -120249693966811LL;
	static volatile int16_t x346 = -1;
	int64_t x347 = INT64_MIN;
	volatile uint8_t x348 = UINT8_MAX;

	t65 = (((x345*x346)/x347)/x348);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x361 = -1;
	int64_t x363 = 1791146824LL;
	volatile int16_t x364 = INT16_MAX;
	volatile int64_t t66 = -109320791331167494LL;

	t66 = (((x361*x362)/x363)/x364);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x373 = 0;
	static uint8_t x374 = 13U;
	static volatile int16_t x375 = -115;
	volatile int32_t t67 = -604953699;

	t67 = (((x373*x374)/x375)/x376);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x377 = -1;
	int64_t x379 = INT64_MIN;
	volatile int8_t x380 = INT8_MIN;
	volatile uint64_t t68 = 13157LLU;

	t68 = (((x377*x378)/x379)/x380);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x381 = INT32_MAX;
	static int8_t x383 = 6;
	uint32_t x384 = 1374547U;
	volatile uint32_t t69 = 49951095U;

	t69 = (((x381*x382)/x383)/x384);

	if (t69 != 2864U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x388 = 3344U;
	uint32_t t70 = 3880U;

	t70 = (((x385*x386)/x387)/x388);

	if (t70 != 19U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x389 = 0U;
	int32_t t71 = -199;

	t71 = (((x389*x390)/x391)/x392);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x394 = 146315231321LLU;
	int32_t x395 = -1;
	uint8_t x396 = 5U;
	volatile uint64_t t72 = 306344966LLU;

	t72 = (((x393*x394)/x395)/x396);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x399 = -1LL;
	int64_t t73 = -1202LL;

	t73 = (((x397*x398)/x399)/x400);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x405 = INT8_MAX;
	uint8_t x406 = UINT8_MAX;
	int16_t x408 = -1;
	uint64_t t74 = 493582LLU;

	t74 = (((x405*x406)/x407)/x408);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x409 = -1;
	int16_t x410 = -743;
	int16_t x411 = INT16_MAX;
	volatile int16_t x412 = 29;
	int32_t t75 = 4286712;

	t75 = (((x409*x410)/x411)/x412);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x413 = INT32_MIN;
	uint32_t x414 = 7968136U;
	uint64_t x415 = 5750522900LLU;
	int16_t x416 = INT16_MAX;
	static uint64_t t76 = 64721813540083LLU;

	t76 = (((x413*x414)/x415)/x416);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x417 = UINT64_MAX;
	uint64_t t77 = 789299085LLU;

	t77 = (((x417*x418)/x419)/x420);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x421 = 408817600104361LLU;
	volatile uint8_t x422 = 1U;
	static int64_t x423 = 98602LL;
	volatile uint8_t x424 = 12U;
	volatile uint64_t t78 = 2331288555928162348LLU;

	t78 = (((x421*x422)/x423)/x424);

	if (t78 != 345511585LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x425 = 794390650U;
	uint32_t x427 = 2427U;
	uint8_t x428 = UINT8_MAX;

	t79 = (((x425*x426)/x427)/x428);

	if (t79 != 29806416495657LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x429 = 341U;
	volatile int32_t x430 = 3;
	static int16_t x431 = -1;
	static int32_t t80 = -509506624;

	t80 = (((x429*x430)/x431)/x432);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x433 = -121;
	int64_t x435 = -1LL;
	int8_t x436 = -14;
	int64_t t81 = 1LL;

	t81 = (((x433*x434)/x435)/x436);

	if (t81 != -137421LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x437 = UINT32_MAX;
	uint16_t x438 = UINT16_MAX;
	volatile int64_t x439 = -1LL;
	int16_t x440 = INT16_MIN;
	volatile int64_t t82 = 11347101947555LL;

	t82 = (((x437*x438)/x439)/x440);

	if (t82 != 131070LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x449 = INT16_MIN;
	uint16_t x450 = 22062U;
	uint64_t x451 = UINT64_MAX;
	uint64_t t83 = 23LLU;

	t83 = (((x449*x450)/x451)/x452);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x453 = 11U;
	static uint64_t x454 = 187369LLU;
	volatile uint32_t x455 = 111685U;
	uint64_t t84 = 280330383392310LLU;

	t84 = (((x453*x454)/x455)/x456);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x457 = -1LL;
	int8_t x458 = INT8_MAX;
	uint16_t x459 = UINT16_MAX;
	uint32_t x460 = 3U;
	volatile int64_t t85 = 313LL;

	t85 = (((x457*x458)/x459)/x460);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x461 = INT8_MAX;
	static volatile int64_t x462 = -5864311875684LL;
	int8_t x464 = INT8_MIN;
	int64_t t86 = 0LL;

	t86 = (((x461*x462)/x463)/x464);

	if (t86 != 1354LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x465 = 1U;
	int16_t x466 = INT16_MIN;
	int8_t x467 = INT8_MIN;
	int64_t x468 = -1LL;

	t87 = (((x465*x466)/x467)/x468);

	if (t87 != -256LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x474 = 4332553LLU;
	volatile int32_t x476 = INT32_MIN;
	static uint64_t t88 = 122374LLU;

	t88 = (((x473*x474)/x475)/x476);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x477 = 12324U;
	uint16_t x478 = UINT16_MAX;
	int32_t x479 = 12503;
	int16_t x480 = -38;
	int32_t t89 = -106;

	t89 = (((x477*x478)/x479)/x480);

	if (t89 != -1699) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x485 = UINT64_MAX;
	volatile int16_t x486 = INT16_MIN;
	uint8_t x487 = UINT8_MAX;
	volatile int16_t x488 = 1;
	volatile uint64_t t90 = 892241699657348LLU;

	t90 = (((x485*x486)/x487)/x488);

	if (t90 != 128LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x489 = -1;
	volatile int64_t x490 = -3329810LL;
	uint32_t x491 = 121228452U;
	int64_t t91 = -669LL;

	t91 = (((x489*x490)/x491)/x492);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x505 = 0LLU;
	int16_t x506 = INT16_MIN;
	int8_t x507 = -1;
	int64_t x508 = -13LL;
	uint64_t t92 = 0LLU;

	t92 = (((x505*x506)/x507)/x508);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x510 = INT64_MIN;
	static uint64_t x511 = 46981040926241LLU;
	int32_t x512 = INT32_MIN;
	static volatile uint64_t t93 = 3170967943109985396LLU;

	t93 = (((x509*x510)/x511)/x512);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x519 = INT64_MAX;
	uint16_t x520 = 376U;
	int64_t t94 = -183318594LL;

	t94 = (((x517*x518)/x519)/x520);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x521 = UINT32_MAX;
	volatile int64_t x523 = -79110499LL;
	uint8_t x524 = 77U;
	volatile int64_t t95 = -2196786412599174LL;

	t95 = (((x521*x522)/x523)/x524);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x529 = 33996927932851LLU;
	uint32_t x530 = 10263399U;
	static uint64_t x531 = 5405LLU;
	int64_t x532 = INT64_MAX;
	volatile uint64_t t96 = 12188110273639037LLU;

	t96 = (((x529*x530)/x531)/x532);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x537 = -322563;
	volatile uint8_t x539 = 73U;
	uint8_t x540 = 4U;
	static int64_t t97 = 5640457LL;

	t97 = (((x537*x538)/x539)/x540);

	if (t97 != 1104LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x541 = -1LL;
	static int64_t x542 = -1LL;
	int64_t x543 = -29400232338LL;
	volatile int16_t x544 = INT16_MAX;
	volatile int64_t t98 = -2159044389LL;

	t98 = (((x541*x542)/x543)/x544);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x546 = INT16_MAX;
	static int8_t x547 = 1;
	static volatile int8_t x548 = INT8_MIN;
	volatile uint64_t t99 = 25157LLU;

	t99 = (((x545*x546)/x547)/x548);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

