#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = UINT8_MAX;
static int64_t x4 = 102711137639443351LL;
volatile int64_t t0 = 143598832506029820LL;
uint16_t x6 = 1967U;
volatile uint64_t x7 = 15399316890460687LLU;
uint32_t x13 = 8507126U;
int16_t x14 = INT16_MAX;
int64_t x27 = INT64_MIN;
uint8_t x31 = 1U;
int64_t x33 = INT64_MAX;
static int64_t x44 = INT64_MAX;
int64_t x46 = -45049265LL;
int64_t x56 = INT64_MIN;
int64_t x65 = 7LL;
int8_t x77 = INT8_MAX;
static int16_t x83 = 5526;
int64_t x100 = 1382856768173374423LL;
static uint32_t x104 = 26128U;
int64_t t22 = -924LL;
int64_t t23 = 17729464878LL;
static int16_t x109 = INT16_MIN;
int64_t x112 = -1LL;
static uint16_t x119 = UINT16_MAX;
uint8_t x123 = UINT8_MAX;
uint64_t x133 = 488LLU;
uint32_t x135 = 4103U;
volatile int64_t x136 = -390LL;
volatile uint64_t t29 = 11616271493839559LLU;
volatile uint16_t x137 = UINT16_MAX;
int16_t x140 = -1;
volatile uint64_t t30 = UINT64_MAX;
int32_t x141 = -29;
uint16_t x144 = 1U;
static volatile int64_t t31 = -243450LL;
int16_t x147 = 6344;
volatile uint8_t x149 = UINT8_MAX;
volatile int64_t t35 = 19LL;
uint64_t x169 = 29184845793LLU;
static uint64_t x171 = UINT64_MAX;
volatile uint64_t t36 = 1247758294505332213LLU;
uint64_t t37 = 2904060044LLU;
int8_t x181 = INT8_MAX;
int64_t x187 = -1LL;
int8_t x188 = INT8_MIN;
int8_t x189 = 0;
static uint64_t x191 = 6279LLU;
int16_t x196 = INT16_MIN;
int8_t x201 = 0;
uint8_t x207 = UINT8_MAX;
uint16_t x209 = 14468U;
uint32_t x216 = 43128188U;
volatile int8_t x218 = -6;
volatile uint64_t t49 = UINT64_MAX;
volatile int16_t x228 = -1;
int8_t x233 = INT8_MAX;
static volatile int64_t t51 = -6LL;
volatile int16_t x245 = INT16_MAX;
uint8_t x247 = UINT8_MAX;
int16_t x248 = INT16_MAX;
volatile int32_t t52 = -399554;
volatile uint32_t x249 = 0U;
int64_t x251 = INT64_MIN;
uint32_t x259 = 100441U;
int16_t x285 = INT16_MIN;
int8_t x299 = 14;
static int16_t x317 = -1;
int32_t x319 = -15735;
int64_t t63 = 1LL;
static uint32_t x350 = 29211U;
uint8_t x351 = 6U;
uint8_t x352 = 5U;
volatile uint64_t t67 = UINT64_MAX;
uint32_t x361 = 41395U;
volatile uint32_t x364 = UINT32_MAX;
int8_t x372 = -1;
int32_t x375 = INT32_MAX;
volatile int32_t t70 = 41;
int64_t x379 = INT64_MIN;
volatile uint64_t x384 = UINT64_MAX;
int8_t x394 = -1;
static volatile int64_t t74 = INT64_MIN;
volatile uint32_t x399 = 1871881U;
int8_t x401 = 2;
int32_t x404 = -2310;
int8_t x408 = INT8_MAX;
uint16_t x432 = 1556U;
volatile int64_t t81 = 91701500514379LL;
volatile int64_t x438 = 251154144LL;
int32_t x444 = INT32_MIN;
static int32_t t84 = 44378;
volatile uint8_t x450 = UINT8_MAX;
int16_t x452 = -3;
volatile uint64_t t85 = UINT64_MAX;
int16_t x462 = 1;
volatile uint32_t t87 = 426638127U;
volatile uint64_t x469 = 143LLU;
int64_t x473 = -1LL;
int8_t x474 = -3;
int64_t t89 = -2196187798814115LL;
uint64_t x479 = 2195812LLU;
volatile uint16_t x480 = UINT16_MAX;
static uint64_t t90 = 8265335LLU;
int16_t x497 = 7;
int16_t x503 = -2;
static int8_t x513 = INT8_MIN;
int64_t x515 = -1LL;
volatile int8_t x517 = INT8_MIN;
uint16_t x536 = 27U;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int8_t x3 = -51;

	t0 = (((x1*x2)/x3)|x4);

	if (t0 != -1129LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 70LLU;
	uint32_t x8 = 240288U;
	volatile uint64_t t1 = 110872LLU;

	t1 = (((x5*x6)/x7)|x8);

	if (t1 != 240288LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 16U;
	int64_t x10 = -4LL;
	int8_t x11 = -1;
	static int64_t x12 = -1LL;
	volatile int64_t t2 = 2110851131564944LL;

	t2 = (((x9*x10)/x11)|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x15 = 10U;
	int64_t x16 = INT64_MIN;
	int64_t t3 = 37656533593LL;

	t3 = (((x13*x14)/x15)|x16);

	if (t3 != -9223372036467266739LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	volatile uint32_t x18 = 7488486U;
	uint16_t x19 = 381U;
	static int16_t x20 = -35;
	static volatile uint32_t t4 = 10609317U;

	t4 = (((x17*x18)/x19)|x20);

	if (t4 != 4294967261U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 1939681;
	static uint8_t x22 = 60U;
	static int64_t x23 = INT64_MIN;
	int32_t x24 = INT32_MIN;
	static volatile int64_t t5 = 187LL;

	t5 = (((x21*x22)/x23)|x24);

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = 1;
	int16_t x26 = INT16_MIN;
	uint64_t x28 = 13180876747941LLU;
	uint64_t t6 = 1300LLU;

	t6 = (((x25*x26)/x27)|x28);

	if (t6 != 13180876747941LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	int64_t x30 = 33191642356LL;
	int32_t x32 = -75491084;
	volatile int64_t t7 = 45474199682418175LL;

	t7 = (((x29*x30)/x31)|x32);

	if (t7 != -6308868LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	uint32_t x36 = UINT32_MAX;
	static volatile int64_t t8 = 3783LL;

	t8 = (((x33*x34)/x35)|x36);

	if (t8 != 281474976710655LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	int8_t x38 = -43;
	volatile int64_t x39 = 7731026403LL;
	int16_t x40 = INT16_MIN;
	volatile int64_t t9 = -2LL;

	t9 = (((x37*x38)/x39)|x40);

	if (t9 != -32768LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	uint64_t x42 = UINT64_MAX;
	static uint64_t x43 = 4LLU;
	uint64_t t10 = 22228604811LLU;

	t10 = (((x41*x42)/x43)|x44);

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = -1;
	int32_t x47 = -19809;
	uint16_t x48 = 154U;
	static volatile int64_t t11 = -7109404LL;

	t11 = (((x45*x46)/x47)|x48);

	if (t11 != -2146LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MIN;
	int64_t x51 = 2070052001002501LL;
	static int16_t x52 = -1841;
	volatile int64_t t12 = -131924653380824726LL;

	t12 = (((x49*x50)/x51)|x52);

	if (t12 != -1841LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -30;
	uint64_t x54 = 4608LLU;
	int8_t x55 = -8;
	uint64_t t13 = 789346285293507LLU;

	t13 = (((x53*x54)/x55)|x56);

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x66 = -1;
	int16_t x67 = INT16_MIN;
	static int64_t x68 = INT64_MIN;
	int64_t t14 = INT64_MIN;

	t14 = (((x65*x66)/x67)|x68);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = -3;
	int64_t x71 = 1614510989106125266LL;
	int64_t x72 = -1LL;
	volatile int64_t t15 = 27342239811525170LL;

	t15 = (((x69*x70)/x71)|x72);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	uint64_t x74 = 8173574914010LLU;
	int16_t x75 = 60;
	volatile int8_t x76 = INT8_MIN;
	static uint64_t t16 = 16477616LLU;

	t16 = (((x73*x74)/x75)|x76);

	if (t16 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = -1584;
	int16_t x79 = -5;
	uint16_t x80 = 17U;
	int32_t t17 = -1;

	t17 = (((x77*x78)/x79)|x80);

	if (t17 != 40249) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	uint32_t x82 = UINT32_MAX;
	uint64_t x84 = 473967LLU;
	uint64_t t18 = 16075769LLU;

	t18 = (((x81*x82)/x83)|x84);

	if (t18 != 473967LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	static volatile int8_t x90 = -1;
	int8_t x91 = INT8_MAX;
	uint8_t x92 = 62U;
	int32_t t19 = 90992625;

	t19 = (((x89*x90)/x91)|x92);

	if (t19 != 63) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = UINT16_MAX;
	static volatile uint64_t x94 = 7713605746LLU;
	uint64_t x95 = 3663026666849LLU;
	static int16_t x96 = -1;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (((x93*x94)/x95)|x96);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = UINT8_MAX;
	int32_t x98 = -1;
	uint8_t x99 = 44U;
	volatile int64_t t21 = 66760281LL;

	t21 = (((x97*x98)/x99)|x100);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x101 = UINT32_MAX;
	int16_t x102 = -1;
	int64_t x103 = INT64_MIN;

	t22 = (((x101*x102)/x103)|x104);

	if (t22 != 26128LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MAX;
	uint16_t x106 = UINT16_MAX;
	int64_t x107 = INT64_MAX;
	int8_t x108 = INT8_MAX;

	t23 = (((x105*x106)/x107)|x108);

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x110 = 146037868719590LLU;
	volatile uint16_t x111 = 313U;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (((x109*x110)/x111)|x112);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 486562451181628421LLU;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = 197808LLU;
	uint64_t t25 = 599484762458LLU;

	t25 = (((x113*x114)/x115)|x116);

	if (t25 != 197808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -25LL;
	int32_t x118 = -1;
	int64_t x120 = INT64_MAX;
	static volatile int64_t t26 = INT64_MAX;

	t26 = (((x117*x118)/x119)|x120);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = UINT32_MAX;
	volatile uint16_t x122 = 12766U;
	uint8_t x124 = UINT8_MAX;
	volatile uint32_t t27 = 1U;

	t27 = (((x121*x122)/x123)|x124);

	if (t27 != 16843007U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 0;
	static int64_t x130 = INT64_MIN;
	volatile int32_t x131 = -2746;
	int64_t x132 = 9934460625530LL;
	int64_t t28 = -31704904353395LL;

	t28 = (((x129*x130)/x131)|x132);

	if (t28 != 9934460625530LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x134 = INT64_MAX;

	t29 = (((x133*x134)/x135)|x136);

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x138 = 359;
	volatile uint64_t x139 = UINT64_MAX;

	t30 = (((x137*x138)/x139)|x140);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x142 = -61950LL;
	volatile uint16_t x143 = 2862U;

	t31 = (((x141*x142)/x143)|x144);

	if (t31 != 627LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = 217878U;
	int64_t x146 = -99526476769LL;
	volatile int32_t x148 = INT32_MIN;
	int64_t t32 = 25498524741639LL;

	t32 = (((x145*x146)/x147)|x148);

	if (t32 != -1485562922LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x150 = 1U;
	int16_t x151 = INT16_MIN;
	static volatile uint64_t x152 = 968405774LLU;
	static volatile uint64_t t33 = 20900984852410LLU;

	t33 = (((x149*x150)/x151)|x152);

	if (t33 != 968405774LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x161 = 0U;
	static uint64_t x162 = UINT64_MAX;
	volatile int16_t x163 = -1;
	static int32_t x164 = -1;
	static volatile uint64_t t34 = UINT64_MAX;

	t34 = (((x161*x162)/x163)|x164);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = -1;
	volatile int64_t x166 = -1LL;
	int8_t x167 = 49;
	int64_t x168 = -47LL;

	t35 = (((x165*x166)/x167)|x168);

	if (t35 != -47LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x170 = INT32_MIN;
	int8_t x172 = INT8_MIN;

	t36 = (((x169*x170)/x171)|x172);

	if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x173 = 232032932223LLU;
	uint64_t x174 = UINT64_MAX;
	static volatile uint8_t x175 = 53U;
	int16_t x176 = 55;

	t37 = (((x173*x174)/x175)|x176);

	if (t37 != 348051770597672119LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x177 = 13869;
	uint64_t x178 = 473218350285096535LLU;
	int8_t x179 = INT8_MAX;
	static volatile int32_t x180 = -1;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (((x177*x178)/x179)|x180);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x182 = 1481729714U;
	uint16_t x183 = 247U;
	uint32_t x184 = 1078006U;
	uint32_t t39 = 46782000U;

	t39 = (((x181*x182)/x183)|x184);

	if (t39 != 14154751U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x185 = -1;
	uint32_t x186 = 4U;
	int64_t t40 = -15LL;

	t40 = (((x185*x186)/x187)|x188);

	if (t40 != -124LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x190 = INT8_MIN;
	static uint32_t x192 = 0U;
	volatile uint64_t t41 = 57896903911594355LLU;

	t41 = (((x189*x190)/x191)|x192);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MAX;
	int8_t x195 = INT8_MAX;
	static int32_t t42 = 276641493;

	t42 = (((x193*x194)/x195)|x196);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = 0;
	int8_t x198 = -1;
	int64_t x199 = 41193423LL;
	uint8_t x200 = UINT8_MAX;
	volatile int64_t t43 = -36985LL;

	t43 = (((x197*x198)/x199)|x200);

	if (t43 != 255LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x202 = INT64_MIN;
	static uint16_t x203 = 2843U;
	int32_t x204 = 7616607;
	static int64_t t44 = 16186230332654LL;

	t44 = (((x201*x202)/x203)|x204);

	if (t44 != 7616607LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x205 = -1;
	int8_t x206 = -2;
	volatile int32_t x208 = INT32_MAX;
	volatile int32_t t45 = INT32_MAX;

	t45 = (((x205*x206)/x207)|x208);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x210 = INT8_MAX;
	int32_t x211 = 103922221;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t46 = 14613;

	t46 = (((x209*x210)/x211)|x212);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = 5LLU;
	int32_t x214 = INT32_MIN;
	volatile int32_t x215 = INT32_MAX;
	static volatile uint64_t t47 = 5696786687525315923LLU;

	t47 = (((x213*x214)/x215)|x216);

	if (t47 != 8589934590LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = -1;
	static volatile int64_t x219 = INT64_MIN;
	uint8_t x220 = 7U;
	static int64_t t48 = -4336583587060867994LL;

	t48 = (((x217*x218)/x219)|x220);

	if (t48 != 7LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x221 = 1LLU;
	volatile uint16_t x222 = 83U;
	uint32_t x223 = 1470818506U;
	static int16_t x224 = -1;

	t49 = (((x221*x222)/x223)|x224);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MIN;
	static uint32_t x226 = 4002713U;
	uint32_t x227 = 371716U;
	static uint32_t t50 = UINT32_MAX;

	t50 = (((x225*x226)/x227)|x228);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x234 = -1LL;
	volatile int16_t x235 = INT16_MIN;
	static uint16_t x236 = 11908U;

	t51 = (((x233*x234)/x235)|x236);

	if (t51 != 11908LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x246 = -1;

	t52 = (((x245*x246)/x247)|x248);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x250 = 802192763128543LL;
	uint32_t x252 = UINT32_MAX;
	volatile int64_t t53 = 33089268914239779LL;

	t53 = (((x249*x250)/x251)|x252);

	if (t53 != 4294967295LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x257 = 527102891U;
	uint16_t x258 = 155U;
	int32_t x260 = INT32_MIN;
	uint32_t t54 = 1U;

	t54 = (((x257*x258)/x259)|x260);

	if (t54 != 2147484609U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = -1;
	uint64_t x266 = UINT64_MAX;
	uint32_t x267 = 7552306U;
	volatile uint32_t x268 = 772U;
	uint64_t t55 = 110LLU;

	t55 = (((x265*x266)/x267)|x268);

	if (t55 != 772LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x273 = 0U;
	volatile int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	volatile uint8_t x276 = 0U;
	int64_t t56 = 1054819LL;

	t56 = (((x273*x274)/x275)|x276);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x286 = 483367966U;
	int32_t x287 = 5;
	uint16_t x288 = UINT16_MAX;
	volatile uint32_t t57 = 1194592U;

	t57 = (((x285*x286)/x287)|x288);

	if (t57 != 167641087U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = 1799;
	uint64_t x290 = UINT64_MAX;
	int16_t x291 = -1;
	volatile int16_t x292 = -1;
	static uint64_t t58 = UINT64_MAX;

	t58 = (((x289*x290)/x291)|x292);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x297 = INT16_MIN;
	volatile uint16_t x298 = UINT16_MAX;
	int32_t x300 = INT32_MAX;
	volatile int32_t t59 = 31;

	t59 = (((x297*x298)/x299)|x300);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x309 = UINT64_MAX;
	volatile int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	int64_t x312 = 830496LL;
	uint64_t t60 = 2640597158LLU;

	t60 = (((x309*x310)/x311)|x312);

	if (t60 != 830496LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x313 = 1363645U;
	static uint8_t x314 = 0U;
	volatile int64_t x315 = INT64_MIN;
	static volatile int64_t x316 = -1LL;
	volatile int64_t t61 = -1643228307LL;

	t61 = (((x313*x314)/x315)|x316);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x318 = INT64_MAX;
	int16_t x320 = INT16_MIN;
	volatile int64_t t62 = 1305091445219LL;

	t62 = (((x317*x318)/x319)|x320);

	if (t62 != -4622LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MAX;
	int32_t x331 = INT32_MIN;
	int64_t x332 = 21LL;

	t63 = (((x329*x330)/x331)|x332);

	if (t63 != 21LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = -3319;
	static uint8_t x335 = 3U;
	static volatile int64_t x336 = INT64_MAX;
	volatile int64_t t64 = INT64_MAX;

	t64 = (((x333*x334)/x335)|x336);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x337 = -282;
	uint16_t x338 = 133U;
	int16_t x339 = INT16_MIN;
	int32_t x340 = -1;
	volatile int32_t t65 = -63112818;

	t65 = (((x337*x338)/x339)|x340);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x349 = UINT8_MAX;
	volatile uint32_t t66 = 894U;

	t66 = (((x349*x350)/x351)|x352);

	if (t66 != 1241471U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x353 = -1;
	uint64_t x354 = 5766193449431207LLU;
	int64_t x355 = -6442308LL;
	int64_t x356 = -1LL;

	t67 = (((x353*x354)/x355)|x356);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x362 = UINT16_MAX;
	int16_t x363 = INT16_MIN;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = (((x361*x362)/x363)|x364);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x369 = INT16_MIN;
	volatile uint64_t x370 = 10954213753017LLU;
	uint64_t x371 = 3544216407531016476LLU;
	uint64_t t69 = UINT64_MAX;

	t69 = (((x369*x370)/x371)|x372);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x373 = INT16_MIN;
	volatile int32_t x374 = -8;
	uint16_t x376 = 5U;

	t70 = (((x373*x374)/x375)|x376);

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x377 = 2033;
	static uint16_t x378 = UINT16_MAX;
	volatile int64_t x380 = INT64_MIN;
	static volatile int64_t t71 = INT64_MIN;

	t71 = (((x377*x378)/x379)|x380);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x381 = INT16_MIN;
	static int16_t x382 = INT16_MIN;
	int8_t x383 = 25;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (((x381*x382)/x383)|x384);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x389 = -1LL;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 4U;
	static volatile uint32_t x392 = UINT32_MAX;
	volatile int64_t t73 = -6291862LL;

	t73 = (((x389*x390)/x391)|x392);

	if (t73 != 4294967295LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x393 = -1LL;
	int64_t x395 = INT64_MAX;
	int64_t x396 = INT64_MIN;

	t74 = (((x393*x394)/x395)|x396);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x397 = 5774LLU;
	int32_t x398 = -4684666;
	int16_t x400 = INT16_MIN;
	uint64_t t75 = 260480LLU;

	t75 = (((x397*x398)/x399)|x400);

	if (t75 != 18446744073709521878LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x402 = 119146763815LLU;
	int32_t x403 = INT32_MAX;
	volatile uint64_t t76 = 168138843075LLU;

	t76 = (((x401*x402)/x403)|x404);

	if (t76 != 18446744073709549310LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x405 = -1;
	volatile uint8_t x406 = 0U;
	volatile uint16_t x407 = 2124U;
	volatile int32_t t77 = 236278885;

	t77 = (((x405*x406)/x407)|x408);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x409 = -1;
	static uint16_t x410 = 11952U;
	int8_t x411 = -1;
	static volatile uint64_t x412 = 8779176LLU;
	volatile uint64_t t78 = 10708051011735110LLU;

	t78 = (((x409*x410)/x411)|x412);

	if (t78 != 8781752LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x417 = UINT16_MAX;
	int16_t x418 = 5697;
	static int8_t x419 = -1;
	int16_t x420 = INT16_MIN;
	volatile int32_t t79 = -64;

	t79 = (((x417*x418)/x419)|x420);

	if (t79 != -27071) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x421 = INT64_MIN;
	volatile uint64_t x422 = 13LLU;
	uint32_t x423 = 298U;
	volatile int16_t x424 = INT16_MAX;
	uint64_t t80 = 834294LLU;

	t80 = (((x421*x422)/x423)|x424);

	if (t80 != 30950912875364351LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x429 = -1;
	volatile int64_t x430 = -1LL;
	int32_t x431 = 51;

	t81 = (((x429*x430)/x431)|x432);

	if (t81 != 1556LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x433 = 80U;
	int8_t x434 = -1;
	static uint32_t x435 = UINT32_MAX;
	int16_t x436 = 3;
	static uint32_t t82 = 2928U;

	t82 = (((x433*x434)/x435)|x436);

	if (t82 != 3U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x437 = 63;
	int8_t x439 = INT8_MAX;
	int8_t x440 = 54;
	volatile int64_t t83 = -40LL;

	t83 = (((x437*x438)/x439)|x440);

	if (t83 != 124588278LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x441 = 7;
	int8_t x442 = 5;
	uint8_t x443 = 31U;

	t84 = (((x441*x442)/x443)|x444);

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x449 = UINT64_MAX;
	uint16_t x451 = 708U;

	t85 = (((x449*x450)/x451)|x452);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x457 = 4U;
	int16_t x458 = INT16_MAX;
	static int16_t x459 = -36;
	volatile int32_t x460 = 16788724;
	int32_t t86 = -3;

	t86 = (((x457*x458)/x459)|x460);

	if (t86 != -516) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x461 = 3U;
	int8_t x463 = 1;
	uint32_t x464 = 889U;

	t87 = (((x461*x462)/x463)|x464);

	if (t87 != 891U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x470 = INT64_MAX;
	int64_t x471 = -1LL;
	int32_t x472 = INT32_MIN;
	volatile uint64_t t88 = 12656LLU;

	t88 = (((x469*x470)/x471)|x472);

	if (t88 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x475 = INT64_MIN;
	uint8_t x476 = 30U;

	t89 = (((x473*x474)/x475)|x476);

	if (t89 != 30LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x477 = 11U;
	int64_t x478 = -1LL;

	t90 = (((x477*x478)/x479)|x480);

	if (t90 != 8400875945983LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x485 = -61;
	static volatile int16_t x486 = INT16_MAX;
	uint32_t x487 = 7171153U;
	int16_t x488 = INT16_MIN;
	static uint32_t t91 = 30651675U;

	t91 = (((x485*x486)/x487)|x488);

	if (t91 != 4294935126U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x498 = INT8_MAX;
	static volatile int16_t x499 = 434;
	int8_t x500 = INT8_MIN;
	int32_t t92 = 73658;

	t92 = (((x497*x498)/x499)|x500);

	if (t92 != -126) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x501 = INT16_MAX;
	int16_t x502 = INT16_MIN;
	int32_t x504 = -1;
	static int32_t t93 = 13198;

	t93 = (((x501*x502)/x503)|x504);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x505 = -1;
	int32_t x506 = 3762;
	volatile int32_t x507 = INT32_MIN;
	int32_t x508 = -3;
	volatile int32_t t94 = -3;

	t94 = (((x505*x506)/x507)|x508);

	if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x514 = -1;
	int64_t x516 = INT64_MIN;
	volatile int64_t t95 = -3188LL;

	t95 = (((x513*x514)/x515)|x516);

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x518 = 7U;
	volatile int32_t x519 = INT32_MAX;
	int32_t x520 = -13741625;
	static volatile int32_t t96 = -103875925;

	t96 = (((x517*x518)/x519)|x520);

	if (t96 != -13741625) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x521 = -1;
	static volatile int8_t x522 = INT8_MIN;
	int16_t x523 = INT16_MAX;
	int16_t x524 = 298;
	static volatile int32_t t97 = -683;

	t97 = (((x521*x522)/x523)|x524);

	if (t97 != 298) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x529 = INT8_MAX;
	static volatile int64_t x530 = -1LL;
	static int32_t x531 = INT32_MIN;
	uint64_t x532 = UINT64_MAX;
	uint64_t t98 = UINT64_MAX;

	t98 = (((x529*x530)/x531)|x532);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x533 = -1;
	uint32_t x534 = 456116U;
	int64_t x535 = -49583616926LL;
	int64_t t99 = 51158286LL;

	t99 = (((x533*x534)/x535)|x536);

	if (t99 != 27LL) { NG(); } else { ; }
	
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

