#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = -23407164LL;
volatile int16_t x12 = -1;
int64_t x13 = INT64_MIN;
int64_t x16 = INT64_MIN;
uint16_t x26 = UINT16_MAX;
static uint64_t x43 = 196LLU;
static uint16_t x46 = 770U;
static volatile uint8_t x48 = 7U;
uint64_t x49 = 136016LLU;
int16_t x54 = INT16_MIN;
int16_t x59 = INT16_MIN;
int16_t x63 = INT16_MIN;
uint8_t x72 = 119U;
uint32_t t13 = 101115U;
uint64_t x85 = 14LLU;
volatile uint8_t x86 = 3U;
static int32_t x88 = 39;
int16_t x99 = 1844;
int16_t x101 = INT16_MAX;
static uint8_t x111 = 31U;
int32_t x119 = 11272521;
volatile uint64_t t18 = 1LLU;
int16_t x123 = INT16_MIN;
volatile int64_t x124 = -2152352571032068975LL;
static int64_t x131 = INT64_MIN;
int64_t t23 = -468286163134LL;
static int32_t x159 = INT32_MIN;
volatile int64_t t25 = -1863876090LL;
static int32_t x161 = 15053816;
uint32_t x163 = 677U;
int32_t x173 = -8909205;
volatile int8_t x204 = -1;
int16_t x212 = -12326;
volatile int32_t t35 = 965458043;
volatile uint32_t x216 = UINT32_MAX;
static int32_t x226 = INT32_MIN;
volatile uint64_t x228 = UINT64_MAX;
volatile int32_t x233 = -22;
uint32_t x237 = 43811U;
static volatile uint8_t x242 = 19U;
int32_t t43 = 140845;
uint8_t x261 = 5U;
volatile int64_t t46 = 1LL;
static uint16_t x265 = UINT16_MAX;
volatile int32_t t47 = 37;
uint64_t x271 = 2393720355606945LLU;
int64_t t49 = 88392100238302938LL;
volatile uint16_t x297 = UINT16_MAX;
uint64_t x301 = 27322922677080346LLU;
volatile int32_t x303 = -1;
uint32_t x314 = UINT32_MAX;
int8_t x315 = -1;
int64_t x321 = INT64_MIN;
volatile int8_t x323 = INT8_MIN;
static uint64_t x332 = UINT64_MAX;
int16_t x340 = INT16_MIN;
static uint64_t t62 = 688LLU;
static int16_t x346 = -25;
uint32_t x353 = UINT32_MAX;
int32_t x357 = -1;
uint64_t x358 = 479228745413349LLU;
volatile uint64_t x359 = UINT64_MAX;
static uint64_t x361 = UINT64_MAX;
uint16_t x368 = 111U;
int64_t x378 = INT64_MIN;
volatile int32_t x379 = INT32_MAX;
volatile int16_t x381 = INT16_MIN;
uint64_t x382 = 7325LLU;
int8_t x386 = 32;
int16_t x388 = -15902;
int64_t x389 = INT64_MIN;
volatile uint64_t t73 = 7LLU;
uint32_t x397 = UINT32_MAX;
int16_t x400 = -25;
int16_t x413 = 40;
static int16_t x422 = 222;
static volatile uint8_t x425 = UINT8_MAX;
volatile uint64_t t79 = 2LLU;
static uint64_t x430 = UINT64_MAX;
uint32_t x431 = 1U;
int32_t x432 = INT32_MAX;
volatile int64_t x434 = 75283780LL;
int16_t x435 = INT16_MAX;
volatile uint32_t x439 = UINT32_MAX;
static uint16_t x444 = 15823U;
int8_t x445 = -3;
int64_t x457 = -163810822913LL;
volatile uint16_t x459 = 17030U;
volatile uint32_t x461 = UINT32_MAX;
int16_t x467 = -1;
static int16_t x468 = INT16_MIN;
volatile int16_t x469 = -10;
int8_t x473 = -1;
int8_t x480 = INT8_MIN;
volatile int32_t t91 = -120616013;
int64_t x481 = 19684382913LL;
int64_t x485 = -49066564LL;
static int32_t x487 = INT32_MIN;
int64_t x489 = -1LL;
volatile int64_t t95 = 130016552LL;
uint16_t x504 = 12U;
int32_t x507 = -1;
uint8_t x509 = UINT8_MAX;
int32_t x511 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint8_t x2 = 2U;
	int64_t x3 = -1LL;
	int64_t x4 = 61221LL;

	t0 = (x1%((x2+x3)+x4));

	if (t0 != 32767LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	static volatile uint32_t x10 = 1902U;
	int8_t x11 = INT8_MIN;
	static uint64_t t1 = 3127LLU;

	t1 = (x9%((x10+x11)+x12));

	if (t1 != 60LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = -1;
	static uint64_t x15 = 63652951956810LLU;
	uint64_t t2 = 6951260895LLU;

	t2 = (x13%((x14+x15)+x16));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	uint64_t x22 = 23936649753136565LLU;
	static volatile int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MAX;
	static volatile uint64_t t3 = 5432804868759LLU;

	t3 = (x21%((x22+x23)+x24));

	if (t3 != 255LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x25 = UINT32_MAX;
	int16_t x27 = INT16_MIN;
	int16_t x28 = -1;
	volatile uint32_t t4 = 12U;

	t4 = (x25%((x26+x27)+x28));

	if (t4 != 15U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MAX;
	int16_t x39 = -1;
	uint64_t x40 = 5754LLU;
	uint64_t t5 = 52315327LLU;

	t5 = (x37%((x38+x39)+x40));

	if (t5 != 2408LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x41 = INT8_MAX;
	int8_t x42 = INT8_MIN;
	volatile int32_t x44 = INT32_MAX;
	uint64_t t6 = 1109824535837LLU;

	t6 = (x41%((x42+x43)+x44));

	if (t6 != 127LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 414535LLU;
	int32_t x47 = INT32_MIN;
	static volatile uint64_t t7 = 1LLU;

	t7 = (x45%((x46+x47)+x48));

	if (t7 != 414535LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x50 = UINT16_MAX;
	int16_t x51 = INT16_MIN;
	static uint32_t x52 = UINT32_MAX;
	volatile uint64_t t8 = 69068687075420676LLU;

	t8 = (x49%((x50+x51)+x52));

	if (t8 != 4952LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = -1;
	uint64_t t9 = 252518LLU;

	t9 = (x53%((x54+x55)+x56));

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	int16_t x58 = 416;
	int16_t x60 = 14;
	volatile int32_t t10 = 107;

	t10 = (x57%((x58+x59)+x60));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x61 = UINT32_MAX;
	int64_t x62 = -8097178988LL;
	static int8_t x64 = 52;
	int64_t t11 = -15655970930LL;

	t11 = (x61%((x62+x63)+x64));

	if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int32_t x70 = 35037338;
	int64_t x71 = -376191586043LL;
	static volatile int64_t t12 = -44844623927686937LL;

	t12 = (x69%((x70+x71)+x72));

	if (t12 != 65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x77 = -8;
	static uint32_t x78 = UINT32_MAX;
	uint16_t x79 = 146U;
	static uint16_t x80 = 1481U;

	t13 = (x77%((x78+x79)+x80));

	if (t13 != 482U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x87 = -1LL;
	volatile uint64_t t14 = 12220031871LLU;

	t14 = (x85%((x86+x87)+x88));

	if (t14 != 14LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = INT16_MAX;
	uint64_t x98 = 1223LLU;
	int16_t x100 = -1;
	volatile uint64_t t15 = 15070LLU;

	t15 = (x97%((x98+x99)+x100));

	if (t15 != 2107LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x102 = -1;
	int8_t x103 = 1;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t16 = 16038;

	t16 = (x101%((x102+x103)+x104));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x109 = INT64_MIN;
	volatile uint16_t x110 = 18U;
	static uint32_t x112 = 5233U;
	int64_t t17 = -1691879LL;

	t17 = (x109%((x110+x111)+x112));

	if (t17 != -3134LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x117 = 1U;
	uint64_t x118 = 195670194555174LLU;
	uint64_t x120 = 5910198LLU;

	t18 = (x117%((x118+x119)+x120));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x121 = -494705045;
	int64_t x122 = INT64_MAX;
	int64_t t19 = 485372190LL;

	t19 = (x121%((x122+x123)+x124));

	if (t19 != -494705045LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = 6;
	int8_t x127 = 55;
	volatile int16_t x128 = INT16_MIN;
	int32_t t20 = -4437;

	t20 = (x125%((x126+x127)+x128));

	if (t20 != -7442) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x129 = -1LL;
	uint64_t x130 = UINT64_MAX;
	int16_t x132 = INT16_MAX;
	uint64_t t21 = 31216796357539985LLU;

	t21 = (x129%((x130+x131)+x132));

	if (t21 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x133 = 4491993346374340LLU;
	int16_t x134 = -6;
	uint64_t x135 = 13170725926281723LLU;
	int64_t x136 = -8LL;
	volatile uint64_t t22 = 2054500LLU;

	t22 = (x133%((x134+x135)+x136));

	if (t22 != 4491993346374340LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x145 = 120U;
	int16_t x146 = INT16_MIN;
	int64_t x147 = -1LL;
	volatile int8_t x148 = INT8_MAX;

	t23 = (x145%((x146+x147)+x148));

	if (t23 != 120LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x149 = INT16_MAX;
	int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MIN;
	static volatile int16_t x152 = -1;
	int32_t t24 = 187;

	t24 = (x149%((x150+x151)+x152));

	if (t24 != 128) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x157 = 15U;
	uint8_t x158 = UINT8_MAX;
	static volatile int64_t x160 = -1476343LL;

	t25 = (x157%((x158+x159)+x160));

	if (t25 != 15LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x162 = 823823;
	uint8_t x164 = 2U;
	static uint32_t t26 = 5150U;

	t26 = (x161%((x162+x163)+x164));

	if (t26 != 212780U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x169 = INT8_MAX;
	uint64_t x170 = 87538672197LLU;
	int32_t x171 = -1;
	int64_t x172 = INT64_MIN;
	uint64_t t27 = 46427580554LLU;

	t27 = (x169%((x170+x171)+x172));

	if (t27 != 127LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MAX;
	static uint8_t x176 = UINT8_MAX;
	int32_t t28 = -54;

	t28 = (x173%((x174+x175)+x176));

	if (t28 != -3055) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x177 = INT8_MIN;
	volatile int32_t x178 = -1;
	int8_t x179 = INT8_MAX;
	volatile int8_t x180 = INT8_MAX;
	static int32_t t29 = 2996;

	t29 = (x177%((x178+x179)+x180));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x185 = 0U;
	static uint16_t x186 = UINT16_MAX;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = 17782LL;
	int64_t t30 = 32418997000333LL;

	t30 = (x185%((x186+x187)+x188));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x189 = 11811973541817LLU;
	int32_t x190 = -3;
	static int16_t x191 = INT16_MAX;
	static int64_t x192 = 889LL;
	uint64_t t31 = 1875890LLU;

	t31 = (x189%((x190+x191)+x192));

	if (t31 != 21624LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x193 = -1;
	int32_t x194 = INT32_MIN;
	volatile uint64_t x195 = 11LLU;
	int16_t x196 = -374;
	uint64_t t32 = 111925801005LLU;

	t32 = (x193%((x194+x195)+x196));

	if (t32 != 2147484010LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x197 = -1;
	static int16_t x198 = 0;
	volatile int8_t x199 = INT8_MAX;
	int16_t x200 = -1;
	int32_t t33 = 4572;

	t33 = (x197%((x198+x199)+x200));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x201 = UINT16_MAX;
	volatile int8_t x202 = -9;
	volatile int16_t x203 = INT16_MAX;
	int32_t t34 = -7307384;

	t34 = (x201%((x202+x203)+x204));

	if (t34 != 21) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x209 = 14331920;
	int16_t x210 = INT16_MIN;
	static uint16_t x211 = 15901U;

	t35 = (x209%((x210+x211)+x212));

	if (t35 != 27350) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x213 = INT16_MAX;
	static uint64_t x214 = 210150372458686LLU;
	static int32_t x215 = INT32_MAX;
	volatile uint64_t t36 = 2212046737LLU;

	t36 = (x213%((x214+x215)+x216));

	if (t36 != 32767LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x217 = 943U;
	volatile uint8_t x218 = UINT8_MAX;
	int64_t x219 = -1LL;
	int64_t x220 = 1469704843566405945LL;
	static volatile int64_t t37 = 549571703053LL;

	t37 = (x217%((x218+x219)+x220));

	if (t37 != 943LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x221 = -4;
	int32_t x222 = -113770005;
	int64_t x223 = -1LL;
	static volatile uint64_t x224 = 51210976523320LLU;
	static uint64_t t38 = 590LLU;

	t38 = (x221%((x222+x223)+x224));

	if (t38 != 27990475562358LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x225 = INT32_MIN;
	int64_t x227 = -1LL;
	uint64_t t39 = 43673276643LLU;

	t39 = (x225%((x226+x227)+x228));

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x229 = 4077;
	int64_t x230 = -91169564218LL;
	uint16_t x231 = 407U;
	volatile int8_t x232 = INT8_MIN;
	static volatile int64_t t40 = 1764LL;

	t40 = (x229%((x230+x231)+x232));

	if (t40 != 4077LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x234 = 8U;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t41 = 936364676791LLU;

	t41 = (x233%((x234+x235)+x236));

	if (t41 != 99LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x238 = INT16_MIN;
	volatile int16_t x239 = 5885;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t42 = 829457LLU;

	t42 = (x237%((x238+x239)+x240));

	if (t42 != 43811LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x241 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	static int8_t x244 = INT8_MIN;

	t43 = (x241%((x242+x243)+x244));

	if (t43 != -23762) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x245 = 65359;
	uint16_t x246 = 119U;
	int16_t x247 = -30;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t44 = -1789;

	t44 = (x245%((x246+x247)+x248));

	if (t44 != 65359) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x249 = INT64_MIN;
	int32_t x250 = -49;
	volatile int64_t x251 = INT64_MAX;
	static int16_t x252 = -1;
	int64_t t45 = 100444423484627LL;

	t45 = (x249%((x250+x251)+x252));

	if (t45 != -51LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x262 = -1;
	int16_t x263 = INT16_MIN;
	static int64_t x264 = -1LL;

	t46 = (x261%((x262+x263)+x264));

	if (t46 != 5LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	int16_t x268 = 0;

	t47 = (x265%((x266+x267)+x268));

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 5850418379055940447LLU;
	static int16_t x272 = INT16_MAX;
	uint64_t t48 = 939309670LLU;

	t48 = (x269%((x270+x271)+x272));

	if (t48 != 65535LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x277 = -1;
	volatile int32_t x278 = -1;
	int16_t x279 = INT16_MAX;
	int64_t x280 = -522662852LL;

	t49 = (x277%((x278+x279)+x280));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x281 = UINT32_MAX;
	uint32_t x282 = 15668790U;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = 208U;
	volatile int64_t t50 = -41247232873922LL;

	t50 = (x281%((x282+x283)+x284));

	if (t50 != 4294967295LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x285 = 36786U;
	uint8_t x286 = 90U;
	uint64_t x287 = 6794570489LLU;
	static uint64_t x288 = UINT64_MAX;
	uint64_t t51 = 6LLU;

	t51 = (x285%((x286+x287)+x288));

	if (t51 != 36786LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x293 = INT8_MIN;
	uint8_t x294 = 7U;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MAX;
	volatile uint64_t t52 = 1LLU;

	t52 = (x293%((x294+x295)+x296));

	if (t52 != 2147483625LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x298 = -1LL;
	int64_t x299 = 1LL;
	uint16_t x300 = UINT16_MAX;
	int64_t t53 = 4129182208857LL;

	t53 = (x297%((x298+x299)+x300));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x302 = UINT32_MAX;
	uint16_t x304 = 28U;
	uint64_t t54 = 20211LLU;

	t54 = (x301%((x302+x303)+x304));

	if (t54 != 4LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x305 = 3633;
	static volatile int8_t x306 = -1;
	volatile int64_t x307 = 340163LL;
	int8_t x308 = INT8_MIN;
	int64_t t55 = -135322904LL;

	t55 = (x305%((x306+x307)+x308));

	if (t55 != 3633LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x309 = -1;
	int16_t x310 = -1;
	uint8_t x311 = 4U;
	volatile int64_t x312 = -53781LL;
	int64_t t56 = 639401LL;

	t56 = (x309%((x310+x311)+x312));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x313 = INT16_MAX;
	static uint32_t x316 = 25U;
	static uint32_t t57 = 83U;

	t57 = (x313%((x314+x315)+x316));

	if (t57 != 15U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x322 = -1;
	int64_t x324 = -1LL;
	volatile int64_t t58 = 44535057874LL;

	t58 = (x321%((x322+x323)+x324));

	if (t58 != -8LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	volatile uint64_t x327 = 394035712LLU;
	volatile int64_t x328 = 44106250LL;
	static volatile uint64_t t59 = 549396291378704LLU;

	t59 = (x325%((x326+x327)+x328));

	if (t59 != 2948889310LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x329 = -1;
	int64_t x330 = -1LL;
	uint8_t x331 = 118U;
	static volatile uint64_t t60 = 15908029880346588LLU;

	t60 = (x329%((x330+x331)+x332));

	if (t60 != 23LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x333 = UINT16_MAX;
	static int32_t x334 = -1;
	volatile int32_t x335 = -1;
	int16_t x336 = -150;
	static int32_t t61 = -1;

	t61 = (x333%((x334+x335)+x336));

	if (t61 != 23) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x337 = UINT16_MAX;
	uint64_t x338 = 346610LLU;
	volatile int32_t x339 = INT32_MIN;

	t62 = (x337%((x338+x339)+x340));

	if (t62 != 65535LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x345 = -1LL;
	int32_t x347 = INT32_MAX;
	int16_t x348 = -1;
	int64_t t63 = -15485550075LL;

	t63 = (x345%((x346+x347)+x348));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x349 = 1407U;
	uint8_t x350 = 27U;
	int64_t x351 = -8668494525LL;
	static int8_t x352 = INT8_MAX;
	static int64_t t64 = -177752212LL;

	t64 = (x349%((x350+x351)+x352));

	if (t64 != 1407LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x354 = UINT16_MAX;
	volatile int32_t x355 = INT32_MIN;
	int32_t x356 = 5;
	static uint32_t t65 = 2253390U;

	t65 = (x353%((x354+x355)+x356));

	if (t65 != 2147418107U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x360 = INT64_MIN;
	volatile uint64_t t66 = 9837298394LLU;

	t66 = (x357%((x358+x359)+x360));

	if (t66 != 9222892808109362459LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x362 = -1;
	int16_t x363 = INT16_MIN;
	volatile uint16_t x364 = 99U;
	uint64_t t67 = 2571980218899066560LLU;

	t67 = (x361%((x362+x363)+x364));

	if (t67 != 32669LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x365 = UINT32_MAX;
	uint8_t x366 = 5U;
	uint32_t x367 = UINT32_MAX;
	uint32_t t68 = 1836835U;

	t68 = (x365%((x366+x367)+x368));

	if (t68 != 80U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x369 = 10U;
	uint64_t x370 = 446223759213LLU;
	volatile int64_t x371 = -423863LL;
	volatile int16_t x372 = INT16_MAX;
	uint64_t t69 = 246633LLU;

	t69 = (x369%((x370+x371)+x372));

	if (t69 != 10LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x377 = 26;
	int64_t x380 = -1LL;
	volatile int64_t t70 = -199897LL;

	t70 = (x377%((x378+x379)+x380));

	if (t70 != 26LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x383 = INT32_MIN;
	uint64_t x384 = 267929201LLU;
	volatile uint64_t t71 = 507665116914417551LLU;

	t71 = (x381%((x382+x383)+x384));

	if (t71 != 1879514354LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int8_t x387 = INT8_MIN;
	int32_t t72 = -50904;

	t72 = (x385%((x386+x387)+x388));

	if (t72 != 1543) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x390 = INT16_MAX;
	volatile int16_t x391 = 1;
	uint64_t x392 = 1367710LLU;

	t73 = (x389%((x390+x391)+x392));

	if (t73 != 577370LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x398 = 6062956856LLU;
	int8_t x399 = INT8_MIN;
	uint64_t t74 = 164503842088858LLU;

	t74 = (x397%((x398+x399)+x400));

	if (t74 != 4294967295LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x401 = 6505842U;
	int32_t x402 = INT32_MIN;
	volatile int32_t x403 = INT32_MAX;
	volatile int32_t x404 = INT32_MAX;
	volatile uint32_t t75 = 2U;

	t75 = (x401%((x402+x403)+x404));

	if (t75 != 6505842U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x414 = 38U;
	volatile uint32_t x415 = UINT32_MAX;
	static int16_t x416 = 1;
	volatile uint32_t t76 = 22U;

	t76 = (x413%((x414+x415)+x416));

	if (t76 != 2U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x417 = INT16_MIN;
	static uint16_t x418 = UINT16_MAX;
	int32_t x419 = -1;
	int16_t x420 = INT16_MIN;
	static int32_t t77 = 13;

	t77 = (x417%((x418+x419)+x420));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x421 = 0;
	int64_t x423 = -1LL;
	uint64_t x424 = UINT64_MAX;
	static uint64_t t78 = 53LLU;

	t78 = (x421%((x422+x423)+x424));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x426 = UINT64_MAX;
	int64_t x427 = INT64_MAX;
	int16_t x428 = INT16_MIN;

	t79 = (x425%((x426+x427)+x428));

	if (t79 != 255LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x429 = 14LLU;
	volatile uint64_t t80 = 8251166LLU;

	t80 = (x429%((x430+x431)+x432));

	if (t80 != 14LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x433 = INT32_MIN;
	int32_t x436 = -7784958;
	int64_t t81 = -1325161947506LL;

	t81 = (x433%((x434+x435)+x436));

	if (t81 != -54004389LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x437 = INT32_MIN;
	uint64_t x438 = 2578545716LLU;
	uint32_t x440 = UINT32_MAX;
	volatile uint64_t t82 = 261797415670LLU;

	t82 = (x437%((x438+x439)+x440));

	if (t82 != 945742536LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x441 = 6326253066031420LLU;
	int8_t x442 = -1;
	int8_t x443 = -1;
	volatile uint64_t t83 = 2655991944960592LLU;

	t83 = (x441%((x442+x443)+x444));

	if (t83 != 834LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x446 = INT32_MIN;
	int16_t x447 = INT16_MAX;
	int32_t x448 = INT32_MAX;
	volatile int32_t t84 = 85253193;

	t84 = (x445%((x446+x447)+x448));

	if (t84 != -3) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x453 = -1LL;
	volatile int16_t x454 = INT16_MIN;
	int64_t x455 = INT64_MAX;
	int32_t x456 = INT32_MIN;
	volatile int64_t t85 = -30280LL;

	t85 = (x453%((x454+x455)+x456));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x458 = 7LLU;
	volatile uint8_t x460 = 1U;
	volatile uint64_t t86 = 2129612400860165LLU;

	t86 = (x457%((x458+x459)+x460));

	if (t86 != 6663LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x462 = INT8_MAX;
	uint16_t x463 = 24345U;
	int16_t x464 = INT16_MAX;
	uint32_t t87 = 959U;

	t87 = (x461%((x462+x463)+x464));

	if (t87 != 38930U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x465 = 1;
	int64_t x466 = -1LL;
	static int64_t t88 = -741785796LL;

	t88 = (x465%((x466+x467)+x468));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x470 = UINT32_MAX;
	uint32_t x471 = 85U;
	int8_t x472 = -21;
	static volatile uint32_t t89 = 300U;

	t89 = (x469%((x470+x471)+x472));

	if (t89 != 57U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x474 = 3418198438LLU;
	static int32_t x475 = -120;
	uint8_t x476 = 2U;
	uint64_t t90 = 1705LLU;

	t90 = (x473%((x474+x475)+x476));

	if (t90 != 920652255LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x477 = UINT16_MAX;
	uint16_t x478 = 209U;
	uint16_t x479 = 518U;

	t91 = (x477%((x478+x479)+x480));

	if (t91 != 244) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x482 = INT32_MIN;
	uint64_t x483 = 11743LLU;
	int16_t x484 = INT16_MIN;
	uint64_t t92 = 38536172877383394LLU;

	t92 = (x481%((x482+x483)+x484));

	if (t92 != 19684382913LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x486 = UINT8_MAX;
	int16_t x488 = -1;
	volatile int64_t t93 = -187006LL;

	t93 = (x485%((x486+x487)+x488));

	if (t93 != -49066564LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x490 = UINT16_MAX;
	uint8_t x491 = 3U;
	uint64_t x492 = 7491151329LLU;
	volatile uint64_t t94 = 815309662LLU;

	t94 = (x489%((x490+x491)+x492));

	if (t94 != 6157546011LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x493 = 0U;
	uint16_t x494 = 181U;
	uint16_t x495 = 558U;
	int64_t x496 = INT64_MIN;

	t95 = (x493%((x494+x495)+x496));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x497 = INT16_MIN;
	int64_t x498 = 36163666472100628LL;
	int64_t x499 = -1LL;
	static int32_t x500 = INT32_MIN;
	int64_t t96 = 103608353845480LL;

	t96 = (x497%((x498+x499)+x500));

	if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x501 = -1LL;
	int8_t x502 = INT8_MIN;
	volatile uint16_t x503 = UINT16_MAX;
	int64_t t97 = 2615496635013962334LL;

	t97 = (x501%((x502+x503)+x504));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x505 = INT32_MIN;
	int16_t x506 = -1;
	int8_t x508 = -1;
	volatile int32_t t98 = -161929;

	t98 = (x505%((x506+x507)+x508));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x510 = INT64_MIN;
	volatile uint32_t x512 = 25275U;
	volatile int64_t t99 = -138512399639LL;

	t99 = (x509%((x510+x511)+x512));

	if (t99 != 255LL) { NG(); } else { ; }
	
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

