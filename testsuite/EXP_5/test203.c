#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 51;
uint32_t x11 = 199179U;
uint16_t x14 = 1135U;
static volatile int16_t x49 = INT16_MIN;
int64_t x52 = 31055746647LL;
static int8_t x71 = INT8_MIN;
static int16_t x86 = INT16_MIN;
volatile uint64_t x90 = 21938099327545LLU;
volatile uint16_t x99 = 32587U;
volatile int16_t x113 = -12888;
uint64_t x116 = 345604915958LLU;
volatile int32_t x118 = 0;
uint8_t x123 = 22U;
uint32_t x129 = 65258U;
volatile int32_t t20 = 31305168;
int32_t x137 = INT32_MAX;
volatile uint64_t x138 = 61406526196LLU;
int8_t x140 = 24;
int32_t x153 = -2;
uint64_t x171 = 3191781202267LLU;
int32_t x172 = INT32_MIN;
volatile int16_t x185 = 139;
int32_t x198 = -164258933;
uint64_t x199 = 47506073370LLU;
volatile int16_t x209 = INT16_MIN;
int32_t x216 = -416827513;
int32_t t32 = -3724542;
int32_t t33 = -35;
int32_t x223 = 13619;
int16_t x224 = 16060;
uint16_t x235 = UINT16_MAX;
volatile uint8_t x236 = 1U;
uint64_t x238 = 104780770302LLU;
volatile int32_t t42 = -1833513;
int32_t t47 = -121428;
static int16_t x322 = INT16_MIN;
static int64_t x333 = INT64_MIN;
int32_t x335 = -78944;
static uint64_t x336 = UINT64_MAX;
volatile uint8_t x338 = UINT8_MAX;
static volatile int16_t x346 = -1;
uint64_t x363 = 14519443826042100LLU;
int64_t x372 = -2LL;
volatile int32_t t57 = 116520121;
uint32_t x374 = UINT32_MAX;
static volatile uint64_t x377 = 1720321197146879100LLU;
int64_t x378 = INT64_MAX;
int8_t x382 = INT8_MIN;
int64_t x399 = -8679282582516284LL;
volatile int32_t t63 = 76;
uint16_t x406 = UINT16_MAX;
volatile int32_t t71 = 1900;
int64_t x453 = INT64_MIN;
volatile int8_t x456 = -52;
int16_t x481 = INT16_MAX;
int16_t x482 = -3;
int32_t t81 = 1063570048;
int8_t x513 = -1;
volatile int64_t x514 = -1LL;
volatile uint64_t x515 = UINT64_MAX;
uint64_t x518 = 388962063499035328LLU;
static int16_t x519 = INT16_MAX;
uint8_t x521 = 1U;
uint64_t x523 = UINT64_MAX;
int16_t x527 = -1472;
int8_t x528 = INT8_MAX;
int32_t x533 = 7011888;
uint16_t x541 = UINT16_MAX;
int16_t x546 = INT16_MIN;
uint16_t x555 = 54U;
static volatile int32_t t91 = 6;
volatile int16_t x578 = -2;
int16_t x579 = 1;
uint16_t x580 = 0U;
int32_t t92 = -4129554;
static volatile int16_t x599 = INT16_MIN;
int8_t x603 = -28;
int16_t x606 = 0;
int16_t x611 = INT16_MIN;
int32_t x618 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static volatile uint8_t x2 = 3U;
	static int32_t x3 = -21;
	uint64_t x4 = UINT64_MAX;

	t0 = (x1==((x2-x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	uint16_t x10 = 5705U;
	int32_t x12 = -1;
	static volatile int32_t t1 = 4;

	t1 = (x9==((x10-x11)*x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	static int16_t x15 = -2;
	int16_t x16 = INT16_MIN;
	volatile int32_t t2 = -584;

	t2 = (x13==((x14-x15)*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	volatile uint8_t x18 = 3U;
	volatile int16_t x19 = -1;
	int64_t x20 = 18LL;
	volatile int32_t t3 = 61306;

	t3 = (x17==((x18-x19)*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x41 = 246U;
	uint8_t x42 = 74U;
	uint8_t x43 = UINT8_MAX;
	volatile uint8_t x44 = UINT8_MAX;
	volatile int32_t t4 = -41481568;

	t4 = (x41==((x42-x43)*x44));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x50 = 1098877924945858782LL;
	uint64_t x51 = 14840LLU;
	int32_t t5 = 12;

	t5 = (x49==((x50-x51)*x52));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x61 = INT64_MAX;
	static uint16_t x62 = 396U;
	static volatile int8_t x63 = INT8_MIN;
	uint64_t x64 = 1077LLU;
	int32_t t6 = 1;

	t6 = (x61==((x62-x63)*x64));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = -10;
	uint16_t x72 = 1U;
	volatile int32_t t7 = 3;

	t7 = (x69==((x70-x71)*x72));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x77 = UINT16_MAX;
	static uint32_t x78 = UINT32_MAX;
	static int8_t x79 = -1;
	static int32_t x80 = -54441865;
	int32_t t8 = -401;

	t8 = (x77==((x78-x79)*x80));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x81 = 22U;
	uint64_t x82 = 53859133633LLU;
	static uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t9 = -1134655;

	t9 = (x81==((x82-x83)*x84));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x87 = -7;
	uint64_t x88 = 489028269462451LLU;
	volatile int32_t t10 = 470739292;

	t10 = (x85==((x86-x87)*x88));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x89 = -10;
	uint64_t x91 = UINT64_MAX;
	int16_t x92 = -1;
	static int32_t t11 = 56;

	t11 = (x89==((x90-x91)*x92));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x93 = INT32_MIN;
	uint8_t x94 = 1U;
	uint8_t x95 = 3U;
	static uint32_t x96 = 1468455608U;
	int32_t t12 = 20316;

	t12 = (x93==((x94-x95)*x96));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x97 = UINT16_MAX;
	uint8_t x98 = 14U;
	volatile int8_t x100 = 1;
	int32_t t13 = 991559676;

	t13 = (x97==((x98-x99)*x100));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x101 = -1;
	volatile int8_t x102 = INT8_MIN;
	int8_t x103 = -1;
	uint64_t x104 = 55330LLU;
	int32_t t14 = -26977;

	t14 = (x101==((x102-x103)*x104));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x109 = INT64_MIN;
	static int16_t x110 = INT16_MAX;
	volatile int16_t x111 = INT16_MAX;
	static uint64_t x112 = 6007196609097318LLU;
	static volatile int32_t t15 = 8202;

	t15 = (x109==((x110-x111)*x112));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x114 = 3458281023LLU;
	uint8_t x115 = 99U;
	int32_t t16 = 1817739;

	t16 = (x113==((x114-x115)*x116));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x117 = INT64_MIN;
	volatile int32_t x119 = -1;
	int32_t x120 = INT32_MIN;
	int32_t t17 = 96141;

	t17 = (x117==((x118-x119)*x120));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x121 = INT8_MAX;
	volatile int16_t x122 = INT16_MIN;
	int16_t x124 = -1;
	volatile int32_t t18 = 13224;

	t18 = (x121==((x122-x123)*x124));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x125 = -5;
	static int32_t x126 = -1;
	volatile uint32_t x127 = UINT32_MAX;
	int16_t x128 = INT16_MAX;
	int32_t t19 = 148;

	t19 = (x125==((x126-x127)*x128));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x130 = 20U;
	static uint64_t x131 = 58716552288593121LLU;
	volatile uint32_t x132 = 379203188U;

	t20 = (x129==((x130-x131)*x132));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x139 = INT16_MIN;
	int32_t t21 = 0;

	t21 = (x137==((x138-x139)*x140));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x154 = UINT32_MAX;
	static volatile int64_t x155 = -2131890187185961793LL;
	volatile int64_t x156 = -1LL;
	static int32_t t22 = -213573674;

	t22 = (x153==((x154-x155)*x156));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x157 = 48U;
	int32_t x158 = INT32_MAX;
	static int32_t x159 = 332950891;
	int64_t x160 = -10668LL;
	volatile int32_t t23 = 14;

	t23 = (x157==((x158-x159)*x160));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x161 = -1947LL;
	static uint64_t x162 = 766LLU;
	int8_t x163 = INT8_MAX;
	static volatile int32_t x164 = 1;
	int32_t t24 = 23128386;

	t24 = (x161==((x162-x163)*x164));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MIN;
	static uint64_t x168 = UINT64_MAX;
	int32_t t25 = -1239715;

	t25 = (x165==((x166-x167)*x168));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x169 = -2;
	static uint32_t x170 = 208U;
	int32_t t26 = 229114815;

	t26 = (x169==((x170-x171)*x172));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x173 = 63U;
	uint32_t x174 = 3U;
	volatile int8_t x175 = -1;
	int32_t x176 = INT32_MIN;
	int32_t t27 = -29;

	t27 = (x173==((x174-x175)*x176));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x177 = 6886;
	int16_t x178 = INT16_MIN;
	uint16_t x179 = 605U;
	static uint16_t x180 = 0U;
	static volatile int32_t t28 = 191;

	t28 = (x177==((x178-x179)*x180));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x186 = -638;
	static volatile int64_t x187 = -12LL;
	int8_t x188 = INT8_MIN;
	int32_t t29 = 5633;

	t29 = (x185==((x186-x187)*x188));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x197 = 14U;
	static uint64_t x200 = 6968032983LLU;
	volatile int32_t t30 = 9523703;

	t30 = (x197==((x198-x199)*x200));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x210 = 4;
	static volatile uint32_t x211 = UINT32_MAX;
	int16_t x212 = -1;
	volatile int32_t t31 = 1;

	t31 = (x209==((x210-x211)*x212));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x213 = -1;
	static int8_t x214 = -5;
	static uint32_t x215 = 172241U;

	t32 = (x213==((x214-x215)*x216));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x217 = INT32_MAX;
	volatile int64_t x218 = INT64_MIN;
	static volatile uint64_t x219 = 4195473LLU;
	static int32_t x220 = INT32_MIN;

	t33 = (x217==((x218-x219)*x220));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x221 = INT16_MIN;
	uint8_t x222 = 97U;
	int32_t t34 = 374370836;

	t34 = (x221==((x222-x223)*x224));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x233 = -7;
	int16_t x234 = -1;
	volatile int32_t t35 = -5473470;

	t35 = (x233==((x234-x235)*x236));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x237 = INT8_MIN;
	volatile int8_t x239 = -1;
	int16_t x240 = -1;
	static int32_t t36 = 239419211;

	t36 = (x237==((x238-x239)*x240));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x245 = INT64_MIN;
	int32_t x246 = INT32_MIN;
	int64_t x247 = -11926450LL;
	int8_t x248 = INT8_MIN;
	volatile int32_t t37 = 41785;

	t37 = (x245==((x246-x247)*x248));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x249 = -1;
	int32_t x250 = 4844673;
	int16_t x251 = -13351;
	static volatile uint8_t x252 = 4U;
	volatile int32_t t38 = -1;

	t38 = (x249==((x250-x251)*x252));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x257 = INT8_MIN;
	volatile uint16_t x258 = 700U;
	int64_t x259 = 16469297334LL;
	uint64_t x260 = 14105LLU;
	volatile int32_t t39 = -8301;

	t39 = (x257==((x258-x259)*x260));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x261 = INT32_MAX;
	int64_t x262 = INT64_MIN;
	uint64_t x263 = 10891LLU;
	int16_t x264 = 7629;
	int32_t t40 = 0;

	t40 = (x261==((x262-x263)*x264));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x265 = UINT8_MAX;
	static int32_t x266 = -1;
	volatile uint16_t x267 = 2485U;
	int32_t x268 = -1;
	int32_t t41 = 300136;

	t41 = (x265==((x266-x267)*x268));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x269 = 2U;
	int8_t x270 = 2;
	int8_t x271 = 11;
	volatile int8_t x272 = INT8_MIN;

	t42 = (x269==((x270-x271)*x272));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x277 = -13LL;
	int16_t x278 = -515;
	int64_t x279 = 75058369LL;
	uint32_t x280 = 18U;
	int32_t t43 = -28857487;

	t43 = (x277==((x278-x279)*x280));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x285 = 1;
	int32_t x286 = 1;
	int8_t x287 = -1;
	static int32_t x288 = -1;
	int32_t t44 = -11;

	t44 = (x285==((x286-x287)*x288));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x293 = -1;
	int8_t x294 = -2;
	uint8_t x295 = 55U;
	uint32_t x296 = 12874972U;
	int32_t t45 = -14;

	t45 = (x293==((x294-x295)*x296));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x297 = 1343907173LLU;
	int8_t x298 = 2;
	static uint64_t x299 = 2649239634LLU;
	int8_t x300 = 3;
	int32_t t46 = -118245900;

	t46 = (x297==((x298-x299)*x300));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x305 = 14991227444470284LL;
	uint32_t x306 = 29053496U;
	volatile int64_t x307 = -3455794899553798LL;
	int8_t x308 = 2;

	t47 = (x305==((x306-x307)*x308));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x321 = INT16_MAX;
	volatile int16_t x323 = INT16_MAX;
	int16_t x324 = -1;
	int32_t t48 = -812;

	t48 = (x321==((x322-x323)*x324));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x334 = INT8_MIN;
	volatile int32_t t49 = 135890029;

	t49 = (x333==((x334-x335)*x336));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x337 = INT32_MIN;
	static volatile int64_t x339 = -2378992645LL;
	int32_t x340 = INT32_MAX;
	int32_t t50 = 5;

	t50 = (x337==((x338-x339)*x340));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x341 = INT16_MIN;
	volatile int32_t x342 = -12045;
	int16_t x343 = 7289;
	uint16_t x344 = 1U;
	static int32_t t51 = -1077221;

	t51 = (x341==((x342-x343)*x344));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x345 = INT64_MAX;
	volatile int32_t x347 = INT32_MAX;
	static uint32_t x348 = UINT32_MAX;
	volatile int32_t t52 = -928;

	t52 = (x345==((x346-x347)*x348));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x353 = UINT64_MAX;
	int32_t x354 = 2;
	int32_t x355 = -1;
	int16_t x356 = INT16_MAX;
	static int32_t t53 = -1;

	t53 = (x353==((x354-x355)*x356));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x357 = -1;
	static uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 14126U;
	int32_t x360 = -4;
	int32_t t54 = 242911949;

	t54 = (x357==((x358-x359)*x360));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x361 = -1;
	uint32_t x362 = 1U;
	uint64_t x364 = 991LLU;
	int32_t t55 = -10254169;

	t55 = (x361==((x362-x363)*x364));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = 12;
	int8_t x368 = INT8_MIN;
	volatile int32_t t56 = -180465413;

	t56 = (x365==((x366-x367)*x368));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x369 = INT8_MAX;
	volatile int32_t x370 = -1;
	static uint32_t x371 = UINT32_MAX;

	t57 = (x369==((x370-x371)*x372));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x373 = INT16_MIN;
	uint64_t x375 = 244427LLU;
	volatile int64_t x376 = INT64_MAX;
	volatile int32_t t58 = 308634748;

	t58 = (x373==((x374-x375)*x376));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MAX;
	volatile int32_t t59 = -51119;

	t59 = (x377==((x378-x379)*x380));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x381 = -411596408809721LL;
	uint8_t x383 = 12U;
	volatile uint8_t x384 = UINT8_MAX;
	int32_t t60 = 497645;

	t60 = (x381==((x382-x383)*x384));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x389 = -1LL;
	uint8_t x390 = 44U;
	int8_t x391 = INT8_MAX;
	uint64_t x392 = 4246994710692310353LLU;
	static volatile int32_t t61 = -154;

	t61 = (x389==((x390-x391)*x392));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x393 = INT32_MAX;
	int32_t x394 = 9650997;
	static int8_t x395 = INT8_MIN;
	uint64_t x396 = UINT64_MAX;
	int32_t t62 = -6861757;

	t62 = (x393==((x394-x395)*x396));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -7;
	volatile int16_t x400 = -1;

	t63 = (x397==((x398-x399)*x400));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x401 = 921129U;
	int32_t x402 = INT32_MAX;
	uint64_t x403 = 17LLU;
	uint64_t x404 = 0LLU;
	static int32_t t64 = -1188588;

	t64 = (x401==((x402-x403)*x404));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x405 = 942899LL;
	static uint16_t x407 = 3U;
	volatile uint16_t x408 = 1U;
	volatile int32_t t65 = 10901399;

	t65 = (x405==((x406-x407)*x408));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x409 = INT8_MAX;
	uint64_t x410 = UINT64_MAX;
	volatile int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MAX;
	volatile int32_t t66 = -452;

	t66 = (x409==((x410-x411)*x412));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x425 = INT16_MAX;
	static int64_t x426 = INT64_MAX;
	uint64_t x427 = 1159074199789LLU;
	uint64_t x428 = 2597777467054278875LLU;
	static volatile int32_t t67 = -273;

	t67 = (x425==((x426-x427)*x428));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x429 = 24444LLU;
	uint16_t x430 = 0U;
	uint32_t x431 = 4078U;
	static int8_t x432 = INT8_MIN;
	volatile int32_t t68 = -74641;

	t68 = (x429==((x430-x431)*x432));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x437 = -1;
	int64_t x438 = -504706777391120121LL;
	int64_t x439 = INT64_MIN;
	uint64_t x440 = UINT64_MAX;
	int32_t t69 = 118797;

	t69 = (x437==((x438-x439)*x440));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x441 = INT8_MIN;
	static volatile int8_t x442 = -1;
	volatile int16_t x443 = 0;
	int16_t x444 = 0;
	int32_t t70 = -186;

	t70 = (x441==((x442-x443)*x444));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x445 = -1LL;
	volatile int32_t x446 = INT32_MAX;
	static uint32_t x447 = 517U;
	uint32_t x448 = 130U;

	t71 = (x445==((x446-x447)*x448));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x449 = INT16_MIN;
	int8_t x450 = INT8_MIN;
	volatile int64_t x451 = INT64_MIN;
	uint64_t x452 = 26617253736344310LLU;
	volatile int32_t t72 = 2568703;

	t72 = (x449==((x450-x451)*x452));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x454 = 77U;
	uint32_t x455 = 0U;
	volatile int32_t t73 = 1;

	t73 = (x453==((x454-x455)*x456));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x457 = INT64_MIN;
	int64_t x458 = -35574197628889335LL;
	static volatile uint64_t x459 = 2880856969562402LLU;
	volatile int32_t x460 = INT32_MAX;
	static int32_t t74 = -4092687;

	t74 = (x457==((x458-x459)*x460));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x465 = INT32_MAX;
	volatile int32_t x466 = -8948;
	int8_t x467 = INT8_MIN;
	static int32_t x468 = -27;
	int32_t t75 = -54251701;

	t75 = (x465==((x466-x467)*x468));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x473 = 1817865779LLU;
	int16_t x474 = INT16_MAX;
	uint64_t x475 = 450732205091527382LLU;
	int64_t x476 = INT64_MAX;
	volatile int32_t t76 = 4966;

	t76 = (x473==((x474-x475)*x476));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x483 = 171;
	int8_t x484 = INT8_MAX;
	int32_t t77 = -354841263;

	t77 = (x481==((x482-x483)*x484));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x485 = INT8_MIN;
	int32_t x486 = -28;
	static int8_t x487 = INT8_MIN;
	volatile uint8_t x488 = 10U;
	int32_t t78 = 110443;

	t78 = (x485==((x486-x487)*x488));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x489 = 1U;
	static int64_t x490 = -1719347389815283401LL;
	static uint64_t x491 = 147781034999458LLU;
	int64_t x492 = 7556418192746121LL;
	int32_t t79 = 96;

	t79 = (x489==((x490-x491)*x492));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x501 = -1LL;
	int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MIN;
	static volatile uint64_t x504 = 863206017LLU;
	static volatile int32_t t80 = -13295;

	t80 = (x501==((x502-x503)*x504));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x505 = INT32_MIN;
	volatile uint64_t x506 = 1113124234590824457LLU;
	uint16_t x507 = 178U;
	uint64_t x508 = UINT64_MAX;

	t81 = (x505==((x506-x507)*x508));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x516 = 408LLU;
	static int32_t t82 = 461260;

	t82 = (x513==((x514-x515)*x516));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x517 = 6666544293017LLU;
	volatile int32_t x520 = INT32_MIN;
	volatile int32_t t83 = -1608929;

	t83 = (x517==((x518-x519)*x520));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x522 = 2610;
	int16_t x524 = 129;
	volatile int32_t t84 = 3195;

	t84 = (x521==((x522-x523)*x524));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x525 = -1;
	int8_t x526 = INT8_MIN;
	volatile int32_t t85 = 222026;

	t85 = (x525==((x526-x527)*x528));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x534 = 24U;
	uint64_t x535 = 2207972636862891LLU;
	static uint8_t x536 = UINT8_MAX;
	static int32_t t86 = -2496204;

	t86 = (x533==((x534-x535)*x536));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x537 = INT8_MIN;
	static int8_t x538 = INT8_MIN;
	int32_t x539 = -1;
	int32_t x540 = -1;
	static int32_t t87 = -6;

	t87 = (x537==((x538-x539)*x540));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x542 = -5;
	uint8_t x543 = 7U;
	int8_t x544 = -1;
	volatile int32_t t88 = 51;

	t88 = (x541==((x542-x543)*x544));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x545 = INT64_MIN;
	static uint8_t x547 = 3U;
	uint16_t x548 = 6U;
	volatile int32_t t89 = 241707348;

	t89 = (x545==((x546-x547)*x548));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x549 = 7U;
	volatile uint16_t x550 = 8296U;
	int8_t x551 = INT8_MAX;
	int64_t x552 = -1LL;
	volatile int32_t t90 = 0;

	t90 = (x549==((x550-x551)*x552));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x553 = -1LL;
	uint16_t x554 = UINT16_MAX;
	static int16_t x556 = INT16_MIN;

	t91 = (x553==((x554-x555)*x556));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x577 = -1LL;

	t92 = (x577==((x578-x579)*x580));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x589 = INT16_MIN;
	int32_t x590 = -1;
	int16_t x591 = -1;
	int16_t x592 = INT16_MIN;
	int32_t t93 = 1;

	t93 = (x589==((x590-x591)*x592));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x597 = INT64_MIN;
	static uint8_t x598 = 14U;
	uint16_t x600 = 2749U;
	static volatile int32_t t94 = -2666;

	t94 = (x597==((x598-x599)*x600));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x601 = 251744469312256056LLU;
	int8_t x602 = INT8_MAX;
	volatile int16_t x604 = INT16_MIN;
	static volatile int32_t t95 = 6285580;

	t95 = (x601==((x602-x603)*x604));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x605 = INT32_MIN;
	int64_t x607 = -1LL;
	volatile int16_t x608 = -1;
	static int32_t t96 = -2104;

	t96 = (x605==((x606-x607)*x608));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x609 = 43;
	volatile uint64_t x610 = UINT64_MAX;
	volatile uint32_t x612 = 4U;
	volatile int32_t t97 = -427;

	t97 = (x609==((x610-x611)*x612));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x617 = 0;
	int32_t x619 = INT32_MIN;
	uint32_t x620 = 4008914U;
	volatile int32_t t98 = -1028435298;

	t98 = (x617==((x618-x619)*x620));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x621 = UINT8_MAX;
	uint16_t x622 = UINT16_MAX;
	int32_t x623 = -9507;
	int8_t x624 = INT8_MAX;
	volatile int32_t t99 = 24720;

	t99 = (x621==((x622-x623)*x624));

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

