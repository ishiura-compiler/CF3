#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x15 = 57963009;
volatile int32_t x19 = 15041;
int16_t x21 = INT16_MIN;
int32_t x22 = -1;
int32_t x25 = -1;
uint8_t x28 = 15U;
uint32_t x45 = 572825573U;
uint32_t x46 = UINT32_MAX;
volatile uint64_t t6 = 501598568LLU;
int64_t x57 = INT64_MIN;
uint8_t x74 = 3U;
uint8_t x75 = 34U;
uint64_t x76 = UINT64_MAX;
int64_t t12 = -262663792290537496LL;
int64_t x86 = -14330269LL;
int64_t x90 = -13246743LL;
static volatile uint16_t x92 = UINT16_MAX;
static int8_t x107 = INT8_MIN;
static int64_t x120 = -393397401181046315LL;
static uint64_t x151 = UINT64_MAX;
static volatile uint8_t x156 = 1U;
volatile int32_t x165 = 290;
static uint64_t x171 = UINT64_MAX;
int16_t x177 = -5;
uint32_t x179 = UINT32_MAX;
uint8_t x185 = UINT8_MAX;
int8_t x197 = INT8_MIN;
uint64_t t30 = 891463141576053107LLU;
uint32_t x210 = 722U;
int32_t x211 = 14456;
int32_t x215 = INT32_MIN;
int16_t x222 = -1;
static int32_t x223 = -1;
int32_t x228 = -135;
int16_t x230 = -1;
volatile uint64_t x240 = 42949137289LLU;
uint8_t x241 = 106U;
uint8_t x244 = UINT8_MAX;
int8_t x246 = INT8_MAX;
volatile uint32_t t39 = 26U;
static int16_t x294 = -449;
static volatile uint64_t x308 = 2077183732712LLU;
int32_t x310 = INT32_MAX;
volatile uint64_t t46 = 1192712LLU;
static int32_t x321 = INT32_MAX;
static uint64_t x323 = 22020142176LLU;
int32_t x336 = -7;
volatile int32_t x344 = -1;
volatile int32_t x346 = -45130;
static int8_t x348 = 6;
int32_t x356 = -844;
int32_t x358 = -834923;
int8_t x360 = -1;
volatile int64_t t55 = -2722879867283LL;
int8_t x371 = INT8_MIN;
int32_t x372 = 67;
uint64_t t57 = 1686496667405LLU;
int32_t x382 = -1;
int16_t x398 = INT16_MAX;
static int16_t x400 = -1;
volatile int32_t t60 = 2259331;
static volatile uint32_t x421 = UINT32_MAX;
volatile int16_t x423 = INT16_MAX;
uint8_t x424 = 7U;
volatile uint32_t t62 = 6592196U;
volatile uint32_t x438 = 2650488U;
volatile int16_t x442 = 7;
volatile uint8_t x443 = 26U;
volatile int8_t x444 = -1;
static uint32_t x476 = UINT32_MAX;
int8_t x477 = -1;
static uint32_t x482 = 0U;
volatile uint32_t t72 = 1311U;
uint64_t x487 = 194247349LLU;
volatile int8_t x489 = INT8_MIN;
int64_t t76 = -107736834277591036LL;
int32_t x513 = INT32_MAX;
uint16_t x514 = 106U;
uint64_t x516 = 6947LLU;
volatile int8_t x527 = -1;
volatile int32_t t81 = -5;
volatile int8_t x530 = -1;
static int32_t x532 = INT32_MIN;
int16_t x543 = 2;
int8_t x551 = 24;
uint32_t x561 = 6791U;
int8_t x565 = 0;
static volatile uint16_t x577 = 0U;
uint8_t x590 = 4U;
int64_t x591 = -1LL;
volatile uint64_t x593 = 40111457840LLU;
int16_t x603 = 195;
int64_t x613 = -1LL;
uint64_t x615 = 1810977513145121LLU;
static int16_t x619 = INT16_MIN;
uint64_t x622 = UINT64_MAX;
volatile int32_t x630 = -8;
volatile int32_t x632 = INT32_MAX;


void f0(void) {
	uint64_t x13 = UINT64_MAX;
	static uint32_t x14 = 2468569U;
	uint64_t x16 = 23456LLU;
	uint64_t t0 = 57109427747LLU;

	t0 = ((x13^(x14-x15))*x16);

	if (t0 != 18446644632634217824LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = UINT64_MAX;
	static int16_t x18 = INT16_MIN;
	int64_t x20 = INT64_MAX;
	uint64_t t1 = 3062566954507404718LLU;

	t1 = ((x17^(x18-x19))*x20);

	if (t1 != 18446744073709503808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x23 = INT64_MIN;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t2 = 0LLU;

	t2 = ((x21^(x22-x23))*x24);

	if (t2 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x26 = -1;
	static volatile int32_t x27 = 1391581;
	volatile int32_t t3 = -703799;

	t3 = ((x25^(x26-x27))*x28);

	if (t3 != 20873715) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = -1;
	int32_t x38 = INT32_MIN;
	int32_t x39 = -4;
	int8_t x40 = 1;
	int32_t t4 = 580;

	t4 = ((x37^(x38-x39))*x40);

	if (t4 != 2147483643) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x47 = INT8_MIN;
	uint64_t x48 = 28802LLU;
	volatile uint64_t t5 = 3285683479857227LLU;

	t5 = ((x45^(x46-x47))*x48);

	if (t5 != 16498519993396LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x49 = -618059360974618223LL;
	static uint32_t x50 = UINT32_MAX;
	uint16_t x51 = 1U;
	volatile uint64_t x52 = UINT64_MAX;

	t6 = ((x49^(x50-x51))*x52);

	if (t6 != 618059358122590609LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MAX;
	uint32_t x55 = UINT32_MAX;
	int16_t x56 = 1594;
	volatile uint32_t t7 = 2282U;

	t7 = ((x53^(x54-x55))*x56);

	if (t7 != 4294761670U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x58 = 592315753879298853LLU;
	int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MIN;
	uint64_t t8 = 703621632LLU;

	t8 = ((x57^(x58-x59))*x60);

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x62 = -237;
	int16_t x63 = -1931;
	int8_t x64 = INT8_MAX;
	volatile int32_t t9 = 49809431;

	t9 = ((x61^(x62-x63))*x64);

	if (t9 != 8107807) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x65 = UINT64_MAX;
	volatile int64_t x66 = INT64_MIN;
	static int64_t x67 = INT64_MIN;
	int64_t x68 = -78296LL;
	static uint64_t t10 = 797003144827899LLU;

	t10 = ((x65^(x66-x67))*x68);

	if (t10 != 78296LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x73 = INT64_MIN;
	volatile uint64_t t11 = 963332LLU;

	t11 = ((x73^(x74-x75))*x76);

	if (t11 != 9223372036854775839LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x81 = 67U;
	int32_t x82 = 1776;
	static int64_t x83 = 899056LL;
	int16_t x84 = 11;

	t12 = ((x81^(x82-x83))*x84);

	if (t12 != -9869343LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x85 = 6922LLU;
	volatile int8_t x87 = -13;
	static int8_t x88 = -26;
	uint64_t t13 = 31945345182466630LLU;

	t13 = ((x85^(x86-x87))*x88);

	if (t13 != 372646300LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x89 = 187033120125LL;
	int32_t x91 = 0;
	volatile int64_t t14 = 11978LL;

	t14 = ((x89^(x90-x91))*x92);

	if (t14 != -12257996644758420LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x105 = 1576017115712433679LL;
	int16_t x106 = -1;
	volatile int16_t x108 = 1;
	int64_t t15 = 168388024LL;

	t15 = ((x105^(x106-x107))*x108);

	if (t15 != 1576017115712433776LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x113 = INT8_MAX;
	uint16_t x114 = 65U;
	static int8_t x115 = INT8_MAX;
	int64_t x116 = 2LL;
	volatile int64_t t16 = -805983732898320937LL;

	t16 = ((x113^(x114-x115))*x116);

	if (t16 != -134LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x117 = INT32_MAX;
	int32_t x118 = INT32_MIN;
	int32_t x119 = -1;
	static volatile int64_t t17 = -31197952LL;

	t17 = ((x117^(x118-x119))*x120);

	if (t17 != 786794802362092630LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x129 = -1LL;
	int8_t x130 = 2;
	static volatile uint8_t x131 = 1U;
	int16_t x132 = INT16_MIN;
	volatile int64_t t18 = 536316978475LL;

	t18 = ((x129^(x130-x131))*x132);

	if (t18 != 65536LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x145 = -1235LL;
	int64_t x146 = INT64_MAX;
	int64_t x147 = INT64_MAX;
	int16_t x148 = -60;
	volatile int64_t t19 = -127674881715743LL;

	t19 = ((x145^(x146-x147))*x148);

	if (t19 != 74100LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x149 = 63U;
	int8_t x150 = INT8_MIN;
	uint32_t x152 = 16234569U;
	uint64_t t20 = 102034482LLU;

	t20 = ((x149^(x150-x151))*x152);

	if (t20 != 18446744072638070062LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x153 = -1;
	uint32_t x154 = UINT32_MAX;
	int64_t x155 = 6LL;
	static volatile int64_t t21 = 2LL;

	t21 = ((x153^(x154-x155))*x156);

	if (t21 != -4294967290LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x166 = UINT32_MAX;
	static uint32_t x167 = UINT32_MAX;
	volatile int32_t x168 = INT32_MIN;
	static volatile uint32_t t22 = 95197U;

	t22 = ((x165^(x166-x167))*x168);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x169 = INT16_MAX;
	volatile int16_t x170 = INT16_MAX;
	static int64_t x172 = INT64_MAX;
	uint64_t t23 = 1338141LLU;

	t23 = ((x169^(x170-x171))*x172);

	if (t23 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x178 = 56U;
	static uint16_t x180 = 89U;
	static uint32_t t24 = 0U;

	t24 = ((x177^(x178-x179))*x180);

	if (t24 != 4294961778U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x181 = 899U;
	int32_t x182 = -2510560;
	uint32_t x183 = 1U;
	uint8_t x184 = 1U;
	uint32_t t25 = 213U;

	t25 = ((x181^(x182-x183))*x184);

	if (t25 != 4292457116U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x186 = INT8_MIN;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MIN;
	volatile uint64_t t26 = 222382580598679LLU;

	t26 = ((x185^(x186-x187))*x188);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x193 = UINT64_MAX;
	uint8_t x194 = 19U;
	uint32_t x195 = UINT32_MAX;
	int64_t x196 = -21310085LL;
	uint64_t t27 = 7586704561405LLU;

	t27 = ((x193^(x194-x195))*x196);

	if (t27 != 447511785LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x198 = 6987562393930176LL;
	volatile int8_t x199 = INT8_MIN;
	static volatile int16_t x200 = 43;
	int64_t t28 = 240622407330991729LL;

	t28 = ((x197^(x198-x199))*x200);

	if (t28 != -300465182939003072LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x201 = INT64_MIN;
	static int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MIN;
	int16_t x204 = -1;
	int64_t t29 = 389283LL;

	t29 = ((x201^(x202-x203))*x204);

	if (t29 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x205 = INT64_MIN;
	volatile uint16_t x206 = 1U;
	uint64_t x207 = UINT64_MAX;
	static int32_t x208 = INT32_MAX;

	t30 = ((x205^(x206-x207))*x208);

	if (t30 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x209 = -1;
	uint64_t x212 = 436752888711931LLU;
	uint64_t t31 = 32LLU;

	t31 = ((x209^(x210-x211))*x212);

	if (t31 != 5997927420680948423LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x213 = 29;
	int16_t x214 = INT16_MIN;
	volatile uint64_t x216 = 1959LLU;
	volatile uint64_t t32 = 3791752111071LLU;

	t32 = ((x213^(x214-x215))*x216);

	if (t32 != 4206856330731LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x221 = -1LL;
	int64_t x224 = 148942LL;
	int64_t t33 = -2351LL;

	t33 = ((x221^(x222-x223))*x224);

	if (t33 != -148942LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x225 = 4682U;
	int8_t x226 = INT8_MAX;
	volatile uint16_t x227 = UINT16_MAX;
	volatile uint32_t t34 = 100U;

	t34 = ((x225^(x226-x227))*x228);

	if (t34 != 8198010U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x229 = INT16_MIN;
	int8_t x231 = -24;
	int16_t x232 = -29;
	volatile int32_t t35 = 503100;

	t35 = ((x229^(x230-x231))*x232);

	if (t35 != 949605) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x237 = INT8_MAX;
	uint8_t x238 = 0U;
	uint64_t x239 = 1505LLU;
	volatile uint64_t t36 = 6004078443112LLU;

	t36 = ((x237^(x238-x239))*x240);

	if (t36 != 18446682226951855456LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x242 = INT16_MAX;
	static int16_t x243 = INT16_MAX;
	int32_t t37 = 1072;

	t37 = ((x241^(x242-x243))*x244);

	if (t37 != 27030) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x245 = 7805;
	static int16_t x247 = 1444;
	int64_t x248 = -8258664LL;
	volatile int64_t t38 = -645819LL;

	t38 = ((x245^(x246-x247))*x248);

	if (t38 != 57827165328LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x253 = 29954U;
	static uint16_t x254 = UINT16_MAX;
	volatile uint32_t x255 = 10706794U;
	volatile uint8_t x256 = 18U;

	t39 = ((x253^(x254-x255))*x256);

	if (t39 != 4103668894U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x257 = 576290196LLU;
	static uint8_t x258 = UINT8_MAX;
	uint16_t x259 = 766U;
	static volatile int64_t x260 = INT64_MAX;
	volatile uint64_t t40 = 820393452911482LLU;

	t40 = ((x257^(x258-x259))*x260);

	if (t40 != 9223372037431065707LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x273 = INT16_MIN;
	volatile int32_t x274 = -1;
	volatile int64_t x275 = -1LL;
	int16_t x276 = INT16_MAX;
	int64_t t41 = -114309100167172LL;

	t41 = ((x273^(x274-x275))*x276);

	if (t41 != -1073709056LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x277 = INT8_MIN;
	static int8_t x278 = INT8_MAX;
	volatile uint64_t x279 = 2LLU;
	volatile int16_t x280 = INT16_MIN;
	uint64_t t42 = 10637LLU;

	t42 = ((x277^(x278-x279))*x280);

	if (t42 != 98304LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x293 = -432900056090068460LL;
	int16_t x295 = -1;
	static volatile uint8_t x296 = 19U;
	static int64_t t43 = -808352064LL;

	t43 = ((x293^(x294-x295))*x296);

	if (t43 != 8225101065711292988LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x297 = UINT32_MAX;
	static int8_t x298 = INT8_MIN;
	volatile int32_t x299 = INT32_MIN;
	static uint8_t x300 = UINT8_MAX;
	volatile uint32_t t44 = 21961U;

	t44 = ((x297^(x298-x299))*x300);

	if (t44 != 2147516033U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x305 = UINT64_MAX;
	uint32_t x306 = 244579560U;
	uint16_t x307 = 27U;
	static volatile uint64_t t45 = 458LLU;

	t45 = ((x305^(x306-x307))*x308);

	if (t45 != 8472204684785929040LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x309 = INT8_MIN;
	static volatile uint64_t x311 = 0LLU;
	static int8_t x312 = INT8_MIN;

	t46 = ((x309^(x310-x311))*x312);

	if (t46 != 274877890688LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x313 = UINT32_MAX;
	uint64_t x314 = 238064LLU;
	int8_t x315 = 15;
	static int16_t x316 = INT16_MIN;
	static volatile uint64_t t47 = 53LLU;

	t47 = ((x313^(x314-x315))*x316);

	if (t47 != 18446603344021618688LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x322 = UINT16_MAX;
	int16_t x324 = -10368;
	volatile uint64_t t48 = 0LLU;

	t48 = ((x321^(x322-x323))*x324);

	if (t48 != 239263165108224LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x333 = UINT64_MAX;
	uint16_t x334 = UINT16_MAX;
	static uint8_t x335 = 113U;
	volatile uint64_t t49 = 56080782807570837LLU;

	t49 = ((x333^(x334-x335))*x336);

	if (t49 != 457961LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x337 = -121730012LL;
	volatile uint16_t x338 = 8919U;
	int8_t x339 = INT8_MAX;
	volatile int64_t x340 = -1LL;
	int64_t t50 = 16241567918LL;

	t50 = ((x337^(x338-x339))*x340);

	if (t50 != 121721220LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x341 = 181286952LL;
	static int8_t x342 = 1;
	int16_t x343 = INT16_MIN;
	volatile int64_t t51 = 0LL;

	t51 = ((x341^(x342-x343))*x344);

	if (t51 != -181319721LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x345 = INT8_MIN;
	int32_t x347 = -1;
	volatile int32_t t52 = -119517;

	t52 = ((x345^(x346-x347))*x348);

	if (t52 != 270666) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x349 = 51LL;
	int8_t x350 = INT8_MAX;
	int64_t x351 = 34404448LL;
	int32_t x352 = 14065;
	int64_t t53 = 273718066647LL;

	t53 = ((x349^(x350-x351))*x352);

	if (t53 != -483896592020LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x353 = INT8_MAX;
	static int16_t x354 = INT16_MIN;
	uint8_t x355 = 0U;
	static volatile int32_t t54 = 76484;

	t54 = ((x353^(x354-x355))*x356);

	if (t54 != 27549004) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x357 = INT32_MIN;
	int64_t x359 = INT64_MIN;

	t55 = ((x357^(x358-x359))*x360);

	if (t55 != 9223372034708127083LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x369 = 15U;
	volatile uint64_t x370 = UINT64_MAX;
	uint64_t t56 = 16118387LLU;

	t56 = ((x369^(x370-x371))*x372);

	if (t56 != 7504LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x377 = 43638157LLU;
	int32_t x378 = -2429255;
	static volatile uint64_t x379 = 1069596541LLU;
	uint64_t x380 = 4120484204029675448LLU;

	t57 = ((x377^(x378-x379))*x380);

	if (t57 != 11208816955123648056LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x381 = 1824U;
	volatile uint8_t x383 = UINT8_MAX;
	volatile int64_t x384 = -78LL;
	int64_t t58 = -105582242905091323LL;

	t58 = ((x381^(x382-x383))*x384);

	if (t58 != 157248LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x393 = 1;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = -8;
	volatile uint64_t t59 = 289096379917LLU;

	t59 = ((x393^(x394-x395))*x396);

	if (t59 != 17179869184LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x397 = INT32_MIN;
	static int32_t x399 = -1;

	t60 = ((x397^(x398-x399))*x400);

	if (t60 != 2147450880) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x405 = 321571U;
	int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MIN;
	static uint8_t x408 = 18U;
	volatile uint32_t t61 = 197457516U;

	t61 = ((x405^(x406-x407))*x408);

	if (t61 != 5788278U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x422 = 48;

	t62 = ((x421^(x422-x423))*x424);

	if (t62 != 229026U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x425 = UINT32_MAX;
	int32_t x426 = 74;
	int8_t x427 = -50;
	uint8_t x428 = UINT8_MAX;
	uint32_t t63 = 0U;

	t63 = ((x425^(x426-x427))*x428);

	if (t63 != 4294935421U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x429 = -667;
	int16_t x430 = -9625;
	volatile uint32_t x431 = 38U;
	volatile int64_t x432 = 72970LL;
	static int64_t t64 = 4831364660540LL;

	t64 = ((x429^(x430-x431))*x432);

	if (t64 != 731159400LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x433 = 118073U;
	int16_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	uint32_t x436 = 2066U;
	volatile uint64_t t65 = 11231LLU;

	t65 = ((x433^(x434-x435))*x436);

	if (t65 != 243938818LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x437 = INT32_MIN;
	int16_t x439 = INT16_MIN;
	int16_t x440 = 9;
	uint32_t t66 = 3U;

	t66 = ((x437^(x438-x439))*x440);

	if (t66 != 2171632952U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x441 = INT16_MIN;
	int32_t t67 = 419914294;

	t67 = ((x441^(x442-x443))*x444);

	if (t67 != -32749) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x453 = -8LL;
	int16_t x454 = 903;
	volatile int16_t x455 = -1;
	volatile int16_t x456 = -1;
	volatile int64_t t68 = -2909LL;

	t68 = ((x453^(x454-x455))*x456);

	if (t68 != 912LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x465 = 1794LLU;
	uint32_t x466 = 7U;
	int8_t x467 = -1;
	static int8_t x468 = INT8_MAX;
	uint64_t t69 = 937700334487794LLU;

	t69 = ((x465^(x466-x467))*x468);

	if (t69 != 228854LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x473 = -3318;
	int8_t x474 = 14;
	uint64_t x475 = 234653430245536LLU;
	uint64_t t70 = 54LLU;

	t70 = ((x473^(x474-x475))*x476);

	if (t70 != 9392836437552208796LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x478 = 67U;
	static int8_t x479 = INT8_MIN;
	uint8_t x480 = 13U;
	static volatile int32_t t71 = -162;

	t71 = ((x477^(x478-x479))*x480);

	if (t71 != -2548) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x481 = INT32_MIN;
	volatile int8_t x483 = INT8_MIN;
	int8_t x484 = INT8_MAX;

	t72 = ((x481^(x482-x483))*x484);

	if (t72 != 2147499904U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x485 = UINT8_MAX;
	uint16_t x486 = UINT16_MAX;
	volatile int16_t x488 = INT16_MIN;
	static volatile uint64_t t73 = 28565207233846360LLU;

	t73 = ((x485^(x486-x487))*x488);

	if (t73 != 6362946174976LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x490 = 94U;
	static int16_t x491 = 2;
	int32_t x492 = 79906;
	static int32_t t74 = 38;

	t74 = ((x489^(x490-x491))*x492);

	if (t74 != -2876616) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x497 = 57050898U;
	uint16_t x498 = UINT16_MAX;
	int32_t x499 = INT32_MAX;
	static uint8_t x500 = 27U;
	uint32_t t75 = 1U;

	t75 = ((x497^(x498-x499))*x500);

	if (t75 != 3689627366U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x501 = 7U;
	volatile uint32_t x502 = 13U;
	int64_t x503 = -30803877524303LL;
	int32_t x504 = -9259;

	t76 = ((x501^(x502-x503))*x504);

	if (t76 != -285213101997632585LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x505 = 270097921170LLU;
	int64_t x506 = INT64_MIN;
	int16_t x507 = -659;
	int8_t x508 = INT8_MIN;
	volatile uint64_t t77 = 16893LLU;

	t77 = ((x505^(x506-x507))*x508);

	if (t77 != 18446709501175594880LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x515 = -245570;
	static volatile uint64_t t78 = 19050557616255514LLU;

	t78 = ((x513^(x514-x515))*x516);

	if (t78 != 14916862184537LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x517 = -2;
	static volatile int64_t x518 = INT64_MIN;
	int32_t x519 = -1;
	int8_t x520 = -1;
	int64_t t79 = -945939747645LL;

	t79 = ((x517^(x518-x519))*x520);

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x521 = INT16_MIN;
	volatile uint64_t x522 = 714080384590LLU;
	uint8_t x523 = UINT8_MAX;
	int32_t x524 = INT32_MIN;
	uint64_t t80 = 1979461LLU;

	t80 = ((x521^(x522-x523))*x524);

	if (t80 != 2396131985656381440LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x525 = 8;
	static uint16_t x526 = 2044U;
	int16_t x528 = -129;

	t81 = ((x525^(x526-x527))*x528);

	if (t81 != -262773) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x529 = 37U;
	int16_t x531 = INT16_MIN;
	uint32_t t82 = 11U;

	t82 = ((x529^(x530-x531))*x532);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x541 = 0U;
	uint16_t x542 = 120U;
	int64_t x544 = -2002927666945493LL;
	volatile int64_t t83 = 728206223952LL;

	t83 = ((x541^(x542-x543))*x544);

	if (t83 != -236345464699568174LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x549 = 102U;
	volatile uint16_t x550 = UINT16_MAX;
	int8_t x552 = -1;
	int32_t t84 = 470;

	t84 = ((x549^(x550-x551))*x552);

	if (t84 != -65409) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x553 = UINT64_MAX;
	static volatile uint16_t x554 = 155U;
	int8_t x555 = -1;
	int32_t x556 = INT32_MIN;
	volatile uint64_t t85 = 42849LLU;

	t85 = ((x553^(x554-x555))*x556);

	if (t85 != 337154932736LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x557 = INT16_MIN;
	int8_t x558 = 14;
	int16_t x559 = INT16_MIN;
	int16_t x560 = 4;
	int32_t t86 = 1541953;

	t86 = ((x557^(x558-x559))*x560);

	if (t86 != -262088) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x562 = -1;
	int32_t x563 = INT32_MIN;
	int16_t x564 = -1;
	static volatile uint32_t t87 = 24928U;

	t87 = ((x561^(x562-x563))*x564);

	if (t87 != 2147490440U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x566 = -1;
	static volatile uint8_t x567 = UINT8_MAX;
	int16_t x568 = INT16_MIN;
	int32_t t88 = -126;

	t88 = ((x565^(x566-x567))*x568);

	if (t88 != 8388608) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x569 = 2U;
	static uint8_t x570 = UINT8_MAX;
	uint16_t x571 = UINT16_MAX;
	uint64_t x572 = 19438889243LLU;
	uint64_t t89 = 183193611440790LLU;

	t89 = ((x569^(x570-x571))*x572);

	if (t89 != 18445475141897547062LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x578 = 5004U;
	int64_t x579 = -1LL;
	uint16_t x580 = 88U;
	int64_t t90 = -22957908789LL;

	t90 = ((x577^(x578-x579))*x580);

	if (t90 != 440440LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x589 = UINT8_MAX;
	int16_t x592 = INT16_MIN;
	volatile int64_t t91 = -19484381026371LL;

	t91 = ((x589^(x590-x591))*x592);

	if (t91 != -8192000LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x594 = UINT32_MAX;
	volatile int32_t x595 = INT32_MAX;
	uint16_t x596 = 64U;
	static uint64_t t92 = 169994770351LLU;

	t92 = ((x593^(x594-x595))*x596);

	if (t92 != 2704572255232LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x601 = INT16_MIN;
	int64_t x602 = -445759799LL;
	int8_t x604 = -1;
	int64_t t93 = 96930833498LL;

	t93 = ((x601^(x602-x603))*x604);

	if (t93 != -445758982LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x605 = -1LL;
	volatile int8_t x606 = INT8_MIN;
	uint16_t x607 = 447U;
	static volatile int16_t x608 = INT16_MAX;
	volatile int64_t t94 = 1LL;

	t94 = ((x605^(x606-x607))*x608);

	if (t94 != 18808258LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x609 = INT16_MIN;
	volatile uint32_t x610 = 1U;
	int16_t x611 = INT16_MAX;
	uint16_t x612 = UINT16_MAX;
	static volatile uint32_t t95 = 18U;

	t95 = ((x609^(x610-x611))*x612);

	if (t95 != 131070U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x614 = 15360;
	static int16_t x616 = INT16_MAX;
	uint64_t t96 = 168098083005206LLU;

	t96 = ((x613^(x614-x615))*x616);

	if (t96 != 4000067951594191072LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x617 = INT16_MIN;
	static volatile uint32_t x618 = 61U;
	int16_t x620 = -13;
	uint32_t t97 = 10596U;

	t97 = ((x617^(x618-x619))*x620);

	if (t97 != 851175U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x621 = INT16_MIN;
	int8_t x623 = -14;
	int64_t x624 = -12665416972129LL;
	uint64_t t98 = 84126LLU;

	t98 = ((x621^(x622-x623))*x624);

	if (t98 != 414855732922085395LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x629 = -1;
	int64_t x631 = -1LL;
	int64_t t99 = -155051607320LL;

	t99 = ((x629^(x630-x631))*x632);

	if (t99 != 12884901882LL) { NG(); } else { ; }
	
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

