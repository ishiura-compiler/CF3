#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x3 = 26U;
int32_t x22 = 0;
int8_t x24 = 1;
static int16_t x25 = 15684;
volatile uint16_t x35 = 1U;
static int8_t x36 = INT8_MAX;
static volatile uint64_t t6 = 5526679079410394612LLU;
int32_t x40 = 35062972;
volatile int64_t x44 = -1855763529270LL;
volatile int64_t t8 = -230LL;
int32_t x50 = -1;
int32_t t10 = 43132679;
volatile uint32_t t11 = 365U;
static volatile int32_t x72 = 1;
static int8_t x76 = 2;
static int32_t x77 = -1341;
static int16_t x79 = INT16_MIN;
uint32_t x81 = 96U;
static uint8_t x84 = UINT8_MAX;
volatile int64_t t19 = INT64_MAX;
int8_t x97 = -41;
static uint32_t t20 = 6887918U;
uint32_t x103 = 0U;
static int8_t x104 = 5;
volatile int32_t x106 = INT32_MIN;
int16_t x107 = -424;
volatile uint16_t x108 = 17580U;
volatile uint64_t t22 = 64781855698771918LLU;
uint8_t x118 = 0U;
int8_t x129 = INT8_MIN;
int64_t x130 = 927471560922605LL;
volatile uint16_t x139 = UINT16_MAX;
volatile int64_t x153 = -1LL;
static int32_t x158 = INT32_MAX;
int64_t x159 = -1LL;
volatile uint32_t t34 = 1673U;
int8_t x169 = INT8_MIN;
volatile int32_t x170 = -1;
int16_t x175 = -321;
uint8_t x176 = UINT8_MAX;
static uint8_t x178 = 0U;
uint16_t x180 = 463U;
int8_t x185 = -3;
static int64_t x187 = -14066497323753214LL;
volatile uint16_t x189 = 2859U;
static volatile int16_t x196 = 1;
int32_t x197 = 379517;
int64_t t43 = 68LL;
int8_t x202 = INT8_MIN;
uint32_t x205 = 237U;
int8_t x213 = -1;
int64_t x227 = 602594953883LL;
uint8_t x233 = 56U;
int8_t x235 = -1;
static int32_t x242 = -348;
volatile int64_t t52 = 9476548LL;
static int8_t x246 = INT8_MIN;
static uint64_t x249 = UINT64_MAX;
int32_t x254 = -116451;
int32_t t55 = INT32_MAX;
int8_t x262 = INT8_MIN;
volatile int8_t x270 = -1;
static uint64_t t58 = 7979608318203LLU;
static volatile int64_t x285 = 133809177249634845LL;
int32_t x290 = -1;
static uint64_t x300 = 2045539567073LLU;
volatile uint64_t t64 = 4482LLU;
int64_t x303 = -2564LL;
uint64_t t65 = 62696085LLU;
int64_t x307 = -1LL;
static uint64_t x324 = 5941307830LLU;
static volatile int16_t x334 = INT16_MIN;
uint64_t t71 = 182LLU;
int32_t x346 = INT32_MIN;
uint64_t t73 = 426273831889071961LLU;
int8_t x349 = -1;
static int8_t x351 = -1;
int32_t x353 = -1;
int8_t x366 = INT8_MIN;
volatile int64_t t78 = -14154LL;
uint64_t x383 = 46LLU;
int32_t x384 = -168650;
int8_t x392 = INT8_MAX;
uint32_t x398 = UINT32_MAX;
int8_t x399 = 2;
static int64_t t85 = 76985195586182690LL;
uint16_t x406 = 238U;
volatile uint8_t x407 = UINT8_MAX;
int16_t x411 = INT16_MIN;
static volatile uint8_t x420 = 0U;
int64_t t88 = 5LL;
static uint8_t x426 = 114U;
int16_t x427 = INT16_MAX;
static volatile uint32_t x429 = 25485412U;
volatile int64_t x432 = INT64_MAX;
int64_t t91 = -3295839LL;
int64_t x437 = -1LL;
static int8_t x441 = -1;
static int64_t t96 = -7297248155LL;
static volatile int8_t x464 = INT8_MAX;
volatile uint64_t x465 = 925681395LLU;
volatile int16_t x466 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 15U;
	static int64_t x2 = 232349602413388LL;
	uint16_t x4 = 4998U;
	int64_t t0 = 1867770979448163LL;

	t0 = (x1^((x2-x3)|x4));

	if (t0 != 232349602413497LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 824020625LLU;
	uint32_t x6 = 20180U;
	volatile int8_t x7 = -6;
	static int16_t x8 = -125;
	volatile uint64_t t1 = 621846974191LLU;

	t1 = (x5^((x6-x7)|x8));

	if (t1 != 3470946634LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = 38382698LLU;
	int32_t x14 = 0;
	int32_t x15 = -34;
	int32_t x16 = INT32_MIN;
	volatile uint64_t t2 = 2LLU;

	t2 = (x13^((x14-x15)|x16));

	if (t2 != 18446744071600450632LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	static int16_t x18 = INT16_MIN;
	volatile int8_t x19 = 6;
	int8_t x20 = INT8_MIN;
	volatile int32_t t3 = 391198;

	t3 = (x17^((x18-x19)|x20));

	if (t3 != -2147483643) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	static int8_t x23 = INT8_MIN;
	int64_t t4 = -7LL;

	t4 = (x21^((x22-x23)|x24));

	if (t4 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = UINT8_MAX;
	static int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t5 = -71089;

	t5 = (x25^((x26-x27)|x28));

	if (t5 != -15676) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile uint64_t x34 = 200896006LLU;

	t6 = (x33^((x34-x35)|x36));

	if (t6 != 18446744071762964095LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	static volatile uint8_t x38 = 60U;
	int16_t x39 = INT16_MAX;
	int64_t t7 = -49054LL;

	t7 = (x37^((x38-x39)|x40));

	if (t7 != -9223372036854744254LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	int32_t x42 = -1;
	static int32_t x43 = INT32_MIN;

	t8 = (x41^((x42-x43)|x44));

	if (t8 != 1855425871872LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = 0LL;
	static uint32_t x51 = 45599U;
	uint8_t x52 = 1U;
	volatile int64_t t9 = 431740429LL;

	t9 = (x49^((x50-x51)|x52));

	if (t9 != 4294921697LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 1694U;
	volatile int16_t x54 = INT16_MAX;
	static volatile uint8_t x55 = 105U;
	static int32_t x56 = INT32_MIN;

	t10 = (x53^((x54-x55)|x56));

	if (t10 != -2147452664) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = INT32_MAX;
	uint32_t x58 = 15042U;
	int16_t x59 = -15;
	int8_t x60 = -15;

	t11 = (x57^((x58-x59)|x60));

	if (t11 != 2147483662U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MIN;
	static uint64_t x62 = 7611412826LLU;
	int16_t x63 = INT16_MIN;
	volatile int32_t x64 = 24350615;
	volatile uint64_t t12 = 18981633LLU;

	t12 = (x61^((x62-x63)|x64));

	if (t12 != 9223372044471631839LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MAX;
	int32_t x66 = -170;
	int8_t x67 = INT8_MAX;
	int64_t x68 = 5LL;
	volatile int64_t t13 = 14965914462661249LL;

	t13 = (x65^((x66-x67)|x68));

	if (t13 != -2147483352LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 164U;
	int32_t x70 = -40343;
	int32_t x71 = INT32_MIN;
	static uint32_t t14 = 0U;

	t14 = (x69^((x70-x71)|x72));

	if (t14 != 2147443405U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MIN;
	volatile int64_t t15 = 45485652642619LL;

	t15 = (x73^((x74-x75)|x76));

	if (t15 != -3LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x78 = 26U;
	volatile int16_t x80 = INT16_MAX;
	int32_t t16 = 6674;

	t16 = (x77^((x78-x79)|x80));

	if (t16 != -64196) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = -361LL;
	uint16_t x83 = 7U;
	int64_t t17 = 352LL;

	t17 = (x81^((x82-x83)|x84));

	if (t17 != -353LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = INT8_MIN;
	uint32_t x86 = 35U;
	volatile int32_t x87 = -1;
	int64_t x88 = -1LL;
	volatile int64_t t18 = 21080968573511LL;

	t18 = (x85^((x86-x87)|x88));

	if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = INT64_MIN;
	uint8_t x90 = 37U;
	volatile int16_t x91 = INT16_MAX;
	uint16_t x92 = UINT16_MAX;

	t19 = (x89^((x90-x91)|x92));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x98 = 927184;
	static uint32_t x99 = 13U;
	int16_t x100 = INT16_MIN;

	t20 = (x97^((x98-x99)|x100));

	if (t20 != 23060U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = -1;
	uint16_t x102 = 9926U;
	uint32_t t21 = 1000160323U;

	t21 = (x101^((x102-x103)|x104));

	if (t21 != 4294957368U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = 801452482796LLU;

	t22 = (x105^((x106-x107)|x108));

	if (t22 != 18446743270991734080LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 17250290393LLU;
	uint64_t x110 = UINT64_MAX;
	static int32_t x111 = 2072;
	int64_t x112 = -341520359708725LL;
	uint64_t t23 = 0LLU;

	t23 = (x109^((x110-x111)|x112));

	if (t23 != 18446744056459263286LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	uint64_t x119 = 5257957363263211110LLU;
	uint16_t x120 = 17415U;
	volatile uint64_t t24 = 797306581LLU;

	t24 = (x117^((x118-x119)|x120));

	if (t24 != 5257957363263210080LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = INT32_MAX;
	int32_t x122 = INT32_MAX;
	uint64_t x123 = 711233409LLU;
	int16_t x124 = INT16_MIN;
	volatile uint64_t t25 = 14144495LLU;

	t25 = (x121^((x122-x123)|x124));

	if (t25 != 18446744071562071937LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x131 = -1;
	uint64_t x132 = UINT64_MAX;
	uint64_t t26 = 28LLU;

	t26 = (x129^((x130-x131)|x132));

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = 9;
	uint8_t x134 = UINT8_MAX;
	volatile int32_t x135 = 86;
	static int32_t x136 = INT32_MIN;
	static volatile int32_t t27 = -394111258;

	t27 = (x133^((x134-x135)|x136));

	if (t27 != -2147483488) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x137 = -1LL;
	int64_t x138 = -1LL;
	uint32_t x140 = 582U;
	static volatile int64_t t28 = -121500054387675LL;

	t28 = (x137^((x138-x139)|x140));

	if (t28 != 64953LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x141 = INT8_MIN;
	uint16_t x142 = UINT16_MAX;
	uint64_t x143 = UINT64_MAX;
	volatile int8_t x144 = INT8_MIN;
	volatile uint64_t t29 = 2222162LLU;

	t29 = (x141^((x142-x143)|x144));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MAX;
	static int16_t x146 = 13298;
	int16_t x147 = -1;
	uint8_t x148 = 62U;
	volatile int64_t t30 = 11LL;

	t30 = (x145^((x146-x147)|x148));

	if (t30 != 9223372036854762496LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -1LL;
	volatile int16_t x150 = -1;
	static int64_t x151 = 0LL;
	volatile uint32_t x152 = UINT32_MAX;
	static int64_t t31 = -102475799538897662LL;

	t31 = (x149^((x150-x151)|x152));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x154 = 1;
	volatile int64_t x155 = -1LL;
	volatile int8_t x156 = -12;
	int64_t t32 = 62522845693385056LL;

	t32 = (x153^((x154-x155)|x156));

	if (t32 != 9LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x157 = INT16_MIN;
	int8_t x160 = 4;
	static volatile int64_t t33 = 176922534464LL;

	t33 = (x157^((x158-x159)|x160));

	if (t33 != -2147516412LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x161 = 5U;
	uint8_t x162 = UINT8_MAX;
	static int16_t x163 = INT16_MAX;
	volatile uint32_t x164 = UINT32_MAX;

	t34 = (x161^((x162-x163)|x164));

	if (t34 != 4294967290U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = -247083LL;
	uint8_t x166 = 4U;
	int16_t x167 = INT16_MAX;
	int8_t x168 = INT8_MIN;
	volatile int64_t t35 = -31734479LL;

	t35 = (x165^((x166-x167)|x168));

	if (t35 != 247120LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MIN;
	int64_t t36 = INT64_MAX;

	t36 = (x169^((x170-x171)|x172));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = 0;
	uint64_t x174 = UINT64_MAX;
	volatile uint64_t t37 = 63812332930975170LLU;

	t37 = (x173^((x174-x175)|x176));

	if (t37 != 511LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MAX;
	volatile int8_t x179 = INT8_MIN;
	int32_t t38 = -1469388;

	t38 = (x177^((x178-x179)|x180));

	if (t38 != 2147483184) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	static int64_t x182 = 331426604LL;
	volatile int32_t x183 = INT32_MAX;
	int8_t x184 = INT8_MIN;
	volatile int64_t t39 = 2268268851110370LL;

	t39 = (x181^((x182-x183)|x184));

	if (t39 != -46LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x186 = UINT16_MAX;
	int64_t x188 = -4LL;
	volatile int64_t t40 = 76138272LL;

	t40 = (x185^((x186-x187)|x188));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x190 = -1LL;
	int64_t x191 = INT64_MIN;
	volatile uint64_t x192 = 48306120356190LLU;
	volatile uint64_t t41 = 67538317601220762LLU;

	t41 = (x189^((x190-x191)|x192));

	if (t41 != 9223372036854772948LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x193 = 14U;
	int16_t x194 = -488;
	int8_t x195 = -1;
	volatile int32_t t42 = -206;

	t42 = (x193^((x194-x195)|x196));

	if (t42 != -489) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x198 = -77183359544LL;
	static uint16_t x199 = 1964U;
	int8_t x200 = INT8_MIN;

	t43 = (x197^((x198-x199)|x200));

	if (t43 != -379423LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x201 = -2038LL;
	volatile int64_t x203 = INT64_MIN;
	uint32_t x204 = UINT32_MAX;
	int64_t t44 = -5002343147864624LL;

	t44 = (x201^((x202-x203)|x204));

	if (t44 != -9223372036854773771LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x206 = 1683;
	int8_t x207 = 7;
	volatile int64_t x208 = INT64_MAX;
	static int64_t t45 = -32LL;

	t45 = (x205^((x206-x207)|x208));

	if (t45 != 9223372036854775570LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x209 = UINT16_MAX;
	int8_t x210 = INT8_MIN;
	int32_t x211 = -1;
	int64_t x212 = -1LL;
	volatile int64_t t46 = 50248LL;

	t46 = (x209^((x210-x211)|x212));

	if (t46 != -65536LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x214 = 1;
	volatile uint32_t x215 = 116U;
	int8_t x216 = 8;
	volatile uint32_t t47 = 503393U;

	t47 = (x213^((x214-x215)|x216));

	if (t47 != 114U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x217 = -48793066;
	int8_t x218 = INT8_MIN;
	int8_t x219 = 1;
	int8_t x220 = INT8_MIN;
	int32_t t48 = 1481;

	t48 = (x217^((x218-x219)|x220));

	if (t48 != 48793065) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = -817067;
	int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t49 = 6254500773745845869LLU;

	t49 = (x221^((x222-x223)|x224));

	if (t49 != 817066LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x225 = 18026963688139609LLU;
	int64_t x226 = INT64_MAX;
	int8_t x228 = -3;
	volatile uint64_t t50 = 7895692366LLU;

	t50 = (x225^((x226-x227)|x228));

	if (t50 != 18428717110021412004LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x234 = 3;
	int32_t x236 = -29203602;
	int32_t t51 = 3504;

	t51 = (x233^((x234-x235)|x236));

	if (t51 != -29203626) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = INT32_MIN;
	int8_t x243 = INT8_MAX;
	static volatile int64_t x244 = INT64_MAX;

	t52 = (x241^((x242-x243)|x244));

	if (t52 != 2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x247 = UINT32_MAX;
	static volatile int32_t x248 = -1;
	int64_t t53 = 1LL;

	t53 = (x245^((x246-x247)|x248));

	if (t53 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x250 = INT32_MIN;
	static int64_t x251 = 1977411LL;
	uint8_t x252 = UINT8_MAX;
	uint64_t t54 = 61986LLU;

	t54 = (x249^((x250-x251)|x252));

	if (t54 != 2149460992LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = INT32_MIN;
	volatile int8_t x255 = -1;
	int8_t x256 = -1;

	t55 = (x253^((x254-x255)|x256));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = 6;
	static volatile int32_t x263 = -14301259;
	uint64_t x264 = UINT64_MAX;
	static volatile uint64_t t56 = 234710758LLU;

	t56 = (x261^((x262-x263)|x264));

	if (t56 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = INT32_MAX;
	static int8_t x266 = INT8_MIN;
	volatile uint64_t x267 = 2581961683643100LLU;
	uint16_t x268 = 3U;
	volatile uint64_t t57 = 14660652996658LLU;

	t57 = (x265^((x266-x267)|x268));

	if (t57 != 18444162112461351768LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x269 = 889LLU;
	uint32_t x271 = 2896965U;
	volatile uint8_t x272 = UINT8_MAX;

	t58 = (x269^((x270-x271)|x272));

	if (t58 != 4292069510LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x273 = 772U;
	int8_t x274 = 9;
	int8_t x275 = INT8_MAX;
	uint16_t x276 = UINT16_MAX;
	int32_t t59 = 3217;

	t59 = (x273^((x274-x275)|x276));

	if (t59 != -773) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	int16_t x279 = INT16_MIN;
	int64_t x280 = -1LL;
	volatile int64_t t60 = 514908998LL;

	t60 = (x277^((x278-x279)|x280));

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x286 = 42U;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = 27U;
	uint64_t t61 = 2LLU;

	t61 = (x285^((x286-x287)|x288));

	if (t61 != 133809177249634854LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x289 = INT32_MAX;
	static int16_t x291 = INT16_MIN;
	int8_t x292 = -60;
	volatile int32_t t62 = INT32_MIN;

	t62 = (x289^((x290-x291)|x292));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = -5660;
	static uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	uint16_t x296 = 1711U;
	static uint64_t t63 = 196743862933LLU;

	t63 = (x293^((x294-x295)|x296));

	if (t63 != 18446744071562073627LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x297 = 2899U;
	uint32_t x298 = UINT32_MAX;
	static int32_t x299 = INT32_MAX;

	t64 = (x297^((x298-x299)|x300));

	if (t64 != 2047687052978LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x301 = 3911446U;
	uint64_t x302 = 259163012196129LLU;
	uint32_t x304 = 48497161U;

	t65 = (x301^((x302-x303)|x304));

	if (t65 != 259163021925435LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x305 = 985U;
	int64_t x306 = INT64_MIN;
	static volatile uint8_t x308 = 1U;
	int64_t t66 = 111609488538LL;

	t66 = (x305^((x306-x307)|x308));

	if (t66 != -9223372036854774824LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x309 = 89U;
	volatile int8_t x310 = INT8_MAX;
	uint32_t x311 = 1009669665U;
	int8_t x312 = -1;
	volatile uint32_t t67 = 2712U;

	t67 = (x309^((x310-x311)|x312));

	if (t67 != 4294967206U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x317 = UINT32_MAX;
	uint8_t x318 = 3U;
	int64_t x319 = -1LL;
	int32_t x320 = INT32_MIN;
	int64_t t68 = -5871532LL;

	t68 = (x317^((x318-x319)|x320));

	if (t68 != -2147483653LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MIN;
	uint8_t x323 = UINT8_MAX;
	uint64_t t69 = 487832835548065LLU;

	t69 = (x321^((x322-x323)|x324));

	if (t69 != 32823LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	volatile int32_t x331 = -7958;
	volatile int8_t x332 = 2;
	int32_t t70 = 428533;

	t70 = (x329^((x330-x331)|x332));

	if (t70 != -8216) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = -3;
	uint64_t x335 = 3532861081180555LLU;
	uint16_t x336 = UINT16_MAX;

	t71 = (x333^((x334-x335)|x336));

	if (t71 != 3532861081190402LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x337 = INT32_MAX;
	volatile uint32_t x338 = UINT32_MAX;
	volatile int16_t x339 = -1887;
	uint16_t x340 = 313U;
	static uint32_t t72 = 12832313U;

	t72 = (x337^((x338-x339)|x340));

	if (t72 != 2147481728U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = 49U;
	uint16_t x347 = 0U;
	static uint64_t x348 = UINT64_MAX;

	t73 = (x345^((x346-x347)|x348));

	if (t73 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x350 = INT64_MIN;
	int16_t x352 = INT16_MIN;
	int64_t t74 = 64990452626LL;

	t74 = (x349^((x350-x351)|x352));

	if (t74 != 32766LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x354 = INT16_MAX;
	static uint8_t x355 = UINT8_MAX;
	int8_t x356 = 0;
	volatile int32_t t75 = -23580;

	t75 = (x353^((x354-x355)|x356));

	if (t75 != -32513) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = -1LL;
	int32_t x358 = INT32_MIN;
	volatile uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 31U;
	int64_t t76 = 75482628316075129LL;

	t76 = (x357^((x358-x359)|x360));

	if (t76 != -2147483680LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = -23LL;
	static int16_t x362 = -1;
	int64_t x363 = 1077467696328593LL;
	int16_t x364 = INT16_MIN;
	int64_t t77 = -1503574361722432LL;

	t77 = (x361^((x362-x363)|x364));

	if (t77 != 28551LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MAX;
	static volatile int64_t x367 = 27601LL;
	volatile uint32_t x368 = 9U;

	t78 = (x365^((x366-x367)|x368));

	if (t78 != -5040LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x369 = INT8_MIN;
	volatile int16_t x370 = INT16_MIN;
	volatile int8_t x371 = -4;
	int64_t x372 = INT64_MIN;
	int64_t t79 = -251279613991129LL;

	t79 = (x369^((x370-x371)|x372));

	if (t79 != 32644LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x373 = INT8_MIN;
	static int32_t x374 = -1;
	static uint8_t x375 = 13U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t80 = 164197588;

	t80 = (x373^((x374-x375)|x376));

	if (t80 != 114) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	uint64_t t81 = 73002909660222021LLU;

	t81 = (x381^((x382-x383)|x384));

	if (t81 != 8LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x385 = 3U;
	static uint32_t x386 = 779357U;
	volatile int32_t x387 = INT32_MIN;
	int32_t x388 = INT32_MIN;
	uint32_t t82 = 135148747U;

	t82 = (x385^((x386-x387)|x388));

	if (t82 != 2148263006U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int32_t x390 = INT32_MAX;
	int8_t x391 = INT8_MAX;
	int32_t t83 = -1;

	t83 = (x389^((x390-x391)|x392));

	if (t83 != 2147418112) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x397 = INT8_MAX;
	int32_t x400 = INT32_MIN;
	volatile uint32_t t84 = 1075U;

	t84 = (x397^((x398-x399)|x400));

	if (t84 != 4294967170U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x401 = INT64_MIN;
	uint32_t x402 = 632379U;
	static int16_t x403 = INT16_MIN;
	int64_t x404 = 80578238LL;

	t85 = (x401^((x402-x403)|x404));

	if (t85 != -9223372036774058305LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = INT32_MIN;
	int32_t x408 = -14415034;
	int32_t t86 = -1;

	t86 = (x405^((x406-x407)|x408));

	if (t86 != 2147483631) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MIN;
	static uint8_t x412 = 43U;
	int32_t t87 = 6;

	t87 = (x409^((x410-x411)|x412));

	if (t87 != 84) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = -1;
	int64_t x418 = -251348LL;
	int32_t x419 = INT32_MIN;

	t88 = (x417^((x418-x419)|x420));

	if (t88 != -2147232301LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x421 = INT64_MAX;
	uint8_t x422 = 1U;
	volatile int32_t x423 = -1;
	static uint8_t x424 = 98U;
	static int64_t t89 = 11351040498163996LL;

	t89 = (x421^((x422-x423)|x424));

	if (t89 != 9223372036854775709LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x425 = 12U;
	int64_t x428 = -1LL;
	volatile int64_t t90 = -8LL;

	t90 = (x425^((x426-x427)|x428));

	if (t90 != -13LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x430 = 824U;
	volatile int64_t x431 = 43203LL;

	t91 = (x429^((x430-x431)|x432));

	if (t91 != -25485413LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x438 = -1;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = INT32_MIN;
	uint64_t t92 = 3360003LLU;

	t92 = (x437^((x438-x439)|x440));

	if (t92 != 2147483647LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x442 = -1;
	static uint32_t x443 = UINT32_MAX;
	int16_t x444 = -462;
	volatile uint32_t t93 = 346300U;

	t93 = (x441^((x442-x443)|x444));

	if (t93 != 461U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x449 = 33U;
	uint16_t x450 = 0U;
	int8_t x451 = INT8_MIN;
	uint32_t x452 = 0U;
	volatile uint32_t t94 = 320U;

	t94 = (x449^((x450-x451)|x452));

	if (t94 != 161U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x453 = 5447874657329LL;
	static int32_t x454 = -1;
	int8_t x455 = INT8_MIN;
	int32_t x456 = -30115458;
	int64_t t95 = 32598910993448589LL;

	t95 = (x453^((x454-x455)|x456));

	if (t95 != -5447887731378LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x457 = INT64_MIN;
	volatile int8_t x458 = INT8_MIN;
	static volatile int64_t x459 = 27790771322647LL;
	int32_t x460 = -435705732;

	t96 = (x457^((x458-x459)|x460));

	if (t96 != 9223372036703234173LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x461 = INT16_MAX;
	volatile uint32_t x462 = 8U;
	int64_t x463 = -1LL;
	volatile int64_t t97 = 3449146LL;

	t97 = (x461^((x462-x463)|x464));

	if (t97 != 32640LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x467 = 2683556;
	int32_t x468 = -978;
	uint64_t t98 = 289802938367LLU;

	t98 = (x465^((x466-x467)|x468));

	if (t98 != 18446744072783870861LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x469 = -1;
	int32_t x470 = -1034296;
	uint16_t x471 = UINT16_MAX;
	uint32_t x472 = 35564U;
	uint32_t t99 = 6U;

	t99 = (x469^((x470-x471)|x472));

	if (t99 != 1064978U) { NG(); } else { ; }
	
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

