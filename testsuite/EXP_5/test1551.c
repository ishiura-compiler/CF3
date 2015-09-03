#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x25 = 0U;
int16_t x44 = -2610;
static int16_t x53 = -98;
int32_t t4 = 3127082;
static int64_t x58 = -1845LL;
volatile uint32_t x68 = 16U;
int32_t x88 = -1;
volatile int8_t x90 = -1;
int16_t x91 = 86;
volatile int64_t x115 = 374986219916LL;
int64_t x117 = -1LL;
static volatile int16_t x136 = INT16_MIN;
int16_t x147 = INT16_MIN;
int64_t x154 = -2634836445LL;
int32_t x156 = INT32_MAX;
int8_t x164 = INT8_MIN;
static uint16_t x169 = 480U;
volatile int32_t t18 = 82596;
volatile int32_t t19 = 64;
static int16_t x185 = -152;
int16_t x189 = INT16_MIN;
int8_t x191 = INT8_MAX;
int16_t x204 = INT16_MAX;
volatile int64_t t22 = 339195408983LL;
static volatile uint8_t x213 = UINT8_MAX;
int64_t x214 = 0LL;
static int8_t x216 = INT8_MAX;
uint16_t x221 = 0U;
int32_t t24 = -5966;
int64_t x235 = 16027LL;
int32_t t25 = 3736888;
static volatile int64_t x258 = INT64_MIN;
int8_t x270 = INT8_MIN;
uint8_t x272 = 116U;
static int16_t x273 = INT16_MIN;
static int16_t x281 = INT16_MIN;
volatile int16_t x297 = -1;
volatile int16_t x311 = -41;
int32_t t37 = -465;
static int64_t x319 = -1LL;
uint8_t x334 = 2U;
int8_t x394 = INT8_MAX;
int16_t x398 = INT16_MIN;
static int16_t x405 = INT16_MIN;
uint16_t x407 = 9U;
int64_t x416 = 7278LL;
uint16_t x441 = UINT16_MAX;
uint64_t t49 = 7903LLU;
int32_t x449 = -56652;
int32_t t50 = 48054974;
uint32_t x453 = UINT32_MAX;
int8_t x476 = 6;
volatile int32_t t53 = 31466280;
int8_t x477 = INT8_MIN;
uint8_t x478 = 14U;
int64_t x481 = INT64_MAX;
int64_t x498 = -1LL;
uint32_t x502 = 1162856U;
int64_t x518 = INT64_MIN;
int8_t x522 = INT8_MIN;
volatile int32_t t60 = 126125;
uint64_t x557 = 0LLU;
int64_t x583 = 8879151252LL;
int16_t x588 = -11873;
int64_t x594 = -322886545980770LL;
int64_t x618 = -117187LL;
static int64_t x627 = INT64_MAX;
static int16_t x642 = -1;
int64_t x643 = 13821860LL;
volatile int32_t t73 = -53181;
static int16_t x648 = -871;
int32_t x665 = -2578;
int32_t x672 = -1;
int16_t x675 = INT16_MIN;
static uint64_t x676 = 23LLU;
volatile uint64_t x689 = 32263514LLU;
int64_t t80 = 182327952321249363LL;
int32_t x698 = INT32_MAX;
volatile int32_t t82 = -1;
int8_t x713 = 1;
static volatile int16_t x718 = INT16_MIN;
static volatile int16_t x724 = INT16_MIN;
uint8_t x729 = UINT8_MAX;
volatile int32_t x730 = -1;
static int32_t x737 = INT32_MIN;
int32_t x740 = INT32_MAX;
volatile int32_t t88 = 8223714;
volatile int32_t t89 = 55677;
static int8_t x758 = -1;
int64_t x764 = INT64_MIN;
volatile int64_t t92 = -9LL;
volatile uint32_t t93 = 2024130119U;
static int64_t x776 = INT64_MIN;
int8_t x777 = INT8_MAX;
int8_t x779 = INT8_MIN;
int8_t x785 = INT8_MIN;
volatile uint32_t x789 = 1U;
int8_t x790 = -1;
int32_t x791 = -1;
int16_t x792 = 1;
uint8_t x804 = UINT8_MAX;


void f0(void) {
	static int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	uint8_t x11 = 30U;
	int64_t x12 = INT64_MIN;
	volatile int64_t t0 = -1LL;

	t0 = (x9/((x10<=x11)*x12));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x26 = -1;
	static volatile int16_t x27 = INT16_MAX;
	int64_t x28 = INT64_MAX;
	static int64_t t1 = -963LL;

	t1 = (x25/((x26<=x27)*x28));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x33 = -712;
	volatile int16_t x34 = -1;
	uint8_t x35 = UINT8_MAX;
	int16_t x36 = -1;
	volatile int32_t t2 = 11;

	t2 = (x33/((x34<=x35)*x36));

	if (t2 != 712) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x41 = -122097;
	volatile uint64_t x42 = 24LLU;
	int32_t x43 = INT32_MAX;
	static int32_t t3 = -762146527;

	t3 = (x41/((x42<=x43)*x44));

	if (t3 != 46) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x54 = -1;
	static int16_t x55 = -1;
	volatile int32_t x56 = INT32_MAX;

	t4 = (x53/((x54<=x55)*x56));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x57 = INT64_MAX;
	int64_t x59 = INT64_MAX;
	volatile int64_t x60 = INT64_MIN;
	static int64_t t5 = 1705038870LL;

	t5 = (x57/((x58<=x59)*x60));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x61 = INT16_MIN;
	int32_t x62 = -13511;
	volatile int8_t x63 = INT8_MAX;
	int16_t x64 = INT16_MAX;
	int32_t t6 = 5749105;

	t6 = (x61/((x62<=x63)*x64));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x65 = INT8_MAX;
	volatile uint16_t x66 = UINT16_MAX;
	uint64_t x67 = UINT64_MAX;
	volatile uint32_t t7 = 65794U;

	t7 = (x65/((x66<=x67)*x68));

	if (t7 != 7U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x85 = 31361U;
	int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MIN;
	int32_t t8 = 1850;

	t8 = (x85/((x86<=x87)*x88));

	if (t8 != -31361) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x89 = INT16_MIN;
	int32_t x92 = -16875915;
	volatile int32_t t9 = 8;

	t9 = (x89/((x90<=x91)*x92));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x97 = -48232;
	uint64_t x98 = 144871127699LLU;
	static int32_t x99 = INT32_MIN;
	int64_t x100 = -3104845387510685983LL;
	static volatile int64_t t10 = -1LL;

	t10 = (x97/((x98<=x99)*x100));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x113 = 15718;
	volatile int8_t x114 = -1;
	int64_t x116 = -23215521LL;
	volatile int64_t t11 = 1119554529072963LL;

	t11 = (x113/((x114<=x115)*x116));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x118 = -1;
	int16_t x119 = 1;
	static int32_t x120 = INT32_MIN;
	int64_t t12 = 0LL;

	t12 = (x117/((x118<=x119)*x120));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x133 = INT16_MAX;
	static int8_t x134 = -1;
	uint16_t x135 = 97U;
	volatile int32_t t13 = 7825971;

	t13 = (x133/((x134<=x135)*x136));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x145 = -1LL;
	volatile uint32_t x146 = 4U;
	int16_t x148 = -1313;
	int64_t t14 = -44415297199062LL;

	t14 = (x145/((x146<=x147)*x148));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x149 = INT16_MIN;
	uint32_t x150 = 2U;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t15 = -3788;

	t15 = (x149/((x150<=x151)*x152));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x153 = INT16_MIN;
	volatile int64_t x155 = -1LL;
	volatile int32_t t16 = -5871;

	t16 = (x153/((x154<=x155)*x156));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x161 = UINT8_MAX;
	uint16_t x162 = 436U;
	uint16_t x163 = UINT16_MAX;
	volatile int32_t t17 = 284;

	t17 = (x161/((x162<=x163)*x164));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x170 = 0U;
	static volatile int16_t x171 = INT16_MAX;
	int8_t x172 = 57;

	t18 = (x169/((x170<=x171)*x172));

	if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x173 = 1243U;
	uint16_t x174 = 15820U;
	uint32_t x175 = 1391340U;
	int16_t x176 = INT16_MIN;

	t19 = (x173/((x174<=x175)*x176));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = INT8_MIN;
	static int32_t x188 = 198427927;
	int32_t t20 = -29459;

	t20 = (x185/((x186<=x187)*x188));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x190 = 1U;
	static uint16_t x192 = UINT16_MAX;
	volatile int32_t t21 = 11929;

	t21 = (x189/((x190<=x191)*x192));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MIN;
	static int32_t x203 = -3946;

	t22 = (x201/((x202<=x203)*x204));

	if (t22 != -281483566907400LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x215 = UINT32_MAX;
	volatile int32_t t23 = 397;

	t23 = (x213/((x214<=x215)*x216));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x222 = INT16_MIN;
	static int8_t x223 = 42;
	int8_t x224 = -4;

	t24 = (x221/((x222<=x223)*x224));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x233 = 0U;
	static uint16_t x234 = 7702U;
	int32_t x236 = -1;

	t25 = (x233/((x234<=x235)*x236));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x241 = 14;
	volatile int16_t x242 = -1;
	int16_t x243 = INT16_MAX;
	int32_t x244 = INT32_MIN;
	volatile int32_t t26 = 0;

	t26 = (x241/((x242<=x243)*x244));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x253 = 0U;
	uint16_t x254 = 14U;
	static volatile int8_t x255 = INT8_MAX;
	static int64_t x256 = 1719575648914LL;
	volatile int64_t t27 = 96242011831056LL;

	t27 = (x253/((x254<=x255)*x256));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x257 = 3U;
	static uint8_t x259 = UINT8_MAX;
	volatile int16_t x260 = -2793;
	int32_t t28 = -272058;

	t28 = (x257/((x258<=x259)*x260));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x265 = 11180U;
	int16_t x266 = -3357;
	uint16_t x267 = 361U;
	uint64_t x268 = 1032849721072LLU;
	uint64_t t29 = 11720167128872LLU;

	t29 = (x265/((x266<=x267)*x268));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x269 = UINT8_MAX;
	static int8_t x271 = 48;
	volatile int32_t t30 = -1286202;

	t30 = (x269/((x270<=x271)*x272));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x274 = -1;
	int32_t x275 = -1;
	int8_t x276 = -11;
	static int32_t t31 = 20681;

	t31 = (x273/((x274<=x275)*x276));

	if (t31 != 2978) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x277 = -36259556652098788LL;
	uint64_t x278 = UINT64_MAX;
	static int8_t x279 = -1;
	static int16_t x280 = 15814;
	int64_t t32 = -5624575LL;

	t32 = (x277/((x278<=x279)*x280));

	if (t32 != -2292876985715LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x282 = 1034773650U;
	int32_t x283 = INT32_MIN;
	uint16_t x284 = 36U;
	static volatile int32_t t33 = 3;

	t33 = (x281/((x282<=x283)*x284));

	if (t33 != -910) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x285 = -865148581460LL;
	int64_t x286 = -69916222451589636LL;
	int64_t x287 = -1LL;
	int32_t x288 = INT32_MIN;
	volatile int64_t t34 = -12409LL;

	t34 = (x285/((x286<=x287)*x288));

	if (t34 != 402LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x298 = 9U;
	static int32_t x299 = 349382;
	int8_t x300 = -1;
	int32_t t35 = 25261416;

	t35 = (x297/((x298<=x299)*x300));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x301 = UINT32_MAX;
	int64_t x302 = INT64_MIN;
	int64_t x303 = -1LL;
	uint64_t x304 = 486016655609996468LLU;
	uint64_t t36 = 1430552LLU;

	t36 = (x301/((x302<=x303)*x304));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x309 = 0;
	int64_t x310 = INT64_MIN;
	int8_t x312 = INT8_MIN;

	t37 = (x309/((x310<=x311)*x312));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x317 = -1985047005125690LL;
	volatile int64_t x318 = -1LL;
	volatile int8_t x320 = INT8_MIN;
	volatile int64_t t38 = -68694069421399837LL;

	t38 = (x317/((x318<=x319)*x320));

	if (t38 != 15508179727544LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x321 = 345U;
	volatile uint32_t x322 = 19U;
	int16_t x323 = INT16_MIN;
	int16_t x324 = -12793;
	volatile int32_t t39 = -2;

	t39 = (x321/((x322<=x323)*x324));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x329 = -1;
	uint16_t x330 = 6283U;
	static int16_t x331 = 7742;
	int64_t x332 = 784LL;
	static volatile int64_t t40 = -20031660288779358LL;

	t40 = (x329/((x330<=x331)*x332));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x333 = 258U;
	volatile uint64_t x335 = 10LLU;
	uint8_t x336 = 4U;
	int32_t t41 = 902140582;

	t41 = (x333/((x334<=x335)*x336));

	if (t41 != 64) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x341 = INT32_MIN;
	volatile int8_t x342 = -1;
	volatile int16_t x343 = -1;
	static int8_t x344 = INT8_MAX;
	int32_t t42 = -98899;

	t42 = (x341/((x342<=x343)*x344));

	if (t42 != -16909320) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x365 = 12150416LLU;
	static int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int32_t x368 = INT32_MAX;
	volatile uint64_t t43 = 2760150546491927LLU;

	t43 = (x365/((x366<=x367)*x368));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x393 = 7400U;
	int32_t x395 = 215455;
	volatile int64_t x396 = -1LL;
	volatile int64_t t44 = -2232931602015983447LL;

	t44 = (x393/((x394<=x395)*x396));

	if (t44 != -7400LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x397 = -72486532;
	uint8_t x399 = 2U;
	uint32_t x400 = 235986U;
	volatile uint32_t t45 = 3U;

	t45 = (x397/((x398<=x399)*x400));

	if (t45 != 17892U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x401 = -1;
	static uint64_t x402 = 1291667320LLU;
	volatile int16_t x403 = -1;
	volatile uint64_t x404 = 40929233166097LLU;
	uint64_t t46 = 2437100162580483LLU;

	t46 = (x401/((x402<=x403)*x404));

	if (t46 != 450698LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x406 = -1;
	uint32_t x408 = 336U;
	uint32_t t47 = 29U;

	t47 = (x405/((x406<=x407)*x408));

	if (t47 != 12782543U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x413 = 47;
	static uint32_t x414 = 2027U;
	int16_t x415 = -1;
	volatile int64_t t48 = 536LL;

	t48 = (x413/((x414<=x415)*x416));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x442 = INT8_MAX;
	uint64_t x443 = 2022LLU;
	uint64_t x444 = UINT64_MAX;

	t49 = (x441/((x442<=x443)*x444));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x450 = INT32_MIN;
	uint8_t x451 = 14U;
	static uint16_t x452 = 3248U;

	t50 = (x449/((x450<=x451)*x452));

	if (t50 != -17) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x454 = 3U;
	static volatile int8_t x455 = INT8_MAX;
	int16_t x456 = -1;
	uint32_t t51 = 236519U;

	t51 = (x453/((x454<=x455)*x456));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x469 = INT16_MAX;
	int32_t x470 = 798;
	uint64_t x471 = 931906121024194LLU;
	int16_t x472 = -1;
	int32_t t52 = 4845117;

	t52 = (x469/((x470<=x471)*x472));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x473 = 2;
	int16_t x474 = INT16_MIN;
	static int8_t x475 = INT8_MIN;

	t53 = (x473/((x474<=x475)*x476));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x479 = 702116418LLU;
	uint64_t x480 = 486288LLU;
	volatile uint64_t t54 = 3150254LLU;

	t54 = (x477/((x478<=x479)*x480));

	if (t54 != 37933784246597LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x482 = 52918708625968LLU;
	static volatile int8_t x483 = -26;
	int32_t x484 = INT32_MIN;
	int64_t t55 = -26516739911802LL;

	t55 = (x481/((x482<=x483)*x484));

	if (t55 != -4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x489 = -1LL;
	int64_t x490 = INT64_MIN;
	static volatile uint32_t x491 = UINT32_MAX;
	uint16_t x492 = 15735U;
	int64_t t56 = -1229395003623LL;

	t56 = (x489/((x490<=x491)*x492));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x497 = 3U;
	static uint16_t x499 = 3U;
	int32_t x500 = -1;
	static volatile int32_t t57 = -9;

	t57 = (x497/((x498<=x499)*x500));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x501 = -1;
	static volatile int16_t x503 = -1;
	static int16_t x504 = -1;
	int32_t t58 = 2;

	t58 = (x501/((x502<=x503)*x504));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x517 = 104505650;
	uint16_t x519 = 405U;
	uint8_t x520 = 1U;
	int32_t t59 = 8301356;

	t59 = (x517/((x518<=x519)*x520));

	if (t59 != 104505650) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x521 = 9;
	static int64_t x523 = INT64_MAX;
	int32_t x524 = -1;

	t60 = (x521/((x522<=x523)*x524));

	if (t60 != -9) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x558 = 68U;
	int32_t x559 = INT32_MAX;
	volatile int8_t x560 = INT8_MAX;
	uint64_t t61 = 3797818LLU;

	t61 = (x557/((x558<=x559)*x560));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x561 = INT8_MIN;
	int8_t x562 = 12;
	int8_t x563 = INT8_MAX;
	int64_t x564 = INT64_MAX;
	volatile int64_t t62 = -72867761LL;

	t62 = (x561/((x562<=x563)*x564));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x573 = UINT8_MAX;
	volatile uint64_t x574 = 1126265668686225098LLU;
	volatile int64_t x575 = INT64_MIN;
	int8_t x576 = -1;
	volatile int32_t t63 = 37996;

	t63 = (x573/((x574<=x575)*x576));

	if (t63 != -255) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x581 = -1;
	static uint16_t x582 = 433U;
	static volatile int16_t x584 = INT16_MAX;
	volatile int32_t t64 = 194827;

	t64 = (x581/((x582<=x583)*x584));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x585 = INT16_MAX;
	int8_t x586 = INT8_MIN;
	uint16_t x587 = 4U;
	int32_t t65 = 373;

	t65 = (x585/((x586<=x587)*x588));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x589 = INT64_MIN;
	static volatile int16_t x590 = 9;
	volatile int8_t x591 = 26;
	uint64_t x592 = 265645797267811LLU;
	volatile uint64_t t66 = 2101LLU;

	t66 = (x589/((x590<=x591)*x592));

	if (t66 != 34720LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x593 = -1;
	volatile int16_t x595 = -2;
	int16_t x596 = INT16_MIN;
	int32_t t67 = 11888762;

	t67 = (x593/((x594<=x595)*x596));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x601 = INT8_MAX;
	int8_t x602 = 0;
	static int32_t x603 = 357780;
	volatile int64_t x604 = -1LL;
	int64_t t68 = 1854882522LL;

	t68 = (x601/((x602<=x603)*x604));

	if (t68 != -127LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x605 = INT8_MIN;
	uint8_t x606 = 21U;
	volatile int16_t x607 = INT16_MAX;
	static int32_t x608 = 7;
	int32_t t69 = -2084;

	t69 = (x605/((x606<=x607)*x608));

	if (t69 != -18) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x617 = -1104253107402395LL;
	int8_t x619 = INT8_MAX;
	uint8_t x620 = UINT8_MAX;
	int64_t t70 = 1LL;

	t70 = (x617/((x618<=x619)*x620));

	if (t70 != -4330404342754LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x621 = -2194;
	static int64_t x622 = INT64_MIN;
	uint32_t x623 = 285977U;
	volatile uint16_t x624 = UINT16_MAX;
	int32_t t71 = 22;

	t71 = (x621/((x622<=x623)*x624));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x625 = 2U;
	int64_t x626 = INT64_MAX;
	int16_t x628 = -1;
	volatile int32_t t72 = -1911;

	t72 = (x625/((x626<=x627)*x628));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x641 = UINT16_MAX;
	volatile uint8_t x644 = UINT8_MAX;

	t73 = (x641/((x642<=x643)*x644));

	if (t73 != 257) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x645 = INT64_MAX;
	volatile uint32_t x646 = 556074U;
	static int8_t x647 = INT8_MIN;
	int64_t t74 = 52LL;

	t74 = (x645/((x646<=x647)*x648));

	if (t74 != -10589405323599053LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x661 = INT32_MAX;
	volatile int64_t x662 = INT64_MIN;
	int8_t x663 = INT8_MIN;
	static int32_t x664 = 67723;
	int32_t t75 = -91035;

	t75 = (x661/((x662<=x663)*x664));

	if (t75 != 31709) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x666 = 1;
	uint64_t x667 = UINT64_MAX;
	volatile int64_t x668 = INT64_MIN;
	volatile int64_t t76 = 118660954904997LL;

	t76 = (x665/((x666<=x667)*x668));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x669 = 411;
	int32_t x670 = -39829;
	int16_t x671 = INT16_MAX;
	int32_t t77 = -32402960;

	t77 = (x669/((x670<=x671)*x672));

	if (t77 != -411) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x673 = INT64_MIN;
	volatile int64_t x674 = INT64_MIN;
	uint64_t t78 = 974LLU;

	t78 = (x673/((x674<=x675)*x676));

	if (t78 != 401016175515425035LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x690 = UINT64_MAX;
	static int16_t x691 = -1;
	int32_t x692 = -19889;
	uint64_t t79 = 161250LLU;

	t79 = (x689/((x690<=x691)*x692));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x693 = INT8_MAX;
	volatile int64_t x694 = -1LL;
	uint32_t x695 = 7U;
	int64_t x696 = INT64_MIN;

	t80 = (x693/((x694<=x695)*x696));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x697 = 0U;
	uint64_t x699 = 10519224172LLU;
	static uint32_t x700 = UINT32_MAX;
	static uint32_t t81 = 4768U;

	t81 = (x697/((x698<=x699)*x700));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x701 = INT8_MIN;
	int64_t x702 = INT64_MIN;
	int8_t x703 = 7;
	volatile int32_t x704 = INT32_MIN;

	t82 = (x701/((x702<=x703)*x704));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x714 = -1;
	uint64_t x715 = UINT64_MAX;
	int64_t x716 = -1LL;
	int64_t t83 = 1LL;

	t83 = (x713/((x714<=x715)*x716));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x717 = -144070LL;
	static uint8_t x719 = UINT8_MAX;
	uint16_t x720 = 14U;
	volatile int64_t t84 = 3LL;

	t84 = (x717/((x718<=x719)*x720));

	if (t84 != -10290LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x721 = 2826997U;
	int8_t x722 = -1;
	static int64_t x723 = -1LL;
	volatile uint32_t t85 = 3090318U;

	t85 = (x721/((x722<=x723)*x724));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x731 = 241U;
	int8_t x732 = INT8_MAX;
	volatile int32_t t86 = -452;

	t86 = (x729/((x730<=x731)*x732));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x733 = -3;
	volatile int8_t x734 = 0;
	uint32_t x735 = 41928456U;
	uint8_t x736 = UINT8_MAX;
	int32_t t87 = -1;

	t87 = (x733/((x734<=x735)*x736));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x738 = INT16_MIN;
	static int32_t x739 = 4;

	t88 = (x737/((x738<=x739)*x740));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x741 = INT32_MAX;
	int16_t x742 = -1;
	uint64_t x743 = UINT64_MAX;
	int8_t x744 = -10;

	t89 = (x741/((x742<=x743)*x744));

	if (t89 != -214748364) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x753 = UINT32_MAX;
	int64_t x754 = -1LL;
	int8_t x755 = 25;
	int64_t x756 = -6795132328773728LL;
	int64_t t90 = -29514348LL;

	t90 = (x753/((x754<=x755)*x756));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x757 = INT32_MIN;
	volatile uint16_t x759 = UINT16_MAX;
	uint16_t x760 = 4674U;
	static volatile int32_t t91 = 15126;

	t91 = (x757/((x758<=x759)*x760));

	if (t91 != -459453) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x761 = 1683U;
	static uint64_t x762 = UINT64_MAX;
	volatile int32_t x763 = -1;

	t92 = (x761/((x762<=x763)*x764));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x765 = INT16_MAX;
	static volatile uint32_t x766 = 35195347U;
	int8_t x767 = -59;
	volatile uint32_t x768 = 41602122U;

	t93 = (x765/((x766<=x767)*x768));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x773 = 3732U;
	static int32_t x774 = INT32_MIN;
	int16_t x775 = -1;
	volatile int64_t t94 = 79804643809484178LL;

	t94 = (x773/((x774<=x775)*x776));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x778 = 3460403U;
	uint32_t x780 = UINT32_MAX;
	static uint32_t t95 = 9U;

	t95 = (x777/((x778<=x779)*x780));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x786 = INT16_MIN;
	int64_t x787 = -1LL;
	volatile int64_t x788 = -148488774353687072LL;
	volatile int64_t t96 = 2187186135095962LL;

	t96 = (x785/((x786<=x787)*x788));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t t97 = 296470602U;

	t97 = (x789/((x790<=x791)*x792));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x801 = INT16_MAX;
	int16_t x802 = 10290;
	int32_t x803 = 66531963;
	volatile int32_t t98 = -98;

	t98 = (x801/((x802<=x803)*x804));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x805 = UINT64_MAX;
	uint8_t x806 = 55U;
	uint64_t x807 = UINT64_MAX;
	int16_t x808 = 3874;
	uint64_t t99 = 920087723850LLU;

	t99 = (x805/((x806<=x807)*x808));

	if (t99 != 4761678903900245LLU) { NG(); } else { ; }
	
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

