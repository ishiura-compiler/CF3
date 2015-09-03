#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = 11625360010244LL;
volatile uint64_t x31 = 1040556765LLU;
uint16_t x45 = 4U;
int16_t x47 = 1;
int64_t x58 = -37857477481708486LL;
volatile uint16_t x59 = UINT16_MAX;
int8_t x61 = INT8_MAX;
uint32_t x75 = UINT32_MAX;
int64_t x79 = INT64_MAX;
volatile uint64_t x93 = 55LLU;
volatile int16_t x95 = INT16_MAX;
volatile uint64_t t9 = 7171421849744999907LLU;
static volatile int32_t t10 = -7259;
static int16_t x107 = INT16_MIN;
int32_t t12 = 261;
static int8_t x118 = 26;
uint8_t x120 = 15U;
int64_t x133 = 118LL;
uint16_t x134 = 5061U;
int32_t x137 = 939191;
int16_t x140 = -1;
int16_t x160 = INT16_MAX;
static uint64_t x186 = 881022886858830884LLU;
static uint8_t x201 = 7U;
int32_t x204 = INT32_MAX;
static volatile int32_t x217 = INT32_MAX;
uint64_t x219 = 66834791152057LLU;
int8_t x222 = INT8_MIN;
static int16_t x242 = INT16_MIN;
volatile uint64_t t31 = 233865356LLU;
uint16_t x250 = UINT16_MAX;
static int32_t x256 = INT32_MIN;
uint8_t x274 = UINT8_MAX;
static int32_t x278 = INT32_MIN;
static int32_t t37 = -1;
static volatile int64_t x282 = INT64_MIN;
uint16_t x291 = UINT16_MAX;
int32_t x296 = -1;
int16_t x308 = INT16_MIN;
static uint32_t x317 = 226889U;
volatile int16_t x320 = INT16_MIN;
int32_t x329 = INT32_MAX;
int64_t x332 = INT64_MIN;
static volatile uint32_t t45 = 1376U;
volatile int32_t t48 = -475277106;
volatile int32_t x361 = 13242;
volatile uint32_t x362 = 0U;
static volatile int64_t x363 = 8176091674230LL;
static volatile int32_t t50 = 330378;
int8_t x388 = INT8_MIN;
volatile int64_t t52 = INT64_MAX;
volatile uint16_t x408 = 3U;
int64_t x409 = 10853LL;
int32_t x426 = INT32_MIN;
int64_t x428 = -218571LL;
volatile int64_t x433 = INT64_MAX;
volatile int8_t x442 = -15;
int8_t x444 = INT8_MIN;
static int8_t x446 = INT8_MIN;
volatile int32_t t61 = -136862888;
int8_t x453 = 1;
int64_t x466 = 4916786598185020LL;
int32_t t64 = -1669954;
uint32_t x489 = 434614U;
int16_t x504 = INT16_MIN;
int32_t t67 = 1;
uint32_t x509 = UINT32_MAX;
int32_t x510 = INT32_MIN;
int32_t t70 = 7316299;
int32_t x519 = INT32_MIN;
static uint16_t x520 = UINT16_MAX;
uint64_t x528 = 0LLU;
int32_t t72 = 38758;
volatile int8_t x538 = 0;
static int16_t x549 = INT16_MAX;
static volatile int16_t x554 = INT16_MIN;
int32_t x557 = 1878061;
static uint32_t x558 = UINT32_MAX;
uint32_t x561 = 1787292624U;
int64_t x563 = -1LL;
int32_t t78 = INT32_MAX;
static int32_t x570 = 304;
int32_t x575 = -1;
volatile int64_t x609 = 215254667LL;
int16_t x622 = INT16_MAX;
int8_t x662 = -1;
int32_t x664 = -1;
int32_t x667 = -1;
volatile uint64_t t86 = 653944086163128LLU;
int64_t x673 = 211280194919574LL;
int8_t x676 = -1;
int64_t t88 = 67048067861814056LL;
uint32_t x677 = UINT32_MAX;
int16_t x678 = -28;
static volatile uint32_t t89 = 0U;
int32_t x691 = -1;
int16_t x692 = INT16_MIN;
uint64_t x696 = 2629289115309191959LLU;
int8_t x709 = 8;
uint8_t x740 = 7U;
int8_t x744 = 18;


void f0(void) {
	static int64_t x6 = -38774151440294LL;
	volatile uint32_t x7 = 4614U;
	volatile int8_t x8 = INT8_MIN;
	int64_t t0 = 242352LL;

	t0 = (x5<<((x6<x7)<x8));

	if (t0 != 11625360010244LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x29 = INT8_MAX;
	volatile int64_t x30 = INT64_MAX;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t1 = -4317;

	t1 = (x29<<((x30<x31)<x32));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x46 = -1;
	volatile int32_t x48 = INT32_MIN;
	volatile int32_t t2 = 122074475;

	t2 = (x45<<((x46<x47)<x48));

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x57 = 19U;
	int64_t x60 = INT64_MIN;
	static volatile uint32_t t3 = 1847111U;

	t3 = (x57<<((x58<x59)<x60));

	if (t3 != 19U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x62 = INT16_MIN;
	volatile uint16_t x63 = 18U;
	static uint32_t x64 = 2430U;
	int32_t t4 = -1;

	t4 = (x61<<((x62<x63)<x64));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x73 = 9853292129359LL;
	static uint32_t x74 = 17137191U;
	int8_t x76 = INT8_MIN;
	int64_t t5 = 484614604558052568LL;

	t5 = (x73<<((x74<x75)<x76));

	if (t5 != 9853292129359LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x77 = UINT32_MAX;
	int16_t x78 = -1;
	volatile uint8_t x80 = 4U;
	volatile uint32_t t6 = 199445U;

	t6 = (x77<<((x78<x79)<x80));

	if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x81 = UINT16_MAX;
	static int8_t x82 = INT8_MAX;
	int64_t x83 = INT64_MIN;
	uint16_t x84 = 268U;
	volatile int32_t t7 = -3;

	t7 = (x81<<((x82<x83)<x84));

	if (t7 != 131070) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x85 = 5U;
	int8_t x86 = -21;
	static int8_t x87 = INT8_MIN;
	uint64_t x88 = 356928LLU;
	volatile int32_t t8 = -20;

	t8 = (x85<<((x86<x87)<x88));

	if (t8 != 10) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x94 = -3;
	static uint8_t x96 = 64U;

	t9 = (x93<<((x94<x95)<x96));

	if (t9 != 110LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x97 = INT16_MAX;
	static int64_t x98 = 13LL;
	static int64_t x99 = INT64_MIN;
	uint32_t x100 = UINT32_MAX;

	t10 = (x97<<((x98<x99)<x100));

	if (t10 != 65534) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x105 = 1638507658930653145LL;
	int16_t x106 = INT16_MAX;
	int32_t x108 = -1101;
	int64_t t11 = -738803890LL;

	t11 = (x105<<((x106<x107)<x108));

	if (t11 != 1638507658930653145LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x109 = 64U;
	int16_t x110 = INT16_MIN;
	volatile int32_t x111 = INT32_MIN;
	static int8_t x112 = INT8_MIN;

	t12 = (x109<<((x110<x111)<x112));

	if (t12 != 64) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x117 = 297U;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t t13 = 223815;

	t13 = (x117<<((x118<x119)<x120));

	if (t13 != 594) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = 4366016U;
	int16_t x127 = -1;
	uint64_t x128 = 26942629419034LLU;
	static int32_t t14 = -91072741;

	t14 = (x125<<((x126<x127)<x128));

	if (t14 != 510) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;
	volatile int64_t t15 = 1341039573LL;

	t15 = (x133<<((x134<x135)<x136));

	if (t15 != 118LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x138 = -1;
	int16_t x139 = INT16_MIN;
	volatile int32_t t16 = -55;

	t16 = (x137<<((x138<x139)<x140));

	if (t16 != 939191) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MIN;
	int64_t x151 = 808357475LL;
	int16_t x152 = 3;
	static volatile int32_t t17 = 396698;

	t17 = (x149<<((x150<x151)<x152));

	if (t17 != 131070) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x157 = 388919U;
	int64_t x158 = 1747382564077877878LL;
	static uint8_t x159 = 1U;
	static uint32_t t18 = 15U;

	t18 = (x157<<((x158<x159)<x160));

	if (t18 != 777838U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x165 = 1;
	uint32_t x166 = 1U;
	int16_t x167 = -75;
	int8_t x168 = -1;
	int32_t t19 = 637862498;

	t19 = (x165<<((x166<x167)<x168));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x169 = INT16_MAX;
	static volatile uint16_t x170 = 196U;
	volatile int64_t x171 = -28LL;
	uint16_t x172 = 60U;
	int32_t t20 = 98;

	t20 = (x169<<((x170<x171)<x172));

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x173 = 79785054763LLU;
	volatile int64_t x174 = -1LL;
	int64_t x175 = -1LL;
	int16_t x176 = 25;
	static volatile uint64_t t21 = 4330536460LLU;

	t21 = (x173<<((x174<x175)<x176));

	if (t21 != 159570109526LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x177 = 0;
	volatile int8_t x178 = -3;
	int8_t x179 = INT8_MIN;
	uint32_t x180 = 383504U;
	static volatile int32_t t22 = 4175785;

	t22 = (x177<<((x178<x179)<x180));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x185 = UINT64_MAX;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = INT16_MIN;
	uint64_t t23 = UINT64_MAX;

	t23 = (x185<<((x186<x187)<x188));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x193 = INT32_MAX;
	int64_t x194 = INT64_MAX;
	int64_t x195 = -1LL;
	static int16_t x196 = INT16_MIN;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x193<<((x194<x195)<x196));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x202 = 490U;
	int8_t x203 = INT8_MIN;
	volatile int32_t t25 = -5;

	t25 = (x201<<((x202<x203)<x204));

	if (t25 != 14) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x205 = 110433LLU;
	static int32_t x206 = INT32_MIN;
	int8_t x207 = -1;
	static int32_t x208 = INT32_MAX;
	uint64_t t26 = 22LLU;

	t26 = (x205<<((x206<x207)<x208));

	if (t26 != 220866LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x218 = 14U;
	volatile int32_t x220 = -6262;
	int32_t t27 = INT32_MAX;

	t27 = (x217<<((x218<x219)<x220));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x221 = 5729500U;
	int32_t x223 = -387327960;
	int64_t x224 = INT64_MIN;
	volatile uint32_t t28 = 902963346U;

	t28 = (x221<<((x222<x223)<x224));

	if (t28 != 5729500U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MIN;
	int64_t x232 = -1368335090138156615LL;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x229<<((x230<x231)<x232));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x237 = 16040;
	static int16_t x238 = 156;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = 224775909758LLU;
	static int32_t t30 = -6708;

	t30 = (x237<<((x238<x239)<x240));

	if (t30 != 32080) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x241 = 12418359229920858LLU;
	static int16_t x243 = INT16_MAX;
	uint32_t x244 = 4018U;

	t31 = (x241<<((x242<x243)<x244));

	if (t31 != 24836718459841716LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x249 = UINT32_MAX;
	volatile int64_t x251 = INT64_MAX;
	int16_t x252 = INT16_MIN;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x249<<((x250<x251)<x252));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x253 = 6783U;
	static int32_t x254 = INT32_MIN;
	int64_t x255 = INT64_MIN;
	int32_t t33 = 1;

	t33 = (x253<<((x254<x255)<x256));

	if (t33 != 6783) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x257 = 3182477U;
	static volatile int32_t x258 = -584;
	volatile uint32_t x259 = 689629U;
	volatile uint8_t x260 = UINT8_MAX;
	volatile uint32_t t34 = 82U;

	t34 = (x257<<((x258<x259)<x260));

	if (t34 != 6364954U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x269 = INT8_MAX;
	volatile uint32_t x270 = UINT32_MAX;
	int8_t x271 = INT8_MIN;
	int16_t x272 = -952;
	int32_t t35 = 1888;

	t35 = (x269<<((x270<x271)<x272));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x273 = 108U;
	int32_t x275 = INT32_MIN;
	static int64_t x276 = INT64_MIN;
	int32_t t36 = -97530231;

	t36 = (x273<<((x274<x275)<x276));

	if (t36 != 108) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x277 = 25U;
	int8_t x279 = -21;
	volatile int64_t x280 = INT64_MIN;

	t37 = (x277<<((x278<x279)<x280));

	if (t37 != 25) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x281 = INT64_MAX;
	uint8_t x283 = 4U;
	int64_t x284 = -57LL;
	static volatile int64_t t38 = INT64_MAX;

	t38 = (x281<<((x282<x283)<x284));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x285 = UINT64_MAX;
	static volatile uint64_t x286 = 163115691379282LLU;
	static volatile int64_t x287 = 1LL;
	uint16_t x288 = UINT16_MAX;
	uint64_t t39 = 1941852456195LLU;

	t39 = (x285<<((x286<x287)<x288));

	if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x289 = 9;
	static int8_t x290 = INT8_MAX;
	volatile int16_t x292 = INT16_MIN;
	int32_t t40 = 958187;

	t40 = (x289<<((x290<x291)<x292));

	if (t40 != 9) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x293 = 1851U;
	int8_t x294 = 30;
	static int32_t x295 = INT32_MAX;
	int32_t t41 = -4254;

	t41 = (x293<<((x294<x295)<x296));

	if (t41 != 1851) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	static uint32_t x307 = 2706U;
	volatile int64_t t42 = INT64_MAX;

	t42 = (x305<<((x306<x307)<x308));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x318 = 30U;
	int16_t x319 = -1;
	uint32_t t43 = 340752U;

	t43 = (x317<<((x318<x319)<x320));

	if (t43 != 226889U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x330 = INT32_MAX;
	uint8_t x331 = UINT8_MAX;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x329<<((x330<x331)<x332));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x333 = 40U;
	volatile int64_t x334 = INT64_MIN;
	int64_t x335 = -1LL;
	volatile uint64_t x336 = 262324278LLU;

	t45 = (x333<<((x334<x335)<x336));

	if (t45 != 80U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x337 = 0U;
	int64_t x338 = -92069485204483LL;
	int8_t x339 = INT8_MIN;
	volatile int16_t x340 = -3;
	int32_t t46 = -65286;

	t46 = (x337<<((x338<x339)<x340));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x345 = INT8_MAX;
	static int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t47 = 21687;

	t47 = (x345<<((x346<x347)<x348));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x353 = INT8_MAX;
	static volatile int32_t x354 = INT32_MIN;
	uint32_t x355 = 3U;
	int8_t x356 = 0;

	t48 = (x353<<((x354<x355)<x356));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x357 = UINT16_MAX;
	uint8_t x358 = UINT8_MAX;
	static uint16_t x359 = 146U;
	int64_t x360 = INT64_MIN;
	volatile int32_t t49 = 58976;

	t49 = (x357<<((x358<x359)<x360));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x364 = 225LLU;

	t50 = (x361<<((x362<x363)<x364));

	if (t50 != 26484) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x381 = 3U;
	int64_t x382 = -50760LL;
	int16_t x383 = 130;
	uint8_t x384 = UINT8_MAX;
	static int32_t t51 = 309;

	t51 = (x381<<((x382<x383)<x384));

	if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x385 = INT64_MAX;
	int32_t x386 = -1;
	int64_t x387 = -786030445LL;

	t52 = (x385<<((x386<x387)<x388));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x393 = INT8_MAX;
	int64_t x394 = INT64_MAX;
	volatile uint32_t x395 = 3U;
	uint8_t x396 = 0U;
	int32_t t53 = 49812697;

	t53 = (x393<<((x394<x395)<x396));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x405 = UINT8_MAX;
	int16_t x406 = -18;
	volatile int64_t x407 = -157625296648005031LL;
	int32_t t54 = 796;

	t54 = (x405<<((x406<x407)<x408));

	if (t54 != 510) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x410 = INT64_MIN;
	int64_t x411 = 1653685LL;
	static volatile uint8_t x412 = 4U;
	static int64_t t55 = 1494303402067LL;

	t55 = (x409<<((x410<x411)<x412));

	if (t55 != 21706LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x417 = INT32_MAX;
	static int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MAX;
	static int64_t x420 = -3882377316711267LL;
	volatile int32_t t56 = INT32_MAX;

	t56 = (x417<<((x418<x419)<x420));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x425 = 28531U;
	int8_t x427 = -1;
	int32_t t57 = 33358803;

	t57 = (x425<<((x426<x427)<x428));

	if (t57 != 28531) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x429 = INT32_MAX;
	static int16_t x430 = INT16_MIN;
	volatile int64_t x431 = INT64_MAX;
	static uint8_t x432 = 0U;
	volatile int32_t t58 = INT32_MAX;

	t58 = (x429<<((x430<x431)<x432));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MIN;
	int16_t x436 = -1735;
	int64_t t59 = INT64_MAX;

	t59 = (x433<<((x434<x435)<x436));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x441 = UINT16_MAX;
	uint64_t x443 = 277LLU;
	int32_t t60 = -3;

	t60 = (x441<<((x442<x443)<x444));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x445 = 3U;
	int64_t x447 = INT64_MIN;
	int64_t x448 = INT64_MIN;

	t61 = (x445<<((x446<x447)<x448));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x449 = 7;
	volatile uint8_t x450 = 30U;
	uint64_t x451 = UINT64_MAX;
	int64_t x452 = 0LL;
	static int32_t t62 = 3265720;

	t62 = (x449<<((x450<x451)<x452));

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x454 = 1U;
	volatile uint16_t x455 = 787U;
	static uint64_t x456 = 2800936513230685LLU;
	volatile int32_t t63 = -443;

	t63 = (x453<<((x454<x455)<x456));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x465 = UINT8_MAX;
	uint32_t x467 = UINT32_MAX;
	uint8_t x468 = 9U;

	t64 = (x465<<((x466<x467)<x468));

	if (t64 != 510) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x469 = UINT8_MAX;
	volatile uint64_t x470 = 115883642862LLU;
	static uint16_t x471 = 654U;
	volatile int64_t x472 = -1LL;
	int32_t t65 = 28235997;

	t65 = (x469<<((x470<x471)<x472));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x490 = 2U;
	volatile uint16_t x491 = 0U;
	static int8_t x492 = -3;
	uint32_t t66 = 3U;

	t66 = (x489<<((x490<x491)<x492));

	if (t66 != 434614U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x501 = UINT8_MAX;
	volatile int64_t x502 = -5689926258LL;
	int64_t x503 = INT64_MIN;

	t67 = (x501<<((x502<x503)<x504));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x505 = 59391164U;
	int64_t x506 = INT64_MIN;
	int32_t x507 = INT32_MIN;
	volatile uint8_t x508 = UINT8_MAX;
	volatile uint32_t t68 = 44016U;

	t68 = (x505<<((x506<x507)<x508));

	if (t68 != 118782328U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x511 = INT8_MIN;
	static uint16_t x512 = UINT16_MAX;
	volatile uint32_t t69 = 354U;

	t69 = (x509<<((x510<x511)<x512));

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x513 = 20U;
	volatile int16_t x514 = INT16_MAX;
	static uint32_t x515 = 87897U;
	int8_t x516 = -1;

	t70 = (x513<<((x514<x515)<x516));

	if (t70 != 20) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x517 = 46;
	volatile int8_t x518 = 12;
	volatile int32_t t71 = -4117;

	t71 = (x517<<((x518<x519)<x520));

	if (t71 != 92) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x525 = 514;
	volatile int64_t x526 = INT64_MIN;
	volatile int32_t x527 = -125242;

	t72 = (x525<<((x526<x527)<x528));

	if (t72 != 514) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x537 = UINT64_MAX;
	static int16_t x539 = INT16_MIN;
	int16_t x540 = -99;
	uint64_t t73 = UINT64_MAX;

	t73 = (x537<<((x538<x539)<x540));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x550 = -1LL;
	int16_t x551 = INT16_MIN;
	static uint16_t x552 = 105U;
	volatile int32_t t74 = -1343;

	t74 = (x549<<((x550<x551)<x552));

	if (t74 != 65534) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x553 = 1594761U;
	volatile uint16_t x555 = UINT16_MAX;
	int8_t x556 = INT8_MIN;
	volatile uint32_t t75 = 3U;

	t75 = (x553<<((x554<x555)<x556));

	if (t75 != 1594761U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x559 = INT64_MAX;
	int64_t x560 = -1LL;
	int32_t t76 = -5;

	t76 = (x557<<((x558<x559)<x560));

	if (t76 != 1878061) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x562 = 2U;
	static int16_t x564 = INT16_MAX;
	uint32_t t77 = 10U;

	t77 = (x561<<((x562<x563)<x564));

	if (t77 != 3574585248U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x565 = INT32_MAX;
	uint8_t x566 = 5U;
	int16_t x567 = INT16_MIN;
	int32_t x568 = INT32_MIN;

	t78 = (x565<<((x566<x567)<x568));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x569 = 3568U;
	int32_t x571 = 753;
	static int16_t x572 = -1;
	int32_t t79 = 124383;

	t79 = (x569<<((x570<x571)<x572));

	if (t79 != 3568) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x573 = UINT8_MAX;
	volatile int8_t x574 = 5;
	uint32_t x576 = 92173U;
	volatile int32_t t80 = -5850546;

	t80 = (x573<<((x574<x575)<x576));

	if (t80 != 510) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x597 = UINT8_MAX;
	static uint8_t x598 = UINT8_MAX;
	static int64_t x599 = INT64_MAX;
	int8_t x600 = INT8_MIN;
	volatile int32_t t81 = 2825;

	t81 = (x597<<((x598<x599)<x600));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x610 = 14;
	int32_t x611 = -1;
	uint8_t x612 = 106U;
	static volatile int64_t t82 = -6264594491455LL;

	t82 = (x609<<((x610<x611)<x612));

	if (t82 != 430509334LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x621 = 3;
	uint32_t x623 = 60U;
	uint8_t x624 = UINT8_MAX;
	int32_t t83 = -118;

	t83 = (x621<<((x622<x623)<x624));

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x633 = 4;
	uint8_t x634 = 10U;
	uint16_t x635 = 2943U;
	int8_t x636 = INT8_MAX;
	int32_t t84 = -3903216;

	t84 = (x633<<((x634<x635)<x636));

	if (t84 != 8) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x661 = INT16_MAX;
	volatile uint8_t x663 = UINT8_MAX;
	static volatile int32_t t85 = -355293;

	t85 = (x661<<((x662<x663)<x664));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x665 = 1765178450571340LLU;
	static uint64_t x666 = 3868666237402756346LLU;
	int64_t x668 = INT64_MIN;

	t86 = (x665<<((x666<x667)<x668));

	if (t86 != 1765178450571340LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x669 = 222517564;
	int32_t x670 = 1;
	int64_t x671 = 8527735430LL;
	uint64_t x672 = 9115493561177551550LLU;
	volatile int32_t t87 = 156;

	t87 = (x669<<((x670<x671)<x672));

	if (t87 != 445035128) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x674 = INT32_MIN;
	int32_t x675 = INT32_MAX;

	t88 = (x673<<((x674<x675)<x676));

	if (t88 != 211280194919574LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x679 = INT8_MIN;
	int64_t x680 = INT64_MAX;

	t89 = (x677<<((x678<x679)<x680));

	if (t89 != 4294967294U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x681 = 5U;
	static int64_t x682 = -538954302619LL;
	volatile int64_t x683 = INT64_MIN;
	volatile uint16_t x684 = 1U;
	volatile int32_t t90 = 2;

	t90 = (x681<<((x682<x683)<x684));

	if (t90 != 10) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x685 = 19274U;
	volatile int8_t x686 = -1;
	int16_t x687 = INT16_MIN;
	uint64_t x688 = 123LLU;
	volatile int32_t t91 = 559494628;

	t91 = (x685<<((x686<x687)<x688));

	if (t91 != 38548) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x689 = 1985686U;
	int64_t x690 = INT64_MIN;
	volatile uint32_t t92 = 1527U;

	t92 = (x689<<((x690<x691)<x692));

	if (t92 != 1985686U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x693 = 701332;
	uint32_t x694 = UINT32_MAX;
	uint32_t x695 = 0U;
	volatile int32_t t93 = -1567300;

	t93 = (x693<<((x694<x695)<x696));

	if (t93 != 1402664) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x705 = UINT16_MAX;
	int64_t x706 = -340830423648305345LL;
	int32_t x707 = INT32_MIN;
	volatile int8_t x708 = 0;
	int32_t t94 = 0;

	t94 = (x705<<((x706<x707)<x708));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x710 = INT32_MIN;
	uint16_t x711 = 10U;
	uint16_t x712 = 36U;
	int32_t t95 = 37400981;

	t95 = (x709<<((x710<x711)<x712));

	if (t95 != 16) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x713 = UINT16_MAX;
	static int8_t x714 = INT8_MIN;
	int32_t x715 = INT32_MIN;
	uint8_t x716 = UINT8_MAX;
	int32_t t96 = 1;

	t96 = (x713<<((x714<x715)<x716));

	if (t96 != 131070) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x729 = 89U;
	static int32_t x730 = -1;
	int64_t x731 = INT64_MAX;
	volatile int8_t x732 = INT8_MAX;
	int32_t t97 = 63;

	t97 = (x729<<((x730<x731)<x732));

	if (t97 != 178) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x737 = 1003578U;
	static uint32_t x738 = 59180U;
	int16_t x739 = INT16_MAX;
	static volatile uint32_t t98 = 184788715U;

	t98 = (x737<<((x738<x739)<x740));

	if (t98 != 2007156U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x741 = 5LLU;
	static int64_t x742 = 435LL;
	uint8_t x743 = 2U;
	volatile uint64_t t99 = 252322147906LLU;

	t99 = (x741<<((x742<x743)<x744));

	if (t99 != 10LLU) { NG(); } else { ; }
	
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

