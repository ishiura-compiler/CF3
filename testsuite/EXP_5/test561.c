#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = -4LL;
int8_t x14 = -1;
int32_t x16 = -573340086;
int64_t t3 = -800299400688232166LL;
uint32_t t5 = 2U;
int16_t x26 = -1;
static int64_t x27 = INT64_MAX;
volatile uint64_t t7 = 84465LLU;
uint16_t x37 = 473U;
int16_t x41 = INT16_MIN;
uint64_t x46 = 367773742713899596LLU;
int64_t x51 = INT64_MIN;
int16_t x52 = -6;
volatile int8_t x53 = -46;
volatile int8_t x54 = INT8_MIN;
int64_t x55 = INT64_MIN;
volatile int32_t x60 = INT32_MAX;
int16_t x65 = INT16_MIN;
int32_t x67 = INT32_MAX;
int32_t x72 = -1;
int8_t x76 = 1;
uint8_t x78 = 10U;
static volatile int32_t t19 = 27;
uint64_t x83 = 672979623451648LLU;
uint64_t t20 = UINT64_MAX;
int8_t x89 = INT8_MAX;
volatile int32_t x96 = INT32_MIN;
uint64_t t22 = 78633405011279LLU;
volatile uint8_t x105 = 0U;
int32_t x108 = INT32_MIN;
static uint64_t x111 = 130157274799257LLU;
uint64_t t27 = 6LLU;
volatile uint8_t x131 = 13U;
uint64_t x133 = 6452185463LLU;
int8_t x135 = INT8_MIN;
uint8_t x136 = 114U;
uint8_t x137 = 1U;
static int8_t x140 = INT8_MIN;
static int32_t x147 = INT32_MIN;
uint32_t x149 = UINT32_MAX;
static uint16_t x166 = 15741U;
uint16_t x167 = 7U;
uint64_t x169 = 7987LLU;
static volatile int16_t x171 = INT16_MAX;
int32_t x174 = 110;
int32_t x180 = 2231;
volatile int8_t x186 = INT8_MAX;
uint32_t t41 = 2891U;
static int32_t t43 = -31298332;
int64_t x212 = -4800771665LL;
int16_t x218 = INT16_MIN;
uint16_t x219 = UINT16_MAX;
static uint32_t x220 = UINT32_MAX;
volatile uint64_t t47 = 14LLU;
int8_t x221 = INT8_MIN;
static volatile uint32_t x227 = 61307314U;
static int16_t x243 = INT16_MIN;
uint8_t x254 = 0U;
static int64_t x257 = INT64_MIN;
uint16_t x265 = UINT16_MAX;
int32_t x268 = INT32_MIN;
volatile int64_t t59 = -1068173LL;
volatile uint32_t t61 = 47233U;
uint64_t x285 = 117597030LLU;
uint16_t x297 = 143U;
uint64_t x302 = 1311675LLU;
uint64_t t64 = 20369178027583LLU;
volatile uint64_t x307 = UINT64_MAX;
static volatile uint32_t x310 = 0U;
int32_t x311 = 7;
uint16_t x312 = UINT16_MAX;
volatile int64_t t66 = 11206091LL;
volatile int8_t x316 = INT8_MIN;
static volatile int32_t t67 = 5377;
uint8_t x320 = 16U;
int16_t x324 = INT16_MIN;
volatile uint16_t x337 = 3244U;
int64_t t73 = INT64_MIN;
int64_t x345 = 247135971071LL;
volatile int32_t x346 = INT32_MIN;
static uint64_t x351 = 65033865932576851LLU;
int8_t x352 = INT8_MIN;
int8_t x353 = 0;
int64_t x355 = -11591888316LL;
volatile int64_t x356 = 5LL;
static volatile int16_t x359 = INT16_MIN;
static uint64_t t77 = 0LLU;
uint16_t x366 = UINT16_MAX;
int8_t x373 = INT8_MAX;
int8_t x375 = -2;
static uint16_t x379 = UINT16_MAX;
int16_t x380 = 7235;
int16_t x381 = INT16_MAX;
int32_t x382 = 27;
volatile int32_t x392 = INT32_MIN;
volatile int64_t t85 = 157359LL;
int16_t x393 = 1;
int16_t x399 = INT16_MAX;
int32_t x404 = -576308;
uint16_t x410 = 13U;
uint8_t x416 = 1U;
int8_t x417 = INT8_MAX;
int16_t x423 = -1;
uint64_t x425 = 479493175840015619LLU;
volatile int8_t x426 = INT8_MIN;
int32_t x427 = INT32_MAX;
static int64_t x428 = 171LL;
volatile uint64_t t94 = 257935LLU;
volatile int32_t x429 = -1;
int32_t x430 = INT32_MAX;
uint16_t x433 = UINT16_MAX;
volatile uint64_t x436 = UINT64_MAX;
volatile uint16_t x437 = 6496U;
int64_t x444 = -1LL;
static volatile int64_t t98 = 66263946331801LL;
static int8_t x448 = -1;


void f0(void) {
	static int32_t x1 = -246464;
	uint64_t x2 = 148285LLU;
	static int64_t x3 = INT64_MAX;
	int32_t x4 = INT32_MAX;
	static volatile uint64_t t0 = 1630941129826119LLU;

	t0 = (x1-((x2/x3)%x4));

	if (t0 != 18446744073709305152LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static uint8_t x6 = 0U;
	int16_t x7 = INT16_MAX;
	static int64_t x8 = -1LL;
	static volatile int64_t t1 = -46966591LL;

	t1 = (x5-((x6/x7)%x8));

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 247;
	static int32_t x10 = -1;
	volatile uint16_t x12 = 5U;
	volatile int64_t t2 = 3567413660618469798LL;

	t2 = (x9-((x10/x11)%x12));

	if (t2 != 247LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	int64_t x15 = 117553000585349LL;

	t3 = (x13-((x14/x15)%x16));

	if (t3 != 65535LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -237;
	static uint8_t x18 = UINT8_MAX;
	volatile int8_t x19 = INT8_MAX;
	static int16_t x20 = 3;
	int32_t t4 = -16708354;

	t4 = (x17-((x18/x19)%x20));

	if (t4 != -239) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 334;
	static int32_t x22 = INT32_MIN;
	static uint32_t x23 = 495777U;
	uint16_t x24 = 423U;

	t5 = (x21-((x22/x23)%x24));

	if (t5 != 233U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int16_t x28 = -1;
	static volatile int64_t t6 = 138974893LL;

	t6 = (x25-((x26/x27)%x28));

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -48;
	volatile int32_t x30 = -1;
	volatile uint64_t x31 = 22668882136LLU;
	int32_t x32 = -247;

	t7 = (x29-((x30/x31)%x32));

	if (t7 != 18446744072895804161LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = 11441;
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = -27;
	int64_t x36 = INT64_MIN;
	static volatile int64_t t8 = 174905493154900LL;

	t8 = (x33-((x34/x35)%x36));

	if (t8 != -79524990LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = INT16_MAX;
	int32_t x40 = INT32_MAX;
	volatile uint32_t t9 = 162752U;

	t9 = (x37-((x38/x39)%x40));

	if (t9 != 4294836693U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x42 = INT16_MIN;
	uint8_t x43 = 11U;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -74;

	t10 = (x41-((x42/x43)%x44));

	if (t10 != -29790) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -87LL;
	int8_t x47 = 26;
	uint64_t x48 = 33877692215LLU;
	uint64_t t11 = 2163142080422LLU;

	t11 = (x45-((x46/x47)%x48));

	if (t11 != 18446744051978006955LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint32_t x50 = 933384U;
	volatile int64_t t12 = -1373553971LL;

	t12 = (x49-((x50/x51)%x52));

	if (t12 != 255LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x56 = INT16_MAX;
	int64_t t13 = 0LL;

	t13 = (x53-((x54/x55)%x56));

	if (t13 != -46LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	uint16_t x58 = 6641U;
	int8_t x59 = 2;
	volatile int32_t t14 = -928;

	t14 = (x57-((x58/x59)%x60));

	if (t14 != 29447) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 84U;
	int64_t x62 = INT64_MAX;
	int8_t x63 = INT8_MIN;
	int8_t x64 = -1;
	int64_t t15 = 30117592585789757LL;

	t15 = (x61-((x62/x63)%x64));

	if (t15 != 84LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 5990153331859LL;
	volatile uint16_t x68 = UINT16_MAX;
	int64_t t16 = -29074925078LL;

	t16 = (x65-((x66/x67)%x68));

	if (t16 != -35557LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	volatile int32_t x71 = 89236446;
	int64_t t17 = -358394205495702LL;

	t17 = (x69-((x70/x71)%x72));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -5;
	volatile uint16_t x74 = UINT16_MAX;
	volatile int8_t x75 = INT8_MIN;
	static int32_t t18 = -113528;

	t18 = (x73-((x74/x75)%x76));

	if (t18 != -5) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -57;
	volatile int32_t x79 = INT32_MIN;
	static int8_t x80 = INT8_MIN;

	t19 = (x77-((x78/x79)%x80));

	if (t19 != -57) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	uint64_t x82 = 2775183162LLU;
	int32_t x84 = -1;

	t20 = (x81-((x82/x83)%x84));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = -26;
	static int16_t x92 = INT16_MIN;
	int32_t t21 = -5912406;

	t21 = (x89-((x90/x91)%x92));

	if (t21 != 2647) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x93 = 7170324608LLU;
	int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MAX;

	t22 = (x93-((x94/x95)%x96));

	if (t22 != 7170324608LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MAX;
	volatile int64_t x98 = -1LL;
	volatile int16_t x99 = -805;
	static int64_t x100 = INT64_MIN;
	volatile int64_t t23 = -240547322LL;

	t23 = (x97-((x98/x99)%x100));

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x106 = 5U;
	int64_t x107 = -1LL;
	static int64_t t24 = 3286379179833993LL;

	t24 = (x105-((x106/x107)%x108));

	if (t24 != 5LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	uint64_t x110 = UINT64_MAX;
	int64_t x112 = -1LL;
	volatile uint64_t t25 = 7LLU;

	t25 = (x109-((x110/x111)%x112));

	if (t25 != 18446744073709409889LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MAX;
	int16_t x115 = INT16_MIN;
	volatile int64_t x116 = -52980662684368LL;
	int64_t t26 = -566414LL;

	t26 = (x113-((x114/x115)%x116));

	if (t26 != -2147418113LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x117 = 84103988LLU;
	static uint64_t x118 = UINT64_MAX;
	uint32_t x119 = 110237U;
	int8_t x120 = INT8_MAX;

	t27 = (x117-((x118/x119)%x120));

	if (t27 != 84103944LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -1;
	volatile int32_t x122 = 0;
	static int16_t x123 = INT16_MAX;
	uint32_t x124 = UINT32_MAX;
	uint32_t t28 = UINT32_MAX;

	t28 = (x121-((x122/x123)%x124));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = 0;
	int32_t x130 = -106665;
	int32_t x132 = INT32_MIN;
	int32_t t29 = 498721285;

	t29 = (x129-((x130/x131)%x132));

	if (t29 != 8205) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x134 = -28995;
	uint64_t t30 = 997866454020719LLU;

	t30 = (x133-((x134/x135)%x136));

	if (t30 != 6452185351LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x138 = 1808U;
	int64_t x139 = -156718754364501LL;
	static volatile int64_t t31 = 120859023840961LL;

	t31 = (x137-((x138/x139)%x140));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MIN;
	int32_t x148 = INT32_MIN;
	int64_t t32 = -54640261LL;

	t32 = (x145-((x146/x147)%x148));

	if (t32 != 4294967295LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x150 = 42939U;
	int32_t x151 = 231;
	int16_t x152 = -1;
	volatile uint32_t t33 = 468U;

	t33 = (x149-((x150/x151)%x152));

	if (t33 != 4294967110U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = 3503;
	int8_t x154 = 1;
	int64_t x155 = INT64_MAX;
	uint64_t x156 = 20LLU;
	volatile uint64_t t34 = 5274167424314595968LLU;

	t34 = (x153-((x154/x155)%x156));

	if (t34 != 3503LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = -1;
	int16_t x162 = INT16_MAX;
	volatile int32_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	int32_t t35 = -1;

	t35 = (x161-((x162/x163)%x164));

	if (t35 != 32766) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x165 = 26U;
	int32_t x168 = -1;
	static volatile int32_t t36 = -8;

	t36 = (x165-((x166/x167)%x168));

	if (t36 != 26) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x170 = 31U;
	static uint8_t x172 = 31U;
	volatile uint64_t t37 = 12200440LLU;

	t37 = (x169-((x170/x171)%x172));

	if (t37 != 7987LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = -4276958390230873666LL;
	int32_t x175 = -723114837;
	int32_t x176 = -1;
	int64_t t38 = 106LL;

	t38 = (x173-((x174/x175)%x176));

	if (t38 != -4276958390230873666LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = -1;
	volatile int32_t t39 = 86371;

	t39 = (x177-((x178/x179)%x180));

	if (t39 != -31932) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -1;
	int64_t x182 = INT64_MIN;
	volatile int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;
	static volatile int64_t t40 = 832981616572465LL;

	t40 = (x181-((x182/x183)%x184));

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x185 = INT32_MIN;
	uint32_t x187 = 1694357844U;
	int8_t x188 = 17;

	t41 = (x185-((x186/x187)%x188));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MIN;
	uint16_t x195 = 3076U;
	volatile uint8_t x196 = UINT8_MAX;
	static int64_t t42 = 213546204748812251LL;

	t42 = (x193-((x194/x195)%x196));

	if (t42 != -32557LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x197 = -1;
	int8_t x198 = INT8_MAX;
	uint16_t x199 = 10795U;
	volatile int16_t x200 = INT16_MIN;

	t43 = (x197-((x198/x199)%x200));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = INT64_MIN;
	uint64_t x202 = 56671740LLU;
	uint8_t x203 = 1U;
	uint32_t x204 = UINT32_MAX;
	volatile uint64_t t44 = 71LLU;

	t44 = (x201-((x202/x203)%x204));

	if (t44 != 9223372036798104068LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = 4;
	volatile uint8_t x206 = 11U;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = 2LLU;
	volatile uint64_t t45 = 593334366LLU;

	t45 = (x205-((x206/x207)%x208));

	if (t45 != 4LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x210 = 30208685561808958LLU;
	static int64_t x211 = INT64_MIN;
	static uint64_t t46 = 2651617353448LLU;

	t46 = (x209-((x210/x211)%x212));

	if (t46 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = 1604622703952984LLU;

	t47 = (x217-((x218/x219)%x220));

	if (t47 != 1604622703952984LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x222 = 1;
	int64_t x223 = INT64_MIN;
	int8_t x224 = -1;
	static volatile int64_t t48 = 524116039564738LL;

	t48 = (x221-((x222/x223)%x224));

	if (t48 != -128LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = 2U;
	static volatile int16_t x226 = 7;
	int32_t x228 = 1605225;
	uint32_t t49 = 7157U;

	t49 = (x225-((x226/x227)%x228));

	if (t49 != 2U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MAX;
	uint8_t x234 = UINT8_MAX;
	int16_t x235 = INT16_MIN;
	static int64_t x236 = -1LL;
	volatile int64_t t50 = -87862LL;

	t50 = (x233-((x234/x235)%x236));

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = 7;
	volatile int16_t x238 = 94;
	uint64_t x239 = 198896091LLU;
	int32_t x240 = INT32_MIN;
	volatile uint64_t t51 = 70756390LLU;

	t51 = (x237-((x238/x239)%x240));

	if (t51 != 7LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x241 = 15U;
	static uint8_t x242 = 4U;
	int32_t x244 = INT32_MIN;
	static uint32_t t52 = 1660490598U;

	t52 = (x241-((x242/x243)%x244));

	if (t52 != 15U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = 41948073LLU;
	int64_t x246 = INT64_MIN;
	static volatile uint16_t x247 = UINT16_MAX;
	uint16_t x248 = 3U;
	uint64_t t53 = 3982155308109143LLU;

	t53 = (x245-((x246/x247)%x248));

	if (t53 != 41948073LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MAX;
	volatile int8_t x251 = INT8_MIN;
	int64_t x252 = INT64_MAX;
	volatile int64_t t54 = 1414965580744LL;

	t54 = (x249-((x250/x251)%x252));

	if (t54 != 72057591890444287LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = 39732772078732931LL;
	uint64_t x255 = UINT64_MAX;
	int32_t x256 = INT32_MIN;
	volatile uint64_t t55 = 700LLU;

	t55 = (x253-((x254/x255)%x256));

	if (t55 != 39732772078732931LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x258 = UINT16_MAX;
	uint8_t x259 = 1U;
	int8_t x260 = -5;
	static int64_t t56 = INT64_MIN;

	t56 = (x257-((x258/x259)%x260));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = 0;
	static int16_t x262 = INT16_MAX;
	static volatile int16_t x263 = -11587;
	uint32_t x264 = UINT32_MAX;
	uint32_t t57 = 74254769U;

	t57 = (x261-((x262/x263)%x264));

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x266 = 2137LL;
	volatile uint64_t x267 = UINT64_MAX;
	uint64_t t58 = 486616LLU;

	t58 = (x265-((x266/x267)%x268));

	if (t58 != 65535LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int8_t x270 = -1;
	volatile uint16_t x271 = 53U;
	static int64_t x272 = -1LL;

	t59 = (x269-((x270/x271)%x272));

	if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x277 = -10060;
	int64_t x278 = -1LL;
	static int32_t x279 = INT32_MIN;
	int16_t x280 = -1;
	volatile int64_t t60 = -126LL;

	t60 = (x277-((x278/x279)%x280));

	if (t60 != -10060LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = 15568U;
	static uint32_t x282 = 7U;
	static volatile int32_t x283 = INT32_MIN;
	uint32_t x284 = 55434747U;

	t61 = (x281-((x282/x283)%x284));

	if (t61 != 15568U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x286 = INT64_MIN;
	int32_t x287 = 2;
	uint16_t x288 = UINT16_MAX;
	volatile uint64_t t62 = 11312LLU;

	t62 = (x285-((x286/x287)%x288));

	if (t62 != 117613414LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x298 = -1;
	int64_t x299 = -1LL;
	int64_t x300 = INT64_MIN;
	volatile int64_t t63 = -1LL;

	t63 = (x297-((x298/x299)%x300));

	if (t63 != 142LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x301 = UINT64_MAX;
	int8_t x303 = INT8_MAX;
	static volatile uint32_t x304 = 36U;

	t64 = (x301-((x302/x303)%x304));

	if (t64 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	volatile uint8_t x308 = 23U;
	volatile uint64_t t65 = 4956042842LLU;

	t65 = (x305-((x306/x307)%x308));

	if (t65 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x309 = -39088861416840LL;

	t66 = (x309-((x310/x311)%x312));

	if (t66 != -39088861416840LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = 48;
	int16_t x314 = -10743;
	int32_t x315 = 6093406;

	t67 = (x313-((x314/x315)%x316));

	if (t67 != 48) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x317 = INT32_MAX;
	static uint32_t x318 = 8372977U;
	volatile int8_t x319 = INT8_MAX;
	volatile uint32_t t68 = 27U;

	t68 = (x317-((x318/x319)%x320));

	if (t68 != 2147483639U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x321 = 164U;
	uint8_t x322 = 0U;
	int32_t x323 = INT32_MIN;
	int32_t t69 = -24353;

	t69 = (x321-((x322/x323)%x324));

	if (t69 != 164) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x325 = -341253435;
	static volatile int64_t x326 = -1LL;
	static uint64_t x327 = 2185514352428LLU;
	int32_t x328 = 17836440;
	volatile uint64_t t70 = 208258834750580LLU;

	t70 = (x325-((x326/x327)%x328));

	if (t70 != 18446744073359857723LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = -10730624;
	int64_t x330 = INT64_MIN;
	volatile uint16_t x331 = 802U;
	uint8_t x332 = UINT8_MAX;
	int64_t t71 = 1242182029LL;

	t71 = (x329-((x330/x331)%x332));

	if (t71 != -10730551LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x338 = -1LL;
	int8_t x339 = INT8_MAX;
	int16_t x340 = -844;
	volatile int64_t t72 = -437LL;

	t72 = (x337-((x338/x339)%x340));

	if (t72 != 3244LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x341 = INT64_MIN;
	uint32_t x342 = 738117U;
	volatile int32_t x343 = INT32_MAX;
	int16_t x344 = INT16_MIN;

	t73 = (x341-((x342/x343)%x344));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x347 = INT16_MAX;
	static volatile int64_t x348 = -1LL;
	static volatile int64_t t74 = 1LL;

	t74 = (x345-((x346/x347)%x348));

	if (t74 != 247135971071LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x349 = INT64_MIN;
	int8_t x350 = 40;
	uint64_t t75 = 1632801640744890LLU;

	t75 = (x349-((x350/x351)%x352));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x354 = -37;
	int64_t t76 = 54LL;

	t76 = (x353-((x354/x355)%x356));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MIN;
	uint64_t x358 = 3055583352024LLU;
	static int16_t x360 = INT16_MAX;

	t77 = (x357-((x358/x359)%x360));

	if (t77 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x361 = 56081U;
	int32_t x362 = -1;
	uint8_t x363 = 2U;
	int8_t x364 = 45;
	static volatile uint32_t t78 = 9U;

	t78 = (x361-((x362/x363)%x364));

	if (t78 != 56081U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int64_t x367 = 61741942LL;
	static int8_t x368 = INT8_MAX;
	static volatile uint64_t t79 = UINT64_MAX;

	t79 = (x365-((x366/x367)%x368));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x369 = INT64_MAX;
	uint8_t x370 = UINT8_MAX;
	static int64_t x371 = INT64_MIN;
	uint32_t x372 = UINT32_MAX;
	int64_t t80 = INT64_MAX;

	t80 = (x369-((x370/x371)%x372));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x374 = 2U;
	int16_t x376 = INT16_MIN;
	int32_t t81 = 1;

	t81 = (x373-((x374/x375)%x376));

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = INT64_MAX;
	static int8_t x378 = INT8_MAX;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x377-((x378/x379)%x380));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x383 = 14U;
	uint64_t x384 = 654LLU;
	uint64_t t83 = 74LLU;

	t83 = (x381-((x382/x383)%x384));

	if (t83 != 32766LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x385 = -152902358727877LL;
	int8_t x386 = -14;
	uint32_t x387 = 20U;
	volatile uint16_t x388 = 8154U;
	int64_t t84 = 635982761LL;

	t84 = (x385-((x386/x387)%x388));

	if (t84 != -152902358732497LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x389 = UINT16_MAX;
	int64_t x390 = 1LL;
	static int16_t x391 = 3920;

	t85 = (x389-((x390/x391)%x392));

	if (t85 != 65535LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x394 = -1;
	int16_t x395 = 1;
	int16_t x396 = INT16_MAX;
	volatile int32_t t86 = 246773;

	t86 = (x393-((x394/x395)%x396));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x397 = -1;
	volatile int8_t x398 = -1;
	int16_t x400 = -1;
	volatile int32_t t87 = 113;

	t87 = (x397-((x398/x399)%x400));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = 1161742892U;
	int64_t x402 = 483076047LL;
	int8_t x403 = INT8_MIN;
	int64_t t88 = -213LL;

	t88 = (x401-((x402/x403)%x404));

	if (t88 != 1162059075LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = -207849658406LL;
	int32_t x406 = -132407;
	static int64_t x407 = INT64_MAX;
	int64_t x408 = INT64_MAX;
	volatile int64_t t89 = 64876737LL;

	t89 = (x405-((x406/x407)%x408));

	if (t89 != -207849658406LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x409 = -1;
	int32_t x411 = INT32_MIN;
	int16_t x412 = 92;
	static volatile int32_t t90 = 26115032;

	t90 = (x409-((x410/x411)%x412));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x413 = 3LLU;
	int8_t x414 = INT8_MIN;
	static int32_t x415 = INT32_MAX;
	volatile uint64_t t91 = 450501591338500286LLU;

	t91 = (x413-((x414/x415)%x416));

	if (t91 != 3LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x418 = UINT8_MAX;
	int32_t x419 = 39070;
	volatile int64_t x420 = 4LL;
	int64_t t92 = 2045918982325069759LL;

	t92 = (x417-((x418/x419)%x420));

	if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x421 = UINT16_MAX;
	uint16_t x422 = 7726U;
	static uint8_t x424 = UINT8_MAX;
	int32_t t93 = -1;

	t93 = (x421-((x422/x423)%x424));

	if (t93 != 65611) { NG(); } else { ; }
	
}

void f94(void) {


	t94 = (x425-((x426/x427)%x428));

	if (t94 != 479493175840015619LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x431 = -7;
	int32_t x432 = INT32_MIN;
	static volatile int32_t t95 = 1016;

	t95 = (x429-((x430/x431)%x432));

	if (t95 != 306783377) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x434 = -58081LL;
	uint16_t x435 = 2500U;
	volatile uint64_t t96 = 51493013LLU;

	t96 = (x433-((x434/x435)%x436));

	if (t96 != 65558LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x438 = UINT16_MAX;
	static int64_t x439 = INT64_MIN;
	volatile int64_t x440 = INT64_MIN;
	int64_t t97 = 11343300393LL;

	t97 = (x437-((x438/x439)%x440));

	if (t97 != 6496LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = -10298;
	int16_t x442 = 61;
	int16_t x443 = -216;

	t98 = (x441-((x442/x443)%x444));

	if (t98 != -10298LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x445 = -1;
	uint8_t x446 = 0U;
	int16_t x447 = -1;
	int32_t t99 = -283325636;

	t99 = (x445-((x446/x447)%x448));

	if (t99 != -1) { NG(); } else { ; }
	
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

