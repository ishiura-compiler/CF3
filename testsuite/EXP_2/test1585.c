#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x28 = UINT32_MAX;
static int64_t x42 = INT64_MIN;
static volatile int16_t x55 = 24;
volatile int8_t x56 = 0;
int32_t t8 = 3;
uint64_t x57 = 129386891107235LLU;
int64_t x62 = INT64_MIN;
int32_t x77 = INT32_MIN;
int64_t t14 = -4381513LL;
int64_t x121 = 1146LL;
int8_t x128 = INT8_MAX;
volatile uint16_t x129 = UINT16_MAX;
int32_t x149 = -118866;
int64_t x150 = INT64_MIN;
uint64_t x154 = 167514LLU;
static uint16_t x166 = 10425U;
int8_t x171 = 55;
int32_t x180 = -1526880;
int16_t x186 = INT16_MIN;
volatile int64_t x188 = INT64_MIN;
int32_t x201 = INT32_MAX;
static volatile int64_t x206 = INT64_MIN;
static int64_t x208 = INT64_MIN;
static volatile uint64_t x232 = 32626LLU;
static uint64_t t30 = 18972576744LLU;
int64_t x237 = -1LL;
volatile uint16_t x240 = UINT16_MAX;
uint16_t x244 = 16U;
static int64_t x256 = INT64_MIN;
int64_t t36 = INT64_MIN;
uint64_t x263 = UINT64_MAX;
volatile int32_t t37 = 1510871;
int32_t x279 = INT32_MAX;
volatile int32_t x280 = -510280;
int8_t x281 = 21;
uint64_t t39 = 29LLU;
static int8_t x285 = INT8_MIN;
int64_t x294 = -1LL;
volatile int32_t x295 = 10708;
static volatile uint32_t t43 = UINT32_MAX;
int64_t t44 = INT64_MIN;
static uint32_t x317 = 91392U;
int32_t x320 = -1;
uint32_t t45 = UINT32_MAX;
int32_t x354 = INT32_MIN;
int32_t x360 = 2;
static uint32_t x375 = 444533658U;
int16_t x376 = 915;
int16_t x377 = INT16_MAX;
int8_t x379 = 7;
uint32_t x392 = 494326175U;
uint64_t t57 = UINT64_MAX;
volatile int32_t x407 = -1;
volatile int64_t t58 = -60883916526082959LL;
static int16_t x409 = -13;
int8_t x410 = -1;
uint16_t x412 = 1834U;
uint32_t x422 = 53921U;
static volatile int64_t x424 = 8222576445994855LL;
volatile int32_t t64 = 2957;
static int32_t x453 = INT32_MIN;
int32_t x455 = 0;
int16_t x456 = INT16_MIN;
volatile int64_t t66 = INT64_MIN;
int64_t x474 = INT64_MIN;
uint64_t x479 = 3973891673159LLU;
int32_t x485 = INT32_MAX;
volatile int64_t x509 = INT64_MIN;
int8_t x513 = INT8_MIN;
int16_t x516 = 7;
volatile int32_t t73 = 9942582;
volatile uint64_t x545 = UINT64_MAX;
static uint16_t x546 = 42U;
uint8_t x547 = UINT8_MAX;
uint16_t x548 = 1U;
uint64_t t75 = 128530719376896359LLU;
static int8_t x565 = INT8_MIN;
int16_t x574 = -1;
volatile int32_t t77 = -2;
static uint32_t x582 = 3U;
static int8_t x583 = INT8_MAX;
static volatile int16_t x586 = INT16_MIN;
uint8_t x593 = UINT8_MAX;
static int64_t x594 = -305711930LL;
static int8_t x621 = INT8_MIN;
static int32_t x623 = 31609;
volatile uint64_t t82 = 28933972331LLU;
volatile int64_t x625 = 382173LL;
uint16_t x628 = 10137U;
int16_t x649 = INT16_MAX;
static volatile int32_t t85 = -741384784;
volatile int64_t t86 = -351LL;
static int32_t x690 = INT32_MIN;
int16_t x697 = INT16_MIN;
uint8_t x709 = 1U;
int16_t x710 = INT16_MIN;
static uint32_t x712 = 12U;
int16_t x717 = INT16_MAX;
uint8_t x718 = UINT8_MAX;
volatile int32_t x740 = INT32_MIN;
volatile uint16_t x741 = 151U;
int8_t x742 = INT8_MAX;
int32_t x744 = 1;
static int64_t x773 = INT64_MIN;
int8_t x776 = INT8_MAX;
uint64_t x779 = 2045524LLU;
static int8_t x789 = INT8_MIN;
int32_t x792 = 184281;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int32_t x2 = 94;
	int16_t x3 = INT16_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = ((x1%(x2<=x3))|x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint8_t x6 = 18U;
	uint8_t x7 = UINT8_MAX;
	volatile int16_t x8 = -38;
	volatile int32_t t1 = 645445692;

	t1 = ((x5%(x6<=x7))|x8);

	if (t1 != -38) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int32_t x14 = INT32_MIN;
	volatile int8_t x15 = -40;
	int64_t x16 = -1LL;
	volatile int64_t t2 = 29240LL;

	t2 = ((x13%(x14<=x15))|x16);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MIN;
	volatile int16_t x18 = INT16_MIN;
	uint64_t x19 = UINT64_MAX;
	uint64_t x20 = 39775LLU;
	uint64_t t3 = 3599LLU;

	t3 = ((x17%(x18<=x19))|x20);

	if (t3 != 39775LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = INT8_MAX;
	volatile int64_t x26 = INT64_MIN;
	int32_t x27 = 34911141;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = ((x25%(x26<=x27))|x28);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = 0;
	uint64_t x38 = 0LLU;
	int8_t x39 = 1;
	int64_t x40 = 1409502923432082LL;
	volatile int64_t t5 = 16100284LL;

	t5 = ((x37%(x38<=x39))|x40);

	if (t5 != 1409502923432082LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x41 = UINT8_MAX;
	volatile uint64_t x43 = UINT64_MAX;
	int16_t x44 = -3;
	static volatile int32_t t6 = 29502;

	t6 = ((x41%(x42<=x43))|x44);

	if (t6 != -3) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x50 = 23918U;
	uint64_t x51 = 333537417853614LLU;
	int64_t x52 = -5LL;
	int64_t t7 = -168447661LL;

	t7 = ((x49%(x50<=x51))|x52);

	if (t7 != -5LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x53 = 171;
	int8_t x54 = -34;

	t8 = ((x53%(x54<=x55))|x56);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x58 = INT32_MAX;
	uint64_t x59 = 3584205829531LLU;
	uint64_t x60 = 3725800541LLU;
	uint64_t t9 = 618LLU;

	t9 = ((x57%(x58<=x59))|x60);

	if (t9 != 3725800541LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x61 = UINT64_MAX;
	int64_t x63 = -7004996888LL;
	int16_t x64 = -1;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x61%(x62<=x63))|x64);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = 1490433U;
	volatile int8_t x66 = 3;
	uint32_t x67 = 20643950U;
	uint32_t x68 = 12041U;
	volatile uint32_t t11 = 26U;

	t11 = ((x65%(x66<=x67))|x68);

	if (t11 != 12041U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = ((x77%(x78<=x79))|x80);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x101 = INT16_MIN;
	static int16_t x102 = 301;
	uint32_t x103 = 1846657080U;
	volatile int8_t x104 = -1;
	volatile int32_t t13 = -618;

	t13 = ((x101%(x102<=x103))|x104);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x109 = INT64_MAX;
	int64_t x110 = INT64_MIN;
	int64_t x111 = -1LL;
	int16_t x112 = -1;

	t14 = ((x109%(x110<=x111))|x112);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MIN;
	int32_t x119 = INT32_MAX;
	int8_t x120 = -1;
	volatile int64_t t15 = -719522979LL;

	t15 = ((x117%(x118<=x119))|x120);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x122 = -92245LL;
	int8_t x123 = -36;
	static uint64_t x124 = UINT64_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x121%(x122<=x123))|x124);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	volatile int32_t t17 = 139767;

	t17 = ((x125%(x126<=x127))|x128);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x130 = -252312499290121146LL;
	int8_t x131 = INT8_MIN;
	static volatile uint64_t x132 = UINT64_MAX;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x129%(x130<=x131))|x132);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x137 = -9793;
	int8_t x138 = INT8_MIN;
	uint8_t x139 = 1U;
	int32_t x140 = INT32_MIN;
	static volatile int32_t t19 = INT32_MIN;

	t19 = ((x137%(x138<=x139))|x140);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x151 = INT32_MIN;
	volatile int16_t x152 = INT16_MAX;
	volatile int32_t t20 = 1;

	t20 = ((x149%(x150<=x151))|x152);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x153 = UINT64_MAX;
	volatile uint64_t x155 = UINT64_MAX;
	int64_t x156 = -987638015652LL;
	static volatile uint64_t t21 = 31900160LLU;

	t21 = ((x153%(x154<=x155))|x156);

	if (t21 != 18446743086071535964LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x165 = UINT32_MAX;
	uint16_t x167 = UINT16_MAX;
	volatile uint16_t x168 = 26U;
	volatile uint32_t t22 = 659U;

	t22 = ((x165%(x166<=x167))|x168);

	if (t22 != 26U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x169 = UINT64_MAX;
	int32_t x170 = -1;
	uint64_t x172 = 752653109LLU;
	uint64_t t23 = 974412366820826LLU;

	t23 = ((x169%(x170<=x171))|x172);

	if (t23 != 752653109LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x177 = -1;
	volatile int8_t x178 = -44;
	volatile uint16_t x179 = UINT16_MAX;
	int32_t t24 = 237425;

	t24 = ((x177%(x178<=x179))|x180);

	if (t24 != -1526880) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x185 = INT8_MIN;
	volatile int16_t x187 = INT16_MIN;
	int64_t t25 = INT64_MIN;

	t25 = ((x185%(x186<=x187))|x188);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x197 = 58U;
	int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MAX;
	int64_t x200 = -1LL;
	int64_t t26 = 2451607071681943LL;

	t26 = ((x197%(x198<=x199))|x200);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x202 = -1;
	static uint64_t x203 = UINT64_MAX;
	int8_t x204 = -50;
	int32_t t27 = 3117145;

	t27 = ((x201%(x202<=x203))|x204);

	if (t27 != -50) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x205 = UINT32_MAX;
	static int16_t x207 = 1617;
	volatile int64_t t28 = INT64_MIN;

	t28 = ((x205%(x206<=x207))|x208);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x213 = 43U;
	uint32_t x214 = 289658516U;
	int32_t x215 = INT32_MAX;
	uint64_t x216 = 6324562188668691LLU;
	static volatile uint64_t t29 = 9972321901LLU;

	t29 = ((x213%(x214<=x215))|x216);

	if (t29 != 6324562188668691LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x229 = UINT32_MAX;
	int8_t x230 = INT8_MIN;
	int8_t x231 = -1;

	t30 = ((x229%(x230<=x231))|x232);

	if (t30 != 32626LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x233 = -465;
	int64_t x234 = -390044061941210326LL;
	static int16_t x235 = INT16_MIN;
	uint32_t x236 = 2807713U;
	volatile uint32_t t31 = 238U;

	t31 = ((x233%(x234<=x235))|x236);

	if (t31 != 2807713U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x238 = -1;
	volatile int8_t x239 = -1;
	static volatile int64_t t32 = -2566823642LL;

	t32 = ((x237%(x238<=x239))|x240);

	if (t32 != 65535LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x241 = 383152342202LLU;
	static int16_t x242 = -1959;
	volatile int64_t x243 = INT64_MAX;
	uint64_t t33 = 1131729921315485961LLU;

	t33 = ((x241%(x242<=x243))|x244);

	if (t33 != 16LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x245 = INT16_MAX;
	int16_t x246 = -10;
	volatile uint64_t x247 = UINT64_MAX;
	volatile int64_t x248 = 59514LL;
	int64_t t34 = -2589231605283711LL;

	t34 = ((x245%(x246<=x247))|x248);

	if (t34 != 59514LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x253 = 1;
	volatile int32_t x254 = 111;
	int16_t x255 = INT16_MAX;
	volatile int64_t t35 = INT64_MIN;

	t35 = ((x253%(x254<=x255))|x256);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x257 = UINT16_MAX;
	uint64_t x258 = 4429LLU;
	uint16_t x259 = UINT16_MAX;
	volatile int64_t x260 = INT64_MIN;

	t36 = ((x257%(x258<=x259))|x260);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x261 = 10;
	uint32_t x262 = 3006U;
	int8_t x264 = INT8_MIN;

	t37 = ((x261%(x262<=x263))|x264);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x277 = INT32_MIN;
	int8_t x278 = -1;
	int32_t t38 = 2294;

	t38 = ((x277%(x278<=x279))|x280);

	if (t38 != -510280) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x282 = INT8_MIN;
	uint32_t x283 = UINT32_MAX;
	volatile uint64_t x284 = 8214710367316873LLU;

	t39 = ((x281%(x282<=x283))|x284);

	if (t39 != 8214710367316873LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x286 = INT8_MIN;
	volatile int64_t x287 = INT64_MAX;
	int64_t x288 = INT64_MIN;
	static int64_t t40 = INT64_MIN;

	t40 = ((x285%(x286<=x287))|x288);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x293 = INT8_MIN;
	static uint64_t x296 = 13986383069651322LLU;
	static uint64_t t41 = 19187736405625070LLU;

	t41 = ((x293%(x294<=x295))|x296);

	if (t41 != 13986383069651322LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x301 = 0;
	int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MAX;
	int64_t x304 = -260LL;
	int64_t t42 = 402810436490029445LL;

	t42 = ((x301%(x302<=x303))|x304);

	if (t42 != -260LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x309 = INT32_MIN;
	static int32_t x310 = -70013;
	int32_t x311 = -1;
	uint32_t x312 = UINT32_MAX;

	t43 = ((x309%(x310<=x311))|x312);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x313 = UINT8_MAX;
	uint64_t x314 = 1690759819868418506LLU;
	volatile int64_t x315 = INT64_MIN;
	volatile int64_t x316 = INT64_MIN;

	t44 = ((x313%(x314<=x315))|x316);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x318 = 0;
	uint64_t x319 = 0LLU;

	t45 = ((x317%(x318<=x319))|x320);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x321 = INT8_MIN;
	volatile uint8_t x322 = 0U;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t x324 = INT32_MIN;
	static volatile int32_t t46 = INT32_MIN;

	t46 = ((x321%(x322<=x323))|x324);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = -1LL;
	int64_t t47 = 4LL;

	t47 = ((x329%(x330<=x331))|x332);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x341 = INT16_MIN;
	volatile int32_t x342 = INT32_MAX;
	uint64_t x343 = 84756679526LLU;
	int32_t x344 = INT32_MIN;
	volatile int32_t t48 = INT32_MIN;

	t48 = ((x341%(x342<=x343))|x344);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x349 = UINT8_MAX;
	static int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MAX;
	volatile uint32_t x352 = UINT32_MAX;
	static volatile uint32_t t49 = UINT32_MAX;

	t49 = ((x349%(x350<=x351))|x352);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x353 = 38110U;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MAX;
	uint32_t t50 = 35390U;

	t50 = ((x353%(x354<=x355))|x356);

	if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x357 = -32540001912999LL;
	int8_t x358 = -1;
	static volatile uint16_t x359 = 1U;
	volatile int64_t t51 = 1600063601843450LL;

	t51 = ((x357%(x358<=x359))|x360);

	if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x361 = INT32_MAX;
	uint8_t x362 = 27U;
	static volatile int64_t x363 = INT64_MAX;
	int32_t x364 = -19;
	volatile int32_t t52 = -20655;

	t52 = ((x361%(x362<=x363))|x364);

	if (t52 != -19) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x373 = 13;
	static uint64_t x374 = 2699LLU;
	volatile int32_t t53 = 5015;

	t53 = ((x373%(x374<=x375))|x376);

	if (t53 != 915) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x378 = -1;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t54 = -1;

	t54 = ((x377%(x378<=x379))|x380);

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x381 = 5815909LL;
	int64_t x382 = -1LL;
	int32_t x383 = -1;
	uint8_t x384 = UINT8_MAX;
	static int64_t t55 = -521119488LL;

	t55 = ((x381%(x382<=x383))|x384);

	if (t55 != 255LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x389 = INT32_MAX;
	int32_t x390 = 1;
	static uint32_t x391 = 478728U;
	static uint32_t t56 = 347955U;

	t56 = ((x389%(x390<=x391))|x392);

	if (t56 != 494326175U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x397 = 120LLU;
	uint16_t x398 = 7U;
	int8_t x399 = INT8_MAX;
	int8_t x400 = -1;

	t57 = ((x397%(x398<=x399))|x400);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x405 = INT64_MAX;
	int8_t x406 = INT8_MIN;
	int16_t x408 = INT16_MAX;

	t58 = ((x405%(x406<=x407))|x408);

	if (t58 != 32767LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x411 = -1LL;
	volatile int32_t t59 = 5;

	t59 = ((x409%(x410<=x411))|x412);

	if (t59 != 1834) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x413 = 1;
	static volatile int8_t x414 = 0;
	static uint16_t x415 = 58U;
	static int32_t x416 = 25264119;
	int32_t t60 = -28;

	t60 = ((x413%(x414<=x415))|x416);

	if (t60 != 25264119) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x421 = -1LL;
	int8_t x423 = -1;
	int64_t t61 = -1044609673847882954LL;

	t61 = ((x421%(x422<=x423))|x424);

	if (t61 != 8222576445994855LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x433 = 412981192LLU;
	uint8_t x434 = 0U;
	uint64_t x435 = 94612124243642LLU;
	int16_t x436 = -1;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = ((x433%(x434<=x435))|x436);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x441 = INT32_MAX;
	uint16_t x442 = 21944U;
	static uint16_t x443 = UINT16_MAX;
	volatile int16_t x444 = INT16_MAX;
	int32_t t63 = 5;

	t63 = ((x441%(x442<=x443))|x444);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x445 = INT8_MIN;
	uint8_t x446 = 2U;
	uint32_t x447 = UINT32_MAX;
	static int16_t x448 = INT16_MIN;

	t64 = ((x445%(x446<=x447))|x448);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x454 = INT64_MIN;
	int32_t t65 = -148;

	t65 = ((x453%(x454<=x455))|x456);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x461 = INT64_MIN;
	static int32_t x462 = INT32_MIN;
	static uint8_t x463 = UINT8_MAX;
	volatile int64_t x464 = INT64_MIN;

	t66 = ((x461%(x462<=x463))|x464);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x473 = 1499U;
	uint64_t x475 = UINT64_MAX;
	volatile int8_t x476 = -1;
	volatile int32_t t67 = -1;

	t67 = ((x473%(x474<=x475))|x476);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x477 = INT8_MIN;
	uint32_t x478 = 2024U;
	int64_t x480 = -1LL;
	int64_t t68 = -3976922710LL;

	t68 = ((x477%(x478<=x479))|x480);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x486 = 5LL;
	uint32_t x487 = 313078656U;
	uint64_t x488 = UINT64_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x485%(x486<=x487))|x488);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x493 = 58U;
	int8_t x494 = -1;
	static int8_t x495 = 14;
	uint64_t x496 = 25690265002029259LLU;
	volatile uint64_t t70 = 172LLU;

	t70 = ((x493%(x494<=x495))|x496);

	if (t70 != 25690265002029259LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x510 = INT64_MIN;
	int64_t x511 = -39371LL;
	static int64_t x512 = INT64_MIN;
	int64_t t71 = INT64_MIN;

	t71 = ((x509%(x510<=x511))|x512);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x514 = -1LL;
	volatile int32_t x515 = -1;
	int32_t t72 = 200;

	t72 = ((x513%(x514<=x515))|x516);

	if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x517 = 0;
	uint32_t x518 = 2495U;
	volatile int64_t x519 = 429516199862574LL;
	int8_t x520 = 4;

	t73 = ((x517%(x518<=x519))|x520);

	if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x541 = UINT64_MAX;
	uint64_t x542 = 146LLU;
	int16_t x543 = INT16_MAX;
	uint64_t x544 = 803214109836LLU;
	static volatile uint64_t t74 = 10193301266323LLU;

	t74 = ((x541%(x542<=x543))|x544);

	if (t74 != 803214109836LLU) { NG(); } else { ; }
	
}

void f75(void) {


	t75 = ((x545%(x546<=x547))|x548);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x566 = -1;
	int32_t x567 = 2750;
	int32_t x568 = 4858191;
	int32_t t76 = -4;

	t76 = ((x565%(x566<=x567))|x568);

	if (t76 != 4858191) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x573 = INT16_MAX;
	uint16_t x575 = UINT16_MAX;
	int16_t x576 = -7;

	t77 = ((x573%(x574<=x575))|x576);

	if (t77 != -7) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x581 = -10509;
	static int64_t x584 = -1LL;
	volatile int64_t t78 = 7813LL;

	t78 = ((x581%(x582<=x583))|x584);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x585 = 102479U;
	int64_t x587 = INT64_MAX;
	volatile int64_t x588 = -1LL;
	volatile int64_t t79 = 9981886LL;

	t79 = ((x585%(x586<=x587))|x588);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x595 = -1;
	static volatile uint64_t x596 = 2912709LLU;
	static volatile uint64_t t80 = 385057871776LLU;

	t80 = ((x593%(x594<=x595))|x596);

	if (t80 != 2912709LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x617 = INT64_MIN;
	volatile uint64_t x618 = 252LLU;
	int16_t x619 = -2738;
	int64_t x620 = -1LL;
	volatile int64_t t81 = 7259547LL;

	t81 = ((x617%(x618<=x619))|x620);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x622 = INT64_MIN;
	static uint64_t x624 = 1536449044316124488LLU;

	t82 = ((x621%(x622<=x623))|x624);

	if (t82 != 1536449044316124488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x626 = 1;
	uint64_t x627 = 257224143LLU;
	volatile int64_t t83 = 772886267019031418LL;

	t83 = ((x625%(x626<=x627))|x628);

	if (t83 != 10137LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x650 = INT64_MIN;
	uint8_t x651 = UINT8_MAX;
	uint16_t x652 = 3U;
	volatile int32_t t84 = -106647038;

	t84 = ((x649%(x650<=x651))|x652);

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x653 = 5;
	uint32_t x654 = UINT32_MAX;
	volatile int8_t x655 = -1;
	volatile int8_t x656 = INT8_MAX;

	t85 = ((x653%(x654<=x655))|x656);

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x665 = -150597233666485241LL;
	int8_t x666 = INT8_MAX;
	uint16_t x667 = UINT16_MAX;
	uint16_t x668 = UINT16_MAX;

	t86 = ((x665%(x666<=x667))|x668);

	if (t86 != 65535LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x673 = 42;
	int64_t x674 = -8260346755062LL;
	volatile uint8_t x675 = 94U;
	uint64_t x676 = 743248447185809LLU;
	uint64_t t87 = 4385524369057103LLU;

	t87 = ((x673%(x674<=x675))|x676);

	if (t87 != 743248447185809LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x689 = -16;
	int32_t x691 = -3884;
	int64_t x692 = INT64_MIN;
	int64_t t88 = INT64_MIN;

	t88 = ((x689%(x690<=x691))|x692);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x698 = INT32_MIN;
	int32_t x699 = 2438;
	int32_t x700 = 13994;
	int32_t t89 = -57288;

	t89 = ((x697%(x698<=x699))|x700);

	if (t89 != 13994) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x711 = 6;
	static uint32_t t90 = 314962U;

	t90 = ((x709%(x710<=x711))|x712);

	if (t90 != 12U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x719 = INT32_MAX;
	int8_t x720 = -1;
	int32_t t91 = -1682520;

	t91 = ((x717%(x718<=x719))|x720);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x737 = 11494641705LLU;
	int32_t x738 = INT32_MIN;
	uint8_t x739 = 4U;
	uint64_t t92 = 10LLU;

	t92 = ((x737%(x738<=x739))|x740);

	if (t92 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x743 = INT32_MAX;
	static volatile int32_t t93 = 33524372;

	t93 = ((x741%(x742<=x743))|x744);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x749 = 527254LLU;
	uint8_t x750 = 1U;
	volatile int8_t x751 = INT8_MAX;
	volatile int32_t x752 = INT32_MAX;
	volatile uint64_t t94 = 6675303LLU;

	t94 = ((x749%(x750<=x751))|x752);

	if (t94 != 2147483647LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x774 = INT64_MIN;
	int64_t x775 = INT64_MIN;
	volatile int64_t t95 = 2LL;

	t95 = ((x773%(x774<=x775))|x776);

	if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x777 = INT8_MAX;
	uint16_t x778 = 53U;
	static uint8_t x780 = 1U;
	volatile int32_t t96 = 740;

	t96 = ((x777%(x778<=x779))|x780);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x790 = INT8_MIN;
	int8_t x791 = 0;
	int32_t t97 = -140116344;

	t97 = ((x789%(x790<=x791))|x792);

	if (t97 != 184281) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x793 = INT32_MAX;
	int16_t x794 = INT16_MIN;
	int32_t x795 = -1;
	uint32_t x796 = 5547113U;
	uint32_t t98 = 1908727510U;

	t98 = ((x793%(x794<=x795))|x796);

	if (t98 != 5547113U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x797 = 678U;
	static uint64_t x798 = 172266848154126LLU;
	int8_t x799 = INT8_MIN;
	int16_t x800 = 2;
	uint32_t t99 = 31284419U;

	t99 = ((x797%(x798<=x799))|x800);

	if (t99 != 2U) { NG(); } else { ; }
	
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

