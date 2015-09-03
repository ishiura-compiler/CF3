#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
static uint32_t t2 = 1741591U;
static volatile uint32_t x21 = 1794823U;
int16_t x28 = 417;
static uint64_t x31 = 1807907LLU;
uint64_t x36 = 1311LLU;
uint64_t t6 = 200116294LLU;
volatile int32_t x37 = -123;
uint8_t x38 = UINT8_MAX;
uint32_t t7 = 10998772U;
int32_t x43 = 14;
static uint32_t x58 = UINT32_MAX;
volatile uint32_t t12 = 660947U;
int32_t x71 = -3948246;
static int16_t x72 = -1;
static int8_t x85 = 1;
static uint64_t x106 = 6995807412038059833LLU;
volatile int64_t t23 = 4582279005136149LL;
uint16_t x125 = 14U;
static int8_t x129 = INT8_MIN;
uint32_t x131 = 83U;
uint8_t x141 = UINT8_MAX;
int8_t x142 = INT8_MAX;
volatile int16_t x143 = INT16_MIN;
int64_t t27 = 5LL;
int64_t x146 = INT64_MIN;
uint16_t x147 = 158U;
int32_t x162 = -1;
volatile uint32_t x165 = 4596916U;
volatile int64_t t32 = -937146139711LL;
static volatile int8_t x177 = INT8_MAX;
volatile uint64_t t35 = 500302106217LLU;
static int32_t x198 = 132015;
uint32_t t38 = 1400U;
uint16_t x207 = 166U;
int32_t x210 = -12504849;
static volatile uint32_t x212 = UINT32_MAX;
int32_t x214 = 1900406;
int8_t x218 = -1;
static volatile int16_t x220 = INT16_MIN;
volatile uint64_t t45 = 2790087656625LLU;
uint8_t x240 = 15U;
volatile int32_t x246 = INT32_MIN;
uint16_t x248 = 0U;
uint32_t x254 = 258600031U;
static uint32_t t49 = 2U;
volatile int64_t t50 = 14821343364296085LL;
volatile int8_t x282 = 10;
static volatile uint64_t x284 = 7813891987781083LLU;
uint64_t x288 = UINT64_MAX;
static int32_t x290 = -1;
int8_t x302 = INT8_MAX;
int64_t x307 = -146998374885578LL;
static volatile int64_t t56 = 2522924496522LL;
volatile uint64_t x318 = 41377835138191283LLU;
int32_t x319 = INT32_MAX;
uint64_t x322 = 2369162725266LLU;
int32_t x323 = INT32_MIN;
uint32_t x330 = 165458U;
static uint64_t x337 = UINT64_MAX;
uint64_t x340 = UINT64_MAX;
volatile uint64_t t61 = 20979882LLU;
static int64_t x351 = 5296748091LL;
int32_t x352 = -1118764;
volatile int32_t x365 = 0;
int8_t x370 = INT8_MIN;
int32_t x380 = 3245;
volatile uint32_t x382 = 6751834U;
uint64_t x383 = UINT64_MAX;
int32_t x393 = 326;
int8_t x394 = INT8_MIN;
int8_t x395 = INT8_MAX;
int32_t x396 = 34086;
static uint64_t x404 = 48912849LLU;
uint8_t x406 = 46U;
volatile uint64_t t74 = 383216LLU;
uint64_t x412 = 21666230744492847LLU;
static uint8_t x417 = UINT8_MAX;
uint32_t t76 = 660U;
uint64_t x422 = 222369683768LLU;
uint32_t x432 = 3938897U;
static int16_t x443 = INT16_MIN;
int32_t t83 = -59604;
uint8_t x457 = 109U;
uint32_t x459 = 73576258U;
uint32_t t84 = 1611388400U;
int16_t x469 = INT16_MIN;
int32_t x478 = -2740;
int16_t x487 = INT16_MAX;
int8_t x494 = INT8_MAX;
int32_t x500 = -391974437;
volatile uint64_t t92 = 1LLU;
int64_t x502 = 91557103212711LL;
int64_t x504 = INT64_MAX;
int32_t x525 = 0;
int16_t x528 = INT16_MAX;
int64_t x531 = INT64_MIN;
volatile int64_t t96 = -22610899LL;
int32_t x533 = -133885;
volatile int16_t x534 = 103;
int64_t x536 = INT64_MIN;
int16_t x540 = 1;
int8_t x543 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MAX;
	int32_t x3 = -1;
	volatile uint64_t x4 = 62940637831639LLU;
	uint64_t t0 = 192LLU;

	t0 = (x1*((x2+x3)&x4));

	if (t0 != 18446744073706733568LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 19;
	int8_t x7 = INT8_MAX;
	static uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 8646693U;

	t1 = (x5*((x6+x7)&x8));

	if (t1 != 4294967150U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = UINT32_MAX;
	uint8_t x18 = 0U;
	int32_t x19 = 15998;
	int8_t x20 = -1;

	t2 = (x17*((x18+x19)&x20));

	if (t2 != 4294951298U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x22 = UINT16_MAX;
	int32_t x23 = 1178;
	uint8_t x24 = UINT8_MAX;
	volatile uint32_t t3 = 89119U;

	t3 = (x21*((x22+x23)&x24));

	if (t3 != 274607919U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	int32_t x26 = 24448661;
	static int8_t x27 = INT8_MIN;
	volatile int64_t t4 = 2712219713066LL;

	t4 = (x25*((x26+x27)&x28));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x30 = 7516245524892LLU;
	uint32_t x32 = 152U;
	uint64_t t5 = 37692895594086347LLU;

	t5 = (x29*((x30+x31)&x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = 2U;
	uint32_t x34 = UINT32_MAX;
	uint16_t x35 = UINT16_MAX;

	t6 = (x33*((x34+x35)&x36));

	if (t6 != 2620LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x39 = INT8_MIN;
	uint32_t x40 = 12U;

	t7 = (x37*((x38+x39)&x40));

	if (t7 != 4294965820U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 2U;
	static uint32_t x42 = 6673U;
	int16_t x44 = -1;
	uint32_t t8 = 2U;

	t8 = (x41*((x42+x43)&x44));

	if (t8 != 13374U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x53 = 1731442285118757LLU;
	volatile int32_t x54 = -1;
	int32_t x55 = 25680;
	static uint16_t x56 = 54U;
	uint64_t t9 = 2460LLU;

	t9 = (x53*((x54+x55)&x56));

	if (t9 != 10388653710712542LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = 6011628;
	uint32_t x59 = UINT32_MAX;
	int16_t x60 = -1;
	uint32_t t10 = 22U;

	t10 = (x57*((x58+x59)&x60));

	if (t10 != 4282944040U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MAX;
	volatile int16_t x63 = -1;
	int32_t x64 = -1;
	volatile int32_t t11 = -7996804;

	t11 = (x61*((x62+x63)&x64));

	if (t11 != 8257410) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 1U;
	uint32_t x66 = UINT32_MAX;
	int8_t x67 = INT8_MIN;
	static int8_t x68 = -1;

	t12 = (x65*((x66+x67)&x68));

	if (t12 != 4294967167U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x69 = 0U;
	uint16_t x70 = UINT16_MAX;
	volatile int32_t t13 = -190101;

	t13 = (x69*((x70+x71)&x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x73 = 789281U;
	int8_t x74 = -8;
	static uint16_t x75 = UINT16_MAX;
	static int32_t x76 = INT32_MIN;
	static volatile uint32_t t14 = 289U;

	t14 = (x73*((x74+x75)&x76));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 11914837508LLU;
	uint64_t x78 = 4LLU;
	int8_t x79 = -3;
	int16_t x80 = INT16_MIN;
	uint64_t t15 = 83504317546518LLU;

	t15 = (x77*((x78+x79)&x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = 12U;
	volatile uint8_t x82 = UINT8_MAX;
	int16_t x83 = -1;
	int64_t x84 = INT64_MAX;
	int64_t t16 = -7544133053621103LL;

	t16 = (x81*((x82+x83)&x84));

	if (t16 != 3048LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x86 = -1;
	static volatile int64_t x87 = INT64_MAX;
	volatile uint64_t x88 = 1LLU;
	static volatile uint64_t t17 = 32208717458307446LLU;

	t17 = (x85*((x86+x87)&x88));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = 1U;
	int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t18 = 67;

	t18 = (x93*((x94+x95)&x96));

	if (t18 != -32896) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x101 = UINT64_MAX;
	volatile uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MAX;
	volatile int16_t x104 = -1;
	static volatile uint64_t t19 = 1871332045513600LLU;

	t19 = (x101*((x102+x103)&x104));

	if (t19 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 25696U;
	int32_t x107 = INT32_MAX;
	int8_t x108 = INT8_MIN;
	uint64_t t20 = 2LLU;

	t20 = (x105*((x106+x107)&x108));

	if (t20 != 746316612143325184LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = -6198LL;
	int8_t x111 = INT8_MIN;
	static int8_t x112 = -7;
	int64_t t21 = -59625LL;

	t21 = (x109*((x110+x111)&x112));

	if (t21 != 207355904LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x113 = INT64_MIN;
	static volatile int16_t x114 = -2697;
	int16_t x115 = 4;
	static uint16_t x116 = 1U;
	int64_t t22 = INT64_MIN;

	t22 = (x113*((x114+x115)&x116));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x121 = 51U;
	static int64_t x122 = -1LL;
	int8_t x123 = -1;
	static uint16_t x124 = 545U;

	t23 = (x121*((x122+x123)&x124));

	if (t23 != 27744LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x126 = UINT8_MAX;
	static int32_t x127 = -1;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t24 = 1819;

	t24 = (x125*((x126+x127)&x128));

	if (t24 != 3556) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x130 = -169522727154LL;
	uint64_t x132 = 53765LLU;
	static uint64_t t25 = 9870835644388981LLU;

	t25 = (x129*((x130+x131)&x132));

	if (t25 != 18446744073706864512LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = 22394;
	int16_t x134 = -1;
	uint8_t x135 = 0U;
	volatile int32_t x136 = -1;
	volatile int32_t t26 = 0;

	t26 = (x133*((x134+x135)&x136));

	if (t26 != -22394) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x144 = -8979874962868118LL;

	t27 = (x141*((x142+x143)&x144));

	if (t27 != -2289868115539203690LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = INT8_MIN;
	uint8_t x148 = UINT8_MAX;
	volatile int64_t t28 = 28LL;

	t28 = (x145*((x146+x147)&x148));

	if (t28 != -20224LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x153 = 121;
	static volatile int64_t x154 = -1LL;
	int16_t x155 = 2860;
	int16_t x156 = -1;
	volatile int64_t t29 = 13641534LL;

	t29 = (x153*((x154+x155)&x156));

	if (t29 != 345939LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x157 = 217U;
	static int16_t x158 = 125;
	static uint32_t x159 = 146306U;
	static int8_t x160 = -3;
	uint32_t t30 = 31673293U;

	t30 = (x157*((x158+x159)&x160));

	if (t30 != 31775093U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = -1;
	int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MAX;
	volatile int32_t t31 = 46;

	t31 = (x161*((x162+x163)&x164));

	if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x166 = INT16_MIN;
	int64_t x167 = -1LL;
	uint16_t x168 = UINT16_MAX;

	t32 = (x165*((x166+x167)&x168));

	if (t32 != 150627146572LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x169 = 5872537LLU;
	int32_t x170 = -97950;
	uint64_t x171 = 75328441415LLU;
	int8_t x172 = INT8_MIN;
	static uint64_t t33 = 209671046052LLU;

	t33 = (x169*((x170+x171)&x172));

	if (t33 != 442368483906146688LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x178 = -1;
	int16_t x179 = -1;
	static int16_t x180 = -1;
	volatile int32_t t34 = -1;

	t34 = (x177*((x178+x179)&x180));

	if (t34 != -254) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x181 = -22851115562LL;
	int32_t x182 = INT32_MIN;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = INT32_MIN;

	t35 = (x181*((x182+x183)&x184));

	if (t35 != 5911073647358902272LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = -1;
	uint64_t x187 = 2068824LLU;
	volatile uint16_t x188 = UINT16_MAX;
	volatile uint64_t t36 = 45325LLU;

	t36 = (x185*((x186+x187)&x188));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x193 = 1LLU;
	int32_t x194 = INT32_MIN;
	uint16_t x195 = 7U;
	uint64_t x196 = 5808029317LLU;
	uint64_t t37 = 543633699280799068LLU;

	t37 = (x193*((x194+x195)&x196));

	if (t37 != 4294967301LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = -1;
	int32_t x199 = INT32_MIN;
	uint32_t x200 = 4014589U;

	t38 = (x197*((x198+x199)&x200));

	if (t38 != 4294966867U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x201 = -1;
	static uint64_t x202 = 1047955725LLU;
	int16_t x203 = INT16_MAX;
	int8_t x204 = 20;
	uint64_t t39 = 115158622LLU;

	t39 = (x201*((x202+x203)&x204));

	if (t39 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = 6LLU;
	int8_t x206 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	static volatile uint64_t t40 = 1070637LLU;

	t40 = (x205*((x206+x207)&x208));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x209 = 92U;
	volatile uint32_t x211 = 494341050U;
	static uint32_t t41 = 3001U;

	t41 = (x209*((x210+x211)&x212));

	if (t41 != 1379257532U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x213 = -1LL;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	static int64_t t42 = -195044553768696300LL;

	t42 = (x213*((x214+x215)&x216));

	if (t42 != 2145615872LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x217 = -1;
	uint32_t x219 = 0U;
	static volatile uint32_t t43 = 197U;

	t43 = (x217*((x218+x219)&x220));

	if (t43 != 32768U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x230 = -1LL;
	int8_t x231 = INT8_MIN;
	uint32_t x232 = 24729U;
	volatile int64_t t44 = 177273378872200LL;

	t44 = (x229*((x230+x231)&x232));

	if (t44 != 105660490424295LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x233 = UINT64_MAX;
	uint64_t x234 = 141583053795LLU;
	volatile uint8_t x235 = UINT8_MAX;
	int64_t x236 = -366127798LL;

	t45 = (x233*((x234+x235)&x236));

	if (t45 != 18446743932478860222LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x237 = UINT32_MAX;
	uint32_t x238 = 177U;
	uint64_t x239 = 3045771061LLU;
	volatile uint64_t t46 = 17433318012797LLU;

	t46 = (x237*((x238+x239)&x240));

	if (t46 != 25769803770LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x245 = 24U;
	static uint16_t x247 = 23932U;
	uint32_t t47 = 1639573U;

	t47 = (x245*((x246+x247)&x248));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x249 = 9623904LLU;
	static uint32_t x250 = UINT32_MAX;
	static int16_t x251 = INT16_MAX;
	static uint8_t x252 = 1U;
	volatile uint64_t t48 = 8762260064332LLU;

	t48 = (x249*((x250+x251)&x252));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x255 = INT32_MAX;
	static volatile int16_t x256 = INT16_MIN;

	t49 = (x253*((x254+x255)&x256));

	if (t49 != 4036395008U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x257 = INT64_MAX;
	static int8_t x258 = INT8_MAX;
	uint8_t x259 = 1U;
	volatile int8_t x260 = INT8_MAX;

	t50 = (x257*((x258+x259)&x260));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x265 = 88U;
	int16_t x266 = INT16_MIN;
	uint64_t x267 = 3372238616762830963LLU;
	int8_t x268 = 1;
	volatile uint64_t t51 = 2876LLU;

	t51 = (x265*((x266+x267)&x268));

	if (t51 != 88LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x281 = 119U;
	int8_t x283 = -57;
	uint64_t t52 = 5LLU;

	t52 = (x281*((x282+x283)&x284));

	if (t52 != 929853146545947687LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x285 = 416329246485099914LLU;
	int64_t x286 = INT64_MAX;
	int32_t x287 = -44689968;
	uint64_t t53 = 28425023772728LLU;

	t53 = (x285*((x286+x287)&x288));

	if (t53 != 13888412453832367254LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x289 = 1740LLU;
	int32_t x291 = -2706;
	int16_t x292 = INT16_MIN;
	uint64_t t54 = 1664371199407744549LLU;

	t54 = (x289*((x290+x291)&x292));

	if (t54 != 18446744073652535296LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x301 = -35;
	int16_t x303 = 1135;
	int8_t x304 = -1;
	static volatile int32_t t55 = 6444;

	t55 = (x301*((x302+x303)&x304));

	if (t55 != -44170) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x305 = INT8_MIN;
	int16_t x306 = -1;
	int64_t x308 = -1LL;

	t56 = (x305*((x306+x307)&x308));

	if (t56 != 18815791985354112LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x317 = 2U;
	int16_t x320 = INT16_MIN;
	uint64_t t57 = 1643352LLU;

	t57 = (x317*((x318+x319)&x320));

	if (t57 != 82755674571341824LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x321 = -6;
	static int16_t x324 = -1;
	volatile uint64_t t58 = 3139142564LLU;

	t58 = (x321*((x322+x323)&x324));

	if (t58 != 18446729871618101908LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x329 = -26;
	uint8_t x331 = 1U;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t59 = 15U;

	t59 = (x329*((x330+x331)&x332));

	if (t59 != 4290665362U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x333 = 12LL;
	int64_t x334 = 724556237125LL;
	int16_t x335 = INT16_MIN;
	int64_t x336 = INT64_MIN;
	volatile int64_t t60 = 2297158449884600674LL;

	t60 = (x333*((x334+x335)&x336));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x338 = UINT32_MAX;
	int16_t x339 = -429;

	t61 = (x337*((x338+x339)&x340));

	if (t61 != 18446744069414584750LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = -5345620LL;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = INT16_MIN;
	int64_t t62 = -104621708681LL;

	t62 = (x341*((x342+x343)&x344));

	if (t62 != -140561394696192LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x345 = 15116844LL;
	volatile uint32_t x346 = 26396425U;
	uint8_t x347 = 2U;
	int32_t x348 = INT32_MIN;
	volatile int64_t t63 = -3227LL;

	t63 = (x345*((x346+x347)&x348));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x349 = -1LL;
	uint64_t x350 = 94195408233096365LLU;
	uint64_t t64 = 6414461LLU;

	t64 = (x349*((x350+x351)&x352));

	if (t64 != 18352548660179711808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x353 = UINT64_MAX;
	volatile int64_t x354 = -1LL;
	int16_t x355 = -171;
	volatile uint16_t x356 = 13U;
	volatile uint64_t t65 = 27781LLU;

	t65 = (x353*((x354+x355)&x356));

	if (t65 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x357 = INT8_MAX;
	int8_t x358 = INT8_MAX;
	uint8_t x359 = UINT8_MAX;
	static volatile int8_t x360 = INT8_MIN;
	static volatile int32_t t66 = 45101337;

	t66 = (x357*((x358+x359)&x360));

	if (t66 != 32512) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x366 = -1;
	int8_t x367 = -1;
	int64_t x368 = 220020365LL;
	int64_t t67 = -3012869LL;

	t67 = (x365*((x366+x367)&x368));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x369 = -1;
	int8_t x371 = -1;
	static volatile int16_t x372 = 492;
	static int32_t t68 = -44;

	t68 = (x369*((x370+x371)&x372));

	if (t68 != -364) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x377 = 485LL;
	int16_t x378 = INT16_MIN;
	volatile int32_t x379 = INT32_MAX;
	volatile int64_t t69 = 964LL;

	t69 = (x377*((x378+x379)&x380));

	if (t69 != 1573825LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x381 = 242800LLU;
	int64_t x384 = INT64_MIN;
	static uint64_t t70 = 497079844348135650LLU;

	t70 = (x381*((x382+x383)&x384));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t t71 = 1;

	t71 = (x393*((x394+x395)&x396));

	if (t71 != 11112036) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x397 = INT32_MIN;
	static uint64_t x398 = 9665792260LLU;
	int16_t x399 = INT16_MIN;
	int8_t x400 = 15;
	uint64_t t72 = 184141380LLU;

	t72 = (x397*((x398+x399)&x400));

	if (t72 != 18446744065119617024LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x401 = INT32_MAX;
	int64_t x402 = -1LL;
	volatile uint64_t x403 = UINT64_MAX;
	volatile uint64_t t73 = 208182188873987312LLU;

	t73 = (x401*((x402+x403)&x404));

	if (t73 != 105039541208196656LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x405 = INT64_MAX;
	int16_t x407 = INT16_MIN;
	volatile uint64_t x408 = UINT64_MAX;

	t74 = (x405*((x406+x407)&x408));

	if (t74 != 32722LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x409 = -248;
	uint32_t x410 = 19930U;
	int64_t x411 = 123151079947037LL;
	volatile uint64_t t75 = 13LLU;

	t75 = (x409*((x410+x411)&x412));

	if (t75 != 18416203705355868728LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x418 = -1;
	uint32_t x419 = 7U;
	int8_t x420 = -1;

	t76 = (x417*((x418+x419)&x420));

	if (t76 != 1530U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x421 = 54U;
	int16_t x423 = INT16_MIN;
	static uint64_t x424 = UINT64_MAX;
	volatile uint64_t t77 = 177269073LLU;

	t77 = (x421*((x422+x423)&x424));

	if (t77 != 12007961154000LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x425 = 12U;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = UINT32_MAX;
	int64_t x428 = 31028306LL;
	volatile int64_t t78 = -105689LL;

	t78 = (x425*((x426+x427)&x428));

	if (t78 != 372339672LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x429 = INT8_MIN;
	int32_t x430 = 8413807;
	int8_t x431 = INT8_MIN;
	uint32_t t79 = 735U;

	t79 = (x429*((x430+x431)&x432));

	if (t79 != 4294958976U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x433 = -1;
	uint64_t x434 = 6789LLU;
	uint8_t x435 = UINT8_MAX;
	static int8_t x436 = 43;
	volatile uint64_t t80 = 79169432609809380LLU;

	t80 = (x433*((x434+x435)&x436));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x441 = 76U;
	static int8_t x442 = -1;
	int16_t x444 = INT16_MIN;
	int32_t t81 = -47305;

	t81 = (x441*((x442+x443)&x444));

	if (t81 != -4980736) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x445 = -27;
	int32_t x446 = INT32_MAX;
	volatile uint32_t x447 = UINT32_MAX;
	int64_t x448 = INT64_MIN;
	volatile int64_t t82 = 90874LL;

	t82 = (x445*((x446+x447)&x448));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x453 = -2232842;
	uint16_t x454 = 15U;
	int16_t x455 = -1;
	int16_t x456 = -1;

	t83 = (x453*((x454+x455)&x456));

	if (t83 != -31259788) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x458 = INT32_MAX;
	static int16_t x460 = -1;

	t84 = (x457*((x458+x459)&x460));

	if (t84 != 1577361069U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x461 = -1;
	int64_t x462 = INT64_MIN;
	uint16_t x463 = 1738U;
	uint16_t x464 = UINT16_MAX;
	int64_t t85 = 6LL;

	t85 = (x461*((x462+x463)&x464));

	if (t85 != -1738LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x470 = 55452366373LLU;
	int64_t x471 = -1LL;
	int64_t x472 = INT64_MAX;
	volatile uint64_t t86 = 14360748320LLU;

	t86 = (x469*((x470+x471)&x472));

	if (t86 != 18444927010568273920LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x473 = 1352U;
	int8_t x474 = -1;
	volatile int16_t x475 = INT16_MAX;
	volatile int32_t x476 = INT32_MIN;
	uint32_t t87 = 3771498U;

	t87 = (x473*((x474+x475)&x476));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x477 = 42U;
	volatile uint32_t x479 = 477576939U;
	uint16_t x480 = UINT16_MAX;
	uint32_t t88 = 3110515U;

	t88 = (x477*((x478+x479)&x480));

	if (t88 != 561414U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x481 = INT64_MIN;
	static int32_t x482 = -94;
	volatile uint64_t x483 = UINT64_MAX;
	int32_t x484 = 387;
	uint64_t t89 = 3024526676LLU;

	t89 = (x481*((x482+x483)&x484));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x485 = 10U;
	int16_t x486 = INT16_MAX;
	volatile int8_t x488 = INT8_MAX;
	volatile int32_t t90 = 14882769;

	t90 = (x485*((x486+x487)&x488));

	if (t90 != 1260) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x493 = INT16_MIN;
	uint64_t x495 = 106104385653663513LLU;
	uint8_t x496 = UINT8_MAX;
	volatile uint64_t t91 = 31116383220920LLU;

	t91 = (x493*((x494+x495)&x496));

	if (t91 != 18446744073704570880LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x497 = INT8_MIN;
	static volatile int8_t x498 = INT8_MIN;
	uint64_t x499 = 49671LLU;

	t92 = (x497*((x498+x499)&x500));

	if (t92 != 18446744073703210624LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x501 = INT16_MIN;
	int8_t x503 = 0;
	int64_t t93 = 68578553988786LL;

	t93 = (x501*((x502+x503)&x504));

	if (t93 != -3000143158074114048LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x517 = UINT8_MAX;
	uint8_t x518 = 0U;
	int64_t x519 = -452893961658731LL;
	volatile int8_t x520 = INT8_MIN;
	int64_t t94 = -255992936LL;

	t94 = (x517*((x518+x519)&x520));

	if (t94 != -115487960222981760LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x526 = 14697653LLU;
	static uint16_t x527 = UINT16_MAX;
	volatile uint64_t t95 = 5542939923272147LLU;

	t95 = (x525*((x526+x527)&x528));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x529 = 517903;
	int32_t x530 = 2;
	uint32_t x532 = UINT32_MAX;

	t96 = (x529*((x530+x531)&x532));

	if (t96 != 1035806LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x535 = UINT16_MAX;
	volatile int64_t t97 = -862065869922LL;

	t97 = (x533*((x534+x535)&x536));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x537 = INT16_MIN;
	static int32_t x538 = 64;
	static int16_t x539 = INT16_MIN;
	volatile int32_t t98 = 1650944;

	t98 = (x537*((x538+x539)&x540));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x541 = 10LLU;
	static int16_t x542 = INT16_MIN;
	uint32_t x544 = 15077U;
	uint64_t t99 = 2666636LLU;

	t99 = (x541*((x542+x543)&x544));

	if (t99 != 149760LLU) { NG(); } else { ; }
	
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

