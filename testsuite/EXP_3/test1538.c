#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x16 = INT32_MIN;
int16_t x34 = INT16_MAX;
int8_t x35 = INT8_MIN;
volatile int32_t t2 = -852;
uint32_t x48 = UINT32_MAX;
uint64_t t3 = 10605196LLU;
int32_t x57 = 159;
int64_t x71 = -323952500741040LL;
int64_t x77 = 2807650595339LL;
volatile uint16_t x79 = UINT16_MAX;
static uint32_t x92 = UINT32_MAX;
static int16_t x114 = -1;
volatile int64_t t11 = 3102335848LL;
volatile int32_t x125 = 0;
static int16_t x126 = INT16_MIN;
volatile int32_t t12 = -20247;
uint16_t x188 = 25791U;
volatile uint64_t t18 = 2LLU;
volatile int64_t t19 = -6908887522LL;
int8_t x211 = INT8_MIN;
uint8_t x212 = 3U;
static volatile int64_t t23 = -91859LL;
volatile int32_t x223 = -1;
int64_t x227 = INT64_MIN;
int32_t x232 = -1;
volatile int64_t t26 = 218428596080LL;
volatile int32_t t28 = 1129;
int8_t x250 = -2;
int8_t x255 = -1;
uint32_t x285 = 472584818U;
int32_t x298 = -1;
static uint16_t x304 = 5002U;
static int32_t x321 = INT32_MAX;
int32_t x330 = -1;
uint64_t x340 = UINT64_MAX;
static int32_t x376 = -5;
static uint16_t x396 = UINT16_MAX;
static volatile uint64_t x410 = 30608LLU;
uint8_t x412 = 46U;
int32_t x439 = INT32_MIN;
volatile uint32_t x440 = UINT32_MAX;
static volatile int8_t x467 = -1;
int8_t x473 = -1;
int8_t x483 = 48;
int32_t x490 = -30;
int32_t t56 = -455486476;
static int32_t x496 = INT32_MAX;
uint8_t x516 = UINT8_MAX;
uint16_t x525 = 3433U;
int16_t x526 = INT16_MIN;
volatile uint8_t x527 = 29U;
int32_t t61 = 2667678;
volatile int16_t x531 = INT16_MIN;
int8_t x532 = 2;
int32_t t62 = 213387813;
uint8_t x541 = UINT8_MAX;
static volatile int64_t t64 = -117157995LL;
int8_t x557 = 1;
static volatile int8_t x558 = -2;
int64_t t70 = -6210481198590LL;
static int32_t t72 = -10;
volatile uint16_t x629 = 0U;
int16_t x633 = INT16_MIN;
static int8_t x660 = INT8_MIN;
static uint32_t t76 = 0U;
int8_t x669 = -1;
volatile uint8_t x673 = 1U;
volatile uint8_t x680 = UINT8_MAX;
int16_t x693 = -1;
volatile uint64_t t83 = 120613833857LLU;
uint32_t x726 = 50833197U;
volatile int64_t t84 = -2928891893LL;
int32_t x737 = -1;
volatile int32_t t86 = 1;
uint32_t x742 = 258341U;
uint32_t x743 = 30U;
static uint32_t t87 = 871707U;
static volatile int16_t x750 = INT16_MIN;
int64_t x751 = -1LL;
int32_t x752 = INT32_MAX;
volatile int32_t t88 = 90586;
static int8_t x772 = 5;
volatile uint16_t x778 = 847U;
int32_t t92 = 404;
int64_t x788 = INT64_MAX;
static volatile int32_t t94 = -3;
int64_t x802 = INT64_MIN;
int16_t x817 = 1;
uint32_t x830 = 22884U;
int32_t x832 = INT32_MAX;


void f0(void) {
	uint8_t x1 = 2U;
	volatile int8_t x2 = INT8_MIN;
	uint32_t x3 = 12U;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -2182937;

	t0 = ((x1-x2)/(x3<=x4));

	if (t0 != 130) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 51U;
	static uint32_t x14 = UINT32_MAX;
	int64_t x15 = INT64_MIN;
	static volatile uint32_t t1 = 4064565U;

	t1 = ((x13-x14)/(x15<=x16));

	if (t1 != 52U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x33 = INT16_MAX;
	int8_t x36 = INT8_MIN;

	t2 = ((x33-x34)/(x35<=x36));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x45 = 6LLU;
	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;

	t3 = ((x45-x46)/(x47<=x48));

	if (t3 != 32774LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = -1;
	int64_t x60 = 1398601LL;
	uint64_t t4 = 2LLU;

	t4 = ((x57-x58)/(x59<=x60));

	if (t4 != 160LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x69 = -1;
	static int64_t x70 = INT64_MIN;
	static int32_t x72 = 3490221;
	volatile int64_t t5 = INT64_MAX;

	t5 = ((x69-x70)/(x71<=x72));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x78 = 6U;
	uint32_t x80 = UINT32_MAX;
	int64_t t6 = -45843375863144813LL;

	t6 = ((x77-x78)/(x79<=x80));

	if (t6 != 2807650595333LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x81 = 2869LLU;
	uint64_t x82 = 3176206535185LLU;
	uint64_t x83 = 358761322LLU;
	int64_t x84 = INT64_MIN;
	static volatile uint64_t t7 = 15484428307LLU;

	t7 = ((x81-x82)/(x83<=x84));

	if (t7 != 18446740897503019300LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x89 = 24312797U;
	volatile int16_t x90 = -1;
	static int64_t x91 = 810LL;
	volatile uint32_t t8 = 2367928U;

	t8 = ((x89-x90)/(x91<=x92));

	if (t8 != 24312798U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x97 = INT8_MAX;
	int8_t x98 = INT8_MIN;
	volatile int16_t x99 = INT16_MIN;
	uint16_t x100 = UINT16_MAX;
	static volatile int32_t t9 = 9762901;

	t9 = ((x97-x98)/(x99<=x100));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x109 = -1LL;
	static volatile int64_t x110 = -1384665833032LL;
	int32_t x111 = -44650;
	int64_t x112 = INT64_MAX;
	volatile int64_t t10 = -103390250LL;

	t10 = ((x109-x110)/(x111<=x112));

	if (t10 != 1384665833031LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x113 = -33329422661938LL;
	int32_t x115 = -1;
	volatile int64_t x116 = -1LL;

	t11 = ((x113-x114)/(x115<=x116));

	if (t11 != -33329422661937LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x127 = 7;
	uint32_t x128 = UINT32_MAX;

	t12 = ((x125-x126)/(x127<=x128));

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x133 = 3853137420550388291LLU;
	volatile int32_t x134 = INT32_MAX;
	static int16_t x135 = INT16_MAX;
	uint32_t x136 = UINT32_MAX;
	uint64_t t13 = 1967416376LLU;

	t13 = ((x133-x134)/(x135<=x136));

	if (t13 != 3853137418402904644LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x141 = -1;
	uint8_t x142 = UINT8_MAX;
	volatile uint64_t x143 = 10672813297484254LLU;
	volatile int32_t x144 = INT32_MIN;
	int32_t t14 = 539076;

	t14 = ((x141-x142)/(x143<=x144));

	if (t14 != -256) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x157 = 26757588U;
	static volatile int8_t x158 = INT8_MAX;
	static uint64_t x159 = 2772LLU;
	int8_t x160 = -1;
	uint32_t t15 = 744105U;

	t15 = ((x157-x158)/(x159<=x160));

	if (t15 != 26757461U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x165 = 1093U;
	int64_t x166 = 3234766898639661LL;
	volatile int64_t x167 = INT64_MIN;
	static uint8_t x168 = 15U;
	volatile int64_t t16 = 9906LL;

	t16 = ((x165-x166)/(x167<=x168));

	if (t16 != -3234766898638568LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x181 = INT16_MIN;
	uint64_t x182 = 1587328779949297173LLU;
	static int8_t x183 = INT8_MIN;
	int8_t x184 = 1;
	volatile uint64_t t17 = 789973021LLU;

	t17 = ((x181-x182)/(x183<=x184));

	if (t17 != 16859415293760221675LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x185 = -1;
	volatile uint64_t x186 = 1778791170533015057LLU;
	int64_t x187 = INT64_MIN;

	t18 = ((x185-x186)/(x187<=x188));

	if (t18 != 16667952903176536558LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x197 = -1986961348305581LL;
	static int8_t x198 = -16;
	int32_t x199 = INT32_MIN;
	static int16_t x200 = INT16_MIN;

	t19 = ((x197-x198)/(x199<=x200));

	if (t19 != -1986961348305565LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x201 = 9U;
	int64_t x202 = INT64_MAX;
	int32_t x203 = INT32_MIN;
	volatile int8_t x204 = -1;
	static int64_t t20 = -88LL;

	t20 = ((x201-x202)/(x203<=x204));

	if (t20 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x205 = UINT8_MAX;
	int16_t x206 = INT16_MAX;
	int64_t x207 = -1LL;
	int32_t x208 = INT32_MAX;
	int32_t t21 = -5913719;

	t21 = ((x205-x206)/(x207<=x208));

	if (t21 != -32512) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x209 = 1214094365439LLU;
	volatile int16_t x210 = INT16_MIN;
	volatile uint64_t t22 = 15007052164LLU;

	t22 = ((x209-x210)/(x211<=x212));

	if (t22 != 1214094398207LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	volatile int16_t x220 = -1;

	t23 = ((x217-x218)/(x219<=x220));

	if (t23 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x221 = 1682051072LL;
	uint32_t x222 = UINT32_MAX;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int64_t t24 = 18542LL;

	t24 = ((x221-x222)/(x223<=x224));

	if (t24 != -2612916223LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x225 = INT16_MIN;
	static uint8_t x226 = UINT8_MAX;
	int64_t x228 = INT64_MAX;
	int32_t t25 = -86721560;

	t25 = ((x225-x226)/(x227<=x228));

	if (t25 != -33023) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x229 = 664104086U;
	int64_t x230 = -1LL;
	volatile int16_t x231 = -1;

	t26 = ((x229-x230)/(x231<=x232));

	if (t26 != 664104087LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x233 = INT8_MIN;
	uint64_t x234 = UINT64_MAX;
	int32_t x235 = 0;
	uint8_t x236 = 3U;
	uint64_t t27 = 18856994223525130LLU;

	t27 = ((x233-x234)/(x235<=x236));

	if (t27 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x245 = INT8_MIN;
	uint16_t x246 = 0U;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MAX;

	t28 = ((x245-x246)/(x247<=x248));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x249 = -1;
	int64_t x251 = -1437546354916LL;
	uint16_t x252 = UINT16_MAX;
	int32_t t29 = -69;

	t29 = ((x249-x250)/(x251<=x252));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x253 = -1LL;
	int32_t x254 = -53035611;
	volatile uint64_t x256 = UINT64_MAX;
	static volatile int64_t t30 = -1270646982401237677LL;

	t30 = ((x253-x254)/(x255<=x256));

	if (t30 != 53035610LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x277 = -1LL;
	int32_t x278 = -62984;
	static int8_t x279 = INT8_MIN;
	int16_t x280 = 110;
	volatile int64_t t31 = -130559LL;

	t31 = ((x277-x278)/(x279<=x280));

	if (t31 != 62983LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = -6795;
	int16_t x288 = -1;
	uint32_t t32 = 409U;

	t32 = ((x285-x286)/(x287<=x288));

	if (t32 != 472519283U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x297 = -62;
	volatile int64_t x299 = INT64_MIN;
	int32_t x300 = 3752;
	volatile int32_t t33 = -1018720;

	t33 = ((x297-x298)/(x299<=x300));

	if (t33 != -61) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x301 = 68;
	static int64_t x302 = -3LL;
	uint8_t x303 = UINT8_MAX;
	int64_t t34 = 82LL;

	t34 = ((x301-x302)/(x303<=x304));

	if (t34 != 71LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x313 = INT32_MAX;
	volatile uint64_t x314 = 66587833LLU;
	int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MIN;
	volatile uint64_t t35 = 4434968076645448881LLU;

	t35 = ((x313-x314)/(x315<=x316));

	if (t35 != 2080895814LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x322 = -1LL;
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MAX;
	int64_t t36 = 2LL;

	t36 = ((x321-x322)/(x323<=x324));

	if (t36 != 2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x325 = -1;
	int32_t x326 = -1;
	static int64_t x327 = -1LL;
	int64_t x328 = INT64_MAX;
	int32_t t37 = -744809844;

	t37 = ((x325-x326)/(x327<=x328));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x329 = INT64_MIN;
	int32_t x331 = 2;
	int16_t x332 = 3;
	int64_t t38 = -926742594867820LL;

	t38 = ((x329-x330)/(x331<=x332));

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x337 = -5607LL;
	uint32_t x338 = 24516U;
	uint32_t x339 = 5920519U;
	volatile int64_t t39 = 0LL;

	t39 = ((x337-x338)/(x339<=x340));

	if (t39 != -30123LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x361 = -1;
	volatile int8_t x362 = -7;
	volatile int32_t x363 = -1;
	uint16_t x364 = 7047U;
	int32_t t40 = 30;

	t40 = ((x361-x362)/(x363<=x364));

	if (t40 != 6) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x365 = -1;
	int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	int16_t x368 = -1;
	volatile int32_t t41 = 3851;

	t41 = ((x365-x366)/(x367<=x368));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x373 = 10857905LL;
	static int32_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int64_t t42 = 509983384155074LL;

	t42 = ((x373-x374)/(x375<=x376));

	if (t42 != 10857906LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x389 = 2886565LLU;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	static int32_t x392 = -1;
	volatile uint64_t t43 = 134227526066914677LLU;

	t43 = ((x389-x390)/(x391<=x392));

	if (t43 != 2150370213LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x393 = INT32_MIN;
	int8_t x394 = -12;
	int32_t x395 = -47700;
	volatile int32_t t44 = -1;

	t44 = ((x393-x394)/(x395<=x396));

	if (t44 != -2147483636) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x397 = INT16_MAX;
	static int64_t x398 = -482320736944352LL;
	int32_t x399 = -1;
	static uint8_t x400 = UINT8_MAX;
	static int64_t t45 = 57LL;

	t45 = ((x397-x398)/(x399<=x400));

	if (t45 != 482320736977119LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x409 = 29U;
	volatile int16_t x411 = 0;
	volatile uint64_t t46 = 2015230146059376LLU;

	t46 = ((x409-x410)/(x411<=x412));

	if (t46 != 18446744073709521037LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x413 = -1;
	static int8_t x414 = 4;
	int32_t x415 = -868;
	volatile uint16_t x416 = 2294U;
	static volatile int32_t t47 = 489;

	t47 = ((x413-x414)/(x415<=x416));

	if (t47 != -5) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x429 = 286U;
	static volatile int64_t x430 = -1LL;
	int16_t x431 = INT16_MIN;
	static volatile int8_t x432 = INT8_MAX;
	static int64_t t48 = -947575LL;

	t48 = ((x429-x430)/(x431<=x432));

	if (t48 != 287LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x437 = -5890034006615LL;
	int64_t x438 = -101789939983177481LL;
	volatile int64_t t49 = 0LL;

	t49 = ((x437-x438)/(x439<=x440));

	if (t49 != 101784049949170866LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x441 = 205U;
	volatile uint32_t x442 = 1019628U;
	int16_t x443 = INT16_MIN;
	int64_t x444 = INT64_MAX;
	static volatile uint32_t t50 = 1265081U;

	t50 = ((x441-x442)/(x443<=x444));

	if (t50 != 4293947873U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x461 = -1LL;
	volatile int64_t x462 = -1LL;
	uint8_t x463 = UINT8_MAX;
	static int64_t x464 = 4283655804LL;
	volatile int64_t t51 = -224083999LL;

	t51 = ((x461-x462)/(x463<=x464));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x465 = INT8_MIN;
	int16_t x466 = INT16_MAX;
	volatile int8_t x468 = 10;
	volatile int32_t t52 = 370764;

	t52 = ((x465-x466)/(x467<=x468));

	if (t52 != -32895) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x474 = INT32_MIN;
	static int16_t x475 = INT16_MIN;
	static int8_t x476 = 2;
	int32_t t53 = INT32_MAX;

	t53 = ((x473-x474)/(x475<=x476));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x481 = 112LL;
	int8_t x482 = INT8_MIN;
	static uint32_t x484 = 93342692U;
	int64_t t54 = -3445336LL;

	t54 = ((x481-x482)/(x483<=x484));

	if (t54 != 240LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x485 = -1;
	static volatile uint64_t x486 = 142LLU;
	int32_t x487 = INT32_MIN;
	static int8_t x488 = -4;
	uint64_t t55 = 1441393382125LLU;

	t55 = ((x485-x486)/(x487<=x488));

	if (t55 != 18446744073709551473LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x489 = 2U;
	int64_t x491 = INT64_MIN;
	int32_t x492 = INT32_MAX;

	t56 = ((x489-x490)/(x491<=x492));

	if (t56 != 32) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x493 = 21662840425LLU;
	uint16_t x494 = UINT16_MAX;
	static uint16_t x495 = 18U;
	uint64_t t57 = 254763737LLU;

	t57 = ((x493-x494)/(x495<=x496));

	if (t57 != 21662774890LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x505 = 11079U;
	volatile uint64_t x506 = 462340680815LLU;
	int8_t x507 = INT8_MAX;
	int32_t x508 = INT32_MAX;
	uint64_t t58 = 22LLU;

	t58 = ((x505-x506)/(x507<=x508));

	if (t58 != 18446743611368881880LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x509 = 1LLU;
	uint8_t x510 = 11U;
	uint8_t x511 = 56U;
	static uint8_t x512 = UINT8_MAX;
	volatile uint64_t t59 = 730195928LLU;

	t59 = ((x509-x510)/(x511<=x512));

	if (t59 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x513 = 6738148U;
	static volatile int32_t x514 = 933;
	uint8_t x515 = 1U;
	static volatile uint32_t t60 = 208234U;

	t60 = ((x513-x514)/(x515<=x516));

	if (t60 != 6737215U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x528 = INT8_MAX;

	t61 = ((x525-x526)/(x527<=x528));

	if (t61 != 36201) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x529 = INT8_MIN;
	uint16_t x530 = 8U;

	t62 = ((x529-x530)/(x531<=x532));

	if (t62 != -136) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x537 = UINT64_MAX;
	int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MIN;
	static int8_t x540 = INT8_MAX;
	volatile uint64_t t63 = 523573872LLU;

	t63 = ((x537-x538)/(x539<=x540));

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x542 = INT64_MAX;
	int16_t x543 = -2861;
	uint8_t x544 = UINT8_MAX;

	t64 = ((x541-x542)/(x543<=x544));

	if (t64 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x545 = UINT16_MAX;
	uint8_t x546 = 12U;
	int16_t x547 = INT16_MIN;
	uint16_t x548 = 2U;
	int32_t t65 = -154262931;

	t65 = ((x545-x546)/(x547<=x548));

	if (t65 != 65523) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x553 = INT32_MAX;
	static uint16_t x554 = 1U;
	volatile int16_t x555 = -187;
	int32_t x556 = -1;
	int32_t t66 = 43134;

	t66 = ((x553-x554)/(x555<=x556));

	if (t66 != 2147483646) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x559 = -1;
	static uint16_t x560 = 2U;
	volatile int32_t t67 = -56746437;

	t67 = ((x557-x558)/(x559<=x560));

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x561 = -1;
	int64_t x562 = -1LL;
	int64_t x563 = INT64_MIN;
	uint8_t x564 = 97U;
	volatile int64_t t68 = 1663323362626793LL;

	t68 = ((x561-x562)/(x563<=x564));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x573 = 0LL;
	static int64_t x574 = INT64_MAX;
	uint64_t x575 = 11653LLU;
	int32_t x576 = INT32_MIN;
	int64_t t69 = -155192938303808LL;

	t69 = ((x573-x574)/(x575<=x576));

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x589 = 186041LL;
	int16_t x590 = INT16_MIN;
	int32_t x591 = INT32_MIN;
	uint8_t x592 = 28U;

	t70 = ((x589-x590)/(x591<=x592));

	if (t70 != 218809LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x609 = -6;
	int8_t x610 = -46;
	volatile uint8_t x611 = 5U;
	uint32_t x612 = UINT32_MAX;
	int32_t t71 = -10909844;

	t71 = ((x609-x610)/(x611<=x612));

	if (t71 != 40) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x625 = 10U;
	int8_t x626 = INT8_MIN;
	uint16_t x627 = 0U;
	volatile uint8_t x628 = 0U;

	t72 = ((x625-x626)/(x627<=x628));

	if (t72 != 138) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x630 = 2024U;
	int32_t x631 = 297208;
	uint32_t x632 = 25072424U;
	volatile int32_t t73 = 865450382;

	t73 = ((x629-x630)/(x631<=x632));

	if (t73 != -2024) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x634 = 1104LLU;
	static int8_t x635 = 15;
	uint8_t x636 = UINT8_MAX;
	static uint64_t t74 = 191LLU;

	t74 = ((x633-x634)/(x635<=x636));

	if (t74 != 18446744073709517744LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x637 = INT8_MIN;
	int32_t x638 = INT32_MIN;
	int32_t x639 = INT32_MIN;
	int16_t x640 = INT16_MAX;
	volatile int32_t t75 = -910331362;

	t75 = ((x637-x638)/(x639<=x640));

	if (t75 != 2147483520) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x657 = 3U;
	volatile uint32_t x658 = 8U;
	static int8_t x659 = INT8_MIN;

	t76 = ((x657-x658)/(x659<=x660));

	if (t76 != 4294967291U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x661 = 5U;
	volatile uint16_t x662 = 31U;
	int64_t x663 = INT64_MIN;
	static int8_t x664 = INT8_MIN;
	int32_t t77 = -234078024;

	t77 = ((x661-x662)/(x663<=x664));

	if (t77 != -26) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x670 = UINT8_MAX;
	uint64_t x671 = 736157812LLU;
	int64_t x672 = -3LL;
	int32_t t78 = -15365;

	t78 = ((x669-x670)/(x671<=x672));

	if (t78 != -256) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x674 = -1;
	static int32_t x675 = -886;
	uint8_t x676 = 1U;
	static volatile int32_t t79 = -24241491;

	t79 = ((x673-x674)/(x675<=x676));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x677 = UINT32_MAX;
	volatile int8_t x678 = INT8_MIN;
	volatile int8_t x679 = INT8_MAX;
	volatile uint32_t t80 = 82876132U;

	t80 = ((x677-x678)/(x679<=x680));

	if (t80 != 127U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x685 = -1;
	int8_t x686 = -1;
	int64_t x687 = -271155197LL;
	int64_t x688 = -1LL;
	volatile int32_t t81 = -1;

	t81 = ((x685-x686)/(x687<=x688));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x694 = INT8_MAX;
	static int64_t x695 = -1LL;
	volatile int8_t x696 = 4;
	static int32_t t82 = 4;

	t82 = ((x693-x694)/(x695<=x696));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x713 = 78219485150LLU;
	int8_t x714 = -1;
	static int64_t x715 = INT64_MIN;
	volatile int32_t x716 = INT32_MIN;

	t83 = ((x713-x714)/(x715<=x716));

	if (t83 != 78219485151LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x725 = INT64_MAX;
	int64_t x727 = -35572174165387LL;
	int32_t x728 = INT32_MAX;

	t84 = ((x725-x726)/(x727<=x728));

	if (t84 != 9223372036803942610LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x729 = INT32_MAX;
	int8_t x730 = 5;
	static int8_t x731 = -1;
	static int8_t x732 = INT8_MAX;
	volatile int32_t t85 = 117756;

	t85 = ((x729-x730)/(x731<=x732));

	if (t85 != 2147483642) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x738 = -15;
	int8_t x739 = -14;
	uint16_t x740 = UINT16_MAX;

	t86 = ((x737-x738)/(x739<=x740));

	if (t86 != 14) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x741 = INT8_MIN;
	int8_t x744 = -1;

	t87 = ((x741-x742)/(x743<=x744));

	if (t87 != 4294708827U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x749 = INT8_MAX;

	t88 = ((x749-x750)/(x751<=x752));

	if (t88 != 32895) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x757 = 23;
	int8_t x758 = -1;
	int8_t x759 = INT8_MIN;
	int16_t x760 = 0;
	volatile int32_t t89 = -4;

	t89 = ((x757-x758)/(x759<=x760));

	if (t89 != 24) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x769 = 5154194782365840LLU;
	static volatile int16_t x770 = INT16_MIN;
	int8_t x771 = 5;
	volatile uint64_t t90 = 921LLU;

	t90 = ((x769-x770)/(x771<=x772));

	if (t90 != 5154194782398608LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x773 = -1LL;
	uint16_t x774 = 2U;
	static volatile int32_t x775 = -1;
	int8_t x776 = INT8_MAX;
	static int64_t t91 = 13LL;

	t91 = ((x773-x774)/(x775<=x776));

	if (t91 != -3LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x777 = 750;
	static uint8_t x779 = 5U;
	volatile uint8_t x780 = UINT8_MAX;

	t92 = ((x777-x778)/(x779<=x780));

	if (t92 != -97) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x785 = INT8_MIN;
	uint16_t x786 = UINT16_MAX;
	uint16_t x787 = 994U;
	int32_t t93 = 41314960;

	t93 = ((x785-x786)/(x787<=x788));

	if (t93 != -65663) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x789 = 50;
	int8_t x790 = INT8_MAX;
	static uint16_t x791 = 1U;
	uint64_t x792 = UINT64_MAX;

	t94 = ((x789-x790)/(x791<=x792));

	if (t94 != -77) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x801 = INT64_MIN;
	volatile int32_t x803 = -8785;
	uint8_t x804 = UINT8_MAX;
	volatile int64_t t95 = 1463986166150LL;

	t95 = ((x801-x802)/(x803<=x804));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x818 = INT16_MIN;
	static volatile int32_t x819 = INT32_MIN;
	int32_t x820 = INT32_MIN;
	int32_t t96 = 32639615;

	t96 = ((x817-x818)/(x819<=x820));

	if (t96 != 32769) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x821 = INT8_MIN;
	int32_t x822 = -1;
	uint16_t x823 = 152U;
	int32_t x824 = 154241;
	int32_t t97 = -457;

	t97 = ((x821-x822)/(x823<=x824));

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x829 = -1;
	volatile int8_t x831 = -42;
	volatile uint32_t t98 = 8038169U;

	t98 = ((x829-x830)/(x831<=x832));

	if (t98 != 4294944411U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x837 = 158067824;
	uint32_t x838 = 31U;
	static volatile uint32_t x839 = 13945847U;
	volatile int32_t x840 = -1;
	uint32_t t99 = 1764536U;

	t99 = ((x837-x838)/(x839<=x840));

	if (t99 != 158067793U) { NG(); } else { ; }
	
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

