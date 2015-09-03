#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = -5;
int16_t x36 = -1;
volatile uint64_t t3 = 840612LLU;
int8_t x73 = INT8_MAX;
int16_t x74 = -111;
static int32_t t6 = -1;
static uint8_t x84 = UINT8_MAX;
int64_t x94 = -2747659266355903LL;
int32_t x99 = -1;
int32_t x144 = INT32_MIN;
static int8_t x154 = INT8_MIN;
static int8_t x155 = 1;
uint32_t x156 = UINT32_MAX;
uint16_t x173 = 11U;
int8_t x188 = -1;
uint64_t x201 = UINT64_MAX;
uint16_t x222 = 226U;
static int8_t x227 = INT8_MIN;
static uint64_t x240 = 2133493149218424LLU;
static uint64_t x265 = UINT64_MAX;
int8_t x266 = INT8_MAX;
static int16_t x267 = INT16_MIN;
int32_t x268 = 24384;
static int16_t x276 = INT16_MAX;
volatile int16_t x277 = INT16_MAX;
volatile int32_t x285 = -1;
static int32_t x286 = INT32_MIN;
int64_t x301 = -11407005396629LL;
uint64_t x304 = UINT64_MAX;
int8_t x323 = 18;
uint16_t x332 = UINT16_MAX;
uint8_t x342 = 9U;
uint64_t x362 = 31135184LLU;
volatile uint64_t x401 = 332854570LLU;
int64_t x402 = 156LL;
volatile uint64_t t46 = 47370655LLU;
int16_t x410 = INT16_MIN;
int16_t x411 = INT16_MIN;
uint64_t t47 = 5737816LLU;
volatile int64_t x417 = 497215079977646449LL;
int32_t t49 = -106302;
int64_t x430 = 8114LL;
volatile int64_t t50 = 2887818815361624647LL;
int16_t x438 = INT16_MIN;
int64_t x451 = INT64_MIN;
volatile int32_t x461 = INT32_MIN;
int8_t x474 = INT8_MIN;
volatile int32_t t57 = -3989;
volatile int64_t x482 = -1420LL;
int16_t x483 = INT16_MIN;
int32_t t59 = 98;
int8_t x497 = 26;
volatile int32_t t60 = 31165;
static volatile uint8_t x503 = UINT8_MAX;
static volatile uint64_t t61 = 18LLU;
int64_t x512 = -1LL;
static volatile int8_t x521 = INT8_MIN;
int16_t x522 = INT16_MIN;
volatile int16_t x523 = INT16_MIN;
volatile int8_t x526 = 16;
int32_t t64 = 15912297;
volatile int32_t x529 = 42939189;
static volatile int32_t x531 = INT32_MIN;
volatile int64_t t65 = -2487680919036776869LL;
uint16_t x556 = 526U;
volatile uint64_t t66 = 319172885LLU;
int16_t x557 = -95;
uint32_t x560 = 37775U;
volatile int32_t t67 = -33026;
int16_t x569 = 3;
static uint16_t x571 = 41U;
uint64_t x573 = 3188LLU;
int16_t x574 = 31;
uint8_t x576 = 2U;
int16_t x577 = INT16_MIN;
int8_t x578 = INT8_MAX;
int32_t x587 = 2675849;
static int64_t t72 = 75703852773235326LL;
uint32_t x608 = UINT32_MAX;
volatile int32_t x609 = 63809;
static uint64_t x618 = 454386644460897747LLU;
uint16_t x629 = UINT16_MAX;
static volatile int16_t x636 = -5;
static volatile int8_t x640 = 3;
uint64_t x657 = 1023LLU;
int64_t t81 = -17LL;
volatile int64_t x669 = 213LL;
uint32_t x670 = 1488889218U;
static int16_t x676 = INT16_MIN;
volatile uint32_t x677 = UINT32_MAX;
volatile uint64_t x693 = UINT64_MAX;
static int32_t x698 = -1;
volatile int8_t x701 = -50;
volatile uint64_t x702 = 12593500954LLU;
uint8_t x714 = 2U;
static int32_t x715 = 1;
uint32_t x716 = 1744U;
volatile uint64_t x721 = UINT64_MAX;
int32_t x746 = -29988;
int32_t t96 = 206265;
static int16_t x771 = INT16_MIN;
int32_t t98 = 87;
int32_t x773 = -1;


void f0(void) {
	static uint64_t x14 = 6245807391287715339LLU;
	static uint32_t x15 = UINT32_MAX;
	volatile int8_t x16 = -1;
	volatile uint64_t t0 = 38734134LLU;

	t0 = (x13/(x14/(x15<=x16)));

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x33 = -348LL;
	int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	int64_t t1 = 365020384609323638LL;

	t1 = (x33/(x34/(x35<=x36)));

	if (t1 != 348LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x37 = 27132623959793LLU;
	int8_t x38 = INT8_MIN;
	int64_t x39 = -6389730LL;
	static int16_t x40 = -2;
	volatile uint64_t t2 = 132013256LLU;

	t2 = (x37/(x38/(x39<=x40)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x45 = INT8_MAX;
	uint64_t x46 = 193456LLU;
	uint64_t x47 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;

	t3 = (x45/(x46/(x47<=x48)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x53 = 63;
	static uint64_t x54 = 12389829657825LLU;
	static int32_t x55 = INT32_MIN;
	int8_t x56 = INT8_MIN;
	uint64_t t4 = 5238704LLU;

	t4 = (x53/(x54/(x55<=x56)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x69 = UINT8_MAX;
	static uint64_t x70 = 150421356070305LLU;
	int16_t x71 = INT16_MIN;
	int16_t x72 = INT16_MIN;
	volatile uint64_t t5 = 5675300371389864LLU;

	t5 = (x69/(x70/(x71<=x72)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x75 = 1U;
	uint64_t x76 = 2034922553581872LLU;

	t6 = (x73/(x74/(x75<=x76)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x81 = INT16_MIN;
	static volatile int32_t x82 = -1;
	int64_t x83 = -1LL;
	volatile int32_t t7 = 42;

	t7 = (x81/(x82/(x83<=x84)));

	if (t7 != 32768) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x85 = 1;
	int64_t x86 = INT64_MIN;
	int8_t x87 = -1;
	int16_t x88 = -1;
	static volatile int64_t t8 = -32389148LL;

	t8 = (x85/(x86/(x87<=x88)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x93 = 4500LLU;
	static volatile int8_t x95 = -38;
	uint8_t x96 = UINT8_MAX;
	uint64_t t9 = 35915LLU;

	t9 = (x93/(x94/(x95<=x96)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x97 = 11652429884101626LLU;
	int16_t x98 = INT16_MIN;
	static uint64_t x100 = UINT64_MAX;
	uint64_t t10 = 1529704594022LLU;

	t10 = (x97/(x98/(x99<=x100)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x113 = INT8_MAX;
	int64_t x114 = -1LL;
	int64_t x115 = INT64_MAX;
	static int64_t x116 = INT64_MAX;
	volatile int64_t t11 = 246LL;

	t11 = (x113/(x114/(x115<=x116)));

	if (t11 != -127LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x117 = 0U;
	int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MIN;
	int16_t x120 = -1;
	static volatile int32_t t12 = -3457830;

	t12 = (x117/(x118/(x119<=x120)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	static uint8_t x135 = 2U;
	uint8_t x136 = 5U;
	static int32_t t13 = -3088;

	t13 = (x133/(x134/(x135<=x136)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x141 = 0;
	static int32_t x142 = -316918895;
	int64_t x143 = INT64_MIN;
	static int32_t t14 = -4541049;

	t14 = (x141/(x142/(x143<=x144)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x145 = 220;
	uint8_t x146 = UINT8_MAX;
	volatile uint32_t x147 = 91U;
	int8_t x148 = -1;
	int32_t t15 = 2003;

	t15 = (x145/(x146/(x147<=x148)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x153 = -1;
	volatile int32_t t16 = -11301144;

	t16 = (x153/(x154/(x155<=x156)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x174 = 2U;
	static int32_t x175 = INT32_MIN;
	volatile int16_t x176 = INT16_MAX;
	static volatile uint32_t t17 = 3329U;

	t17 = (x173/(x174/(x175<=x176)));

	if (t17 != 5U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x177 = INT64_MAX;
	static uint64_t x178 = UINT64_MAX;
	static int8_t x179 = INT8_MIN;
	int32_t x180 = -1;
	uint64_t t18 = 2151346219351349631LLU;

	t18 = (x177/(x178/(x179<=x180)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x185 = 19;
	int16_t x186 = INT16_MIN;
	uint64_t x187 = 26250221559945386LLU;
	static volatile int32_t t19 = 66653873;

	t19 = (x185/(x186/(x187<=x188)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x202 = 5744U;
	int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t20 = 3530140LLU;

	t20 = (x201/(x202/(x203<=x204)));

	if (t20 != 3211480514225200LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x209 = 1U;
	volatile int16_t x210 = 1204;
	int64_t x211 = INT64_MIN;
	static int64_t x212 = 260385570651810148LL;
	int32_t t21 = 28;

	t21 = (x209/(x210/(x211<=x212)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x221 = 8083131LLU;
	int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MAX;
	static uint64_t t22 = 7560LLU;

	t22 = (x221/(x222/(x223<=x224)));

	if (t22 != 35766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x225 = UINT16_MAX;
	volatile uint8_t x226 = 10U;
	uint8_t x228 = 0U;
	int32_t t23 = -89608487;

	t23 = (x225/(x226/(x227<=x228)));

	if (t23 != 6553) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = -1;
	int64_t x239 = 3155740824745LL;
	volatile int32_t t24 = -10696764;

	t24 = (x237/(x238/(x239<=x240)));

	if (t24 != 32768) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x249 = -1;
	volatile int8_t x250 = INT8_MIN;
	static int32_t x251 = INT32_MIN;
	volatile int8_t x252 = INT8_MAX;
	volatile int32_t t25 = -5518;

	t25 = (x249/(x250/(x251<=x252)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x261 = 4U;
	volatile int64_t x262 = INT64_MIN;
	int32_t x263 = 14513;
	static uint64_t x264 = UINT64_MAX;
	volatile int64_t t26 = 8910660086811983LL;

	t26 = (x261/(x262/(x263<=x264)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t t27 = 80LLU;

	t27 = (x265/(x266/(x267<=x268)));

	if (t27 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x273 = INT16_MAX;
	static volatile int64_t x274 = INT64_MAX;
	int32_t x275 = -1;
	static int64_t t28 = 249LL;

	t28 = (x273/(x274/(x275<=x276)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x278 = INT64_MAX;
	uint32_t x279 = 3534U;
	static int16_t x280 = -3314;
	int64_t t29 = 300106748411144LL;

	t29 = (x277/(x278/(x279<=x280)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x287 = 3485U;
	int32_t x288 = INT32_MAX;
	volatile int32_t t30 = 1;

	t30 = (x285/(x286/(x287<=x288)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x289 = 3020U;
	int8_t x290 = INT8_MAX;
	uint32_t x291 = 362232U;
	int16_t x292 = -1;
	volatile uint32_t t31 = 74072U;

	t31 = (x289/(x290/(x291<=x292)));

	if (t31 != 23U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x293 = 58U;
	int8_t x294 = -37;
	int8_t x295 = -11;
	int64_t x296 = -1LL;
	volatile int32_t t32 = 11677216;

	t32 = (x293/(x294/(x295<=x296)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x302 = UINT16_MAX;
	volatile uint64_t x303 = 951772768232095LLU;
	int64_t t33 = -22123664012392LL;

	t33 = (x301/(x302/(x303<=x304)));

	if (t33 != -174059745LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x309 = -19;
	int16_t x310 = 14163;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = 10U;
	volatile int32_t t34 = 51273;

	t34 = (x309/(x310/(x311<=x312)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x317 = -7357103LL;
	static volatile uint32_t x318 = 921273U;
	volatile int32_t x319 = -8518952;
	int16_t x320 = INT16_MAX;
	volatile int64_t t35 = -1012LL;

	t35 = (x317/(x318/(x319<=x320)));

	if (t35 != -7LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x321 = INT8_MAX;
	volatile int8_t x322 = INT8_MIN;
	int32_t x324 = 103;
	static int32_t t36 = 1283876;

	t36 = (x321/(x322/(x323<=x324)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x329 = -9;
	uint16_t x330 = 1042U;
	volatile int64_t x331 = INT64_MIN;
	static int32_t t37 = 11062;

	t37 = (x329/(x330/(x331<=x332)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x337 = 21U;
	volatile int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	static uint16_t x340 = 7U;
	volatile int32_t t38 = -203;

	t38 = (x337/(x338/(x339<=x340)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x341 = -1;
	uint8_t x343 = UINT8_MAX;
	volatile uint16_t x344 = 16849U;
	volatile int32_t t39 = 7;

	t39 = (x341/(x342/(x343<=x344)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x349 = 1;
	int16_t x350 = INT16_MIN;
	uint16_t x351 = 130U;
	int16_t x352 = 158;
	volatile int32_t t40 = 7;

	t40 = (x349/(x350/(x351<=x352)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x353 = 7557715;
	uint64_t x354 = 7062078043477LLU;
	volatile int16_t x355 = -252;
	int64_t x356 = 14224682266LL;
	volatile uint64_t t41 = 9054502859254LLU;

	t41 = (x353/(x354/(x355<=x356)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x361 = -113567732302LL;
	uint64_t x363 = 1084142235883514076LLU;
	static int64_t x364 = INT64_MAX;
	static volatile uint64_t t42 = 12818173103785LLU;

	t42 = (x361/(x362/(x363<=x364)));

	if (t42 != 592472617478LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x369 = INT16_MIN;
	int64_t x370 = 2764200LL;
	int64_t x371 = INT64_MIN;
	static int8_t x372 = INT8_MIN;
	int64_t t43 = -3LL;

	t43 = (x369/(x370/(x371<=x372)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x373 = 73;
	int64_t x374 = -1LL;
	int64_t x375 = -990996LL;
	int8_t x376 = -1;
	static int64_t t44 = -454170802564LL;

	t44 = (x373/(x374/(x375<=x376)));

	if (t44 != -73LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x397 = 106945105791236054LLU;
	int32_t x398 = INT32_MIN;
	int8_t x399 = -1;
	int32_t x400 = 7889281;
	uint64_t t45 = 5891236LLU;

	t45 = (x397/(x398/(x399<=x400)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x403 = -180391086;
	static int32_t x404 = -1;

	t46 = (x401/(x402/(x403<=x404)));

	if (t46 != 2133683LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x409 = UINT64_MAX;
	uint16_t x412 = UINT16_MAX;

	t47 = (x409/(x410/(x411<=x412)));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x418 = INT32_MIN;
	volatile uint32_t x419 = 405537684U;
	volatile int8_t x420 = -45;
	volatile int64_t t48 = -3466748953559701LL;

	t48 = (x417/(x418/(x419<=x420)));

	if (t48 != -231533814LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x421 = INT8_MIN;
	int32_t x422 = -1;
	int32_t x423 = -264958731;
	int16_t x424 = INT16_MIN;

	t49 = (x421/(x422/(x423<=x424)));

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x429 = INT32_MIN;
	volatile int8_t x431 = INT8_MIN;
	static uint32_t x432 = UINT32_MAX;

	t50 = (x429/(x430/(x431<=x432)));

	if (t50 != -264663LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x437 = INT64_MIN;
	int64_t x439 = INT64_MIN;
	uint32_t x440 = 9U;
	volatile int64_t t51 = 1560301608LL;

	t51 = (x437/(x438/(x439<=x440)));

	if (t51 != 281474976710656LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x441 = -1;
	uint8_t x442 = 3U;
	int16_t x443 = INT16_MIN;
	volatile int8_t x444 = INT8_MAX;
	volatile int32_t t52 = 3885;

	t52 = (x441/(x442/(x443<=x444)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x449 = 910U;
	static int8_t x450 = 5;
	volatile int64_t x452 = -1LL;
	volatile int32_t t53 = 24594789;

	t53 = (x449/(x450/(x451<=x452)));

	if (t53 != 182) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x453 = INT16_MIN;
	uint32_t x454 = UINT32_MAX;
	uint64_t x455 = 10534056651LLU;
	int64_t x456 = INT64_MAX;
	uint32_t t54 = 112U;

	t54 = (x453/(x454/(x455<=x456)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x457 = INT32_MIN;
	volatile int32_t x458 = INT32_MIN;
	int16_t x459 = -1;
	static int8_t x460 = INT8_MAX;
	int32_t t55 = 15;

	t55 = (x457/(x458/(x459<=x460)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x462 = -4;
	int8_t x463 = INT8_MIN;
	static uint8_t x464 = 0U;
	int32_t t56 = 5870834;

	t56 = (x461/(x462/(x463<=x464)));

	if (t56 != 536870912) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x473 = -1;
	uint8_t x475 = 98U;
	int64_t x476 = 3131453LL;

	t57 = (x473/(x474/(x475<=x476)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x481 = -20218198372LL;
	static int32_t x484 = -1;
	volatile int64_t t58 = -975LL;

	t58 = (x481/(x482/(x483<=x484)));

	if (t58 != 14238167LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x493 = INT8_MIN;
	uint16_t x494 = 1U;
	uint16_t x495 = UINT16_MAX;
	int32_t x496 = 1004084;

	t59 = (x493/(x494/(x495<=x496)));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x498 = INT16_MIN;
	uint8_t x499 = 31U;
	uint32_t x500 = 347685U;

	t60 = (x497/(x498/(x499<=x500)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x501 = 339LLU;
	static volatile int64_t x502 = -1LL;
	volatile uint32_t x504 = UINT32_MAX;

	t61 = (x501/(x502/(x503<=x504)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x509 = -205854;
	static int8_t x510 = INT8_MAX;
	static int64_t x511 = -1LL;
	static int32_t t62 = -235788437;

	t62 = (x509/(x510/(x511<=x512)));

	if (t62 != -1620) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x524 = INT8_MIN;
	int32_t t63 = -18;

	t63 = (x521/(x522/(x523<=x524)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x525 = 23;
	static int8_t x527 = INT8_MAX;
	uint32_t x528 = UINT32_MAX;

	t64 = (x525/(x526/(x527<=x528)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x530 = INT64_MIN;
	static uint8_t x532 = UINT8_MAX;

	t65 = (x529/(x530/(x531<=x532)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x553 = 3065658536515774304LLU;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = -1;

	t66 = (x553/(x554/(x555<=x556)));

	if (t66 != 713779250LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x558 = -29;
	static int16_t x559 = INT16_MAX;

	t67 = (x557/(x558/(x559<=x560)));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x565 = 9133523893435451507LLU;
	static int32_t x566 = INT32_MIN;
	int16_t x567 = -16;
	uint8_t x568 = UINT8_MAX;
	static volatile uint64_t t68 = 1426LLU;

	t68 = (x565/(x566/(x567<=x568)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x570 = UINT8_MAX;
	static int8_t x572 = INT8_MAX;
	static int32_t t69 = 966;

	t69 = (x569/(x570/(x571<=x572)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x575 = INT8_MIN;
	uint64_t t70 = 603282121744988692LLU;

	t70 = (x573/(x574/(x575<=x576)));

	if (t70 != 102LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x579 = 875LLU;
	int16_t x580 = -114;
	volatile int32_t t71 = 3;

	t71 = (x577/(x578/(x579<=x580)));

	if (t71 != -258) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x585 = -2LL;
	static int64_t x586 = -1LL;
	uint64_t x588 = UINT64_MAX;

	t72 = (x585/(x586/(x587<=x588)));

	if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x605 = 673;
	volatile int8_t x606 = INT8_MIN;
	int16_t x607 = 6;
	int32_t t73 = 1486;

	t73 = (x605/(x606/(x607<=x608)));

	if (t73 != -5) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x610 = INT8_MAX;
	int64_t x611 = 308LL;
	volatile uint32_t x612 = 28434112U;
	volatile int32_t t74 = 30146;

	t74 = (x609/(x610/(x611<=x612)));

	if (t74 != 502) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x617 = INT16_MAX;
	int8_t x619 = -1;
	int32_t x620 = INT32_MAX;
	volatile uint64_t t75 = 38903811903420LLU;

	t75 = (x617/(x618/(x619<=x620)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x621 = -14;
	int16_t x622 = -1;
	int64_t x623 = 5LL;
	uint16_t x624 = 225U;
	int32_t t76 = 4;

	t76 = (x621/(x622/(x623<=x624)));

	if (t76 != 14) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x630 = INT32_MAX;
	int8_t x631 = 9;
	static uint8_t x632 = 34U;
	int32_t t77 = 486512226;

	t77 = (x629/(x630/(x631<=x632)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x633 = INT16_MIN;
	static uint64_t x634 = UINT64_MAX;
	uint32_t x635 = 75898U;
	volatile uint64_t t78 = 622LLU;

	t78 = (x633/(x634/(x635<=x636)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x637 = 118;
	int8_t x638 = INT8_MIN;
	int32_t x639 = -1;
	volatile int32_t t79 = -41418;

	t79 = (x637/(x638/(x639<=x640)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x658 = -1;
	volatile uint32_t x659 = 7U;
	int8_t x660 = INT8_MAX;
	volatile uint64_t t80 = 56007LLU;

	t80 = (x657/(x658/(x659<=x660)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x665 = -3LL;
	int16_t x666 = -1;
	int32_t x667 = -1;
	static int32_t x668 = INT32_MAX;

	t81 = (x665/(x666/(x667<=x668)));

	if (t81 != 3LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x671 = -130674401618970287LL;
	volatile int32_t x672 = -967;
	int64_t t82 = 49924466818917265LL;

	t82 = (x669/(x670/(x671<=x672)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x673 = 95;
	uint16_t x674 = 12803U;
	int64_t x675 = INT64_MIN;
	static int32_t t83 = -33;

	t83 = (x673/(x674/(x675<=x676)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x678 = -1LL;
	int8_t x679 = 3;
	volatile uint16_t x680 = 1482U;
	int64_t t84 = 498910068241528LL;

	t84 = (x677/(x678/(x679<=x680)));

	if (t84 != -4294967295LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x681 = 226U;
	volatile int64_t x682 = INT64_MIN;
	int64_t x683 = -495033304LL;
	uint8_t x684 = 24U;
	volatile int64_t t85 = -17595524636009374LL;

	t85 = (x681/(x682/(x683<=x684)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x689 = INT16_MIN;
	static uint8_t x690 = 1U;
	static volatile uint8_t x691 = UINT8_MAX;
	int32_t x692 = 509638414;
	int32_t t86 = 1;

	t86 = (x689/(x690/(x691<=x692)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x694 = INT64_MIN;
	int64_t x695 = -235409767482LL;
	int32_t x696 = INT32_MIN;
	static uint64_t t87 = 6633776272135LLU;

	t87 = (x693/(x694/(x695<=x696)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x697 = INT8_MIN;
	int32_t x699 = INT32_MIN;
	volatile int32_t x700 = INT32_MIN;
	int32_t t88 = -29692;

	t88 = (x697/(x698/(x699<=x700)));

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x703 = 35U;
	uint64_t x704 = UINT64_MAX;
	uint64_t t89 = 59LLU;

	t89 = (x701/(x702/(x703<=x704)));

	if (t89 != 1464782838LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x705 = 4U;
	volatile int8_t x706 = -1;
	volatile int32_t x707 = INT32_MIN;
	uint64_t x708 = UINT64_MAX;
	static volatile int32_t t90 = 924347;

	t90 = (x705/(x706/(x707<=x708)));

	if (t90 != -4) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x713 = 23U;
	volatile int32_t t91 = 221534;

	t91 = (x713/(x714/(x715<=x716)));

	if (t91 != 11) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x717 = UINT64_MAX;
	uint16_t x718 = UINT16_MAX;
	static uint8_t x719 = 14U;
	static volatile uint16_t x720 = UINT16_MAX;
	uint64_t t92 = 31379826475248921LLU;

	t92 = (x717/(x718/(x719<=x720)));

	if (t92 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x722 = -1;
	int64_t x723 = -39423921405LL;
	int8_t x724 = INT8_MIN;
	volatile uint64_t t93 = 1LLU;

	t93 = (x721/(x722/(x723<=x724)));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x741 = -1;
	int16_t x742 = INT16_MAX;
	volatile int32_t x743 = INT32_MIN;
	uint64_t x744 = UINT64_MAX;
	volatile int32_t t94 = 13823;

	t94 = (x741/(x742/(x743<=x744)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x745 = INT64_MAX;
	volatile int16_t x747 = 15;
	uint16_t x748 = UINT16_MAX;
	volatile int64_t t95 = -2358169921887649LL;

	t95 = (x745/(x746/(x747<=x748)));

	if (t95 != -307568762066652LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x757 = INT16_MIN;
	int32_t x758 = INT32_MIN;
	int8_t x759 = INT8_MAX;
	int32_t x760 = INT32_MAX;

	t96 = (x757/(x758/(x759<=x760)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x761 = INT32_MIN;
	uint64_t x762 = 18270LLU;
	uint16_t x763 = 5U;
	uint64_t x764 = 185LLU;
	volatile uint64_t t97 = 6104959275903091138LLU;

	t97 = (x761/(x762/(x763<=x764)));

	if (t97 != 1009674005011607LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x769 = 38;
	static int8_t x770 = INT8_MIN;
	volatile int8_t x772 = INT8_MAX;

	t98 = (x769/(x770/(x771<=x772)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x774 = INT64_MAX;
	uint8_t x775 = 2U;
	static volatile uint32_t x776 = UINT32_MAX;
	int64_t t99 = -148106703LL;

	t99 = (x773/(x774/(x775<=x776)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

