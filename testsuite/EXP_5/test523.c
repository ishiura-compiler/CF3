#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int64_t x4 = -1LL;
volatile int8_t x6 = 0;
int8_t x8 = INT8_MIN;
static int64_t x10 = -1LL;
static int32_t t3 = -3921;
uint16_t x25 = 0U;
int8_t x26 = INT8_MAX;
int64_t x40 = -951526031430121LL;
volatile uint16_t x42 = 94U;
int16_t x44 = -1;
uint32_t x53 = 16579325U;
uint64_t x54 = 371LLU;
static volatile int32_t x57 = 101177;
volatile uint8_t x58 = UINT8_MAX;
uint64_t x59 = 16796323451LLU;
static uint8_t x69 = 0U;
uint64_t x70 = 15516086953LLU;
uint32_t x71 = 26900961U;
int8_t x90 = INT8_MAX;
int8_t x92 = -1;
uint64_t t16 = 1171LLU;
int64_t x95 = 14545302233236LL;
int16_t x98 = -1;
int64_t x99 = INT64_MIN;
int64_t x103 = INT64_MAX;
int64_t x120 = INT64_MIN;
uint64_t t20 = 43636180459224LLU;
uint64_t x124 = 672484241518925111LLU;
int32_t x128 = INT32_MIN;
uint64_t x131 = UINT64_MAX;
uint8_t x136 = UINT8_MAX;
int16_t x145 = INT16_MIN;
int32_t x146 = INT32_MAX;
volatile int8_t x150 = 1;
int16_t x157 = INT16_MIN;
static uint32_t t29 = 38514U;
static uint8_t x179 = UINT8_MAX;
uint64_t t34 = 696868507LLU;
int64_t x203 = INT64_MAX;
volatile uint64_t x209 = UINT64_MAX;
volatile uint16_t x210 = 44U;
static int8_t x228 = INT8_MAX;
volatile uint64_t x241 = 2109519901945LLU;
int32_t x242 = -858227;
static uint64_t x246 = 30245848661667078LLU;
int32_t x248 = INT32_MIN;
int16_t x249 = 101;
int64_t x251 = -94945427735292222LL;
uint16_t x252 = 805U;
uint16_t x261 = 4U;
static int16_t x267 = 492;
uint64_t t52 = UINT64_MAX;
int8_t x276 = -1;
static volatile int32_t x282 = INT32_MIN;
volatile int64_t t55 = -689012924LL;
int8_t x292 = -1;
int32_t x300 = 44;
static volatile uint64_t t58 = 3070LLU;
static volatile int32_t x306 = INT32_MIN;
uint32_t x307 = 505815U;
volatile uint8_t x311 = 29U;
volatile uint64_t t60 = 38235769LLU;
int32_t x314 = INT32_MAX;
uint8_t x315 = 112U;
uint64_t t61 = 2LLU;
volatile uint16_t x331 = UINT16_MAX;
static uint64_t t63 = 91033484LLU;
uint64_t x338 = UINT64_MAX;
uint64_t x340 = UINT64_MAX;
static int16_t x356 = 8;
int8_t x360 = -1;
uint64_t x384 = 22601015411147LLU;
int64_t x387 = INT64_MIN;
uint16_t x389 = 996U;
static uint32_t x399 = 1223U;
int8_t x400 = INT8_MIN;
uint16_t x402 = UINT16_MAX;
int32_t t75 = -1;
int8_t x405 = INT8_MIN;
volatile int16_t x411 = INT16_MIN;
static uint8_t x416 = 1U;
uint64_t x417 = 11993461LLU;
uint32_t x425 = 58703U;
uint32_t x431 = 723683574U;
int64_t x438 = -954905474712469489LL;
volatile int64_t t84 = 159LL;
static int32_t t85 = -1;
int8_t x448 = INT8_MAX;
int8_t x449 = INT8_MAX;
volatile int8_t x455 = 1;
uint64_t t88 = 79099LLU;
volatile uint64_t t89 = 237149LLU;
volatile int64_t x465 = INT64_MIN;
int32_t x466 = INT32_MAX;
uint16_t x471 = 11U;
int32_t x473 = -1;
volatile int8_t x476 = INT8_MIN;
int16_t x479 = 183;
volatile uint64_t x489 = 13073LLU;
int32_t x494 = INT32_MIN;
uint16_t x498 = 13301U;
volatile int16_t x502 = INT16_MAX;
volatile uint64_t x508 = 229860204561169229LLU;


void f0(void) {
	volatile int8_t x1 = 3;
	volatile int8_t x3 = 7;
	int64_t t0 = 56697535307LL;

	t0 = (x1*((x2/x3)-x4));

	if (t0 != -14040LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int16_t x7 = 120;
	volatile uint64_t t1 = 952279840LLU;

	t1 = (x5*((x6/x7)-x8));

	if (t1 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 259;
	volatile int8_t x11 = INT8_MIN;
	static uint8_t x12 = 98U;
	volatile int64_t t2 = -404727417LL;

	t2 = (x9*((x10/x11)-x12));

	if (t2 != -25382LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 0;
	int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MAX;

	t3 = (x17*((x18/x19)-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x27 = -1;
	static int32_t x28 = 1;
	int32_t t4 = 0;

	t4 = (x25*((x26/x27)-x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = 15876;
	int64_t x34 = -1LL;
	int64_t x35 = INT64_MIN;
	uint16_t x36 = 1481U;
	volatile int64_t t5 = 129411LL;

	t5 = (x33*((x34/x35)-x36));

	if (t5 != -23512356LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = -1936;
	static volatile int16_t x38 = INT16_MIN;
	uint16_t x39 = 444U;
	volatile int64_t t6 = -20040LL;

	t6 = (x37*((x38/x39)-x40));

	if (t6 != -1842154396848572928LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = INT64_MAX;
	volatile int16_t x43 = 642;
	volatile int64_t t7 = INT64_MAX;

	t7 = (x41*((x42/x43)-x44));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x45 = UINT8_MAX;
	uint64_t x46 = UINT64_MAX;
	volatile int32_t x47 = INT32_MIN;
	int64_t x48 = 24219LL;
	volatile uint64_t t8 = 20217664LLU;

	t8 = (x45*((x46/x47)-x48));

	if (t8 != 18446744073703376026LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x55 = INT8_MAX;
	static int8_t x56 = INT8_MIN;
	volatile uint64_t t9 = 35796016428986LLU;

	t9 = (x53*((x54/x55)-x56));

	if (t9 != 2155312250LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x60 = -1LL;
	static volatile uint64_t t10 = 105442244LLU;

	t10 = (x57*((x58/x59)-x60));

	if (t10 != 101177LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = -37;
	int16_t x66 = 0;
	volatile int16_t x67 = -1;
	uint8_t x68 = 1U;
	int32_t t11 = 3031;

	t11 = (x65*((x66/x67)-x68));

	if (t11 != 37) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x72 = -267788573222179LL;
	static volatile uint64_t t12 = 8519105516LLU;

	t12 = (x69*((x70/x71)-x72));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = 1LLU;
	int8_t x74 = INT8_MIN;
	static int64_t x75 = -1LL;
	uint8_t x76 = UINT8_MAX;
	uint64_t t13 = 11228751149LLU;

	t13 = (x73*((x74/x75)-x76));

	if (t13 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = INT16_MAX;
	uint32_t x78 = 11017U;
	uint16_t x79 = 13U;
	int32_t x80 = INT32_MIN;
	uint32_t t14 = 12213U;

	t14 = (x77*((x78/x79)-x80));

	if (t14 != 2175237297U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x81 = 7695LLU;
	int32_t x82 = 1869;
	static uint8_t x83 = 17U;
	int64_t x84 = 195200803411206369LL;
	volatile uint64_t t15 = 86088740569760LLU;

	t15 = (x81*((x82/x83)-x84));

	if (t15 != 10562831794951061812LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x89 = INT64_MIN;
	uint64_t x91 = 54807774365045LLU;

	t16 = (x89*((x90/x91)-x92));

	if (t16 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x93 = INT16_MIN;
	int8_t x94 = -1;
	int32_t x96 = 1361417;
	int64_t t17 = -6690263LL;

	t17 = (x93*((x94/x95)-x96));

	if (t17 != 44610912256LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x97 = 1U;
	volatile int64_t x100 = -301361174LL;
	int64_t t18 = 6241321340460LL;

	t18 = (x97*((x98/x99)-x100));

	if (t18 != 301361174LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x101 = 115U;
	static uint8_t x102 = 3U;
	static uint16_t x104 = 2U;
	int64_t t19 = -44LL;

	t19 = (x101*((x102/x103)-x104));

	if (t19 != -230LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = -1;
	volatile uint64_t x118 = 178086245384LLU;
	int8_t x119 = INT8_MIN;

	t20 = (x117*((x118/x119)-x120));

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x121 = 958311844373298149LLU;
	static uint32_t x122 = UINT32_MAX;
	static int8_t x123 = INT8_MIN;
	volatile uint64_t t21 = 85748LLU;

	t21 = (x121*((x122/x123)-x124));

	if (t21 != 7984121737485718706LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = 393;
	int32_t x126 = INT32_MAX;
	int8_t x127 = -1;
	int32_t t22 = 14699286;

	t22 = (x125*((x126/x127)-x128));

	if (t22 != 393) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x129 = 17121LLU;
	int64_t x130 = INT64_MIN;
	uint32_t x132 = UINT32_MAX;
	volatile uint64_t t23 = 411357665897LLU;

	t23 = (x129*((x130/x131)-x132));

	if (t23 != 18446670539574493921LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	volatile int32_t x135 = -3002801;
	volatile int32_t t24 = 6;

	t24 = (x133*((x134/x135)-x136));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = -1;
	volatile uint16_t x142 = UINT16_MAX;
	int32_t x143 = 203;
	int8_t x144 = INT8_MAX;
	int32_t t25 = 380736619;

	t25 = (x141*((x142/x143)-x144));

	if (t25 != -195) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x147 = UINT32_MAX;
	int32_t x148 = INT32_MIN;
	uint32_t t26 = 70456543U;

	t26 = (x145*((x146/x147)-x148));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x149 = 1300U;
	static volatile int32_t x151 = INT32_MIN;
	static uint16_t x152 = 6065U;
	int32_t t27 = -44205;

	t27 = (x149*((x150/x151)-x152));

	if (t27 != -7884500) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x158 = UINT8_MAX;
	volatile uint16_t x159 = UINT16_MAX;
	int32_t x160 = -1;
	int32_t t28 = -54556;

	t28 = (x157*((x158/x159)-x160));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x161 = -1;
	int8_t x162 = -1;
	uint32_t x163 = UINT32_MAX;
	int32_t x164 = INT32_MAX;

	t29 = (x161*((x162/x163)-x164));

	if (t29 != 2147483646U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x169 = UINT8_MAX;
	volatile uint64_t x170 = 13079927457279LLU;
	volatile int8_t x171 = INT8_MAX;
	int8_t x172 = -1;
	static uint64_t t30 = 120990631203159LLU;

	t30 = (x169*((x170/x171)-x172));

	if (t30 != 26262846469410LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x173 = -2308LL;
	int16_t x174 = -3710;
	int32_t x175 = INT32_MAX;
	volatile int64_t x176 = -3806658902LL;
	int64_t t31 = -2624333970287588LL;

	t31 = (x173*((x174/x175)-x176));

	if (t31 != -8785768745816LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x177 = 4U;
	int64_t x178 = -1LL;
	int16_t x180 = INT16_MIN;
	volatile int64_t t32 = 21596LL;

	t32 = (x177*((x178/x179)-x180));

	if (t32 != 131072LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x181 = 4U;
	volatile uint64_t x182 = 4217184911538708698LLU;
	uint64_t x183 = 53010567437101469LLU;
	uint32_t x184 = 958U;
	uint64_t t33 = 92418006LLU;

	t33 = (x181*((x182/x183)-x184));

	if (t33 != 18446744073709548100LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = UINT64_MAX;
	uint64_t x187 = 2107845924810LLU;
	volatile int16_t x188 = -32;

	t34 = (x185*((x186/x187)-x188));

	if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x189 = INT8_MIN;
	static volatile int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MIN;
	uint32_t x192 = 4506475U;
	static volatile int64_t t35 = -7249LL;

	t35 = (x189*((x190/x191)-x192));

	if (t35 != 576828800LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = INT16_MIN;
	int16_t x194 = -1;
	static volatile int64_t x195 = INT64_MAX;
	volatile int16_t x196 = INT16_MAX;
	static int64_t t36 = -688939LL;

	t36 = (x193*((x194/x195)-x196));

	if (t36 != 1073709056LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x201 = INT8_MIN;
	static int64_t x202 = INT64_MIN;
	int8_t x204 = -1;
	volatile int64_t t37 = -30955LL;

	t37 = (x201*((x202/x203)-x204));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x205 = INT16_MAX;
	int16_t x206 = INT16_MIN;
	static int64_t x207 = INT64_MAX;
	int32_t x208 = INT32_MIN;
	volatile int64_t t38 = -1031323953473733LL;

	t38 = (x205*((x206/x207)-x208));

	if (t38 != 70366596694016LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x211 = 1;
	uint8_t x212 = 39U;
	volatile uint64_t t39 = 221942439641040611LLU;

	t39 = (x209*((x210/x211)-x212));

	if (t39 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	int64_t x216 = -1265325227LL;
	uint64_t t40 = 5LLU;

	t40 = (x213*((x214/x215)-x216));

	if (t40 != 15729478839325163520LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x225 = -10;
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = -9022721;
	static int32_t t41 = 66069;

	t41 = (x225*((x226/x227)-x228));

	if (t41 != 1270) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = -1;
	static uint64_t x231 = UINT64_MAX;
	static volatile int16_t x232 = 3906;
	uint64_t t42 = 924921407951819642LLU;

	t42 = (x229*((x230/x231)-x232));

	if (t42 != 127959040LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x233 = 1350576481U;
	uint8_t x234 = 0U;
	int32_t x235 = INT32_MIN;
	static uint16_t x236 = UINT16_MAX;
	uint32_t t43 = 976U;

	t43 = (x233*((x234/x235)-x236));

	if (t43 != 656353633U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x237 = 156261LL;
	int32_t x238 = INT32_MIN;
	uint8_t x239 = 23U;
	uint16_t x240 = 2402U;
	static int64_t t44 = 64882LL;

	t44 = (x237*((x238/x239)-x240));

	if (t44 != -14590285833816LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x243 = INT64_MAX;
	int32_t x244 = INT32_MIN;
	uint64_t t45 = 7296LLU;

	t45 = (x241*((x242/x243)-x244));

	if (t45 != 10707196498610749440LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = 381;
	static int8_t x247 = INT8_MIN;
	static uint64_t t46 = 70607004954LLU;

	t46 = (x245*((x246/x247)-x248));

	if (t46 != 818191269888LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x250 = INT16_MIN;
	int64_t t47 = -3714993610696183830LL;

	t47 = (x249*((x250/x251)-x252));

	if (t47 != -81305LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = INT32_MAX;
	static uint64_t x254 = 148LLU;
	int64_t x255 = 1022007249LL;
	uint8_t x256 = 11U;
	static volatile uint64_t t48 = 5372LLU;

	t48 = (x253*((x254/x255)-x256));

	if (t48 != 18446744050087231499LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x257 = -1LL;
	static volatile uint64_t x258 = 367452637699840971LLU;
	static volatile int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MIN;
	static volatile uint64_t t49 = 1921454LLU;

	t49 = (x257*((x258/x259)-x260));

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x262 = INT8_MAX;
	int8_t x263 = -1;
	uint8_t x264 = 15U;
	int32_t t50 = -63049;

	t50 = (x261*((x262/x263)-x264));

	if (t50 != -568) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x266 = -1;
	uint64_t x268 = UINT64_MAX;
	uint64_t t51 = 7399LLU;

	t51 = (x265*((x266/x267)-x268));

	if (t51 != 4294967295LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x269 = -1LL;
	int32_t x270 = INT32_MIN;
	volatile uint32_t x271 = UINT32_MAX;
	static uint64_t x272 = UINT64_MAX;

	t52 = (x269*((x270/x271)-x272));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = INT32_MIN;
	uint16_t x274 = UINT16_MAX;
	int32_t x275 = INT32_MAX;
	static volatile int32_t t53 = INT32_MIN;

	t53 = (x273*((x274/x275)-x276));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x277 = 6;
	int8_t x278 = -1;
	uint32_t x279 = 228U;
	int16_t x280 = INT16_MAX;
	uint32_t t54 = 52U;

	t54 = (x277*((x278/x279)-x280));

	if (t54 != 112828848U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x281 = UINT16_MAX;
	volatile int64_t x283 = -1LL;
	uint8_t x284 = 0U;

	t55 = (x281*((x282/x283)-x284));

	if (t55 != 140735340871680LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = -1;
	int16_t x287 = -1;
	static uint32_t x288 = UINT32_MAX;
	uint32_t t56 = 1309278U;

	t56 = (x285*((x286/x287)-x288));

	if (t56 != 131070U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = INT8_MAX;
	volatile uint32_t x290 = 167364U;
	int16_t x291 = 22;
	volatile uint32_t t57 = 86822176U;

	t57 = (x289*((x290/x291)-x292));

	if (t57 != 966216U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x297 = 27U;
	uint64_t x298 = 6431314539LLU;
	int32_t x299 = 1974;

	t58 = (x297*((x298/x299)-x300));

	if (t58 != 87965109LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x305 = 25382116LLU;
	int8_t x308 = INT8_MAX;
	uint64_t t59 = 1LLU;

	t59 = (x305*((x306/x307)-x308));

	if (t59 != 104523553688LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x309 = 24LL;
	int32_t x310 = 1;
	uint64_t x312 = UINT64_MAX;

	t60 = (x309*((x310/x311)-x312));

	if (t60 != 24LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x313 = INT8_MAX;
	uint64_t x316 = UINT64_MAX;

	t61 = (x313*((x314/x315)-x316));

	if (t61 != 2435093174LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x329 = -1;
	int32_t x330 = 20443073;
	volatile int32_t x332 = -57069235;
	volatile int32_t t62 = 0;

	t62 = (x329*((x330/x331)-x332));

	if (t62 != -57069546) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x333 = 118553298360404LLU;
	int16_t x334 = -1;
	int64_t x335 = -1LL;
	static volatile int8_t x336 = INT8_MIN;

	t63 = (x333*((x334/x335)-x336));

	if (t63 != 15293375488492116LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x337 = INT64_MAX;
	volatile int8_t x339 = INT8_MIN;
	volatile uint64_t t64 = 2500671750616170LLU;

	t64 = (x337*((x338/x339)-x340));

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = -1;
	volatile int16_t x351 = INT16_MAX;
	uint8_t x352 = 3U;
	uint32_t t65 = 0U;

	t65 = (x349*((x350/x351)-x352));

	if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x353 = INT32_MIN;
	volatile uint32_t x354 = UINT32_MAX;
	uint32_t x355 = 30U;
	volatile uint32_t t66 = 12043398U;

	t66 = (x353*((x354/x355)-x356));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x357 = 5;
	uint16_t x358 = 6300U;
	int64_t x359 = -547999149863LL;
	volatile int64_t t67 = -372834389247659LL;

	t67 = (x357*((x358/x359)-x360));

	if (t67 != 5LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x361 = -1;
	volatile uint32_t x362 = UINT32_MAX;
	static uint8_t x363 = 18U;
	volatile int32_t x364 = 817136;
	uint32_t t68 = 406781U;

	t68 = (x361*((x362/x363)-x364));

	if (t68 != 4057175138U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x377 = INT16_MAX;
	volatile uint64_t x378 = 84451569542LLU;
	static volatile int16_t x379 = -15055;
	volatile uint8_t x380 = 1U;
	uint64_t t69 = 27809381498LLU;

	t69 = (x377*((x378/x379)-x380));

	if (t69 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x381 = 3585408;
	static int64_t x382 = -6728LL;
	uint32_t x383 = 449068U;
	static uint64_t t70 = 176816478915LLU;

	t70 = (x381*((x382/x383)-x384));

	if (t70 != 11199858905298015104LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x385 = -1;
	volatile int64_t x386 = INT64_MIN;
	static int8_t x388 = 2;
	volatile int64_t t71 = 0LL;

	t71 = (x385*((x386/x387)-x388));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = INT8_MIN;
	uint8_t x392 = 7U;
	static volatile uint64_t t72 = 7LLU;

	t72 = (x389*((x390/x391)-x392));

	if (t72 != 18446744073709545640LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x393 = 15;
	int32_t x394 = 1;
	static volatile int32_t x395 = INT32_MIN;
	int32_t x396 = -12995520;
	int32_t t73 = -68710447;

	t73 = (x393*((x394/x395)-x396));

	if (t73 != 194932800) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x397 = -126;
	int8_t x398 = INT8_MIN;
	uint32_t t74 = 112U;

	t74 = (x397*((x398/x399)-x400));

	if (t74 != 3852460714U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x401 = 1U;
	int8_t x403 = 12;
	volatile int16_t x404 = 100;

	t75 = (x401*((x402/x403)-x404));

	if (t75 != 5361) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x406 = 900582483520LLU;
	int32_t x407 = 1358289;
	int16_t x408 = INT16_MAX;
	uint64_t t76 = 3391LLU;

	t76 = (x405*((x406/x407)-x408));

	if (t76 != 18446744073628878336LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x409 = -1;
	int64_t x410 = -230788LL;
	int32_t x412 = INT32_MIN;
	volatile int64_t t77 = -195537520090099LL;

	t77 = (x409*((x410/x411)-x412));

	if (t77 != -2147483655LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x413 = INT16_MIN;
	volatile int8_t x414 = INT8_MAX;
	static uint32_t x415 = UINT32_MAX;
	uint32_t t78 = 6720082U;

	t78 = (x413*((x414/x415)-x416));

	if (t78 != 32768U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x418 = INT8_MIN;
	volatile int64_t x419 = INT64_MIN;
	static uint8_t x420 = 1U;
	uint64_t t79 = 1LLU;

	t79 = (x417*((x418/x419)-x420));

	if (t79 != 18446744073697558155LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x421 = INT16_MIN;
	static int8_t x422 = -5;
	uint64_t x423 = 280938708401160LLU;
	int16_t x424 = -30;
	uint64_t t80 = 17021LLU;

	t80 = (x421*((x422/x423)-x424));

	if (t80 != 18446744071556988928LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x426 = INT8_MAX;
	static int32_t x427 = -2;
	uint8_t x428 = UINT8_MAX;
	volatile uint32_t t81 = 1196U;

	t81 = (x425*((x426/x427)-x428));

	if (t81 != 4276299742U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x429 = 23243166;
	volatile int32_t x430 = 35739721;
	int64_t x432 = 243482LL;
	volatile int64_t t82 = -1003634756767296638LL;

	t82 = (x429*((x430/x431)-x432));

	if (t82 != -5659292544012LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x433 = UINT8_MAX;
	volatile uint16_t x434 = 449U;
	uint8_t x435 = 1U;
	uint64_t x436 = 3499487775622352982LLU;
	static uint64_t t83 = 3LLU;

	t83 = (x433*((x434/x435)-x436));

	if (t83 != 11521076828068133269LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x437 = -10963;
	static int16_t x439 = 2771;
	uint32_t x440 = 0U;

	t84 = (x437*((x438/x439)-x440));

	if (t84 != 3777924474656365207LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x441 = 18543U;
	volatile int8_t x442 = INT8_MAX;
	int8_t x443 = INT8_MAX;
	static int16_t x444 = 6;

	t85 = (x441*((x442/x443)-x444));

	if (t85 != -92715) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x445 = INT8_MIN;
	uint32_t x446 = UINT32_MAX;
	int32_t x447 = INT32_MAX;
	uint32_t t86 = 314431U;

	t86 = (x445*((x446/x447)-x448));

	if (t86 != 16000U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x450 = 71U;
	uint16_t x451 = 22U;
	int8_t x452 = -2;
	static int32_t t87 = -851;

	t87 = (x449*((x450/x451)-x452));

	if (t87 != 635) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x453 = 1882238LLU;
	int16_t x454 = -1;
	uint16_t x456 = UINT16_MAX;

	t88 = (x453*((x454/x455)-x456));

	if (t88 != 18446743950355202048LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MIN;
	int16_t x459 = 1446;
	uint64_t x460 = 591624931LLU;

	t89 = (x457*((x458/x459)-x460));

	if (t89 != 19386366459904LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x467 = INT64_MAX;
	int8_t x468 = -1;
	int64_t t90 = INT64_MIN;

	t90 = (x465*((x466/x467)-x468));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x469 = UINT32_MAX;
	static uint32_t x470 = 28396U;
	uint32_t x472 = UINT32_MAX;
	uint32_t t91 = 19002U;

	t91 = (x469*((x470/x471)-x472));

	if (t91 != 4294964714U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x474 = 0U;
	static uint32_t x475 = UINT32_MAX;
	uint32_t t92 = 3200U;

	t92 = (x473*((x474/x475)-x476));

	if (t92 != 4294967168U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x477 = -1;
	int64_t x478 = 9120287045883LL;
	static volatile int8_t x480 = 1;
	volatile int64_t t93 = 3105681787482LL;

	t93 = (x477*((x478/x479)-x480));

	if (t93 != -49837634129LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x481 = INT8_MAX;
	uint64_t x482 = UINT64_MAX;
	static volatile int64_t x483 = INT64_MIN;
	int64_t x484 = -1LL;
	uint64_t t94 = 3613848LLU;

	t94 = (x481*((x482/x483)-x484));

	if (t94 != 254LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x490 = INT16_MIN;
	volatile uint64_t x491 = UINT64_MAX;
	int16_t x492 = INT16_MIN;
	volatile uint64_t t95 = 0LLU;

	t95 = (x489*((x490/x491)-x492));

	if (t95 != 428376064LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x493 = INT64_MIN;
	int32_t x495 = INT32_MIN;
	uint8_t x496 = 0U;
	volatile int64_t t96 = INT64_MIN;

	t96 = (x493*((x494/x495)-x496));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x497 = -1LL;
	uint16_t x499 = 4U;
	int32_t x500 = INT32_MAX;
	int64_t t97 = 1417519451871LL;

	t97 = (x497*((x498/x499)-x500));

	if (t97 != 2147480322LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x501 = -1;
	static volatile uint8_t x503 = UINT8_MAX;
	static uint16_t x504 = UINT16_MAX;
	int32_t t98 = 2070448;

	t98 = (x501*((x502/x503)-x504));

	if (t98 != 65407) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x505 = 57991U;
	uint16_t x506 = UINT16_MAX;
	int64_t x507 = INT64_MIN;
	static uint64_t t99 = 1461551762298543802LLU;

	t99 = (x505*((x506/x507)-x508));

	if (t99 != 7172842585241059429LLU) { NG(); } else { ; }
	
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

