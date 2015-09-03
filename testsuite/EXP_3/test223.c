#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = 2137941293U;
uint32_t t0 = 1834659983U;
uint8_t x12 = 0U;
uint8_t x15 = 4U;
uint16_t x16 = 1649U;
uint32_t x17 = 0U;
int8_t x25 = -1;
int64_t x37 = 207093124719736249LL;
int8_t x50 = INT8_MIN;
volatile int64_t t10 = -213361570LL;
volatile int64_t x56 = -1LL;
int64_t t11 = 38620393860961943LL;
volatile uint8_t x63 = 10U;
uint32_t t13 = 30U;
uint16_t x90 = 316U;
uint16_t x104 = 744U;
volatile int16_t x105 = INT16_MIN;
volatile int8_t x113 = INT8_MIN;
volatile uint8_t x122 = 49U;
int32_t t25 = -13;
volatile int64_t x133 = -1LL;
int32_t x148 = 34566679;
uint16_t x163 = 38U;
volatile int64_t t32 = 7LL;
int64_t x177 = INT64_MIN;
static uint64_t x183 = 3LLU;
int8_t x190 = INT8_MAX;
volatile int64_t t37 = -50719055150381LL;
int16_t x199 = INT16_MIN;
int16_t x207 = INT16_MAX;
volatile uint16_t x208 = 62U;
int8_t x214 = INT8_MIN;
uint16_t x223 = 2U;
static uint16_t x225 = 47U;
int16_t x235 = -1;
static int64_t t47 = -11253800531194LL;
int8_t x244 = -1;
volatile uint64_t t48 = 4528LLU;
int8_t x254 = INT8_MAX;
int64_t t51 = -124268033LL;
volatile int8_t x269 = INT8_MIN;
static int16_t x271 = INT16_MIN;
volatile uint32_t t53 = 11U;
int32_t x278 = INT32_MAX;
uint32_t x285 = UINT32_MAX;
volatile int32_t x289 = INT32_MIN;
int32_t x307 = INT32_MAX;
int64_t t60 = 265387LL;
static int64_t x309 = -1LL;
volatile int64_t t64 = -4268206347712148LL;
volatile int16_t x329 = -1;
uint8_t x331 = 3U;
uint8_t x339 = UINT8_MAX;
int64_t x342 = INT64_MIN;
static uint8_t x349 = 5U;
int8_t x351 = -1;
volatile uint32_t t70 = 773397U;
static volatile int32_t x367 = INT32_MAX;
uint32_t x370 = UINT32_MAX;
int16_t x372 = -159;
volatile uint64_t t76 = 12493753280LLU;
static volatile int32_t x386 = INT32_MIN;
int8_t x389 = -13;
int64_t x390 = -11LL;
static int16_t x392 = INT16_MIN;
volatile int64_t t78 = 121LL;
int64_t x393 = -1010894479327LL;
int32_t x395 = -194;
uint64_t x396 = 132920LLU;
uint64_t t79 = 1LLU;
int64_t x403 = -1LL;
static int8_t x420 = INT8_MIN;
uint16_t x426 = 1U;
int8_t x430 = INT8_MAX;
volatile int64_t x445 = 0LL;
volatile int8_t x448 = -2;
int8_t x449 = -1;
uint32_t x450 = UINT32_MAX;
volatile uint32_t x451 = UINT32_MAX;
int64_t x454 = -8334881LL;
uint32_t t94 = 23050U;
int64_t x461 = INT64_MIN;
static int16_t x463 = INT16_MIN;
volatile uint64_t x471 = UINT64_MAX;
uint64_t x480 = UINT64_MAX;
int64_t t99 = 248732995LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x2 = 92260772U;
	uint16_t x4 = 2U;

	t0 = ((x1%x2)-(x3-x4));

	if (t0 != 2207997661U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x9 = UINT8_MAX;
	int16_t x10 = INT16_MIN;
	uint64_t x11 = 2595LLU;
	uint64_t t1 = 9148418LLU;

	t1 = ((x9%x10)-(x11-x12));

	if (t1 != 18446744073709549276LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = -1LL;
	volatile int64_t t2 = 3282LL;

	t2 = ((x13%x14)-(x15-x16));

	if (t2 != 1645LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x18 = 1503U;
	static int64_t x19 = 484LL;
	int8_t x20 = INT8_MIN;
	static int64_t t3 = 3LL;

	t3 = ((x17%x18)-(x19-x20));

	if (t3 != -612LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 38;
	int32_t x22 = INT32_MIN;
	int64_t x23 = -254677618473155306LL;
	uint8_t x24 = 6U;
	volatile int64_t t4 = 31547085716214LL;

	t4 = ((x21%x22)-(x23-x24));

	if (t4 != 254677618473155350LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = INT32_MIN;
	volatile int32_t x28 = INT32_MIN;
	int32_t t5 = 94091;

	t5 = ((x25%x26)-(x27-x28));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	int16_t x36 = INT16_MIN;
	int64_t t6 = -522260009498984LL;

	t6 = ((x33%x34)-(x35-x36));

	if (t6 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = 4793754;
	static int32_t x39 = INT32_MIN;
	uint32_t x40 = UINT32_MAX;
	int64_t t7 = 2682LL;

	t7 = ((x37%x38)-(x39-x40));

	if (t7 != -2144760536LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x41 = INT16_MAX;
	int16_t x42 = INT16_MIN;
	volatile int8_t x43 = 1;
	int8_t x44 = -1;
	volatile int32_t t8 = -158337;

	t8 = ((x41%x42)-(x43-x44));

	if (t8 != 32765) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x45 = UINT64_MAX;
	uint16_t x46 = 15455U;
	uint64_t x47 = 703938368LLU;
	int8_t x48 = -1;
	static uint64_t t9 = 19065466815LLU;

	t9 = ((x45%x46)-(x47-x48));

	if (t9 != 18446744073005627397LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 14U;
	int64_t x51 = INT64_MAX;
	int16_t x52 = 1382;

	t10 = ((x49%x50)-(x51-x52));

	if (t10 != -9223372036854774411LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	static int64_t x54 = -1LL;
	volatile int8_t x55 = -8;

	t11 = ((x53%x54)-(x55-x56));

	if (t11 != 7LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x57 = 0U;
	volatile int32_t x58 = 250;
	int64_t x59 = 5845351797291LL;
	uint32_t x60 = UINT32_MAX;
	volatile int64_t t12 = 0LL;

	t12 = ((x57%x58)-(x59-x60));

	if (t12 != -5841056829996LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 3919U;
	static int32_t x62 = -4006758;
	uint32_t x64 = UINT32_MAX;

	t13 = ((x61%x62)-(x63-x64));

	if (t13 != 3908U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 4540374544999120LLU;
	int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MIN;
	uint32_t x72 = UINT32_MAX;
	uint64_t t14 = 36LLU;

	t14 = ((x69%x70)-(x71-x72));

	if (t14 != 4540370250031951LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x77 = INT64_MAX;
	uint32_t x78 = 450773223U;
	static volatile int8_t x79 = -7;
	volatile int16_t x80 = -1294;
	static int64_t t15 = -1319913021284LL;

	t15 = ((x77%x78)-(x79-x80));

	if (t15 != 446978599LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x81 = UINT64_MAX;
	static int64_t x82 = -5943420500249206LL;
	static uint8_t x83 = 30U;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t16 = 4170739808533321LLU;

	t16 = ((x81%x82)-(x83-x84));

	if (t16 != 5943420500249174LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MAX;
	int32_t x86 = -1;
	static int32_t x87 = INT32_MAX;
	volatile int8_t x88 = 45;
	int32_t t17 = -42932155;

	t17 = ((x85%x86)-(x87-x88));

	if (t17 != -2147483602) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = 27118874252069785LL;
	int16_t x91 = 1;
	volatile uint8_t x92 = 2U;
	int64_t t18 = -1LL;

	t18 = ((x89%x90)-(x91-x92));

	if (t18 != 170LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MAX;
	static int8_t x94 = -1;
	volatile int16_t x95 = INT16_MIN;
	uint8_t x96 = 117U;
	volatile int32_t t19 = -1;

	t19 = ((x93%x94)-(x95-x96));

	if (t19 != 32885) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MAX;
	volatile int32_t x98 = -1;
	int32_t x99 = INT32_MAX;
	uint16_t x100 = 6768U;
	static volatile int32_t t20 = -46;

	t20 = ((x97%x98)-(x99-x100));

	if (t20 != -2147476879) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	volatile int32_t x102 = -1;
	int8_t x103 = INT8_MIN;
	int64_t t21 = -7808280819105LL;

	t21 = ((x101%x102)-(x103-x104));

	if (t21 != 872LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x106 = 2U;
	int32_t x107 = 29;
	int16_t x108 = INT16_MIN;
	volatile uint32_t t22 = 64U;

	t22 = ((x105%x106)-(x107-x108));

	if (t22 != 4294934499U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x114 = -377;
	int8_t x115 = INT8_MAX;
	uint32_t x116 = UINT32_MAX;
	static uint32_t t23 = 20854529U;

	t23 = ((x113%x114)-(x115-x116));

	if (t23 != 4294967040U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = INT32_MIN;
	static volatile uint8_t x118 = 112U;
	volatile int8_t x119 = INT8_MIN;
	volatile uint32_t x120 = 21795U;
	static uint32_t t24 = 77704572U;

	t24 = ((x117%x118)-(x119-x120));

	if (t24 != 21907U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MIN;
	int16_t x123 = 4689;
	int8_t x124 = INT8_MIN;

	t25 = ((x121%x122)-(x123-x124));

	if (t25 != -4847) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x125 = -1;
	int8_t x126 = -1;
	uint8_t x127 = UINT8_MAX;
	volatile int8_t x128 = 12;
	volatile int32_t t26 = 40281;

	t26 = ((x125%x126)-(x127-x128));

	if (t26 != -243) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	volatile int64_t x130 = INT64_MIN;
	int64_t x131 = 832LL;
	volatile int32_t x132 = INT32_MAX;
	int64_t t27 = -46770545LL;

	t27 = ((x129%x130)-(x131-x132));

	if (t27 != 2147482687LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x134 = INT64_MAX;
	uint16_t x135 = UINT16_MAX;
	static int64_t x136 = INT64_MAX;
	volatile int64_t t28 = 53812054105156LL;

	t28 = ((x133%x134)-(x135-x136));

	if (t28 != 9223372036854710271LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MIN;
	uint8_t x142 = 5U;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = 3U;
	volatile int64_t t29 = 1046150LL;

	t29 = ((x141%x142)-(x143-x144));

	if (t29 != 32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = INT32_MAX;
	uint32_t x146 = 52563660U;
	static int32_t x147 = 149686000;
	static uint32_t t30 = 40886016U;

	t30 = ((x145%x146)-(x147-x148));

	if (t30 != 4224785222U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = UINT64_MAX;
	uint16_t x158 = 23U;
	int16_t x159 = -182;
	int64_t x160 = -1LL;
	volatile uint64_t t31 = 188354513380LLU;

	t31 = ((x157%x158)-(x159-x160));

	if (t31 != 186LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x161 = -1;
	int64_t x162 = -1LL;
	int16_t x164 = INT16_MAX;

	t32 = ((x161%x162)-(x163-x164));

	if (t32 != 32729LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MIN;
	static uint64_t x167 = 253266644LLU;
	int8_t x168 = INT8_MIN;
	uint64_t t33 = 23585298752064755LLU;

	t33 = ((x165%x166)-(x167-x168));

	if (t33 != 18446744073456284971LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x178 = -354;
	int32_t x179 = 281391;
	int8_t x180 = 60;
	volatile int64_t t34 = 351519144111392LL;

	t34 = ((x177%x178)-(x179-x180));

	if (t34 != -281363LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = INT16_MIN;
	volatile uint8_t x182 = UINT8_MAX;
	int64_t x184 = -228LL;
	static uint64_t t35 = 6062LLU;

	t35 = ((x181%x182)-(x183-x184));

	if (t35 != 18446744073709551257LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = INT32_MIN;
	static int8_t x186 = INT8_MIN;
	int16_t x187 = -1;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t36 = -3645829;

	t36 = ((x185%x186)-(x187-x188));

	if (t36 != 65536) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x189 = INT64_MIN;
	int32_t x191 = -52324473;
	uint32_t x192 = UINT32_MAX;

	t37 = ((x189%x190)-(x191-x192));

	if (t37 != -4242642825LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = INT16_MAX;
	volatile uint8_t x194 = 8U;
	static uint64_t x195 = 527935LLU;
	uint8_t x196 = 50U;
	static uint64_t t38 = 17363909487220344LLU;

	t38 = ((x193%x194)-(x195-x196));

	if (t38 != 18446744073709023738LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x197 = INT16_MIN;
	int32_t x198 = 230;
	uint8_t x200 = UINT8_MAX;
	static int32_t t39 = -1;

	t39 = ((x197%x198)-(x199-x200));

	if (t39 != 32915) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = -1;
	uint32_t x206 = 8967612U;
	uint32_t t40 = 2033U;

	t40 = ((x205%x206)-(x207-x208));

	if (t40 != 8416054U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x213 = 29865300LLU;
	int32_t x215 = 66;
	uint32_t x216 = 53882485U;
	static uint64_t t41 = 3772537LLU;

	t41 = ((x213%x214)-(x215-x216));

	if (t41 != 18446744069498332039LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x217 = 10U;
	volatile int64_t x218 = INT64_MIN;
	uint32_t x219 = 923U;
	static int32_t x220 = 101;
	int64_t t42 = 3489944564LL;

	t42 = ((x217%x218)-(x219-x220));

	if (t42 != -812LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = INT16_MAX;
	int32_t x222 = 1326;
	int8_t x224 = -9;
	int32_t t43 = 90481;

	t43 = ((x221%x222)-(x223-x224));

	if (t43 != 932) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x226 = INT32_MIN;
	int32_t x227 = -526999;
	static int16_t x228 = INT16_MAX;
	int32_t t44 = -26288785;

	t44 = ((x225%x226)-(x227-x228));

	if (t44 != 559813) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x229 = 870555U;
	int64_t x230 = INT64_MIN;
	uint64_t x231 = 74LLU;
	uint32_t x232 = 25392034U;
	static volatile uint64_t t45 = 8417185558401249763LLU;

	t45 = ((x229%x230)-(x231-x232));

	if (t45 != 26262515LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x233 = 497U;
	uint16_t x234 = 1387U;
	uint16_t x236 = 3105U;
	static int32_t t46 = -975;

	t46 = ((x233%x234)-(x235-x236));

	if (t46 != 3603) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x237 = 1U;
	int16_t x238 = 227;
	int8_t x239 = -6;
	volatile int64_t x240 = 472643748672LL;

	t47 = ((x237%x238)-(x239-x240));

	if (t47 != 472643748679LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x241 = 1U;
	uint64_t x242 = 12918492LLU;
	uint32_t x243 = UINT32_MAX;

	t48 = ((x241%x242)-(x243-x244));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x245 = -1LL;
	int16_t x246 = INT16_MAX;
	static volatile uint8_t x247 = UINT8_MAX;
	uint32_t x248 = 411522U;
	volatile int64_t t49 = -12253244775LL;

	t49 = ((x245%x246)-(x247-x248));

	if (t49 != -4294556030LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = 1;
	uint32_t x250 = 7U;
	static uint32_t x251 = 47102U;
	volatile int16_t x252 = 1248;
	static uint32_t t50 = 5053757U;

	t50 = ((x249%x250)-(x251-x252));

	if (t50 != 4294921443U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x253 = INT16_MAX;
	static int64_t x255 = INT64_MAX;
	int16_t x256 = 1439;

	t51 = ((x253%x254)-(x255-x256));

	if (t51 != -9223372036854774367LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = 590;
	static int8_t x258 = INT8_MIN;
	int32_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile int32_t t52 = -422348;

	t52 = ((x257%x258)-(x259-x260));

	if (t52 != -32689) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x270 = UINT32_MAX;
	static int16_t x272 = INT16_MAX;

	t53 = ((x269%x270)-(x271-x272));

	if (t53 != 65407U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = 3354;
	uint64_t x279 = 4117412607104109LLU;
	int32_t x280 = 2;
	static uint64_t t54 = 1948059368305778LLU;

	t54 = ((x277%x278)-(x279-x280));

	if (t54 != 18442626661102450863LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = -120203;
	static volatile int16_t x283 = INT16_MIN;
	volatile uint8_t x284 = 6U;
	static volatile int32_t t55 = -203123260;

	t55 = ((x281%x282)-(x283-x284));

	if (t55 != -24279) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x286 = INT64_MAX;
	static uint8_t x287 = 6U;
	static uint8_t x288 = 1U;
	volatile int64_t t56 = -49233549929LL;

	t56 = ((x285%x286)-(x287-x288));

	if (t56 != 4294967290LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MIN;
	uint32_t x292 = 55882U;
	static uint32_t t57 = 27162823U;

	t57 = ((x289%x290)-(x291-x292));

	if (t57 != 88642U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x293 = 6440;
	static int16_t x294 = -1;
	uint32_t x295 = 2220U;
	uint16_t x296 = 676U;
	static uint32_t t58 = 5734171U;

	t58 = ((x293%x294)-(x295-x296));

	if (t58 != 4294965752U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x301 = 1;
	int16_t x302 = -581;
	int16_t x303 = INT16_MIN;
	int64_t x304 = -15721212997838LL;
	int64_t t59 = 1132293351761049395LL;

	t59 = ((x301%x302)-(x303-x304));

	if (t59 != -15721212965069LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x305 = -1LL;
	uint8_t x306 = 11U;
	int64_t x308 = 965LL;

	t60 = ((x305%x306)-(x307-x308));

	if (t60 != -2147482683LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x310 = INT16_MIN;
	static int64_t x311 = INT64_MIN;
	volatile int8_t x312 = -1;
	static int64_t t61 = -31702658282LL;

	t61 = ((x309%x310)-(x311-x312));

	if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;
	int32_t t62 = 293809798;

	t62 = ((x313%x314)-(x315-x316));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x321 = 1543U;
	uint8_t x322 = 9U;
	uint64_t x323 = 2395803672LLU;
	volatile int64_t x324 = INT64_MIN;
	volatile uint64_t t63 = 254820LLU;

	t63 = ((x321%x322)-(x323-x324));

	if (t63 != 9223372034458972140LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = 54;
	int64_t x326 = 83945922774809289LL;
	uint16_t x327 = 66U;
	int8_t x328 = INT8_MIN;

	t64 = ((x325%x326)-(x327-x328));

	if (t64 != -140LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x330 = -407LL;
	volatile uint8_t x332 = 0U;
	volatile int64_t t65 = 39LL;

	t65 = ((x329%x330)-(x331-x332));

	if (t65 != -4LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x337 = 247871LLU;
	uint8_t x338 = 95U;
	volatile int32_t x340 = INT32_MAX;
	uint64_t t66 = 7089347801080545752LLU;

	t66 = ((x337%x338)-(x339-x340));

	if (t66 != 2147483408LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x341 = INT8_MIN;
	int64_t x343 = INT64_MAX;
	int32_t x344 = INT32_MAX;
	int64_t t67 = 1LL;

	t67 = ((x341%x342)-(x343-x344));

	if (t67 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x350 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	volatile int64_t t68 = 73679297935LL;

	t68 = ((x349%x350)-(x351-x352));

	if (t68 != -2147483642LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MIN;
	uint32_t x355 = 273U;
	int32_t x356 = INT32_MIN;
	int64_t t69 = 5844266LL;

	t69 = ((x353%x354)-(x355-x356));

	if (t69 != -2147483921LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x357 = 5U;
	static uint32_t x358 = UINT32_MAX;
	uint32_t x359 = 55257U;
	volatile int8_t x360 = INT8_MIN;

	t70 = ((x357%x358)-(x359-x360));

	if (t70 != 4294911916U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x361 = 1;
	uint32_t x362 = 3U;
	static volatile int16_t x363 = INT16_MIN;
	static uint8_t x364 = 7U;
	volatile uint32_t t71 = 165229U;

	t71 = ((x361%x362)-(x363-x364));

	if (t71 != 32776U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x365 = -1;
	int64_t x366 = INT64_MAX;
	volatile uint32_t x368 = 64463813U;
	volatile int64_t t72 = -168827LL;

	t72 = ((x365%x366)-(x367-x368));

	if (t72 != -2083019835LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x369 = INT32_MIN;
	static int8_t x371 = INT8_MIN;
	volatile uint32_t t73 = 336636736U;

	t73 = ((x369%x370)-(x371-x372));

	if (t73 != 2147483617U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x373 = INT8_MAX;
	static volatile uint8_t x374 = 29U;
	static int64_t x375 = 1513299574239463986LL;
	int64_t x376 = 172925089069LL;
	int64_t t74 = -377637855295091LL;

	t74 = ((x373%x374)-(x375-x376));

	if (t74 != -1513299401314374906LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x377 = INT64_MIN;
	int64_t x378 = INT64_MAX;
	int64_t x379 = -1LL;
	int8_t x380 = -42;
	volatile int64_t t75 = 19085LL;

	t75 = ((x377%x378)-(x379-x380));

	if (t75 != -42LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x381 = UINT64_MAX;
	uint64_t x382 = 2505514LLU;
	int32_t x383 = -1;
	int32_t x384 = INT32_MIN;

	t76 = ((x381%x382)-(x383-x384));

	if (t76 != 18446744071563617994LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = 3;
	uint64_t x387 = UINT64_MAX;
	uint8_t x388 = 6U;
	volatile uint64_t t77 = 1052807405491851489LLU;

	t77 = ((x385%x386)-(x387-x388));

	if (t77 != 10LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x391 = -236;

	t78 = ((x389%x390)-(x391-x392));

	if (t78 != -32534LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x394 = 5;

	t79 = ((x393%x394)-(x395-x396));

	if (t79 != 133112LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x397 = -1073727379;
	int64_t x398 = INT64_MAX;
	uint8_t x399 = 1U;
	int16_t x400 = -1;
	volatile int64_t t80 = -14LL;

	t80 = ((x397%x398)-(x399-x400));

	if (t80 != -1073727381LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x401 = -1;
	int64_t x402 = -22598025LL;
	volatile uint32_t x404 = 1444U;
	static int64_t t81 = 2LL;

	t81 = ((x401%x402)-(x403-x404));

	if (t81 != 1444LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x409 = -13;
	static volatile int16_t x410 = INT16_MIN;
	uint16_t x411 = 3999U;
	static int16_t x412 = INT16_MIN;
	volatile int32_t t82 = 283876;

	t82 = ((x409%x410)-(x411-x412));

	if (t82 != -36780) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x413 = -1LL;
	uint32_t x414 = 28737U;
	int8_t x415 = INT8_MIN;
	static int32_t x416 = -1;
	volatile int64_t t83 = 8338250807022384LL;

	t83 = ((x413%x414)-(x415-x416));

	if (t83 != 126LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x417 = UINT16_MAX;
	static volatile uint16_t x418 = 3U;
	int16_t x419 = -513;
	int32_t t84 = -55111;

	t84 = ((x417%x418)-(x419-x420));

	if (t84 != 385) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x421 = 37;
	static int16_t x422 = INT16_MIN;
	int32_t x423 = INT32_MIN;
	uint32_t x424 = UINT32_MAX;
	uint32_t t85 = 59518U;

	t85 = ((x421%x422)-(x423-x424));

	if (t85 != 2147483684U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x425 = 2725573200086264LLU;
	int64_t x427 = -1LL;
	int64_t x428 = INT64_MIN;
	uint64_t t86 = 859626269LLU;

	t86 = ((x425%x426)-(x427-x428));

	if (t86 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x429 = INT64_MIN;
	int8_t x431 = INT8_MAX;
	uint16_t x432 = UINT16_MAX;
	int64_t t87 = -1LL;

	t87 = ((x429%x430)-(x431-x432));

	if (t87 != 65407LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x433 = 38LLU;
	int64_t x434 = INT64_MIN;
	volatile uint64_t x435 = UINT64_MAX;
	int32_t x436 = -1;
	uint64_t t88 = 193002459LLU;

	t88 = ((x433%x434)-(x435-x436));

	if (t88 != 38LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x437 = INT64_MIN;
	int32_t x438 = INT32_MIN;
	volatile int8_t x439 = INT8_MIN;
	int16_t x440 = 98;
	static int64_t t89 = 35306LL;

	t89 = ((x437%x438)-(x439-x440));

	if (t89 != 226LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x441 = INT32_MAX;
	uint64_t x442 = 10168228LLU;
	static uint16_t x443 = 1U;
	static int64_t x444 = 7111237LL;
	volatile uint64_t t90 = 296200869394198137LLU;

	t90 = ((x441%x442)-(x443-x444));

	if (t90 != 9098775LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x446 = UINT32_MAX;
	int8_t x447 = 0;
	int64_t t91 = 3998LL;

	t91 = ((x445%x446)-(x447-x448));

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x452 = INT32_MIN;
	volatile uint32_t t92 = 909609562U;

	t92 = ((x449%x450)-(x451-x452));

	if (t92 != 2147483649U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x453 = INT16_MAX;
	int8_t x455 = 8;
	static uint32_t x456 = 1U;
	static volatile int64_t t93 = 520LL;

	t93 = ((x453%x454)-(x455-x456));

	if (t93 != 32760LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x457 = UINT16_MAX;
	int8_t x458 = INT8_MIN;
	static int16_t x459 = INT16_MIN;
	static uint32_t x460 = 650220U;

	t94 = ((x457%x458)-(x459-x460));

	if (t94 != 683115U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x462 = -1;
	volatile uint32_t x464 = UINT32_MAX;
	int64_t t95 = -889231065LL;

	t95 = ((x461%x462)-(x463-x464));

	if (t95 != -4294934529LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x469 = 4197;
	static uint64_t x470 = 7020519382762410LLU;
	int16_t x472 = INT16_MAX;
	uint64_t t96 = 1738256178331LLU;

	t96 = ((x469%x470)-(x471-x472));

	if (t96 != 36965LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x473 = INT16_MIN;
	int64_t x474 = INT64_MAX;
	int32_t x475 = 762691704;
	uint8_t x476 = 19U;
	volatile int64_t t97 = 1LL;

	t97 = ((x473%x474)-(x475-x476));

	if (t97 != -762724453LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x477 = 4435U;
	int8_t x478 = INT8_MIN;
	uint16_t x479 = 0U;
	volatile uint64_t t98 = 70LLU;

	t98 = ((x477%x478)-(x479-x480));

	if (t98 != 82LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x481 = INT8_MIN;
	static int64_t x482 = -1LL;
	volatile uint32_t x483 = UINT32_MAX;
	volatile uint32_t x484 = UINT32_MAX;

	t99 = ((x481%x482)-(x483-x484));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

