#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 7967096;
uint64_t x17 = 190495LLU;
uint8_t x42 = 22U;
volatile uint32_t t6 = 13086U;
int8_t x49 = INT8_MAX;
volatile int64_t t9 = 0LL;
volatile uint16_t x84 = 205U;
volatile int8_t x86 = INT8_MAX;
int32_t x87 = INT32_MIN;
int16_t x88 = INT16_MIN;
static uint16_t x93 = 2U;
uint32_t x96 = 512598U;
volatile int32_t t12 = -1;
static volatile int32_t t13 = -26061;
int16_t x132 = 1;
static volatile int32_t t22 = 709804;
volatile int32_t x173 = 703;
static int32_t t25 = 100043;
int32_t x181 = INT32_MAX;
volatile uint32_t x184 = UINT32_MAX;
int16_t x186 = INT16_MIN;
static volatile uint64_t x187 = 509819324922891319LLU;
int32_t x220 = 0;
int32_t t36 = -29949693;
static volatile int64_t x246 = 9534556454905LL;
int64_t x257 = INT64_MAX;
static uint16_t x258 = 6U;
int64_t t39 = 292197739LL;
int8_t x297 = 13;
uint8_t x308 = UINT8_MAX;
uint64_t x326 = UINT64_MAX;
uint8_t x328 = 2U;
static volatile int64_t t47 = 15LL;
uint32_t x350 = UINT32_MAX;
int64_t x351 = INT64_MAX;
uint8_t x354 = 8U;
uint32_t x364 = 135778336U;
uint64_t x397 = UINT64_MAX;
static int32_t x415 = INT32_MAX;
int16_t x416 = -1;
int32_t x417 = 984858537;
int32_t x460 = INT32_MAX;
uint64_t t68 = UINT64_MAX;
uint32_t x490 = 5547U;
static int8_t x497 = 20;
int8_t x498 = INT8_MIN;
uint8_t x501 = 38U;
volatile int32_t t73 = -3;
uint64_t x512 = 19LLU;
static int32_t x515 = INT32_MAX;
int8_t x516 = -1;
int32_t t75 = 972727247;
static int64_t x532 = INT64_MIN;
int32_t t77 = -1;
int32_t x564 = INT32_MIN;
volatile int32_t t81 = -6705862;
int16_t x577 = INT16_MAX;
int8_t x586 = -1;
int16_t x587 = -1496;
int32_t t84 = 0;
uint8_t x614 = UINT8_MAX;
volatile int32_t x616 = 9;
static int32_t t86 = -48112;
volatile uint16_t x625 = 55U;
int32_t x629 = INT32_MAX;
static volatile int32_t t88 = 107407;
static int32_t x648 = -50;
static int64_t x657 = INT64_MAX;
static int8_t x666 = -1;
uint32_t t93 = UINT32_MAX;
static uint8_t x677 = UINT8_MAX;
static int16_t x680 = INT16_MIN;
uint8_t x681 = UINT8_MAX;
int8_t x683 = 63;
int16_t x685 = INT16_MAX;
int32_t x690 = INT32_MIN;
int8_t x691 = 57;
int16_t x694 = 117;
int32_t t98 = -972;
uint16_t x700 = 113U;
uint32_t t99 = 13U;


void f0(void) {
	volatile int64_t x1 = 461LL;
	uint32_t x2 = 369860182U;
	int32_t x3 = INT32_MAX;
	uint32_t x4 = UINT32_MAX;
	int64_t t0 = -289157534995216LL;

	t0 = (x1>>((x2<=x3)<=x4));

	if (t0 != 230LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 8U;
	int64_t x10 = -3867LL;
	int16_t x11 = -1;
	static volatile int32_t x12 = -18211;

	t1 = (x9>>((x10<=x11)<=x12));

	if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = 15U;
	uint32_t x14 = UINT32_MAX;
	uint32_t x15 = 3U;
	int16_t x16 = -1;
	static int32_t t2 = 2958;

	t2 = (x13>>((x14<=x15)<=x16));

	if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = -7466498;
	uint32_t x19 = 4444669U;
	static int16_t x20 = 1939;
	volatile uint64_t t3 = 6LLU;

	t3 = (x17>>((x18<=x19)<=x20));

	if (t3 != 95247LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x25 = 295801U;
	uint32_t x26 = UINT32_MAX;
	int16_t x27 = INT16_MIN;
	volatile uint8_t x28 = 3U;
	uint32_t t4 = 1486174U;

	t4 = (x25>>((x26<=x27)<=x28));

	if (t4 != 147900U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 2U;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = INT32_MAX;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t5 = 57430;

	t5 = (x33>>((x34<=x35)<=x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = 321551814U;
	int64_t x43 = -3636807850LL;
	static int8_t x44 = -7;

	t6 = (x41>>((x42<=x43)<=x44));

	if (t6 != 321551814U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x50 = UINT64_MAX;
	int16_t x51 = 41;
	uint16_t x52 = 12U;
	volatile int32_t t7 = -1;

	t7 = (x49>>((x50<=x51)<=x52));

	if (t7 != 63) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x65 = 1;
	volatile int64_t x66 = 961444270LL;
	uint64_t x67 = UINT64_MAX;
	static volatile int32_t x68 = -6;
	volatile int32_t t8 = 694848887;

	t8 = (x65>>((x66<=x67)<=x68));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x73 = 1LL;
	uint64_t x74 = 13065555LLU;
	static int64_t x75 = INT64_MIN;
	int16_t x76 = -60;

	t9 = (x73>>((x74<=x75)<=x76));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x81 = 12;
	static volatile uint8_t x82 = UINT8_MAX;
	int8_t x83 = -1;
	int32_t t10 = 1;

	t10 = (x81>>((x82<=x83)<=x84));

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x85 = UINT32_MAX;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (x85>>((x86<=x87)<=x88));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x94 = -184;
	int8_t x95 = INT8_MAX;

	t12 = (x93>>((x94<=x95)<=x96));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	int32_t x100 = INT32_MAX;

	t13 = (x97>>((x98<=x99)<=x100));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x109 = 88U;
	uint8_t x110 = UINT8_MAX;
	static int8_t x111 = INT8_MIN;
	uint32_t x112 = 9684U;
	volatile int32_t t14 = -68144886;

	t14 = (x109>>((x110<=x111)<=x112));

	if (t14 != 44) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x113 = 1U;
	static int16_t x114 = INT16_MIN;
	static volatile int32_t x115 = INT32_MIN;
	uint32_t x116 = UINT32_MAX;
	volatile int32_t t15 = 475887;

	t15 = (x113>>((x114<=x115)<=x116));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x121 = INT32_MAX;
	int64_t x122 = INT64_MAX;
	int16_t x123 = -13873;
	uint64_t x124 = 195172544LLU;
	int32_t t16 = -50;

	t16 = (x121>>((x122<=x123)<=x124));

	if (t16 != 1073741823) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x125 = 226476U;
	uint8_t x126 = 5U;
	static int8_t x127 = -1;
	static int16_t x128 = -897;
	uint32_t t17 = 34847U;

	t17 = (x125>>((x126<=x127)<=x128));

	if (t17 != 226476U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x129 = 4396;
	volatile int64_t x130 = 0LL;
	int16_t x131 = INT16_MAX;
	int32_t t18 = -37529;

	t18 = (x129>>((x130<=x131)<=x132));

	if (t18 != 2198) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x133 = 0U;
	int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	static volatile int64_t x136 = 1LL;
	volatile int32_t t19 = 20119;

	t19 = (x133>>((x134<=x135)<=x136));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x137 = UINT32_MAX;
	static int8_t x138 = INT8_MAX;
	volatile int64_t x139 = INT64_MIN;
	volatile uint16_t x140 = UINT16_MAX;
	volatile uint32_t t20 = 44U;

	t20 = (x137>>((x138<=x139)<=x140));

	if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x141 = 1U;
	uint32_t x142 = 35U;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = 342;
	static volatile uint32_t t21 = 6U;

	t21 = (x141>>((x142<=x143)<=x144));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x157 = 48U;
	int16_t x158 = -1;
	static uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MIN;

	t22 = (x157>>((x158<=x159)<=x160));

	if (t22 != 48) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x165 = UINT64_MAX;
	int16_t x166 = 45;
	int64_t x167 = 12LL;
	volatile uint64_t x168 = 10600110768LLU;
	uint64_t t23 = 1741LLU;

	t23 = (x165>>((x166<=x167)<=x168));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MIN;
	uint32_t x176 = 41703680U;
	volatile int32_t t24 = 475487;

	t24 = (x173>>((x174<=x175)<=x176));

	if (t24 != 351) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x177 = INT8_MAX;
	volatile uint64_t x178 = UINT64_MAX;
	int64_t x179 = -86389260LL;
	uint8_t x180 = 2U;

	t25 = (x177>>((x178<=x179)<=x180));

	if (t25 != 63) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x182 = 44;
	volatile int32_t x183 = 49374986;
	int32_t t26 = -9852;

	t26 = (x181>>((x182<=x183)<=x184));

	if (t26 != 1073741823) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x185 = INT16_MAX;
	int16_t x188 = INT16_MIN;
	int32_t t27 = 371;

	t27 = (x185>>((x186<=x187)<=x188));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x189 = 0;
	int32_t x190 = -1;
	static int64_t x191 = -1LL;
	static uint8_t x192 = 13U;
	volatile int32_t t28 = 0;

	t28 = (x189>>((x190<=x191)<=x192));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x205 = INT8_MAX;
	static volatile uint64_t x206 = UINT64_MAX;
	int32_t x207 = INT32_MIN;
	static uint8_t x208 = UINT8_MAX;
	static volatile int32_t t29 = -1687572;

	t29 = (x205>>((x206<=x207)<=x208));

	if (t29 != 63) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x209 = 3487U;
	static volatile int32_t x210 = 37;
	uint8_t x211 = 1U;
	int16_t x212 = INT16_MIN;
	volatile uint32_t t30 = 56830905U;

	t30 = (x209>>((x210<=x211)<=x212));

	if (t30 != 3487U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x213 = UINT16_MAX;
	volatile int8_t x214 = INT8_MAX;
	volatile int8_t x215 = INT8_MIN;
	int8_t x216 = -1;
	volatile int32_t t31 = 17;

	t31 = (x213>>((x214<=x215)<=x216));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x217 = UINT16_MAX;
	static int64_t x218 = INT64_MIN;
	static int32_t x219 = 103450;
	int32_t t32 = -7271465;

	t32 = (x217>>((x218<=x219)<=x220));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x225 = INT32_MAX;
	int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MIN;
	uint32_t x228 = 13689U;
	int32_t t33 = 132009;

	t33 = (x225>>((x226<=x227)<=x228));

	if (t33 != 1073741823) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x233 = 1U;
	static uint64_t x234 = 141551397367235LLU;
	uint64_t x235 = 1348340124LLU;
	uint8_t x236 = 44U;
	static volatile int32_t t34 = -4676621;

	t34 = (x233>>((x234<=x235)<=x236));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x237 = 0;
	uint64_t x238 = UINT64_MAX;
	static int8_t x239 = INT8_MIN;
	volatile uint64_t x240 = 8503553LLU;
	volatile int32_t t35 = -2593719;

	t35 = (x237>>((x238<=x239)<=x240));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x241 = 184;
	uint8_t x242 = UINT8_MAX;
	volatile uint16_t x243 = UINT16_MAX;
	int8_t x244 = 0;

	t36 = (x241>>((x242<=x243)<=x244));

	if (t36 != 184) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x245 = 33512LL;
	int16_t x247 = INT16_MIN;
	static volatile uint32_t x248 = 3551945U;
	static volatile int64_t t37 = 1790LL;

	t37 = (x245>>((x246<=x247)<=x248));

	if (t37 != 16756LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x249 = 63926U;
	uint16_t x250 = 16U;
	int32_t x251 = INT32_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile uint32_t t38 = 1U;

	t38 = (x249>>((x250<=x251)<=x252));

	if (t38 != 31963U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x259 = -53;
	volatile uint64_t x260 = 21460995453LLU;

	t39 = (x257>>((x258<=x259)<=x260));

	if (t39 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int64_t x262 = INT64_MIN;
	uint32_t x263 = 12U;
	int64_t x264 = INT64_MIN;
	static uint64_t t40 = UINT64_MAX;

	t40 = (x261>>((x262<=x263)<=x264));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x265 = 30617U;
	volatile int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t41 = 970431;

	t41 = (x265>>((x266<=x267)<=x268));

	if (t41 != 30617) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x273 = 145009836195014LLU;
	int8_t x274 = INT8_MAX;
	static int32_t x275 = -1;
	volatile int16_t x276 = 4;
	static uint64_t t42 = 32114LLU;

	t42 = (x273>>((x274<=x275)<=x276));

	if (t42 != 72504918097507LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x281 = INT64_MAX;
	static int16_t x282 = -1;
	volatile uint64_t x283 = 508341525365112LLU;
	uint8_t x284 = 1U;
	volatile int64_t t43 = 3268229606733LL;

	t43 = (x281>>((x282<=x283)<=x284));

	if (t43 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x298 = 150913;
	int16_t x299 = -1;
	static uint64_t x300 = 0LLU;
	int32_t t44 = 38956;

	t44 = (x297>>((x298<=x299)<=x300));

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x305 = 2514U;
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	volatile int32_t t45 = -356001;

	t45 = (x305>>((x306<=x307)<=x308));

	if (t45 != 1257) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x309 = UINT32_MAX;
	uint16_t x310 = UINT16_MAX;
	static volatile int32_t x311 = 3;
	static int8_t x312 = -1;
	uint32_t t46 = UINT32_MAX;

	t46 = (x309>>((x310<=x311)<=x312));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x325 = 940497271324726LL;
	int8_t x327 = INT8_MIN;

	t47 = (x325>>((x326<=x327)<=x328));

	if (t47 != 470248635662363LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x329 = UINT64_MAX;
	uint64_t x330 = 157333167593LLU;
	int32_t x331 = -1;
	uint64_t x332 = UINT64_MAX;
	static uint64_t t48 = 1080421304398132LLU;

	t48 = (x329>>((x330<=x331)<=x332));

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x333 = UINT64_MAX;
	volatile int64_t x334 = 48167142939413LL;
	int8_t x335 = -14;
	int16_t x336 = INT16_MAX;
	volatile uint64_t t49 = 5193835140LLU;

	t49 = (x333>>((x334<=x335)<=x336));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x337 = 33;
	volatile uint64_t x338 = UINT64_MAX;
	static int32_t x339 = -235578;
	uint64_t x340 = 208LLU;
	volatile int32_t t50 = -1;

	t50 = (x337>>((x338<=x339)<=x340));

	if (t50 != 16) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x345 = 27198755U;
	int32_t x346 = -1;
	int16_t x347 = INT16_MIN;
	volatile uint8_t x348 = 0U;
	uint32_t t51 = 34768U;

	t51 = (x345>>((x346<=x347)<=x348));

	if (t51 != 13599377U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x349 = 2657281;
	int32_t x352 = INT32_MAX;
	int32_t t52 = 263894;

	t52 = (x349>>((x350<=x351)<=x352));

	if (t52 != 1328640) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x353 = UINT64_MAX;
	volatile uint32_t x355 = 12054068U;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t53 = 5419470183123941622LLU;

	t53 = (x353>>((x354<=x355)<=x356));

	if (t53 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x357 = 73U;
	static int8_t x358 = -1;
	int8_t x359 = INT8_MAX;
	static int16_t x360 = -1;
	int32_t t54 = -43621398;

	t54 = (x357>>((x358<=x359)<=x360));

	if (t54 != 73) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x361 = UINT16_MAX;
	volatile int8_t x362 = INT8_MAX;
	volatile int64_t x363 = -2974470LL;
	volatile int32_t t55 = 71;

	t55 = (x361>>((x362<=x363)<=x364));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x373 = 7;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	static int32_t x376 = INT32_MIN;
	static int32_t t56 = -998669;

	t56 = (x373>>((x374<=x375)<=x376));

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x398 = 31U;
	uint16_t x399 = 57U;
	uint64_t x400 = 8507271752LLU;
	volatile uint64_t t57 = 2712087410144942593LLU;

	t57 = (x397>>((x398<=x399)<=x400));

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x405 = INT16_MAX;
	uint16_t x406 = UINT16_MAX;
	int8_t x407 = 3;
	static uint16_t x408 = 26868U;
	int32_t t58 = 4;

	t58 = (x405>>((x406<=x407)<=x408));

	if (t58 != 16383) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x409 = 29;
	static int32_t x410 = -1;
	static int16_t x411 = INT16_MIN;
	static uint8_t x412 = UINT8_MAX;
	volatile int32_t t59 = 120392;

	t59 = (x409>>((x410<=x411)<=x412));

	if (t59 != 14) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x413 = 17U;
	uint32_t x414 = UINT32_MAX;
	volatile int32_t t60 = -961;

	t60 = (x413>>((x414<=x415)<=x416));

	if (t60 != 17) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x418 = 7U;
	uint32_t x419 = UINT32_MAX;
	int16_t x420 = -1035;
	static volatile int32_t t61 = -1328;

	t61 = (x417>>((x418<=x419)<=x420));

	if (t61 != 984858537) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x437 = 39U;
	volatile uint16_t x438 = 7U;
	int64_t x439 = -1LL;
	int64_t x440 = 20782547LL;
	volatile int32_t t62 = -521;

	t62 = (x437>>((x438<=x439)<=x440));

	if (t62 != 19) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x445 = INT16_MAX;
	static int8_t x446 = INT8_MIN;
	static uint32_t x447 = UINT32_MAX;
	uint64_t x448 = 51143859627LLU;
	int32_t t63 = 1;

	t63 = (x445>>((x446<=x447)<=x448));

	if (t63 != 16383) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x457 = UINT32_MAX;
	uint32_t x458 = 14U;
	static int64_t x459 = INT64_MAX;
	volatile uint32_t t64 = 29U;

	t64 = (x457>>((x458<=x459)<=x460));

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x465 = UINT32_MAX;
	int8_t x466 = INT8_MIN;
	uint64_t x467 = 83097LLU;
	uint64_t x468 = 1935326LLU;
	volatile uint32_t t65 = 115095U;

	t65 = (x465>>((x466<=x467)<=x468));

	if (t65 != 2147483647U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x469 = 178;
	static int16_t x470 = INT16_MAX;
	static volatile uint8_t x471 = 4U;
	volatile uint8_t x472 = 1U;
	volatile int32_t t66 = -118046244;

	t66 = (x469>>((x470<=x471)<=x472));

	if (t66 != 89) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x477 = UINT16_MAX;
	uint64_t x478 = 1279754541345756191LLU;
	volatile int16_t x479 = -1;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t67 = -3144902;

	t67 = (x477>>((x478<=x479)<=x480));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x481 = UINT64_MAX;
	int16_t x482 = INT16_MIN;
	uint32_t x483 = 44060965U;
	static int8_t x484 = INT8_MIN;

	t68 = (x481>>((x482<=x483)<=x484));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x485 = UINT16_MAX;
	static int16_t x486 = INT16_MIN;
	static int8_t x487 = -1;
	volatile uint8_t x488 = 127U;
	int32_t t69 = -32668;

	t69 = (x485>>((x486<=x487)<=x488));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x489 = UINT16_MAX;
	int64_t x491 = -1LL;
	int32_t x492 = INT32_MIN;
	volatile int32_t t70 = -2;

	t70 = (x489>>((x490<=x491)<=x492));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x493 = 7LL;
	int32_t x494 = -1;
	int16_t x495 = INT16_MAX;
	int32_t x496 = 481;
	volatile int64_t t71 = 19667LL;

	t71 = (x493>>((x494<=x495)<=x496));

	if (t71 != 3LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x499 = -1;
	int16_t x500 = 690;
	volatile int32_t t72 = -2;

	t72 = (x497>>((x498<=x499)<=x500));

	if (t72 != 10) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x502 = -1;
	int64_t x503 = INT64_MAX;
	int64_t x504 = INT64_MIN;

	t73 = (x501>>((x502<=x503)<=x504));

	if (t73 != 38) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x509 = 1412943436LLU;
	uint32_t x510 = 997U;
	static volatile int8_t x511 = -1;
	uint64_t t74 = 6375473906683561LLU;

	t74 = (x509>>((x510<=x511)<=x512));

	if (t74 != 706471718LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x513 = 27U;
	volatile int32_t x514 = 1534735;

	t75 = (x513>>((x514<=x515)<=x516));

	if (t75 != 27) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x525 = INT8_MAX;
	uint16_t x526 = UINT16_MAX;
	uint64_t x527 = 173LLU;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t76 = -3104;

	t76 = (x525>>((x526<=x527)<=x528));

	if (t76 != 63) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x529 = INT16_MAX;
	int32_t x530 = INT32_MIN;
	static volatile int32_t x531 = INT32_MAX;

	t77 = (x529>>((x530<=x531)<=x532));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x533 = UINT64_MAX;
	int64_t x534 = INT64_MAX;
	volatile int8_t x535 = INT8_MIN;
	volatile int32_t x536 = -1;
	uint64_t t78 = UINT64_MAX;

	t78 = (x533>>((x534<=x535)<=x536));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x553 = INT16_MAX;
	volatile int64_t x554 = 94069665845709478LL;
	uint32_t x555 = UINT32_MAX;
	int32_t x556 = -190;
	volatile int32_t t79 = -21488;

	t79 = (x553>>((x554<=x555)<=x556));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x561 = UINT8_MAX;
	int8_t x562 = INT8_MAX;
	int32_t x563 = INT32_MIN;
	static volatile int32_t t80 = -27;

	t80 = (x561>>((x562<=x563)<=x564));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x565 = UINT8_MAX;
	int64_t x566 = 2LL;
	uint16_t x567 = UINT16_MAX;
	uint64_t x568 = 1559LLU;

	t81 = (x565>>((x566<=x567)<=x568));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x578 = UINT32_MAX;
	uint64_t x579 = 24730105697509LLU;
	static volatile int16_t x580 = INT16_MIN;
	int32_t t82 = 18443104;

	t82 = (x577>>((x578<=x579)<=x580));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x585 = 1185;
	volatile int64_t x588 = INT64_MAX;
	int32_t t83 = -110;

	t83 = (x585>>((x586<=x587)<=x588));

	if (t83 != 592) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x609 = 11205878;
	volatile uint8_t x610 = 36U;
	int8_t x611 = -1;
	static volatile int64_t x612 = -1LL;

	t84 = (x609>>((x610<=x611)<=x612));

	if (t84 != 11205878) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x613 = 5;
	volatile int64_t x615 = INT64_MAX;
	volatile int32_t t85 = -1895;

	t85 = (x613>>((x614<=x615)<=x616));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x617 = 5343U;
	int64_t x618 = INT64_MAX;
	int16_t x619 = 13438;
	volatile uint64_t x620 = UINT64_MAX;

	t86 = (x617>>((x618<=x619)<=x620));

	if (t86 != 2671) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x626 = 71;
	int16_t x627 = INT16_MIN;
	static volatile int32_t x628 = INT32_MAX;
	volatile int32_t t87 = -172;

	t87 = (x625>>((x626<=x627)<=x628));

	if (t87 != 27) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x630 = -1;
	int32_t x631 = INT32_MIN;
	uint8_t x632 = UINT8_MAX;

	t88 = (x629>>((x630<=x631)<=x632));

	if (t88 != 1073741823) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x641 = 161111989U;
	int8_t x642 = -8;
	int64_t x643 = INT64_MIN;
	int32_t x644 = -1;
	static uint32_t t89 = 3105706U;

	t89 = (x641>>((x642<=x643)<=x644));

	if (t89 != 161111989U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x645 = INT16_MAX;
	int8_t x646 = -17;
	int64_t x647 = INT64_MAX;
	int32_t t90 = -37150607;

	t90 = (x645>>((x646<=x647)<=x648));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x658 = -498;
	static int8_t x659 = INT8_MIN;
	static uint16_t x660 = UINT16_MAX;
	int64_t t91 = -14853500382LL;

	t91 = (x657>>((x658<=x659)<=x660));

	if (t91 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x665 = 90U;
	uint8_t x667 = UINT8_MAX;
	int32_t x668 = INT32_MIN;
	int32_t t92 = 43;

	t92 = (x665>>((x666<=x667)<=x668));

	if (t92 != 90) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x669 = UINT32_MAX;
	static int64_t x670 = INT64_MIN;
	int16_t x671 = -1;
	int8_t x672 = -1;

	t93 = (x669>>((x670<=x671)<=x672));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x678 = INT32_MIN;
	volatile int64_t x679 = 41224071450622324LL;
	int32_t t94 = -162264;

	t94 = (x677>>((x678<=x679)<=x680));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x682 = UINT8_MAX;
	int16_t x684 = -4668;
	volatile int32_t t95 = 563113943;

	t95 = (x681>>((x682<=x683)<=x684));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x686 = INT64_MIN;
	static int16_t x687 = INT16_MAX;
	static volatile uint64_t x688 = 4583490942LLU;
	volatile int32_t t96 = -187737;

	t96 = (x685>>((x686<=x687)<=x688));

	if (t96 != 16383) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x689 = 3388;
	int32_t x692 = INT32_MIN;
	volatile int32_t t97 = -250714443;

	t97 = (x689>>((x690<=x691)<=x692));

	if (t97 != 3388) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x693 = 17163;
	int8_t x695 = INT8_MIN;
	uint64_t x696 = UINT64_MAX;

	t98 = (x693>>((x694<=x695)<=x696));

	if (t98 != 8581) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x697 = 1749959118U;
	int16_t x698 = -1;
	int32_t x699 = 42;

	t99 = (x697>>((x698<=x699)<=x700));

	if (t99 != 874979559U) { NG(); } else { ; }
	
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

