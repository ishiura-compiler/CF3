#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 1167742;
int8_t x15 = INT8_MIN;
int32_t x34 = INT32_MAX;
int64_t x36 = INT64_MIN;
uint32_t t5 = 180U;
static uint16_t x62 = 5U;
int16_t x66 = INT16_MIN;
int16_t x68 = -1;
static volatile int32_t x79 = INT32_MIN;
uint8_t x90 = 0U;
static int8_t x96 = INT8_MIN;
uint32_t t18 = 10U;
volatile uint16_t x109 = 91U;
static volatile int8_t x112 = 10;
volatile uint64_t t20 = 6439249LLU;
int32_t t22 = 23873;
int64_t x130 = 5235383LL;
volatile uint64_t x131 = 15770LLU;
int32_t x132 = -1;
volatile int32_t t23 = -774319;
int64_t x139 = INT64_MIN;
uint32_t x144 = UINT32_MAX;
int64_t t26 = -5847511022LL;
static uint8_t x150 = 15U;
int8_t x153 = INT8_MIN;
static int64_t x154 = 26344106507958178LL;
volatile int32_t t29 = -96;
int8_t x168 = INT8_MIN;
int64_t t30 = 339403887029392530LL;
int8_t x173 = INT8_MIN;
static uint64_t x188 = UINT64_MAX;
volatile int32_t t34 = -1662;
static uint8_t x190 = 1U;
volatile uint32_t x195 = 381U;
static uint16_t x197 = 19987U;
static int64_t x202 = 47LL;
static int8_t x210 = INT8_MIN;
volatile int32_t t39 = -2;
int32_t t40 = 508796046;
static volatile int32_t x220 = 256815;
int32_t x230 = INT32_MIN;
static int64_t x234 = INT64_MAX;
uint16_t x241 = 41U;
int16_t x244 = INT16_MIN;
int16_t x247 = INT16_MAX;
int32_t t47 = 9561;
uint16_t x249 = 787U;
uint16_t x257 = 1U;
uint32_t x275 = 1295U;
uint64_t x278 = 3LLU;
static volatile uint32_t t55 = 19532U;
static int32_t x300 = -456;
int8_t x301 = INT8_MIN;
static volatile uint32_t t60 = 1346U;
volatile uint64_t t62 = 3411LLU;
volatile int8_t x320 = -1;
static volatile int16_t x325 = 0;
static int32_t x326 = INT32_MIN;
volatile int32_t t65 = -6;
volatile int16_t x351 = 4;
static uint8_t x353 = UINT8_MAX;
uint32_t x371 = UINT32_MAX;
int32_t x377 = INT32_MIN;
int64_t x382 = -1LL;
static volatile uint8_t x389 = 7U;
uint16_t x391 = 19U;
static int64_t x396 = 271122820738842052LL;
volatile uint64_t x410 = 14398428683648455LLU;
uint32_t t80 = 34U;
int8_t x416 = INT8_MIN;
int16_t x419 = INT16_MIN;
static uint8_t x431 = UINT8_MAX;
uint16_t x436 = 9066U;
volatile int32_t x437 = -1;
int8_t x446 = -1;
uint16_t x448 = 3U;
int64_t t87 = -1LL;
static int8_t x452 = INT8_MIN;
volatile int16_t x454 = -8572;
int8_t x458 = 24;
int16_t x465 = INT16_MIN;
volatile int32_t x466 = INT32_MIN;
static uint16_t x479 = 507U;
int32_t t95 = -20345170;
static int16_t x483 = 8;
int8_t x491 = INT8_MIN;
int32_t x497 = INT32_MAX;
uint64_t x498 = UINT64_MAX;
volatile int32_t x500 = INT32_MIN;
volatile int32_t t99 = -189803420;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = UINT64_MAX;
	int8_t x3 = -1;
	int8_t x4 = 1;

	t0 = (x1&((x2+x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	static int8_t x6 = 0;
	uint32_t x7 = 989U;
	int8_t x8 = INT8_MIN;
	uint64_t t1 = 3452LLU;

	t1 = (x5&((x6+x7)==x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	uint64_t x14 = 3405961028232480603LLU;
	int8_t x16 = -1;
	int32_t t2 = -320;

	t2 = (x13&((x14+x15)==x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 1951978247582501750LLU;
	uint64_t x18 = 70808983164692LLU;
	volatile uint32_t x19 = 887661U;
	uint64_t x20 = 212LLU;
	volatile uint64_t t3 = 25835183284198268LLU;

	t3 = (x17&((x18+x19)==x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	volatile uint8_t x26 = 1U;
	static int32_t x27 = -22;
	static volatile uint8_t x28 = 3U;
	int64_t t4 = -145235814LL;

	t4 = (x25&((x26+x27)==x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x33 = UINT32_MAX;
	int16_t x35 = INT16_MIN;

	t5 = (x33&((x34+x35)==x36));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -26;
	volatile int32_t x38 = -760080;
	uint32_t x39 = 1012539426U;
	volatile uint32_t x40 = 1077276158U;
	volatile int32_t t6 = 27881936;

	t6 = (x37&((x38+x39)==x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = 168149814LLU;
	uint8_t x54 = UINT8_MAX;
	static int64_t x55 = -3LL;
	int8_t x56 = INT8_MAX;
	uint64_t t7 = 33067772369LLU;

	t7 = (x53&((x54+x55)==x56));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = -1;
	volatile int16_t x59 = INT16_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t8 = -263944630;

	t8 = (x57&((x58+x59)==x60));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x61 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 69U;
	static int64_t t9 = 1LL;

	t9 = (x61&((x62+x63)==x64));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = 17U;
	volatile int8_t x67 = -1;
	int32_t t10 = 0;

	t10 = (x65&((x66+x67)==x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x69 = INT64_MIN;
	int8_t x70 = -3;
	static int32_t x71 = INT32_MAX;
	volatile int8_t x72 = -1;
	volatile int64_t t11 = -22185650593593451LL;

	t11 = (x69&((x70+x71)==x72));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = UINT16_MAX;
	volatile int8_t x74 = 16;
	volatile uint16_t x75 = 205U;
	int8_t x76 = -23;
	int32_t t12 = -1;

	t12 = (x73&((x74+x75)==x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x77 = 27U;
	int16_t x78 = 401;
	volatile uint64_t x80 = 4910577558747990307LLU;
	static uint32_t t13 = 15U;

	t13 = (x77&((x78+x79)==x80));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = -282;
	int32_t x82 = INT32_MAX;
	static int64_t x83 = INT64_MIN;
	uint32_t x84 = UINT32_MAX;
	int32_t t14 = 453112973;

	t14 = (x81&((x82+x83)==x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = INT64_MAX;
	static uint32_t x86 = 691995559U;
	int64_t x87 = 29938103933132LL;
	int64_t x88 = -1LL;
	int64_t t15 = 12693309642324LL;

	t15 = (x85&((x86+x87)==x88));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x89 = INT16_MIN;
	uint32_t x91 = 68U;
	uint16_t x92 = 5U;
	int32_t t16 = 657;

	t16 = (x89&((x90+x91)==x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MAX;
	static uint16_t x94 = UINT16_MAX;
	static uint16_t x95 = UINT16_MAX;
	volatile int32_t t17 = 11124250;

	t17 = (x93&((x94+x95)==x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x101 = 78504785U;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MAX;
	static uint32_t x104 = 3483144U;

	t18 = (x101&((x102+x103)==x104));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x110 = INT64_MAX;
	int16_t x111 = -1;
	volatile int32_t t19 = 1389870;

	t19 = (x109&((x110+x111)==x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x113 = UINT64_MAX;
	static volatile uint32_t x114 = 1U;
	int16_t x115 = 0;
	volatile int32_t x116 = INT32_MIN;

	t20 = (x113&((x114+x115)==x116));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = INT64_MAX;
	volatile int16_t x118 = INT16_MAX;
	volatile int64_t x119 = -2LL;
	volatile int16_t x120 = 2176;
	int64_t t21 = -269480555901LL;

	t21 = (x117&((x118+x119)==x120));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x121 = -1;
	int64_t x122 = INT64_MAX;
	int64_t x123 = INT64_MIN;
	static int64_t x124 = 1465071285242LL;

	t22 = (x121&((x122+x123)==x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x129 = -1;

	t23 = (x129&((x130+x131)==x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x133 = -1;
	volatile int8_t x134 = -1;
	static volatile int8_t x135 = -45;
	int8_t x136 = INT8_MIN;
	int32_t t24 = -3852;

	t24 = (x133&((x134+x135)==x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = -11;
	static int64_t x138 = INT64_MAX;
	static uint8_t x140 = 2U;
	int32_t t25 = 148;

	t25 = (x137&((x138+x139)==x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x141 = INT64_MIN;
	int32_t x142 = -22395;
	static int32_t x143 = -1;

	t26 = (x141&((x142+x143)==x144));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	int32_t t27 = -833379;

	t27 = (x149&((x150+x151)==x152));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x155 = -1;
	int16_t x156 = INT16_MAX;
	volatile int32_t t28 = -43995155;

	t28 = (x153&((x154+x155)==x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = INT16_MIN;
	volatile uint16_t x158 = 171U;
	volatile uint16_t x159 = 29U;
	int32_t x160 = -1312;

	t29 = (x157&((x158+x159)==x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x165 = INT64_MIN;
	static int32_t x166 = -1;
	int8_t x167 = INT8_MAX;

	t30 = (x165&((x166+x167)==x168));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = -1;
	static uint16_t x170 = UINT16_MAX;
	volatile int32_t x171 = INT32_MIN;
	uint16_t x172 = 13U;
	volatile int32_t t31 = -631;

	t31 = (x169&((x170+x171)==x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x174 = INT32_MIN;
	volatile uint16_t x175 = 2051U;
	uint64_t x176 = 889488082183633207LLU;
	static volatile int32_t t32 = -40871;

	t32 = (x173&((x174+x175)==x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = INT64_MAX;
	int64_t x183 = INT64_MIN;
	uint8_t x184 = 1U;
	volatile uint32_t t33 = 0U;

	t33 = (x181&((x182+x183)==x184));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x185 = -1;
	volatile int8_t x186 = INT8_MIN;
	volatile int64_t x187 = -1LL;

	t34 = (x185&((x186+x187)==x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x189 = UINT64_MAX;
	static int8_t x191 = INT8_MAX;
	static volatile uint32_t x192 = 13U;
	static uint64_t t35 = 1427730LLU;

	t35 = (x189&((x190+x191)==x192));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x193 = INT16_MAX;
	uint64_t x194 = UINT64_MAX;
	uint8_t x196 = UINT8_MAX;
	int32_t t36 = -149172;

	t36 = (x193&((x194+x195)==x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x198 = INT8_MIN;
	int32_t x199 = -1;
	static int64_t x200 = INT64_MIN;
	int32_t t37 = 763;

	t37 = (x197&((x198+x199)==x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x201 = UINT8_MAX;
	int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t38 = 33;

	t38 = (x201&((x202+x203)==x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x209 = 10U;
	uint16_t x211 = 9U;
	volatile int16_t x212 = INT16_MIN;

	t39 = (x209&((x210+x211)==x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x213 = 122;
	int8_t x214 = 5;
	int32_t x215 = 1;
	static volatile int8_t x216 = INT8_MAX;

	t40 = (x213&((x214+x215)==x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x217 = 4712336U;
	int8_t x218 = -1;
	static int8_t x219 = INT8_MIN;
	volatile uint32_t t41 = 6497U;

	t41 = (x217&((x218+x219)==x220));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = -1;
	int32_t x222 = INT32_MIN;
	volatile int64_t x223 = 6513629997LL;
	uint16_t x224 = 9U;
	volatile int32_t t42 = -75844;

	t42 = (x221&((x222+x223)==x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x229 = -1;
	uint64_t x231 = UINT64_MAX;
	int32_t x232 = -3;
	volatile int32_t t43 = -25;

	t43 = (x229&((x230+x231)==x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x233 = INT32_MIN;
	int8_t x235 = -1;
	int8_t x236 = -39;
	int32_t t44 = -59;

	t44 = (x233&((x234+x235)==x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x237 = 0U;
	int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MIN;
	static uint32_t x240 = 114680365U;
	static volatile int32_t t45 = -6046;

	t45 = (x237&((x238+x239)==x240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x242 = UINT64_MAX;
	uint8_t x243 = 28U;
	static int32_t t46 = -328598;

	t46 = (x241&((x242+x243)==x244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x245 = 28U;
	uint64_t x246 = 2066142777891LLU;
	uint64_t x248 = 17972054040274472LLU;

	t47 = (x245&((x246+x247)==x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x250 = 46U;
	uint16_t x251 = 931U;
	int8_t x252 = 7;
	int32_t t48 = 0;

	t48 = (x249&((x250+x251)==x252));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x258 = INT16_MIN;
	uint8_t x259 = UINT8_MAX;
	int8_t x260 = -1;
	static volatile int32_t t49 = 314416;

	t49 = (x257&((x258+x259)==x260));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x261 = -783637715192049333LL;
	int64_t x262 = 10354191259750817LL;
	static uint16_t x263 = 17853U;
	int32_t x264 = -1;
	volatile int64_t t50 = -577781266400LL;

	t50 = (x261&((x262+x263)==x264));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x265 = UINT16_MAX;
	static uint32_t x266 = 3U;
	volatile int32_t x267 = INT32_MIN;
	int64_t x268 = -15LL;
	volatile int32_t t51 = -25528;

	t51 = (x265&((x266+x267)==x268));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x269 = 11U;
	int8_t x270 = INT8_MAX;
	int64_t x271 = -1LL;
	uint16_t x272 = 240U;
	static int32_t t52 = -1;

	t52 = (x269&((x270+x271)==x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x273 = -15;
	int8_t x274 = 4;
	static uint32_t x276 = 1890987311U;
	volatile int32_t t53 = -6;

	t53 = (x273&((x274+x275)==x276));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x277 = UINT64_MAX;
	int8_t x279 = INT8_MIN;
	int16_t x280 = -1;
	uint64_t t54 = 74151062280LLU;

	t54 = (x277&((x278+x279)==x280));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x281 = 501718111U;
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 8081011246LLU;
	int16_t x284 = INT16_MIN;

	t55 = (x281&((x282+x283)==x284));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x289 = INT64_MAX;
	uint16_t x290 = UINT16_MAX;
	uint64_t x291 = 259816482LLU;
	volatile int16_t x292 = 305;
	volatile int64_t t56 = 175357776426LL;

	t56 = (x289&((x290+x291)==x292));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x293 = INT16_MIN;
	static int8_t x294 = INT8_MAX;
	static uint8_t x295 = 18U;
	int16_t x296 = -1;
	volatile int32_t t57 = 54226594;

	t57 = (x293&((x294+x295)==x296));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x297 = INT16_MIN;
	static uint16_t x298 = 8U;
	uint8_t x299 = 19U;
	volatile int32_t t58 = -494864773;

	t58 = (x297&((x298+x299)==x300));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x302 = -416005970;
	static int64_t x303 = -271918LL;
	int64_t x304 = -19098423077LL;
	int32_t t59 = 133792296;

	t59 = (x301&((x302+x303)==x304));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x305 = 44U;
	int32_t x306 = -3735;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = -49;

	t60 = (x305&((x306+x307)==x308));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x309 = 1709U;
	static int64_t x310 = INT64_MAX;
	volatile int32_t x311 = INT32_MIN;
	static int64_t x312 = -89318912405870608LL;
	int32_t t61 = -3388906;

	t61 = (x309&((x310+x311)==x312));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x313 = UINT64_MAX;
	volatile int32_t x314 = -7395023;
	uint32_t x315 = 0U;
	uint8_t x316 = UINT8_MAX;

	t62 = (x313&((x314+x315)==x316));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x317 = 2134;
	uint64_t x318 = 386902713023186LLU;
	uint16_t x319 = UINT16_MAX;
	volatile int32_t t63 = 13527;

	t63 = (x317&((x318+x319)==x320));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x321 = UINT8_MAX;
	int8_t x322 = INT8_MIN;
	static int16_t x323 = INT16_MIN;
	volatile uint64_t x324 = 19LLU;
	int32_t t64 = 8122;

	t64 = (x321&((x322+x323)==x324));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x327 = 1;
	int32_t x328 = INT32_MIN;

	t65 = (x325&((x326+x327)==x328));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x330 = 88;
	static volatile int32_t x331 = 1;
	int32_t x332 = INT32_MIN;
	uint64_t t66 = 1574377165498062LLU;

	t66 = (x329&((x330+x331)==x332));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MIN;
	volatile int32_t x343 = -1;
	volatile uint8_t x344 = 0U;
	int32_t t67 = -936691;

	t67 = (x341&((x342+x343)==x344));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x345 = INT8_MAX;
	volatile int64_t x346 = -23212607750487237LL;
	volatile int32_t x347 = INT32_MIN;
	volatile uint32_t x348 = 16U;
	int32_t t68 = -84157;

	t68 = (x345&((x346+x347)==x348));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x349 = 937;
	volatile int16_t x350 = -1;
	int32_t x352 = 183;
	volatile int32_t t69 = -46;

	t69 = (x349&((x350+x351)==x352));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x354 = -94389557338LL;
	volatile uint16_t x355 = 29U;
	int64_t x356 = 748172232LL;
	volatile int32_t t70 = 786;

	t70 = (x353&((x354+x355)==x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x357 = INT16_MIN;
	int32_t x358 = -1;
	uint64_t x359 = 67485554995643LLU;
	int8_t x360 = -1;
	int32_t t71 = 66742650;

	t71 = (x357&((x358+x359)==x360));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = INT32_MIN;
	int8_t x372 = INT8_MAX;
	volatile int32_t t72 = -37;

	t72 = (x369&((x370+x371)==x372));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x373 = 27U;
	int64_t x374 = -1LL;
	volatile int8_t x375 = -1;
	int8_t x376 = 6;
	static volatile int32_t t73 = 2;

	t73 = (x373&((x374+x375)==x376));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x378 = 0;
	uint32_t x379 = 627009U;
	uint8_t x380 = 1U;
	int32_t t74 = 124;

	t74 = (x377&((x378+x379)==x380));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x381 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = -4;
	int32_t t75 = 1;

	t75 = (x381&((x382+x383)==x384));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MAX;
	int64_t x388 = INT64_MIN;
	volatile int32_t t76 = 50147;

	t76 = (x385&((x386+x387)==x388));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x390 = -12;
	int16_t x392 = 51;
	volatile int32_t t77 = -51250991;

	t77 = (x389&((x390+x391)==x392));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x393 = INT64_MAX;
	int16_t x394 = INT16_MAX;
	static volatile int64_t x395 = -1LL;
	volatile int64_t t78 = -174250461LL;

	t78 = (x393&((x394+x395)==x396));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x405 = -1;
	static uint32_t x406 = 62328177U;
	static volatile uint64_t x407 = 54517655294508LLU;
	static int32_t x408 = INT32_MIN;
	volatile int32_t t79 = -1490437;

	t79 = (x405&((x406+x407)==x408));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x409 = 5819556U;
	int64_t x411 = -226436804508972182LL;
	int8_t x412 = INT8_MIN;

	t80 = (x409&((x410+x411)==x412));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x413 = INT32_MIN;
	int8_t x414 = 21;
	uint8_t x415 = 5U;
	volatile int32_t t81 = 3067288;

	t81 = (x413&((x414+x415)==x416));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x417 = INT64_MIN;
	int16_t x418 = INT16_MIN;
	int64_t x420 = INT64_MIN;
	volatile int64_t t82 = 28279351189480LL;

	t82 = (x417&((x418+x419)==x420));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x429 = -1;
	int16_t x430 = -1;
	static volatile int64_t x432 = INT64_MIN;
	volatile int32_t t83 = -1152485;

	t83 = (x429&((x430+x431)==x432));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x433 = 3U;
	int16_t x434 = INT16_MAX;
	uint32_t x435 = 12U;
	int32_t t84 = -223;

	t84 = (x433&((x434+x435)==x436));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x438 = 306;
	int32_t x439 = INT32_MIN;
	uint8_t x440 = 0U;
	volatile int32_t t85 = -204328772;

	t85 = (x437&((x438+x439)==x440));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x441 = 2434;
	int64_t x442 = 706806894325871LL;
	int32_t x443 = INT32_MIN;
	static int8_t x444 = INT8_MIN;
	static volatile int32_t t86 = 140;

	t86 = (x441&((x442+x443)==x444));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x445 = -1LL;
	uint8_t x447 = 3U;

	t87 = (x445&((x446+x447)==x448));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x449 = 1783661U;
	int64_t x450 = 263593977LL;
	static int32_t x451 = 7;
	uint32_t t88 = 997385U;

	t88 = (x449&((x450+x451)==x452));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x453 = -148729327;
	int8_t x455 = 6;
	int16_t x456 = INT16_MIN;
	static int32_t t89 = 10699;

	t89 = (x453&((x454+x455)==x456));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x457 = INT8_MAX;
	int64_t x459 = 394LL;
	uint64_t x460 = 1623015536374LLU;
	volatile int32_t t90 = -100702564;

	t90 = (x457&((x458+x459)==x460));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x461 = -1;
	volatile int32_t x462 = INT32_MIN;
	uint8_t x463 = UINT8_MAX;
	int64_t x464 = INT64_MAX;
	static volatile int32_t t91 = 0;

	t91 = (x461&((x462+x463)==x464));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x467 = 62657583414428LLU;
	uint64_t x468 = UINT64_MAX;
	int32_t t92 = -25367;

	t92 = (x465&((x466+x467)==x468));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = 3;
	volatile int16_t x470 = INT16_MAX;
	int32_t x471 = -1;
	uint16_t x472 = 29U;
	static int32_t t93 = -23;

	t93 = (x469&((x470+x471)==x472));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x473 = INT64_MIN;
	int8_t x474 = -1;
	static uint8_t x475 = 37U;
	volatile uint64_t x476 = 2820552592LLU;
	int64_t t94 = 129535872750LL;

	t94 = (x473&((x474+x475)==x476));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x477 = -1;
	volatile int16_t x478 = INT16_MAX;
	int8_t x480 = INT8_MIN;

	t95 = (x477&((x478+x479)==x480));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x481 = UINT16_MAX;
	int16_t x482 = INT16_MAX;
	volatile int32_t x484 = -1;
	int32_t t96 = 320032815;

	t96 = (x481&((x482+x483)==x484));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x489 = 334U;
	volatile int16_t x490 = INT16_MIN;
	static int32_t x492 = INT32_MIN;
	uint32_t t97 = 17U;

	t97 = (x489&((x490+x491)==x492));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x499 = INT16_MAX;
	static volatile int32_t t98 = 160;

	t98 = (x497&((x498+x499)==x500));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x501 = 2008U;
	static uint64_t x502 = 1630LLU;
	int32_t x503 = -2400832;
	volatile int8_t x504 = INT8_MAX;

	t99 = (x501&((x502+x503)==x504));

	if (t99 != 0) { NG(); } else { ; }
	
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

