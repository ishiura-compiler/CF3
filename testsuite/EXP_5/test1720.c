#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 16;
static volatile uint32_t t1 = 1U;
static int16_t x51 = -851;
uint64_t x52 = 15980LLU;
int64_t x57 = -4595LL;
int32_t x59 = -35310;
int32_t x60 = 434;
int8_t x61 = INT8_MAX;
static int16_t x67 = INT16_MAX;
static int32_t x77 = INT32_MAX;
uint16_t x79 = UINT16_MAX;
volatile int32_t x99 = INT32_MIN;
static volatile int16_t x129 = -3288;
static volatile uint64_t t16 = 35539136LLU;
volatile int16_t x168 = INT16_MAX;
uint64_t t19 = 136LLU;
uint16_t x182 = 219U;
static int16_t x201 = -1;
static volatile uint64_t t24 = 57507524956998636LLU;
int16_t x205 = -5278;
uint64_t x223 = 101769227202701LLU;
uint64_t t28 = 3029321124LLU;
int64_t x232 = -1LL;
volatile uint8_t x233 = 5U;
uint64_t x243 = 4086436126LLU;
int64_t x249 = INT64_MIN;
uint64_t x250 = 947698LLU;
uint32_t x276 = UINT32_MAX;
static uint16_t x286 = 2U;
int32_t x287 = -1;
uint32_t x288 = 4321U;
static uint64_t t40 = 1LLU;
int8_t x309 = INT8_MAX;
volatile int64_t x321 = INT64_MIN;
static uint64_t x324 = UINT64_MAX;
uint64_t x326 = UINT64_MAX;
static uint8_t x334 = 3U;
uint64_t x335 = 1509947843734245117LLU;
volatile int16_t x337 = INT16_MAX;
volatile uint64_t t47 = 161595LLU;
int8_t x341 = 1;
uint8_t x343 = 104U;
static int64_t x350 = INT64_MIN;
static int16_t x376 = INT16_MAX;
uint64_t x387 = 586LLU;
static uint32_t x397 = UINT32_MAX;
uint32_t x400 = 19U;
int16_t x420 = INT16_MIN;
int16_t x426 = INT16_MIN;
int8_t x429 = INT8_MIN;
int32_t x443 = INT32_MIN;
volatile int64_t t58 = -254661892549306947LL;
int32_t x463 = -1;
static uint64_t t61 = 9228649068654819LLU;
static int16_t x477 = 0;
volatile int64_t x489 = INT64_MAX;
static uint16_t x515 = UINT16_MAX;
int8_t x529 = -1;
uint16_t x535 = 12857U;
int32_t x539 = 6531;
int8_t x540 = 2;
volatile uint64_t t71 = 2916469516639076263LLU;
static int8_t x541 = -4;
int32_t x564 = INT32_MIN;
uint64_t t75 = 219010LLU;
static int32_t x575 = -1;
int64_t x576 = 4657525934LL;
volatile uint32_t t79 = 2U;
uint64_t x589 = 49486599LLU;
uint32_t x604 = UINT32_MAX;
int16_t x615 = -1;
volatile int32_t x634 = INT32_MAX;
int32_t x636 = 1;
int16_t x661 = -1;
static volatile int8_t x676 = INT8_MIN;
uint16_t x696 = UINT16_MAX;
uint64_t x702 = 207289845907638380LLU;
uint64_t x703 = 56825LLU;
uint32_t x705 = UINT32_MAX;
int16_t x707 = 333;
uint16_t x716 = UINT16_MAX;
uint64_t x717 = 5877512460LLU;
static volatile uint64_t x720 = 171031017178LLU;
static uint64_t t99 = 1944LLU;


void f0(void) {
	uint64_t x1 = 603871736736LLU;
	uint16_t x2 = UINT16_MAX;
	volatile int8_t x4 = INT8_MAX;
	uint64_t t0 = 154453LLU;

	t0 = (x1/((x2&x3)*x4));

	if (t0 != 297180972LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	int16_t x10 = -1;
	uint32_t x11 = UINT32_MAX;
	uint8_t x12 = UINT8_MAX;

	t1 = (x9/((x10&x11)*x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	uint16_t x14 = 209U;
	int64_t x15 = INT64_MAX;
	int8_t x16 = INT8_MIN;
	volatile int64_t t2 = -1252479163847LL;

	t2 = (x13/((x14&x15)*x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x29 = -1;
	uint64_t x30 = UINT64_MAX;
	volatile uint8_t x31 = 4U;
	int32_t x32 = 18;
	volatile uint64_t t3 = 221905606LLU;

	t3 = (x29/((x30&x31)*x32));

	if (t3 != 256204778801521550LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x49 = INT8_MAX;
	int16_t x50 = 7;
	volatile uint64_t t4 = 2007849LLU;

	t4 = (x49/((x50&x51)*x52));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x58 = UINT16_MAX;
	int64_t t5 = -34993133435832424LL;

	t5 = (x57/((x58&x59)*x60));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x62 = INT32_MAX;
	uint64_t x63 = 205992877LLU;
	int16_t x64 = INT16_MAX;
	volatile uint64_t t6 = 14662436148660LLU;

	t6 = (x61/((x62&x63)*x64));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x65 = INT16_MAX;
	uint32_t x66 = 9983U;
	volatile int8_t x68 = 1;
	volatile uint32_t t7 = 126U;

	t7 = (x65/((x66&x67)*x68));

	if (t7 != 3U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x69 = -1;
	int8_t x70 = INT8_MIN;
	static int16_t x71 = -1;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t8 = -134013643;

	t8 = (x69/((x70&x71)*x72));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x78 = INT16_MAX;
	int16_t x80 = INT16_MIN;
	static volatile int32_t t9 = 3876194;

	t9 = (x77/((x78&x79)*x80));

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x98 = -1LL;
	static int16_t x100 = INT16_MIN;
	static int64_t t10 = 165780030LL;

	t10 = (x97/((x98&x99)*x100));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x121 = -1;
	volatile int64_t x122 = INT64_MAX;
	int16_t x123 = INT16_MAX;
	uint64_t x124 = 7159084115788LLU;
	uint64_t t11 = 382LLU;

	t11 = (x121/((x122&x123)*x124));

	if (t11 != 78LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x125 = 12U;
	int16_t x126 = -1;
	int64_t x127 = -1LL;
	static volatile uint64_t x128 = 6LLU;
	uint64_t t12 = 3932767LLU;

	t12 = (x125/((x126&x127)*x128));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x130 = 50678203491LL;
	int64_t x131 = 2005LL;
	uint64_t x132 = UINT64_MAX;
	uint64_t t13 = 54972911166712543LLU;

	t13 = (x129/((x130&x131)*x132));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x137 = 0U;
	uint64_t x138 = UINT64_MAX;
	static volatile int8_t x139 = 24;
	uint32_t x140 = 83726U;
	volatile uint64_t t14 = 89LLU;

	t14 = (x137/((x138&x139)*x140));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x145 = -54510373;
	uint16_t x146 = 30000U;
	uint32_t x147 = UINT32_MAX;
	uint16_t x148 = UINT16_MAX;
	volatile uint32_t t15 = 14U;

	t15 = (x145/((x146&x147)*x148));

	if (t15 != 2U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x153 = -88;
	uint16_t x154 = UINT16_MAX;
	uint8_t x155 = 40U;
	uint64_t x156 = 9247776231657471LLU;

	t16 = (x153/((x154&x155)*x156));

	if (t16 != 49LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x161 = INT64_MIN;
	int8_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	volatile uint32_t x164 = 10177U;
	volatile int64_t t17 = -5654776630294LL;

	t17 = (x161/((x162&x163)*x164));

	if (t17 != -13829186977LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x165 = -110421497870160LL;
	uint8_t x166 = UINT8_MAX;
	uint16_t x167 = UINT16_MAX;
	int64_t t18 = 7260LL;

	t18 = (x165/((x166&x167)*x168));

	if (t18 != -13215292LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x169 = 4;
	uint32_t x170 = 4278U;
	volatile int8_t x171 = INT8_MAX;
	uint64_t x172 = 483566713913LLU;

	t19 = (x169/((x170&x171)*x172));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x181 = 7126U;
	int32_t x183 = -1;
	int8_t x184 = INT8_MAX;
	static int32_t t20 = -32;

	t20 = (x181/((x182&x183)*x184));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x185 = 1U;
	int16_t x186 = INT16_MAX;
	volatile int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MIN;
	int32_t t21 = 382861822;

	t21 = (x185/((x186&x187)*x188));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x193 = -1LL;
	volatile int8_t x194 = INT8_MAX;
	static int64_t x195 = INT64_MAX;
	int16_t x196 = -1;
	static int64_t t22 = 14063269LL;

	t22 = (x193/((x194&x195)*x196));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x197 = 1U;
	int32_t x198 = -1;
	uint16_t x199 = UINT16_MAX;
	static uint32_t x200 = 27435312U;
	volatile uint32_t t23 = 5U;

	t23 = (x197/((x198&x199)*x200));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x202 = UINT64_MAX;
	static volatile int8_t x203 = INT8_MIN;
	int16_t x204 = 6128;

	t24 = (x201/((x202&x203)*x204));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x206 = 7;
	volatile int32_t x207 = 8106;
	int16_t x208 = INT16_MAX;
	int32_t t25 = -383;

	t25 = (x205/((x206&x207)*x208));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x213 = 1255621010353284LLU;
	int16_t x214 = INT16_MIN;
	int32_t x215 = -1;
	int8_t x216 = 2;
	uint64_t t26 = 982703876LLU;

	t26 = (x213/((x214&x215)*x216));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x217 = 1U;
	volatile uint16_t x218 = 881U;
	int64_t x219 = -131505733LL;
	uint16_t x220 = 479U;
	volatile int64_t t27 = -789485LL;

	t27 = (x217/((x218&x219)*x220));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x221 = 2727385446LLU;
	static volatile int16_t x222 = 13;
	static int16_t x224 = INT16_MAX;

	t28 = (x221/((x222&x223)*x224));

	if (t28 != 6402LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x229 = 3;
	volatile uint64_t x230 = 89433412620750236LLU;
	int8_t x231 = INT8_MAX;
	volatile uint64_t t29 = 9198995160563968580LLU;

	t29 = (x229/((x230&x231)*x232));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x234 = 6U;
	uint32_t x235 = 10971U;
	int8_t x236 = -1;
	uint32_t t30 = 13776U;

	t30 = (x233/((x234&x235)*x236));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x241 = INT16_MIN;
	int64_t x242 = -1LL;
	int32_t x244 = INT32_MAX;
	volatile uint64_t t31 = 1790605135660LLU;

	t31 = (x241/((x242&x243)*x244));

	if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x245 = 5129U;
	int32_t x246 = -1;
	int8_t x247 = INT8_MAX;
	volatile int8_t x248 = INT8_MIN;
	static int32_t t32 = 921;

	t32 = (x245/((x246&x247)*x248));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x251 = UINT16_MAX;
	int64_t x252 = -114199408414115080LL;
	static volatile uint64_t t33 = 8393404218LLU;

	t33 = (x249/((x250&x251)*x252));

	if (t33 != 6LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x253 = UINT64_MAX;
	uint32_t x254 = 7U;
	uint8_t x255 = UINT8_MAX;
	uint32_t x256 = 11850179U;
	static volatile uint64_t t34 = 991137820LLU;

	t34 = (x253/((x254&x255)*x256));

	if (t34 != 222380535634LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x257 = INT16_MAX;
	uint64_t x258 = 136490064815307LLU;
	int64_t x259 = 351926317LL;
	static uint64_t x260 = 2618LLU;
	uint64_t t35 = 82LLU;

	t35 = (x257/((x258&x259)*x260));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MAX;
	int16_t x267 = 344;
	int16_t x268 = -402;
	int32_t t36 = -5;

	t36 = (x265/((x266&x267)*x268));

	if (t36 != 15529) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x273 = INT32_MIN;
	uint64_t x274 = 143595881043LLU;
	uint64_t x275 = 58022277776927199LLU;
	static uint64_t t37 = 353466LLU;

	t37 = (x273/((x274&x275)*x276));

	if (t37 != 3LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x277 = -1;
	static volatile int32_t x278 = 83;
	static int64_t x279 = -1LL;
	int16_t x280 = -13734;
	volatile int64_t t38 = 4977LL;

	t38 = (x277/((x278&x279)*x280));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x285 = INT8_MIN;
	volatile uint32_t t39 = 1605251476U;

	t39 = (x285/((x286&x287)*x288));

	if (t39 != 496987U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x293 = 71U;
	volatile int8_t x294 = -1;
	uint32_t x295 = 53U;
	uint64_t x296 = 56507LLU;

	t40 = (x293/((x294&x295)*x296));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x297 = INT32_MIN;
	int8_t x298 = 1;
	int16_t x299 = -1;
	uint32_t x300 = 66086139U;
	volatile uint32_t t41 = 4U;

	t41 = (x297/((x298&x299)*x300));

	if (t41 != 32U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x310 = UINT64_MAX;
	volatile uint8_t x311 = 8U;
	int32_t x312 = INT32_MIN;
	uint64_t t42 = 5259LLU;

	t42 = (x309/((x310&x311)*x312));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x317 = 40333849902388LLU;
	int16_t x318 = INT16_MIN;
	int16_t x319 = -1;
	int16_t x320 = INT16_MIN;
	volatile uint64_t t43 = 188100LLU;

	t43 = (x317/((x318&x319)*x320));

	if (t43 != 37563LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x322 = UINT8_MAX;
	uint64_t x323 = UINT64_MAX;
	uint64_t t44 = 237LLU;

	t44 = (x321/((x322&x323)*x324));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x325 = INT32_MIN;
	volatile int16_t x327 = INT16_MIN;
	static volatile int8_t x328 = INT8_MIN;
	static uint64_t t45 = 7372536LLU;

	t45 = (x325/((x326&x327)*x328));

	if (t45 != 4398046510592LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x333 = 32709468264303LL;
	int32_t x336 = -67;
	static volatile uint64_t t46 = 403450111833951LLU;

	t46 = (x333/((x334&x335)*x336));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x338 = 1;
	int16_t x339 = -1;
	volatile uint64_t x340 = 11420398451085LLU;

	t47 = (x337/((x338&x339)*x340));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x342 = 55U;
	int16_t x344 = -7125;
	int32_t t48 = -7054;

	t48 = (x341/((x342&x343)*x344));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x349 = INT16_MAX;
	uint64_t x351 = UINT64_MAX;
	static int32_t x352 = INT32_MAX;
	uint64_t t49 = 1414756063028898986LLU;

	t49 = (x349/((x350&x351)*x352));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x373 = -1;
	volatile int64_t x374 = -19LL;
	int32_t x375 = -1;
	volatile int64_t t50 = -76930757691517LL;

	t50 = (x373/((x374&x375)*x376));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x385 = 15982U;
	int8_t x386 = -1;
	static int8_t x388 = INT8_MIN;
	volatile uint64_t t51 = 0LLU;

	t51 = (x385/((x386&x387)*x388));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	uint32_t t52 = 589211843U;

	t52 = (x397/((x398&x399)*x400));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x405 = -7;
	volatile int64_t x406 = -1LL;
	int8_t x407 = -1;
	int8_t x408 = 5;
	int64_t t53 = -663840929910489LL;

	t53 = (x405/((x406&x407)*x408));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x417 = INT64_MIN;
	volatile int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	volatile int64_t t54 = 2348479LL;

	t54 = (x417/((x418&x419)*x420));

	if (t54 != -8589934592LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x425 = 2LL;
	int8_t x427 = INT8_MIN;
	volatile int8_t x428 = INT8_MIN;
	int64_t t55 = 4901873289305158LL;

	t55 = (x425/((x426&x427)*x428));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x430 = 310594152U;
	volatile int8_t x431 = -1;
	static int8_t x432 = -1;
	volatile uint32_t t56 = 48021079U;

	t56 = (x429/((x430&x431)*x432));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x433 = INT16_MAX;
	int64_t x434 = INT64_MAX;
	volatile int16_t x435 = INT16_MAX;
	int32_t x436 = -1;
	volatile int64_t t57 = -25656065244210165LL;

	t57 = (x433/((x434&x435)*x436));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x441 = 26267U;
	int16_t x442 = INT16_MIN;
	int64_t x444 = 3760LL;

	t58 = (x441/((x442&x443)*x444));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x445 = 2083446;
	volatile int8_t x446 = 7;
	static uint8_t x447 = 1U;
	int64_t x448 = -1LL;
	static volatile int64_t t59 = 45003LL;

	t59 = (x445/((x446&x447)*x448));

	if (t59 != -2083446LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x449 = INT16_MIN;
	int64_t x450 = -8129460564965141LL;
	volatile int16_t x451 = INT16_MAX;
	int8_t x452 = INT8_MAX;
	int64_t t60 = -2790336263LL;

	t60 = (x449/((x450&x451)*x452));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x461 = -343625537LL;
	uint64_t x462 = 84858389280171LLU;
	uint64_t x464 = UINT64_MAX;

	t61 = (x461/((x462&x463)*x464));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x469 = 267U;
	int8_t x470 = INT8_MAX;
	volatile int64_t x471 = -1LL;
	int64_t x472 = -1LL;
	volatile int64_t t62 = -6LL;

	t62 = (x469/((x470&x471)*x472));

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x473 = 72294LLU;
	static uint32_t x474 = UINT32_MAX;
	static int32_t x475 = INT32_MIN;
	int16_t x476 = -1;
	uint64_t t63 = 294936LLU;

	t63 = (x473/((x474&x475)*x476));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x478 = 34;
	int16_t x479 = -1;
	static int32_t x480 = -1;
	int32_t t64 = -185;

	t64 = (x477/((x478&x479)*x480));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x490 = -222LL;
	uint64_t x491 = 401LLU;
	int64_t x492 = INT64_MAX;
	uint64_t t65 = 6392878514LLU;

	t65 = (x489/((x490&x491)*x492));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x505 = INT32_MAX;
	uint8_t x506 = 78U;
	uint32_t x507 = UINT32_MAX;
	static uint8_t x508 = 2U;
	static volatile uint32_t t66 = 397U;

	t66 = (x505/((x506&x507)*x508));

	if (t66 != 13765920U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x513 = UINT32_MAX;
	int16_t x514 = -7;
	int8_t x516 = INT8_MIN;
	static uint32_t t67 = 771U;

	t67 = (x513/((x514&x515)*x516));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x521 = INT16_MIN;
	static uint32_t x522 = 935309U;
	volatile int16_t x523 = -1;
	static int32_t x524 = INT32_MIN;
	volatile uint32_t t68 = 578U;

	t68 = (x521/((x522&x523)*x524));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x530 = 130896LLU;
	static uint8_t x531 = UINT8_MAX;
	int64_t x532 = 62LL;
	volatile uint64_t t69 = 34LLU;

	t69 = (x529/((x530&x531)*x532));

	if (t69 != 3719101627764022LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x533 = UINT32_MAX;
	static int16_t x534 = INT16_MAX;
	int8_t x536 = INT8_MIN;
	uint32_t t70 = 2U;

	t70 = (x533/((x534&x535)*x536));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x537 = 21690418060052LLU;
	static int32_t x538 = -1;

	t71 = (x537/((x538&x539)*x540));

	if (t71 != 1660574036LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x542 = INT16_MIN;
	int32_t x543 = -1;
	uint16_t x544 = 1U;
	volatile int32_t t72 = 21066;

	t72 = (x541/((x542&x543)*x544));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x553 = 1LL;
	volatile int64_t x554 = -1LL;
	volatile int8_t x555 = INT8_MAX;
	int8_t x556 = -9;
	volatile int64_t t73 = 458339522723LL;

	t73 = (x553/((x554&x555)*x556));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x557 = 1;
	uint64_t x558 = UINT64_MAX;
	int32_t x559 = INT32_MAX;
	static int8_t x560 = INT8_MAX;
	uint64_t t74 = 1267235086172051LLU;

	t74 = (x557/((x558&x559)*x560));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x561 = INT32_MIN;
	int8_t x562 = INT8_MIN;
	uint64_t x563 = UINT64_MAX;

	t75 = (x561/((x562&x563)*x564));

	if (t75 != 67108863LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x565 = INT8_MAX;
	uint8_t x566 = UINT8_MAX;
	static int16_t x567 = -21;
	uint8_t x568 = UINT8_MAX;
	int32_t t76 = -24;

	t76 = (x565/((x566&x567)*x568));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x569 = UINT64_MAX;
	uint32_t x570 = UINT32_MAX;
	int16_t x571 = -15;
	int32_t x572 = INT32_MAX;
	volatile uint64_t t77 = 11173815971511159LLU;

	t77 = (x569/((x570&x571)*x572));

	if (t77 != 8589934532LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x573 = -5885;
	uint8_t x574 = 10U;
	volatile int64_t t78 = 14LL;

	t78 = (x573/((x574&x575)*x576));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x581 = INT8_MIN;
	static int32_t x582 = -231805;
	int16_t x583 = INT16_MAX;
	uint32_t x584 = UINT32_MAX;

	t79 = (x581/((x582&x583)*x584));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x585 = 1692U;
	volatile int64_t x586 = -271093LL;
	volatile uint32_t x587 = UINT32_MAX;
	int32_t x588 = INT32_MIN;
	volatile int64_t t80 = 65LL;

	t80 = (x585/((x586&x587)*x588));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x590 = 9107023998LL;
	int64_t x591 = INT64_MAX;
	static volatile uint64_t x592 = UINT64_MAX;
	volatile uint64_t t81 = 58828454863921LLU;

	t81 = (x589/((x590&x591)*x592));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x601 = 105U;
	int32_t x602 = 1529;
	volatile int8_t x603 = -16;
	uint32_t t82 = 484553U;

	t82 = (x601/((x602&x603)*x604));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x605 = INT16_MIN;
	volatile uint16_t x606 = UINT16_MAX;
	int32_t x607 = INT32_MAX;
	int8_t x608 = -1;
	volatile int32_t t83 = 3;

	t83 = (x605/((x606&x607)*x608));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x613 = INT32_MAX;
	int8_t x614 = INT8_MIN;
	static int64_t x616 = -31794618010608LL;
	int64_t t84 = 55292958765059502LL;

	t84 = (x613/((x614&x615)*x616));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x621 = INT32_MIN;
	static uint16_t x622 = 23U;
	int8_t x623 = 17;
	static int64_t x624 = -1LL;
	int64_t t85 = -582LL;

	t85 = (x621/((x622&x623)*x624));

	if (t85 != 126322567LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x629 = UINT64_MAX;
	uint64_t x630 = UINT64_MAX;
	uint8_t x631 = 3U;
	int16_t x632 = 1;
	uint64_t t86 = 6721753803236756472LLU;

	t86 = (x629/((x630&x631)*x632));

	if (t86 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x633 = INT32_MIN;
	int16_t x635 = -1;
	static int32_t t87 = -63;

	t87 = (x633/((x634&x635)*x636));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x662 = UINT32_MAX;
	int8_t x663 = INT8_MIN;
	static int16_t x664 = -1;
	volatile uint32_t t88 = 452920644U;

	t88 = (x661/((x662&x663)*x664));

	if (t88 != 33554431U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x665 = INT32_MIN;
	volatile uint64_t x666 = 426628648645LLU;
	uint64_t x667 = UINT64_MAX;
	int16_t x668 = 7;
	volatile uint64_t t89 = 1004911039717LLU;

	t89 = (x665/((x666&x667)*x668));

	if (t89 != 6176915LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x669 = INT8_MAX;
	int64_t x670 = -1LL;
	int16_t x671 = -1;
	uint8_t x672 = UINT8_MAX;
	volatile int64_t t90 = -7148083860647156LL;

	t90 = (x669/((x670&x671)*x672));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x673 = UINT32_MAX;
	int32_t x674 = -1;
	uint8_t x675 = 2U;
	volatile uint32_t t91 = 655814U;

	t91 = (x673/((x674&x675)*x676));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x677 = -1;
	int16_t x678 = -1;
	int16_t x679 = -1;
	int16_t x680 = INT16_MIN;
	int32_t t92 = 1507;

	t92 = (x677/((x678&x679)*x680));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x681 = INT32_MAX;
	uint64_t x682 = 747953792210820LLU;
	uint32_t x683 = 510U;
	volatile int64_t x684 = -1LL;
	volatile uint64_t t93 = 29743394652306423LLU;

	t93 = (x681/((x682&x683)*x684));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x693 = INT64_MIN;
	int16_t x694 = -1;
	int16_t x695 = INT16_MIN;
	static int64_t t94 = -87432492LL;

	t94 = (x693/((x694&x695)*x696));

	if (t94 != 4295032833LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x701 = INT32_MAX;
	int8_t x704 = INT8_MIN;
	uint64_t t95 = 377459918764370444LLU;

	t95 = (x701/((x702&x703)*x704));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x706 = UINT8_MAX;
	static int16_t x708 = INT16_MAX;
	volatile uint32_t t96 = 1U;

	t96 = (x705/((x706&x707)*x708));

	if (t96 != 1702U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x709 = 31453U;
	uint8_t x710 = 110U;
	int32_t x711 = 3174920;
	int32_t x712 = -58941;
	volatile uint32_t t97 = 129U;

	t97 = (x709/((x710&x711)*x712));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x713 = 7779;
	uint32_t x714 = 5513U;
	int16_t x715 = 191;
	uint32_t t98 = 5U;

	t98 = (x713/((x714&x715)*x716));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x718 = 915875037512198LL;
	static int32_t x719 = INT32_MIN;

	t99 = (x717/((x718&x719)*x720));

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

