#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = UINT64_MAX;
int16_t x14 = INT16_MAX;
volatile int32_t t2 = -11166;
uint32_t x29 = 8171857U;
static uint16_t x52 = UINT16_MAX;
int8_t x53 = -1;
int8_t x60 = INT8_MIN;
int16_t x69 = INT16_MAX;
int32_t x95 = INT32_MIN;
static int64_t x113 = INT64_MIN;
int32_t x116 = INT32_MIN;
int32_t x133 = 0;
volatile int64_t x135 = -1LL;
int8_t x136 = -1;
static int32_t x153 = 119246;
volatile int32_t x154 = -55163;
int16_t x156 = -3099;
static int8_t x174 = -1;
int32_t x201 = INT32_MAX;
static uint64_t t18 = 3217509710420365965LLU;
static volatile int64_t x250 = INT64_MIN;
static int64_t x270 = -4716418452LL;
static int64_t x285 = INT64_MAX;
int32_t x288 = INT32_MIN;
int16_t x298 = INT16_MIN;
uint16_t x316 = UINT16_MAX;
int32_t x324 = INT32_MIN;
volatile int64_t t33 = 0LL;
uint16_t x327 = UINT16_MAX;
uint16_t x342 = 254U;
volatile int16_t x347 = -1;
volatile uint32_t t36 = UINT32_MAX;
int32_t x349 = INT32_MIN;
volatile int8_t x352 = -1;
volatile int32_t t37 = 126;
int64_t x356 = INT64_MIN;
uint16_t x358 = 6137U;
static int32_t x360 = -1;
volatile int32_t t39 = 7518285;
static int64_t x376 = 6060435873294LL;
uint8_t x382 = 18U;
uint8_t x386 = UINT8_MAX;
int64_t x396 = -977427480120LL;
volatile int32_t x400 = -1;
static int32_t x401 = -1;
uint32_t x404 = 1U;
static int32_t t46 = 11;
uint64_t x414 = UINT64_MAX;
int64_t x450 = INT64_MAX;
static volatile int64_t t49 = 4222LL;
int64_t t50 = 170910370635307LL;
int8_t x501 = 7;
int64_t x516 = INT64_MIN;
int8_t x519 = 4;
static uint32_t t59 = UINT32_MAX;
uint16_t x553 = 53U;
static int16_t x554 = INT16_MAX;
volatile int32_t t60 = 60165187;
int32_t x586 = INT32_MIN;
int16_t x587 = INT16_MIN;
int64_t x588 = INT64_MAX;
int16_t x603 = -510;
int64_t t64 = -215441LL;
int16_t x607 = -1;
int16_t x608 = 70;
static volatile int64_t t68 = -232568573764LL;
int64_t x642 = INT64_MIN;
int64_t x651 = -1LL;
int8_t x653 = -50;
int32_t t72 = INT32_MAX;
volatile int32_t x671 = -96521986;
static uint8_t x673 = 71U;
static int16_t x674 = -270;
int32_t x675 = -1;
static int16_t x681 = -4204;
static volatile uint16_t x682 = 18838U;
volatile uint16_t x694 = UINT16_MAX;
volatile int8_t x695 = INT8_MAX;
int64_t x708 = -1678329683280672LL;
int16_t x719 = -1;
static volatile uint32_t t80 = UINT32_MAX;
volatile uint8_t x728 = 5U;
int32_t x731 = INT32_MAX;
volatile int64_t t83 = 15202554543430LL;
volatile uint64_t t85 = 12179690047553291LLU;
volatile int64_t x750 = INT64_MAX;
static volatile uint32_t x764 = UINT32_MAX;
int16_t x765 = -5;
volatile int8_t x782 = -1;
uint64_t x783 = 856939591325LLU;
int8_t x792 = INT8_MIN;
int64_t t92 = 8991291778184178LL;
static int64_t x811 = -61LL;
int8_t x840 = 6;
int64_t x846 = INT64_MIN;
static uint64_t x848 = 4922736699906LLU;
volatile uint64_t t97 = 10304601248LLU;
int64_t x849 = -11LL;
uint64_t x861 = UINT64_MAX;


void f0(void) {
	volatile int64_t x1 = 207LL;
	static uint8_t x3 = 26U;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = ((x1%(x2/x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -13;
	int8_t x6 = INT8_MIN;
	int8_t x7 = -1;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 631691251;

	t1 = ((x5%(x6/x7))|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MIN;
	static int16_t x15 = 223;
	uint16_t x16 = 2U;

	t2 = ((x13%(x14/x15))|x16);

	if (t2 != -126) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MAX;
	uint32_t x18 = UINT32_MAX;
	static int8_t x19 = INT8_MAX;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = ((x17%(x18/x19))|x20);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x30 = UINT8_MAX;
	int8_t x31 = 2;
	static int16_t x32 = -697;
	uint32_t t4 = 2100789U;

	t4 = ((x29%(x30/x31))|x32);

	if (t4 != 4294966639U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x33 = 288981576;
	static int16_t x34 = INT16_MIN;
	int8_t x35 = 4;
	int64_t x36 = -1LL;
	int64_t t5 = -3744LL;

	t5 = ((x33%(x34/x35))|x36);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = INT16_MAX;
	int8_t x51 = -1;
	volatile uint64_t t6 = 784780418759LLU;

	t6 = ((x49%(x50/x51))|x52);

	if (t6 != 65535LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x54 = INT64_MAX;
	int16_t x55 = INT16_MIN;
	int8_t x56 = -1;
	static volatile int64_t t7 = 113637LL;

	t7 = ((x53%(x54/x55))|x56);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x57 = -1;
	int64_t x58 = -5689610686113087LL;
	int16_t x59 = -1;
	int64_t t8 = -1402LL;

	t8 = ((x57%(x58/x59))|x60);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x70 = UINT8_MAX;
	uint8_t x71 = 4U;
	uint64_t x72 = 70916704LLU;
	uint64_t t9 = 38778057LLU;

	t9 = ((x69%(x70/x71))|x72);

	if (t9 != 70916711LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x89 = -1925692597007645LL;
	uint16_t x90 = 179U;
	int16_t x91 = -1;
	uint64_t x92 = 1480986044707LLU;
	static uint64_t t10 = 335LLU;

	t10 = ((x89%(x90/x91))|x92);

	if (t10 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x93 = INT32_MAX;
	int64_t x94 = INT64_MIN;
	uint16_t x96 = 372U;
	volatile int64_t t11 = -1538LL;

	t11 = ((x93%(x94/x95))|x96);

	if (t11 != 2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x105 = 0U;
	uint32_t x106 = UINT32_MAX;
	volatile int8_t x107 = INT8_MAX;
	static uint16_t x108 = 388U;
	volatile uint32_t t12 = 136159055U;

	t12 = ((x105%(x106/x107))|x108);

	if (t12 != 388U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x114 = INT64_MIN;
	uint64_t x115 = 48116904006LLU;
	static volatile uint64_t t13 = 166843598355506887LLU;

	t13 = ((x113%(x114/x115))|x116);

	if (t13 != 18446744071749032080LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x134 = -57;
	int64_t t14 = -54339031553349329LL;

	t14 = ((x133%(x134/x135))|x136);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x155 = INT8_MAX;
	volatile int32_t t15 = 0;

	t15 = ((x153%(x154/x155))|x156);

	if (t15 != -3089) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x169 = 1;
	int8_t x170 = INT8_MIN;
	uint64_t x171 = 13LLU;
	uint16_t x172 = 5U;
	volatile uint64_t t16 = 10301475LLU;

	t16 = ((x169%(x170/x171))|x172);

	if (t16 != 5LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x173 = 484397LLU;
	uint64_t x175 = UINT64_MAX;
	static int64_t x176 = INT64_MAX;
	volatile uint64_t t17 = 284180540362034917LLU;

	t17 = ((x173%(x174/x175))|x176);

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x202 = UINT64_MAX;
	uint8_t x203 = UINT8_MAX;
	volatile int32_t x204 = 677041;

	t18 = ((x201%(x202/x203))|x204);

	if (t18 != 2147483647LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x209 = -1;
	uint32_t x210 = 12369407U;
	int16_t x211 = INT16_MAX;
	int8_t x212 = INT8_MAX;
	uint32_t t19 = 36180U;

	t19 = ((x209%(x210/x211))|x212);

	if (t19 != 127U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x213 = INT32_MIN;
	static int64_t x214 = INT64_MIN;
	uint64_t x215 = 30722839909787016LLU;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t20 = 57036850642251013LLU;

	t20 = ((x213%(x214/x215))|x216);

	if (t20 != 18446744073709518916LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x221 = -1;
	int32_t x222 = -1;
	static uint64_t x223 = UINT64_MAX;
	int64_t x224 = -5337325769310LL;
	uint64_t t21 = 9594898263428LLU;

	t21 = ((x221%(x222/x223))|x224);

	if (t21 != 18446738736383782306LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x237 = INT8_MAX;
	static int8_t x238 = INT8_MIN;
	int32_t x239 = -1;
	uint16_t x240 = 1346U;
	volatile int32_t t22 = -969483473;

	t22 = ((x237%(x238/x239))|x240);

	if (t22 != 1407) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x249 = 478345879764450LLU;
	volatile int8_t x251 = INT8_MIN;
	uint8_t x252 = 55U;
	static uint64_t t23 = 56773014982805LLU;

	t23 = ((x249%(x250/x251))|x252);

	if (t23 != 478345879764471LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = INT16_MIN;
	uint16_t x259 = 2434U;
	uint8_t x260 = UINT8_MAX;
	static int32_t t24 = 15;

	t24 = ((x257%(x258/x259))|x260);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = 32043520;
	uint32_t x263 = 77831U;
	int64_t x264 = INT64_MIN;
	int64_t t25 = 1149LL;

	t25 = ((x261%(x262/x263))|x264);

	if (t25 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x269 = INT16_MIN;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 424U;
	volatile int64_t t26 = 2300552334774580486LL;

	t26 = ((x269%(x270/x271))|x272);

	if (t26 != -32344LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x273 = -14;
	int32_t x274 = -88495986;
	int16_t x275 = -1;
	static volatile uint64_t x276 = UINT64_MAX;
	uint64_t t27 = UINT64_MAX;

	t27 = ((x273%(x274/x275))|x276);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x286 = INT32_MAX;
	static int8_t x287 = INT8_MIN;
	volatile int64_t t28 = -342403034LL;

	t28 = ((x285%(x286/x287))|x288);

	if (t28 != -2147450881LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x297 = INT8_MIN;
	static uint8_t x299 = 29U;
	int8_t x300 = INT8_MAX;
	volatile int32_t t29 = 1315004;

	t29 = ((x297%(x298/x299))|x300);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x305 = INT8_MAX;
	volatile uint32_t x306 = 1197U;
	uint8_t x307 = 33U;
	int64_t x308 = INT64_MIN;
	int64_t t30 = 14310317160798567LL;

	t30 = ((x305%(x306/x307))|x308);

	if (t30 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x309 = 1276013261LLU;
	int32_t x310 = INT32_MIN;
	uint16_t x311 = UINT16_MAX;
	volatile int16_t x312 = INT16_MAX;
	uint64_t t31 = 7171LLU;

	t31 = ((x309%(x310/x311))|x312);

	if (t31 != 1276018687LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x313 = 55276466LLU;
	static volatile int64_t x314 = INT64_MIN;
	int8_t x315 = INT8_MIN;
	static uint64_t t32 = 267322046LLU;

	t32 = ((x313%(x314/x315))|x316);

	if (t32 != 55312383LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x321 = 4;
	static uint32_t x322 = 2014263U;
	int64_t x323 = -1LL;

	t33 = ((x321%(x322/x323))|x324);

	if (t33 != -2147483644LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x325 = 14U;
	int32_t x326 = INT32_MAX;
	static uint32_t x328 = 10404U;
	uint32_t t34 = 31U;

	t34 = ((x325%(x326/x327))|x328);

	if (t34 != 10414U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x341 = INT8_MAX;
	static int32_t x343 = -1;
	int32_t x344 = 109;
	volatile int32_t t35 = -197466840;

	t35 = ((x341%(x342/x343))|x344);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x345 = -1;
	int16_t x346 = INT16_MAX;
	uint32_t x348 = UINT32_MAX;

	t36 = ((x345%(x346/x347))|x348);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x350 = INT32_MAX;
	static int8_t x351 = -1;

	t37 = ((x349%(x350/x351))|x352);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x353 = INT8_MAX;
	static int32_t x354 = INT32_MIN;
	volatile uint8_t x355 = UINT8_MAX;
	static int64_t t38 = 376401232133LL;

	t38 = ((x353%(x354/x355))|x356);

	if (t38 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x357 = INT32_MIN;
	volatile int8_t x359 = INT8_MAX;

	t39 = ((x357%(x358/x359))|x360);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x373 = -1;
	volatile int32_t x374 = INT32_MAX;
	volatile int16_t x375 = INT16_MAX;
	int64_t t40 = -76255744947791LL;

	t40 = ((x373%(x374/x375))|x376);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x381 = -318;
	static volatile uint32_t x383 = 1U;
	int8_t x384 = INT8_MIN;
	uint32_t t41 = 856U;

	t41 = ((x381%(x382/x383))|x384);

	if (t41 != 4294967178U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x385 = 237;
	int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t42 = -360109939;

	t42 = ((x385%(x386/x387))|x388);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x393 = 3546404U;
	int8_t x394 = -1;
	static uint64_t x395 = 2176004681LLU;
	uint64_t t43 = 13LLU;

	t43 = ((x393%(x394/x395))|x396);

	if (t43 != 18446743096285617644LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x397 = 524214776524LLU;
	int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MAX;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = ((x397%(x398/x399))|x400);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x402 = INT64_MIN;
	uint16_t x403 = 339U;
	int64_t t45 = 33208769194387LL;

	t45 = ((x401%(x402/x403))|x404);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x409 = -33;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 2U;
	int16_t x412 = -1;

	t46 = ((x409%(x410/x411))|x412);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x413 = -320;
	int8_t x415 = INT8_MIN;
	int64_t x416 = 5LL;
	volatile uint64_t t47 = 422601260285077310LLU;

	t47 = ((x413%(x414/x415))|x416);

	if (t47 != 5LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x425 = -1;
	int8_t x426 = INT8_MAX;
	int16_t x427 = -1;
	volatile uint64_t x428 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x425%(x426/x427))|x428);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x449 = -1419;
	volatile uint8_t x451 = UINT8_MAX;
	static int32_t x452 = INT32_MIN;

	t49 = ((x449%(x450/x451))|x452);

	if (t49 != -1419LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x461 = INT64_MIN;
	static volatile int64_t x462 = -2439707LL;
	uint8_t x463 = 85U;
	int32_t x464 = INT32_MIN;

	t50 = ((x461%(x462/x463))|x464);

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x473 = 104U;
	int8_t x474 = INT8_MAX;
	volatile int32_t x475 = -1;
	int16_t x476 = INT16_MAX;
	int32_t t51 = -8728;

	t51 = ((x473%(x474/x475))|x476);

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x477 = INT16_MIN;
	static volatile int64_t x478 = INT64_MIN;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = 32;
	volatile int64_t t52 = -53977573LL;

	t52 = ((x477%(x478/x479))|x480);

	if (t52 != -32736LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x485 = 24122U;
	static volatile int32_t x486 = INT32_MIN;
	uint64_t x487 = 11LLU;
	int16_t x488 = INT16_MIN;
	uint64_t t53 = 598287633LLU;

	t53 = ((x485%(x486/x487))|x488);

	if (t53 != 18446744073709542970LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x502 = 41U;
	uint64_t x503 = 6LLU;
	int32_t x504 = 249755658;
	uint64_t t54 = 5LLU;

	t54 = ((x501%(x502/x503))|x504);

	if (t54 != 249755659LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x513 = -273200696758528LL;
	uint64_t x514 = UINT64_MAX;
	static int64_t x515 = INT64_MIN;
	volatile uint64_t t55 = 6730229894LLU;

	t55 = ((x513%(x514/x515))|x516);

	if (t55 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x517 = 462U;
	int64_t x518 = 5676560650973548LL;
	static uint64_t x520 = 186LLU;
	volatile uint64_t t56 = 150LLU;

	t56 = ((x517%(x518/x519))|x520);

	if (t56 != 510LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x533 = INT64_MIN;
	static int8_t x534 = INT8_MAX;
	uint8_t x535 = 2U;
	int8_t x536 = 1;
	volatile int64_t t57 = -584486179488226LL;

	t57 = ((x533%(x534/x535))|x536);

	if (t57 != -7LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x541 = 0U;
	static int16_t x542 = INT16_MIN;
	uint8_t x543 = UINT8_MAX;
	int16_t x544 = INT16_MIN;
	int32_t t58 = -452975;

	t58 = ((x541%(x542/x543))|x544);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x545 = 1200268;
	uint8_t x546 = UINT8_MAX;
	int8_t x547 = INT8_MIN;
	uint32_t x548 = UINT32_MAX;

	t59 = ((x545%(x546/x547))|x548);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x555 = -1;
	int8_t x556 = INT8_MAX;

	t60 = ((x553%(x554/x555))|x556);

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x581 = INT16_MIN;
	int8_t x582 = INT8_MIN;
	static int64_t x583 = -1LL;
	volatile int32_t x584 = INT32_MIN;
	static int64_t t61 = -11602979357970LL;

	t61 = ((x581%(x582/x583))|x584);

	if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x585 = 6975208889LLU;
	uint64_t t62 = 376LLU;

	t62 = ((x585%(x586/x587))|x588);

	if (t62 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x589 = INT64_MIN;
	volatile uint64_t x590 = UINT64_MAX;
	volatile int32_t x591 = INT32_MIN;
	int8_t x592 = 0;
	volatile uint64_t t63 = 2338879580375479LLU;

	t63 = ((x589%(x590/x591))|x592);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x601 = 61672790080766786LL;
	volatile uint16_t x602 = 15327U;
	int64_t x604 = -1LL;

	t64 = ((x601%(x602/x603))|x604);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MIN;
	static int32_t t65 = 254;

	t65 = ((x605%(x606/x607))|x608);

	if (t65 != 70) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x617 = INT32_MIN;
	int8_t x618 = INT8_MIN;
	static uint8_t x619 = 24U;
	volatile int32_t x620 = 12929;
	volatile int32_t t66 = -22;

	t66 = ((x617%(x618/x619))|x620);

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x625 = -12042807748LL;
	int16_t x626 = 14736;
	volatile uint8_t x627 = 80U;
	volatile int64_t x628 = INT64_MAX;
	int64_t t67 = 9LL;

	t67 = ((x625%(x626/x627))|x628);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x633 = INT32_MIN;
	int64_t x634 = 2569143806264813LL;
	int32_t x635 = -653333;
	static uint16_t x636 = 31U;

	t68 = ((x633%(x634/x635))|x636);

	if (t68 != -2147483617LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x641 = UINT64_MAX;
	uint32_t x643 = UINT32_MAX;
	int16_t x644 = INT16_MIN;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x641%(x642/x643))|x644);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x645 = INT8_MAX;
	static int64_t x646 = -92213917286418308LL;
	volatile int64_t x647 = -1LL;
	static int64_t x648 = INT64_MIN;
	volatile int64_t t70 = 12007478212629LL;

	t70 = ((x645%(x646/x647))|x648);

	if (t70 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x649 = 22676U;
	int32_t x650 = -2652300;
	static int16_t x652 = -1;
	int64_t t71 = -6LL;

	t71 = ((x649%(x650/x651))|x652);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x654 = -1;
	int8_t x655 = 1;
	volatile int32_t x656 = INT32_MAX;

	t72 = ((x653%(x654/x655))|x656);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x661 = INT8_MIN;
	int64_t x662 = INT64_MIN;
	uint32_t x663 = UINT32_MAX;
	int16_t x664 = INT16_MIN;
	int64_t t73 = -274284862354LL;

	t73 = ((x661%(x662/x663))|x664);

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x669 = INT8_MIN;
	static volatile uint32_t x670 = UINT32_MAX;
	static uint16_t x672 = UINT16_MAX;
	static volatile uint32_t t74 = 146U;

	t74 = ((x669%(x670/x671))|x672);

	if (t74 != 65535U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x676 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x673%(x674/x675))|x676);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x677 = INT8_MIN;
	static int32_t x678 = INT32_MAX;
	static int8_t x679 = INT8_MAX;
	int8_t x680 = 1;
	int32_t t76 = -6;

	t76 = ((x677%(x678/x679))|x680);

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x683 = -1;
	int64_t x684 = -1LL;
	int64_t t77 = 5LL;

	t77 = ((x681%(x682/x683))|x684);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x693 = UINT8_MAX;
	static uint64_t x696 = UINT64_MAX;
	static uint64_t t78 = UINT64_MAX;

	t78 = ((x693%(x694/x695))|x696);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x705 = -1LL;
	uint32_t x706 = UINT32_MAX;
	static volatile uint8_t x707 = 1U;
	volatile int64_t t79 = 67218504355118LL;

	t79 = ((x705%(x706/x707))|x708);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x717 = INT8_MIN;
	static volatile uint8_t x718 = 1U;
	static volatile uint32_t x720 = UINT32_MAX;

	t80 = ((x717%(x718/x719))|x720);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x725 = 12;
	int64_t x726 = INT64_MIN;
	uint32_t x727 = 184346833U;
	volatile int64_t t81 = 6685538LL;

	t81 = ((x725%(x726/x727))|x728);

	if (t81 != 13LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x729 = 299329035LL;
	int64_t x730 = -999035064383LL;
	int8_t x732 = INT8_MAX;
	int64_t t82 = 153848004LL;

	t82 = ((x729%(x730/x731))|x732);

	if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x733 = INT16_MAX;
	int8_t x734 = -15;
	int64_t x735 = -1LL;
	static int16_t x736 = INT16_MAX;

	t83 = ((x733%(x734/x735))|x736);

	if (t83 != 32767LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x737 = INT8_MIN;
	int8_t x738 = INT8_MIN;
	int8_t x739 = INT8_MAX;
	int8_t x740 = INT8_MIN;
	volatile int32_t t84 = -1;

	t84 = ((x737%(x738/x739))|x740);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x741 = -1;
	int64_t x742 = 1123378126247099894LL;
	uint64_t x743 = 490988679LLU;
	int32_t x744 = -1225115;

	t85 = ((x741%(x742/x743))|x744);

	if (t85 != 18446744073709387375LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x749 = -2;
	int8_t x751 = -6;
	int64_t x752 = INT64_MIN;
	int64_t t86 = -114180582LL;

	t86 = ((x749%(x750/x751))|x752);

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x761 = INT8_MAX;
	uint32_t x762 = 211814U;
	int64_t x763 = -1LL;
	volatile int64_t t87 = 119302211647292518LL;

	t87 = ((x761%(x762/x763))|x764);

	if (t87 != 4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x766 = INT16_MIN;
	volatile int8_t x767 = INT8_MAX;
	int64_t x768 = -1LL;
	int64_t t88 = -1445750LL;

	t88 = ((x765%(x766/x767))|x768);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x781 = -1;
	uint16_t x784 = 5U;
	uint64_t t89 = 846LLU;

	t89 = ((x781%(x782/x783))|x784);

	if (t89 != 12803079LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x785 = 0;
	static int32_t x786 = -7;
	volatile uint32_t x787 = 4885U;
	int32_t x788 = 90954671;
	volatile uint32_t t90 = 1U;

	t90 = ((x785%(x786/x787))|x788);

	if (t90 != 90954671U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x789 = INT32_MIN;
	uint16_t x790 = UINT16_MAX;
	int16_t x791 = INT16_MIN;
	int32_t t91 = 887;

	t91 = ((x789%(x790/x791))|x792);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x797 = INT64_MIN;
	int32_t x798 = INT32_MIN;
	int64_t x799 = 4915LL;
	static int32_t x800 = INT32_MIN;

	t92 = ((x797%(x798/x799))|x800);

	if (t92 != -399284LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x809 = 6649680LLU;
	uint64_t x810 = UINT64_MAX;
	int16_t x812 = INT16_MIN;
	uint64_t t93 = 386507194383454LLU;

	t93 = ((x809%(x810/x811))|x812);

	if (t93 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x813 = INT8_MIN;
	int64_t x814 = -882054426541463LL;
	int16_t x815 = INT16_MIN;
	volatile uint16_t x816 = UINT16_MAX;
	volatile int64_t t94 = -4716LL;

	t94 = ((x813%(x814/x815))|x816);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x821 = UINT8_MAX;
	int8_t x822 = -1;
	int64_t x823 = -1LL;
	uint32_t x824 = 1974524260U;
	static int64_t t95 = 2593634233769028LL;

	t95 = ((x821%(x822/x823))|x824);

	if (t95 != 1974524260LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x837 = 4557;
	int8_t x838 = INT8_MIN;
	uint64_t x839 = 44LLU;
	uint64_t t96 = 7084424LLU;

	t96 = ((x837%(x838/x839))|x840);

	if (t96 != 4559LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x845 = 3;
	int8_t x847 = 7;

	t97 = ((x845%(x846/x847))|x848);

	if (t97 != 4922736699907LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x850 = 273;
	uint8_t x851 = 23U;
	static uint64_t x852 = 68396LLU;
	volatile uint64_t t98 = 515849900360325380LLU;

	t98 = ((x849%(x850/x851))|x852);

	if (t98 != 68396LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x862 = INT64_MIN;
	volatile uint64_t x863 = 1591991051593005306LLU;
	uint8_t x864 = 1U;
	volatile uint64_t t99 = 832834LLU;

	t99 = ((x861%(x862/x863))|x864);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

