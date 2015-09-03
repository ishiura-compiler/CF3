#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x9 = INT64_MAX;
int8_t x10 = -1;
int64_t x16 = -1LL;
int64_t t3 = 1533671944143LL;
int32_t x24 = -1;
int64_t t4 = -122713602072LL;
volatile uint8_t x28 = 1U;
uint64_t t5 = 2594613915083132LLU;
uint64_t x31 = 119987946LLU;
int8_t x39 = INT8_MAX;
static int64_t x42 = -32477404424825LL;
volatile int32_t t11 = -145926926;
static uint8_t x61 = 5U;
int32_t t16 = -3717;
volatile int8_t x88 = -1;
static uint8_t x107 = UINT8_MAX;
int16_t x112 = INT16_MAX;
volatile int32_t x115 = -3909;
static int64_t x116 = -8239948479374LL;
uint32_t x119 = UINT32_MAX;
int32_t x124 = INT32_MIN;
static uint32_t x125 = 189828809U;
uint64_t t28 = 5236310312LLU;
static int16_t x155 = -1;
int32_t t30 = 1317;
uint64_t t31 = 0LLU;
volatile uint64_t t32 = 60285404LLU;
uint8_t x175 = 0U;
uint64_t x197 = UINT64_MAX;
int8_t x209 = -1;
uint32_t x210 = 31U;
static volatile uint32_t t42 = 179521U;
volatile uint32_t x214 = 1U;
static uint32_t x216 = 369153U;
uint32_t x217 = 16U;
int8_t x220 = -1;
uint32_t x221 = UINT32_MAX;
uint16_t x222 = UINT16_MAX;
int64_t t47 = 15953764306LL;
int64_t x234 = 40339942028092577LL;
int8_t x244 = INT8_MIN;
static uint64_t t49 = 399067837213107984LLU;
int64_t t50 = -1120940637LL;
static int8_t x251 = INT8_MIN;
uint32_t x252 = 38U;
uint32_t x253 = 174021567U;
int32_t x254 = -1;
static volatile uint64_t x255 = 870162643116374241LLU;
uint64_t t52 = 128776480321207133LLU;
int32_t x257 = 52206650;
static int32_t x282 = 29451;
int8_t x284 = INT8_MIN;
int16_t x286 = -1;
volatile uint16_t x302 = 0U;
volatile uint16_t x314 = UINT16_MAX;
int32_t x322 = -1;
int64_t t61 = 250876006518490763LL;
static int16_t x329 = 57;
uint32_t x333 = 407U;
volatile uint16_t x334 = UINT16_MAX;
volatile uint32_t x339 = 6196447U;
int64_t x340 = INT64_MAX;
uint8_t x343 = UINT8_MAX;
int16_t x352 = INT16_MIN;
volatile uint64_t t69 = 1268571LLU;
int64_t x369 = 729LL;
volatile int8_t x375 = 0;
static uint8_t x392 = 42U;
int16_t x393 = -1;
volatile int8_t x395 = 1;
int8_t x405 = INT8_MIN;
int32_t x408 = INT32_MIN;
uint8_t x417 = UINT8_MAX;
volatile uint8_t x419 = 0U;
volatile uint32_t x421 = UINT32_MAX;
static uint32_t t82 = 30098U;
int64_t x428 = INT64_MAX;
volatile int32_t x429 = INT32_MAX;
uint16_t x432 = 374U;
uint64_t x441 = 292LLU;
uint32_t x444 = 151U;
static int16_t x457 = -1;
uint32_t x461 = 95508984U;
uint16_t x464 = UINT16_MAX;
uint32_t t91 = 173569394U;
static volatile uint16_t x482 = UINT16_MAX;
uint32_t t93 = 153566U;
uint8_t x489 = 5U;
int32_t x492 = INT32_MIN;
int8_t x494 = 10;
uint16_t x497 = UINT16_MAX;
uint32_t x500 = UINT32_MAX;
uint64_t x501 = UINT64_MAX;
int64_t t99 = 904526501270031879LL;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	volatile uint8_t x2 = 8U;
	static int32_t x3 = -1;
	volatile int64_t x4 = INT64_MAX;
	int64_t t0 = -8LL;

	t0 = (x1*((x2-x3)%x4));

	if (t0 != -1152LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint64_t x6 = 11406095LLU;
	int8_t x7 = -6;
	int16_t x8 = -3;
	uint64_t t1 = 255884012LLU;

	t1 = (x5*((x6-x7)%x8));

	if (t1 != 18446744073698145515LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = -1LL;
	int32_t x12 = INT32_MIN;
	static volatile int64_t t2 = 1LL;

	t2 = (x9*((x10-x11)%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint16_t x14 = 6727U;
	int64_t x15 = -1LL;

	t3 = (x13*((x14-x15)%x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = 2000643937283019116LL;
	int8_t x23 = 1;

	t4 = (x21*((x22-x23)%x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = 181LLU;
	static int32_t x26 = 1;
	volatile int8_t x27 = -1;

	t5 = (x25*((x26-x27)%x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x30 = -1;
	static volatile int8_t x32 = 25;
	volatile uint64_t t6 = 122563682866867LLU;

	t6 = (x29*((x30-x31)%x32));

	if (t6 != 1245165LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 124U;
	static volatile int8_t x34 = -1;
	uint16_t x35 = UINT16_MAX;
	int64_t x36 = -14486LL;
	int64_t t7 = 3699487080LL;

	t7 = (x33*((x34-x35)%x36));

	if (t7 != -941408LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MAX;
	static uint32_t x38 = 408358085U;
	uint16_t x40 = UINT16_MAX;
	volatile uint32_t t8 = 15U;

	t8 = (x37*((x38-x39)%x40));

	if (t8 != 2147474275U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	uint32_t x43 = 943334U;
	uint8_t x44 = 107U;
	volatile int64_t t9 = -186173057LL;

	t9 = (x41*((x42-x43)%x44));

	if (t9 != 103079215104LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 816810475268381LLU;
	volatile int16_t x46 = INT16_MIN;
	int16_t x47 = 1487;
	int8_t x48 = -1;
	static uint64_t t10 = 12750LLU;

	t10 = (x45*((x46-x47)%x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	uint8_t x50 = 44U;
	static uint8_t x51 = UINT8_MAX;
	uint16_t x52 = UINT16_MAX;

	t11 = (x49*((x50-x51)%x52));

	if (t11 != 211) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x53 = -5LL;
	volatile int8_t x54 = INT8_MIN;
	volatile int8_t x55 = INT8_MIN;
	int8_t x56 = -1;
	static int64_t t12 = 109431358704761391LL;

	t12 = (x53*((x54-x55)%x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = 20555615;
	static volatile int32_t x58 = -1;
	int64_t x59 = INT64_MIN;
	volatile uint8_t x60 = UINT8_MAX;
	volatile int64_t t13 = -73677LL;

	t13 = (x57*((x58-x59)%x60));

	if (t13 != 2610563105LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x62 = INT64_MIN;
	uint32_t x63 = 0U;
	uint16_t x64 = 1328U;
	volatile int64_t t14 = -946LL;

	t14 = (x61*((x62-x63)%x64));

	if (t14 != -4240LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x65 = 1U;
	int8_t x66 = 1;
	volatile uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MAX;
	volatile int64_t t15 = 244399501208LL;

	t15 = (x65*((x66-x67)%x68));

	if (t15 != -65534LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -6906;
	static uint8_t x74 = 4U;
	int16_t x75 = INT16_MIN;
	int32_t x76 = 226938890;

	t16 = (x73*((x74-x75)%x76));

	if (t16 != -226323432) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = 110;
	volatile uint8_t x82 = UINT8_MAX;
	int16_t x83 = INT16_MAX;
	static int64_t x84 = INT64_MIN;
	volatile int64_t t17 = -2066979885240159599LL;

	t17 = (x81*((x82-x83)%x84));

	if (t17 != -3576320LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x85 = 25U;
	int32_t x86 = -1354580;
	volatile int32_t x87 = -1;
	static volatile int32_t t18 = -238;

	t18 = (x85*((x86-x87)%x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x97 = -316324;
	static int16_t x98 = 2470;
	volatile int64_t x99 = -969441389LL;
	uint16_t x100 = UINT16_MAX;
	volatile int64_t t19 = 1352884749052LL;

	t19 = (x97*((x98-x99)%x100));

	if (t19 != -15860169036LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = 2;
	int32_t x102 = INT32_MIN;
	volatile uint64_t x103 = 8665366803712294LLU;
	volatile uint32_t x104 = UINT32_MAX;
	static volatile uint64_t t20 = 1417LLU;

	t20 = (x101*((x102-x103)%x104));

	if (t20 != 4888746878LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = -1;
	int32_t x106 = INT32_MAX;
	int32_t x108 = 21327;
	volatile int32_t t21 = 3;

	t21 = (x105*((x106-x107)%x108));

	if (t21 != -3781) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MIN;
	uint64_t x110 = 38LLU;
	int32_t x111 = -1;
	static volatile uint64_t t22 = 1542010LLU;

	t22 = (x109*((x110-x111)%x112));

	if (t22 != 18446744073708273664LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x113 = UINT8_MAX;
	int16_t x114 = -1;
	volatile int64_t t23 = -35LL;

	t23 = (x113*((x114-x115)%x116));

	if (t23 != 996540LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x117 = 122LLU;
	int64_t x118 = -1557943187592471LL;
	volatile int32_t x120 = -12298098;
	uint64_t t24 = 1537435955072489755LLU;

	t24 = (x117*((x118-x119)%x120));

	if (t24 != 18446744073234100780LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x121 = -24;
	int32_t x122 = -10;
	static int8_t x123 = INT8_MAX;
	static volatile int32_t t25 = -982318;

	t25 = (x121*((x122-x123)%x124));

	if (t25 != 3288) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	static int8_t x128 = 1;
	int64_t t26 = -325270LL;

	t26 = (x125*((x126-x127)%x128));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x133 = UINT8_MAX;
	int64_t x134 = -1LL;
	uint16_t x135 = UINT16_MAX;
	uint16_t x136 = 3430U;
	static volatile int64_t t27 = -129846635LL;

	t27 = (x133*((x134-x135)%x136));

	if (t27 != -93330LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = UINT32_MAX;
	static uint8_t x142 = 62U;
	static int64_t x143 = -1LL;
	uint64_t x144 = UINT64_MAX;

	t28 = (x141*((x142-x143)%x144));

	if (t28 != 270582939585LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x149 = 3307776913031LL;
	int32_t x150 = -1;
	volatile uint32_t x151 = UINT32_MAX;
	int16_t x152 = 10;
	static int64_t t29 = 0LL;

	t29 = (x149*((x150-x151)%x152));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = -5;
	uint8_t x156 = 118U;

	t30 = (x153*((x154-x155)%x156));

	if (t30 != 512) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MIN;
	uint64_t x162 = UINT64_MAX;
	volatile int16_t x163 = 636;
	int8_t x164 = INT8_MAX;

	t31 = (x161*((x162-x163)%x164));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = -129;
	static int32_t x166 = -25966;
	uint64_t x167 = UINT64_MAX;
	volatile uint16_t x168 = 1U;

	t32 = (x165*((x166-x167)%x168));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x169 = 1U;
	uint16_t x170 = 26825U;
	int64_t x171 = 5943659LL;
	int8_t x172 = -1;
	int64_t t33 = -1LL;

	t33 = (x169*((x170-x171)%x172));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x173 = 0;
	int32_t x174 = -2045;
	uint16_t x176 = 1U;
	int32_t t34 = 1;

	t34 = (x173*((x174-x175)%x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x177 = 1574182LLU;
	int16_t x178 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	int16_t x180 = 1175;
	volatile uint64_t t35 = 8560400708060LLU;

	t35 = (x177*((x178-x179)%x180));

	if (t35 != 338449130LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x185 = INT64_MAX;
	uint8_t x186 = 2U;
	int8_t x187 = -1;
	uint64_t x188 = 1055489311154673955LLU;
	uint64_t t36 = 649468132429LLU;

	t36 = (x185*((x186-x187)%x188));

	if (t36 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x189 = UINT32_MAX;
	static volatile int32_t x190 = INT32_MIN;
	int16_t x191 = -1;
	volatile int8_t x192 = INT8_MAX;
	uint32_t t37 = 778212181U;

	t37 = (x189*((x190-x191)%x192));

	if (t37 != 7U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x193 = 3;
	static volatile int64_t x194 = 381562631LL;
	uint16_t x195 = 4U;
	volatile int32_t x196 = 22738961;
	volatile int64_t t38 = -451124772LL;

	t38 = (x193*((x194-x195)%x196));

	if (t38 != 53217753LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x198 = 3211264275762755LLU;
	int64_t x199 = INT64_MIN;
	static volatile int16_t x200 = INT16_MIN;
	volatile uint64_t t39 = 30898601004LLU;

	t39 = (x197*((x198-x199)%x200));

	if (t39 != 9220160772579013053LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = INT8_MAX;
	static uint32_t x202 = UINT32_MAX;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MIN;
	volatile uint32_t t40 = 0U;

	t40 = (x201*((x202-x203)%x204));

	if (t40 != 4286644224U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = -2661333893LL;
	int32_t x206 = INT32_MIN;
	volatile uint64_t x207 = 62241LLU;
	volatile int32_t x208 = -86943452;
	volatile uint64_t t41 = 224896522LLU;

	t41 = (x205*((x206-x207)%x208));

	if (t41 != 5715336661168515877LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x211 = UINT8_MAX;
	uint16_t x212 = 25645U;

	t42 = (x209*((x210-x211)%x212));

	if (t42 != 4294947889U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = INT8_MIN;
	volatile int8_t x215 = INT8_MIN;
	volatile uint32_t t43 = 1133025U;

	t43 = (x213*((x214-x215)%x216));

	if (t43 != 4294950784U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x218 = 27U;
	volatile uint32_t x219 = 22U;
	volatile uint32_t t44 = 277923U;

	t44 = (x217*((x218-x219)%x220));

	if (t44 != 80U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x223 = 1U;
	uint64_t x224 = 2670087516586343LLU;
	volatile uint64_t t45 = 2867513475270012LLU;

	t45 = (x221*((x222-x223)%x224));

	if (t45 != 281466386710530LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x225 = UINT32_MAX;
	static volatile int16_t x226 = INT16_MAX;
	uint64_t x227 = UINT64_MAX;
	static uint64_t x228 = 31577893613LLU;
	volatile uint64_t t46 = 543266174685LLU;

	t46 = (x225*((x226-x227)%x228));

	if (t46 != 140737488322560LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x229 = INT16_MAX;
	int64_t x230 = -1LL;
	int32_t x231 = -13;
	uint16_t x232 = 19U;

	t47 = (x229*((x230-x231)%x232));

	if (t47 != 393204LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x233 = INT8_MIN;
	int64_t x235 = -1LL;
	volatile int8_t x236 = INT8_MAX;
	int64_t t48 = 3061154000236025LL;

	t48 = (x233*((x234-x235)%x236));

	if (t48 != -9216LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x241 = -22;
	int8_t x242 = INT8_MAX;
	uint64_t x243 = 64239773LLU;

	t49 = (x241*((x242-x243)%x244));

	if (t49 != 1413272212LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = 12261639006LL;
	int16_t x247 = -7;
	volatile int16_t x248 = INT16_MIN;

	t50 = (x245*((x246-x247)%x248));

	if (t50 != -2208384LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = 14536712098091LLU;
	volatile uint64_t t51 = 160091612228579LLU;

	t51 = (x249*((x250-x251)%x252));

	if (t51 != 18446744050087231488LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x256 = INT64_MAX;

	t52 = (x253*((x254-x255)%x256));

	if (t52 != 14121703544727967009LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x258 = 2918U;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = -810LL;
	volatile int64_t t53 = 16250584451335LL;

	t53 = (x257*((x258-x259)%x260));

	if (t53 != 12164149450LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x269 = -1LL;
	volatile int16_t x270 = INT16_MAX;
	int32_t x271 = -1;
	int16_t x272 = INT16_MIN;
	int64_t t54 = 0LL;

	t54 = (x269*((x270-x271)%x272));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x277 = INT16_MIN;
	uint64_t x278 = 102422540314799857LLU;
	volatile uint32_t x279 = 15U;
	int8_t x280 = -1;
	uint64_t t55 = 4142597876LLU;

	t55 = (x277*((x278-x279)%x280));

	if (t55 != 1125620379777171456LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x281 = 25U;
	int16_t x283 = 0;
	int32_t t56 = 35824;

	t56 = (x281*((x282-x283)%x284));

	if (t56 != 275) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x285 = 1;
	uint8_t x287 = 1U;
	int16_t x288 = -6324;
	volatile int32_t t57 = 3450;

	t57 = (x285*((x286-x287)%x288));

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	int8_t x295 = -1;
	static volatile int32_t x296 = INT32_MIN;
	volatile int32_t t58 = 190023241;

	t58 = (x293*((x294-x295)%x296));

	if (t58 != 1073709056) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x301 = INT16_MAX;
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t59 = 22061;

	t59 = (x301*((x302-x303)%x304));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x313 = -1;
	int32_t x315 = -3370013;
	int32_t x316 = INT32_MAX;
	int32_t t60 = 4653;

	t60 = (x313*((x314-x315)%x316));

	if (t60 != -3435548) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x321 = 239677;
	int16_t x323 = INT16_MIN;
	static int64_t x324 = 29390527109874049LL;

	t61 = (x321*((x322-x323)%x324));

	if (t61 != 7853496259LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x325 = UINT16_MAX;
	uint64_t x326 = 106948590LLU;
	int8_t x327 = -1;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t62 = 71516060LLU;

	t62 = (x325*((x326-x327)%x328));

	if (t62 != 7008875911185LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x330 = -856;
	int8_t x331 = -20;
	static int16_t x332 = -41;
	volatile int32_t t63 = -15982;

	t63 = (x329*((x330-x331)%x332));

	if (t63 != -912) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x335 = INT16_MIN;
	int32_t x336 = -8;
	uint32_t t64 = 81U;

	t64 = (x333*((x334-x335)%x336));

	if (t64 != 2849U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = 57;
	int16_t x338 = -2;
	volatile int64_t t65 = -421226491208571846LL;

	t65 = (x337*((x338-x339)%x340));

	if (t65 != 244459938279LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x341 = INT8_MIN;
	volatile uint16_t x342 = UINT16_MAX;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t66 = 3239902852317238745LLU;

	t66 = (x341*((x342-x343)%x344));

	if (t66 != 18446744073701195776LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x349 = 1045514898;
	int16_t x350 = INT16_MAX;
	int64_t x351 = INT64_MAX;
	volatile int64_t t67 = -2741999LL;

	t67 = (x349*((x350-x351)%x352));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x357 = -1;
	uint8_t x358 = 1U;
	uint64_t x359 = UINT64_MAX;
	static int8_t x360 = INT8_MIN;
	volatile uint64_t t68 = 36602580654646257LLU;

	t68 = (x357*((x358-x359)%x360));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x361 = INT16_MIN;
	static uint8_t x362 = UINT8_MAX;
	static uint64_t x363 = UINT64_MAX;
	static volatile int8_t x364 = 7;

	t69 = (x361*((x362-x363)%x364));

	if (t69 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x370 = 0U;
	uint16_t x371 = UINT16_MAX;
	static int16_t x372 = INT16_MIN;
	static volatile int64_t t70 = -66287459LL;

	t70 = (x369*((x370-x371)%x372));

	if (t70 != -23887143LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x373 = 1;
	int64_t x374 = INT64_MIN;
	int64_t x376 = INT64_MAX;
	volatile int64_t t71 = 0LL;

	t71 = (x373*((x374-x375)%x376));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x381 = INT64_MIN;
	int16_t x382 = 47;
	volatile int8_t x383 = -1;
	int64_t x384 = -1LL;
	volatile int64_t t72 = -186LL;

	t72 = (x381*((x382-x383)%x384));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x385 = -5;
	int32_t x386 = -1;
	int32_t x387 = INT32_MIN;
	int64_t x388 = -57508779LL;
	int64_t t73 = 71LL;

	t73 = (x385*((x386-x387)%x388));

	if (t73 != -98294120LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x389 = -2;
	static uint32_t x390 = UINT32_MAX;
	int32_t x391 = 5930;
	volatile uint32_t t74 = 29U;

	t74 = (x389*((x390-x391)%x392));

	if (t74 != 4294967222U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x394 = -23795283637845689LL;
	static uint32_t x396 = UINT32_MAX;
	static volatile int64_t t75 = 622776LL;

	t75 = (x393*((x394-x395)%x396));

	if (t75 != 887408745LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x397 = 219U;
	int32_t x398 = -1;
	int16_t x399 = -1;
	int16_t x400 = INT16_MIN;
	static int32_t t76 = -17738818;

	t76 = (x397*((x398-x399)%x400));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x401 = 4015699U;
	volatile int8_t x402 = INT8_MIN;
	uint64_t x403 = 2018213396583LLU;
	int32_t x404 = -2101;
	static uint64_t t77 = 15387087067655LLU;

	t77 = (x401*((x402-x403)%x404));

	if (t77 != 10342206554750585627LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x406 = 59U;
	uint32_t x407 = UINT32_MAX;
	uint32_t t78 = 96U;

	t78 = (x405*((x406-x407)%x408));

	if (t78 != 4294959616U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x409 = 418060LLU;
	int8_t x410 = -1;
	int64_t x411 = -1LL;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t79 = 3359LLU;

	t79 = (x409*((x410-x411)%x412));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x413 = INT16_MIN;
	volatile int16_t x414 = INT16_MIN;
	uint64_t x415 = 1927129164LLU;
	volatile int32_t x416 = 590441333;
	uint64_t t80 = 412405057299213LLU;

	t80 = (x413*((x414-x415)%x416));

	if (t80 != 18446724951320100864LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x418 = 40U;
	static uint64_t x420 = 10362405870062LLU;
	static uint64_t t81 = 597449945LLU;

	t81 = (x417*((x418-x419)%x420));

	if (t81 != 10200LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x422 = 642U;
	int32_t x423 = 493;
	int32_t x424 = INT32_MIN;

	t82 = (x421*((x422-x423)%x424));

	if (t82 != 4294967147U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x425 = UINT8_MAX;
	int16_t x426 = 15426;
	int32_t x427 = 150;
	int64_t t83 = 7397154LL;

	t83 = (x425*((x426-x427)%x428));

	if (t83 != 3895380LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x430 = -125097;
	int64_t x431 = INT64_MIN;
	int64_t t84 = 22LL;

	t84 = (x429*((x430-x431)%x432));

	if (t84 != 762356694685LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x433 = -1;
	static uint16_t x434 = UINT16_MAX;
	int8_t x435 = 57;
	int8_t x436 = INT8_MAX;
	volatile int32_t t85 = 0;

	t85 = (x433*((x434-x435)%x436));

	if (t85 != -73) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x442 = -1;
	int16_t x443 = INT16_MIN;
	uint64_t t86 = 20540160LLU;

	t86 = (x441*((x442-x443)%x444));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x445 = INT32_MIN;
	volatile uint64_t x446 = 121893545869766717LLU;
	uint16_t x447 = UINT16_MAX;
	static int64_t x448 = INT64_MIN;
	volatile uint64_t t87 = 12979051102251LLU;

	t87 = (x445*((x446-x447)%x448));

	if (t87 != 11602125727985565696LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x453 = -1;
	uint8_t x454 = 86U;
	int64_t x455 = -1LL;
	int16_t x456 = INT16_MIN;
	static volatile int64_t t88 = -318906165LL;

	t88 = (x453*((x454-x455)%x456));

	if (t88 != -87LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x458 = INT16_MIN;
	static uint32_t x459 = 3U;
	uint16_t x460 = UINT16_MAX;
	static uint32_t t89 = 152895U;

	t89 = (x457*((x458-x459)%x460));

	if (t89 != 4294934531U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x462 = INT32_MIN;
	static uint32_t x463 = 55U;
	uint32_t t90 = 185768173U;

	t90 = (x461*((x462-x463)%x464));

	if (t90 != 1944169400U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x469 = 32U;
	int8_t x470 = INT8_MIN;
	volatile uint32_t x471 = UINT32_MAX;
	int32_t x472 = 32931988;

	t91 = (x469*((x470-x471)%x472));

	if (t91 != 441879328U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x477 = 635U;
	volatile int32_t x478 = -1;
	int16_t x479 = INT16_MAX;
	int64_t x480 = -3110711478LL;
	int64_t t92 = -60963484742LL;

	t92 = (x477*((x478-x479)%x480));

	if (t92 != -20807680LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x481 = UINT32_MAX;
	volatile int16_t x483 = -1;
	uint32_t x484 = UINT32_MAX;

	t93 = (x481*((x482-x483)%x484));

	if (t93 != 4294901760U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x485 = 136398884231283258LLU;
	int64_t x486 = -1LL;
	uint16_t x487 = 153U;
	static uint8_t x488 = UINT8_MAX;
	volatile uint64_t t94 = 230095LLU;

	t94 = (x485*((x486-x487)%x488));

	if (t94 != 15888059975801481500LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x490 = INT8_MIN;
	static uint8_t x491 = 35U;
	int32_t t95 = 4;

	t95 = (x489*((x490-x491)%x492));

	if (t95 != -815) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x493 = INT8_MIN;
	uint32_t x495 = 17601641U;
	static volatile int32_t x496 = -3;
	static uint32_t t96 = 732U;

	t96 = (x493*((x494-x495)%x496));

	if (t96 != 2253008768U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x498 = -535;
	int8_t x499 = INT8_MIN;
	static volatile uint32_t t97 = 46U;

	t97 = (x497*((x498-x499)%x500));

	if (t97 != 4268294551U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x502 = INT64_MAX;
	volatile int32_t x503 = 122;
	uint32_t x504 = UINT32_MAX;
	volatile uint64_t t98 = 16783625170191LLU;

	t98 = (x501*((x502-x503)%x504));

	if (t98 != 18446744071562068091LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x505 = -1;
	int64_t x506 = -1LL;
	int32_t x507 = INT32_MIN;
	uint32_t x508 = 21U;

	t99 = (x505*((x506-x507)%x508));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

