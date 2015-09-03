#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 7603403731213LLU;
static int32_t x30 = -257474833;
static volatile int16_t x32 = -1;
int32_t x34 = -1;
volatile uint32_t t5 = 230607283U;
uint64_t x41 = UINT64_MAX;
int32_t x42 = 1771;
uint32_t t8 = 0U;
uint32_t t12 = 14311232U;
int8_t x112 = INT8_MAX;
volatile int32_t t13 = -153;
int32_t x127 = INT32_MIN;
volatile int32_t t15 = -905;
uint64_t x135 = 101LLU;
int64_t x147 = -40585514356727LL;
volatile uint64_t x151 = 410887375043610LLU;
static int16_t x152 = INT16_MAX;
uint32_t x167 = 2713U;
static volatile uint64_t x173 = 71806624390463LLU;
volatile int8_t x175 = INT8_MIN;
int8_t x177 = 39;
volatile int8_t x179 = 1;
volatile uint32_t x180 = 141996291U;
uint32_t t22 = 7U;
static int8_t x219 = -1;
uint16_t x225 = 187U;
int16_t x226 = INT16_MAX;
int64_t x250 = INT64_MIN;
uint32_t x261 = UINT32_MAX;
int64_t x262 = INT64_MIN;
volatile uint64_t x264 = 6LLU;
int16_t x279 = INT16_MIN;
uint8_t x280 = UINT8_MAX;
static int16_t x295 = -1;
int64_t x302 = -4668046775LL;
int16_t x303 = INT16_MIN;
volatile uint64_t t35 = 221772645731979450LLU;
volatile int16_t x326 = -110;
int16_t x327 = -4529;
uint16_t x345 = 69U;
int64_t x363 = 87LL;
int8_t x371 = INT8_MAX;
static uint8_t x391 = 2U;
static volatile uint64_t x393 = UINT64_MAX;
static int64_t x398 = INT64_MIN;
volatile int32_t t46 = 125886;
uint8_t x405 = 0U;
int16_t x417 = 4837;
volatile uint32_t t50 = 2024357152U;
volatile uint64_t t51 = 1502LLU;
volatile uint32_t t52 = 753030493U;
uint8_t x449 = UINT8_MAX;
static volatile uint32_t x451 = 3201U;
int8_t x452 = -1;
uint8_t x458 = 0U;
static uint16_t x464 = 5U;
int8_t x468 = INT8_MIN;
volatile uint64_t x469 = 8157837652711222413LLU;
uint32_t x477 = 511U;
uint32_t t59 = 370U;
int32_t x487 = INT32_MAX;
int32_t t62 = -2778;
int32_t x511 = -1;
int8_t x541 = 46;
int32_t t66 = -2289888;
static int8_t x546 = 45;
volatile uint64_t x557 = 59875606698867742LLU;
volatile int16_t x574 = -107;
volatile int64_t t70 = 29072074LL;
int16_t x579 = INT16_MIN;
uint32_t x587 = UINT32_MAX;
int64_t x598 = -1LL;
int16_t x599 = INT16_MAX;
int16_t x607 = INT16_MIN;
uint64_t x617 = 683612216266LLU;
uint8_t x629 = UINT8_MAX;
int64_t x631 = INT64_MIN;
static volatile int64_t t80 = INT64_MIN;
uint32_t t81 = 13192598U;
int32_t x687 = INT32_MAX;
static int8_t x701 = INT8_MAX;
static int64_t x703 = 38140522616246754LL;
static volatile int16_t x709 = 3259;
uint32_t x714 = 164U;
volatile int32_t t85 = 1946;
int64_t x727 = INT64_MAX;
volatile uint64_t x731 = 2019LLU;
static uint32_t x761 = UINT32_MAX;
volatile int8_t x776 = -7;
int8_t x786 = INT8_MIN;
volatile int8_t x791 = -1;
static int16_t x799 = INT16_MIN;
int32_t x810 = -61270713;
volatile int64_t x812 = -1LL;
uint32_t x815 = 6433093U;
uint64_t x821 = 1547808964449157LLU;
volatile int8_t x822 = INT8_MAX;
uint32_t x823 = UINT32_MAX;
static int32_t x826 = INT32_MAX;


void f0(void) {
	static uint64_t x1 = 98589453546LLU;
	volatile int8_t x2 = INT8_MIN;
	int16_t x3 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile uint64_t t0 = 61190175088952LLU;

	t0 = ((x1>>(x2<x3))*x4);

	if (t0 != 17610108990381642518LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	uint32_t x7 = UINT32_MAX;
	int8_t x8 = INT8_MIN;
	uint64_t t1 = 78578764LLU;

	t1 = ((x5>>(x6<x7))*x8);

	if (t1 != 18445770838031956352LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 33;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = -1;
	int32_t t2 = 2076314;

	t2 = ((x9>>(x10<x11))*x12);

	if (t2 != -33) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x21 = INT32_MAX;
	uint8_t x22 = 7U;
	int16_t x23 = INT16_MAX;
	int32_t x24 = -1;
	int32_t t3 = 1;

	t3 = ((x21>>(x22<x23))*x24);

	if (t3 != -1073741823) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = 0U;
	static int64_t x31 = INT64_MIN;
	volatile int32_t t4 = 0;

	t4 = ((x29>>(x30<x31))*x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 15U;
	int64_t x35 = -134506736671101LL;
	int16_t x36 = -1;

	t5 = ((x33>>(x34<x35))*x36);

	if (t5 != 4294967281U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x43 = 0;
	int8_t x44 = INT8_MIN;
	uint64_t t6 = 12244675LLU;

	t6 = ((x41>>(x42<x43))*x44);

	if (t6 != 128LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = INT16_MIN;
	int16_t x67 = -44;
	uint32_t x68 = 2957U;
	volatile uint32_t t7 = 5945055U;

	t7 = ((x65>>(x66<x67))*x68);

	if (t7 != 186291U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x69 = 2303U;
	int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MIN;
	uint16_t x72 = 4415U;

	t8 = ((x69>>(x70<x71))*x72);

	if (t8 != 5081665U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x73 = UINT32_MAX;
	static volatile uint64_t x74 = 81570791770LLU;
	int8_t x75 = 9;
	uint16_t x76 = UINT16_MAX;
	uint32_t t9 = 405U;

	t9 = ((x73>>(x74<x75))*x76);

	if (t9 != 4294901761U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x97 = 961323489LLU;
	int32_t x98 = -1;
	uint16_t x99 = 11860U;
	uint16_t x100 = 1U;
	volatile uint64_t t10 = 4134928794509841879LLU;

	t10 = ((x97>>(x98<x99))*x100);

	if (t10 != 480661744LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x101 = 15572U;
	int8_t x102 = -3;
	int64_t x103 = -1LL;
	volatile int16_t x104 = INT16_MIN;
	static volatile int32_t t11 = 9665596;

	t11 = ((x101>>(x102<x103))*x104);

	if (t11 != -255131648) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x105 = 380U;
	uint32_t x106 = UINT32_MAX;
	volatile int16_t x107 = 1461;
	static int8_t x108 = 3;

	t12 = ((x105>>(x106<x107))*x108);

	if (t12 != 1140U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int64_t x110 = -138495308313628LL;
	int64_t x111 = INT64_MIN;

	t13 = ((x109>>(x110<x111))*x112);

	if (t13 != 32385) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x121 = 1;
	uint64_t x122 = 90918077741367723LLU;
	int64_t x123 = -1LL;
	volatile int8_t x124 = -1;
	volatile int32_t t14 = -44653;

	t14 = ((x121>>(x122<x123))*x124);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x125 = INT16_MAX;
	volatile int64_t x126 = -1LL;
	int16_t x128 = -1;

	t15 = ((x125>>(x126<x127))*x128);

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x133 = UINT64_MAX;
	uint8_t x134 = 1U;
	static int32_t x136 = INT32_MAX;
	volatile uint64_t t16 = 461191439586174LLU;

	t16 = ((x133>>(x134<x135))*x136);

	if (t16 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x145 = UINT8_MAX;
	int32_t x146 = 233;
	int16_t x148 = -1;
	static int32_t t17 = 1;

	t17 = ((x145>>(x146<x147))*x148);

	if (t17 != -255) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x149 = 123265925216345LLU;
	int32_t x150 = INT32_MAX;
	static uint64_t t18 = 3540314224412993308LLU;

	t18 = ((x149>>(x150<x151))*x152);

	if (t18 != 2019527285781971924LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x157 = 308334880LLU;
	int16_t x158 = -1;
	int16_t x159 = -14;
	int64_t x160 = -470059543056236100LL;
	volatile uint64_t t19 = 470575LLU;

	t19 = ((x157>>(x158<x159))*x160);

	if (t19 != 1791387302839366528LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x165 = INT16_MAX;
	volatile uint8_t x166 = UINT8_MAX;
	static volatile int8_t x168 = -1;
	volatile int32_t t20 = -209978481;

	t20 = ((x165>>(x166<x167))*x168);

	if (t20 != -16383) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x174 = -20013;
	volatile uint32_t x176 = 33315U;
	volatile uint64_t t21 = 78109788140476011LLU;

	t21 = ((x173>>(x174<x175))*x176);

	if (t21 != 1196118845784120765LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x178 = INT16_MIN;

	t22 = ((x177>>(x178<x179))*x180);

	if (t22 != 2697929529U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MAX;
	volatile uint64_t x191 = 3834LLU;
	int8_t x192 = 61;
	volatile uint32_t t23 = 101011U;

	t23 = ((x189>>(x190<x191))*x192);

	if (t23 != 4294967235U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x201 = INT8_MAX;
	static uint32_t x202 = 1509767U;
	volatile int64_t x203 = 930587035LL;
	static int8_t x204 = INT8_MIN;
	int32_t t24 = 812;

	t24 = ((x201>>(x202<x203))*x204);

	if (t24 != -8064) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x217 = 29302U;
	uint64_t x218 = UINT64_MAX;
	static uint8_t x220 = 1U;
	volatile uint32_t t25 = 121U;

	t25 = ((x217>>(x218<x219))*x220);

	if (t25 != 29302U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x227 = INT16_MIN;
	uint64_t x228 = UINT64_MAX;
	static uint64_t t26 = 88223977LLU;

	t26 = ((x225>>(x226<x227))*x228);

	if (t26 != 18446744073709551429LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x229 = 23;
	int32_t x230 = INT32_MIN;
	int64_t x231 = -1LL;
	volatile int8_t x232 = -59;
	int32_t t27 = -494601257;

	t27 = ((x229>>(x230<x231))*x232);

	if (t27 != -649) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x249 = 2610LL;
	int16_t x251 = INT16_MAX;
	volatile int64_t x252 = -1LL;
	volatile int64_t t28 = 11648001LL;

	t28 = ((x249>>(x250<x251))*x252);

	if (t28 != -1305LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x263 = INT64_MIN;
	uint64_t t29 = 4970283070039847846LLU;

	t29 = ((x261>>(x262<x263))*x264);

	if (t29 != 25769803770LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x269 = 6U;
	uint16_t x270 = 3U;
	int32_t x271 = INT32_MIN;
	int32_t x272 = 121604;
	int32_t t30 = 19;

	t30 = ((x269>>(x270<x271))*x272);

	if (t30 != 729624) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x277 = UINT64_MAX;
	volatile uint64_t x278 = 3521830LLU;
	uint64_t t31 = 177811767816LLU;

	t31 = ((x277>>(x278<x279))*x280);

	if (t31 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x293 = 112LL;
	int16_t x294 = -1;
	uint16_t x296 = 15U;
	volatile int64_t t32 = -1018493631792LL;

	t32 = ((x293>>(x294<x295))*x296);

	if (t32 != 1680LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x301 = 2U;
	static int16_t x304 = 1;
	uint32_t t33 = 25065U;

	t33 = ((x301>>(x302<x303))*x304);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x309 = 15403754393854859LLU;
	volatile int64_t x310 = INT64_MAX;
	int64_t x311 = INT64_MAX;
	uint16_t x312 = 84U;
	uint64_t t34 = 905936881LLU;

	t34 = ((x309>>(x310<x311))*x312);

	if (t34 != 1293915369083808156LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = INT32_MAX;
	uint16_t x323 = 36U;
	volatile int16_t x324 = -7538;

	t35 = ((x321>>(x322<x323))*x324);

	if (t35 != 7538LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x325 = 4U;
	int16_t x328 = -6192;
	volatile int32_t t36 = -78;

	t36 = ((x325>>(x326<x327))*x328);

	if (t36 != -24768) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x333 = 409861429580107LLU;
	int32_t x334 = INT32_MIN;
	volatile int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MIN;
	static volatile uint64_t t37 = 366LLU;

	t37 = ((x333>>(x334<x335))*x336);

	if (t37 != 17061125971911901184LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x341 = UINT64_MAX;
	int64_t x342 = 103530869521999LL;
	volatile uint8_t x343 = 1U;
	volatile int8_t x344 = 1;
	static volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x341>>(x342<x343))*x344);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	static int32_t x348 = 22;
	static int32_t t39 = 709;

	t39 = ((x345>>(x346<x347))*x348);

	if (t39 != 748) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x353 = INT8_MAX;
	volatile int8_t x354 = -1;
	static volatile int64_t x355 = 902545440815833248LL;
	int8_t x356 = INT8_MIN;
	int32_t t40 = 157804;

	t40 = ((x353>>(x354<x355))*x356);

	if (t40 != -8064) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x361 = INT8_MAX;
	static volatile int32_t x362 = -1;
	int16_t x364 = 1;
	int32_t t41 = -3;

	t41 = ((x361>>(x362<x363))*x364);

	if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x369 = 29;
	uint8_t x370 = 104U;
	int8_t x372 = 23;
	volatile int32_t t42 = 137464548;

	t42 = ((x369>>(x370<x371))*x372);

	if (t42 != 322) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x385 = UINT64_MAX;
	int32_t x386 = -214492347;
	uint32_t x387 = 926796U;
	static volatile int8_t x388 = INT8_MIN;
	uint64_t t43 = 76730359252835LLU;

	t43 = ((x385>>(x386<x387))*x388);

	if (t43 != 128LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x389 = UINT16_MAX;
	volatile uint16_t x390 = 12U;
	uint16_t x392 = 2729U;
	int32_t t44 = 12636412;

	t44 = ((x389>>(x390<x391))*x392);

	if (t44 != 178845015) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x394 = INT32_MAX;
	volatile int8_t x395 = -1;
	uint8_t x396 = 3U;
	uint64_t t45 = 5LLU;

	t45 = ((x393>>(x394<x395))*x396);

	if (t45 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x397 = 1741;
	int32_t x399 = INT32_MAX;
	int32_t x400 = -1;

	t46 = ((x397>>(x398<x399))*x400);

	if (t46 != -870) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x406 = INT16_MIN;
	uint16_t x407 = 1482U;
	volatile int64_t x408 = INT64_MIN;
	volatile int64_t t47 = 266259827984538LL;

	t47 = ((x405>>(x406<x407))*x408);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x409 = 28109U;
	volatile int32_t x410 = 3;
	volatile int64_t x411 = -1LL;
	int32_t x412 = -13975;
	volatile uint32_t t48 = 5724152U;

	t48 = ((x409>>(x410<x411))*x412);

	if (t48 != 3902144021U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x418 = 41U;
	uint64_t x419 = 75417LLU;
	uint32_t x420 = 21427163U;
	static uint32_t t49 = 1286U;

	t49 = ((x417>>(x418<x419))*x420);

	if (t49 != 271272582U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x421 = 811934U;
	uint8_t x422 = 1U;
	uint16_t x423 = UINT16_MAX;
	volatile int16_t x424 = -1;

	t50 = ((x421>>(x422<x423))*x424);

	if (t50 != 4294561329U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x425 = 277177239237433LLU;
	int16_t x426 = 1;
	uint64_t x427 = 632LLU;
	static int64_t x428 = -1580LL;

	t51 = ((x425>>(x426<x427))*x428);

	if (t51 != 18227774054711980336LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x433 = UINT32_MAX;
	int64_t x434 = -66452064650LL;
	static int8_t x435 = INT8_MIN;
	int32_t x436 = 69031;

	t52 = ((x433>>(x434<x435))*x436);

	if (t52 != 2147414617U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x445 = INT8_MAX;
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = -659369721;
	uint64_t x448 = UINT64_MAX;
	uint64_t t53 = 2321280136LLU;

	t53 = ((x445>>(x446<x447))*x448);

	if (t53 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x450 = UINT8_MAX;
	int32_t t54 = -17;

	t54 = ((x449>>(x450<x451))*x452);

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x457 = INT8_MAX;
	uint32_t x459 = UINT32_MAX;
	int16_t x460 = -12559;
	volatile int32_t t55 = 9102;

	t55 = ((x457>>(x458<x459))*x460);

	if (t55 != -791217) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x461 = 0;
	int32_t x462 = INT32_MAX;
	int64_t x463 = -7132997427LL;
	int32_t t56 = -2021466;

	t56 = ((x461>>(x462<x463))*x464);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x465 = UINT32_MAX;
	static int64_t x466 = -24831173240997LL;
	uint16_t x467 = 15U;
	static volatile uint32_t t57 = 74U;

	t57 = ((x465>>(x466<x467))*x468);

	if (t57 != 128U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x470 = -1;
	uint8_t x471 = UINT8_MAX;
	int8_t x472 = -1;
	volatile uint64_t t58 = 85120563LLU;

	t58 = ((x469>>(x470<x471))*x472);

	if (t58 != 14367825247353940410LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x478 = UINT8_MAX;
	uint32_t x479 = 8452U;
	static volatile uint8_t x480 = 24U;

	t59 = ((x477>>(x478<x479))*x480);

	if (t59 != 6120U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x485 = 10U;
	uint64_t x486 = 13527LLU;
	int16_t x488 = -1;
	int32_t t60 = 1354492;

	t60 = ((x485>>(x486<x487))*x488);

	if (t60 != -5) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x493 = 2087179375825857LLU;
	uint8_t x494 = UINT8_MAX;
	uint16_t x495 = 237U;
	volatile int8_t x496 = -1;
	volatile uint64_t t61 = 87LLU;

	t61 = ((x493>>(x494<x495))*x496);

	if (t61 != 18444656894333725759LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x501 = UINT16_MAX;
	static uint64_t x502 = 4LLU;
	int16_t x503 = INT16_MIN;
	static int16_t x504 = INT16_MAX;

	t62 = ((x501>>(x502<x503))*x504);

	if (t62 != 1073676289) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x509 = 0;
	static int16_t x510 = -1;
	uint32_t x512 = 74663103U;
	uint32_t t63 = 2357U;

	t63 = ((x509>>(x510<x511))*x512);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x517 = 269741070126LLU;
	int8_t x518 = INT8_MAX;
	volatile int32_t x519 = -92266764;
	uint8_t x520 = UINT8_MAX;
	static uint64_t t64 = 947547265LLU;

	t64 = ((x517>>(x518<x519))*x520);

	if (t64 != 68783972882130LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x533 = INT16_MAX;
	int32_t x534 = INT32_MIN;
	int8_t x535 = 5;
	static int32_t x536 = -904;
	volatile int32_t t65 = -949;

	t65 = ((x533>>(x534<x535))*x536);

	if (t65 != -14810232) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x542 = 30985637240092397LL;
	int64_t x543 = 2680434603032522352LL;
	static int16_t x544 = INT16_MIN;

	t66 = ((x541>>(x542<x543))*x544);

	if (t66 != -753664) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x545 = UINT8_MAX;
	volatile uint64_t x547 = 45723LLU;
	static uint32_t x548 = 2U;
	volatile uint32_t t67 = 280499U;

	t67 = ((x545>>(x546<x547))*x548);

	if (t67 != 254U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x558 = 20623U;
	int8_t x559 = -1;
	int32_t x560 = 469519;
	volatile uint64_t t68 = 9772544160422LLU;

	t68 = ((x557>>(x558<x559))*x560);

	if (t68 != 18343757386036244930LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x565 = 125U;
	int32_t x566 = 6744721;
	static uint32_t x567 = UINT32_MAX;
	uint32_t x568 = UINT32_MAX;
	volatile uint32_t t69 = 50U;

	t69 = ((x565>>(x566<x567))*x568);

	if (t69 != 4294967234U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x573 = INT64_MAX;
	uint16_t x575 = UINT16_MAX;
	volatile int64_t x576 = -1LL;

	t70 = ((x573>>(x574<x575))*x576);

	if (t70 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x577 = UINT64_MAX;
	int16_t x578 = -1;
	int16_t x580 = INT16_MIN;
	volatile uint64_t t71 = 278389650505104LLU;

	t71 = ((x577>>(x578<x579))*x580);

	if (t71 != 32768LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x581 = UINT64_MAX;
	static int8_t x582 = INT8_MIN;
	volatile uint64_t x583 = 15LLU;
	int8_t x584 = 1;
	uint64_t t72 = UINT64_MAX;

	t72 = ((x581>>(x582<x583))*x584);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x585 = 201363745090LL;
	int8_t x586 = -38;
	volatile int8_t x588 = -1;
	int64_t t73 = 477750011627LL;

	t73 = ((x585>>(x586<x587))*x588);

	if (t73 != -100681872545LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x597 = 7U;
	int16_t x600 = INT16_MAX;
	volatile int32_t t74 = -26290;

	t74 = ((x597>>(x598<x599))*x600);

	if (t74 != 98301) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x601 = 0;
	int64_t x602 = INT64_MIN;
	volatile int32_t x603 = -1;
	static volatile uint64_t x604 = 15993597LLU;
	volatile uint64_t t75 = 778379292662233LLU;

	t75 = ((x601>>(x602<x603))*x604);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x605 = 1U;
	static int8_t x606 = 2;
	static int16_t x608 = -2;
	static volatile int32_t t76 = 645415;

	t76 = ((x605>>(x606<x607))*x608);

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x618 = -1;
	volatile int16_t x619 = 1421;
	int8_t x620 = INT8_MAX;
	uint64_t t77 = 145235455042LLU;

	t77 = ((x617>>(x618<x619))*x620);

	if (t77 != 43409375732891LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x630 = INT32_MAX;
	int8_t x632 = -1;
	volatile int32_t t78 = -14;

	t78 = ((x629>>(x630<x631))*x632);

	if (t78 != -255) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x641 = 2168574194652532LL;
	int32_t x642 = -1;
	uint64_t x643 = 644LLU;
	int8_t x644 = -1;
	volatile int64_t t79 = -22765586791LL;

	t79 = ((x641>>(x642<x643))*x644);

	if (t79 != -2168574194652532LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x645 = 2;
	int32_t x646 = -1;
	int64_t x647 = INT64_MAX;
	volatile int64_t x648 = INT64_MIN;

	t80 = ((x645>>(x646<x647))*x648);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x661 = UINT32_MAX;
	static int8_t x662 = 27;
	static int32_t x663 = -1;
	volatile int8_t x664 = INT8_MIN;

	t81 = ((x661>>(x662<x663))*x664);

	if (t81 != 128U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x685 = INT64_MAX;
	int32_t x686 = 306577239;
	int8_t x688 = -1;
	static volatile int64_t t82 = 732919019LL;

	t82 = ((x685>>(x686<x687))*x688);

	if (t82 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x702 = -116;
	static int8_t x704 = INT8_MAX;
	int32_t t83 = 1036199501;

	t83 = ((x701>>(x702<x703))*x704);

	if (t83 != 8001) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x710 = INT8_MAX;
	uint8_t x711 = UINT8_MAX;
	static int16_t x712 = INT16_MIN;
	static volatile int32_t t84 = -3074102;

	t84 = ((x709>>(x710<x711))*x712);

	if (t84 != -53379072) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x713 = 1U;
	int16_t x715 = INT16_MIN;
	static uint8_t x716 = 10U;

	t85 = ((x713>>(x714<x715))*x716);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x717 = INT16_MAX;
	static int8_t x718 = -1;
	static int32_t x719 = 207367;
	int16_t x720 = 6;
	volatile int32_t t86 = -2;

	t86 = ((x717>>(x718<x719))*x720);

	if (t86 != 98298) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x725 = INT8_MAX;
	volatile int8_t x726 = 1;
	int8_t x728 = INT8_MAX;
	int32_t t87 = 5115;

	t87 = ((x725>>(x726<x727))*x728);

	if (t87 != 8001) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x729 = 2;
	int64_t x730 = INT64_MIN;
	static int64_t x732 = 939888963LL;
	static int64_t t88 = 507LL;

	t88 = ((x729>>(x730<x731))*x732);

	if (t88 != 1879777926LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x762 = 31U;
	uint8_t x763 = UINT8_MAX;
	int16_t x764 = INT16_MAX;
	uint32_t t89 = 0U;

	t89 = ((x761>>(x762<x763))*x764);

	if (t89 != 2147450881U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x773 = 1429441037875597215LLU;
	volatile uint16_t x774 = 243U;
	int64_t x775 = INT64_MIN;
	volatile uint64_t t90 = 480123022970621LLU;

	t90 = ((x773>>(x774<x775))*x776);

	if (t90 != 8440656808580371111LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x785 = 0;
	uint64_t x787 = 176932890519424559LLU;
	int32_t x788 = -1;
	int32_t t91 = 267466497;

	t91 = ((x785>>(x786<x787))*x788);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x789 = UINT32_MAX;
	uint8_t x790 = UINT8_MAX;
	int32_t x792 = -5;
	uint32_t t92 = 11U;

	t92 = ((x789>>(x790<x791))*x792);

	if (t92 != 5U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x797 = 29974280583214771LLU;
	volatile uint8_t x798 = 1U;
	volatile uint16_t x800 = UINT16_MAX;
	volatile uint64_t t93 = 99725266LLU;

	t93 = ((x797>>(x798<x799))*x800);

	if (t93 != 9009606207767546189LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x809 = 2253226681569923589LLU;
	static volatile int64_t x811 = INT64_MAX;
	volatile uint64_t t94 = 1LLU;

	t94 = ((x809>>(x810<x811))*x812);

	if (t94 != 17320130732924589822LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x813 = INT8_MAX;
	static uint32_t x814 = 555384046U;
	int16_t x816 = INT16_MIN;
	static int32_t t95 = -29;

	t95 = ((x813>>(x814<x815))*x816);

	if (t95 != -4161536) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x824 = INT32_MIN;
	static uint64_t t96 = 356672975LLU;

	t96 = ((x821>>(x822<x823))*x824);

	if (t96 != 12186629674134142976LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x825 = UINT32_MAX;
	static int32_t x827 = INT32_MAX;
	volatile uint32_t x828 = 184U;
	uint32_t t97 = 217U;

	t97 = ((x825>>(x826<x827))*x828);

	if (t97 != 4294967112U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x829 = UINT64_MAX;
	volatile int8_t x830 = -1;
	static volatile int32_t x831 = INT32_MIN;
	volatile int64_t x832 = -356943392658821LL;
	uint64_t t98 = 148LLU;

	t98 = ((x829>>(x830<x831))*x832);

	if (t98 != 356943392658821LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x833 = 6LLU;
	static volatile int64_t x834 = INT64_MAX;
	static volatile int64_t x835 = -1LL;
	static uint64_t x836 = 277LLU;
	volatile uint64_t t99 = 2533982492457615022LLU;

	t99 = ((x833>>(x834<x835))*x836);

	if (t99 != 1662LLU) { NG(); } else { ; }
	
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

