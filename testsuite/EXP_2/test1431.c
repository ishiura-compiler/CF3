#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x6 = UINT16_MAX;
volatile uint32_t x8 = UINT32_MAX;
int8_t x16 = INT8_MIN;
static volatile int16_t x23 = INT16_MIN;
volatile uint64_t t3 = 351238LLU;
uint32_t x29 = 1U;
volatile int16_t x32 = INT16_MAX;
uint64_t x33 = UINT64_MAX;
static uint64_t x53 = 91LLU;
uint32_t x55 = 1U;
uint64_t x59 = 12312LLU;
volatile uint32_t t12 = 136052U;
int64_t x100 = INT64_MIN;
volatile int64_t t13 = -88471893755582325LL;
volatile uint32_t t16 = 13446U;
uint32_t x124 = 12550185U;
static uint8_t x165 = 15U;
int16_t x182 = INT16_MAX;
static volatile int32_t x183 = -1;
uint64_t x189 = 320941549551LLU;
int8_t x190 = -1;
uint64_t t25 = 1516089008704763762LLU;
volatile int32_t x207 = INT32_MAX;
int32_t t26 = -230;
volatile int64_t x209 = 2993569884016996035LL;
uint32_t t28 = 1104U;
static int64_t x223 = 12421514LL;
uint8_t x224 = UINT8_MAX;
int32_t x226 = INT32_MIN;
volatile int64_t x242 = INT64_MIN;
uint8_t x244 = UINT8_MAX;
volatile int32_t t31 = -7;
static uint64_t t33 = 22294334349846531LLU;
int16_t x272 = INT16_MIN;
static int8_t x279 = INT8_MAX;
static volatile int8_t x280 = INT8_MAX;
int32_t t35 = 1;
int64_t x283 = INT64_MIN;
volatile int32_t t36 = 25;
int32_t x287 = INT32_MIN;
static int32_t x288 = INT32_MAX;
uint8_t x289 = 3U;
int16_t x290 = -1;
volatile int8_t x299 = -4;
uint64_t x303 = UINT64_MAX;
uint32_t x309 = 412616628U;
int8_t x322 = INT8_MAX;
int64_t x325 = 31320399LL;
uint8_t x333 = UINT8_MAX;
static int32_t x335 = INT32_MIN;
int64_t x339 = 77495655291186166LL;
static volatile uint16_t x342 = 15U;
volatile int64_t x346 = INT64_MIN;
uint64_t t48 = 598221986904290101LLU;
int64_t x365 = 7599294979732015LL;
int64_t t49 = -38LL;
int32_t x391 = -1;
int64_t t51 = -45289888351LL;
uint64_t x403 = UINT64_MAX;
volatile int32_t x404 = -1;
volatile int64_t x413 = 1520358367454LL;
static int16_t x416 = INT16_MAX;
uint64_t x417 = 95073944717821LLU;
int32_t x421 = INT32_MAX;
int32_t x428 = -1021;
static int32_t t57 = 13;
static int32_t x439 = 2;
int32_t t63 = -28018;
uint16_t x494 = 5U;
uint32_t x496 = UINT32_MAX;
volatile uint32_t t64 = 3158U;
uint32_t x498 = UINT32_MAX;
static int8_t x499 = INT8_MIN;
int32_t x510 = -1;
int32_t x511 = -1;
int64_t t67 = 2297162746759314LL;
int32_t x521 = 25;
int16_t x542 = -1;
static uint8_t x552 = 4U;
volatile int64_t x559 = -1LL;
int64_t x578 = INT64_MIN;
uint32_t x590 = 16U;
volatile int8_t x600 = -1;
int8_t x601 = INT8_MAX;
static uint32_t x604 = 324383U;
int32_t x627 = -1;
int64_t x632 = INT64_MIN;
int16_t x635 = INT16_MIN;
static int32_t x638 = INT32_MIN;
static uint8_t x640 = 1U;
int8_t x642 = -1;
int16_t x649 = INT16_MAX;
int8_t x650 = 29;
static uint16_t x678 = 31U;
int8_t x679 = -23;
volatile int64_t x684 = -91396636430405047LL;
uint32_t t91 = 390U;
int8_t x701 = INT8_MAX;
int32_t x723 = -1;
static volatile uint16_t x764 = 30876U;
uint32_t x785 = 451753U;


void f0(void) {
	volatile uint32_t x1 = 998898U;
	int32_t x2 = 77284;
	static volatile int8_t x3 = -1;
	volatile int32_t x4 = INT32_MIN;
	volatile uint32_t t0 = 63756U;

	t0 = ((x1>>(x2<x3))+x4);

	if (t0 != 2148482546U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 2U;
	int16_t x7 = INT16_MAX;
	volatile uint32_t t1 = 311668483U;

	t1 = ((x5>>(x6<x7))+x8);

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 25675708U;
	static volatile int16_t x14 = 1;
	int32_t x15 = -1;
	uint32_t t2 = 71661020U;

	t2 = ((x13>>(x14<x15))+x16);

	if (t2 != 25675580U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x21 = UINT16_MAX;
	static int64_t x22 = -1LL;
	static uint64_t x24 = 2028271876LLU;

	t3 = ((x21>>(x22<x23))+x24);

	if (t3 != 2028337411LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x30 = INT64_MIN;
	int64_t x31 = INT64_MIN;
	uint32_t t4 = 336099U;

	t4 = ((x29>>(x30<x31))+x32);

	if (t4 != 32768U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x34 = -6325;
	volatile uint64_t x35 = 4885945010012729LLU;
	int64_t x36 = INT64_MAX;
	volatile uint64_t t5 = 7126513630LLU;

	t5 = ((x33>>(x34<x35))+x36);

	if (t5 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x54 = 44U;
	int64_t x56 = INT64_MIN;
	uint64_t t6 = 13378104LLU;

	t6 = ((x53>>(x54<x55))+x56);

	if (t6 != 9223372036854775899LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x57 = 1259953469LLU;
	int8_t x58 = 0;
	volatile uint32_t x60 = 1385130U;
	volatile uint64_t t7 = 5413041147385912LLU;

	t7 = ((x57>>(x58<x59))+x60);

	if (t7 != 631361864LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x65 = INT64_MAX;
	int8_t x66 = INT8_MIN;
	static int32_t x67 = 1139382;
	uint64_t x68 = 210054108674977LLU;
	uint64_t t8 = 33092214492049022LLU;

	t8 = ((x65>>(x66<x67))+x68);

	if (t8 != 4611896072536062880LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x69 = 54;
	int64_t x70 = INT64_MAX;
	int32_t x71 = 90;
	uint8_t x72 = 0U;
	int32_t t9 = -1;

	t9 = ((x69>>(x70<x71))+x72);

	if (t9 != 54) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x73 = 6U;
	int16_t x74 = -1;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = -1LL;
	int64_t t10 = -57LL;

	t10 = ((x73>>(x74<x75))+x76);

	if (t10 != 2LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x81 = 11904U;
	uint64_t x82 = 16072387738LLU;
	int16_t x83 = INT16_MIN;
	int8_t x84 = -1;
	int32_t t11 = 13445;

	t11 = ((x81>>(x82<x83))+x84);

	if (t11 != 5951) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x89 = UINT32_MAX;
	uint16_t x90 = UINT16_MAX;
	uint64_t x91 = UINT64_MAX;
	static uint32_t x92 = 272U;

	t12 = ((x89>>(x90<x91))+x92);

	if (t12 != 2147483919U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x97 = UINT16_MAX;
	int64_t x98 = -1LL;
	int64_t x99 = -1LL;

	t13 = ((x97>>(x98<x99))+x100);

	if (t13 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x101 = INT32_MAX;
	volatile int32_t x102 = 59;
	static int32_t x103 = INT32_MAX;
	uint16_t x104 = 5249U;
	int32_t t14 = 474716035;

	t14 = ((x101>>(x102<x103))+x104);

	if (t14 != 1073747072) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x109 = INT32_MAX;
	int64_t x110 = -63470405331507746LL;
	volatile uint16_t x111 = 33U;
	static uint32_t x112 = UINT32_MAX;
	volatile uint32_t t15 = 60714583U;

	t15 = ((x109>>(x110<x111))+x112);

	if (t15 != 1073741822U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	int8_t x116 = -28;

	t16 = ((x113>>(x114<x115))+x116);

	if (t16 != 2147483619U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x121 = UINT64_MAX;
	int16_t x122 = -1216;
	static volatile uint8_t x123 = UINT8_MAX;
	static uint64_t t17 = 2779290990359936LLU;

	t17 = ((x121>>(x122<x123))+x124);

	if (t17 != 9223372036867325992LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x129 = UINT32_MAX;
	static volatile int8_t x130 = INT8_MIN;
	int16_t x131 = -14;
	int8_t x132 = -55;
	uint32_t t18 = 0U;

	t18 = ((x129>>(x130<x131))+x132);

	if (t18 != 2147483592U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x141 = 27LLU;
	uint8_t x142 = 11U;
	int64_t x143 = INT64_MAX;
	uint16_t x144 = UINT16_MAX;
	volatile uint64_t t19 = 8750524873346LLU;

	t19 = ((x141>>(x142<x143))+x144);

	if (t19 != 65548LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x145 = INT8_MAX;
	int64_t x146 = -11LL;
	int64_t x147 = -1LL;
	int16_t x148 = 0;
	volatile int32_t t20 = 12193544;

	t20 = ((x145>>(x146<x147))+x148);

	if (t20 != 63) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x166 = 480697178009174032LLU;
	uint16_t x167 = UINT16_MAX;
	volatile uint8_t x168 = 15U;
	volatile int32_t t21 = -4224;

	t21 = ((x165>>(x166<x167))+x168);

	if (t21 != 30) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x169 = 18988U;
	int32_t x170 = INT32_MAX;
	int8_t x171 = 0;
	volatile int16_t x172 = INT16_MAX;
	volatile uint32_t t22 = 21681U;

	t22 = ((x169>>(x170<x171))+x172);

	if (t22 != 51755U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x173 = 0U;
	int32_t x174 = 0;
	volatile int8_t x175 = -1;
	volatile uint64_t x176 = UINT64_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = ((x173>>(x174<x175))+x176);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x181 = UINT16_MAX;
	int8_t x184 = -7;
	volatile int32_t t24 = 185913;

	t24 = ((x181>>(x182<x183))+x184);

	if (t24 != 65528) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x191 = 395610396919756LLU;
	int16_t x192 = INT16_MIN;

	t25 = ((x189>>(x190<x191))+x192);

	if (t25 != 320941516783LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x205 = INT32_MAX;
	int16_t x206 = INT16_MAX;
	int32_t x208 = INT32_MIN;

	t26 = ((x205>>(x206<x207))+x208);

	if (t26 != -1073741825) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x210 = -96056551;
	uint16_t x211 = 3304U;
	uint32_t x212 = UINT32_MAX;
	static int64_t t27 = 96215602349324LL;

	t27 = ((x209>>(x210<x211))+x212);

	if (t27 != 1496784946303465312LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x217 = 24U;
	uint32_t x218 = 0U;
	int32_t x219 = 958;
	uint32_t x220 = 3U;

	t28 = ((x217>>(x218<x219))+x220);

	if (t28 != 15U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x221 = 1U;
	static uint16_t x222 = 17850U;
	volatile int32_t t29 = 56747040;

	t29 = ((x221>>(x222<x223))+x224);

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x225 = 0U;
	uint32_t x227 = 113U;
	volatile int8_t x228 = INT8_MAX;
	volatile int32_t t30 = -755;

	t30 = ((x225>>(x226<x227))+x228);

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x241 = INT16_MAX;
	volatile uint8_t x243 = UINT8_MAX;

	t31 = ((x241>>(x242<x243))+x244);

	if (t31 != 16638) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x245 = UINT64_MAX;
	int8_t x246 = 4;
	int32_t x247 = INT32_MIN;
	static uint8_t x248 = 2U;
	static uint64_t t32 = 20674LLU;

	t32 = ((x245>>(x246<x247))+x248);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x253 = 361468LLU;
	uint32_t x254 = UINT32_MAX;
	static int32_t x255 = INT32_MIN;
	static uint8_t x256 = 0U;

	t33 = ((x253>>(x254<x255))+x256);

	if (t33 != 361468LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x269 = 19825584U;
	int32_t x270 = 64;
	uint8_t x271 = 64U;
	uint32_t t34 = 7612U;

	t34 = ((x269>>(x270<x271))+x272);

	if (t34 != 19792816U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x277 = 9U;
	static uint8_t x278 = 1U;

	t35 = ((x277>>(x278<x279))+x280);

	if (t35 != 131) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x281 = 4U;
	uint32_t x282 = UINT32_MAX;
	int32_t x284 = INT32_MIN;

	t36 = ((x281>>(x282<x283))+x284);

	if (t36 != -2147483644) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x285 = 117856U;
	int32_t x286 = INT32_MIN;
	volatile uint32_t t37 = 1U;

	t37 = ((x285>>(x286<x287))+x288);

	if (t37 != 2147601503U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x291 = 85;
	static int32_t x292 = 0;
	int32_t t38 = 0;

	t38 = ((x289>>(x290<x291))+x292);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x297 = UINT16_MAX;
	volatile uint8_t x298 = UINT8_MAX;
	uint16_t x300 = 14610U;
	int32_t t39 = 561129238;

	t39 = ((x297>>(x298<x299))+x300);

	if (t39 != 80145) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x301 = 10U;
	uint64_t x302 = 508718LLU;
	volatile int8_t x304 = INT8_MIN;
	int32_t t40 = -990264;

	t40 = ((x301>>(x302<x303))+x304);

	if (t40 != -123) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x310 = -1;
	int64_t x311 = -71860650089LL;
	static volatile int64_t x312 = INT64_MIN;
	int64_t t41 = 56964229LL;

	t41 = ((x309>>(x310<x311))+x312);

	if (t41 != -9223372036442159180LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x321 = 475443991U;
	volatile int32_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	static volatile uint32_t t42 = 70U;

	t42 = ((x321>>(x322<x323))+x324);

	if (t42 != 475443990U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x326 = -8;
	volatile int8_t x327 = 0;
	static int64_t x328 = -12293639604LL;
	int64_t t43 = 32421581499256307LL;

	t43 = ((x325>>(x326<x327))+x328);

	if (t43 != -12277979405LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x334 = UINT64_MAX;
	int8_t x336 = INT8_MIN;
	volatile int32_t t44 = -29;

	t44 = ((x333>>(x334<x335))+x336);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x337 = INT8_MAX;
	int8_t x338 = -1;
	int32_t x340 = INT32_MIN;
	int32_t t45 = 713;

	t45 = ((x337>>(x338<x339))+x340);

	if (t45 != -2147483585) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x343 = 5;
	int16_t x344 = -8048;
	static volatile uint64_t t46 = 95776909084329LLU;

	t46 = ((x341>>(x342<x343))+x344);

	if (t46 != 18446744073709543567LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x345 = 4099U;
	int64_t x347 = -104919LL;
	volatile int32_t x348 = 378190;
	static uint32_t t47 = 1574787U;

	t47 = ((x345>>(x346<x347))+x348);

	if (t47 != 380239U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x357 = 28248214609469342LLU;
	int32_t x358 = INT32_MIN;
	int16_t x359 = -1;
	volatile int16_t x360 = 125;

	t48 = ((x357>>(x358<x359))+x360);

	if (t48 != 14124107304734796LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x366 = -1;
	int32_t x367 = 2101748;
	int16_t x368 = INT16_MIN;

	t49 = ((x365>>(x366<x367))+x368);

	if (t49 != 3799647489833239LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x373 = 8U;
	uint16_t x374 = 229U;
	volatile uint8_t x375 = UINT8_MAX;
	int64_t x376 = INT64_MIN;
	int64_t t50 = -80032533LL;

	t50 = ((x373>>(x374<x375))+x376);

	if (t50 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x389 = INT64_MAX;
	static uint8_t x390 = UINT8_MAX;
	int64_t x392 = -2423401LL;

	t51 = ((x389>>(x390<x391))+x392);

	if (t51 != 9223372036852352406LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x401 = UINT32_MAX;
	volatile uint16_t x402 = 1809U;
	static volatile uint32_t t52 = 2U;

	t52 = ((x401>>(x402<x403))+x404);

	if (t52 != 2147483646U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x414 = -1;
	uint32_t x415 = 216U;
	static volatile int64_t t53 = -154855LL;

	t53 = ((x413>>(x414<x415))+x416);

	if (t53 != 1520358400221LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x418 = INT64_MIN;
	int8_t x419 = INT8_MAX;
	volatile int32_t x420 = -195;
	uint64_t t54 = 923345136558863LLU;

	t54 = ((x417>>(x418<x419))+x420);

	if (t54 != 47536972358715LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x422 = 8;
	uint16_t x423 = 2693U;
	static volatile int16_t x424 = -1;
	static volatile int32_t t55 = -706264;

	t55 = ((x421>>(x422<x423))+x424);

	if (t55 != 1073741822) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x425 = 151U;
	static int64_t x426 = 126LL;
	uint16_t x427 = UINT16_MAX;
	int32_t t56 = -50;

	t56 = ((x425>>(x426<x427))+x428);

	if (t56 != -946) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x429 = 94U;
	int32_t x430 = -13464;
	int32_t x431 = INT32_MAX;
	volatile int8_t x432 = -11;

	t57 = ((x429>>(x430<x431))+x432);

	if (t57 != 36) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x433 = UINT32_MAX;
	volatile int16_t x434 = INT16_MAX;
	int8_t x435 = 0;
	volatile uint16_t x436 = 616U;
	static uint32_t t58 = 416292U;

	t58 = ((x433>>(x434<x435))+x436);

	if (t58 != 615U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x437 = 759U;
	int64_t x438 = 282184498107LL;
	int8_t x440 = -1;
	volatile int32_t t59 = 24661;

	t59 = ((x437>>(x438<x439))+x440);

	if (t59 != 758) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x461 = 12;
	int8_t x462 = 2;
	int64_t x463 = 15128LL;
	volatile uint64_t x464 = UINT64_MAX;
	uint64_t t60 = 21460455281422779LLU;

	t60 = ((x461>>(x462<x463))+x464);

	if (t60 != 5LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x473 = INT64_MAX;
	int16_t x474 = INT16_MAX;
	int64_t x475 = 82612737224488096LL;
	static uint64_t x476 = 544739LLU;
	volatile uint64_t t61 = 12354533328437LLU;

	t61 = ((x473>>(x474<x475))+x476);

	if (t61 != 4611686018427932642LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x477 = 1U;
	volatile int8_t x478 = INT8_MAX;
	int64_t x479 = -1LL;
	int32_t x480 = INT32_MIN;
	volatile int32_t t62 = -91;

	t62 = ((x477>>(x478<x479))+x480);

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x485 = INT8_MAX;
	int32_t x486 = 32581193;
	volatile int16_t x487 = INT16_MAX;
	int16_t x488 = INT16_MIN;

	t63 = ((x485>>(x486<x487))+x488);

	if (t63 != -32641) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x493 = UINT8_MAX;
	volatile int64_t x495 = -1LL;

	t64 = ((x493>>(x494<x495))+x496);

	if (t64 != 254U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x497 = 12836658LL;
	int8_t x500 = -1;
	static int64_t t65 = 29280680114043080LL;

	t65 = ((x497>>(x498<x499))+x500);

	if (t65 != 12836657LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x505 = 2138761500U;
	volatile int8_t x506 = INT8_MAX;
	static int32_t x507 = 2495;
	uint8_t x508 = 0U;
	volatile uint32_t t66 = 37064U;

	t66 = ((x505>>(x506<x507))+x508);

	if (t66 != 1069380750U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x509 = UINT16_MAX;
	int64_t x512 = 678887LL;

	t67 = ((x509>>(x510<x511))+x512);

	if (t67 != 744422LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x522 = INT32_MIN;
	int64_t x523 = 321352832LL;
	int64_t x524 = 225339LL;
	static int64_t t68 = 177LL;

	t68 = ((x521>>(x522<x523))+x524);

	if (t68 != 225351LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x529 = 3U;
	volatile int32_t x530 = INT32_MAX;
	int16_t x531 = -1546;
	uint64_t x532 = 1687LLU;
	volatile uint64_t t69 = 417LLU;

	t69 = ((x529>>(x530<x531))+x532);

	if (t69 != 1690LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x541 = 23U;
	volatile int64_t x543 = -1LL;
	int16_t x544 = -1;
	int32_t t70 = 8228;

	t70 = ((x541>>(x542<x543))+x544);

	if (t70 != 22) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x549 = 4378504;
	volatile int8_t x550 = 1;
	int32_t x551 = 2494696;
	volatile int32_t t71 = 320418;

	t71 = ((x549>>(x550<x551))+x552);

	if (t71 != 2189256) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x553 = INT16_MAX;
	volatile int8_t x554 = INT8_MIN;
	int16_t x555 = INT16_MIN;
	uint32_t x556 = 6U;
	volatile uint32_t t72 = 12810267U;

	t72 = ((x553>>(x554<x555))+x556);

	if (t72 != 32773U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x557 = 31200863LLU;
	int16_t x558 = -382;
	int32_t x560 = INT32_MIN;
	volatile uint64_t t73 = 551592423827252LLU;

	t73 = ((x557>>(x558<x559))+x560);

	if (t73 != 18446744071577668399LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x561 = 125U;
	volatile uint64_t x562 = 1864323977087526LLU;
	int8_t x563 = -1;
	int16_t x564 = INT16_MAX;
	int32_t t74 = -132;

	t74 = ((x561>>(x562<x563))+x564);

	if (t74 != 32829) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x565 = 348430994962030LLU;
	uint32_t x566 = 96U;
	int16_t x567 = INT16_MAX;
	int64_t x568 = INT64_MIN;
	uint64_t t75 = 29682463807LLU;

	t75 = ((x565>>(x566<x567))+x568);

	if (t75 != 9223546252352256823LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x569 = UINT16_MAX;
	static volatile uint32_t x570 = 661181508U;
	int64_t x571 = -723051003032679LL;
	int16_t x572 = INT16_MIN;
	volatile int32_t t76 = -2;

	t76 = ((x569>>(x570<x571))+x572);

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x577 = 1776U;
	int16_t x579 = -24;
	uint8_t x580 = 7U;
	uint32_t t77 = 1643U;

	t77 = ((x577>>(x578<x579))+x580);

	if (t77 != 895U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x589 = 2U;
	uint32_t x591 = 82U;
	volatile uint64_t x592 = UINT64_MAX;
	static volatile uint64_t t78 = 983648561200937202LLU;

	t78 = ((x589>>(x590<x591))+x592);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x597 = INT64_MAX;
	uint16_t x598 = 8U;
	int8_t x599 = INT8_MIN;
	int64_t t79 = -424727666LL;

	t79 = ((x597>>(x598<x599))+x600);

	if (t79 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x602 = INT8_MIN;
	uint8_t x603 = 0U;
	volatile uint32_t t80 = 11800U;

	t80 = ((x601>>(x602<x603))+x604);

	if (t80 != 324446U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x613 = INT16_MAX;
	static int64_t x614 = INT64_MIN;
	volatile uint32_t x615 = 186288126U;
	static volatile int64_t x616 = -830312974LL;
	volatile int64_t t81 = 27515887LL;

	t81 = ((x613>>(x614<x615))+x616);

	if (t81 != -830296591LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x625 = 171;
	volatile uint16_t x626 = 16U;
	uint64_t x628 = UINT64_MAX;
	volatile uint64_t t82 = 913238494173LLU;

	t82 = ((x625>>(x626<x627))+x628);

	if (t82 != 170LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x629 = 2489854U;
	static volatile int32_t x630 = INT32_MAX;
	uint8_t x631 = 2U;
	int64_t t83 = 10LL;

	t83 = ((x629>>(x630<x631))+x632);

	if (t83 != -9223372036852285954LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x633 = 36LLU;
	int32_t x634 = 20754482;
	static uint32_t x636 = 11U;
	uint64_t t84 = 876323775282839629LLU;

	t84 = ((x633>>(x634<x635))+x636);

	if (t84 != 47LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x637 = UINT16_MAX;
	uint64_t x639 = UINT64_MAX;
	static volatile int32_t t85 = -127861;

	t85 = ((x637>>(x638<x639))+x640);

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x641 = 9;
	int8_t x643 = INT8_MIN;
	volatile int16_t x644 = INT16_MAX;
	static volatile int32_t t86 = 236906657;

	t86 = ((x641>>(x642<x643))+x644);

	if (t86 != 32776) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x651 = UINT16_MAX;
	static volatile uint32_t x652 = 18U;
	static uint32_t t87 = 126848U;

	t87 = ((x649>>(x650<x651))+x652);

	if (t87 != 16401U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x657 = 2979;
	uint32_t x658 = 8762U;
	static int8_t x659 = INT8_MAX;
	int16_t x660 = -11;
	volatile int32_t t88 = 1;

	t88 = ((x657>>(x658<x659))+x660);

	if (t88 != 2968) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x677 = 769U;
	int8_t x680 = INT8_MAX;
	int32_t t89 = -259418;

	t89 = ((x677>>(x678<x679))+x680);

	if (t89 != 896) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x681 = 626;
	int8_t x682 = INT8_MIN;
	uint8_t x683 = 13U;
	volatile int64_t t90 = 249289LL;

	t90 = ((x681>>(x682<x683))+x684);

	if (t90 != -91396636430404734LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x697 = UINT32_MAX;
	int64_t x698 = -1LL;
	uint32_t x699 = UINT32_MAX;
	uint16_t x700 = 5889U;

	t91 = ((x697>>(x698<x699))+x700);

	if (t91 != 2147489536U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x702 = 12550U;
	uint32_t x703 = UINT32_MAX;
	uint16_t x704 = UINT16_MAX;
	int32_t t92 = -400998;

	t92 = ((x701>>(x702<x703))+x704);

	if (t92 != 65598) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x705 = 0;
	volatile uint64_t x706 = 112944605211901LLU;
	static uint32_t x707 = 30914U;
	int16_t x708 = -8787;
	int32_t t93 = 13155657;

	t93 = ((x705>>(x706<x707))+x708);

	if (t93 != -8787) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x721 = 7;
	int32_t x722 = 10537;
	uint16_t x724 = 181U;
	static volatile int32_t t94 = -1;

	t94 = ((x721>>(x722<x723))+x724);

	if (t94 != 188) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x725 = 11177416;
	int64_t x726 = INT64_MIN;
	volatile uint32_t x727 = 704916U;
	volatile int32_t x728 = 14;
	volatile int32_t t95 = -10200;

	t95 = ((x725>>(x726<x727))+x728);

	if (t95 != 5588722) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x761 = UINT16_MAX;
	int8_t x762 = INT8_MIN;
	volatile int32_t x763 = INT32_MIN;
	static int32_t t96 = 1313;

	t96 = ((x761>>(x762<x763))+x764);

	if (t96 != 96411) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x765 = 796U;
	uint16_t x766 = UINT16_MAX;
	uint8_t x767 = 3U;
	int8_t x768 = INT8_MIN;
	volatile int32_t t97 = -76976087;

	t97 = ((x765>>(x766<x767))+x768);

	if (t97 != 668) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x769 = 2U;
	int64_t x770 = INT64_MIN;
	volatile int64_t x771 = 212561908504LL;
	uint32_t x772 = 121919U;
	uint32_t t98 = 203901U;

	t98 = ((x769>>(x770<x771))+x772);

	if (t98 != 121920U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x786 = INT64_MAX;
	volatile int16_t x787 = -4263;
	static int64_t x788 = INT64_MIN;
	int64_t t99 = 588175167753LL;

	t99 = ((x785>>(x786<x787))+x788);

	if (t99 != -9223372036854324055LL) { NG(); } else { ; }
	
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

