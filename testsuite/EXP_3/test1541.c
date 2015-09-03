#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 14570227;
static int8_t x3 = INT8_MIN;
static int32_t x30 = -33326;
uint64_t x69 = 17344699342976125LLU;
uint16_t x70 = 560U;
static volatile uint64_t x71 = 14859501673123LLU;
uint64_t t5 = 57915817773200136LLU;
volatile uint32_t t7 = 28U;
volatile uint32_t x86 = UINT32_MAX;
static uint32_t x103 = UINT32_MAX;
volatile uint64_t t12 = 246667174LLU;
int8_t x113 = 9;
static uint16_t x115 = 12U;
volatile uint64_t t15 = 55620872LLU;
static volatile int8_t x149 = -1;
static int32_t x152 = INT32_MIN;
int8_t x182 = INT8_MIN;
int32_t x183 = INT32_MAX;
int32_t t22 = -12;
int8_t x186 = -2;
int32_t x195 = INT32_MIN;
uint16_t x203 = UINT16_MAX;
volatile int64_t x214 = -4225265838551LL;
uint32_t x226 = UINT32_MAX;
uint16_t x227 = 66U;
volatile uint32_t t28 = 124764589U;
uint32_t x229 = 83909011U;
uint32_t x230 = 22U;
static int8_t x245 = -1;
int64_t x251 = 2104386669732LL;
int32_t t32 = -946516812;
volatile int64_t x258 = INT64_MIN;
int32_t x259 = -40142404;
uint32_t x272 = UINT32_MAX;
uint64_t x273 = UINT64_MAX;
uint8_t x280 = UINT8_MAX;
volatile int32_t x289 = INT32_MAX;
uint64_t x292 = UINT64_MAX;
int8_t x296 = -1;
volatile uint64_t t41 = 3013LLU;
int64_t x315 = INT64_MIN;
int32_t x332 = INT32_MIN;
int32_t x338 = -169657968;
int32_t x347 = 460655;
uint64_t x352 = UINT64_MAX;
volatile int64_t t46 = -11095LL;
volatile int8_t x353 = INT8_MIN;
int8_t x381 = INT8_MAX;
volatile uint64_t x413 = UINT64_MAX;
uint8_t x414 = UINT8_MAX;
static volatile uint64_t t58 = 211325185793061501LLU;
uint8_t x430 = 12U;
int32_t x437 = -1;
static volatile int16_t x439 = INT16_MIN;
uint32_t x440 = 1316484U;
int32_t x470 = -12302051;
volatile int32_t x480 = INT32_MIN;
volatile int64_t x518 = -61173690344376823LL;
int16_t x545 = 14;
volatile uint32_t x560 = UINT32_MAX;
volatile int64_t t75 = -6LL;
uint64_t x587 = UINT64_MAX;
int32_t x589 = 708672391;
volatile int16_t x597 = 6089;
int64_t x599 = -1LL;
int64_t x607 = -1LL;
int64_t x627 = INT64_MAX;
static int32_t x630 = -1;
int8_t x631 = INT8_MIN;
volatile int16_t x636 = -11589;
volatile int64_t t89 = 63LL;
int8_t x641 = INT8_MAX;
int16_t x643 = INT16_MIN;
uint32_t x679 = UINT32_MAX;
int32_t x691 = INT32_MAX;
int64_t x693 = 540LL;
volatile int32_t x702 = -1;


void f0(void) {
	uint8_t x2 = 8U;
	int64_t x4 = 150LL;
	volatile int32_t t0 = 15071;

	t0 = ((x1-x2)>>(x3<=x4));

	if (t0 != 7285109) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = INT8_MIN;
	volatile int16_t x10 = -11182;
	volatile int32_t x11 = INT32_MIN;
	volatile int64_t x12 = 15712153405LL;
	volatile int32_t t1 = 504201;

	t1 = ((x9-x10)>>(x11<=x12));

	if (t1 != 5527) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	volatile int32_t x27 = INT32_MIN;
	static int64_t x28 = -251767791981128LL;
	int32_t t2 = -49;

	t2 = ((x25-x26)>>(x27<=x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x29 = UINT8_MAX;
	static uint8_t x31 = 123U;
	static int64_t x32 = INT64_MAX;
	volatile int32_t t3 = 223014019;

	t3 = ((x29-x30)>>(x31<=x32));

	if (t3 != 16790) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x57 = 8232452628LL;
	volatile int8_t x58 = -1;
	int64_t x59 = INT64_MAX;
	int64_t x60 = 59182716804LL;
	int64_t t4 = -84691LL;

	t4 = ((x57-x58)>>(x59<=x60));

	if (t4 != 8232452629LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x72 = 0U;

	t5 = ((x69-x70)>>(x71<=x72));

	if (t5 != 17344699342975565LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x77 = UINT8_MAX;
	static int8_t x78 = INT8_MIN;
	static int16_t x79 = -1;
	int32_t x80 = -1;
	volatile int32_t t6 = -524956;

	t6 = ((x77-x78)>>(x79<=x80));

	if (t6 != 191) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x81 = 82136007U;
	int8_t x82 = INT8_MIN;
	uint8_t x83 = 23U;
	static int16_t x84 = 582;

	t7 = ((x81-x82)>>(x83<=x84));

	if (t7 != 41068067U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x85 = INT32_MIN;
	static uint16_t x87 = UINT16_MAX;
	int64_t x88 = -94397084LL;
	uint32_t t8 = 16247958U;

	t8 = ((x85-x86)>>(x87<=x88));

	if (t8 != 2147483649U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x89 = -351;
	int32_t x90 = INT32_MIN;
	int16_t x91 = -1;
	int32_t x92 = -1;
	int32_t t9 = -33;

	t9 = ((x89-x90)>>(x91<=x92));

	if (t9 != 1073741648) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x97 = 16U;
	uint8_t x98 = 0U;
	static volatile uint64_t x99 = 1293711571LLU;
	uint32_t x100 = 989944U;
	volatile int32_t t10 = -107731981;

	t10 = ((x97-x98)>>(x99<=x100));

	if (t10 != 16) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x101 = INT8_MIN;
	volatile int64_t x102 = INT64_MIN;
	int32_t x104 = 217;
	volatile int64_t t11 = -293LL;

	t11 = ((x101-x102)>>(x103<=x104));

	if (t11 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x109 = UINT64_MAX;
	uint16_t x110 = UINT16_MAX;
	static int8_t x111 = -1;
	uint64_t x112 = 42445074890264LLU;

	t12 = ((x109-x110)>>(x111<=x112));

	if (t12 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x114 = UINT32_MAX;
	volatile uint64_t x116 = 18673394785415600LLU;
	uint32_t t13 = 4462642U;

	t13 = ((x113-x114)>>(x115<=x116));

	if (t13 != 5U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = 15U;
	uint16_t x123 = UINT16_MAX;
	uint16_t x124 = 18706U;
	volatile uint64_t t14 = 19LLU;

	t14 = ((x121-x122)>>(x123<=x124));

	if (t14 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x129 = 83021072255322788LLU;
	static int16_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MAX;

	t15 = ((x129-x130)>>(x131<=x132));

	if (t15 != 41510536127661394LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x133 = UINT64_MAX;
	int16_t x134 = -1;
	volatile int64_t x135 = -123LL;
	int32_t x136 = INT32_MIN;
	uint64_t t16 = 1015154LLU;

	t16 = ((x133-x134)>>(x135<=x136));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x141 = 3065268027LLU;
	uint16_t x142 = 3U;
	static uint64_t x143 = UINT64_MAX;
	volatile uint16_t x144 = 102U;
	volatile uint64_t t17 = 4184454529500LLU;

	t17 = ((x141-x142)>>(x143<=x144));

	if (t17 != 3065268024LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x150 = -1;
	int16_t x151 = -1;
	volatile int32_t t18 = 99;

	t18 = ((x149-x150)>>(x151<=x152));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MAX;
	static int8_t x156 = INT8_MIN;
	int64_t t19 = -183314LL;

	t19 = ((x153-x154)>>(x155<=x156));

	if (t19 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x157 = INT32_MAX;
	static uint8_t x158 = 1U;
	volatile int64_t x159 = INT64_MIN;
	volatile uint64_t x160 = UINT64_MAX;
	static volatile int32_t t20 = 259335;

	t20 = ((x157-x158)>>(x159<=x160));

	if (t20 != 1073741823) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x169 = 13;
	int16_t x170 = INT16_MIN;
	static volatile uint64_t x171 = 3793248864590LLU;
	int32_t x172 = INT32_MIN;
	static volatile int32_t t21 = 399020557;

	t21 = ((x169-x170)>>(x171<=x172));

	if (t21 != 16390) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x181 = 3U;
	int32_t x184 = INT32_MAX;

	t22 = ((x181-x182)>>(x183<=x184));

	if (t22 != 65) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x185 = 6;
	int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MAX;
	volatile int32_t t23 = -121;

	t23 = ((x185-x186)>>(x187<=x188));

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x193 = -1;
	int8_t x194 = -1;
	int8_t x196 = INT8_MAX;
	int32_t t24 = -2;

	t24 = ((x193-x194)>>(x195<=x196));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x201 = INT8_MIN;
	static uint64_t x202 = UINT64_MAX;
	int16_t x204 = -1;
	volatile uint64_t t25 = 1449865815LLU;

	t25 = ((x201-x202)>>(x203<=x204));

	if (t25 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x205 = 7489U;
	volatile int16_t x206 = 7;
	static int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MAX;
	uint32_t t26 = 14003U;

	t26 = ((x205-x206)>>(x207<=x208));

	if (t26 != 3741U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x213 = 9257U;
	static uint64_t x215 = 9842497254772LLU;
	static int32_t x216 = -1;
	volatile int64_t t27 = 2335890LL;

	t27 = ((x213-x214)>>(x215<=x216));

	if (t27 != 2112632923904LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x225 = INT8_MIN;
	int8_t x228 = INT8_MIN;

	t28 = ((x225-x226)>>(x227<=x228));

	if (t28 != 4294967169U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x231 = 129553047U;
	volatile int64_t x232 = INT64_MAX;
	volatile uint32_t t29 = 1U;

	t29 = ((x229-x230)>>(x231<=x232));

	if (t29 != 41954494U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x246 = INT8_MIN;
	uint64_t x247 = UINT64_MAX;
	volatile int16_t x248 = INT16_MAX;
	int32_t t30 = 151025;

	t30 = ((x245-x246)>>(x247<=x248));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x249 = 1U;
	volatile uint64_t x250 = 1915846LLU;
	uint16_t x252 = UINT16_MAX;
	volatile uint64_t t31 = 96920756LLU;

	t31 = ((x249-x250)>>(x251<=x252));

	if (t31 != 18446744073707635771LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x253 = INT8_MIN;
	volatile int16_t x254 = INT16_MIN;
	uint16_t x255 = 1U;
	int8_t x256 = INT8_MIN;

	t32 = ((x253-x254)>>(x255<=x256));

	if (t32 != 32640) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x257 = -436669772;
	int64_t x260 = INT64_MIN;
	volatile int64_t t33 = 92048969949415114LL;

	t33 = ((x257-x258)>>(x259<=x260));

	if (t33 != 9223372036418106036LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x265 = 283629522LLU;
	int16_t x266 = 1;
	volatile int64_t x267 = INT64_MIN;
	volatile uint64_t x268 = 35764153133LLU;
	volatile uint64_t t34 = 17752448115215810LLU;

	t34 = ((x265-x266)>>(x267<=x268));

	if (t34 != 283629521LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x269 = -1;
	int32_t x270 = -1;
	int32_t x271 = 10;
	volatile int32_t t35 = -79;

	t35 = ((x269-x270)>>(x271<=x272));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x274 = 0U;
	int8_t x275 = -1;
	int16_t x276 = INT16_MAX;
	uint64_t t36 = 1LLU;

	t36 = ((x273-x274)>>(x275<=x276));

	if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x277 = 43U;
	int16_t x278 = INT16_MIN;
	uint16_t x279 = 214U;
	volatile int32_t t37 = -1943643;

	t37 = ((x277-x278)>>(x279<=x280));

	if (t37 != 16405) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x285 = 2U;
	int16_t x286 = INT16_MIN;
	volatile uint8_t x287 = 23U;
	static int8_t x288 = INT8_MIN;
	static int32_t t38 = 2;

	t38 = ((x285-x286)>>(x287<=x288));

	if (t38 != 32770) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x290 = -397419054636LL;
	int64_t x291 = -886918LL;
	volatile int64_t t39 = 131150762872386LL;

	t39 = ((x289-x290)>>(x291<=x292));

	if (t39 != 199783269141LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x293 = 0;
	int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	int32_t t40 = -1852;

	t40 = ((x293-x294)>>(x295<=x296));

	if (t40 != 16384) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x309 = UINT64_MAX;
	uint8_t x310 = UINT8_MAX;
	static uint32_t x311 = UINT32_MAX;
	uint8_t x312 = UINT8_MAX;

	t41 = ((x309-x310)>>(x311<=x312));

	if (t41 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x313 = 61719LLU;
	uint8_t x314 = 18U;
	uint32_t x316 = 23168246U;
	uint64_t t42 = 2044818268223LLU;

	t42 = ((x313-x314)>>(x315<=x316));

	if (t42 != 30850LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x329 = INT8_MAX;
	static int8_t x330 = 24;
	int32_t x331 = -102;
	volatile int32_t t43 = 5;

	t43 = ((x329-x330)>>(x331<=x332));

	if (t43 != 103) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x337 = 1;
	uint64_t x339 = UINT64_MAX;
	static uint16_t x340 = 36U;
	volatile int32_t t44 = -127086665;

	t44 = ((x337-x338)>>(x339<=x340));

	if (t44 != 169657969) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x345 = UINT16_MAX;
	static int16_t x346 = -27;
	int16_t x348 = INT16_MIN;
	static int32_t t45 = 299;

	t45 = ((x345-x346)>>(x347<=x348));

	if (t45 != 65562) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x349 = 5917237645LL;
	static uint16_t x350 = UINT16_MAX;
	int8_t x351 = -7;

	t46 = ((x349-x350)>>(x351<=x352));

	if (t46 != 2958586055LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x354 = INT32_MIN;
	volatile uint64_t x355 = 21LLU;
	uint8_t x356 = 20U;
	volatile int32_t t47 = 0;

	t47 = ((x353-x354)>>(x355<=x356));

	if (t47 != 2147483520) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x357 = UINT8_MAX;
	int16_t x358 = INT16_MIN;
	int32_t x359 = 691317112;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t48 = 603479040;

	t48 = ((x357-x358)>>(x359<=x360));

	if (t48 != 33023) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x361 = UINT8_MAX;
	static int16_t x362 = 1;
	int8_t x363 = INT8_MIN;
	static volatile int64_t x364 = 615LL;
	static int32_t t49 = 77696265;

	t49 = ((x361-x362)>>(x363<=x364));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x365 = 3257LLU;
	volatile int16_t x366 = -1;
	int32_t x367 = -1;
	int32_t x368 = -61;
	static uint64_t t50 = 13313LLU;

	t50 = ((x365-x366)>>(x367<=x368));

	if (t50 != 3258LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x377 = 121;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	static volatile uint32_t x380 = 13458U;
	int32_t t51 = -8169628;

	t51 = ((x377-x378)>>(x379<=x380));

	if (t51 != 32889) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x382 = -1;
	static int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MAX;
	static int32_t t52 = -1;

	t52 = ((x381-x382)>>(x383<=x384));

	if (t52 != 64) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MAX;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t53 = 928937819LLU;

	t53 = ((x385-x386)>>(x387<=x388));

	if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MIN;
	uint64_t x391 = UINT64_MAX;
	volatile uint32_t x392 = UINT32_MAX;
	uint64_t t54 = 515LLU;

	t54 = ((x389-x390)>>(x391<=x392));

	if (t54 != 127LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MIN;
	int16_t x395 = -740;
	static volatile int16_t x396 = -562;
	volatile int32_t t55 = -2096;

	t55 = ((x393-x394)>>(x395<=x396));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x415 = INT64_MIN;
	volatile int32_t x416 = INT32_MIN;
	volatile uint64_t t56 = 1341547649LLU;

	t56 = ((x413-x414)>>(x415<=x416));

	if (t56 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x417 = 0U;
	int64_t x418 = -1LL;
	int8_t x419 = INT8_MIN;
	static int32_t x420 = INT32_MIN;
	int64_t t57 = 21501838670924LL;

	t57 = ((x417-x418)>>(x419<=x420));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x421 = UINT32_MAX;
	uint64_t x422 = 10752555LLU;
	volatile int16_t x423 = INT16_MAX;
	int16_t x424 = INT16_MIN;

	t58 = ((x421-x422)>>(x423<=x424));

	if (t58 != 4284214740LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x429 = INT32_MAX;
	uint16_t x431 = UINT16_MAX;
	volatile int64_t x432 = INT64_MAX;
	int32_t t59 = -10;

	t59 = ((x429-x430)>>(x431<=x432));

	if (t59 != 1073741817) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x433 = -38;
	uint32_t x434 = 22846U;
	static uint16_t x435 = 3U;
	uint32_t x436 = 400U;
	uint32_t t60 = 6716985U;

	t60 = ((x433-x434)>>(x435<=x436));

	if (t60 != 2147472206U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x438 = INT16_MIN;
	int32_t t61 = 891;

	t61 = ((x437-x438)>>(x439<=x440));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x445 = INT8_MAX;
	int64_t x446 = -1LL;
	int32_t x447 = -18;
	int16_t x448 = INT16_MIN;
	int64_t t62 = -17877610783195580LL;

	t62 = ((x445-x446)>>(x447<=x448));

	if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x457 = 2;
	static uint32_t x458 = 0U;
	int32_t x459 = -167;
	int8_t x460 = INT8_MIN;
	uint32_t t63 = 7871U;

	t63 = ((x457-x458)>>(x459<=x460));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x469 = 3U;
	int8_t x471 = INT8_MIN;
	static int64_t x472 = 0LL;
	uint32_t t64 = 84U;

	t64 = ((x469-x470)>>(x471<=x472));

	if (t64 != 6151027U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x477 = 227551280U;
	static int8_t x478 = 1;
	uint64_t x479 = UINT64_MAX;
	volatile uint32_t t65 = 10U;

	t65 = ((x477-x478)>>(x479<=x480));

	if (t65 != 227551279U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x481 = 361U;
	uint32_t x482 = UINT32_MAX;
	uint32_t x483 = 2104U;
	int64_t x484 = -1LL;
	uint32_t t66 = 28526050U;

	t66 = ((x481-x482)>>(x483<=x484));

	if (t66 != 362U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x501 = 27609U;
	uint16_t x502 = 3U;
	uint8_t x503 = 0U;
	uint16_t x504 = 20587U;
	volatile int32_t t67 = 121670791;

	t67 = ((x501-x502)>>(x503<=x504));

	if (t67 != 13803) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x505 = UINT32_MAX;
	static uint32_t x506 = 0U;
	static uint64_t x507 = 2562851421150LLU;
	volatile int8_t x508 = INT8_MAX;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = ((x505-x506)>>(x507<=x508));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x513 = UINT32_MAX;
	int32_t x514 = -234116599;
	int64_t x515 = INT64_MIN;
	static uint64_t x516 = 1038546747155213LLU;
	uint32_t t69 = 32493417U;

	t69 = ((x513-x514)>>(x515<=x516));

	if (t69 != 234116598U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x517 = UINT8_MAX;
	int8_t x519 = INT8_MIN;
	int32_t x520 = INT32_MIN;
	volatile int64_t t70 = -10950954LL;

	t70 = ((x517-x518)>>(x519<=x520));

	if (t70 != 61173690344377078LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x525 = 71LLU;
	static uint64_t x526 = 167834078639795LLU;
	int16_t x527 = -2629;
	uint16_t x528 = 28977U;
	static uint64_t t71 = 49128411293938845LLU;

	t71 = ((x525-x526)>>(x527<=x528));

	if (t71 != 9223288119815455946LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x537 = UINT16_MAX;
	uint16_t x538 = 3U;
	int16_t x539 = -1;
	int8_t x540 = INT8_MIN;
	static volatile int32_t t72 = -5;

	t72 = ((x537-x538)>>(x539<=x540));

	if (t72 != 65532) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x546 = 1U;
	volatile int8_t x547 = INT8_MAX;
	static int8_t x548 = -2;
	int32_t t73 = 29337;

	t73 = ((x545-x546)>>(x547<=x548));

	if (t73 != 13) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x557 = INT32_MIN;
	static int32_t x558 = INT32_MIN;
	uint16_t x559 = 7U;
	volatile int32_t t74 = 230;

	t74 = ((x557-x558)>>(x559<=x560));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x561 = 73715U;
	int64_t x562 = -2LL;
	int8_t x563 = -1;
	int64_t x564 = INT64_MIN;

	t75 = ((x561-x562)>>(x563<=x564));

	if (t75 != 73717LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x565 = -4;
	volatile uint64_t x566 = UINT64_MAX;
	int16_t x567 = INT16_MIN;
	int64_t x568 = INT64_MAX;
	volatile uint64_t t76 = 24025902610674LLU;

	t76 = ((x565-x566)>>(x567<=x568));

	if (t76 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x569 = INT16_MAX;
	uint64_t x570 = 61540515485401680LLU;
	uint8_t x571 = 3U;
	int64_t x572 = INT64_MIN;
	volatile uint64_t t77 = 1849LLU;

	t77 = ((x569-x570)>>(x571<=x572));

	if (t77 != 18385203558224182703LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x577 = -1;
	volatile uint64_t x578 = 19LLU;
	volatile int64_t x579 = INT64_MIN;
	static volatile int32_t x580 = INT32_MIN;
	uint64_t t78 = 310LLU;

	t78 = ((x577-x578)>>(x579<=x580));

	if (t78 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x581 = 14972379956LLU;
	volatile uint8_t x582 = 14U;
	int8_t x583 = -1;
	volatile int32_t x584 = INT32_MIN;
	volatile uint64_t t79 = 15472894454387196LLU;

	t79 = ((x581-x582)>>(x583<=x584));

	if (t79 != 14972379942LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x585 = -1;
	int16_t x586 = -1;
	volatile int64_t x588 = INT64_MIN;
	int32_t t80 = -679;

	t80 = ((x585-x586)>>(x587<=x588));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x590 = INT8_MIN;
	int16_t x591 = -20;
	uint16_t x592 = 225U;
	int32_t t81 = -12726;

	t81 = ((x589-x590)>>(x591<=x592));

	if (t81 != 354336259) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x598 = 3557847715628LLU;
	int16_t x600 = INT16_MAX;
	static uint64_t t82 = 699LLU;

	t82 = ((x597-x598)>>(x599<=x600));

	if (t82 != 9223370257930921038LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x605 = 34U;
	int16_t x606 = INT16_MIN;
	volatile uint8_t x608 = UINT8_MAX;
	static volatile int32_t t83 = 138881616;

	t83 = ((x605-x606)>>(x607<=x608));

	if (t83 != 16401) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x613 = UINT64_MAX;
	int8_t x614 = 5;
	volatile uint64_t x615 = UINT64_MAX;
	uint32_t x616 = 533349331U;
	static volatile uint64_t t84 = 3694160LLU;

	t84 = ((x613-x614)>>(x615<=x616));

	if (t84 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x621 = 82U;
	uint16_t x622 = 13U;
	uint8_t x623 = UINT8_MAX;
	int32_t x624 = 96587412;
	int32_t t85 = 14466110;

	t85 = ((x621-x622)>>(x623<=x624));

	if (t85 != 34) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x625 = -1LL;
	int64_t x626 = -2770LL;
	int64_t x628 = INT64_MAX;
	int64_t t86 = 159963608035LL;

	t86 = ((x625-x626)>>(x627<=x628));

	if (t86 != 1384LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x629 = -1;
	int64_t x632 = INT64_MAX;
	int32_t t87 = -2363;

	t87 = ((x629-x630)>>(x631<=x632));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x633 = 34603827788973566LLU;
	static int8_t x634 = INT8_MIN;
	uint32_t x635 = UINT32_MAX;
	uint64_t t88 = 86340LLU;

	t88 = ((x633-x634)>>(x635<=x636));

	if (t88 != 34603827788973694LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x637 = INT64_MAX;
	int8_t x638 = 4;
	int32_t x639 = -1;
	static int32_t x640 = INT32_MAX;

	t89 = ((x637-x638)>>(x639<=x640));

	if (t89 != 4611686018427387901LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x642 = INT8_MIN;
	int16_t x644 = -3;
	int32_t t90 = 15425200;

	t90 = ((x641-x642)>>(x643<=x644));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x645 = UINT16_MAX;
	static int64_t x646 = -170742669016LL;
	static int32_t x647 = INT32_MAX;
	uint8_t x648 = UINT8_MAX;
	int64_t t91 = 9838167214145LL;

	t91 = ((x645-x646)>>(x647<=x648));

	if (t91 != 170742734551LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x649 = INT32_MAX;
	int8_t x650 = INT8_MAX;
	uint8_t x651 = 1U;
	int8_t x652 = INT8_MAX;
	volatile int32_t t92 = -26722189;

	t92 = ((x649-x650)>>(x651<=x652));

	if (t92 != 1073741760) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x657 = 90633719;
	uint8_t x658 = 4U;
	static volatile int16_t x659 = -1;
	int16_t x660 = 35;
	static volatile int32_t t93 = -193;

	t93 = ((x657-x658)>>(x659<=x660));

	if (t93 != 45316857) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x677 = INT16_MAX;
	static volatile int64_t x678 = -1LL;
	int8_t x680 = INT8_MIN;
	static int64_t t94 = -13LL;

	t94 = ((x677-x678)>>(x679<=x680));

	if (t94 != 32768LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x685 = 83802339963495LLU;
	int64_t x686 = -1LL;
	static int16_t x687 = INT16_MAX;
	int32_t x688 = INT32_MAX;
	uint64_t t95 = 1041921125LLU;

	t95 = ((x685-x686)>>(x687<=x688));

	if (t95 != 41901169981748LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x689 = 4039U;
	int32_t x690 = -1;
	int64_t x692 = INT64_MIN;
	uint32_t t96 = 3165U;

	t96 = ((x689-x690)>>(x691<=x692));

	if (t96 != 4040U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x694 = -370LL;
	int8_t x695 = INT8_MAX;
	static uint8_t x696 = 17U;
	int64_t t97 = 600652951LL;

	t97 = ((x693-x694)>>(x695<=x696));

	if (t97 != 910LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x701 = UINT16_MAX;
	volatile int16_t x703 = -1;
	uint64_t x704 = UINT64_MAX;
	int32_t t98 = 42;

	t98 = ((x701-x702)>>(x703<=x704));

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x705 = INT16_MAX;
	int32_t x706 = -1;
	volatile int64_t x707 = INT64_MIN;
	int32_t x708 = INT32_MIN;
	int32_t t99 = 134768774;

	t99 = ((x705-x706)>>(x707<=x708));

	if (t99 != 16384) { NG(); } else { ; }
	
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

