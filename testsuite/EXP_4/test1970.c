#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x27 = 366097320U;
static uint32_t t2 = UINT32_MAX;
uint32_t x33 = 1U;
int16_t x53 = INT16_MAX;
int32_t t6 = 259153;
int16_t x63 = INT16_MIN;
volatile int16_t x64 = -1;
static int64_t x67 = INT64_MAX;
int32_t t9 = INT32_MAX;
int32_t x81 = INT32_MAX;
int8_t x85 = 0;
int8_t x88 = INT8_MIN;
int8_t x95 = INT8_MAX;
static uint64_t x104 = 18734830LLU;
int16_t x111 = INT16_MIN;
uint64_t x114 = 1349004659791618LLU;
static volatile int64_t x116 = 5539LL;
uint64_t x119 = UINT64_MAX;
static int32_t x120 = INT32_MIN;
uint64_t x134 = 97684333LLU;
uint16_t x141 = UINT16_MAX;
uint8_t x142 = 1U;
int16_t x170 = INT16_MIN;
uint32_t x178 = 1134U;
int16_t x189 = 20;
int16_t x192 = 19;
static int16_t x196 = 0;
int64_t x212 = -1LL;
int32_t t25 = 51803030;
uint16_t x239 = UINT16_MAX;
volatile uint64_t x253 = 464723831LLU;
static uint32_t x255 = 498405526U;
uint64_t x256 = 3797615702407175498LLU;
uint8_t x264 = UINT8_MAX;
int8_t x283 = -1;
static int8_t x284 = INT8_MAX;
static volatile uint32_t t36 = 386932798U;
volatile int32_t t38 = 36;
static int32_t x301 = INT32_MAX;
int32_t x302 = INT32_MAX;
int64_t x304 = INT64_MIN;
int32_t t41 = INT32_MAX;
uint16_t x305 = UINT16_MAX;
uint32_t x310 = 182U;
int16_t x340 = INT16_MIN;
uint64_t x376 = 808LLU;
volatile int32_t t51 = 0;
volatile uint32_t t54 = 4687U;
static int32_t x393 = INT32_MAX;
int32_t x395 = INT32_MIN;
int32_t t55 = INT32_MAX;
static uint16_t x399 = 21943U;
static uint16_t x400 = UINT16_MAX;
int16_t x404 = -1;
int8_t x412 = INT8_MIN;
uint32_t x433 = 968079U;
int16_t x435 = INT16_MIN;
static int8_t x449 = INT8_MAX;
uint8_t x451 = 37U;
uint8_t x453 = 6U;
int64_t x454 = INT64_MIN;
int8_t x455 = -1;
static int64_t x456 = -1LL;
int16_t x458 = INT16_MAX;
int8_t x459 = -1;
volatile int32_t t64 = -11088919;
uint32_t x465 = UINT32_MAX;
int16_t x466 = INT16_MAX;
int8_t x469 = INT8_MAX;
int64_t x482 = INT64_MIN;
volatile uint64_t x483 = UINT64_MAX;
volatile int32_t t68 = 231500;
static int16_t x488 = INT16_MIN;
int32_t x495 = INT32_MIN;
static int16_t x496 = INT16_MIN;
int64_t x519 = INT64_MIN;
int32_t x522 = INT32_MIN;
static int8_t x532 = -3;
volatile int32_t t78 = INT32_MAX;
static int64_t x538 = INT64_MIN;
int64_t x539 = INT64_MAX;
uint8_t x571 = 118U;
uint64_t x574 = 120LLU;
volatile int32_t t84 = -3;
int64_t x584 = INT64_MIN;
uint8_t x591 = UINT8_MAX;
int32_t t86 = -1679;
int16_t x597 = 8;
int32_t x603 = INT32_MAX;
uint16_t x604 = 29474U;
uint64_t x616 = UINT64_MAX;
uint64_t t91 = 64999LLU;
uint64_t x618 = 50159388LLU;
static int16_t x620 = INT16_MIN;
uint8_t x634 = 4U;
static volatile int32_t t93 = 23;
static int64_t x652 = INT64_MIN;
uint8_t x653 = 13U;
int8_t x656 = -1;
int32_t t97 = -350881;
static int8_t x658 = INT8_MIN;


void f0(void) {
	static uint32_t x5 = 10U;
	static volatile uint16_t x6 = 26057U;
	static uint32_t x7 = 43674095U;
	volatile uint8_t x8 = 1U;
	volatile uint32_t t0 = 11726U;

	t0 = (x5>>(x6<(x7|x8)));

	if (t0 != 5U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x25 = 118U;
	uint32_t x26 = 8209072U;
	int32_t x28 = -4128435;
	volatile int32_t t1 = 124;

	t1 = (x25>>(x26<(x27|x28)));

	if (t1 != 59) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = -290;
	volatile uint8_t x31 = 0U;
	int16_t x32 = INT16_MIN;

	t2 = (x29>>(x30<(x31|x32)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MAX;
	int64_t x36 = -94267535286LL;
	volatile uint32_t t3 = 306U;

	t3 = (x33>>(x34<(x35|x36)));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x37 = UINT32_MAX;
	static int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	static uint8_t x40 = UINT8_MAX;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (x37>>(x38<(x39|x40)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x49 = UINT32_MAX;
	volatile int8_t x50 = 62;
	volatile uint16_t x51 = 1U;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t5 = 3U;

	t5 = (x49>>(x50<(x51|x52)));

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x54 = -1;
	int64_t x55 = INT64_MIN;
	volatile int8_t x56 = 10;

	t6 = (x53>>(x54<(x55|x56)));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x61 = 58U;
	uint16_t x62 = UINT16_MAX;
	int32_t t7 = 813367872;

	t7 = (x61>>(x62<(x63|x64)));

	if (t7 != 58) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = INT32_MAX;
	int64_t x66 = INT64_MIN;
	uint16_t x68 = UINT16_MAX;
	static volatile int32_t t8 = -13;

	t8 = (x65>>(x66<(x67|x68)));

	if (t8 != 1073741823) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x73 = INT32_MAX;
	static int8_t x74 = -1;
	int32_t x75 = INT32_MAX;
	static int32_t x76 = INT32_MIN;

	t9 = (x73>>(x74<(x75|x76)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x82 = INT8_MIN;
	int32_t x83 = INT32_MIN;
	volatile uint16_t x84 = 5U;
	int32_t t10 = INT32_MAX;

	t10 = (x81>>(x82<(x83|x84)));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MIN;
	static volatile int32_t t11 = -1;

	t11 = (x85>>(x86<(x87|x88)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x93 = 0;
	int8_t x94 = INT8_MIN;
	volatile uint64_t x96 = 23891LLU;
	int32_t t12 = -27567215;

	t12 = (x93>>(x94<(x95|x96)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MIN;
	volatile int64_t x103 = INT64_MIN;
	uint64_t t13 = UINT64_MAX;

	t13 = (x101>>(x102<(x103|x104)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x109 = 3U;
	volatile int8_t x110 = -15;
	int8_t x112 = INT8_MIN;
	int32_t t14 = 1;

	t14 = (x109>>(x110<(x111|x112)));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x115 = INT64_MIN;
	volatile uint32_t t15 = 1239164U;

	t15 = (x113>>(x114<(x115|x116)));

	if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x117 = INT16_MAX;
	static int32_t x118 = -44820746;
	static int32_t t16 = 467;

	t16 = (x117>>(x118<(x119|x120)));

	if (t16 != 16383) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x133 = INT64_MAX;
	static int16_t x135 = 6;
	volatile int32_t x136 = 53527;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x133>>(x134<(x135|x136)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x143 = INT16_MIN;
	int64_t x144 = 32553946LL;
	volatile int32_t t18 = 223;

	t18 = (x141>>(x142<(x143|x144)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x157 = 6U;
	uint8_t x158 = 5U;
	int16_t x159 = INT16_MIN;
	volatile uint32_t x160 = 532695505U;
	volatile int32_t t19 = 415468193;

	t19 = (x157>>(x158<(x159|x160)));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x169 = 1;
	int8_t x171 = 26;
	volatile int64_t x172 = INT64_MIN;
	static int32_t t20 = 175933180;

	t20 = (x169>>(x170<(x171|x172)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x177 = 13718828;
	static uint32_t x179 = 0U;
	volatile int32_t x180 = INT32_MIN;
	static volatile int32_t t21 = -1;

	t21 = (x177>>(x178<(x179|x180)));

	if (t21 != 6859414) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x190 = -1;
	static int32_t x191 = -1;
	volatile int32_t t22 = 10431;

	t22 = (x189>>(x190<(x191|x192)));

	if (t22 != 20) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x193 = 0;
	volatile int8_t x194 = INT8_MAX;
	uint32_t x195 = UINT32_MAX;
	static int32_t t23 = 4578;

	t23 = (x193>>(x194<(x195|x196)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x201 = INT64_MAX;
	int32_t x202 = INT32_MIN;
	static int16_t x203 = 12309;
	int64_t x204 = 2619956LL;
	static int64_t t24 = -35LL;

	t24 = (x201>>(x202<(x203|x204)));

	if (t24 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x209 = 6U;
	volatile uint32_t x210 = UINT32_MAX;
	uint16_t x211 = UINT16_MAX;

	t25 = (x209>>(x210<(x211|x212)));

	if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x217 = 28068;
	volatile uint16_t x218 = 30585U;
	uint32_t x219 = 75194U;
	int16_t x220 = -61;
	volatile int32_t t26 = -7;

	t26 = (x217>>(x218<(x219|x220)));

	if (t26 != 14034) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x221 = INT64_MAX;
	volatile int32_t x222 = -1;
	int64_t x223 = INT64_MAX;
	uint32_t x224 = 2U;
	volatile int64_t t27 = 291701615423LL;

	t27 = (x221>>(x222<(x223|x224)));

	if (t27 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x229 = 2;
	uint8_t x230 = 2U;
	int32_t x231 = INT32_MIN;
	static uint64_t x232 = 11225158919016LLU;
	static int32_t t28 = 28;

	t28 = (x229>>(x230<(x231|x232)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x237 = INT16_MAX;
	uint8_t x238 = 1U;
	uint64_t x240 = UINT64_MAX;
	static int32_t t29 = -13111487;

	t29 = (x237>>(x238<(x239|x240)));

	if (t29 != 16383) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x241 = 4035423079LLU;
	int16_t x242 = -7;
	int16_t x243 = -5664;
	int16_t x244 = INT16_MIN;
	static volatile uint64_t t30 = 508LLU;

	t30 = (x241>>(x242<(x243|x244)));

	if (t30 != 4035423079LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x254 = INT8_MIN;
	volatile uint64_t t31 = 30442LLU;

	t31 = (x253>>(x254<(x255|x256)));

	if (t31 != 464723831LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x257 = 0;
	volatile int16_t x258 = -493;
	int16_t x259 = 462;
	uint64_t x260 = 412486757LLU;
	volatile int32_t t32 = 16;

	t32 = (x257>>(x258<(x259|x260)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x261 = UINT64_MAX;
	int16_t x262 = INT16_MIN;
	volatile int64_t x263 = -1LL;
	uint64_t t33 = 2670316624818005055LLU;

	t33 = (x261>>(x262<(x263|x264)));

	if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int8_t x270 = -1;
	static volatile uint8_t x271 = UINT8_MAX;
	int8_t x272 = -24;
	uint64_t t34 = UINT64_MAX;

	t34 = (x269>>(x270<(x271|x272)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x277 = 32U;
	int8_t x278 = INT8_MIN;
	int32_t x279 = INT32_MAX;
	static int16_t x280 = -1;
	static volatile int32_t t35 = -14320900;

	t35 = (x277>>(x278<(x279|x280)));

	if (t35 != 16) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x281 = 35831U;
	int64_t x282 = 60284600LL;

	t36 = (x281>>(x282<(x283|x284)));

	if (t36 != 35831U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x285 = UINT32_MAX;
	uint32_t x286 = UINT32_MAX;
	static int8_t x287 = 2;
	int8_t x288 = -1;
	uint32_t t37 = UINT32_MAX;

	t37 = (x285>>(x286<(x287|x288)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x289 = 165U;
	volatile int16_t x290 = -6817;
	int8_t x291 = INT8_MIN;
	volatile int16_t x292 = -1;

	t38 = (x289>>(x290<(x291|x292)));

	if (t38 != 82) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x293 = 170776864705202LL;
	uint64_t x294 = 104LLU;
	int32_t x295 = -3261052;
	static int16_t x296 = 442;
	volatile int64_t t39 = -478244LL;

	t39 = (x293>>(x294<(x295|x296)));

	if (t39 != 85388432352601LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x297 = 6U;
	int64_t x298 = -1LL;
	static uint64_t x299 = 7LLU;
	uint32_t x300 = 1194580395U;
	volatile int32_t t40 = 487057;

	t40 = (x297>>(x298<(x299|x300)));

	if (t40 != 6) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x303 = -1LL;

	t41 = (x301>>(x302<(x303|x304)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x306 = 383;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = 31U;
	int32_t t42 = -206855;

	t42 = (x305>>(x306<(x307|x308)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x309 = 0;
	int64_t x311 = 351500698031LL;
	volatile int32_t x312 = 1425;
	static volatile int32_t t43 = 2129532;

	t43 = (x309>>(x310<(x311|x312)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x317 = 120U;
	uint8_t x318 = 4U;
	int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MAX;
	volatile int32_t t44 = 39;

	t44 = (x317>>(x318<(x319|x320)));

	if (t44 != 120) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x325 = INT8_MAX;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = INT32_MAX;
	uint8_t x328 = 11U;
	static volatile int32_t t45 = 1139121;

	t45 = (x325>>(x326<(x327|x328)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x337 = UINT32_MAX;
	uint32_t x338 = 1U;
	int64_t x339 = 12965475917930330LL;
	uint32_t t46 = UINT32_MAX;

	t46 = (x337>>(x338<(x339|x340)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x349 = 1855531U;
	int16_t x350 = INT16_MAX;
	static uint8_t x351 = 99U;
	static volatile uint32_t x352 = 8U;
	static uint32_t t47 = 0U;

	t47 = (x349>>(x350<(x351|x352)));

	if (t47 != 1855531U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x361 = 30635743;
	int8_t x362 = INT8_MAX;
	volatile uint8_t x363 = UINT8_MAX;
	int16_t x364 = -1;
	int32_t t48 = -57392799;

	t48 = (x361>>(x362<(x363|x364)));

	if (t48 != 30635743) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x365 = 12105U;
	int8_t x366 = 58;
	int16_t x367 = INT16_MIN;
	volatile int16_t x368 = -1;
	static int32_t t49 = -994447974;

	t49 = (x365>>(x366<(x367|x368)));

	if (t49 != 12105) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x369 = 300;
	int16_t x370 = 1;
	uint16_t x371 = 815U;
	static volatile uint32_t x372 = 1222U;
	int32_t t50 = 12;

	t50 = (x369>>(x370<(x371|x372)));

	if (t50 != 150) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x373 = 0;
	int8_t x374 = -3;
	int16_t x375 = -1;

	t51 = (x373>>(x374<(x375|x376)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x377 = 3113365LLU;
	int32_t x378 = INT32_MAX;
	uint8_t x379 = UINT8_MAX;
	uint8_t x380 = 1U;
	uint64_t t52 = 3553589204101591LLU;

	t52 = (x377>>(x378<(x379|x380)));

	if (t52 != 3113365LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x381 = 4U;
	static uint32_t x382 = 21107U;
	int64_t x383 = 7862LL;
	volatile uint64_t x384 = 1LLU;
	int32_t t53 = -43;

	t53 = (x381>>(x382<(x383|x384)));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x385 = 13954178U;
	uint16_t x386 = 66U;
	int8_t x387 = INT8_MIN;
	static volatile uint8_t x388 = 3U;

	t54 = (x385>>(x386<(x387|x388)));

	if (t54 != 13954178U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x394 = 1U;
	int64_t x396 = INT64_MIN;

	t55 = (x393>>(x394<(x395|x396)));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x397 = 1;
	uint16_t x398 = 104U;
	static volatile int32_t t56 = -15607820;

	t56 = (x397>>(x398<(x399|x400)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x401 = UINT8_MAX;
	uint64_t x402 = 11082395105LLU;
	int16_t x403 = INT16_MIN;
	int32_t t57 = 32012551;

	t57 = (x401>>(x402<(x403|x404)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x409 = UINT16_MAX;
	uint32_t x410 = 0U;
	int32_t x411 = -12656;
	volatile int32_t t58 = 88;

	t58 = (x409>>(x410<(x411|x412)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x413 = 11;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = INT32_MIN;
	int16_t x416 = INT16_MIN;
	volatile int32_t t59 = -79;

	t59 = (x413>>(x414<(x415|x416)));

	if (t59 != 11) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x425 = 9;
	int8_t x426 = 0;
	int32_t x427 = INT32_MIN;
	static int32_t x428 = -1;
	volatile int32_t t60 = 110;

	t60 = (x425>>(x426<(x427|x428)));

	if (t60 != 9) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x434 = -13LL;
	static int8_t x436 = -1;
	volatile uint32_t t61 = 78U;

	t61 = (x433>>(x434<(x435|x436)));

	if (t61 != 484039U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x450 = 5U;
	int64_t x452 = -141LL;
	int32_t t62 = 26986882;

	t62 = (x449>>(x450<(x451|x452)));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t t63 = 1;

	t63 = (x453>>(x454<(x455|x456)));

	if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x457 = 3U;
	volatile int16_t x460 = INT16_MIN;

	t64 = (x457>>(x458<(x459|x460)));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x467 = -14;
	int32_t x468 = -1;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = (x465>>(x466<(x467|x468)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x470 = INT32_MAX;
	static uint64_t x471 = UINT64_MAX;
	int16_t x472 = INT16_MIN;
	int32_t t66 = 63167;

	t66 = (x469>>(x470<(x471|x472)));

	if (t66 != 63) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x477 = INT32_MAX;
	volatile uint64_t x478 = UINT64_MAX;
	uint32_t x479 = UINT32_MAX;
	int32_t x480 = -1;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x477>>(x478<(x479|x480)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x481 = 5643;
	int8_t x484 = -27;

	t68 = (x481>>(x482<(x483|x484)));

	if (t68 != 2821) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x485 = 11624LLU;
	int32_t x486 = -1;
	static int16_t x487 = INT16_MIN;
	volatile uint64_t t69 = 7437154LLU;

	t69 = (x485>>(x486<(x487|x488)));

	if (t69 != 11624LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x489 = 15;
	uint64_t x490 = 772680228084715420LLU;
	volatile int64_t x491 = INT64_MIN;
	static int32_t x492 = -1;
	int32_t t70 = 2401;

	t70 = (x489>>(x490<(x491|x492)));

	if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x493 = 6U;
	int8_t x494 = INT8_MIN;
	int32_t t71 = 7446;

	t71 = (x493>>(x494<(x495|x496)));

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x501 = INT16_MAX;
	int8_t x502 = INT8_MIN;
	volatile int8_t x503 = 0;
	static uint16_t x504 = UINT16_MAX;
	int32_t t72 = 3145;

	t72 = (x501>>(x502<(x503|x504)));

	if (t72 != 16383) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x505 = INT8_MAX;
	volatile int8_t x506 = INT8_MAX;
	int8_t x507 = INT8_MIN;
	volatile int16_t x508 = 3;
	volatile int32_t t73 = 591;

	t73 = (x505>>(x506<(x507|x508)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x517 = 259U;
	int8_t x518 = -1;
	int32_t x520 = -625112100;
	volatile uint32_t t74 = 317829431U;

	t74 = (x517>>(x518<(x519|x520)));

	if (t74 != 259U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x521 = 35635325693615LLU;
	int16_t x523 = INT16_MIN;
	uint32_t x524 = 308375U;
	volatile uint64_t t75 = 13665917634120LLU;

	t75 = (x521>>(x522<(x523|x524)));

	if (t75 != 17817662846807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x525 = 3291814558259772LLU;
	int32_t x526 = INT32_MIN;
	int16_t x527 = 0;
	static uint32_t x528 = 5825019U;
	uint64_t t76 = 1154134770LLU;

	t76 = (x525>>(x526<(x527|x528)));

	if (t76 != 3291814558259772LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x529 = INT32_MAX;
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MIN;
	volatile int32_t t77 = -1;

	t77 = (x529>>(x530<(x531|x532)));

	if (t77 != 1073741823) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x533 = INT32_MAX;
	static int32_t x534 = 232197491;
	uint16_t x535 = 3U;
	int32_t x536 = INT32_MIN;

	t78 = (x533>>(x534<(x535|x536)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x537 = INT8_MAX;
	int64_t x540 = -15LL;
	volatile int32_t t79 = -53194;

	t79 = (x537>>(x538<(x539|x540)));

	if (t79 != 63) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x541 = INT16_MAX;
	uint16_t x542 = 13531U;
	int8_t x543 = -15;
	int16_t x544 = -213;
	static volatile int32_t t80 = 180905489;

	t80 = (x541>>(x542<(x543|x544)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x545 = 41U;
	uint32_t x546 = 5U;
	uint8_t x547 = 1U;
	static volatile uint16_t x548 = UINT16_MAX;
	int32_t t81 = 5818550;

	t81 = (x545>>(x546<(x547|x548)));

	if (t81 != 20) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x557 = 5LLU;
	int64_t x558 = -241441460LL;
	static volatile int8_t x559 = INT8_MAX;
	volatile int32_t x560 = 11588648;
	static volatile uint64_t t82 = 126285LLU;

	t82 = (x557>>(x558<(x559|x560)));

	if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x569 = INT64_MAX;
	int64_t x570 = -1LL;
	uint32_t x572 = UINT32_MAX;
	volatile int64_t t83 = 17088768936LL;

	t83 = (x569>>(x570<(x571|x572)));

	if (t83 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x573 = 3;
	uint16_t x575 = UINT16_MAX;
	int32_t x576 = INT32_MAX;

	t84 = (x573>>(x574<(x575|x576)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x581 = INT32_MAX;
	volatile int8_t x582 = INT8_MIN;
	uint8_t x583 = 0U;
	static volatile int32_t t85 = INT32_MAX;

	t85 = (x581>>(x582<(x583|x584)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x589 = 107U;
	volatile uint8_t x590 = 2U;
	uint32_t x592 = 9443433U;

	t86 = (x589>>(x590<(x591|x592)));

	if (t86 != 53) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x593 = INT32_MAX;
	static uint16_t x594 = 29526U;
	uint8_t x595 = UINT8_MAX;
	int32_t x596 = -1;
	volatile int32_t t87 = INT32_MAX;

	t87 = (x593>>(x594<(x595|x596)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x598 = 57;
	static uint8_t x599 = 2U;
	uint16_t x600 = UINT16_MAX;
	volatile int32_t t88 = 990349;

	t88 = (x597>>(x598<(x599|x600)));

	if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x601 = 5;
	int8_t x602 = -1;
	volatile int32_t t89 = 1406;

	t89 = (x601>>(x602<(x603|x604)));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x609 = 1;
	static uint8_t x610 = 4U;
	int32_t x611 = -1;
	int8_t x612 = -34;
	int32_t t90 = 12;

	t90 = (x609>>(x610<(x611|x612)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x613 = 99145903LLU;
	int16_t x614 = INT16_MAX;
	int8_t x615 = INT8_MAX;

	t91 = (x613>>(x614<(x615|x616)));

	if (t91 != 49572951LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x617 = INT64_MAX;
	volatile uint8_t x619 = 86U;
	static volatile int64_t t92 = 3755LL;

	t92 = (x617>>(x618<(x619|x620)));

	if (t92 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x633 = 34292670;
	int16_t x635 = INT16_MIN;
	int32_t x636 = INT32_MIN;

	t93 = (x633>>(x634<(x635|x636)));

	if (t93 != 34292670) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x637 = INT32_MAX;
	int32_t x638 = -1;
	int32_t x639 = -1;
	uint32_t x640 = UINT32_MAX;
	static int32_t t94 = INT32_MAX;

	t94 = (x637>>(x638<(x639|x640)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x641 = 6U;
	int16_t x642 = 0;
	uint16_t x643 = 5621U;
	int64_t x644 = INT64_MIN;
	int32_t t95 = -130373679;

	t95 = (x641>>(x642<(x643|x644)));

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x649 = UINT64_MAX;
	int32_t x650 = 19369;
	static uint32_t x651 = UINT32_MAX;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x649>>(x650<(x651|x652)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x654 = INT64_MAX;
	uint16_t x655 = UINT16_MAX;

	t97 = (x653>>(x654<(x655|x656)));

	if (t97 != 13) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x657 = UINT8_MAX;
	int8_t x659 = INT8_MIN;
	static int64_t x660 = INT64_MIN;
	int32_t t98 = -178;

	t98 = (x657>>(x658<(x659|x660)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x665 = 2U;
	int8_t x666 = -1;
	static int16_t x667 = INT16_MAX;
	uint8_t x668 = 50U;
	volatile int32_t t99 = -7812;

	t99 = (x665>>(x666<(x667|x668)));

	if (t99 != 1) { NG(); } else { ; }
	
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

