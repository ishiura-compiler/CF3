#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = 1;
static int16_t x8 = -493;
volatile uint8_t x20 = 4U;
static int8_t x22 = -3;
static int64_t x23 = INT64_MIN;
int8_t x58 = 23;
uint16_t x65 = 1004U;
static uint64_t t7 = UINT64_MAX;
uint32_t x99 = UINT32_MAX;
int16_t x104 = 52;
static int32_t x112 = -1;
static uint8_t x119 = UINT8_MAX;
static uint8_t x120 = 1U;
uint8_t x142 = 1U;
static volatile uint16_t x144 = 14684U;
int32_t x169 = INT32_MAX;
volatile int32_t t16 = INT32_MAX;
uint64_t x174 = 4143852LLU;
volatile int32_t x176 = INT32_MIN;
uint64_t x179 = 20020388146222LLU;
volatile int16_t x194 = INT16_MIN;
static int8_t x215 = INT8_MIN;
volatile int64_t t22 = -4LL;
static int32_t x230 = -2018211;
uint32_t x245 = UINT32_MAX;
int32_t x311 = -1;
int16_t x320 = -1901;
volatile int32_t t29 = -345305;
volatile uint8_t x322 = UINT8_MAX;
uint64_t x329 = 6274830637505LLU;
static int16_t x335 = INT16_MIN;
volatile uint64_t t32 = 4006725173LLU;
static volatile int8_t x346 = INT8_MAX;
volatile int64_t t34 = INT64_MAX;
static volatile uint32_t x381 = 7726424U;
int64_t x417 = INT64_MAX;
volatile int8_t x422 = INT8_MAX;
int64_t x445 = INT64_MAX;
uint16_t x446 = 3U;
static uint8_t x447 = 36U;
uint16_t x483 = 24701U;
int16_t x484 = 1;
volatile int32_t t47 = -182218;
int16_t x508 = -1;
static int16_t x542 = INT16_MAX;
static uint8_t x554 = 53U;
int64_t x572 = INT64_MIN;
int64_t t55 = INT64_MAX;
int32_t t56 = -2230453;
static volatile uint32_t x624 = 3343U;
int32_t x628 = 3183;
int64_t x640 = INT64_MIN;
int64_t t61 = -99968602150LL;
uint16_t x648 = 1U;
int64_t x709 = 175263LL;
static uint32_t x711 = UINT32_MAX;
static int32_t x715 = INT32_MIN;
int32_t x719 = INT32_MIN;
volatile uint32_t x737 = 54539624U;
uint32_t x774 = 859U;
volatile int64_t t73 = 446290LL;
uint64_t x805 = 15907984LLU;
int16_t x806 = -15;
static volatile uint8_t x807 = 42U;
static int32_t x809 = 42680;
uint64_t x810 = 1801553528LLU;
int32_t t75 = -3303984;
int64_t x813 = 29LL;
static int64_t x832 = INT64_MAX;
volatile int64_t t78 = INT64_MAX;
int32_t x837 = 469012;
static uint64_t x853 = UINT64_MAX;
static volatile uint64_t t81 = UINT64_MAX;
int64_t x883 = INT64_MIN;
static int64_t x891 = INT64_MAX;
uint16_t x951 = 29U;
int64_t x995 = INT64_MAX;
uint8_t x999 = UINT8_MAX;
int16_t x1006 = INT16_MAX;
volatile int16_t x1031 = INT16_MIN;
uint64_t t92 = 463084176645541LLU;
volatile int16_t x1050 = -1;
static int16_t x1084 = INT16_MAX;
int32_t t94 = -214243503;
static volatile uint16_t x1094 = 217U;
int64_t x1096 = INT64_MIN;
volatile int32_t t96 = 850;
uint16_t x1120 = 1892U;
int64_t t99 = 131619LL;


void f0(void) {
	static int32_t x6 = -1;
	volatile uint16_t x7 = 12768U;
	static volatile int32_t t0 = -130115532;

	t0 = ((x5<<(x6/x7))|x8);

	if (t0 != -493) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x17 = 26U;
	int8_t x18 = 0;
	int64_t x19 = -1LL;
	int32_t t1 = 0;

	t1 = ((x17<<(x18/x19))|x20);

	if (t1 != 30) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x21 = INT64_MAX;
	int8_t x24 = INT8_MAX;
	volatile int64_t t2 = INT64_MAX;

	t2 = ((x21<<(x22/x23))|x24);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x49 = 170U;
	int32_t x50 = INT32_MIN;
	volatile uint64_t x51 = UINT64_MAX;
	static int16_t x52 = -27;
	static volatile uint32_t t3 = 25U;

	t3 = ((x49<<(x50/x51))|x52);

	if (t3 != 4294967279U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x57 = 5088U;
	volatile int16_t x59 = INT16_MAX;
	uint32_t x60 = UINT32_MAX;
	uint32_t t4 = UINT32_MAX;

	t4 = ((x57<<(x58/x59))|x60);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x61 = 480U;
	uint32_t x62 = 16258374U;
	int32_t x63 = INT32_MIN;
	static int32_t x64 = -268504791;
	int32_t t5 = -12;

	t5 = ((x61<<(x62/x63))|x64);

	if (t5 != -268504599) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x66 = 104U;
	static int8_t x67 = INT8_MIN;
	uint16_t x68 = 0U;
	int32_t t6 = -139342;

	t6 = ((x65<<(x66/x67))|x68);

	if (t6 != 1004) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x89 = UINT64_MAX;
	int8_t x90 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	volatile int16_t x92 = INT16_MIN;

	t7 = ((x89<<(x90/x91))|x92);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x93 = 121651168171858LLU;
	int64_t x94 = INT64_MIN;
	volatile int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MIN;
	static volatile uint64_t t8 = 20617LLU;

	t8 = ((x93<<(x94/x95))|x96);

	if (t8 != 18446744073709530788LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x97 = 8049LLU;
	uint64_t x98 = 4LLU;
	uint32_t x100 = 318373U;
	static volatile uint64_t t9 = 2LLU;

	t9 = ((x97<<(x98/x99))|x100);

	if (t9 != 319477LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x101 = 4190;
	int16_t x102 = -1;
	int16_t x103 = INT16_MAX;
	int32_t t10 = -728;

	t10 = ((x101<<(x102/x103))|x104);

	if (t10 != 4222) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x109 = 3386377752LLU;
	uint16_t x110 = 298U;
	static uint32_t x111 = UINT32_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x109<<(x110/x111))|x112);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x113 = 191798475LLU;
	static int64_t x114 = -1LL;
	volatile int64_t x115 = 7LL;
	static int16_t x116 = -1;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = ((x113<<(x114/x115))|x116);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x117 = INT16_MAX;
	static int8_t x118 = 0;
	volatile int32_t t13 = 604;

	t13 = ((x117<<(x118/x119))|x120);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x141 = INT16_MAX;
	uint16_t x143 = 31U;
	static volatile int32_t t14 = -3875;

	t14 = ((x141<<(x142/x143))|x144);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x165 = 5U;
	int16_t x166 = -1;
	static volatile int64_t x167 = -1LL;
	int8_t x168 = INT8_MIN;
	volatile int32_t t15 = 54;

	t15 = ((x165<<(x166/x167))|x168);

	if (t15 != -118) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x170 = UINT8_MAX;
	int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MAX;

	t16 = ((x169<<(x170/x171))|x172);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x173 = 149U;
	int32_t x175 = INT32_MAX;
	volatile int32_t t17 = -96020058;

	t17 = ((x173<<(x174/x175))|x176);

	if (t17 != -2147483499) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x177 = 73979871U;
	uint16_t x178 = 1906U;
	int8_t x180 = INT8_MAX;
	uint32_t t18 = 14719U;

	t18 = ((x177<<(x178/x179))|x180);

	if (t18 != 73979903U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x185 = 11556U;
	int8_t x186 = INT8_MIN;
	uint64_t x187 = UINT64_MAX;
	uint8_t x188 = 16U;
	static volatile int32_t t19 = -45457256;

	t19 = ((x185<<(x186/x187))|x188);

	if (t19 != 11572) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x193 = 114120LL;
	volatile int32_t x195 = INT32_MAX;
	int64_t x196 = INT64_MIN;
	volatile int64_t t20 = 86249LL;

	t20 = ((x193<<(x194/x195))|x196);

	if (t20 != -9223372036854661688LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x213 = UINT8_MAX;
	uint64_t x214 = 27LLU;
	int64_t x216 = 578588LL;
	volatile int64_t t21 = 51LL;

	t21 = ((x213<<(x214/x215))|x216);

	if (t21 != 578815LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x217 = 0LL;
	int16_t x218 = 0;
	uint64_t x219 = 1169LLU;
	static int32_t x220 = INT32_MIN;

	t22 = ((x217<<(x218/x219))|x220);

	if (t22 != -2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x229 = 10U;
	static uint64_t x231 = UINT64_MAX;
	int64_t x232 = -34254075692067LL;
	int64_t t23 = 973457830694LL;

	t23 = ((x229<<(x230/x231))|x232);

	if (t23 != -34254075692065LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x241 = INT32_MAX;
	volatile uint32_t x242 = UINT32_MAX;
	int64_t x243 = INT64_MIN;
	volatile int16_t x244 = INT16_MAX;
	static int32_t t24 = INT32_MAX;

	t24 = ((x241<<(x242/x243))|x244);

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x246 = -1;
	int16_t x247 = INT16_MAX;
	static volatile int64_t x248 = INT64_MAX;
	int64_t t25 = INT64_MAX;

	t25 = ((x245<<(x246/x247))|x248);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x253 = INT64_MAX;
	int32_t x254 = -104;
	volatile int16_t x255 = -15113;
	int8_t x256 = -1;
	volatile int64_t t26 = 22LL;

	t26 = ((x253<<(x254/x255))|x256);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x305 = INT16_MAX;
	volatile int32_t x306 = 12602;
	int64_t x307 = -113871427791LL;
	int64_t x308 = 9138523065528LL;
	int64_t t27 = 371LL;

	t27 = ((x305<<(x306/x307))|x308);

	if (t27 != 9138523078655LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x309 = 3473;
	uint64_t x310 = 3609883LLU;
	int32_t x312 = -2;
	int32_t t28 = -91;

	t28 = ((x309<<(x310/x311))|x312);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x317 = 0U;
	uint64_t x318 = UINT64_MAX;
	static int32_t x319 = INT32_MIN;

	t29 = ((x317<<(x318/x319))|x320);

	if (t29 != -1901) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x321 = UINT32_MAX;
	uint8_t x323 = 40U;
	static uint32_t x324 = 14198U;
	uint32_t t30 = 9U;

	t30 = ((x321<<(x322/x323))|x324);

	if (t30 != 4294967286U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x330 = -3175649892371715LL;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MAX;
	volatile uint64_t t31 = 93787457050862LLU;

	t31 = ((x329<<(x330/x331))|x332);

	if (t31 != 6274830637567LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x333 = INT8_MAX;
	uint32_t x334 = 1U;
	uint64_t x336 = 13113161389987LLU;

	t32 = ((x333<<(x334/x335))|x336);

	if (t32 != 13113161390079LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x345 = 99U;
	int32_t x347 = 271270115;
	int16_t x348 = INT16_MIN;
	volatile int32_t t33 = -552;

	t33 = ((x345<<(x346/x347))|x348);

	if (t33 != -32669) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x377 = 5;
	static int64_t x378 = INT64_MAX;
	static int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MAX;

	t34 = ((x377<<(x378/x379))|x380);

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x382 = 7;
	uint8_t x383 = 3U;
	static int32_t x384 = -1;
	uint32_t t35 = UINT32_MAX;

	t35 = ((x381<<(x382/x383))|x384);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x401 = INT8_MAX;
	static uint64_t x402 = 98405LLU;
	volatile int16_t x403 = INT16_MAX;
	int64_t x404 = INT64_MAX;
	static volatile int64_t t36 = INT64_MAX;

	t36 = ((x401<<(x402/x403))|x404);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x409 = INT64_MAX;
	uint16_t x410 = 133U;
	int32_t x411 = INT32_MAX;
	int8_t x412 = INT8_MAX;
	volatile int64_t t37 = INT64_MAX;

	t37 = ((x409<<(x410/x411))|x412);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x418 = 2U;
	int8_t x419 = INT8_MIN;
	static uint8_t x420 = UINT8_MAX;
	volatile int64_t t38 = INT64_MAX;

	t38 = ((x417<<(x418/x419))|x420);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x421 = INT64_MAX;
	int32_t x423 = INT32_MIN;
	int8_t x424 = -1;
	int64_t t39 = 881002964392836LL;

	t39 = ((x421<<(x422/x423))|x424);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x441 = 0U;
	static uint8_t x442 = 53U;
	int64_t x443 = 35351502582LL;
	static int16_t x444 = -1;
	volatile int32_t t40 = 0;

	t40 = ((x441<<(x442/x443))|x444);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x448 = 138;
	volatile int64_t t41 = INT64_MAX;

	t41 = ((x445<<(x446/x447))|x448);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x461 = 0U;
	int32_t x462 = -1;
	uint8_t x463 = 3U;
	volatile int16_t x464 = -1;
	volatile int32_t t42 = 3001661;

	t42 = ((x461<<(x462/x463))|x464);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x465 = UINT64_MAX;
	int8_t x466 = 0;
	volatile int64_t x467 = 1449364LL;
	int32_t x468 = -1;
	uint64_t t43 = UINT64_MAX;

	t43 = ((x465<<(x466/x467))|x468);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x473 = INT32_MAX;
	int64_t x474 = -1LL;
	volatile int64_t x475 = INT64_MIN;
	int32_t x476 = INT32_MIN;
	static volatile int32_t t44 = 198790479;

	t44 = ((x473<<(x474/x475))|x476);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x481 = INT16_MAX;
	uint32_t x482 = 190035U;
	int32_t t45 = -2513767;

	t45 = ((x481<<(x482/x483))|x484);

	if (t45 != 4194177) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x493 = 9248563166LLU;
	uint32_t x494 = UINT32_MAX;
	int32_t x495 = -3512;
	int64_t x496 = -95274526337282936LL;
	uint64_t t46 = 32LLU;

	t46 = ((x493<<(x494/x495))|x496);

	if (t46 != 18351469565793796028LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x497 = 0U;
	volatile uint16_t x498 = UINT16_MAX;
	volatile uint16_t x499 = 17635U;
	uint8_t x500 = 1U;

	t47 = ((x497<<(x498/x499))|x500);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x505 = INT32_MAX;
	uint8_t x506 = UINT8_MAX;
	static uint32_t x507 = 18856509U;
	static int32_t t48 = -4780;

	t48 = ((x505<<(x506/x507))|x508);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x529 = 8476355837LLU;
	int16_t x530 = 104;
	volatile uint64_t x531 = 33432980422009LLU;
	int64_t x532 = 7663126053832539LL;
	uint64_t t49 = 2002LLU;

	t49 = ((x529<<(x530/x531))|x532);

	if (t49 != 7663132113563647LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x541 = 16U;
	uint32_t x543 = 79704U;
	uint8_t x544 = 10U;
	volatile int32_t t50 = 0;

	t50 = ((x541<<(x542/x543))|x544);

	if (t50 != 26) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x553 = 1U;
	static int64_t x555 = -540070231824644685LL;
	volatile int16_t x556 = 190;
	volatile int32_t t51 = -189;

	t51 = ((x553<<(x554/x555))|x556);

	if (t51 != 191) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x565 = UINT16_MAX;
	uint8_t x566 = 6U;
	static uint64_t x567 = 57485515024795LLU;
	uint64_t x568 = UINT64_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = ((x565<<(x566/x567))|x568);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x569 = UINT16_MAX;
	int16_t x570 = 3;
	volatile uint32_t x571 = 1020036U;
	int64_t t53 = -273063044248878973LL;

	t53 = ((x569<<(x570/x571))|x572);

	if (t53 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x573 = UINT16_MAX;
	int16_t x574 = INT16_MIN;
	int32_t x575 = INT32_MIN;
	int8_t x576 = INT8_MIN;
	int32_t t54 = 5219304;

	t54 = ((x573<<(x574/x575))|x576);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x593 = 2154050743991361442LL;
	int8_t x594 = 0;
	volatile int64_t x595 = INT64_MIN;
	int64_t x596 = INT64_MAX;

	t55 = ((x593<<(x594/x595))|x596);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x597 = 6469;
	static int64_t x598 = INT64_MIN;
	int64_t x599 = INT64_MIN;
	int8_t x600 = 0;

	t56 = ((x597<<(x598/x599))|x600);

	if (t56 != 12938) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x605 = 13U;
	volatile uint16_t x606 = 3U;
	int8_t x607 = INT8_MIN;
	static volatile int8_t x608 = INT8_MAX;
	volatile int32_t t57 = 25;

	t57 = ((x605<<(x606/x607))|x608);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x609 = UINT16_MAX;
	uint32_t x610 = 21U;
	uint32_t x611 = UINT32_MAX;
	static uint8_t x612 = 0U;
	static volatile int32_t t58 = -963;

	t58 = ((x609<<(x610/x611))|x612);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x621 = UINT32_MAX;
	volatile int8_t x622 = INT8_MIN;
	int32_t x623 = INT32_MIN;
	static volatile uint32_t t59 = UINT32_MAX;

	t59 = ((x621<<(x622/x623))|x624);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x625 = 1U;
	volatile int8_t x626 = -1;
	volatile int8_t x627 = INT8_MIN;
	volatile int32_t t60 = 644537265;

	t60 = ((x625<<(x626/x627))|x628);

	if (t60 != 3183) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x637 = UINT32_MAX;
	volatile uint8_t x638 = UINT8_MAX;
	int64_t x639 = 33971550268LL;

	t61 = ((x637<<(x638/x639))|x640);

	if (t61 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x645 = 806U;
	int16_t x646 = -1077;
	int16_t x647 = INT16_MAX;
	volatile int32_t t62 = 55;

	t62 = ((x645<<(x646/x647))|x648);

	if (t62 != 807) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x710 = 27U;
	volatile int16_t x712 = INT16_MIN;
	static volatile int64_t t63 = -4151LL;

	t63 = ((x709<<(x710/x711))|x712);

	if (t63 != -21345LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x713 = 41U;
	int16_t x714 = -1;
	static volatile uint8_t x716 = 3U;
	static int32_t t64 = -44;

	t64 = ((x713<<(x714/x715))|x716);

	if (t64 != 43) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x717 = 37;
	int32_t x718 = 1014;
	int8_t x720 = INT8_MIN;
	int32_t t65 = -37499542;

	t65 = ((x717<<(x718/x719))|x720);

	if (t65 != -91) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x721 = 37U;
	int16_t x722 = -1;
	int64_t x723 = INT64_MAX;
	uint64_t x724 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x721<<(x722/x723))|x724);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x733 = 3U;
	int8_t x734 = INT8_MIN;
	uint16_t x735 = UINT16_MAX;
	int16_t x736 = INT16_MIN;
	uint32_t t67 = 384116640U;

	t67 = ((x733<<(x734/x735))|x736);

	if (t67 != 4294934531U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x738 = UINT8_MAX;
	int16_t x739 = INT16_MIN;
	int16_t x740 = -1;
	static uint32_t t68 = UINT32_MAX;

	t68 = ((x737<<(x738/x739))|x740);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x741 = INT32_MAX;
	volatile uint32_t x742 = 208676U;
	int64_t x743 = 543848264143977LL;
	int32_t x744 = -1;
	volatile int32_t t69 = -3;

	t69 = ((x741<<(x742/x743))|x744);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x753 = 0;
	static int16_t x754 = -1;
	int8_t x755 = INT8_MAX;
	int8_t x756 = INT8_MAX;
	int32_t t70 = -6784835;

	t70 = ((x753<<(x754/x755))|x756);

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x773 = UINT32_MAX;
	uint32_t x775 = 113016U;
	uint16_t x776 = 729U;
	uint32_t t71 = UINT32_MAX;

	t71 = ((x773<<(x774/x775))|x776);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x781 = 1;
	static int32_t x782 = 4;
	uint64_t x783 = UINT64_MAX;
	static volatile int64_t x784 = INT64_MAX;
	int64_t t72 = INT64_MAX;

	t72 = ((x781<<(x782/x783))|x784);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x789 = 1;
	uint8_t x790 = 20U;
	volatile int16_t x791 = INT16_MAX;
	int64_t x792 = 1195100843344585173LL;

	t73 = ((x789<<(x790/x791))|x792);

	if (t73 != 1195100843344585173LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x808 = -1;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x805<<(x806/x807))|x808);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x811 = -56614139;
	uint16_t x812 = 2502U;

	t75 = ((x809<<(x810/x811))|x812);

	if (t75 != 45054) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x814 = 245LLU;
	static int8_t x815 = INT8_MIN;
	static volatile int16_t x816 = INT16_MIN;
	static int64_t t76 = 2043LL;

	t76 = ((x813<<(x814/x815))|x816);

	if (t76 != -32739LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x825 = UINT64_MAX;
	int16_t x826 = -1;
	int8_t x827 = 7;
	int64_t x828 = INT64_MIN;
	static volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x825<<(x826/x827))|x828);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x829 = 45080953;
	int64_t x830 = -1LL;
	volatile int64_t x831 = INT64_MIN;

	t78 = ((x829<<(x830/x831))|x832);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x838 = 87U;
	uint8_t x839 = 26U;
	static int8_t x840 = INT8_MIN;
	int32_t t79 = -45;

	t79 = ((x837<<(x838/x839))|x840);

	if (t79 != -96) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x841 = 14864102LLU;
	uint8_t x842 = 118U;
	int16_t x843 = 13880;
	static uint64_t x844 = 191074804576602474LLU;
	uint64_t t80 = 0LLU;

	t80 = ((x841<<(x842/x843))|x844);

	if (t80 != 191074804587220974LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x854 = 7U;
	uint32_t x855 = UINT32_MAX;
	int32_t x856 = 7;

	t81 = ((x853<<(x854/x855))|x856);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x881 = 1U;
	uint16_t x882 = 1U;
	uint32_t x884 = UINT32_MAX;
	uint32_t t82 = UINT32_MAX;

	t82 = ((x881<<(x882/x883))|x884);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x889 = 14LLU;
	static int8_t x890 = -1;
	volatile int32_t x892 = 508219;
	volatile uint64_t t83 = 63842772839604LLU;

	t83 = ((x889<<(x890/x891))|x892);

	if (t83 != 508223LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x897 = 90;
	int16_t x898 = -1;
	static int32_t x899 = INT32_MAX;
	uint8_t x900 = 18U;
	int32_t t84 = 4057392;

	t84 = ((x897<<(x898/x899))|x900);

	if (t84 != 90) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x905 = UINT16_MAX;
	int16_t x906 = INT16_MIN;
	int32_t x907 = INT32_MIN;
	volatile int8_t x908 = INT8_MIN;
	volatile int32_t t85 = -1591;

	t85 = ((x905<<(x906/x907))|x908);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x925 = 0LL;
	int8_t x926 = INT8_MIN;
	volatile uint64_t x927 = 699876975084573467LLU;
	int32_t x928 = INT32_MIN;
	int64_t t86 = 45209278515696541LL;

	t86 = ((x925<<(x926/x927))|x928);

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x949 = 15;
	volatile uint32_t x950 = 378U;
	int64_t x952 = INT64_MIN;
	int64_t t87 = -3806318753778753155LL;

	t87 = ((x949<<(x950/x951))|x952);

	if (t87 != -9223372036854652928LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x993 = 48U;
	int64_t x994 = -1LL;
	int64_t x996 = INT64_MIN;
	int64_t t88 = -702873LL;

	t88 = ((x993<<(x994/x995))|x996);

	if (t88 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x997 = 30413017481028493LL;
	int64_t x998 = -1LL;
	uint8_t x1000 = UINT8_MAX;
	static int64_t t89 = 711920929403LL;

	t89 = ((x997<<(x998/x999))|x1000);

	if (t89 != 30413017481028607LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x1005 = UINT16_MAX;
	static int64_t x1007 = INT64_MAX;
	uint8_t x1008 = 0U;
	int32_t t90 = -158708;

	t90 = ((x1005<<(x1006/x1007))|x1008);

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1025 = INT8_MAX;
	int8_t x1026 = -1;
	static int8_t x1027 = -18;
	volatile int32_t x1028 = INT32_MIN;
	static volatile int32_t t91 = 352;

	t91 = ((x1025<<(x1026/x1027))|x1028);

	if (t91 != -2147483521) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1029 = INT16_MAX;
	int32_t x1030 = -1;
	uint64_t x1032 = 1567432LLU;

	t92 = ((x1029<<(x1030/x1031))|x1032);

	if (t92 != 1572863LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x1049 = 2U;
	int16_t x1051 = -1;
	uint8_t x1052 = UINT8_MAX;
	volatile int32_t t93 = 198358375;

	t93 = ((x1049<<(x1050/x1051))|x1052);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1081 = 9U;
	int64_t x1082 = -10230LL;
	static int64_t x1083 = -29433148LL;

	t94 = ((x1081<<(x1082/x1083))|x1084);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1093 = INT16_MAX;
	int64_t x1095 = 5678598794953LL;
	int64_t t95 = 547054125LL;

	t95 = ((x1093<<(x1094/x1095))|x1096);

	if (t95 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1097 = 12;
	int32_t x1098 = -1;
	int32_t x1099 = -1;
	int16_t x1100 = INT16_MIN;

	t96 = ((x1097<<(x1098/x1099))|x1100);

	if (t96 != -32744) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x1101 = 1;
	int16_t x1102 = -5220;
	int64_t x1103 = INT64_MIN;
	int64_t x1104 = -1LL;
	static int64_t t97 = 13LL;

	t97 = ((x1101<<(x1102/x1103))|x1104);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x1117 = INT8_MAX;
	int16_t x1118 = -1;
	int8_t x1119 = INT8_MIN;
	int32_t t98 = 53790;

	t98 = ((x1117<<(x1118/x1119))|x1120);

	if (t98 != 1919) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1161 = 43U;
	int8_t x1162 = INT8_MIN;
	int8_t x1163 = -16;
	int64_t x1164 = -1LL;

	t99 = ((x1161<<(x1162/x1163))|x1164);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

