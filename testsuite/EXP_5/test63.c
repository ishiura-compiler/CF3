#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = 343276U;
static uint32_t x10 = 9053504U;
int16_t x11 = -1;
int16_t x17 = -1;
uint32_t t4 = 673079U;
uint8_t x27 = 2U;
uint32_t x45 = 394U;
volatile uint64_t x46 = UINT64_MAX;
uint32_t x54 = 40098U;
uint16_t x56 = 2884U;
int8_t x60 = INT8_MIN;
static int8_t x61 = -1;
int64_t x65 = 30LL;
volatile int16_t x72 = INT16_MIN;
volatile int64_t x73 = INT64_MIN;
int64_t x81 = INT64_MAX;
volatile int8_t x89 = 0;
int32_t t20 = 533358;
uint64_t t21 = 9758030802665LLU;
static uint64_t t22 = 952739LLU;
uint64_t x105 = 857449LLU;
static volatile uint64_t t23 = 25578LLU;
uint8_t x120 = 16U;
uint64_t x123 = UINT64_MAX;
int8_t x134 = 1;
static volatile int64_t x135 = 4369171770035620475LL;
static int64_t t29 = -696758LL;
int16_t x137 = INT16_MAX;
int64_t x138 = INT64_MIN;
uint8_t x139 = 18U;
volatile uint16_t x144 = 17291U;
int64_t t31 = -692891999LL;
int16_t x147 = INT16_MIN;
volatile int16_t x148 = INT16_MIN;
volatile uint64_t t32 = 114255247LLU;
int32_t x162 = -1;
int32_t x163 = -258704318;
volatile int32_t t36 = 20695;
static int16_t x169 = INT16_MAX;
uint16_t x179 = UINT16_MAX;
uint32_t x180 = 130126017U;
int64_t t40 = -3178424LL;
int8_t x184 = INT8_MAX;
volatile int64_t t44 = INT64_MIN;
static int64_t x201 = INT64_MIN;
static int8_t x202 = INT8_MIN;
int64_t t45 = 7LL;
int32_t x211 = -1;
int32_t x222 = -1;
int16_t x226 = INT16_MIN;
uint8_t x227 = UINT8_MAX;
volatile int32_t t49 = -17614;
int8_t x230 = -10;
int16_t x231 = INT16_MIN;
static int32_t t50 = 1168936;
int32_t x242 = -1;
int32_t x246 = -304;
int16_t x258 = 191;
volatile int64_t t56 = 1431683518011571580LL;
int32_t x275 = -1;
uint32_t x280 = UINT32_MAX;
static uint16_t x283 = 1227U;
uint8_t x288 = UINT8_MAX;
static volatile int16_t x290 = 239;
uint8_t x293 = 3U;
int8_t x296 = -1;
uint16_t x297 = 59U;
static int64_t x300 = 3205LL;
static uint32_t x301 = UINT32_MAX;
static int64_t x302 = INT64_MIN;
uint64_t x309 = UINT64_MAX;
uint64_t t68 = 1914565202166850713LLU;
uint64_t x316 = 13090364993041329LLU;
volatile uint64_t t70 = 15753632916693LLU;
int32_t x326 = INT32_MIN;
int8_t x339 = INT8_MIN;
int16_t x341 = INT16_MAX;
int16_t x347 = -2;
volatile uint64_t x349 = 3935671LLU;
static uint64_t t77 = 117503916LLU;
static volatile int64_t x356 = INT64_MIN;
int64_t x358 = INT64_MIN;
static volatile int64_t t79 = 1116091330457400LL;
int64_t t80 = 0LL;
uint64_t x372 = 480LLU;
uint64_t x373 = 7168758571611679290LLU;
uint32_t x374 = 966U;
static uint64_t x379 = UINT64_MAX;
int64_t x388 = 1513894LL;
int8_t x398 = -31;
int32_t x399 = 24734;
static int64_t x400 = 363LL;
volatile int8_t x404 = 40;
uint64_t x405 = UINT64_MAX;
uint16_t x406 = 11U;
volatile uint32_t x408 = 113259718U;
uint64_t x410 = 859561263015LLU;
uint32_t x412 = UINT32_MAX;
static int32_t x415 = INT32_MIN;
int64_t x419 = -1LL;
int8_t x421 = -1;
volatile uint64_t t92 = 9LLU;
static int8_t x429 = 5;
int8_t x431 = INT8_MAX;
static uint64_t x441 = UINT64_MAX;
volatile int64_t x443 = -1LL;
static int16_t x450 = INT16_MIN;
volatile int16_t x457 = INT16_MIN;
static int8_t x459 = 8;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static uint8_t x2 = 7U;
	uint64_t x3 = 108591961855LLU;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 8164808204544LLU;

	t0 = (x1&((x2+x3)%x4));

	if (t0 != 108591961856LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x6 = -2862309018603LL;
	int8_t x7 = 28;
	static int8_t x8 = 22;
	static volatile int64_t t1 = -136046719277884949LL;

	t1 = (x5&((x6+x7)%x8));

	if (t1 != 343276LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -2581353LL;
	int32_t x12 = -1;
	volatile int64_t t2 = -7595191LL;

	t2 = (x9&((x10+x11)%x12));

	if (t2 != 8913943LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = -5;
	int8_t x19 = -1;
	static uint8_t x20 = 1U;
	static volatile int32_t t3 = -1268013;

	t3 = (x17&((x18+x19)%x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x22 = 8U;
	static int8_t x23 = INT8_MAX;
	static uint32_t x24 = 379692U;

	t4 = (x21&((x22+x23)%x24));

	if (t4 != 128U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 21;
	static int16_t x26 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t5 = -25;

	t5 = (x25&((x26+x27)%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	static volatile uint64_t x30 = 459964LLU;
	static int8_t x31 = -1;
	volatile int64_t x32 = INT64_MIN;
	volatile uint64_t t6 = 667703113273LLU;

	t6 = (x29&((x30+x31)%x32));

	if (t6 != 459963LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x41 = 2LLU;
	static uint32_t x42 = UINT32_MAX;
	static volatile int16_t x43 = 101;
	int32_t x44 = INT32_MAX;
	uint64_t t7 = 590958LLU;

	t7 = (x41&((x42+x43)%x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x47 = 61168551622681LLU;
	static int32_t x48 = INT32_MAX;
	volatile uint64_t t8 = 360LLU;

	t8 = (x45&((x46+x47)%x48));

	if (t8 != 266LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 3U;
	int64_t x50 = 534070998011929707LL;
	volatile int16_t x51 = INT16_MIN;
	volatile uint32_t x52 = 1U;
	static int64_t t9 = -47426114310659217LL;

	t9 = (x49&((x50+x51)%x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = 480;
	uint16_t x55 = 6U;
	volatile uint32_t t10 = 104U;

	t10 = (x53&((x54+x55)%x56));

	if (t10 != 32U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = UINT16_MAX;
	uint64_t x58 = UINT64_MAX;
	uint8_t x59 = 1U;
	volatile uint64_t t11 = 211298571LLU;

	t11 = (x57&((x58+x59)%x60));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = 3;
	int64_t x63 = -1LL;
	static int8_t x64 = INT8_MIN;
	static volatile int64_t t12 = 2742090947LL;

	t12 = (x61&((x62+x63)%x64));

	if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x66 = 10U;
	int16_t x67 = INT16_MAX;
	int64_t x68 = INT64_MIN;
	int64_t t13 = 107199254LL;

	t13 = (x65&((x66+x67)%x68));

	if (t13 != 8LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = INT64_MAX;
	volatile uint16_t x70 = 8832U;
	int16_t x71 = -1;
	static int64_t t14 = -2034366159718LL;

	t14 = (x69&((x70+x71)%x72));

	if (t14 != 8831LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x74 = 3U;
	volatile int16_t x75 = -1;
	int8_t x76 = INT8_MIN;
	volatile int64_t t15 = -455574765532364368LL;

	t15 = (x73&((x74+x75)%x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	static int8_t x78 = INT8_MIN;
	volatile uint64_t x79 = 1836LLU;
	static volatile uint64_t x80 = UINT64_MAX;
	volatile uint64_t t16 = 5674880038168674LLU;

	t16 = (x77&((x78+x79)%x80));

	if (t16 != 1708LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x82 = 0U;
	int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MAX;
	volatile int64_t t17 = -51925837144332LL;

	t17 = (x81&((x82+x83)%x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x85 = 42U;
	static uint16_t x86 = 6U;
	static volatile int16_t x87 = -1;
	int8_t x88 = INT8_MIN;
	static int32_t t18 = -3257245;

	t18 = (x85&((x86+x87)%x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = 16344;
	int16_t x91 = -1;
	static uint32_t x92 = 397U;
	volatile uint32_t t19 = 112782244U;

	t19 = (x89&((x90+x91)%x92));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	static int16_t x94 = INT16_MAX;
	volatile uint16_t x95 = 3282U;
	uint16_t x96 = 3U;

	t20 = (x93&((x94+x95)%x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = -1;
	static uint64_t x98 = 55723047LLU;
	volatile int8_t x99 = 2;
	int8_t x100 = INT8_MAX;

	t21 = (x97&((x98+x99)%x100));

	if (t21 != 21LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x101 = 529603795LLU;
	int32_t x102 = -1;
	static volatile uint16_t x103 = 920U;
	int64_t x104 = -1LL;

	t22 = (x101&((x102+x103)%x104));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x106 = -1;
	static volatile int32_t x107 = -1;
	volatile int32_t x108 = INT32_MIN;

	t23 = (x105&((x106+x107)%x108));

	if (t23 != 857448LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -43;
	int64_t x114 = -231087961049795044LL;
	int8_t x115 = INT8_MIN;
	int32_t x116 = -1;
	static int64_t t24 = 32686LL;

	t24 = (x113&((x114+x115)%x116));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = 2033578966255801LL;
	uint16_t x118 = UINT16_MAX;
	int32_t x119 = 323;
	int64_t t25 = 10LL;

	t25 = (x117&((x118+x119)%x120));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -1;
	int64_t x122 = 3491401LL;
	volatile int32_t x124 = -1001;
	uint64_t t26 = 1323LLU;

	t26 = (x121&((x122+x123)%x124));

	if (t26 != 3491400LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = 210;
	static int16_t x126 = -25;
	static int16_t x127 = 12419;
	volatile int8_t x128 = -5;
	static volatile int32_t t27 = 31;

	t27 = (x125&((x126+x127)%x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = INT32_MIN;
	static uint8_t x130 = 27U;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	volatile int64_t t28 = 44611304LL;

	t28 = (x129&((x130+x131)%x132));

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = UINT8_MAX;
	volatile uint32_t x136 = UINT32_MAX;

	t29 = (x133&((x134+x135)%x136));

	if (t29 != 15LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x140 = INT16_MIN;
	volatile int64_t t30 = -227305004487LL;

	t30 = (x137&((x138+x139)%x140));

	if (t30 != 18LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -754930435625453LL;
	static int8_t x142 = INT8_MAX;
	int8_t x143 = INT8_MIN;

	t31 = (x141&((x142+x143)%x144));

	if (t31 != -754930435625453LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 3681394885621608468LLU;
	int8_t x146 = -5;

	t32 = (x145&((x146+x147)%x148));

	if (t32 != 3681394885621608464LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 0U;
	static int32_t x150 = -1;
	volatile int16_t x151 = INT16_MAX;
	uint32_t x152 = 320212U;
	uint32_t t33 = 7U;

	t33 = (x149&((x150+x151)%x152));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x153 = 21U;
	int32_t x154 = INT32_MAX;
	int64_t x155 = INT64_MIN;
	volatile int32_t x156 = INT32_MIN;
	volatile int64_t t34 = 10647403710LL;

	t34 = (x153&((x154+x155)%x156));

	if (t34 != 21LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = 1349569936LLU;
	static uint64_t x158 = UINT64_MAX;
	volatile int16_t x159 = -766;
	uint16_t x160 = 1470U;
	volatile uint64_t t35 = 169612326670378605LLU;

	t35 = (x157&((x158+x159)%x160));

	if (t35 != 400LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = 6;
	static int8_t x164 = INT8_MAX;

	t36 = (x161&((x162+x163)%x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x165 = INT32_MAX;
	int64_t x166 = 2152937919034363263LL;
	volatile uint8_t x167 = UINT8_MAX;
	volatile int32_t x168 = -1;
	int64_t t37 = 1255LL;

	t37 = (x165&((x166+x167)%x168));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x170 = -23;
	int16_t x171 = -1;
	volatile uint64_t x172 = 14LLU;
	volatile uint64_t t38 = 3538221LLU;

	t38 = (x169&((x170+x171)%x172));

	if (t38 != 6LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x173 = INT64_MIN;
	int16_t x174 = INT16_MIN;
	int8_t x175 = -1;
	int8_t x176 = INT8_MIN;
	volatile int64_t t39 = INT64_MIN;

	t39 = (x173&((x174+x175)%x176));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = -1;

	t40 = (x177&((x178+x179)%x180));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = -2;
	volatile uint16_t x182 = 4971U;
	int64_t x183 = INT64_MIN;
	int64_t t41 = 1414263280768915824LL;

	t41 = (x181&((x182+x183)%x184));

	if (t41 != -110LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 1;
	uint8_t x186 = UINT8_MAX;
	int32_t x187 = 40390104;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t42 = 102284432U;

	t42 = (x185&((x186+x187)%x188));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = INT64_MIN;
	uint32_t x190 = UINT32_MAX;
	volatile int32_t x191 = -1;
	int16_t x192 = 914;
	volatile int64_t t43 = 2149829952512LL;

	t43 = (x189&((x190+x191)%x192));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x193 = INT64_MIN;
	volatile int16_t x194 = -15719;
	uint8_t x195 = 67U;
	uint16_t x196 = 701U;

	t44 = (x193&((x194+x195)%x196));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x203 = 63483;
	int8_t x204 = 46;

	t45 = (x201&((x202+x203)%x204));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = -2509;
	volatile int32_t x207 = 0;
	uint8_t x208 = 27U;
	volatile int32_t t46 = -57458;

	t46 = (x205&((x206+x207)%x208));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MAX;
	static volatile int16_t x212 = INT16_MIN;
	static volatile int32_t t47 = -3222866;

	t47 = (x209&((x210+x211)%x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x221 = UINT8_MAX;
	int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	static int64_t t48 = -205LL;

	t48 = (x221&((x222+x223)%x224));

	if (t48 != 254LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = INT32_MAX;
	static uint16_t x228 = 298U;

	t49 = (x225&((x226+x227)%x228));

	if (t49 != 2147483617) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x229 = INT8_MIN;
	volatile int16_t x232 = -12674;

	t50 = (x229&((x230+x231)%x232));

	if (t50 != -7552) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = INT32_MAX;
	uint16_t x238 = UINT16_MAX;
	int8_t x239 = INT8_MIN;
	volatile int64_t x240 = INT64_MIN;
	static int64_t t51 = -4358LL;

	t51 = (x237&((x238+x239)%x240));

	if (t51 != 65407LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = 22;
	int16_t x243 = -1;
	int8_t x244 = INT8_MAX;
	static int32_t t52 = -3103298;

	t52 = (x241&((x242+x243)%x244));

	if (t52 != 22) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x245 = INT16_MAX;
	int16_t x247 = INT16_MIN;
	static int32_t x248 = INT32_MIN;
	int32_t t53 = -731;

	t53 = (x245&((x246+x247)%x248));

	if (t53 != 32464) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = 87299558LLU;
	uint32_t x250 = UINT32_MAX;
	uint32_t x251 = 139616U;
	uint8_t x252 = 26U;
	uint64_t t54 = 10666603153026282LLU;

	t54 = (x249&((x250+x251)%x252));

	if (t54 != 4LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x253 = -124;
	int32_t x254 = INT32_MAX;
	uint32_t x255 = 86302U;
	static uint64_t x256 = 593858639123LLU;
	uint64_t t55 = 8020084815516370847LLU;

	t55 = (x253&((x254+x255)%x256));

	if (t55 != 2147569924LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x257 = 168U;
	int64_t x259 = -2255007512LL;
	int64_t x260 = -1276926323506146120LL;

	t56 = (x257&((x258+x259)%x260));

	if (t56 != 160LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = 31U;
	volatile int32_t t57 = -32797524;

	t57 = (x261&((x262+x263)%x264));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x265 = 668U;
	int64_t x266 = INT64_MAX;
	int32_t x267 = -11914;
	uint16_t x268 = UINT16_MAX;
	volatile int64_t t58 = -777228330907459LL;

	t58 = (x265&((x266+x267)%x268));

	if (t58 != 20LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = INT64_MIN;
	static int64_t x274 = INT64_MAX;
	static uint8_t x276 = 27U;
	volatile int64_t t59 = -2064836975854LL;

	t59 = (x273&((x274+x275)%x276));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x277 = INT64_MAX;
	int64_t x278 = 2LL;
	static uint16_t x279 = 1U;
	volatile int64_t t60 = 1594591760157921936LL;

	t60 = (x277&((x278+x279)%x280));

	if (t60 != 3LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MAX;
	int32_t x284 = -39678;
	volatile int32_t t61 = 3776868;

	t61 = (x281&((x282+x283)%x284));

	if (t61 != 1280) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x285 = 12791689510310LLU;
	volatile int16_t x286 = 6118;
	int8_t x287 = 6;
	uint64_t t62 = 12LLU;

	t62 = (x285&((x286+x287)%x288));

	if (t62 != 4LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = UINT32_MAX;
	volatile int16_t x291 = -873;
	volatile int16_t x292 = INT16_MIN;
	uint32_t t63 = 67870656U;

	t63 = (x289&((x290+x291)%x292));

	if (t63 != 4294966662U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x294 = INT8_MIN;
	uint8_t x295 = UINT8_MAX;
	int32_t t64 = -35174068;

	t64 = (x293&((x294+x295)%x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x298 = INT64_MIN;
	int32_t x299 = 910;
	int64_t t65 = -3673882269LL;

	t65 = (x297&((x298+x299)%x300));

	if (t65 != 11LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x303 = 138803236411LLU;
	static volatile int16_t x304 = INT16_MIN;
	uint64_t t66 = 3335880941LLU;

	t66 = (x301&((x302+x303)%x304));

	if (t66 != 1364282939LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x305 = INT32_MIN;
	uint32_t x306 = 713401204U;
	int64_t x307 = INT64_MIN;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t67 = 42036663LLU;

	t67 = (x305&((x306+x307)%x308));

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x310 = INT8_MIN;
	volatile int16_t x311 = 0;
	int8_t x312 = -1;

	t68 = (x309&((x310+x311)%x312));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x313 = -1028710581092LL;
	int16_t x314 = -37;
	int16_t x315 = -1;
	volatile uint64_t t69 = 60652711513LLU;

	t69 = (x313&((x314+x315)%x316));

	if (t69 != 2418926588935304LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x317 = 5993;
	static int64_t x318 = INT64_MAX;
	volatile int16_t x319 = -1;
	uint64_t x320 = UINT64_MAX;

	t70 = (x317&((x318+x319)%x320));

	if (t70 != 5992LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x321 = -1;
	static volatile int8_t x322 = -1;
	uint32_t x323 = 109168312U;
	static int8_t x324 = -1;
	volatile uint32_t t71 = 169726651U;

	t71 = (x321&((x322+x323)%x324));

	if (t71 != 109168311U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = INT32_MAX;
	int64_t x327 = INT64_MAX;
	uint16_t x328 = UINT16_MAX;
	int64_t t72 = -1255108938416083499LL;

	t72 = (x325&((x326+x327)%x328));

	if (t72 != 65534LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x329 = 256377713666LLU;
	int16_t x330 = -1;
	int16_t x331 = 941;
	static int16_t x332 = INT16_MIN;
	uint64_t t73 = 2LLU;

	t73 = (x329&((x330+x331)%x332));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = -1;
	uint8_t x338 = 95U;
	int8_t x340 = INT8_MIN;
	int32_t t74 = -1;

	t74 = (x337&((x338+x339)%x340));

	if (t74 != -33) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x342 = 23;
	volatile int16_t x343 = -4;
	volatile int32_t x344 = INT32_MIN;
	int32_t t75 = -92;

	t75 = (x341&((x342+x343)%x344));

	if (t75 != 19) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MAX;
	uint8_t x348 = 11U;
	volatile int32_t t76 = -775732;

	t76 = (x345&((x346+x347)%x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x350 = 2558604080LL;
	uint16_t x351 = 2082U;
	int16_t x352 = INT16_MAX;

	t77 = (x349&((x350+x351)%x352));

	if (t77 != 3094LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = 1339876;
	int64_t x355 = -1LL;
	volatile int64_t t78 = -3902092943004389165LL;

	t78 = (x353&((x354+x355)%x356));

	if (t78 != 1310720LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x357 = -1;
	static int32_t x359 = 128159345;
	int64_t x360 = INT64_MIN;

	t79 = (x357&((x358+x359)%x360));

	if (t79 != -9223372036726616463LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = -1LL;
	volatile uint8_t x362 = 35U;
	uint16_t x363 = 166U;
	int8_t x364 = INT8_MIN;

	t80 = (x361&((x362+x363)%x364));

	if (t80 != 73LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x369 = 1U;
	uint8_t x370 = UINT8_MAX;
	uint32_t x371 = 568911U;
	volatile uint64_t t81 = 299343513LLU;

	t81 = (x369&((x370+x371)%x372));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x375 = -2661537831024185LL;
	static uint32_t x376 = 52457U;
	uint64_t t82 = 85001034LLU;

	t82 = (x373&((x374+x375)%x376));

	if (t82 != 7168758571611677208LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	int32_t x380 = INT32_MIN;
	volatile uint64_t t83 = 279616826234LLU;

	t83 = (x377&((x378+x379)%x380));

	if (t83 != 2147483392LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 4069U;
	int8_t x384 = INT8_MIN;
	uint32_t t84 = 89232U;

	t84 = (x381&((x382+x383)%x384));

	if (t84 != 3941U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = 3967;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MAX;
	static volatile int64_t t85 = -2829902LL;

	t85 = (x385&((x386+x387)%x388));

	if (t85 != 1829LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x397 = 10472U;
	volatile int64_t t86 = 13692155315291LL;

	t86 = (x397&((x398+x399)%x400));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x401 = 4;
	static volatile int16_t x402 = -1;
	volatile int64_t x403 = INT64_MAX;
	volatile int64_t t87 = -11LL;

	t87 = (x401&((x402+x403)%x404));

	if (t87 != 4LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x407 = INT8_MAX;
	volatile uint64_t t88 = 996216521642443LLU;

	t88 = (x405&((x406+x407)%x408));

	if (t88 != 138LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x409 = UINT16_MAX;
	int32_t x411 = INT32_MIN;
	uint64_t t89 = 25850391358LLU;

	t89 = (x409&((x410+x411)%x412));

	if (t89 != 110LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = -1;
	int64_t x414 = INT64_MAX;
	int16_t x416 = 9;
	static volatile int64_t t90 = -28LL;

	t90 = (x413&((x414+x415)%x416));

	if (t90 != 5LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = 204;
	int32_t x418 = -18;
	static int16_t x420 = INT16_MIN;
	volatile int64_t t91 = -886030707611961823LL;

	t91 = (x417&((x418+x419)%x420));

	if (t91 != 204LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x422 = INT16_MIN;
	uint64_t x423 = 53615728LLU;
	int16_t x424 = INT16_MIN;

	t92 = (x421&((x422+x423)%x424));

	if (t92 != 53582960LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x430 = INT32_MIN;
	int16_t x432 = -565;
	int32_t t93 = -611816;

	t93 = (x429&((x430+x431)%x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x442 = 800856640574132553LLU;
	volatile int16_t x444 = INT16_MIN;
	uint64_t t94 = 568433126359LLU;

	t94 = (x441&((x442+x443)%x444));

	if (t94 != 800856640574132552LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x445 = 270U;
	int64_t x446 = INT64_MIN;
	int8_t x447 = INT8_MAX;
	int64_t x448 = -113LL;
	static int64_t t95 = -2057449618944LL;

	t95 = (x445&((x446+x447)%x448));

	if (t95 != 270LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x449 = 70499164003LL;
	volatile int8_t x451 = -13;
	uint64_t x452 = 515572LLU;
	volatile uint64_t t96 = 5392LLU;

	t96 = (x449&((x450+x451)%x452));

	if (t96 != 204387LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x453 = INT8_MIN;
	int8_t x454 = INT8_MIN;
	int8_t x455 = -6;
	volatile uint64_t x456 = 82403402LLU;
	uint64_t t97 = 1LLU;

	t97 = (x453&((x454+x455)%x456));

	if (t97 != 25373696LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x458 = UINT16_MAX;
	static uint16_t x460 = 6U;
	volatile int32_t t98 = 475496509;

	t98 = (x457&((x458+x459)%x460));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x461 = INT32_MAX;
	int32_t x462 = INT32_MIN;
	int32_t x463 = 88356;
	static uint32_t x464 = 8241596U;
	uint32_t t99 = 352U;

	t99 = (x461&((x462+x463)%x464));

	if (t99 != 4757044U) { NG(); } else { ; }
	
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

