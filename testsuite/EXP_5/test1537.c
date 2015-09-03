#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 10U;
volatile uint8_t x4 = 91U;
uint16_t x7 = 1U;
int16_t x8 = 1;
uint16_t x12 = 14388U;
volatile int64_t x13 = -10LL;
int16_t x14 = INT16_MIN;
static int64_t x18 = 1LL;
int8_t x25 = -1;
int32_t t5 = -18463708;
volatile int8_t x32 = INT8_MAX;
uint64_t t6 = 13703768932LLU;
int64_t x34 = -11697162LL;
uint64_t x38 = UINT64_MAX;
int16_t x48 = INT16_MAX;
uint16_t x50 = 30U;
int32_t x57 = -1;
volatile uint64_t x59 = UINT64_MAX;
int8_t x78 = INT8_MIN;
int16_t x93 = -1;
static int32_t x98 = INT32_MIN;
uint32_t t15 = 385821753U;
int32_t x104 = 37;
int32_t t19 = -7283432;
volatile int64_t x132 = -87787942LL;
int32_t x133 = 3782262;
int32_t x145 = 855;
static int64_t x146 = INT64_MIN;
uint64_t x151 = UINT64_MAX;
uint8_t x152 = UINT8_MAX;
uint32_t x155 = 28287015U;
uint32_t x156 = UINT32_MAX;
int8_t x157 = INT8_MAX;
int8_t x161 = INT8_MIN;
int16_t x166 = INT16_MAX;
static uint8_t x173 = 0U;
static volatile int32_t t31 = -37836;
int16_t x177 = INT16_MAX;
int64_t x179 = 11768799LL;
volatile int32_t t32 = -168673431;
uint64_t t34 = 3LLU;
int64_t x190 = INT64_MAX;
uint8_t x195 = 3U;
uint16_t x199 = 3U;
static int8_t x201 = 11;
uint8_t x204 = 121U;
static int16_t x216 = INT16_MIN;
int32_t x220 = -1;
static int8_t x221 = -1;
int16_t x226 = -6285;
uint64_t t44 = 18097LLU;
volatile int16_t x229 = -1;
static int32_t t46 = -264;
int16_t x246 = INT16_MIN;
int16_t x253 = INT16_MIN;
static uint32_t x254 = 450787U;
static uint16_t x262 = UINT16_MAX;
int64_t x263 = INT64_MIN;
int8_t x277 = -20;
static int32_t x279 = -1;
static uint64_t t56 = 5968752317745453164LLU;
static int64_t x298 = INT64_MIN;
uint16_t x301 = 18U;
int64_t x303 = INT64_MAX;
uint32_t x304 = 2523360U;
static volatile uint8_t x305 = 4U;
int64_t x306 = -1LL;
volatile uint32_t x311 = UINT32_MAX;
int8_t x328 = -48;
static uint32_t x330 = 151U;
static uint32_t x337 = 3460U;
int64_t x340 = -1LL;
volatile int64_t t64 = 26793LL;
volatile int32_t t66 = -26958;
uint16_t x354 = UINT16_MAX;
uint64_t x361 = 36900717958898LLU;
static int64_t x366 = INT64_MIN;
int8_t x372 = INT8_MAX;
uint16_t x375 = 594U;
static uint64_t x384 = 17470451684602LLU;
static uint32_t x410 = UINT32_MAX;
int8_t x425 = INT8_MIN;
int64_t x426 = -2910862922286876729LL;
static volatile int32_t t80 = -6;
int64_t t83 = 96248LL;
static uint16_t x452 = 205U;
uint64_t x455 = 52500911698LLU;
volatile int64_t x458 = -1LL;
static uint8_t x467 = UINT8_MAX;
int16_t x472 = INT16_MAX;
volatile uint16_t x475 = UINT16_MAX;
uint8_t x479 = 2U;
uint8_t x482 = 3U;
uint32_t x483 = UINT32_MAX;
int64_t x487 = INT64_MAX;
volatile int32_t x489 = -1;
uint32_t x490 = 552193U;
uint16_t x491 = 205U;
int64_t x494 = 19010731LL;
int8_t x495 = -1;
int16_t x500 = INT16_MIN;
uint64_t t95 = 111702817127LLU;
uint8_t x515 = 1U;
int16_t x520 = INT16_MIN;
int64_t t98 = 199963315583301LL;
volatile int32_t x522 = 1;
int64_t x523 = 2LL;
int32_t t99 = -1269886;


void f0(void) {
	int32_t x1 = -193771;
	volatile int16_t x2 = 4820;
	volatile int32_t t0 = -10;

	t0 = (x1*((x2<=x3)-x4));

	if (t0 != 17633161) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 0;
	int16_t x6 = -1;
	int32_t t1 = 1373687;

	t1 = (x5*((x6<=x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	uint64_t x10 = 3171998LLU;
	static uint32_t x11 = 29781U;
	volatile int32_t t2 = -225695241;

	t2 = (x9*((x10<=x11)-x12));

	if (t2 != 14388) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x15 = 12;
	uint64_t x16 = 3963860204804LLU;
	volatile uint64_t t3 = 90556066414959403LLU;

	t3 = (x13*((x14<=x15)-x16));

	if (t3 != 39638602048030LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (x17*((x18<=x19)-x20));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = -1;
	int64_t x27 = INT64_MAX;
	uint8_t x28 = UINT8_MAX;

	t5 = (x25*((x26<=x27)-x28));

	if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = UINT64_MAX;
	int32_t x30 = INT32_MAX;
	volatile int32_t x31 = -1;

	t6 = (x29*((x30<=x31)-x32));

	if (t6 != 127LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 148051U;
	uint32_t x35 = 0U;
	int8_t x36 = INT8_MIN;
	uint32_t t7 = 348973U;

	t7 = (x33*((x34<=x35)-x36));

	if (t7 != 19098579U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 1607871432U;
	uint8_t x39 = UINT8_MAX;
	static int16_t x40 = -57;
	uint32_t t8 = 13567U;

	t8 = (x37*((x38<=x39)-x40));

	if (t8 != 1454358408U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	static volatile int32_t x42 = -257819;
	int8_t x43 = INT8_MIN;
	volatile int32_t x44 = 1;
	int64_t t9 = 54036218LL;

	t9 = (x41*((x42<=x43)-x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MIN;
	volatile int16_t x46 = -1;
	static int64_t x47 = INT64_MIN;
	int32_t t10 = 1066;

	t10 = (x45*((x46<=x47)-x48));

	if (t10 != 4194176) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = INT16_MIN;
	uint32_t x51 = 33351580U;
	int16_t x52 = INT16_MIN;
	volatile int32_t t11 = 998838;

	t11 = (x49*((x50<=x51)-x52));

	if (t11 != -1073774592) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x58 = 4304LLU;
	static volatile uint64_t x60 = UINT64_MAX;
	volatile uint64_t t12 = 1180001975226111014LLU;

	t12 = (x57*((x58<=x59)-x60));

	if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = -1;
	volatile int8_t x79 = 1;
	uint16_t x80 = 0U;
	static volatile int32_t t13 = 1;

	t13 = (x77*((x78<=x79)-x80));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x94 = -1;
	int32_t x95 = INT32_MIN;
	volatile uint16_t x96 = 594U;
	static volatile int32_t t14 = 232;

	t14 = (x93*((x94<=x95)-x96));

	if (t14 != 594) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x97 = 43U;
	volatile uint16_t x99 = 104U;
	int8_t x100 = 2;

	t15 = (x97*((x98<=x99)-x100));

	if (t15 != 4294967253U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x101 = 126757051LLU;
	int16_t x102 = 1;
	uint64_t x103 = 194926727081LLU;
	volatile uint64_t t16 = 130599431914LLU;

	t16 = (x101*((x102<=x103)-x104));

	if (t16 != 18446744069146297780LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x105 = 3307475LLU;
	uint8_t x106 = 3U;
	volatile int64_t x107 = -1LL;
	static volatile int64_t x108 = INT64_MAX;
	static uint64_t t17 = 243462709582124LLU;

	t17 = (x105*((x106<=x107)-x108));

	if (t17 != 9223372036858083283LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = -1;
	int8_t x114 = INT8_MAX;
	int8_t x115 = 0;
	uint64_t x116 = UINT64_MAX;
	uint64_t t18 = UINT64_MAX;

	t18 = (x113*((x114<=x115)-x116));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	uint32_t x119 = 354059U;
	static int8_t x120 = INT8_MAX;

	t19 = (x117*((x118<=x119)-x120));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x121 = -5748;
	static volatile int8_t x122 = 0;
	static int32_t x123 = INT32_MIN;
	volatile int16_t x124 = INT16_MAX;
	int32_t t20 = 5342;

	t20 = (x121*((x122<=x123)-x124));

	if (t20 != 188344716) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x129 = UINT64_MAX;
	int32_t x130 = INT32_MAX;
	static int64_t x131 = -144271LL;
	volatile uint64_t t21 = 24184655410LLU;

	t21 = (x129*((x130<=x131)-x132));

	if (t21 != 18446744073621763674LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x134 = -1;
	static volatile int32_t x135 = INT32_MIN;
	volatile int16_t x136 = -1;
	volatile int32_t t22 = -422;

	t22 = (x133*((x134<=x135)-x136));

	if (t22 != 3782262) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x137 = INT32_MIN;
	uint32_t x138 = 4U;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;
	static uint64_t t23 = 619990605260LLU;

	t23 = (x137*((x138<=x139)-x140));

	if (t23 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x147 = 0U;
	volatile uint32_t x148 = UINT32_MAX;
	uint32_t t24 = 47803880U;

	t24 = (x145*((x146<=x147)-x148));

	if (t24 != 1710U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x149 = 23557LL;
	volatile uint16_t x150 = UINT16_MAX;
	int64_t t25 = 168993075754971LL;

	t25 = (x149*((x150<=x151)-x152));

	if (t25 != -5983478LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x153 = -1083LL;
	int16_t x154 = 77;
	int64_t t26 = 505377LL;

	t26 = (x153*((x154<=x155)-x156));

	if (t26 != -2166LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x158 = UINT16_MAX;
	int64_t x159 = -1LL;
	uint8_t x160 = 17U;
	static int32_t t27 = -65171;

	t27 = (x157*((x158<=x159)-x160));

	if (t27 != -2159) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x162 = INT8_MIN;
	int32_t x163 = -24;
	uint16_t x164 = 8U;
	volatile int32_t t28 = -2871281;

	t28 = (x161*((x162<=x163)-x164));

	if (t28 != 896) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x165 = 0U;
	volatile uint32_t x167 = UINT32_MAX;
	int32_t x168 = 55729;
	volatile int32_t t29 = 1938;

	t29 = (x165*((x166<=x167)-x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x169 = 424845LLU;
	int8_t x170 = INT8_MIN;
	static int16_t x171 = INT16_MIN;
	uint32_t x172 = 2U;
	uint64_t t30 = 4697727448030099LLU;

	t30 = (x169*((x170<=x171)-x172));

	if (t30 != 1824695380019430LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x174 = -33;
	static int16_t x175 = INT16_MAX;
	uint8_t x176 = UINT8_MAX;

	t31 = (x173*((x174<=x175)-x176));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x178 = INT16_MIN;
	uint8_t x180 = 22U;

	t32 = (x177*((x178<=x179)-x180));

	if (t32 != -688107) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x181 = INT8_MAX;
	uint8_t x182 = 26U;
	int32_t x183 = 1361208;
	int16_t x184 = INT16_MAX;
	int32_t t33 = 7;

	t33 = (x181*((x182<=x183)-x184));

	if (t33 != -4161282) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x185 = 936851536714LLU;
	int32_t x186 = -1;
	int64_t x187 = -1LL;
	uint64_t x188 = 25658140LLU;

	t34 = (x185*((x186<=x187)-x188));

	if (t34 != 12855621196047687986LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = -4899179019LL;
	uint8_t x191 = 1U;
	int16_t x192 = INT16_MAX;
	static int64_t t35 = 90LL;

	t35 = (x189*((x190<=x191)-x192));

	if (t35 != 160531398915573LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = INT64_MIN;
	uint64_t x196 = 38567155311LLU;
	uint64_t t36 = 847695550595670LLU;

	t36 = (x193*((x194<=x195)-x196));

	if (t36 != 18444216575186310766LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x197 = INT32_MAX;
	int8_t x198 = 48;
	uint64_t x200 = UINT64_MAX;
	uint64_t t37 = 26743179831800764LLU;

	t37 = (x197*((x198<=x199)-x200));

	if (t37 != 2147483647LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x202 = 96863898224543LLU;
	uint16_t x203 = 17U;
	int32_t t38 = -334859;

	t38 = (x201*((x202<=x203)-x204));

	if (t38 != -1331) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x205 = 215356;
	uint32_t x206 = 776U;
	int8_t x207 = 1;
	int16_t x208 = -988;
	int32_t t39 = -1608732;

	t39 = (x205*((x206<=x207)-x208));

	if (t39 != 212771728) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = -4576;
	int64_t x210 = -18LL;
	int16_t x211 = -1;
	uint32_t x212 = 2360624U;
	uint32_t t40 = 1716437U;

	t40 = (x209*((x210<=x211)-x212));

	if (t40 != 2212276256U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x213 = UINT64_MAX;
	static int16_t x214 = -1;
	int16_t x215 = INT16_MIN;
	uint64_t t41 = 131836132459LLU;

	t41 = (x213*((x214<=x215)-x216));

	if (t41 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = -1LL;
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MIN;
	static volatile int64_t t42 = 2756157195LL;

	t42 = (x217*((x218<=x219)-x220));

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x222 = INT8_MIN;
	static int32_t x223 = INT32_MAX;
	static volatile uint8_t x224 = UINT8_MAX;
	static int32_t t43 = -493600;

	t43 = (x221*((x222<=x223)-x224));

	if (t43 != 254) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x225 = 12707228160938LLU;
	volatile uint16_t x227 = 182U;
	uint16_t x228 = 4U;

	t44 = (x225*((x226<=x227)-x228));

	if (t44 != 18446705952025068802LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x230 = INT8_MAX;
	int64_t x231 = 46252199248120LL;
	static uint64_t x232 = UINT64_MAX;
	static uint64_t t45 = 17049006183446393LLU;

	t45 = (x229*((x230<=x231)-x232));

	if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = INT8_MIN;
	static int32_t x234 = -3765;
	static volatile uint16_t x235 = 53U;
	static int8_t x236 = INT8_MIN;

	t46 = (x233*((x234<=x235)-x236));

	if (t46 != -16512) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x237 = INT16_MAX;
	volatile int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MAX;
	uint16_t x240 = 321U;
	int32_t t47 = -58913;

	t47 = (x237*((x238<=x239)-x240));

	if (t47 != -10485440) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x245 = 156U;
	int16_t x247 = INT16_MAX;
	int8_t x248 = -1;
	volatile uint32_t t48 = 300066U;

	t48 = (x245*((x246<=x247)-x248));

	if (t48 != 312U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x255 = 1U;
	int64_t x256 = -1894LL;
	volatile int64_t t49 = -5766486224450404LL;

	t49 = (x253*((x254<=x255)-x256));

	if (t49 != -62062592LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x261 = 7U;
	uint64_t x264 = UINT64_MAX;
	uint64_t t50 = 1LLU;

	t50 = (x261*((x262<=x263)-x264));

	if (t50 != 7LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = INT8_MAX;
	uint16_t x266 = UINT16_MAX;
	volatile int16_t x267 = INT16_MAX;
	int8_t x268 = -1;
	volatile int32_t t51 = 2749618;

	t51 = (x265*((x266<=x267)-x268));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = 0;
	volatile uint64_t x271 = UINT64_MAX;
	volatile uint32_t x272 = 480U;
	static volatile uint32_t t52 = 0U;

	t52 = (x269*((x270<=x271)-x272));

	if (t52 != 15695872U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	volatile int8_t x276 = INT8_MAX;
	volatile int32_t t53 = -11180572;

	t53 = (x273*((x274<=x275)-x276));

	if (t53 != 16256) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x278 = INT32_MIN;
	static int32_t x280 = -1;
	volatile int32_t t54 = -116298;

	t54 = (x277*((x278<=x279)-x280));

	if (t54 != -40) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x281 = -1LL;
	int64_t x282 = -1268679098645512LL;
	static int32_t x283 = 2610802;
	volatile uint8_t x284 = 115U;
	volatile int64_t t55 = 34729800100493869LL;

	t55 = (x281*((x282<=x283)-x284));

	if (t55 != 114LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x285 = 3332214873611315566LLU;
	int64_t x286 = INT64_MAX;
	int8_t x287 = -23;
	int32_t x288 = INT32_MAX;

	t56 = (x285*((x286<=x287)-x288));

	if (t56 != 5030049156918421870LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = INT8_MIN;
	uint32_t x294 = 3667U;
	uint8_t x295 = 34U;
	static uint8_t x296 = 24U;
	volatile int32_t t57 = 521273685;

	t57 = (x293*((x294<=x295)-x296));

	if (t57 != 3072) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x297 = 5092333379790LL;
	volatile int32_t x299 = 59;
	uint8_t x300 = UINT8_MAX;
	volatile int64_t t58 = 175567841LL;

	t58 = (x297*((x298<=x299)-x300));

	if (t58 != -1293452678466660LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x302 = 16201442;
	volatile uint32_t t59 = 0U;

	t59 = (x301*((x302<=x303)-x304));

	if (t59 != 4249546834U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x307 = INT16_MIN;
	volatile uint32_t x308 = UINT32_MAX;
	volatile uint32_t t60 = 1265498396U;

	t60 = (x305*((x306<=x307)-x308));

	if (t60 != 4U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = -1;
	int32_t x310 = INT32_MIN;
	static volatile int16_t x312 = -1;
	volatile int32_t t61 = 58090;

	t61 = (x309*((x310<=x311)-x312));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x325 = INT16_MAX;
	int16_t x326 = INT16_MAX;
	int16_t x327 = 11;
	int32_t t62 = 2754;

	t62 = (x325*((x326<=x327)-x328));

	if (t62 != 1572816) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x329 = INT16_MIN;
	int32_t x331 = 2062479;
	static uint32_t x332 = UINT32_MAX;
	uint32_t t63 = 924764779U;

	t63 = (x329*((x330<=x331)-x332));

	if (t63 != 4294901760U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x338 = 1010024;
	static int32_t x339 = -1;

	t64 = (x337*((x338<=x339)-x340));

	if (t64 != 3460LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x341 = -6;
	uint16_t x342 = 7277U;
	int64_t x343 = INT64_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t65 = -247;

	t65 = (x341*((x342<=x343)-x344));

	if (t65 != -774) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x345 = -1;
	uint16_t x346 = 3U;
	static volatile uint64_t x347 = UINT64_MAX;
	int8_t x348 = -1;

	t66 = (x345*((x346<=x347)-x348));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x349 = 0U;
	int8_t x350 = -1;
	uint16_t x351 = 0U;
	static volatile uint16_t x352 = 0U;
	volatile int32_t t67 = -1734;

	t67 = (x349*((x350<=x351)-x352));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x353 = 6240065LL;
	static volatile int16_t x355 = 1;
	volatile int8_t x356 = INT8_MIN;
	int64_t t68 = -29585388987938LL;

	t68 = (x353*((x354<=x355)-x356));

	if (t68 != 798728320LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x362 = 13;
	int32_t x363 = INT32_MIN;
	uint64_t x364 = UINT64_MAX;
	static uint64_t t69 = 134059122299LLU;

	t69 = (x361*((x362<=x363)-x364));

	if (t69 != 36900717958898LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x365 = -970;
	int64_t x367 = INT64_MAX;
	uint64_t x368 = 194085748LLU;
	static uint64_t t70 = 6043962LLU;

	t70 = (x365*((x366<=x367)-x368));

	if (t70 != 188263174590LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x369 = -1LL;
	int16_t x370 = INT16_MIN;
	int64_t x371 = -1LL;
	static int64_t t71 = 229292619437356LL;

	t71 = (x369*((x370<=x371)-x372));

	if (t71 != 126LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x373 = UINT32_MAX;
	volatile int16_t x374 = INT16_MIN;
	int8_t x376 = INT8_MAX;
	uint32_t t72 = 3U;

	t72 = (x373*((x374<=x375)-x376));

	if (t72 != 126U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x377 = UINT8_MAX;
	int64_t x378 = INT64_MAX;
	uint16_t x379 = 32546U;
	uint16_t x380 = 9U;
	volatile int32_t t73 = -295768;

	t73 = (x377*((x378<=x379)-x380));

	if (t73 != -2295) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = -7;
	uint16_t x383 = UINT16_MAX;
	volatile uint64_t t74 = 73248612681608835LLU;

	t74 = (x381*((x382<=x383)-x384));

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x397 = 8U;
	static int16_t x398 = INT16_MIN;
	uint16_t x399 = 2794U;
	static uint16_t x400 = UINT16_MAX;
	int32_t t75 = -119893;

	t75 = (x397*((x398<=x399)-x400));

	if (t75 != -524272) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x409 = 65U;
	static uint64_t x411 = UINT64_MAX;
	volatile uint16_t x412 = 126U;
	static volatile int32_t t76 = -2818705;

	t76 = (x409*((x410<=x411)-x412));

	if (t76 != -8125) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x413 = INT16_MIN;
	uint64_t x414 = 293429LLU;
	uint64_t x415 = 341955997974296LLU;
	volatile int8_t x416 = -1;
	int32_t t77 = 10276;

	t77 = (x413*((x414<=x415)-x416));

	if (t77 != -65536) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x427 = -1LL;
	volatile uint32_t x428 = UINT32_MAX;
	volatile uint32_t t78 = 535605615U;

	t78 = (x425*((x426<=x427)-x428));

	if (t78 != 4294967040U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x429 = -1;
	int64_t x430 = INT64_MIN;
	int16_t x431 = INT16_MIN;
	int16_t x432 = INT16_MIN;
	static int32_t t79 = 36;

	t79 = (x429*((x430<=x431)-x432));

	if (t79 != -32769) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x433 = INT16_MAX;
	volatile int8_t x434 = -4;
	static volatile int8_t x435 = -1;
	static int16_t x436 = -3;

	t80 = (x433*((x434<=x435)-x436));

	if (t80 != 131068) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x437 = 30U;
	int32_t x438 = -1;
	uint32_t x439 = UINT32_MAX;
	uint8_t x440 = 5U;
	int32_t t81 = -160078352;

	t81 = (x437*((x438<=x439)-x440));

	if (t81 != -120) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x441 = UINT8_MAX;
	static volatile int64_t x442 = -289150264825LL;
	static volatile int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MAX;
	int32_t t82 = 26164;

	t82 = (x441*((x442<=x443)-x444));

	if (t82 != -8355330) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x445 = -1;
	int8_t x446 = INT8_MAX;
	int32_t x447 = -21;
	int64_t x448 = -19162078772LL;

	t83 = (x445*((x446<=x447)-x448));

	if (t83 != -19162078772LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x449 = -1LL;
	volatile int16_t x450 = INT16_MIN;
	uint8_t x451 = 4U;
	volatile int64_t t84 = 2229179825657LL;

	t84 = (x449*((x450<=x451)-x452));

	if (t84 != 204LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x453 = 2;
	int8_t x454 = INT8_MAX;
	int32_t x456 = -1;
	volatile int32_t t85 = 2540524;

	t85 = (x453*((x454<=x455)-x456));

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x457 = -1LL;
	uint64_t x459 = 1185064134892123LLU;
	uint8_t x460 = UINT8_MAX;
	volatile int64_t t86 = -1LL;

	t86 = (x457*((x458<=x459)-x460));

	if (t86 != 255LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = 4;
	int32_t x466 = INT32_MIN;
	uint8_t x468 = 0U;
	volatile int32_t t87 = -206098446;

	t87 = (x465*((x466<=x467)-x468));

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x469 = 0;
	int32_t x470 = 374;
	int64_t x471 = INT64_MIN;
	volatile int32_t t88 = 35614;

	t88 = (x469*((x470<=x471)-x472));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x473 = -84403043LL;
	static int32_t x474 = -1;
	uint32_t x476 = 3212U;
	volatile int64_t t89 = 3425620LL;

	t89 = (x473*((x474<=x475)-x476));

	if (t89 != -362508038349710655LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x477 = UINT16_MAX;
	int8_t x478 = -1;
	volatile int8_t x480 = 9;
	static int32_t t90 = 54243;

	t90 = (x477*((x478<=x479)-x480));

	if (t90 != -524280) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x481 = 155U;
	int8_t x484 = -5;
	int32_t t91 = -366007;

	t91 = (x481*((x482<=x483)-x484));

	if (t91 != 930) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x485 = -1LL;
	static volatile uint32_t x486 = UINT32_MAX;
	int32_t x488 = -332384;
	int64_t t92 = -11LL;

	t92 = (x485*((x486<=x487)-x488));

	if (t92 != -332385LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x492 = 6438LL;
	volatile int64_t t93 = 6619LL;

	t93 = (x489*((x490<=x491)-x492));

	if (t93 != 6438LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x493 = 9;
	int64_t x496 = 1022552643LL;
	volatile int64_t t94 = -323243LL;

	t94 = (x493*((x494<=x495)-x496));

	if (t94 != -9202973787LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x497 = UINT64_MAX;
	uint8_t x498 = 1U;
	static int8_t x499 = INT8_MIN;

	t95 = (x497*((x498<=x499)-x500));

	if (t95 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x501 = INT32_MIN;
	int32_t x502 = INT32_MAX;
	static int8_t x503 = INT8_MIN;
	static uint64_t x504 = UINT64_MAX;
	uint64_t t96 = 30890LLU;

	t96 = (x501*((x502<=x503)-x504));

	if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x513 = -311;
	static int64_t x514 = INT64_MIN;
	volatile uint64_t x516 = 39101084185LLU;
	volatile uint64_t t97 = 30279666470272893LLU;

	t97 = (x513*((x514<=x515)-x516));

	if (t97 != 12160437181224LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x517 = -1LL;
	static int16_t x518 = 25;
	volatile int64_t x519 = 0LL;

	t98 = (x517*((x518<=x519)-x520));

	if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x521 = 10;
	int16_t x524 = INT16_MIN;

	t99 = (x521*((x522<=x523)-x524));

	if (t99 != 327690) { NG(); } else { ; }
	
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

