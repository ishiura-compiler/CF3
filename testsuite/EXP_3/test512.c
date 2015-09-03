#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x57 = INT32_MIN;
int8_t x59 = INT8_MIN;
uint32_t t1 = 4046U;
static uint32_t x73 = UINT32_MAX;
uint64_t t3 = 110449608920008926LLU;
uint64_t x86 = 16973527LLU;
volatile int64_t x88 = -1LL;
int8_t x99 = -34;
uint64_t t6 = 76941299599LLU;
int8_t x101 = -47;
static int16_t x103 = INT16_MIN;
int8_t x138 = INT8_MAX;
int16_t x140 = INT16_MAX;
static volatile int64_t x153 = -1LL;
int32_t x157 = INT32_MIN;
volatile int64_t x158 = -1LL;
volatile uint8_t x160 = 7U;
volatile int64_t t10 = 176442887956761961LL;
int8_t x182 = 52;
int16_t x197 = INT16_MIN;
uint16_t x208 = 1U;
static volatile int64_t t13 = 2502429LL;
int16_t x211 = INT16_MAX;
uint32_t x212 = 15781U;
uint32_t x244 = 1787892U;
uint8_t x272 = 6U;
uint64_t t19 = 1481603445635978LLU;
volatile int8_t x297 = INT8_MIN;
volatile int16_t x319 = 7382;
int32_t t22 = 341170;
int16_t x330 = INT16_MAX;
static volatile uint8_t x348 = UINT8_MAX;
int16_t x354 = INT16_MIN;
static volatile int32_t x355 = INT32_MIN;
uint16_t x356 = UINT16_MAX;
int64_t t27 = 69745213562575658LL;
volatile uint32_t x393 = 13U;
static uint32_t x395 = 1547407011U;
static int16_t x416 = INT16_MIN;
uint32_t x417 = UINT32_MAX;
int64_t x428 = INT64_MIN;
static volatile uint32_t x430 = 3684U;
volatile int64_t x445 = INT64_MAX;
uint16_t x452 = UINT16_MAX;
uint64_t x488 = 24700795LLU;
static volatile uint64_t t39 = 31805910LLU;
int64_t x490 = -240208712971670926LL;
int8_t x493 = INT8_MIN;
int64_t t41 = 1748020LL;
int16_t x504 = INT16_MIN;
volatile int32_t t42 = 2;
int32_t x534 = -1;
int64_t t43 = 726LL;
int64_t x554 = INT64_MIN;
static int32_t x555 = INT32_MAX;
int64_t x556 = -1LL;
int64_t x578 = INT64_MIN;
int16_t x585 = INT16_MAX;
static int16_t x610 = INT16_MAX;
int32_t x636 = -1;
uint8_t x671 = UINT8_MAX;
volatile uint8_t x672 = UINT8_MAX;
volatile int64_t x718 = 98189965402837101LL;
int8_t x750 = INT8_MIN;
uint32_t x753 = 32762063U;
int64_t x755 = -1LL;
static volatile int16_t x758 = -1;
int32_t x759 = INT32_MIN;
volatile uint32_t x761 = UINT32_MAX;
int64_t x762 = INT64_MIN;
uint16_t x770 = UINT16_MAX;
uint16_t x793 = UINT16_MAX;
int64_t x811 = INT64_MIN;
volatile int32_t t63 = 2001967;
int32_t x839 = -1;
static volatile int32_t x855 = INT32_MIN;
uint8_t x856 = 34U;
int64_t x867 = INT64_MIN;
int32_t x882 = INT32_MIN;
int32_t x883 = 34626;
int8_t x905 = INT8_MAX;
int16_t x907 = INT16_MIN;
int8_t x909 = -1;
volatile uint64_t x910 = 183LLU;
volatile int8_t x912 = INT8_MAX;
volatile int64_t x925 = -2040117LL;
uint16_t x927 = 1981U;
volatile int16_t x928 = -461;
static int64_t t72 = -720978161140460LL;
static int64_t t73 = 7084LL;
int16_t x950 = -1;
uint8_t x952 = 64U;
int8_t x984 = INT8_MAX;
static volatile int64_t t78 = 95288002976243046LL;
uint16_t x1014 = UINT16_MAX;
int8_t x1049 = -9;
int64_t x1053 = -1918921219LL;
volatile uint64_t x1057 = UINT64_MAX;
int8_t x1070 = -1;
static volatile int32_t x1084 = -6;
int16_t x1110 = INT16_MAX;
volatile int8_t x1127 = -1;
uint16_t x1134 = 452U;
int32_t x1143 = -3397249;
static volatile uint32_t t94 = 1189U;
uint32_t x1147 = 104614U;
volatile int64_t x1157 = -1LL;
int16_t x1174 = INT16_MAX;


void f0(void) {
	uint32_t x41 = 233389U;
	int8_t x42 = 6;
	static int32_t x43 = INT32_MIN;
	uint64_t x44 = 428691004LLU;
	uint64_t t0 = 32599444288LLU;

	t0 = ((x41+x42)%(x43/x44));

	if (t0 != 233395LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x58 = INT8_MAX;
	uint32_t x60 = 1583310U;

	t1 = ((x57+x58)%(x59/x60));

	if (t1 != 135U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	static volatile int32_t x76 = INT32_MIN;
	uint32_t t2 = 1949582U;

	t2 = ((x73+x74)%(x75/x76));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x77 = -1LL;
	volatile int64_t x78 = -4168LL;
	volatile uint8_t x79 = UINT8_MAX;
	uint64_t x80 = 1LLU;

	t3 = ((x77+x78)%(x79/x80));

	if (t3 != 167LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x85 = 1U;
	int16_t x87 = -1;
	volatile uint64_t t4 = 2075120849038LLU;

	t4 = ((x85+x86)%(x87/x88));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x93 = 237278LLU;
	static uint16_t x94 = 27542U;
	int8_t x95 = -1;
	static int32_t x96 = -1;
	uint64_t t5 = 8067444614086456LLU;

	t5 = ((x93+x94)%(x95/x96));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x97 = -436;
	static uint64_t x98 = UINT64_MAX;
	uint32_t x100 = 5147038U;

	t6 = ((x97+x98)%(x99/x100));

	if (t6 != 827LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x102 = -390;
	int8_t x104 = INT8_MIN;
	int32_t t7 = 90709549;

	t7 = ((x101+x102)%(x103/x104));

	if (t7 != -181) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x137 = -129186945LL;
	uint64_t x139 = 167637LLU;
	uint64_t t8 = 2277204369789LLU;

	t8 = ((x137+x138)%(x139/x140));

	if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x154 = -1LL;
	static int32_t x155 = 25982;
	int32_t x156 = -1;
	static int64_t t9 = 3852LL;

	t9 = ((x153+x154)%(x155/x156));

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x159 = INT8_MIN;

	t10 = ((x157+x158)%(x159/x160));

	if (t10 != -3LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x181 = INT32_MIN;
	int32_t x183 = INT32_MIN;
	int64_t x184 = 24524963LL;
	volatile int64_t t11 = 10435551LL;

	t11 = ((x181+x182)%(x183/x184));

	if (t11 != -43LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x198 = 4LLU;
	int16_t x199 = -1;
	int32_t x200 = -1;
	volatile uint64_t t12 = 25858390695LLU;

	t12 = ((x197+x198)%(x199/x200));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x205 = 2LL;
	volatile int32_t x206 = 322948238;
	volatile uint16_t x207 = 16607U;

	t13 = ((x205+x206)%(x207/x208));

	if (t13 != 8518LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x209 = 1U;
	int16_t x210 = INT16_MIN;
	uint32_t t14 = 925871U;

	t14 = ((x209+x210)%(x211/x212));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x229 = 63095780U;
	volatile int8_t x230 = -14;
	volatile uint8_t x231 = 43U;
	static int32_t x232 = -1;
	uint32_t t15 = 184U;

	t15 = ((x229+x230)%(x231/x232));

	if (t15 != 63095766U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x233 = INT8_MAX;
	static int32_t x234 = -1;
	int8_t x235 = -1;
	static int64_t x236 = -1LL;
	int64_t t16 = -1497489388202341764LL;

	t16 = ((x233+x234)%(x235/x236));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x241 = -1;
	int16_t x242 = 5878;
	int16_t x243 = INT16_MIN;
	uint32_t t17 = 8026U;

	t17 = ((x241+x242)%(x243/x244));

	if (t17 != 1073U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x265 = 1U;
	int64_t x266 = -1LL;
	static uint32_t x267 = UINT32_MAX;
	volatile int16_t x268 = 1;
	volatile int64_t t18 = 403980319LL;

	t18 = ((x265+x266)%(x267/x268));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x269 = UINT64_MAX;
	uint16_t x270 = 35U;
	static volatile uint32_t x271 = 890859890U;

	t19 = ((x269+x270)%(x271/x272));

	if (t19 != 34LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x273 = -1;
	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	uint8_t x276 = 6U;
	volatile int64_t t20 = 44621727281LL;

	t20 = ((x273+x274)%(x275/x276));

	if (t20 != -32769LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x298 = -1;
	int32_t x299 = -1;
	int8_t x300 = -1;
	volatile int32_t t21 = 41617;

	t21 = ((x297+x298)%(x299/x300));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x317 = UINT8_MAX;
	int32_t x318 = -1;
	int32_t x320 = -3;

	t22 = ((x317+x318)%(x319/x320));

	if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	uint32_t x323 = 121505U;
	uint16_t x324 = 3U;
	static uint32_t t23 = 3349U;

	t23 = ((x321+x322)%(x323/x324));

	if (t23 != 254U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x329 = 248364571U;
	uint64_t x331 = UINT64_MAX;
	volatile int64_t x332 = INT64_MIN;
	static uint64_t t24 = 6LLU;

	t24 = ((x329+x330)%(x331/x332));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x345 = 3LLU;
	volatile uint16_t x346 = 215U;
	int32_t x347 = INT32_MIN;
	uint64_t t25 = 53LLU;

	t25 = ((x345+x346)%(x347/x348));

	if (t25 != 218LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x353 = UINT64_MAX;
	volatile uint64_t t26 = 3929652356670638837LLU;

	t26 = ((x353+x354)%(x355/x356));

	if (t26 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x357 = INT64_MIN;
	uint16_t x358 = 21U;
	int64_t x359 = 223LL;
	uint8_t x360 = 10U;

	t27 = ((x357+x358)%(x359/x360));

	if (t27 != -9LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x394 = 18U;
	int32_t x396 = 150300975;
	uint32_t t28 = 91769990U;

	t28 = ((x393+x394)%(x395/x396));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x397 = 1U;
	static int32_t x398 = INT32_MIN;
	int8_t x399 = -1;
	int32_t x400 = -1;
	int32_t t29 = 1360777;

	t29 = ((x397+x398)%(x399/x400));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x413 = UINT16_MAX;
	uint64_t x414 = 870630921LLU;
	int32_t x415 = INT32_MAX;
	static volatile uint64_t t30 = 129880LLU;

	t30 = ((x413+x414)%(x415/x416));

	if (t30 != 870696456LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x418 = INT32_MIN;
	static volatile uint64_t x419 = UINT64_MAX;
	int8_t x420 = INT8_MAX;
	uint64_t t31 = 72LLU;

	t31 = ((x417+x418)%(x419/x420));

	if (t31 != 2147483647LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x421 = 3;
	int8_t x422 = -1;
	int64_t x423 = INT64_MAX;
	uint32_t x424 = 92282U;
	volatile int64_t t32 = -426304977LL;

	t32 = ((x421+x422)%(x423/x424));

	if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x425 = UINT8_MAX;
	int64_t x426 = INT64_MIN;
	uint64_t x427 = UINT64_MAX;
	volatile uint64_t t33 = 474361004LLU;

	t33 = ((x425+x426)%(x427/x428));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x429 = -5284;
	int64_t x431 = INT64_MAX;
	int64_t x432 = 328096813824249LL;
	int64_t t34 = -4LL;

	t34 = ((x429+x430)%(x431/x432));

	if (t34 != 26561LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x433 = -1;
	int8_t x434 = -1;
	volatile int8_t x435 = INT8_MIN;
	int16_t x436 = 3;
	int32_t t35 = 8275;

	t35 = ((x433+x434)%(x435/x436));

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x446 = INT64_MIN;
	static int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	int64_t t36 = 833318097LL;

	t36 = ((x445+x446)%(x447/x448));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x449 = 58703U;
	volatile int8_t x450 = 3;
	volatile int32_t x451 = -9550840;
	uint32_t t37 = 86102446U;

	t37 = ((x449+x450)%(x451/x452));

	if (t37 != 58706U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x453 = 255292354LLU;
	static volatile uint16_t x454 = 4465U;
	int8_t x455 = INT8_MAX;
	int16_t x456 = -14;
	volatile uint64_t t38 = 262LLU;

	t38 = ((x453+x454)%(x455/x456));

	if (t38 != 255296819LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x485 = 5771799LLU;
	static int32_t x486 = -93188;
	static uint64_t x487 = UINT64_MAX;

	t39 = ((x485+x486)%(x487/x488));

	if (t39 != 5678611LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x489 = INT16_MIN;
	uint64_t x491 = 34236593125291LLU;
	uint64_t x492 = 1431LLU;
	uint64_t t40 = 238233057LLU;

	t40 = ((x489+x490)%(x491/x492));

	if (t40 != 336161266LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x494 = 3;
	int64_t x495 = INT64_MIN;
	int16_t x496 = -46;

	t41 = ((x493+x494)%(x495/x496));

	if (t41 != -125LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x501 = 0U;
	static uint16_t x502 = 203U;
	int32_t x503 = INT32_MIN;

	t42 = ((x501+x502)%(x503/x504));

	if (t42 != 203) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x533 = 393LL;
	int32_t x535 = 1005;
	volatile uint8_t x536 = 21U;

	t43 = ((x533+x534)%(x535/x536));

	if (t43 != 16LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x549 = 64589714944LL;
	static volatile int32_t x550 = INT32_MIN;
	int64_t x551 = -180954794481551189LL;
	static uint16_t x552 = 1678U;
	int64_t t44 = -3537354833567179LL;

	t44 = ((x549+x550)%(x551/x552));

	if (t44 != 62442231296LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x553 = UINT8_MAX;
	static int64_t t45 = -5675LL;

	t45 = ((x553+x554)%(x555/x556));

	if (t45 != -2147483394LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x577 = 63687U;
	uint64_t x579 = 2699LLU;
	int32_t x580 = 84;
	volatile uint64_t t46 = 1674288899037764356LLU;

	t46 = ((x577+x578)%(x579/x580));

	if (t46 != 7LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x586 = 10;
	volatile int16_t x587 = -5799;
	volatile int32_t x588 = -1;
	int32_t t47 = 6321;

	t47 = ((x585+x586)%(x587/x588));

	if (t47 != 3782) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x609 = UINT16_MAX;
	int16_t x611 = INT16_MIN;
	static int16_t x612 = INT16_MIN;
	volatile int32_t t48 = 127200577;

	t48 = ((x609+x610)%(x611/x612));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x633 = INT8_MAX;
	static int8_t x634 = INT8_MIN;
	int16_t x635 = INT16_MIN;
	int32_t t49 = -7460;

	t49 = ((x633+x634)%(x635/x636));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x669 = -1;
	uint8_t x670 = UINT8_MAX;
	int32_t t50 = -4554136;

	t50 = ((x669+x670)%(x671/x672));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x673 = 13U;
	volatile uint64_t x674 = 5944355237929403212LLU;
	static int8_t x675 = -15;
	int32_t x676 = -1;
	volatile uint64_t t51 = 5273475427064LLU;

	t51 = ((x673+x674)%(x675/x676));

	if (t51 != 5LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x717 = INT32_MIN;
	volatile int8_t x719 = INT8_MIN;
	uint8_t x720 = 13U;
	int64_t t52 = 3207564621796526LL;

	t52 = ((x717+x718)%(x719/x720));

	if (t52 != 7LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x733 = INT8_MIN;
	static int64_t x734 = -2365260890524LL;
	volatile int64_t x735 = INT64_MAX;
	volatile int64_t x736 = INT64_MAX;
	static int64_t t53 = -8149233176242473LL;

	t53 = ((x733+x734)%(x735/x736));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x749 = 843335485166LLU;
	volatile int64_t x751 = -31103378052793700LL;
	uint32_t x752 = 3850U;
	volatile uint64_t t54 = 6261705086136LLU;

	t54 = ((x749+x750)%(x751/x752));

	if (t54 != 843335485038LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x754 = 1855660940LLU;
	static volatile int8_t x756 = -1;
	uint64_t t55 = 448LLU;

	t55 = ((x753+x754)%(x755/x756));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x757 = -1;
	int8_t x760 = INT8_MIN;
	volatile int32_t t56 = -100088;

	t56 = ((x757+x758)%(x759/x760));

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x763 = INT16_MIN;
	static int16_t x764 = INT16_MAX;
	static volatile int64_t t57 = -546807664131LL;

	t57 = ((x761+x762)%(x763/x764));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x769 = INT32_MIN;
	int16_t x771 = INT16_MIN;
	uint64_t x772 = 416438925201548LLU;
	volatile uint64_t t58 = 4765159824LLU;

	t58 = ((x769+x770)%(x771/x772));

	if (t58 != 37759LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x794 = 578;
	uint8_t x795 = 18U;
	int8_t x796 = -1;
	volatile int32_t t59 = 4108722;

	t59 = ((x793+x794)%(x795/x796));

	if (t59 != 17) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x797 = 3U;
	int8_t x798 = INT8_MIN;
	int16_t x799 = -1;
	uint32_t x800 = 4963716U;
	volatile uint32_t t60 = 15U;

	t60 = ((x797+x798)%(x799/x800));

	if (t60 != 836U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x809 = UINT32_MAX;
	volatile int16_t x810 = -1661;
	static uint64_t x812 = 2069591LLU;
	uint64_t t61 = 639979573588893LLU;

	t61 = ((x809+x810)%(x811/x812));

	if (t61 != 4294965634LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x821 = 6080944626010LL;
	uint16_t x822 = UINT16_MAX;
	volatile int64_t x823 = 1113416683470744LL;
	int32_t x824 = 110;
	volatile int64_t t62 = -8478178820654747LL;

	t62 = ((x821+x822)%(x823/x824));

	if (t62 != 6080944691545LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x833 = 4U;
	int16_t x834 = 172;
	int32_t x835 = 158533;
	int32_t x836 = 397;

	t63 = ((x833+x834)%(x835/x836));

	if (t63 != 176) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x837 = 1;
	static volatile int32_t x838 = -1;
	volatile int8_t x840 = -1;
	int32_t t64 = 691565;

	t64 = ((x837+x838)%(x839/x840));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x841 = 56;
	volatile int64_t x842 = -1LL;
	uint8_t x843 = UINT8_MAX;
	static volatile uint8_t x844 = 110U;
	static int64_t t65 = 78726682020648LL;

	t65 = ((x841+x842)%(x843/x844));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x853 = INT32_MAX;
	int16_t x854 = -1;
	int32_t t66 = -995191395;

	t66 = ((x853+x854)%(x855/x856));

	if (t66 != 24) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x865 = 6130417083405980LL;
	static int64_t x866 = INT64_MIN;
	int16_t x868 = INT16_MAX;
	int64_t t67 = 644838486213LL;

	t67 = ((x865+x866)%(x867/x868));

	if (t67 != -62221388556828LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x881 = 1673U;
	int16_t x884 = 10;
	int32_t t68 = -1;

	t68 = ((x881+x882)%(x883/x884));

	if (t68 != -3375) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x889 = INT32_MAX;
	int16_t x890 = INT16_MIN;
	int32_t x891 = INT32_MIN;
	int8_t x892 = 5;
	static int32_t t69 = 0;

	t69 = ((x889+x890)%(x891/x892));

	if (t69 != 429463963) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x906 = 0;
	int8_t x908 = INT8_MIN;
	static volatile int32_t t70 = 351;

	t70 = ((x905+x906)%(x907/x908));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x911 = 1095;
	uint64_t t71 = 1LLU;

	t71 = ((x909+x910)%(x911/x912));

	if (t71 != 6LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x926 = UINT8_MAX;

	t72 = ((x925+x926)%(x927/x928));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x933 = UINT32_MAX;
	int16_t x934 = INT16_MIN;
	int8_t x935 = INT8_MIN;
	int64_t x936 = -1LL;

	t73 = ((x933+x934)%(x935/x936));

	if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x949 = 28U;
	int8_t x951 = INT8_MIN;
	volatile int32_t t74 = 0;

	t74 = ((x949+x950)%(x951/x952));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x973 = INT32_MAX;
	int32_t x974 = INT32_MIN;
	int64_t x975 = 47076870LL;
	static volatile int8_t x976 = INT8_MIN;
	volatile int64_t t75 = 15202844823LL;

	t75 = ((x973+x974)%(x975/x976));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x977 = 2118163;
	volatile uint16_t x978 = 1178U;
	uint16_t x979 = 16026U;
	int16_t x980 = -1;
	volatile int32_t t76 = -385498;

	t76 = ((x977+x978)%(x979/x980));

	if (t76 != 3909) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x981 = INT8_MIN;
	static int8_t x982 = INT8_MAX;
	int64_t x983 = INT64_MIN;
	static int64_t t77 = -13572LL;

	t77 = ((x981+x982)%(x983/x984));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x985 = 336U;
	int32_t x986 = INT32_MIN;
	int64_t x987 = INT64_MIN;
	static int32_t x988 = INT32_MAX;

	t78 = ((x985+x986)%(x987/x988));

	if (t78 != 2147483984LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x993 = INT16_MIN;
	int16_t x994 = INT16_MIN;
	uint32_t x995 = 352427659U;
	uint16_t x996 = UINT16_MAX;
	uint32_t t79 = 1263U;

	t79 = ((x993+x994)%(x995/x996));

	if (t79 != 1502U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x997 = UINT64_MAX;
	int16_t x998 = 15;
	static int32_t x999 = 196457213;
	volatile int16_t x1000 = -1;
	uint64_t t80 = 23459035772934727LLU;

	t80 = ((x997+x998)%(x999/x1000));

	if (t80 != 14LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x1013 = INT32_MIN;
	uint16_t x1015 = 912U;
	volatile uint8_t x1016 = 5U;
	int32_t t81 = -2;

	t81 = ((x1013+x1014)%(x1015/x1016));

	if (t81 != -113) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x1025 = -366LL;
	uint32_t x1026 = 11058290U;
	static int16_t x1027 = INT16_MIN;
	uint8_t x1028 = 77U;
	int64_t t82 = 5804919411LL;

	t82 = ((x1025+x1026)%(x1027/x1028));

	if (t82 != 274LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1029 = 59262U;
	volatile uint32_t x1030 = UINT32_MAX;
	uint64_t x1031 = UINT64_MAX;
	uint8_t x1032 = 3U;
	uint64_t t83 = 797604LLU;

	t83 = ((x1029+x1030)%(x1031/x1032));

	if (t83 != 59261LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1050 = 26;
	volatile int8_t x1051 = INT8_MIN;
	static int64_t x1052 = -1LL;
	volatile int64_t t84 = 9870LL;

	t84 = ((x1049+x1050)%(x1051/x1052));

	if (t84 != 17LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x1054 = UINT32_MAX;
	volatile int16_t x1055 = -1;
	int8_t x1056 = -1;
	static int64_t t85 = 484509450822621763LL;

	t85 = ((x1053+x1054)%(x1055/x1056));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x1058 = -1LL;
	static int8_t x1059 = -19;
	int8_t x1060 = -1;
	static volatile uint64_t t86 = 3LLU;

	t86 = ((x1057+x1058)%(x1059/x1060));

	if (t86 != 15LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1065 = -1;
	int8_t x1066 = 58;
	int32_t x1067 = INT32_MIN;
	uint64_t x1068 = 3019772696606555LLU;
	volatile uint64_t t87 = 1LLU;

	t87 = ((x1065+x1066)%(x1067/x1068));

	if (t87 != 57LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1069 = 12721U;
	uint32_t x1071 = UINT32_MAX;
	int16_t x1072 = INT16_MIN;
	volatile uint32_t t88 = 36148U;

	t88 = ((x1069+x1070)%(x1071/x1072));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1081 = -1;
	static int16_t x1082 = INT16_MIN;
	volatile uint8_t x1083 = UINT8_MAX;
	static volatile int32_t t89 = -40975;

	t89 = ((x1081+x1082)%(x1083/x1084));

	if (t89 != -9) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1109 = -1LL;
	volatile int64_t x1111 = INT64_MIN;
	int32_t x1112 = INT32_MIN;
	int64_t t90 = -1187293289692LL;

	t90 = ((x1109+x1110)%(x1111/x1112));

	if (t90 != 32766LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1125 = UINT16_MAX;
	int32_t x1126 = -1;
	volatile uint32_t x1128 = 282359U;
	volatile uint32_t t91 = 441U;

	t91 = ((x1125+x1126)%(x1127/x1128));

	if (t91 != 4690U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1129 = -1;
	uint32_t x1130 = 4183U;
	uint16_t x1131 = 20404U;
	uint8_t x1132 = 2U;
	static volatile uint32_t t92 = 5769U;

	t92 = ((x1129+x1130)%(x1131/x1132));

	if (t92 != 4182U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1133 = -3;
	int8_t x1135 = 1;
	volatile int16_t x1136 = -1;
	int32_t t93 = 1;

	t93 = ((x1133+x1134)%(x1135/x1136));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1141 = 35;
	static volatile uint32_t x1142 = 25664U;
	int8_t x1144 = INT8_MAX;

	t94 = ((x1141+x1142)%(x1143/x1144));

	if (t94 != 25699U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x1145 = -1LL;
	int32_t x1146 = INT32_MIN;
	uint8_t x1148 = 5U;
	volatile int64_t t95 = -24251936983783LL;

	t95 = ((x1145+x1146)%(x1147/x1148));

	if (t95 != -7725LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1158 = INT16_MIN;
	int32_t x1159 = INT32_MIN;
	int8_t x1160 = INT8_MIN;
	static int64_t t96 = -1129919871627400516LL;

	t96 = ((x1157+x1158)%(x1159/x1160));

	if (t96 != -32769LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1173 = 829U;
	int8_t x1175 = -1;
	uint64_t x1176 = UINT64_MAX;
	static volatile uint64_t t97 = 23941677845160925LLU;

	t97 = ((x1173+x1174)%(x1175/x1176));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1189 = INT64_MIN;
	uint64_t x1190 = UINT64_MAX;
	volatile int64_t x1191 = INT64_MIN;
	uint64_t x1192 = 26273858966075544LLU;
	uint64_t t98 = 10LLU;

	t98 = ((x1189+x1190)%(x1191/x1192));

	if (t98 != 241LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x1193 = 0U;
	int16_t x1194 = INT16_MIN;
	uint64_t x1195 = UINT64_MAX;
	volatile int32_t x1196 = -1;
	volatile uint64_t t99 = 2020806778096526LLU;

	t99 = ((x1193+x1194)%(x1195/x1196));

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

