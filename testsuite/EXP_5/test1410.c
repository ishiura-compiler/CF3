#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = -1;
uint64_t x13 = 255LLU;
static int32_t x15 = 4262;
uint64_t t2 = 0LLU;
int8_t x18 = INT8_MIN;
volatile int64_t x20 = INT64_MIN;
volatile uint16_t x23 = 28U;
int32_t x27 = 0;
volatile uint32_t x28 = 847U;
int8_t x47 = 24;
uint16_t x54 = 78U;
static uint64_t x62 = UINT64_MAX;
int32_t x66 = 1;
int8_t x79 = -2;
uint32_t x82 = 63U;
uint8_t x84 = 2U;
uint64_t x86 = UINT64_MAX;
uint64_t x92 = UINT64_MAX;
int32_t x104 = 2;
uint64_t x108 = UINT64_MAX;
volatile uint64_t t17 = 174LLU;
int8_t x116 = -1;
static int64_t x119 = -1LL;
int8_t x136 = INT8_MIN;
volatile int32_t t20 = -178115;
int32_t x150 = -1;
static int8_t x151 = INT8_MAX;
static volatile uint64_t x173 = 231595LLU;
uint64_t t23 = 4LLU;
uint32_t x177 = UINT32_MAX;
static int8_t x179 = INT8_MIN;
int32_t t25 = -37;
uint16_t x194 = UINT16_MAX;
volatile int64_t t26 = -1459480LL;
volatile int64_t x203 = -1LL;
volatile int64_t x211 = INT64_MIN;
int32_t t29 = 3307;
uint32_t t30 = 10915U;
int64_t x242 = INT64_MIN;
volatile uint64_t x251 = 27124660985571845LLU;
int16_t x278 = 7;
static uint32_t x280 = UINT32_MAX;
int8_t x310 = 0;
uint16_t x329 = UINT16_MAX;
int16_t x333 = 7053;
volatile int32_t t45 = -2;
volatile int32_t t48 = -78249843;
int64_t x365 = INT64_MAX;
static uint32_t x366 = UINT32_MAX;
int64_t x376 = 408288596575LL;
int8_t x377 = 45;
uint64_t x378 = UINT64_MAX;
volatile int32_t t57 = -191161;
uint16_t x408 = 183U;
volatile uint16_t x413 = UINT16_MAX;
volatile int32_t t60 = -6269706;
uint32_t x421 = 9763U;
volatile int32_t t63 = -1504454;
int8_t x454 = INT8_MAX;
static int16_t x456 = INT16_MAX;
uint64_t x475 = 170LLU;
int32_t x478 = 1272636;
uint16_t x480 = 496U;
volatile int32_t t67 = 1165;
int8_t x505 = INT8_MAX;
static volatile int8_t x510 = INT8_MAX;
volatile int8_t x519 = -1;
int16_t x525 = INT16_MAX;
static int8_t x527 = 0;
uint64_t t73 = 67366LLU;
volatile int8_t x539 = -1;
uint16_t x540 = 8828U;
uint64_t x562 = 2282261LLU;
int8_t x566 = -1;
static int32_t x567 = INT32_MAX;
int16_t x581 = 115;
int32_t x583 = 43;
volatile int32_t t77 = -1;
int32_t x588 = 127508665;
volatile int32_t t78 = 61466;
int8_t x597 = INT8_MAX;
volatile int16_t x598 = -1;
int64_t x599 = INT64_MIN;
int32_t t79 = -2426414;
volatile int32_t t80 = -13;
uint16_t x612 = UINT16_MAX;
uint64_t x641 = 5LLU;
int16_t x653 = 2698;
uint8_t x657 = 10U;
int16_t x694 = INT16_MIN;
int32_t t89 = -15539095;
int16_t x699 = INT16_MIN;
uint16_t x713 = 7353U;
uint8_t x715 = 22U;
static uint8_t x744 = UINT8_MAX;
uint16_t x749 = 19860U;
int16_t x750 = INT16_MAX;
int64_t x751 = 1596920907LL;
int32_t t96 = -4359;
int64_t x755 = INT64_MIN;
int8_t x766 = INT8_MAX;
uint8_t x767 = 43U;


void f0(void) {
	static int16_t x1 = 0;
	int16_t x2 = -1;
	int16_t x3 = -1;
	volatile int64_t x4 = INT64_MAX;
	static int32_t t0 = -65995845;

	t0 = (x1<<((x2<x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 122528917085LLU;
	uint8_t x6 = 15U;
	int64_t x7 = -4088LL;
	static uint64_t t1 = 10813096666163158LLU;

	t1 = (x5<<((x6<x7)%x8));

	if (t1 != 122528917085LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = -1;
	uint16_t x16 = 1892U;

	t2 = (x13<<((x14<x15)%x16));

	if (t2 != 510LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 6182U;
	volatile int8_t x19 = INT8_MIN;
	uint32_t t3 = 21807U;

	t3 = (x17<<((x18<x19)%x20));

	if (t3 != 6182U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 88278993U;
	volatile uint32_t x22 = 11949U;
	uint16_t x24 = UINT16_MAX;
	volatile uint32_t t4 = 86U;

	t4 = (x21<<((x22<x23)%x24));

	if (t4 != 88278993U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	uint64_t x26 = 120642798LLU;
	int32_t t5 = INT32_MAX;

	t5 = (x25<<((x26<x27)%x28));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 411LLU;
	static uint8_t x30 = 28U;
	static int16_t x31 = -1;
	uint16_t x32 = 2U;
	uint64_t t6 = 7439021310417LLU;

	t6 = (x29<<((x30<x31)%x32));

	if (t6 != 411LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 3LLU;
	int32_t x46 = -1;
	uint8_t x48 = 13U;
	volatile uint64_t t7 = 21416687LLU;

	t7 = (x45<<((x46<x47)%x48));

	if (t7 != 6LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MAX;
	int32_t x55 = INT32_MIN;
	int64_t x56 = 45188405LL;
	int32_t t8 = INT32_MAX;

	t8 = (x53<<((x54<x55)%x56));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = 213;
	int64_t x63 = INT64_MAX;
	uint8_t x64 = UINT8_MAX;
	static volatile int32_t t9 = 9782;

	t9 = (x61<<((x62<x63)%x64));

	if (t9 != 213) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = 0;
	int32_t x67 = -1;
	volatile uint8_t x68 = 113U;
	static volatile int32_t t10 = -2181406;

	t10 = (x65<<((x66<x67)%x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x69 = 1;
	int32_t x70 = INT32_MIN;
	uint8_t x71 = UINT8_MAX;
	int8_t x72 = -1;
	volatile int32_t t11 = -3;

	t11 = (x69<<((x70<x71)%x72));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x77 = 3U;
	volatile uint16_t x78 = 4057U;
	int32_t x80 = 16214983;
	volatile int32_t t12 = -157778308;

	t12 = (x77<<((x78<x79)%x80));

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x81 = 58U;
	int8_t x83 = -1;
	int32_t t13 = 1594;

	t13 = (x81<<((x82<x83)%x84));

	if (t13 != 116) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x85 = INT64_MAX;
	static uint32_t x87 = 3U;
	static uint64_t x88 = 903018615230LLU;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x85<<((x86<x87)%x88));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = 32032723911LL;
	volatile int32_t x90 = -21741475;
	uint32_t x91 = 16060026U;
	volatile int64_t t15 = 126366LL;

	t15 = (x89<<((x90<x91)%x92));

	if (t15 != 32032723911LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x101 = 107712242654009LL;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = -13;
	static volatile int64_t t16 = -2391355LL;

	t16 = (x101<<((x102<x103)%x104));

	if (t16 != 107712242654009LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x105 = 221944800470805116LLU;
	int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MAX;

	t17 = (x105<<((x106<x107)%x108));

	if (t17 != 443889600941610232LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x113 = INT16_MAX;
	int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MAX;
	int32_t t18 = 2841762;

	t18 = (x113<<((x114<x115)%x116));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x117 = 218U;
	static int8_t x118 = INT8_MIN;
	int16_t x120 = INT16_MIN;
	volatile uint32_t t19 = 6U;

	t19 = (x117<<((x118<x119)%x120));

	if (t19 != 436U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x133 = 2U;
	static int16_t x134 = -1;
	int32_t x135 = INT32_MIN;

	t20 = (x133<<((x134<x135)%x136));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x149 = 28576985987LLU;
	uint8_t x152 = 5U;
	uint64_t t21 = 2LLU;

	t21 = (x149<<((x150<x151)%x152));

	if (t21 != 57153971974LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x161 = 85856408265150LLU;
	volatile int16_t x162 = INT16_MIN;
	static uint32_t x163 = 693U;
	int8_t x164 = INT8_MAX;
	volatile uint64_t t22 = 10916LLU;

	t22 = (x161<<((x162<x163)%x164));

	if (t22 != 85856408265150LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x174 = INT32_MIN;
	uint16_t x175 = UINT16_MAX;
	static int16_t x176 = INT16_MIN;

	t23 = (x173<<((x174<x175)%x176));

	if (t23 != 463190LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x178 = -1;
	static int16_t x180 = INT16_MIN;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (x177<<((x178<x179)%x180));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x185 = 1641;
	int8_t x186 = -1;
	static int16_t x187 = INT16_MIN;
	int16_t x188 = -66;

	t25 = (x185<<((x186<x187)%x188));

	if (t25 != 1641) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x193 = 27747LL;
	uint16_t x195 = 18U;
	static uint16_t x196 = 8U;

	t26 = (x193<<((x194<x195)%x196));

	if (t26 != 27747LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x201 = UINT8_MAX;
	volatile uint16_t x202 = 31165U;
	int64_t x204 = -13690393593567532LL;
	static int32_t t27 = 8;

	t27 = (x201<<((x202<x203)%x204));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x205 = 0U;
	static int16_t x206 = -1;
	int32_t x207 = INT32_MAX;
	uint32_t x208 = 38096198U;
	static volatile uint32_t t28 = 18485763U;

	t28 = (x205<<((x206<x207)%x208));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x209 = INT16_MAX;
	int16_t x210 = 76;
	volatile uint64_t x212 = 4657LLU;

	t29 = (x209<<((x210<x211)%x212));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x217 = 104374U;
	uint64_t x218 = UINT64_MAX;
	int64_t x219 = -1LL;
	volatile int32_t x220 = 86579;

	t30 = (x217<<((x218<x219)%x220));

	if (t30 != 104374U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	volatile int8_t x222 = 15;
	static uint16_t x223 = UINT16_MAX;
	int8_t x224 = 1;
	volatile int32_t t31 = 508;

	t31 = (x221<<((x222<x223)%x224));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x229 = UINT8_MAX;
	uint32_t x230 = 4676921U;
	int32_t x231 = 475828153;
	int8_t x232 = INT8_MIN;
	int32_t t32 = -1;

	t32 = (x229<<((x230<x231)%x232));

	if (t32 != 510) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x237 = 115U;
	int64_t x238 = INT64_MAX;
	static uint64_t x239 = UINT64_MAX;
	int16_t x240 = -1;
	volatile int32_t t33 = -11128797;

	t33 = (x237<<((x238<x239)%x240));

	if (t33 != 115) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x241 = INT8_MAX;
	int8_t x243 = -1;
	int64_t x244 = INT64_MIN;
	volatile int32_t t34 = 1614;

	t34 = (x241<<((x242<x243)%x244));

	if (t34 != 254) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x245 = 11U;
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = -1;
	volatile uint16_t x248 = 1U;
	volatile int32_t t35 = -65381;

	t35 = (x245<<((x246<x247)%x248));

	if (t35 != 11) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x249 = 0;
	int32_t x250 = -2;
	int32_t x252 = 7;
	volatile int32_t t36 = 20;

	t36 = (x249<<((x250<x251)%x252));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x257 = INT32_MAX;
	int32_t x258 = INT32_MIN;
	uint32_t x259 = UINT32_MAX;
	int8_t x260 = -1;
	volatile int32_t t37 = INT32_MAX;

	t37 = (x257<<((x258<x259)%x260));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x277 = 25828287548LL;
	static uint64_t x279 = UINT64_MAX;
	static volatile int64_t t38 = -501110468605LL;

	t38 = (x277<<((x278<x279)%x280));

	if (t38 != 51656575096LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x293 = 1039086LL;
	static int32_t x294 = -21829242;
	int64_t x295 = INT64_MAX;
	volatile uint32_t x296 = UINT32_MAX;
	volatile int64_t t39 = 18096LL;

	t39 = (x293<<((x294<x295)%x296));

	if (t39 != 2078172LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x301 = 12;
	uint32_t x302 = 1848U;
	uint32_t x303 = 2435U;
	uint16_t x304 = 22U;
	volatile int32_t t40 = 1568092;

	t40 = (x301<<((x302<x303)%x304));

	if (t40 != 24) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int8_t x311 = -1;
	int64_t x312 = -1LL;
	int32_t t41 = 392599173;

	t41 = (x309<<((x310<x311)%x312));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x313 = 1163496U;
	int32_t x314 = INT32_MIN;
	int8_t x315 = 8;
	uint64_t x316 = 9844LLU;
	volatile uint32_t t42 = 8372151U;

	t42 = (x313<<((x314<x315)%x316));

	if (t42 != 2326992U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x321 = 118293;
	static uint8_t x322 = 4U;
	volatile int16_t x323 = INT16_MIN;
	static int16_t x324 = 1;
	int32_t t43 = 11;

	t43 = (x321<<((x322<x323)%x324));

	if (t43 != 118293) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x330 = -1;
	volatile int8_t x331 = -10;
	volatile uint16_t x332 = UINT16_MAX;
	volatile int32_t t44 = 2196797;

	t44 = (x329<<((x330<x331)%x332));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x334 = 452;
	int16_t x335 = INT16_MAX;
	volatile uint16_t x336 = 232U;

	t45 = (x333<<((x334<x335)%x336));

	if (t45 != 14106) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x341 = 29U;
	uint8_t x342 = 2U;
	static int64_t x343 = 184057745LL;
	int32_t x344 = INT32_MIN;
	int32_t t46 = 45143;

	t46 = (x341<<((x342<x343)%x344));

	if (t46 != 58) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x353 = INT32_MAX;
	int16_t x354 = -1;
	volatile int8_t x355 = -31;
	static int8_t x356 = INT8_MAX;
	volatile int32_t t47 = INT32_MAX;

	t47 = (x353<<((x354<x355)%x356));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x357 = 17U;
	int8_t x358 = -1;
	int16_t x359 = -1;
	int32_t x360 = INT32_MIN;

	t48 = (x357<<((x358<x359)%x360));

	if (t48 != 17) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x361 = INT16_MAX;
	static volatile int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	volatile uint32_t x364 = 149U;
	volatile int32_t t49 = -33374511;

	t49 = (x361<<((x362<x363)%x364));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x367 = -1;
	int16_t x368 = -3;
	int64_t t50 = INT64_MAX;

	t50 = (x365<<((x366<x367)%x368));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x369 = 486687U;
	int32_t x370 = 124;
	int32_t x371 = -1034918110;
	volatile int64_t x372 = -1LL;
	uint32_t t51 = 41U;

	t51 = (x369<<((x370<x371)%x372));

	if (t51 != 486687U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x373 = 463;
	int64_t x374 = INT64_MAX;
	static int64_t x375 = -1LL;
	static int32_t t52 = -33;

	t52 = (x373<<((x374<x375)%x376));

	if (t52 != 463) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x379 = 1476364U;
	int16_t x380 = -21;
	volatile int32_t t53 = -328;

	t53 = (x377<<((x378<x379)%x380));

	if (t53 != 45) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x381 = INT16_MAX;
	volatile int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t54 = 953;

	t54 = (x381<<((x382<x383)%x384));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x385 = 26315792174575LL;
	volatile int16_t x386 = -270;
	int64_t x387 = 10121653LL;
	int16_t x388 = 206;
	volatile int64_t t55 = 14984346193167111LL;

	t55 = (x385<<((x386<x387)%x388));

	if (t55 != 52631584349150LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x393 = 690U;
	int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t56 = -38798426;

	t56 = (x393<<((x394<x395)%x396));

	if (t56 != 1380) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x397 = INT16_MAX;
	int64_t x398 = 423211214201863830LL;
	int16_t x399 = INT16_MAX;
	uint32_t x400 = UINT32_MAX;

	t57 = (x397<<((x398<x399)%x400));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x401 = UINT8_MAX;
	int8_t x402 = INT8_MAX;
	int64_t x403 = 3993081327LL;
	uint16_t x404 = 12320U;
	static volatile int32_t t58 = 0;

	t58 = (x401<<((x402<x403)%x404));

	if (t58 != 510) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x405 = 11U;
	int16_t x406 = INT16_MIN;
	volatile uint64_t x407 = 1456273LLU;
	volatile int32_t t59 = 136;

	t59 = (x405<<((x406<x407)%x408));

	if (t59 != 11) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x414 = 8984;
	int64_t x415 = INT64_MIN;
	int32_t x416 = -710766;

	t60 = (x413<<((x414<x415)%x416));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x422 = 516760995;
	int64_t x423 = -61972LL;
	volatile int8_t x424 = -1;
	static volatile uint32_t t61 = 28105U;

	t61 = (x421<<((x422<x423)%x424));

	if (t61 != 9763U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x425 = UINT64_MAX;
	int32_t x426 = 4444163;
	volatile uint32_t x427 = 952622333U;
	int32_t x428 = 614467;
	volatile uint64_t t62 = 60818LLU;

	t62 = (x425<<((x426<x427)%x428));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x433 = 16U;
	static int8_t x434 = -1;
	int64_t x435 = INT64_MIN;
	static uint32_t x436 = 5558U;

	t63 = (x433<<((x434<x435)%x436));

	if (t63 != 16) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x453 = 1U;
	int8_t x455 = 5;
	int32_t t64 = 4093;

	t64 = (x453<<((x454<x455)%x456));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x473 = UINT64_MAX;
	static int8_t x474 = INT8_MIN;
	int16_t x476 = 5;
	uint64_t t65 = UINT64_MAX;

	t65 = (x473<<((x474<x475)%x476));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x477 = 14U;
	uint8_t x479 = 1U;
	int32_t t66 = 3238648;

	t66 = (x477<<((x478<x479)%x480));

	if (t66 != 14) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x493 = 0U;
	uint16_t x494 = UINT16_MAX;
	uint16_t x495 = UINT16_MAX;
	uint32_t x496 = 4902U;

	t67 = (x493<<((x494<x495)%x496));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x497 = 215122;
	int64_t x498 = INT64_MIN;
	uint8_t x499 = UINT8_MAX;
	uint16_t x500 = 18U;
	volatile int32_t t68 = -77032;

	t68 = (x497<<((x498<x499)%x500));

	if (t68 != 430244) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x506 = -387LL;
	static int16_t x507 = 771;
	int64_t x508 = -1LL;
	volatile int32_t t69 = 254800363;

	t69 = (x505<<((x506<x507)%x508));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x509 = 17U;
	uint32_t x511 = 164751527U;
	static uint32_t x512 = UINT32_MAX;
	int32_t t70 = 268093226;

	t70 = (x509<<((x510<x511)%x512));

	if (t70 != 34) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x517 = UINT64_MAX;
	int16_t x518 = INT16_MIN;
	int64_t x520 = INT64_MIN;
	uint64_t t71 = 2937285LLU;

	t71 = (x517<<((x518<x519)%x520));

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x526 = -1;
	int32_t x528 = INT32_MIN;
	static int32_t t72 = 59938341;

	t72 = (x525<<((x526<x527)%x528));

	if (t72 != 65534) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x529 = 22931LLU;
	static int8_t x530 = INT8_MIN;
	static int64_t x531 = INT64_MAX;
	int64_t x532 = 15475LL;

	t73 = (x529<<((x530<x531)%x532));

	if (t73 != 45862LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x537 = 158618548277842347LL;
	int64_t x538 = INT64_MAX;
	static volatile int64_t t74 = 258968397483565LL;

	t74 = (x537<<((x538<x539)%x540));

	if (t74 != 158618548277842347LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x561 = INT64_MAX;
	static int8_t x563 = INT8_MIN;
	int32_t x564 = -1;
	volatile int64_t t75 = INT64_MAX;

	t75 = (x561<<((x562<x563)%x564));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x565 = 1158582043U;
	static int8_t x568 = INT8_MIN;
	uint32_t t76 = 1U;

	t76 = (x565<<((x566<x567)%x568));

	if (t76 != 2317164086U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x582 = 259670U;
	static uint8_t x584 = UINT8_MAX;

	t77 = (x581<<((x582<x583)%x584));

	if (t77 != 115) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x585 = 0;
	int8_t x586 = INT8_MIN;
	static int64_t x587 = -1LL;

	t78 = (x585<<((x586<x587)%x588));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x600 = -1743;

	t79 = (x597<<((x598<x599)%x600));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x605 = UINT8_MAX;
	volatile int32_t x606 = 91;
	uint64_t x607 = 418LLU;
	int64_t x608 = INT64_MAX;

	t80 = (x605<<((x606<x607)%x608));

	if (t80 != 510) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x609 = 1454190LLU;
	uint32_t x610 = 278035102U;
	int16_t x611 = -1;
	static volatile uint64_t t81 = 1294589004LLU;

	t81 = (x609<<((x610<x611)%x612));

	if (t81 != 2908380LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x613 = 46;
	int16_t x614 = INT16_MIN;
	int32_t x615 = INT32_MIN;
	volatile int64_t x616 = -1LL;
	volatile int32_t t82 = -19963;

	t82 = (x613<<((x614<x615)%x616));

	if (t82 != 46) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x629 = UINT16_MAX;
	volatile uint64_t x630 = 25902012197LLU;
	static uint16_t x631 = UINT16_MAX;
	int32_t x632 = -1;
	int32_t t83 = 0;

	t83 = (x629<<((x630<x631)%x632));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x642 = INT16_MIN;
	volatile int64_t x643 = 17LL;
	int16_t x644 = 4;
	uint64_t t84 = 9182LLU;

	t84 = (x641<<((x642<x643)%x644));

	if (t84 != 10LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x654 = INT8_MIN;
	int32_t x655 = -1;
	uint32_t x656 = UINT32_MAX;
	int32_t t85 = 370762517;

	t85 = (x653<<((x654<x655)%x656));

	if (t85 != 5396) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x658 = UINT16_MAX;
	static volatile int64_t x659 = 2023977473241LL;
	int32_t x660 = INT32_MAX;
	int32_t t86 = -3044;

	t86 = (x657<<((x658<x659)%x660));

	if (t86 != 20) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x665 = 1527LLU;
	int16_t x666 = -11023;
	int16_t x667 = -1;
	uint32_t x668 = 111567236U;
	uint64_t t87 = 36758046341275LLU;

	t87 = (x665<<((x666<x667)%x668));

	if (t87 != 3054LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x681 = INT8_MAX;
	int8_t x682 = 1;
	volatile int8_t x683 = -2;
	uint64_t x684 = UINT64_MAX;
	int32_t t88 = 125219054;

	t88 = (x681<<((x682<x683)%x684));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x693 = 5421;
	static uint64_t x695 = 103089LLU;
	volatile uint32_t x696 = 1U;

	t89 = (x693<<((x694<x695)%x696));

	if (t89 != 5421) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x697 = 1918052U;
	uint8_t x698 = 113U;
	static int8_t x700 = INT8_MIN;
	static uint32_t t90 = 26844U;

	t90 = (x697<<((x698<x699)%x700));

	if (t90 != 1918052U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x714 = 19U;
	volatile int8_t x716 = INT8_MIN;
	int32_t t91 = -2;

	t91 = (x713<<((x714<x715)%x716));

	if (t91 != 14706) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x717 = UINT16_MAX;
	volatile uint16_t x718 = UINT16_MAX;
	int64_t x719 = -1544541LL;
	int64_t x720 = 4LL;
	int32_t t92 = 23744503;

	t92 = (x717<<((x718<x719)%x720));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x733 = UINT8_MAX;
	volatile int8_t x734 = INT8_MIN;
	int32_t x735 = -48051409;
	int32_t x736 = -211718959;
	volatile int32_t t93 = 929;

	t93 = (x733<<((x734<x735)%x736));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x737 = 1U;
	int16_t x738 = -1;
	uint64_t x739 = 73LLU;
	int32_t x740 = INT32_MIN;
	uint32_t t94 = 6258624U;

	t94 = (x737<<((x738<x739)%x740));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x741 = UINT8_MAX;
	int64_t x742 = INT64_MAX;
	volatile int64_t x743 = INT64_MIN;
	volatile int32_t t95 = 53;

	t95 = (x741<<((x742<x743)%x744));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x752 = 42U;

	t96 = (x749<<((x750<x751)%x752));

	if (t96 != 39720) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x753 = 0;
	int32_t x754 = -724717;
	int32_t x756 = INT32_MAX;
	static int32_t t97 = -38225;

	t97 = (x753<<((x754<x755)%x756));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x757 = 1;
	uint8_t x758 = 38U;
	int32_t x759 = INT32_MIN;
	static int32_t x760 = 2;
	int32_t t98 = -61464261;

	t98 = (x757<<((x758<x759)%x760));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x765 = INT8_MAX;
	int32_t x768 = -1433;
	volatile int32_t t99 = -12505;

	t99 = (x765<<((x766<x767)%x768));

	if (t99 != 127) { NG(); } else { ; }
	
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

