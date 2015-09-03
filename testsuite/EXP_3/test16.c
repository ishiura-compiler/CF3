#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x7 = 4569U;
int64_t x8 = INT64_MIN;
static uint64_t x14 = 286585657LLU;
uint64_t x15 = 4263198776LLU;
volatile int16_t x25 = INT16_MIN;
int8_t x33 = INT8_MAX;
static uint16_t x34 = 3U;
uint16_t x58 = UINT16_MAX;
volatile uint64_t t12 = 8491405948122LLU;
static volatile uint64_t x73 = UINT64_MAX;
int8_t x74 = 1;
int8_t x78 = -1;
uint16_t x90 = 29617U;
int8_t x93 = INT8_MIN;
int32_t x95 = 447466;
uint16_t x118 = 1911U;
int8_t x120 = -1;
uint8_t x123 = 41U;
int32_t x126 = -1;
volatile int16_t x127 = INT16_MAX;
int32_t t21 = -4;
int8_t x149 = -1;
int8_t x151 = INT8_MAX;
volatile uint8_t x152 = 116U;
int64_t x169 = 986598532836555LL;
int32_t x182 = 5092;
uint16_t x184 = 250U;
static int16_t x196 = INT16_MIN;
volatile int64_t t29 = 21424LL;
int8_t x200 = 44;
int16_t x201 = INT16_MIN;
uint8_t x212 = 14U;
uint16_t x231 = UINT16_MAX;
int64_t x251 = 6LL;
static int32_t x256 = -165842;
static uint64_t x258 = 629744891088270054LLU;
int64_t x259 = -6LL;
uint64_t x260 = 10462603450968LLU;
int16_t x271 = -1;
uint16_t x278 = 11U;
volatile uint64_t t40 = 33879339728LLU;
int64_t t41 = 2LL;
uint64_t x285 = 177LLU;
uint16_t x292 = 16457U;
int64_t x300 = 61965249LL;
uint32_t t45 = 1023U;
int16_t x333 = INT16_MIN;
volatile int32_t x334 = INT32_MIN;
static volatile uint16_t x337 = 0U;
uint32_t t47 = 39760U;
static volatile int8_t x362 = INT8_MIN;
int32_t x377 = INT32_MIN;
int16_t x380 = -16251;
int64_t x392 = -1LL;
volatile int32_t x403 = -1;
volatile uint8_t x437 = UINT8_MAX;
volatile uint16_t x438 = 957U;
uint64_t x443 = UINT64_MAX;
int8_t x444 = INT8_MIN;
volatile int8_t x461 = INT8_MAX;
volatile int64_t t64 = 1174LL;
static volatile uint32_t x469 = 14U;
int32_t x470 = 3573865;
volatile int32_t t67 = -1639;
int16_t x479 = -1;
uint64_t t68 = 62810091574LLU;
int8_t x481 = -2;
int8_t x494 = -1;
uint8_t x500 = 122U;
uint16_t x516 = 701U;
uint8_t x517 = 1U;
int32_t x519 = -8;
static int32_t x528 = -1299;
int16_t x533 = -1;
int16_t x534 = -15;
int32_t x544 = 0;
static int32_t x565 = INT32_MAX;
volatile uint16_t x574 = 0U;
uint32_t x576 = 6134091U;
uint32_t x580 = 294U;
static volatile uint32_t t86 = 30U;
int8_t x581 = INT8_MIN;
static int8_t x587 = 1;
int32_t x606 = INT32_MIN;
volatile int32_t x609 = -198;
uint32_t x610 = 2574U;
static uint32_t x611 = 1689564U;
int32_t x612 = INT32_MAX;
uint8_t x635 = 126U;
int32_t t94 = 628579708;
int8_t x638 = INT8_MIN;
int16_t x643 = 11;
int64_t x644 = 108053909085LL;
static int64_t x648 = -5071LL;
static uint64_t t98 = 4612LLU;
volatile int8_t x661 = INT8_MAX;
volatile int8_t x662 = 15;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int32_t x2 = -1;
	int32_t x3 = 258;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 401522;

	t0 = ((x1-x2)*(x3+x4));

	if (t0 != -16510) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	volatile uint32_t x6 = UINT32_MAX;
	static volatile uint64_t t1 = 459667692LLU;

	t1 = ((x5-x6)*(x7+x8));

	if (t1 != 18446724450003976192LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x13 = -1022678;
	uint8_t x16 = 86U;
	volatile uint64_t t2 = 933LLU;

	t2 = ((x13-x14)*(x15+x16));

	if (t2 != 17220612547235836846LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	volatile int32_t x18 = -41;
	static int64_t x19 = INT64_MIN;
	uint64_t x20 = UINT64_MAX;
	uint64_t t3 = 1934854409285773LLU;

	t3 = ((x17-x18)*(x19+x20));

	if (t3 != 18446744073709551320LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 2LLU;
	static volatile int8_t x22 = INT8_MIN;
	int8_t x23 = -1;
	int16_t x24 = INT16_MAX;
	volatile uint64_t t4 = 3662LLU;

	t4 = ((x21-x22)*(x23+x24));

	if (t4 != 4259580LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = 91677508397367LL;
	volatile int16_t x27 = 100;
	int8_t x28 = 13;
	int64_t t5 = -72341237502644653LL;

	t5 = ((x25-x26)*(x27+x28));

	if (t5 != -10359558452605255LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x35 = 230;
	int8_t x36 = INT8_MIN;
	volatile int32_t t6 = 31435843;

	t6 = ((x33-x34)*(x35+x36));

	if (t6 != 12648) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = INT32_MAX;
	uint64_t x38 = 144427339LLU;
	int8_t x39 = INT8_MAX;
	uint32_t x40 = 89884U;
	uint64_t t7 = 128700717LLU;

	t7 = ((x37-x38)*(x39+x40));

	if (t7 != 180297101339388LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = -6;
	int16_t x42 = -1;
	volatile int16_t x43 = INT16_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t8 = 231;

	t8 = ((x41-x42)*(x43+x44));

	if (t8 != 5) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x49 = 1323723LLU;
	static int64_t x50 = -2321837LL;
	uint16_t x51 = 24U;
	uint16_t x52 = UINT16_MAX;
	uint64_t t9 = 184048141LLU;

	t9 = ((x49-x50)*(x51+x52));

	if (t9 != 238999268040LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = INT16_MAX;
	int8_t x54 = 26;
	int8_t x55 = 50;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t10 = -265;

	t10 = ((x53-x54)*(x55+x56));

	if (t10 != 2147318485) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x57 = INT8_MIN;
	uint8_t x59 = 3U;
	int8_t x60 = 10;
	volatile int32_t t11 = 72;

	t11 = ((x57-x58)*(x59+x60));

	if (t11 != -853619) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	volatile int8_t x63 = INT8_MIN;
	uint64_t x64 = 0LLU;

	t12 = ((x61-x62)*(x63+x64));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = 32;
	uint8_t x70 = 0U;
	static int32_t x71 = 7;
	static int16_t x72 = -1;
	volatile int32_t t13 = 45;

	t13 = ((x69-x70)*(x71+x72));

	if (t13 != 192) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = -1;
	uint64_t t14 = 76LLU;

	t14 = ((x73-x74)*(x75+x76));

	if (t14 != 4LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 42U;
	uint32_t x79 = UINT32_MAX;
	uint16_t x80 = 25U;
	uint32_t t15 = 323U;

	t15 = ((x77-x78)*(x79+x80));

	if (t15 != 1032U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x89 = UINT16_MAX;
	int64_t x91 = 223426LL;
	int16_t x92 = INT16_MAX;
	static int64_t t16 = 25052840150691908LL;

	t16 = ((x89-x90)*(x91+x92));

	if (t16 != 9201940174LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x94 = INT16_MIN;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t17 = 966067LLU;

	t17 = ((x93-x94)*(x95+x96));

	if (t17 != 14605257600LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x101 = 5U;
	static int8_t x102 = -3;
	static int16_t x103 = -3;
	uint8_t x104 = 15U;
	volatile int32_t t18 = 45;

	t18 = ((x101-x102)*(x103+x104));

	if (t18 != 96) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x117 = 2;
	uint8_t x119 = 29U;
	int32_t t19 = 7824161;

	t19 = ((x117-x118)*(x119+x120));

	if (t19 != -53452) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x121 = 123U;
	volatile int16_t x122 = 1766;
	int8_t x124 = 0;
	volatile int32_t t20 = -453484;

	t20 = ((x121-x122)*(x123+x124));

	if (t20 != -67363) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = INT8_MIN;
	int32_t x128 = -1;

	t21 = ((x125-x126)*(x127+x128));

	if (t21 != -4161282) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x137 = UINT32_MAX;
	uint8_t x138 = UINT8_MAX;
	static int16_t x139 = 36;
	static uint16_t x140 = UINT16_MAX;
	uint32_t t22 = 69U;

	t22 = ((x137-x138)*(x139+x140));

	if (t22 != 4278181120U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x150 = INT8_MAX;
	volatile int32_t t23 = -189684979;

	t23 = ((x149-x150)*(x151+x152));

	if (t23 != -31104) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x161 = INT32_MAX;
	uint64_t x162 = 1051749676885608LLU;
	uint8_t x163 = 2U;
	int8_t x164 = 2;
	uint64_t t24 = 65086904LLU;

	t24 = ((x161-x162)*(x163+x164));

	if (t24 != 18442537083591943772LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x170 = 52U;
	volatile uint64_t x171 = 1743607811976673055LLU;
	int64_t x172 = 6348LL;
	volatile uint64_t t25 = 8704440982246LLU;

	t25 = ((x169-x170)*(x171+x172));

	if (t25 != 13287948517903681437LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x177 = INT8_MIN;
	volatile int64_t x178 = -1LL;
	int8_t x179 = INT8_MIN;
	volatile uint32_t x180 = UINT32_MAX;
	int64_t t26 = 1LL;

	t26 = ((x177-x178)*(x179+x180));

	if (t26 != -545460830209LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x181 = -1157970LL;
	int16_t x183 = INT16_MAX;
	volatile int64_t t27 = 1004493095944LL;

	t27 = ((x181-x182)*(x183+x184));

	if (t27 != -38400818054LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x185 = -1;
	static int16_t x186 = INT16_MIN;
	uint32_t x187 = UINT32_MAX;
	volatile int16_t x188 = -109;
	volatile uint32_t t28 = 33U;

	t28 = ((x185-x186)*(x187+x188));

	if (t28 != 4291362926U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x193 = 8U;
	int8_t x194 = -51;
	int64_t x195 = -1LL;

	t29 = ((x193-x194)*(x195+x196));

	if (t29 != -1933371LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x197 = INT8_MAX;
	int8_t x198 = -1;
	volatile uint32_t x199 = 47099U;
	uint32_t t30 = 303901U;

	t30 = ((x197-x198)*(x199+x200));

	if (t30 != 6034304U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x202 = 0;
	int16_t x203 = INT16_MAX;
	uint8_t x204 = 7U;
	int32_t t31 = -31552024;

	t31 = ((x201-x202)*(x203+x204));

	if (t31 != -1073938432) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x209 = 10113445440505478LLU;
	int16_t x210 = 432;
	static volatile uint8_t x211 = UINT8_MAX;
	uint64_t t32 = 28439LLU;

	t32 = ((x209-x210)*(x211+x212));

	if (t32 != 2720516823495857374LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x213 = 11U;
	static volatile int16_t x214 = -34;
	volatile uint16_t x215 = UINT16_MAX;
	volatile uint16_t x216 = UINT16_MAX;
	int32_t t33 = 13;

	t33 = ((x213-x214)*(x215+x216));

	if (t33 != 5898150) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x229 = 24426;
	static volatile uint16_t x230 = 72U;
	uint32_t x232 = 424833U;
	volatile uint32_t t34 = 223290275U;

	t34 = ((x229-x230)*(x231+x232));

	if (t34 != 3352487680U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x241 = 260973253037LLU;
	int64_t x242 = INT64_MIN;
	static int32_t x243 = 3;
	int32_t x244 = INT32_MIN;
	static uint64_t t35 = 984673LLU;

	t35 = ((x241-x242)*(x243+x244));

	if (t35 != 2189901568737244423LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = -1;
	volatile uint16_t x252 = UINT16_MAX;
	volatile int64_t t36 = -38884160344LL;

	t36 = ((x249-x250)*(x251+x252));

	if (t36 != -2147581947LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x253 = -51;
	uint64_t x254 = 5897006435879677LLU;
	uint8_t x255 = 94U;
	static volatile uint64_t t37 = 27751LLU;

	t37 = ((x253-x254)*(x255+x256));

	if (t37 != 18186330901296472512LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x257 = 4986U;
	volatile uint64_t t38 = 47021979930790LLU;

	t38 = ((x257-x258)*(x259+x260));

	if (t38 != 8740031154444793704LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x269 = 899523LLU;
	volatile int16_t x270 = -15;
	int32_t x272 = -747;
	uint64_t t39 = 1046961141LLU;

	t39 = ((x269-x270)*(x271+x272));

	if (t39 != 18446744073036697192LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x277 = UINT64_MAX;
	volatile int8_t x279 = 0;
	int8_t x280 = INT8_MIN;

	t40 = ((x277-x278)*(x279+x280));

	if (t40 != 1536LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x281 = INT32_MIN;
	static int64_t x282 = -1LL;
	static int64_t x283 = -1LL;
	volatile int8_t x284 = 6;

	t41 = ((x281-x282)*(x283+x284));

	if (t41 != -10737418235LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x286 = 931685974U;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = -3704;
	uint64_t t42 = 1295472174145442LLU;

	t42 = ((x285-x286)*(x287+x288));

	if (t42 != 3213384313853LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x289 = INT16_MIN;
	uint16_t x290 = 1534U;
	volatile uint64_t x291 = 13LLU;
	volatile uint64_t t43 = 76867314438627972LLU;

	t43 = ((x289-x290)*(x291+x292));

	if (t43 != 18446744073144597676LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	static int16_t x299 = INT16_MAX;
	volatile int64_t t44 = -1455292438LL;

	t44 = ((x297-x298)*(x299+x300));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x309 = INT16_MIN;
	volatile uint32_t x310 = 25831285U;
	int8_t x311 = -23;
	static uint16_t x312 = 6528U;

	t45 = ((x309-x310)*(x311+x312));

	if (t45 != 3553027075U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x335 = 805196U;
	static int16_t x336 = INT16_MIN;
	uint32_t t46 = 35U;

	t46 = ((x333-x334)*(x335+x336));

	if (t46 != 458883072U) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x338 = -849216;
	uint32_t x339 = 13751725U;
	int16_t x340 = INT16_MIN;

	t47 = ((x337-x338)*(x339+x340));

	if (t47 != 2406480960U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x345 = -1;
	static int8_t x346 = INT8_MAX;
	int16_t x347 = 38;
	volatile int8_t x348 = INT8_MIN;
	static volatile int32_t t48 = 0;

	t48 = ((x345-x346)*(x347+x348));

	if (t48 != 11520) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x349 = -8541786673LL;
	volatile int16_t x350 = -1;
	volatile int64_t x351 = -631313LL;
	static int16_t x352 = INT16_MAX;
	int64_t t49 = 16054134750LL;

	t49 = ((x349-x350)*(x351+x352));

	if (t49 != 5112652245378912LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x361 = -1;
	uint32_t x363 = 152512879U;
	static volatile int8_t x364 = 36;
	volatile uint32_t t50 = 1080311U;

	t50 = ((x361-x362)*(x363+x364));

	if (t50 != 2189271021U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x365 = -3;
	static uint64_t x366 = UINT64_MAX;
	uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 27042U;
	volatile uint64_t t51 = 61802LLU;

	t51 = ((x365-x366)*(x367+x368));

	if (t51 != 18446744073709497534LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x373 = UINT32_MAX;
	static int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MAX;
	uint16_t x376 = 14050U;
	volatile uint32_t t52 = 1U;

	t52 = ((x373-x374)*(x375+x376));

	if (t52 != 5945759U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x378 = INT32_MIN;
	int32_t x379 = -1;
	int32_t t53 = -1;

	t53 = ((x377-x378)*(x379+x380));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x389 = INT8_MIN;
	int16_t x390 = -1;
	uint64_t x391 = 4234698307LLU;
	volatile uint64_t t54 = 13LLU;

	t54 = ((x389-x390)*(x391+x392));

	if (t54 != 18446743535902866754LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = INT32_MAX;
	static int8_t x399 = INT8_MIN;
	uint64_t x400 = 616LLU;
	static volatile uint64_t t55 = 12LLU;

	t55 = ((x397-x398)*(x399+x400));

	if (t55 != 18446743025769512960LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x401 = UINT64_MAX;
	int32_t x402 = -1;
	static volatile int8_t x404 = -1;
	volatile uint64_t t56 = 18434096573872LLU;

	t56 = ((x401-x402)*(x403+x404));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x409 = 0;
	int8_t x410 = -1;
	int64_t x411 = INT64_MAX;
	int16_t x412 = INT16_MIN;
	int64_t t57 = -778522296LL;

	t57 = ((x409-x410)*(x411+x412));

	if (t57 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x413 = INT16_MIN;
	int8_t x414 = 1;
	int16_t x415 = -1;
	int32_t x416 = 1;
	static volatile int32_t t58 = -13139;

	t58 = ((x413-x414)*(x415+x416));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x417 = 667821185008LLU;
	uint32_t x418 = UINT32_MAX;
	uint16_t x419 = 99U;
	int64_t x420 = 75102407753LL;
	volatile uint64_t t59 = 45830363617718LLU;

	t59 = ((x417-x418)*(x419+x420));

	if (t59 != 7760880087173767660LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x421 = INT8_MIN;
	uint32_t x422 = 1635993U;
	volatile int16_t x423 = INT16_MAX;
	int32_t x424 = -1;
	static uint32_t t60 = 37204U;

	t60 = ((x421-x422)*(x423+x424));

	if (t60 != 2225434162U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x439 = 0U;
	volatile uint8_t x440 = 101U;
	static int32_t t61 = 18944;

	t61 = ((x437-x438)*(x439+x440));

	if (t61 != -70902) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x441 = 0U;
	int64_t x442 = INT64_MAX;
	static volatile uint64_t t62 = 310753LLU;

	t62 = ((x441-x442)*(x443+x444));

	if (t62 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x445 = -22;
	static int8_t x446 = INT8_MIN;
	static int32_t x447 = -788;
	uint8_t x448 = UINT8_MAX;
	int32_t t63 = -125202;

	t63 = ((x445-x446)*(x447+x448));

	if (t63 != -56498) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x462 = -1;
	int16_t x463 = 0;
	int64_t x464 = 450255413288300LL;

	t64 = ((x461-x462)*(x463+x464));

	if (t64 != 57632692900902400LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x465 = -14720;
	int16_t x466 = INT16_MIN;
	uint32_t x467 = 59142U;
	static int16_t x468 = 586;
	uint32_t t65 = 12U;

	t65 = ((x465-x466)*(x467+x468));

	if (t65 != 1077970944U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x471 = -1;
	static volatile uint64_t x472 = 652230867LLU;
	volatile uint64_t t66 = 8LLU;

	t66 = ((x469-x470)*(x471+x472));

	if (t66 != 2798979262979073370LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x473 = 7U;
	uint8_t x474 = UINT8_MAX;
	int32_t x475 = -1;
	int32_t x476 = -532280;

	t67 = ((x473-x474)*(x475+x476));

	if (t67 != 132005688) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x477 = -2646;
	uint64_t x478 = UINT64_MAX;
	volatile int16_t x480 = INT16_MIN;

	t68 = ((x477-x478)*(x479+x480));

	if (t68 != 86674005LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x482 = INT16_MIN;
	int8_t x483 = INT8_MIN;
	volatile uint32_t x484 = UINT32_MAX;
	uint32_t t69 = 424257918U;

	t69 = ((x481-x482)*(x483+x484));

	if (t69 != 4290740482U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x485 = 9U;
	int8_t x486 = 6;
	volatile int8_t x487 = INT8_MIN;
	int32_t x488 = -1;
	volatile int32_t t70 = 55259863;

	t70 = ((x485-x486)*(x487+x488));

	if (t70 != -387) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x489 = INT16_MIN;
	static int32_t x490 = -604;
	uint32_t x491 = 963738U;
	int64_t x492 = -28816412790LL;
	int64_t t71 = -313184510137769439LL;

	t71 = ((x489-x490)*(x491+x492));

	if (t71 != 926820103308528LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x493 = INT64_MIN;
	int64_t x495 = INT64_MAX;
	int64_t x496 = INT64_MIN;
	volatile int64_t t72 = INT64_MAX;

	t72 = ((x493-x494)*(x495+x496));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x497 = INT8_MAX;
	static int16_t x498 = INT16_MIN;
	static int8_t x499 = INT8_MIN;
	int32_t t73 = 2161;

	t73 = ((x497-x498)*(x499+x500));

	if (t73 != -197370) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x509 = 1053LL;
	uint32_t x510 = 26U;
	static int8_t x511 = INT8_MIN;
	volatile int16_t x512 = 3;
	volatile int64_t t74 = 277390821144228LL;

	t74 = ((x509-x510)*(x511+x512));

	if (t74 != -128375LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x513 = -2;
	int8_t x514 = INT8_MIN;
	uint64_t x515 = 2282323067350LLU;
	uint64_t t75 = 957560799845889366LLU;

	t75 = ((x513-x514)*(x515+x516));

	if (t75 != 287572706574426LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x518 = INT8_MIN;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t76 = -631758462;

	t76 = ((x517-x518)*(x519+x520));

	if (t76 != 8452983) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x521 = -27LL;
	volatile int16_t x522 = INT16_MIN;
	uint64_t x523 = 3250773LLU;
	static volatile uint8_t x524 = UINT8_MAX;
	uint64_t t77 = 6212519289446LLU;

	t77 = ((x521-x522)*(x523+x524));

	if (t77 != 106441907748LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x525 = INT8_MIN;
	static volatile int8_t x526 = INT8_MAX;
	static int64_t x527 = -1LL;
	int64_t t78 = -45778754LL;

	t78 = ((x525-x526)*(x527+x528));

	if (t78 != 331500LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x535 = INT16_MIN;
	uint64_t x536 = 1978930LLU;
	uint64_t t79 = 2471757LLU;

	t79 = ((x533-x534)*(x535+x536));

	if (t79 != 27246268LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x537 = INT16_MIN;
	volatile uint64_t x538 = 15139412322LLU;
	static uint16_t x539 = UINT16_MAX;
	static uint64_t x540 = UINT64_MAX;
	uint64_t t80 = 182007686434611LLU;

	t80 = ((x537-x538)*(x539+x540));

	if (t80 != 18445751925315023556LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x541 = -1LL;
	int32_t x542 = -1;
	uint16_t x543 = UINT16_MAX;
	static int64_t t81 = -2388314430394216070LL;

	t81 = ((x541-x542)*(x543+x544));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x561 = -1;
	volatile int32_t x562 = -1;
	int64_t x563 = -1LL;
	int16_t x564 = -24;
	static volatile int64_t t82 = 89417LL;

	t82 = ((x561-x562)*(x563+x564));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x566 = 5908634622998572LLU;
	static int16_t x567 = 9;
	static int8_t x568 = 10;
	static volatile uint64_t t83 = 66897LLU;

	t83 = ((x565-x566)*(x567+x568));

	if (t83 != 18334480056674768041LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x569 = INT32_MIN;
	int8_t x570 = -1;
	uint64_t x571 = 217919849599LLU;
	volatile int16_t x572 = INT16_MIN;
	uint64_t t84 = 510516351LLU;

	t84 = ((x569-x570)*(x571+x572));

	if (t84 != 11636102914640479359LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x573 = 38;
	static int8_t x575 = INT8_MIN;
	volatile uint32_t t85 = 234799792U;

	t85 = ((x573-x574)*(x575+x576));

	if (t85 != 233090594U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x577 = -4;
	int16_t x578 = INT16_MAX;
	int8_t x579 = INT8_MIN;

	t86 = ((x577-x578)*(x579+x580));

	if (t86 != 4289527310U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x582 = 649772390LLU;
	int16_t x583 = INT16_MAX;
	int16_t x584 = INT16_MIN;
	volatile uint64_t t87 = 64851708462LLU;

	t87 = ((x581-x582)*(x583+x584));

	if (t87 != 649772518LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x585 = -1723;
	static volatile int32_t x586 = 4;
	static uint64_t x588 = UINT64_MAX;
	volatile uint64_t t88 = 84461112249352447LLU;

	t88 = ((x585-x586)*(x587+x588));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x593 = -2;
	int16_t x594 = -7648;
	static uint32_t x595 = 1334986U;
	volatile uint8_t x596 = 8U;
	volatile uint32_t t89 = 39277U;

	t89 = ((x593-x594)*(x595+x596));

	if (t89 != 1617429532U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x605 = 124619658U;
	uint64_t x607 = 68LLU;
	volatile uint64_t x608 = 3375585994576201LLU;
	static volatile uint64_t t90 = 6361651902LLU;

	t90 = ((x605-x606)*(x607+x608));

	if (t90 != 3527461523750454530LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t t91 = 2117U;

	t91 = ((x609-x610)*(x611+x612));

	if (t91 != 3906465956U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x621 = UINT8_MAX;
	int64_t x622 = -123LL;
	static int16_t x623 = INT16_MAX;
	uint32_t x624 = UINT32_MAX;
	int64_t t92 = -53790974LL;

	t92 = ((x621-x622)*(x623+x624));

	if (t92 != 12385548LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x629 = -424;
	int32_t x630 = -1300;
	volatile uint8_t x631 = 51U;
	int16_t x632 = INT16_MAX;
	int32_t t93 = -39467057;

	t93 = ((x629-x630)*(x631+x632));

	if (t93 != 28748568) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x633 = UINT16_MAX;
	int16_t x634 = -1;
	volatile int16_t x636 = -1;

	t94 = ((x633-x634)*(x635+x636));

	if (t94 != 8192000) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x637 = UINT16_MAX;
	static uint8_t x639 = 26U;
	int32_t x640 = -2;
	volatile int32_t t95 = 0;

	t95 = ((x637-x638)*(x639+x640));

	if (t95 != 1575912) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x641 = INT16_MIN;
	static int16_t x642 = INT16_MAX;
	volatile int64_t t96 = 328LL;

	t96 = ((x641-x642)*(x643+x644));

	if (t96 != -7081312932606360LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x645 = -6826;
	volatile uint8_t x646 = UINT8_MAX;
	int16_t x647 = -1;
	static int64_t t97 = 118173891926855262LL;

	t97 = ((x645-x646)*(x647+x648));

	if (t97 != 35914832LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x657 = INT64_MIN;
	uint64_t x658 = UINT64_MAX;
	int32_t x659 = INT32_MIN;
	int8_t x660 = INT8_MAX;

	t98 = ((x657-x658)*(x659+x660));

	if (t98 != 9223372034707292287LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x663 = UINT32_MAX;
	static int32_t x664 = INT32_MIN;
	uint32_t t99 = 1445699170U;

	t99 = ((x661-x662)*(x663+x664));

	if (t99 != 4294967184U) { NG(); } else { ; }
	
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

