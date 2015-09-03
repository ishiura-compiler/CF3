#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x20 = 1U;
volatile int64_t x24 = 35899726LL;
int16_t x39 = INT16_MIN;
uint8_t x40 = UINT8_MAX;
int64_t t7 = -515LL;
volatile uint32_t x57 = UINT32_MAX;
uint64_t x67 = 282780178617LLU;
uint64_t t10 = 120499LLU;
int32_t x73 = -1;
static uint8_t x81 = 1U;
static uint64_t x84 = UINT64_MAX;
volatile int16_t x95 = INT16_MIN;
static int64_t x101 = 1179860289LL;
uint32_t x113 = 1449384U;
uint64_t x121 = 37624924423LLU;
int64_t x124 = -1LL;
static int16_t x126 = INT16_MAX;
uint16_t x128 = 2394U;
uint32_t t20 = 200U;
uint8_t x129 = UINT8_MAX;
int16_t x132 = 3596;
int32_t x140 = INT32_MAX;
int8_t x152 = INT8_MIN;
uint64_t x167 = 943567LLU;
static uint16_t x170 = UINT16_MAX;
int16_t x175 = -1;
static volatile int32_t x177 = -1;
uint32_t x183 = UINT32_MAX;
static int64_t x195 = 6812021863834LL;
uint8_t x207 = 2U;
uint32_t x215 = 330275549U;
volatile uint64_t t35 = 9LLU;
int64_t x222 = INT64_MIN;
int32_t x223 = -451762;
static volatile int32_t x226 = INT32_MIN;
volatile uint16_t x227 = UINT16_MAX;
int32_t t37 = 173;
int8_t x234 = -47;
volatile int8_t x236 = 0;
int8_t x237 = INT8_MIN;
static uint8_t x259 = 1U;
volatile int32_t t41 = 217338;
uint64_t t42 = 3LLU;
int32_t x270 = -966736;
int16_t x276 = 0;
static int32_t t44 = 95072439;
uint64_t x279 = 14991341LLU;
uint16_t x292 = UINT16_MAX;
int32_t x293 = 1;
volatile uint64_t t48 = 1334706413LLU;
int16_t x297 = 5691;
volatile int32_t t52 = -4;
int16_t x324 = INT16_MIN;
uint32_t x329 = 12425U;
uint8_t x336 = 95U;
int8_t x354 = INT8_MIN;
int32_t x357 = -202;
volatile int32_t x360 = 111;
int64_t x363 = -59LL;
uint64_t x364 = UINT64_MAX;
static volatile int8_t x374 = -1;
int64_t t63 = -211110345625653614LL;
static uint32_t x403 = UINT32_MAX;
volatile uint32_t t64 = 3U;
int8_t x419 = INT8_MAX;
uint64_t t67 = 588294542241895LLU;
volatile int32_t x434 = 250;
uint32_t x436 = UINT32_MAX;
static int32_t x446 = 3620;
int16_t x448 = -1;
static int16_t x450 = -1;
static uint16_t x463 = 1U;
uint64_t t75 = 57063671003976513LLU;
int8_t x467 = INT8_MIN;
uint16_t x468 = 11421U;
static uint64_t x469 = 441LLU;
uint32_t x471 = UINT32_MAX;
volatile uint64_t t77 = 7LLU;
volatile uint32_t t78 = 0U;
volatile int64_t t80 = INT64_MIN;
static int32_t x487 = -1;
int16_t x490 = INT16_MAX;
volatile int32_t x503 = INT32_MAX;
uint8_t x511 = UINT8_MAX;
int64_t x518 = INT64_MIN;
static volatile int32_t x520 = 30626232;
uint16_t x533 = 34U;
volatile uint16_t x536 = 147U;
volatile int32_t t88 = -99710;
uint16_t x541 = UINT16_MAX;
int32_t x552 = INT32_MIN;
int64_t x554 = INT64_MAX;
int32_t x555 = 425;
uint8_t x561 = UINT8_MAX;
uint16_t x563 = 21078U;
int16_t x564 = INT16_MIN;
int32_t x570 = 2592031;
static uint32_t t94 = 269697957U;
volatile int32_t x583 = 192551;
uint64_t x588 = 7818052017424220397LLU;
int16_t x597 = 20;
uint64_t x601 = 251217739LLU;
int64_t x602 = 1596320878446999422LL;
uint64_t t99 = 16016971601LLU;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = -2778951101796996LL;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = UINT8_MAX;
	int64_t t0 = -1328044583LL;

	t0 = ((x1+x2)&(x3*x4));

	if (t0 != -2778953249292288LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x17 = -1;
	int32_t x18 = -1;
	uint16_t x19 = 8529U;
	volatile int32_t t1 = 862;

	t1 = ((x17+x18)&(x19*x20));

	if (t1 != 8528) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = 119;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = 6;
	volatile uint64_t t2 = 1097237723706503327LLU;

	t2 = ((x21+x22)&(x23*x24));

	if (t2 != 84LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x25 = -41;
	uint32_t x26 = 176U;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 1U;
	uint32_t t3 = 22077046U;

	t3 = ((x25+x26)&(x27*x28));

	if (t3 != 128U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x29 = INT32_MIN;
	int64_t x30 = INT64_MAX;
	uint8_t x31 = 2U;
	static int32_t x32 = 0;
	int64_t t4 = -442210539871LL;

	t4 = ((x29+x30)&(x31*x32));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MAX;
	volatile int16_t x34 = INT16_MAX;
	uint16_t x35 = UINT16_MAX;
	uint32_t x36 = 33564874U;
	volatile uint32_t t5 = 150650U;

	t5 = ((x33+x34)&(x35*x36));

	if (t5 != 55094U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = 3;
	uint32_t x38 = UINT32_MAX;
	uint32_t t6 = 79802641U;

	t6 = ((x37+x38)&(x39*x40));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x45 = 3069U;
	int64_t x46 = -591784183578531LL;
	int16_t x47 = -1;
	uint32_t x48 = 57109743U;

	t7 = ((x45+x46)&(x47*x48));

	if (t7 != 2156920848LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x58 = INT16_MIN;
	uint32_t x59 = 13U;
	static int32_t x60 = -1;
	volatile uint32_t t8 = 772U;

	t8 = ((x57+x58)&(x59*x60));

	if (t8 != 4294934515U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x61 = INT32_MIN;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = -1;
	int32_t x64 = -1;
	volatile int32_t t9 = 464604235;

	t9 = ((x61+x62)&(x63*x64));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = INT32_MAX;
	uint32_t x66 = UINT32_MAX;
	uint8_t x68 = UINT8_MAX;

	t10 = ((x65+x66)&(x67*x68));

	if (t10 != 739614790LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x74 = 110U;
	int64_t x75 = -1LL;
	uint32_t x76 = UINT32_MAX;
	static int64_t t11 = -17914319182027502LL;

	t11 = ((x73+x74)&(x75*x76));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x77 = 43U;
	uint64_t x78 = 55LLU;
	int8_t x79 = INT8_MIN;
	uint32_t x80 = 7614U;
	static volatile uint64_t t12 = 1105687421095LLU;

	t12 = ((x77+x78)&(x79*x80));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x82 = INT8_MIN;
	int64_t x83 = 1736824LL;
	uint64_t t13 = 1724690LLU;

	t13 = ((x81+x82)&(x83*x84));

	if (t13 != 18446744073707814784LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x89 = 209223930910527327LLU;
	volatile uint8_t x90 = UINT8_MAX;
	int64_t x91 = -59487LL;
	volatile uint8_t x92 = 66U;
	static uint64_t t14 = 51LLU;

	t14 = ((x89+x90)&(x91*x92));

	if (t14 != 209223930907725826LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x93 = 21103U;
	uint16_t x94 = UINT16_MAX;
	int32_t x96 = -1;
	volatile int32_t t15 = -32289;

	t15 = ((x93+x94)&(x95*x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x102 = 0U;
	uint8_t x103 = UINT8_MAX;
	volatile uint8_t x104 = 105U;
	int64_t t16 = -5505080LL;

	t16 = ((x101+x102)&(x103*x104));

	if (t16 != 10241LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = INT32_MAX;
	int64_t x110 = -1LL;
	volatile int32_t x111 = -1;
	int32_t x112 = -1;
	volatile int64_t t17 = -1945299LL;

	t17 = ((x109+x110)&(x111*x112));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x114 = INT16_MAX;
	static int32_t x115 = INT32_MIN;
	static uint32_t x116 = UINT32_MAX;
	static uint32_t t18 = 21135U;

	t18 = ((x113+x114)&(x115*x116));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x122 = 1U;
	int16_t x123 = INT16_MAX;
	uint64_t t19 = 24170LLU;

	t19 = ((x121+x122)&(x123*x124));

	if (t19 != 37624905728LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x125 = UINT32_MAX;
	static int16_t x127 = 544;

	t20 = ((x125+x126)&(x127*x128));

	if (t20 != 24384U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x130 = INT64_MIN;
	int8_t x131 = -1;
	int64_t t21 = -3LL;

	t21 = ((x129+x130)&(x131*x132));

	if (t21 != -9223372036854775564LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile int8_t x138 = -1;
	int8_t x139 = -1;
	int32_t t22 = -1420648;

	t22 = ((x137+x138)&(x139*x140));

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int8_t x142 = INT8_MIN;
	int16_t x143 = 1;
	uint16_t x144 = 1U;
	uint32_t t23 = 537644925U;

	t23 = ((x141+x142)&(x143*x144));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x149 = 194971394U;
	uint64_t x150 = UINT64_MAX;
	int64_t x151 = -1LL;
	volatile uint64_t t24 = 1LLU;

	t24 = ((x149+x150)&(x151*x152));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x157 = 1U;
	static uint16_t x158 = 37U;
	int32_t x159 = -1;
	static volatile uint8_t x160 = UINT8_MAX;
	uint32_t t25 = 15U;

	t25 = ((x157+x158)&(x159*x160));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x161 = INT8_MIN;
	int64_t x162 = 28312056LL;
	int8_t x163 = -1;
	static int64_t x164 = 151LL;
	volatile int64_t t26 = 334781160135LL;

	t26 = ((x161+x162)&(x163*x164));

	if (t26 != 28311912LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = -1LL;
	int64_t x168 = INT64_MIN;
	volatile uint64_t t27 = 1205795607462331279LLU;

	t27 = ((x165+x166)&(x167*x168));

	if (t27 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x169 = INT16_MIN;
	static uint8_t x171 = 17U;
	static volatile uint64_t x172 = 3587426297233212199LLU;
	uint64_t t28 = 574264700949LLU;

	t28 = ((x169+x170)&(x171*x172));

	if (t28 != 13719LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x173 = INT16_MAX;
	static volatile int16_t x174 = -457;
	int8_t x176 = -13;
	int32_t t29 = 12;

	t29 = ((x173+x174)&(x175*x176));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x178 = UINT64_MAX;
	int64_t x179 = -58662LL;
	int8_t x180 = -1;
	uint64_t t30 = 0LLU;

	t30 = ((x177+x178)&(x179*x180));

	if (t30 != 58662LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x181 = 14;
	volatile int8_t x182 = INT8_MIN;
	uint8_t x184 = 2U;
	uint32_t t31 = 0U;

	t31 = ((x181+x182)&(x183*x184));

	if (t31 != 4294967182U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = -11892;
	int32_t x190 = INT32_MAX;
	static uint32_t x191 = UINT32_MAX;
	uint64_t x192 = UINT64_MAX;
	uint64_t t32 = 11053427179993595LLU;

	t32 = ((x189+x190)&(x191*x192));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x193 = -1;
	static volatile int64_t x194 = INT64_MAX;
	int64_t x196 = -1LL;
	int64_t t33 = 1763395LL;

	t33 = ((x193+x194)&(x195*x196));

	if (t33 != 9223365224832911974LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x205 = INT16_MAX;
	uint32_t x206 = 14234564U;
	int64_t x208 = -49907484852LL;
	int64_t t34 = 3669359LL;

	t34 = ((x205+x206)&(x207*x208));

	if (t34 != 9446016LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x213 = 18U;
	uint64_t x214 = 2933LLU;
	uint64_t x216 = 1218617LLU;

	t35 = ((x213+x214)&(x215*x216));

	if (t35 != 773LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x221 = 56;
	int64_t x224 = -19LL;
	static volatile int64_t t36 = 12935363075LL;

	t36 = ((x221+x222)&(x223*x224));

	if (t36 != 48LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x225 = UINT8_MAX;
	volatile int8_t x228 = INT8_MIN;

	t37 = ((x225+x226)&(x227*x228));

	if (t37 != -2147483520) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x233 = 0;
	uint16_t x235 = 5U;
	static volatile int32_t t38 = -719;

	t38 = ((x233+x234)&(x235*x236));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x238 = 0;
	int8_t x239 = 3;
	int8_t x240 = INT8_MIN;
	int32_t t39 = 53;

	t39 = ((x237+x238)&(x239*x240));

	if (t39 != -384) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x257 = UINT64_MAX;
	volatile uint8_t x258 = 0U;
	int8_t x260 = INT8_MIN;
	uint64_t t40 = 11514212382794LLU;

	t40 = ((x257+x258)&(x259*x260));

	if (t40 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x261 = UINT16_MAX;
	int16_t x262 = INT16_MAX;
	volatile int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;

	t41 = ((x261+x262)&(x263*x264));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x265 = 44;
	int8_t x266 = -2;
	uint64_t x267 = UINT64_MAX;
	uint32_t x268 = UINT32_MAX;

	t42 = ((x265+x266)&(x267*x268));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x269 = -1;
	volatile uint64_t x271 = 1809177118765553700LLU;
	int8_t x272 = -1;
	uint64_t t43 = 3LLU;

	t43 = ((x269+x270)&(x271*x272));

	if (t43 != 16637566954943555468LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x273 = INT32_MIN;
	uint16_t x274 = UINT16_MAX;
	int8_t x275 = -29;

	t44 = ((x273+x274)&(x275*x276));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x277 = -1;
	static uint16_t x278 = 0U;
	uint64_t x280 = 26993381566115LLU;
	volatile uint64_t t45 = 2076228455LLU;

	t45 = ((x277+x278)&(x279*x280));

	if (t45 != 17285362252843426279LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x285 = 76096997U;
	uint16_t x286 = 474U;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = 13008U;
	static volatile uint32_t t46 = 174U;

	t46 = ((x285+x286)&(x287*x288));

	if (t46 != 75497472U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x289 = UINT8_MAX;
	int8_t x290 = -11;
	uint16_t x291 = 58U;
	int32_t t47 = -1709;

	t47 = ((x289+x290)&(x291*x292));

	if (t47 != 196) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x294 = -78244517LL;
	uint64_t x295 = 35212993574535984LLU;
	int32_t x296 = INT32_MIN;

	t48 = ((x293+x294)&(x295*x296));

	if (t48 != 378722828817530880LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x298 = 411U;
	static int16_t x299 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t49 = 8;

	t49 = ((x297+x298)&(x299*x300));

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	int16_t x307 = 1;
	int32_t x308 = INT32_MIN;
	volatile uint32_t t50 = 32087U;

	t50 = ((x305+x306)&(x307*x308));

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x309 = 1U;
	uint32_t x310 = 8U;
	int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	static uint32_t t51 = 397U;

	t51 = ((x309+x310)&(x311*x312));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x313 = -1;
	static int8_t x314 = -1;
	static volatile int32_t x315 = 0;
	volatile int8_t x316 = -1;

	t52 = ((x313+x314)&(x315*x316));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x317 = 1952U;
	int16_t x318 = 3;
	int32_t x319 = INT32_MIN;
	int64_t x320 = -1LL;
	volatile int64_t t53 = 127488707789291456LL;

	t53 = ((x317+x318)&(x319*x320));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x321 = INT32_MIN;
	int32_t x322 = 6560254;
	int8_t x323 = INT8_MIN;
	volatile int32_t t54 = -528908;

	t54 = ((x321+x322)&(x323*x324));

	if (t54 != 4194304) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x330 = -24;
	int16_t x331 = INT16_MAX;
	static uint64_t x332 = UINT64_MAX;
	static uint64_t t55 = 96LLU;

	t55 = ((x329+x330)&(x331*x332));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x333 = UINT32_MAX;
	int16_t x334 = INT16_MIN;
	int32_t x335 = -1;
	volatile uint32_t t56 = 31604262U;

	t56 = ((x333+x334)&(x335*x336));

	if (t56 != 4294934433U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x353 = UINT8_MAX;
	int64_t x355 = INT64_MAX;
	uint64_t x356 = UINT64_MAX;
	uint64_t t57 = 819LLU;

	t57 = ((x353+x354)&(x355*x356));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MIN;
	int32_t t58 = 100782;

	t58 = ((x357+x358)&(x359*x360));

	if (t58 != -47104) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x361 = -1;
	static uint8_t x362 = 0U;
	volatile uint64_t t59 = 1LLU;

	t59 = ((x361+x362)&(x363*x364));

	if (t59 != 59LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x369 = 13;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = 1U;
	int64_t x372 = 212603704LL;
	int64_t t60 = 7440076309LL;

	t60 = ((x369+x370)&(x371*x372));

	if (t60 != 212598792LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x373 = INT8_MIN;
	uint32_t x375 = 66200U;
	volatile int64_t x376 = 251467LL;
	int64_t t61 = 3852555LL;

	t61 = ((x373+x374)&(x375*x376));

	if (t61 != 16647115272LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x377 = 50312104LLU;
	int32_t x378 = 1;
	static volatile uint8_t x379 = 26U;
	static uint16_t x380 = 2587U;
	static uint64_t t62 = 5LLU;

	t62 = ((x377+x378)&(x379*x380));

	if (t62 != 66216LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x385 = 310205LL;
	uint16_t x386 = 1U;
	volatile int16_t x387 = INT16_MIN;
	int8_t x388 = -1;

	t63 = ((x385+x386)&(x387*x388));

	if (t63 != 32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MIN;
	volatile int8_t x404 = INT8_MIN;

	t64 = ((x401+x402)&(x403*x404));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x409 = INT32_MAX;
	static volatile int8_t x410 = INT8_MIN;
	uint64_t x411 = 1241548924LLU;
	int32_t x412 = -8814309;
	volatile uint64_t t65 = 1912779873304LLU;

	t65 = ((x409+x410)&(x411*x412));

	if (t65 != 426828052LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x413 = 83366645585530463LLU;
	int32_t x414 = INT32_MIN;
	uint32_t x415 = 10698736U;
	volatile uint64_t x416 = 1013LLU;
	volatile uint64_t t66 = 0LLU;

	t66 = ((x413+x414)&(x415*x416));

	if (t66 != 3932176LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x417 = UINT64_MAX;
	uint8_t x418 = UINT8_MAX;
	int16_t x420 = INT16_MIN;

	t67 = ((x417+x418)&(x419*x420));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x421 = INT8_MIN;
	int16_t x422 = -7;
	uint8_t x423 = 8U;
	uint8_t x424 = 38U;
	int32_t t68 = -198580909;

	t68 = ((x421+x422)&(x423*x424));

	if (t68 != 304) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x429 = 103616736U;
	int8_t x430 = INT8_MIN;
	static volatile uint8_t x431 = 46U;
	static int16_t x432 = INT16_MIN;
	uint32_t t69 = 0U;

	t69 = ((x429+x430)&(x431*x432));

	if (t69 != 103350272U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x433 = INT64_MIN;
	int8_t x435 = INT8_MIN;
	volatile int64_t t70 = -4230157993721371232LL;

	t70 = ((x433+x434)&(x435*x436));

	if (t70 != 128LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x445 = 0;
	int32_t x447 = 154;
	volatile int32_t t71 = 1223773;

	t71 = ((x445+x446)&(x447*x448));

	if (t71 != 3620) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x449 = -1;
	uint16_t x451 = 1508U;
	static volatile int8_t x452 = 15;
	int32_t t72 = -1;

	t72 = ((x449+x450)&(x451*x452));

	if (t72 != 22620) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x453 = -7175;
	int16_t x454 = INT16_MIN;
	uint8_t x455 = UINT8_MAX;
	uint16_t x456 = UINT16_MAX;
	int32_t t73 = 1;

	t73 = ((x453+x454)&(x455*x456));

	if (t73 != 16671489) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x457 = 6;
	volatile int16_t x458 = INT16_MIN;
	int16_t x459 = INT16_MAX;
	int32_t x460 = -14;
	volatile int32_t t74 = 16893932;

	t74 = ((x457+x458)&(x459*x460));

	if (t74 != -458746) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x461 = INT32_MIN;
	int32_t x462 = 2;
	static volatile uint64_t x464 = UINT64_MAX;

	t75 = ((x461+x462)&(x463*x464));

	if (t75 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x465 = -1LL;
	int16_t x466 = -150;
	volatile int64_t t76 = 382882278139LL;

	t76 = ((x465+x466)&(x467*x468));

	if (t76 != -1462016LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x470 = -1;
	int32_t x472 = INT32_MIN;

	t77 = ((x469+x470)&(x471*x472));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x473 = 3U;
	uint32_t x474 = UINT32_MAX;
	int8_t x475 = -1;
	int16_t x476 = INT16_MAX;

	t78 = ((x473+x474)&(x475*x476));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x477 = 15134U;
	volatile int8_t x478 = 0;
	int16_t x479 = INT16_MAX;
	int16_t x480 = -13217;
	uint32_t t79 = 716069U;

	t79 = ((x477+x478)&(x479*x480));

	if (t79 != 13056U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x481 = 1;
	static int64_t x482 = INT64_MIN;
	static volatile int16_t x483 = INT16_MIN;
	static uint16_t x484 = 42U;

	t80 = ((x481+x482)&(x483*x484));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x485 = INT32_MAX;
	static int16_t x486 = -1;
	int8_t x488 = 7;
	static int32_t t81 = -227;

	t81 = ((x485+x486)&(x487*x488));

	if (t81 != 2147483640) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x489 = 50272392LLU;
	uint64_t x491 = 556104790LLU;
	static int64_t x492 = -1LL;
	volatile uint64_t t82 = 503549025LLU;

	t82 = ((x489+x490)&(x491*x492));

	if (t82 != 47874178LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x501 = -1;
	int32_t x502 = -1;
	uint64_t x504 = 41LLU;
	volatile uint64_t t83 = 207926849459LLU;

	t83 = ((x501+x502)&(x503*x504));

	if (t83 != 88046829526LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x509 = INT64_MIN;
	static uint8_t x510 = UINT8_MAX;
	int64_t x512 = 3288LL;
	int64_t t84 = 1627883LL;

	t84 = ((x509+x510)&(x511*x512));

	if (t84 != 40LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x517 = 37U;
	static uint8_t x519 = 43U;
	volatile int64_t t85 = -513801499259430LL;

	t85 = ((x517+x518)&(x519*x520));

	if (t85 != 32LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x521 = INT16_MIN;
	int8_t x522 = 2;
	int16_t x523 = -16;
	int8_t x524 = -1;
	static volatile int32_t t86 = -13;

	t86 = ((x521+x522)&(x523*x524));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x529 = INT64_MIN;
	uint16_t x530 = 49U;
	volatile int16_t x531 = -1;
	uint8_t x532 = 2U;
	int64_t t87 = -143940713656323167LL;

	t87 = ((x529+x530)&(x531*x532));

	if (t87 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x534 = 4U;
	int16_t x535 = INT16_MIN;

	t88 = ((x533+x534)&(x535*x536));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x542 = -1;
	static volatile int8_t x543 = INT8_MAX;
	int8_t x544 = INT8_MAX;
	static int32_t t89 = -13;

	t89 = ((x541+x542)&(x543*x544));

	if (t89 != 16128) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x549 = -17;
	static int8_t x550 = -1;
	uint64_t x551 = 1LLU;
	static volatile uint64_t t90 = 157196580LLU;

	t90 = ((x549+x550)&(x551*x552));

	if (t90 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x553 = INT64_MIN;
	uint16_t x556 = 144U;
	volatile int64_t t91 = -79LL;

	t91 = ((x553+x554)&(x555*x556));

	if (t91 != 61200LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x557 = -1363604;
	uint8_t x558 = 111U;
	int64_t x559 = 2203LL;
	int8_t x560 = -23;
	volatile int64_t t92 = 1912546906151LL;

	t92 = ((x557+x558)&(x559*x560));

	if (t92 != -1363949LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x562 = UINT8_MAX;
	volatile int32_t t93 = -475;

	t93 = ((x561+x562)&(x563*x564));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x569 = INT32_MIN;
	volatile uint32_t x571 = 22926U;
	static int8_t x572 = INT8_MIN;

	t94 = ((x569+x570)&(x571*x572));

	if (t94 != 2147682560U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x577 = UINT16_MAX;
	int8_t x578 = INT8_MIN;
	volatile int8_t x579 = INT8_MIN;
	static int32_t x580 = 55;
	int32_t t95 = -1989;

	t95 = ((x577+x578)&(x579*x580));

	if (t95 != 58368) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x581 = 3;
	uint8_t x582 = 9U;
	volatile uint32_t x584 = UINT32_MAX;
	static volatile uint32_t t96 = 3U;

	t96 = ((x581+x582)&(x583*x584));

	if (t96 != 8U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x585 = -79;
	static uint16_t x586 = 21U;
	static volatile int16_t x587 = -1;
	volatile uint64_t t97 = 1482187679886938764LLU;

	t97 = ((x585+x586)&(x587*x588));

	if (t97 != 10628692056285331202LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x598 = -163919790576396LL;
	uint16_t x599 = 1918U;
	static int64_t x600 = -105221007LL;
	volatile int64_t t98 = -8700686145372LL;

	t98 = ((x597+x598)&(x599*x600));

	if (t98 != -164102075554808LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x603 = UINT32_MAX;
	uint64_t x604 = UINT64_MAX;

	t99 = ((x601+x602)&(x603*x604));

	if (t99 != 1596320875840274433LLU) { NG(); } else { ; }
	
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

