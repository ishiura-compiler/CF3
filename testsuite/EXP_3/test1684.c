#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x28 = -388959485725LL;
int64_t t4 = -2190687567015259LL;
uint16_t x66 = 62U;
volatile int32_t x67 = INT32_MIN;
volatile uint64_t t9 = 8414875145955717LLU;
int32_t x70 = 839;
uint64_t x71 = 536863492109223LLU;
int32_t t11 = -49;
volatile int64_t x81 = INT64_MIN;
volatile uint64_t x82 = 3863LLU;
int8_t x83 = INT8_MIN;
static int8_t x92 = INT8_MIN;
static volatile int32_t t16 = 1;
uint32_t x113 = UINT32_MAX;
int64_t x116 = INT64_MIN;
static volatile uint32_t t18 = 3510253U;
volatile int32_t t20 = 976873508;
volatile int8_t x129 = INT8_MIN;
int32_t x134 = -14;
static int8_t x145 = 1;
int16_t x151 = -7;
static volatile int16_t x168 = -1;
int32_t x169 = -1;
volatile int32_t x171 = -6549;
uint64_t t28 = 3LLU;
int8_t x182 = INT8_MIN;
volatile uint64_t t30 = 1LLU;
static uint64_t x215 = 31057LLU;
int64_t x225 = -1LL;
int32_t x234 = -1;
int8_t x245 = 1;
int16_t x246 = INT16_MAX;
uint16_t x247 = UINT16_MAX;
int8_t x250 = INT8_MIN;
int64_t x251 = INT64_MIN;
int64_t t40 = 1476040LL;
int32_t x269 = 724378869;
volatile int8_t x273 = INT8_MIN;
int32_t x274 = INT32_MIN;
int32_t x276 = INT32_MIN;
volatile int64_t x280 = INT64_MIN;
int32_t x288 = -1;
volatile int16_t x326 = INT16_MAX;
int32_t x328 = INT32_MIN;
static int32_t x337 = INT32_MIN;
static int8_t x341 = -1;
uint32_t x353 = 43090U;
uint64_t x359 = UINT64_MAX;
int32_t x368 = INT32_MAX;
uint64_t x370 = 104148687108904167LLU;
int8_t x374 = 1;
int32_t x375 = -1;
int32_t x390 = 935959;
volatile int32_t t62 = -3;
static int64_t t66 = 10190LL;
int64_t x435 = -10964887141LL;
uint64_t x438 = 5244870028040570LLU;
int8_t x446 = -4;
volatile int16_t x448 = INT16_MAX;
volatile int32_t t71 = -90097504;
static volatile int64_t x453 = INT64_MAX;
int8_t x455 = INT8_MIN;
volatile int32_t t73 = 28;
uint32_t x465 = 662906U;
static int32_t x469 = 19835;
uint64_t x481 = 159LLU;
int8_t x486 = INT8_MAX;
uint64_t x487 = UINT64_MAX;
int32_t t79 = -91;
int8_t x505 = 20;
int32_t x510 = -1;
volatile int64_t t82 = -1049267953711974LL;
static uint32_t x513 = UINT32_MAX;
uint16_t x518 = 449U;
int32_t t84 = -124173806;
uint64_t x526 = UINT64_MAX;
volatile uint8_t x531 = 6U;
volatile int8_t x532 = INT8_MIN;
int64_t x537 = -44LL;
int64_t x540 = -191767996LL;
static volatile int64_t t89 = 189LL;
volatile int16_t x549 = INT16_MAX;
int64_t x551 = -1LL;
int32_t t90 = -771773895;
volatile int16_t x553 = INT16_MIN;
int8_t x556 = 0;
static uint64_t x566 = 133666783LLU;
int64_t x568 = -13206741LL;
int32_t t95 = 1046130481;
static int64_t x593 = INT64_MAX;
uint32_t x612 = UINT32_MAX;
uint64_t t98 = 1949526697LLU;
uint16_t x618 = 29610U;


void f0(void) {
	int32_t x1 = -1;
	static int8_t x2 = INT8_MIN;
	volatile int16_t x3 = -3327;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -1;

	t0 = ((x1^x2)>>(x3<=x4));

	if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = INT32_MAX;
	uint32_t x10 = 2U;
	static int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MAX;
	static uint32_t t1 = 353901U;

	t1 = ((x9^x10)>>(x11<=x12));

	if (t1 != 1073741822U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 1;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = -56;
	volatile uint8_t x16 = 14U;
	volatile uint64_t t2 = 8317522094LLU;

	t2 = ((x13^x14)>>(x15<=x16));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 6330203LLU;
	static int32_t x18 = INT32_MIN;
	static int8_t x19 = -1;
	int16_t x20 = 1;
	volatile uint64_t t3 = 205LLU;

	t3 = ((x17^x18)>>(x19<=x20));

	if (t3 != 9223372035784199085LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = -1LL;
	volatile int32_t x26 = INT32_MIN;
	int16_t x27 = INT16_MIN;

	t4 = ((x25^x26)>>(x27<=x28));

	if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x33 = UINT64_MAX;
	uint8_t x34 = 3U;
	uint32_t x35 = 15076461U;
	static uint32_t x36 = 7936U;
	static volatile uint64_t t5 = 6547LLU;

	t5 = ((x33^x34)>>(x35<=x36));

	if (t5 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = INT32_MIN;
	uint32_t x38 = 7700648U;
	int8_t x39 = 3;
	uint64_t x40 = UINT64_MAX;
	volatile uint32_t t6 = 510780661U;

	t6 = ((x37^x38)>>(x39<=x40));

	if (t6 != 1077592148U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = 240780874LLU;
	uint8_t x42 = 45U;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = 198U;
	volatile uint64_t t7 = 8131920017LLU;

	t7 = ((x41^x42)>>(x43<=x44));

	if (t7 != 120390451LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x53 = 22482999654047LLU;
	int16_t x54 = INT16_MIN;
	volatile int32_t x55 = -1;
	int32_t x56 = -1;
	volatile uint64_t t8 = 188075501LLU;

	t8 = ((x53^x54)>>(x55<=x56));

	if (t8 != 9223360795354946383LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x65 = UINT64_MAX;
	volatile int8_t x68 = -1;

	t9 = ((x65^x66)>>(x67<=x68));

	if (t9 != 9223372036854775776LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x69 = 20795U;
	uint64_t x72 = 362559706138LLU;
	static int32_t t10 = 10229789;

	t10 = ((x69^x70)>>(x71<=x72));

	if (t10 != 21116) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x77 = -1;
	int8_t x78 = -3;
	static uint16_t x79 = 26339U;
	uint32_t x80 = 251641355U;

	t11 = ((x77^x78)>>(x79<=x80));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x84 = INT32_MIN;
	uint64_t t12 = 14065LLU;

	t12 = ((x81^x82)>>(x83<=x84));

	if (t12 != 9223372036854779671LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 772U;
	int16_t x86 = INT16_MIN;
	int64_t x87 = 176864LL;
	int64_t x88 = -1LL;
	uint32_t t13 = 262163545U;

	t13 = ((x85^x86)>>(x87<=x88));

	if (t13 != 4294935300U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x89 = -211;
	int8_t x90 = -1;
	uint64_t x91 = 1LLU;
	static int32_t t14 = -299;

	t14 = ((x89^x90)>>(x91<=x92));

	if (t14 != 105) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x97 = INT8_MIN;
	volatile uint32_t x98 = 246322U;
	int32_t x99 = 16414968;
	volatile uint16_t x100 = 0U;
	uint32_t t15 = 0U;

	t15 = ((x97^x98)>>(x99<=x100));

	if (t15 != 4294720946U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = 0;
	static uint8_t x102 = 125U;
	static volatile int8_t x103 = INT8_MAX;
	int8_t x104 = -1;

	t16 = ((x101^x102)>>(x103<=x104));

	if (t16 != 125) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x109 = INT8_MAX;
	volatile int32_t x110 = 6384;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;
	volatile int32_t t17 = -33;

	t17 = ((x109^x110)>>(x111<=x112));

	if (t17 != 3143) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x114 = -1;
	volatile int32_t x115 = 230997719;

	t18 = ((x113^x114)>>(x115<=x116));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x117 = 13764745121LLU;
	uint64_t x118 = 841LLU;
	int16_t x119 = INT16_MIN;
	static int8_t x120 = -1;
	uint64_t t19 = 176172925220LLU;

	t19 = ((x117^x118)>>(x119<=x120));

	if (t19 != 6882372212LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = -1;
	volatile int8_t x122 = -37;
	int8_t x123 = 1;
	int16_t x124 = -1;

	t20 = ((x121^x122)>>(x123<=x124));

	if (t20 != 36) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x130 = -1;
	int8_t x131 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	volatile int32_t t21 = 5688877;

	t21 = ((x129^x130)>>(x131<=x132));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x133 = -1;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = INT16_MAX;
	volatile int32_t t22 = 12982;

	t22 = ((x133^x134)>>(x135<=x136));

	if (t22 != 13) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x137 = 15;
	uint64_t x138 = 6452547617531087LLU;
	uint32_t x139 = 198271U;
	uint16_t x140 = 39U;
	static uint64_t t23 = 1612429LLU;

	t23 = ((x137^x138)>>(x139<=x140));

	if (t23 != 6452547617531072LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	static int16_t x143 = INT16_MAX;
	static uint32_t x144 = 835881U;
	volatile int64_t t24 = -233369936876LL;

	t24 = ((x141^x142)>>(x143<=x144));

	if (t24 != 4611686018427371520LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x146 = 1725359924064778LL;
	volatile int64_t x147 = INT64_MAX;
	uint64_t x148 = 68LLU;
	volatile int64_t t25 = -175240801404LL;

	t25 = ((x145^x146)>>(x147<=x148));

	if (t25 != 1725359924064779LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x150 = -1;
	volatile int16_t x152 = INT16_MIN;
	static volatile uint32_t t26 = 413U;

	t26 = ((x149^x150)>>(x151<=x152));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x165 = INT16_MAX;
	static int32_t x166 = INT32_MAX;
	uint32_t x167 = 3U;
	volatile int32_t t27 = -541;

	t27 = ((x165^x166)>>(x167<=x168));

	if (t27 != 1073725440) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x170 = 49765955637938LLU;
	int16_t x172 = -1;

	t28 = ((x169^x170)>>(x171<=x172));

	if (t28 != 9223347153876956838LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x177 = 1186U;
	uint64_t x178 = UINT64_MAX;
	static int32_t x179 = 311;
	static volatile uint64_t x180 = 124LLU;
	uint64_t t29 = 7632589089125153LLU;

	t29 = ((x177^x178)>>(x179<=x180));

	if (t29 != 18446744073709550429LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x181 = UINT64_MAX;
	static uint16_t x183 = 506U;
	int8_t x184 = 1;

	t30 = ((x181^x182)>>(x183<=x184));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x185 = -1;
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	int64_t x188 = -1LL;
	volatile int64_t t31 = 5751782595830128LL;

	t31 = ((x185^x186)>>(x187<=x188));

	if (t31 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x197 = INT64_MIN;
	volatile int32_t x198 = INT32_MIN;
	static int8_t x199 = INT8_MIN;
	int16_t x200 = 1;
	int64_t t32 = 3533989228947976LL;

	t32 = ((x197^x198)>>(x199<=x200));

	if (t32 != 4611686017353646080LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x213 = 5U;
	static int32_t x214 = 472;
	static uint16_t x216 = UINT16_MAX;
	int32_t t33 = -1275;

	t33 = ((x213^x214)>>(x215<=x216));

	if (t33 != 238) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x221 = UINT64_MAX;
	volatile int64_t x222 = -838054120832LL;
	volatile uint64_t x223 = 70178471577634LLU;
	int16_t x224 = -3556;
	uint64_t t34 = 2220870991696000571LLU;

	t34 = ((x221^x222)>>(x223<=x224));

	if (t34 != 419027060415LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x226 = -33;
	int32_t x227 = -1;
	volatile int16_t x228 = 591;
	volatile int64_t t35 = -1728471419972143LL;

	t35 = ((x225^x226)>>(x227<=x228));

	if (t35 != 16LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x233 = INT32_MIN;
	int8_t x235 = -1;
	int16_t x236 = 2;
	static int32_t t36 = -13618634;

	t36 = ((x233^x234)>>(x235<=x236));

	if (t36 != 1073741823) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x237 = -1;
	static uint32_t x238 = 12U;
	int8_t x239 = -1;
	int8_t x240 = INT8_MIN;
	uint32_t t37 = 519353702U;

	t37 = ((x237^x238)>>(x239<=x240));

	if (t37 != 4294967283U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x241 = 1688LL;
	static uint64_t x242 = 6241LLU;
	volatile int32_t x243 = INT32_MIN;
	int8_t x244 = 8;
	volatile uint64_t t38 = 16005719LLU;

	t38 = ((x241^x242)>>(x243<=x244));

	if (t38 != 3964LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x248 = INT32_MAX;
	volatile int32_t t39 = 3454;

	t39 = ((x245^x246)>>(x247<=x248));

	if (t39 != 16383) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x249 = -204687027486164255LL;
	int32_t x252 = -840181569;

	t40 = ((x249^x250)>>(x251<=x252));

	if (t40 != 102343513743082160LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x257 = 5;
	int64_t x258 = 2568LL;
	static volatile int8_t x259 = INT8_MAX;
	uint8_t x260 = UINT8_MAX;
	int64_t t41 = 4510534207LL;

	t41 = ((x257^x258)>>(x259<=x260));

	if (t41 != 1286LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x265 = -1;
	uint64_t x266 = 4212268671293LLU;
	static uint64_t x267 = UINT64_MAX;
	uint32_t x268 = UINT32_MAX;
	uint64_t t42 = 12LLU;

	t42 = ((x265^x266)>>(x267<=x268));

	if (t42 != 18446739861440880322LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x270 = 79U;
	int16_t x271 = 315;
	static int16_t x272 = INT16_MIN;
	int32_t t43 = 299298825;

	t43 = ((x269^x270)>>(x271<=x272));

	if (t43 != 724378810) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x275 = 408;
	static volatile int32_t t44 = 414;

	t44 = ((x273^x274)>>(x275<=x276));

	if (t44 != 2147483520) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	volatile int32_t x279 = -1;
	volatile int32_t t45 = 73098;

	t45 = ((x277^x278)>>(x279<=x280));

	if (t45 != 32640) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x285 = INT8_MIN;
	static volatile int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	static volatile int32_t t46 = -1017677551;

	t46 = ((x285^x286)>>(x287<=x288));

	if (t46 != 1073741760) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x305 = INT32_MIN;
	uint64_t x306 = UINT64_MAX;
	static volatile uint16_t x307 = UINT16_MAX;
	volatile uint64_t x308 = 2LLU;
	uint64_t t47 = 11236649105279LLU;

	t47 = ((x305^x306)>>(x307<=x308));

	if (t47 != 2147483647LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x325 = 87U;
	uint8_t x327 = 74U;
	int32_t t48 = -3820;

	t48 = ((x325^x326)>>(x327<=x328));

	if (t48 != 32680) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x333 = -1LL;
	volatile int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MAX;
	static int64_t t49 = -4058221000078266LL;

	t49 = ((x333^x334)>>(x335<=x336));

	if (t49 != 16383LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = -1;
	volatile int32_t t50 = 0;

	t50 = ((x337^x338)>>(x339<=x340));

	if (t50 != 1073725440) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x342 = INT8_MIN;
	static int32_t x343 = -1802;
	int64_t x344 = INT64_MIN;
	int32_t t51 = -7338;

	t51 = ((x341^x342)>>(x343<=x344));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x345 = -1;
	int64_t x346 = -1LL;
	int32_t x347 = -1704901;
	static uint16_t x348 = 531U;
	int64_t t52 = -12660LL;

	t52 = ((x345^x346)>>(x347<=x348));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x349 = INT16_MAX;
	static uint16_t x350 = 24U;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = -14;
	int32_t t53 = -3393;

	t53 = ((x349^x350)>>(x351<=x352));

	if (t53 != 32743) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x354 = -1;
	volatile uint8_t x355 = UINT8_MAX;
	int64_t x356 = INT64_MIN;
	static volatile uint32_t t54 = 156365U;

	t54 = ((x353^x354)>>(x355<=x356));

	if (t54 != 4294924205U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x357 = INT32_MAX;
	static int16_t x358 = INT16_MAX;
	static int32_t x360 = INT32_MIN;
	static int32_t t55 = 54401;

	t55 = ((x357^x358)>>(x359<=x360));

	if (t55 != 2147450880) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x361 = UINT64_MAX;
	static volatile uint8_t x362 = 4U;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;
	uint64_t t56 = 3135794470211248LLU;

	t56 = ((x361^x362)>>(x363<=x364));

	if (t56 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x365 = 38;
	static int32_t x366 = 1;
	int16_t x367 = -1;
	volatile int32_t t57 = -928;

	t57 = ((x365^x366)>>(x367<=x368));

	if (t57 != 19) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x369 = 22952599;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = 0;
	static uint64_t t58 = 102958LLU;

	t58 = ((x369^x370)>>(x371<=x372));

	if (t58 != 104148687121100400LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x373 = 3991275LLU;
	volatile int32_t x376 = -1;
	uint64_t t59 = 6LLU;

	t59 = ((x373^x374)>>(x375<=x376));

	if (t59 != 1995637LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x381 = 3575712688630866LL;
	int32_t x382 = INT32_MAX;
	static uint32_t x383 = UINT32_MAX;
	volatile uint16_t x384 = 4373U;
	int64_t t60 = -405266820LL;

	t60 = ((x381^x382)>>(x383<=x384));

	if (t60 != 3575710654403501LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x389 = 374152454;
	int32_t x391 = -33093277;
	static uint64_t x392 = 31009135805714629LLU;
	static int32_t t61 = -22893;

	t61 = ((x389^x390)>>(x391<=x392));

	if (t61 != 373511441) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x393 = UINT8_MAX;
	int32_t x394 = 167291751;
	int32_t x395 = INT32_MIN;
	static int64_t x396 = INT64_MAX;

	t62 = ((x393^x394)>>(x395<=x396));

	if (t62 != 83645900) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x405 = UINT16_MAX;
	volatile uint8_t x406 = UINT8_MAX;
	volatile int64_t x407 = INT64_MAX;
	volatile int16_t x408 = INT16_MIN;
	static volatile int32_t t63 = 5;

	t63 = ((x405^x406)>>(x407<=x408));

	if (t63 != 65280) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x413 = INT16_MAX;
	static uint16_t x414 = 783U;
	int64_t x415 = -1862396401LL;
	static int64_t x416 = -1LL;
	int32_t t64 = 145;

	t64 = ((x413^x414)>>(x415<=x416));

	if (t64 != 15992) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x417 = UINT32_MAX;
	uint32_t x418 = UINT32_MAX;
	int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MIN;
	uint32_t t65 = 166448U;

	t65 = ((x417^x418)>>(x419<=x420));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x421 = INT64_MAX;
	volatile int16_t x422 = 484;
	static uint8_t x423 = 1U;
	volatile uint64_t x424 = 23997358LLU;

	t66 = ((x421^x422)>>(x423<=x424));

	if (t66 != 4611686018427387661LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MIN;
	volatile int64_t x427 = INT64_MIN;
	uint64_t x428 = UINT64_MAX;
	int32_t t67 = 3691;

	t67 = ((x425^x426)>>(x427<=x428));

	if (t67 != 16320) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x433 = 92802053684948LL;
	int16_t x434 = INT16_MAX;
	volatile int32_t x436 = 1;
	static volatile int64_t t68 = 2718LL;

	t68 = ((x433^x434)>>(x435<=x436));

	if (t68 != 46401026842773LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x437 = INT16_MIN;
	volatile int16_t x439 = -1;
	volatile int16_t x440 = INT16_MIN;
	volatile uint64_t t69 = 709185846672101413LLU;

	t69 = ((x437^x438)>>(x439<=x440));

	if (t69 != 18441499203681491322LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x445 = INT16_MIN;
	static int8_t x447 = INT8_MIN;
	volatile int32_t t70 = 11227335;

	t70 = ((x445^x446)>>(x447<=x448));

	if (t70 != 16382) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x449 = 8;
	uint8_t x450 = 13U;
	uint64_t x451 = 459997753887025LLU;
	int64_t x452 = 8905340372LL;

	t71 = ((x449^x450)>>(x451<=x452));

	if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x454 = 2022603440498LLU;
	int16_t x456 = 1;
	uint64_t t72 = 838234LLU;

	t72 = ((x453^x454)>>(x455<=x456));

	if (t72 != 4611685007125667654LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x457 = -1;
	int32_t x458 = -1;
	int32_t x459 = INT32_MIN;
	int32_t x460 = 1;

	t73 = ((x457^x458)>>(x459<=x460));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x466 = UINT64_MAX;
	int16_t x467 = INT16_MAX;
	int16_t x468 = 2521;
	volatile uint64_t t74 = 30680534LLU;

	t74 = ((x465^x466)>>(x467<=x468));

	if (t74 != 18446744073708888709LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x470 = UINT64_MAX;
	static int16_t x471 = INT16_MIN;
	volatile int64_t x472 = INT64_MAX;
	volatile uint64_t t75 = 2LLU;

	t75 = ((x469^x470)>>(x471<=x472));

	if (t75 != 9223372036854765890LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x473 = INT64_MIN;
	int8_t x474 = -5;
	int16_t x475 = -9;
	int64_t x476 = 17164742LL;
	int64_t t76 = 1582192LL;

	t76 = ((x473^x474)>>(x475<=x476));

	if (t76 != 4611686018427387901LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x477 = INT16_MAX;
	int16_t x478 = 4;
	int32_t x479 = INT32_MIN;
	uint32_t x480 = 1435288716U;
	volatile int32_t t77 = -664;

	t77 = ((x477^x478)>>(x479<=x480));

	if (t77 != 32763) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x482 = INT32_MIN;
	static int16_t x483 = INT16_MIN;
	uint8_t x484 = UINT8_MAX;
	volatile uint64_t t78 = 513LLU;

	t78 = ((x481^x482)>>(x483<=x484));

	if (t78 != 9223372035781034063LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x485 = 0U;
	uint8_t x488 = 6U;

	t79 = ((x485^x486)>>(x487<=x488));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x497 = UINT8_MAX;
	uint8_t x498 = 5U;
	static int32_t x499 = INT32_MIN;
	volatile uint32_t x500 = UINT32_MAX;
	static volatile int32_t t80 = -8;

	t80 = ((x497^x498)>>(x499<=x500));

	if (t80 != 125) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x506 = UINT8_MAX;
	volatile int32_t x507 = -1;
	volatile uint64_t x508 = UINT64_MAX;
	int32_t t81 = 85;

	t81 = ((x505^x506)>>(x507<=x508));

	if (t81 != 117) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x509 = -20208332176613417LL;
	int64_t x511 = -1LL;
	volatile int8_t x512 = INT8_MIN;

	t82 = ((x509^x510)>>(x511<=x512));

	if (t82 != 20208332176613416LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x514 = UINT16_MAX;
	static uint16_t x515 = UINT16_MAX;
	static volatile int16_t x516 = 6;
	static volatile uint32_t t83 = 14794122U;

	t83 = ((x513^x514)>>(x515<=x516));

	if (t83 != 4294901760U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x517 = 7U;
	int8_t x519 = INT8_MAX;
	uint8_t x520 = UINT8_MAX;

	t84 = ((x517^x518)>>(x519<=x520));

	if (t84 != 227) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x525 = 103;
	static uint64_t x527 = 480755991LLU;
	static uint64_t x528 = 1272859LLU;
	static uint64_t t85 = 751267LLU;

	t85 = ((x525^x526)>>(x527<=x528));

	if (t85 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x529 = UINT16_MAX;
	static volatile uint16_t x530 = 126U;
	volatile int32_t t86 = -426816;

	t86 = ((x529^x530)>>(x531<=x532));

	if (t86 != 65409) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x538 = 999580440423210199LLU;
	static int64_t x539 = -29381137543717346LL;
	volatile uint64_t t87 = 3534816070044LLU;

	t87 = ((x537^x538)>>(x539<=x540));

	if (t87 != 8723581816643170689LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x541 = -1LL;
	static int32_t x542 = INT32_MIN;
	int16_t x543 = INT16_MIN;
	static int8_t x544 = INT8_MIN;
	int64_t t88 = -7009359965LL;

	t88 = ((x541^x542)>>(x543<=x544));

	if (t88 != 1073741823LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x545 = 0U;
	int64_t x546 = 1266823806LL;
	uint8_t x547 = 0U;
	int64_t x548 = 3442LL;

	t89 = ((x545^x546)>>(x547<=x548));

	if (t89 != 633411903LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x550 = 3612;
	int32_t x552 = INT32_MIN;

	t90 = ((x549^x550)>>(x551<=x552));

	if (t90 != 29155) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x554 = -1;
	uint8_t x555 = UINT8_MAX;
	volatile int32_t t91 = -5;

	t91 = ((x553^x554)>>(x555<=x556));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x561 = UINT64_MAX;
	int64_t x562 = 8008045LL;
	int8_t x563 = INT8_MIN;
	static volatile int64_t x564 = -1LL;
	uint64_t t92 = 13528194684483LLU;

	t92 = ((x561^x562)>>(x563<=x564));

	if (t92 != 9223372036850771785LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x565 = -1LL;
	int64_t x567 = INT64_MIN;
	uint64_t t93 = 1LLU;

	t93 = ((x565^x566)>>(x567<=x568));

	if (t93 != 9223372036787942416LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x577 = -1;
	uint64_t x578 = UINT64_MAX;
	int8_t x579 = INT8_MIN;
	uint64_t x580 = 11400646LLU;
	uint64_t t94 = 111251828995798968LLU;

	t94 = ((x577^x578)>>(x579<=x580));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x585 = UINT8_MAX;
	static uint8_t x586 = UINT8_MAX;
	uint8_t x587 = 4U;
	uint8_t x588 = UINT8_MAX;

	t95 = ((x585^x586)>>(x587<=x588));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x589 = 580054231LLU;
	int8_t x590 = INT8_MIN;
	int16_t x591 = INT16_MAX;
	uint64_t x592 = UINT64_MAX;
	volatile uint64_t t96 = 150545269976LLU;

	t96 = ((x589^x590)>>(x591<=x592));

	if (t96 != 9223372036564748715LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x594 = UINT8_MAX;
	int8_t x595 = 0;
	int32_t x596 = INT32_MIN;
	int64_t t97 = 105525235LL;

	t97 = ((x593^x594)>>(x595<=x596));

	if (t97 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x609 = INT32_MAX;
	volatile uint64_t x610 = UINT64_MAX;
	volatile int8_t x611 = INT8_MIN;

	t98 = ((x609^x610)>>(x611<=x612));

	if (t98 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x617 = 23U;
	uint16_t x619 = 1879U;
	volatile uint64_t x620 = 27119871298600873LLU;
	volatile int32_t t99 = -167554293;

	t99 = ((x617^x618)>>(x619<=x620));

	if (t99 != 14814) { NG(); } else { ; }
	
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

