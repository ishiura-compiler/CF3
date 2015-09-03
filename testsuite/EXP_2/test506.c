#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
int16_t x12 = -82;
static uint16_t x23 = 24035U;
uint32_t x24 = UINT32_MAX;
volatile uint64_t t4 = 54361564651816351LLU;
static int32_t x28 = INT32_MIN;
static volatile int8_t x32 = INT8_MIN;
int8_t x35 = 0;
int64_t t7 = 50LL;
uint32_t x51 = 64416881U;
volatile uint64_t t11 = UINT64_MAX;
static uint16_t x76 = 12U;
int16_t x79 = 1;
int64_t t15 = -9LL;
volatile int16_t x81 = INT16_MAX;
static int16_t x82 = -1573;
volatile int64_t t17 = 4124LL;
int32_t x97 = -94;
uint8_t x101 = UINT8_MAX;
int16_t x102 = 3517;
static uint8_t x110 = UINT8_MAX;
uint64_t t20 = 150LLU;
volatile uint16_t x115 = 1U;
uint32_t x120 = 6U;
volatile int32_t x122 = INT32_MIN;
volatile int64_t x123 = 0LL;
uint64_t x147 = 7390337351LLU;
int32_t x174 = -3101;
volatile int8_t x176 = 1;
uint32_t x181 = 1625U;
static volatile int64_t x182 = INT64_MAX;
int8_t x183 = -1;
volatile uint32_t t30 = 0U;
static volatile uint32_t x191 = 91U;
int16_t x194 = -1;
volatile int32_t x204 = INT32_MIN;
volatile int32_t x210 = 162816430;
int8_t x212 = 15;
uint64_t x223 = 237129154140160LLU;
volatile uint8_t x228 = 8U;
int32_t x232 = INT32_MIN;
int8_t x235 = INT8_MIN;
static volatile int64_t t43 = 47495960LL;
static volatile int8_t x241 = -1;
uint64_t x242 = UINT64_MAX;
volatile int32_t x246 = INT32_MIN;
uint8_t x249 = 1U;
int32_t x251 = -1;
uint64_t x255 = UINT64_MAX;
volatile int16_t x261 = INT16_MIN;
volatile int32_t x268 = -1560565;
uint16_t x276 = 177U;
int64_t t50 = -365354LL;
int64_t x289 = INT64_MIN;
uint16_t x290 = UINT16_MAX;
int16_t x292 = INT16_MIN;
static volatile int64_t t51 = 1LL;
static int32_t t52 = 34847056;
uint64_t t53 = 867440LLU;
uint8_t x314 = 2U;
static uint64_t t56 = UINT64_MAX;
int32_t x320 = INT32_MAX;
uint32_t t58 = UINT32_MAX;
static uint64_t x338 = 111070LLU;
int16_t x348 = INT16_MIN;
int64_t x352 = -1LL;
volatile uint32_t x354 = UINT32_MAX;
static int16_t x356 = 1;
uint64_t t63 = 3963042026705LLU;
volatile uint16_t x368 = 21U;
uint64_t x374 = 2986936625968220LLU;
int16_t x376 = INT16_MIN;
volatile int16_t x392 = 30;
uint32_t x394 = UINT32_MAX;
int32_t x395 = INT32_MIN;
int8_t x401 = INT8_MIN;
volatile uint64_t x402 = 303727008043029LLU;
static volatile uint64_t t71 = 50746531993493LLU;
uint16_t x416 = UINT16_MAX;
uint64_t x420 = 4977176340194741816LLU;
volatile int8_t x429 = INT8_MIN;
int64_t t76 = -656LL;
static int64_t x443 = 3577LL;
volatile int64_t t77 = -1104202829039951580LL;
uint8_t x450 = 89U;
volatile int32_t t82 = -1;
volatile int64_t t83 = 8351447539LL;
int64_t x477 = -1458138103669115167LL;
static volatile int16_t x480 = -1;
static volatile uint32_t x491 = 1066710569U;
uint16_t x497 = 285U;
int32_t x505 = INT32_MIN;
uint16_t x508 = UINT16_MAX;
static int64_t x514 = -26436993084LL;
uint16_t x524 = 3844U;
int32_t x529 = INT32_MIN;
static int16_t x530 = -10114;
uint64_t t94 = 223207645LLU;
uint64_t x537 = 185819779539615717LLU;
uint8_t x543 = 8U;
int32_t x545 = INT32_MAX;
volatile uint32_t x551 = 2658U;
volatile uint32_t t98 = UINT32_MAX;
static int16_t x561 = -1;


void f0(void) {
	static uint16_t x1 = 3137U;
	static volatile uint8_t x2 = 75U;
	int16_t x3 = 0;
	volatile int32_t t0 = 1;

	t0 = ((x1^(x2*x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	int8_t x6 = INT8_MIN;
	int32_t x7 = -2;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = UINT64_MAX;

	t1 = ((x5^(x6*x7))|x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -57;
	uint32_t x10 = UINT32_MAX;
	volatile int8_t x11 = INT8_MIN;
	uint32_t t2 = 8300185U;

	t2 = ((x9^(x10*x11))|x12);

	if (t2 != 4294967279U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -3;
	static volatile int64_t x14 = INT64_MIN;
	uint8_t x15 = 0U;
	int8_t x16 = 2;
	static volatile int64_t t3 = -770355259349LL;

	t3 = ((x13^(x14*x15))|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	volatile uint64_t x22 = 5951504014LLU;

	t4 = ((x21^(x22*x23))|x24);

	if (t4 != 143048180760575LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	uint16_t x26 = 3U;
	int16_t x27 = INT16_MIN;
	int32_t t5 = 140;

	t5 = ((x25^(x26*x27))|x28);

	if (t5 != -2147385345) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 118U;
	int16_t x30 = 675;
	uint8_t x31 = UINT8_MAX;
	static volatile int32_t t6 = -108414501;

	t6 = ((x29^(x30*x31))|x32);

	if (t6 != -85) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MIN;
	static int16_t x36 = INT16_MIN;

	t7 = ((x33^(x34*x35))|x36);

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 119094088530401LLU;
	uint16_t x38 = 14U;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -357928443;
	volatile uint64_t t8 = 139004181482200635LLU;

	t8 = ((x37^(x38*x39))|x40);

	if (t8 != 18446744073703977701LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 20U;
	uint16_t x42 = UINT16_MAX;
	static int16_t x43 = -8;
	volatile int8_t x44 = -1;
	static volatile int32_t t9 = 25985048;

	t9 = ((x41^(x42*x43))|x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	static uint32_t x50 = 14U;
	int64_t x52 = INT64_MAX;
	static volatile int64_t t10 = INT64_MAX;

	t10 = ((x49^(x50*x51))|x52);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = UINT16_MAX;
	volatile uint64_t x62 = 8462LLU;
	int16_t x63 = -170;
	int64_t x64 = INT64_MAX;

	t11 = ((x61^(x62*x63))|x64);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x65 = 13784U;
	uint8_t x66 = 63U;
	int32_t x67 = -1;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t12 = -104;

	t12 = ((x65^(x66*x67))|x68);

	if (t12 != -13697) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = UINT32_MAX;
	static uint32_t x70 = 927304U;
	uint64_t x71 = 8LLU;
	static uint32_t x72 = 1562022U;
	static uint64_t t13 = 836817421088554150LLU;

	t13 = ((x69^(x70*x71))|x72);

	if (t13 != 4288667071LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = INT8_MIN;
	static volatile int32_t x74 = -1;
	static volatile uint64_t x75 = 815412866126117424LLU;
	volatile uint64_t t14 = 7467445447060484LLU;

	t14 = ((x73^(x74*x75))|x76);

	if (t14 != 815412866126117468LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = 0;
	int16_t x78 = -74;
	int64_t x80 = INT64_MIN;

	t15 = ((x77^(x78*x79))|x80);

	if (t15 != -74LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x83 = 235403336U;
	uint32_t x84 = UINT32_MAX;
	uint32_t t16 = UINT32_MAX;

	t16 = ((x81^(x82*x83))|x84);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MAX;
	int16_t x90 = -1;
	int32_t x91 = -1;
	int64_t x92 = INT64_MIN;

	t17 = ((x89^(x90*x91))|x92);

	if (t17 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x98 = 1320373296093819LLU;
	uint16_t x99 = 91U;
	volatile int64_t x100 = -1LL;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = ((x97^(x98*x99))|x100);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x103 = 982U;
	volatile uint8_t x104 = UINT8_MAX;
	static int32_t t19 = -20829;

	t19 = ((x101^(x102*x103))|x104);

	if (t19 != 3453695) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = 0;
	static int8_t x111 = -1;
	static uint64_t x112 = 503453166LLU;

	t20 = ((x109^(x110*x111))|x112);

	if (t20 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = 277540285941638LLU;
	int8_t x114 = INT8_MIN;
	int32_t x116 = INT32_MIN;
	static volatile uint64_t t21 = 29682021767006LLU;

	t21 = ((x113^(x114*x115))|x116);

	if (t21 != 18446744072062793734LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = 50629919295LL;
	int8_t x118 = INT8_MIN;
	volatile uint32_t x119 = UINT32_MAX;
	int64_t t22 = -82819815LL;

	t22 = ((x117^(x118*x119))|x120);

	if (t22 != 50629919423LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x121 = INT16_MAX;
	uint32_t x124 = 118U;
	volatile int64_t t23 = -411LL;

	t23 = ((x121^(x122*x123))|x124);

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = INT16_MAX;
	volatile int16_t x134 = INT16_MIN;
	int16_t x135 = -1;
	volatile int32_t x136 = INT32_MIN;
	int32_t t24 = 126060;

	t24 = ((x133^(x134*x135))|x136);

	if (t24 != -2147418113) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x145 = -1;
	int8_t x146 = INT8_MIN;
	volatile int16_t x148 = INT16_MIN;
	uint64_t t25 = 4076LLU;

	t25 = ((x145^(x146*x147))|x148);

	if (t25 != 18446744073709527935LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MAX;
	int32_t x167 = -1;
	static volatile int32_t x168 = INT32_MAX;
	int32_t t26 = INT32_MAX;

	t26 = ((x165^(x166*x167))|x168);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x173 = 99U;
	int32_t x175 = -2;
	static int32_t t27 = 121;

	t27 = ((x173^(x174*x175))|x176);

	if (t27 != 6233) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x177 = UINT64_MAX;
	uint32_t x178 = UINT32_MAX;
	int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	static volatile uint64_t t28 = 23234519542714636LLU;

	t28 = ((x177^(x178*x179))|x180);

	if (t28 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x184 = INT16_MIN;
	int64_t t29 = 411493794LL;

	t29 = ((x181^(x182*x183))|x184);

	if (t29 != -31144LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x185 = UINT8_MAX;
	static int16_t x186 = INT16_MIN;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = INT8_MAX;

	t30 = ((x185^(x186*x187))|x188);

	if (t30 != 33023U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x189 = 622335947U;
	uint64_t x190 = UINT64_MAX;
	int32_t x192 = 82501;
	static volatile uint64_t t31 = 258659LLU;

	t31 = ((x189^(x190*x191))|x192);

	if (t31 != 18446744073087216239LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x193 = -1;
	int32_t x195 = -1;
	static int32_t x196 = -1;
	volatile int32_t t32 = 7;

	t32 = ((x193^(x194*x195))|x196);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x197 = -441;
	int16_t x198 = INT16_MIN;
	uint64_t x199 = 28254982062507LLU;
	uint16_t x200 = 7738U;
	uint64_t t33 = 5435744LLU;

	t33 = ((x197^(x198*x199))|x200);

	if (t33 != 925859252224228991LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x201 = 97U;
	static uint32_t x202 = UINT32_MAX;
	int8_t x203 = INT8_MAX;
	uint32_t t34 = 26U;

	t34 = ((x201^(x202*x203))|x204);

	if (t34 != 4294967264U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x205 = INT16_MAX;
	static volatile int16_t x206 = INT16_MIN;
	uint8_t x207 = 15U;
	static int8_t x208 = 1;
	static int32_t t35 = -121;

	t35 = ((x205^(x206*x207))|x208);

	if (t35 != -458753) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x209 = INT64_MIN;
	uint32_t x211 = 3355U;
	static int64_t t36 = -993153018921847216LL;

	t36 = ((x209^(x210*x211))|x212);

	if (t36 != -9223372036066499745LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x213 = -1;
	int8_t x214 = -30;
	int8_t x215 = -1;
	int32_t x216 = INT32_MIN;
	volatile int32_t t37 = 0;

	t37 = ((x213^(x214*x215))|x216);

	if (t37 != -31) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = 1;
	static uint64_t x219 = 58807LLU;
	uint32_t x220 = 17U;
	uint64_t t38 = 254013974LLU;

	t38 = ((x217^(x218*x219))|x220);

	if (t38 != 9223372036854834615LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x221 = INT64_MIN;
	volatile int64_t x222 = INT64_MIN;
	uint16_t x224 = 1U;
	uint64_t t39 = 737610073616492830LLU;

	t39 = ((x221^(x222*x223))|x224);

	if (t39 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x225 = -1032386044449101LL;
	static uint8_t x226 = UINT8_MAX;
	int8_t x227 = -1;
	volatile int64_t t40 = 340625609LL;

	t40 = ((x225^(x226*x227))|x228);

	if (t40 != 1032386044449210LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x230 = -11654;
	uint16_t x231 = 6745U;
	volatile uint64_t t41 = 18759666436142LLU;

	t41 = ((x229^(x230*x231))|x232);

	if (t41 != 18446744071640674197LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x233 = 357;
	static int16_t x234 = 5;
	volatile int16_t x236 = -6360;
	volatile int32_t t42 = 8933943;

	t42 = ((x233^(x234*x235))|x236);

	if (t42 != -19) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x237 = -1LL;
	uint16_t x238 = 10U;
	uint16_t x239 = 23203U;
	static int8_t x240 = INT8_MAX;

	t43 = ((x237^(x238*x239))|x240);

	if (t43 != -231937LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x243 = 1U;
	static int8_t x244 = -1;
	uint64_t t44 = UINT64_MAX;

	t44 = ((x241^(x242*x243))|x244);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x245 = -1;
	uint64_t x247 = 26698658LLU;
	int32_t x248 = -1;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x245^(x246*x247))|x248);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x250 = 3927LL;
	static int64_t x252 = INT64_MIN;
	int64_t t46 = -101850647LL;

	t46 = ((x249^(x250*x251))|x252);

	if (t46 != -3928LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x253 = -1;
	int64_t x254 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x253^(x254*x255))|x256);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x262 = 7278339888927586590LLU;
	static int16_t x263 = 916;
	int16_t x264 = INT16_MIN;
	static volatile uint64_t t48 = 3642673LLU;

	t48 = ((x261^(x262*x263))|x264);

	if (t48 != 18446744073709543256LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MIN;
	int64_t x267 = -1LL;
	volatile int64_t t49 = -449LL;

	t49 = ((x265^(x266*x267))|x268);

	if (t49 != -1560565LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x273 = UINT8_MAX;
	int64_t x274 = -1108397LL;
	int8_t x275 = -1;

	t50 = ((x273^(x274*x275))|x276);

	if (t50 != 1108467LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x291 = -1471471LL;

	t51 = ((x289^(x290*x291))|x292);

	if (t51 != -3089LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x293 = INT8_MIN;
	uint8_t x294 = 1U;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = UINT8_MAX;

	t52 = ((x293^(x294*x295))|x296);

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x297 = 18080372520380LLU;
	static uint32_t x298 = UINT32_MAX;
	int32_t x299 = 51691471;
	int64_t x300 = 12929646LL;

	t53 = ((x297^(x298*x299))|x300);

	if (t53 != 18078973132783LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x301 = -1;
	uint8_t x302 = 0U;
	uint8_t x303 = 1U;
	int16_t x304 = INT16_MIN;
	int32_t t54 = -201;

	t54 = ((x301^(x302*x303))|x304);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x309 = 0;
	int64_t x310 = -1LL;
	static int16_t x311 = INT16_MIN;
	static int8_t x312 = INT8_MAX;
	volatile int64_t t55 = -74435802196LL;

	t55 = ((x309^(x310*x311))|x312);

	if (t55 != 32895LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x313 = INT16_MAX;
	int32_t x315 = -1;
	volatile uint64_t x316 = UINT64_MAX;

	t56 = ((x313^(x314*x315))|x316);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x317 = 1;
	static int32_t x318 = -1;
	int16_t x319 = -600;
	volatile int32_t t57 = INT32_MAX;

	t57 = ((x317^(x318*x319))|x320);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x325 = 1;
	uint32_t x326 = 1999695U;
	int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MAX;

	t58 = ((x325^(x326*x327))|x328);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x329 = 1LL;
	int8_t x330 = INT8_MIN;
	int32_t x331 = -1;
	static volatile uint16_t x332 = 1U;
	static volatile int64_t t59 = -404923LL;

	t59 = ((x329^(x330*x331))|x332);

	if (t59 != 129LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x337 = 0LL;
	uint64_t x339 = 219983LLU;
	int16_t x340 = INT16_MIN;
	volatile uint64_t t60 = 188375LLU;

	t60 = ((x337^(x338*x339))|x340);

	if (t60 != 18446744073709538690LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x345 = 1U;
	uint32_t x346 = UINT32_MAX;
	int16_t x347 = INT16_MAX;
	volatile uint32_t t61 = 36U;

	t61 = ((x345^(x346*x347))|x348);

	if (t61 != 4294934528U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x349 = UINT32_MAX;
	uint32_t x350 = UINT32_MAX;
	static uint16_t x351 = 1189U;
	volatile int64_t t62 = 233LL;

	t62 = ((x349^(x350*x351))|x352);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x353 = 6U;
	uint64_t x355 = 1551648587675733976LLU;

	t63 = ((x353^(x354*x355))|x356);

	if (t63 != 5700853082638381103LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x365 = UINT64_MAX;
	volatile uint32_t x366 = 118173U;
	int8_t x367 = INT8_MIN;
	uint64_t t64 = 2165142605272304LLU;

	t64 = ((x365^(x366*x367))|x368);

	if (t64 != 18446744069429710463LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x369 = -7;
	int16_t x370 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	volatile int32_t x372 = INT32_MIN;
	uint32_t t65 = 63162U;

	t65 = ((x369^(x370*x371))|x372);

	if (t65 != 4294934521U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x373 = INT64_MAX;
	uint64_t x375 = 13968626008853484LLU;
	static uint64_t t66 = 3554379LLU;

	t66 = ((x373^(x374*x375))|x376);

	if (t66 != 18446744073709537071LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x377 = 4233U;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = 243;
	static int32_t x380 = -15;
	uint32_t t67 = 1047U;

	t67 = ((x377^(x378*x379))|x380);

	if (t67 != 4294967285U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MIN;
	int32_t x387 = -1;
	static int8_t x388 = -46;
	int32_t t68 = -4193;

	t68 = ((x385^(x386*x387))|x388);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x389 = -38;
	volatile uint32_t x390 = 9631126U;
	int32_t x391 = 0;
	volatile uint32_t t69 = 22098611U;

	t69 = ((x389^(x390*x391))|x392);

	if (t69 != 4294967262U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x393 = INT16_MAX;
	int8_t x396 = -1;
	uint32_t t70 = UINT32_MAX;

	t70 = ((x393^(x394*x395))|x396);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x403 = INT8_MIN;
	volatile int32_t x404 = INT32_MIN;

	t71 = ((x401^(x402*x403))|x404);

	if (t71 != 18446744072470661632LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x405 = 361;
	volatile int8_t x406 = -1;
	volatile int8_t x407 = INT8_MIN;
	int32_t x408 = INT32_MAX;
	int32_t t72 = INT32_MAX;

	t72 = ((x405^(x406*x407))|x408);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x409 = 1LLU;
	static int64_t x410 = 131588LL;
	uint32_t x411 = UINT32_MAX;
	uint64_t x412 = 8871205341924598LLU;
	volatile uint64_t t73 = 26392437992LLU;

	t73 = ((x409^(x410*x411))|x412);

	if (t73 != 8873419613404671LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x413 = -1;
	uint16_t x414 = UINT16_MAX;
	static int16_t x415 = INT16_MIN;
	static int32_t t74 = INT32_MAX;

	t74 = ((x413^(x414*x415))|x416);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x417 = 1;
	static int64_t x418 = -1LL;
	int16_t x419 = -1;
	uint64_t t75 = 4941LLU;

	t75 = ((x417^(x418*x419))|x420);

	if (t75 != 4977176340194741816LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x430 = 1167LL;
	int8_t x431 = INT8_MIN;
	int16_t x432 = INT16_MIN;

	t76 = ((x429^(x430*x431))|x432);

	if (t76 != -14592LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x441 = INT8_MIN;
	int32_t x442 = 1;
	uint32_t x444 = 1U;

	t77 = ((x441^(x442*x443))|x444);

	if (t77 != -3463LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x445 = INT64_MIN;
	int64_t x446 = 1105209447LL;
	int32_t x447 = -227887;
	static int8_t x448 = -1;
	int64_t t78 = -10762826838LL;

	t78 = ((x445^(x446*x447))|x448);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x449 = -1;
	static int16_t x451 = 1;
	uint16_t x452 = UINT16_MAX;
	int32_t t79 = -86472761;

	t79 = ((x449^(x450*x451))|x452);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x457 = INT8_MAX;
	static volatile int16_t x458 = 1;
	volatile uint8_t x459 = 0U;
	int16_t x460 = INT16_MIN;
	int32_t t80 = 43;

	t80 = ((x457^(x458*x459))|x460);

	if (t80 != -32641) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x461 = 15213U;
	int8_t x462 = INT8_MAX;
	int8_t x463 = -1;
	volatile int64_t x464 = INT64_MIN;
	int64_t t81 = 353927LL;

	t81 = ((x461^(x462*x463))|x464);

	if (t81 != -15124LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x465 = 1028917;
	volatile int8_t x466 = -1;
	int16_t x467 = INT16_MAX;
	static uint8_t x468 = 5U;

	t82 = ((x465^(x466*x467))|x468);

	if (t82 != -1035467) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = -1;
	int16_t x470 = INT16_MAX;
	int8_t x471 = -1;
	int64_t x472 = -1LL;

	t83 = ((x469^(x470*x471))|x472);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x478 = INT8_MAX;
	volatile int16_t x479 = INT16_MIN;
	volatile int64_t t84 = 1951616203450096047LL;

	t84 = ((x477^(x478*x479))|x480);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x481 = INT32_MIN;
	int64_t x482 = INT64_MIN;
	uint32_t x483 = 1U;
	static uint8_t x484 = 23U;
	volatile int64_t t85 = -4489506131704034664LL;

	t85 = ((x481^(x482*x483))|x484);

	if (t85 != 9223372034707292183LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x485 = UINT64_MAX;
	uint32_t x486 = 107U;
	int16_t x487 = -1;
	int8_t x488 = INT8_MAX;
	static uint64_t t86 = 5046791118442915726LLU;

	t86 = ((x485^(x486*x487))|x488);

	if (t86 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x489 = -112018621;
	int32_t x490 = 115452;
	int64_t x492 = -49809782LL;
	int64_t t87 = -4LL;

	t87 = ((x489^(x490*x491))|x492);

	if (t87 != -3670113LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x498 = 31859;
	uint32_t x499 = 190U;
	uint64_t x500 = 1324171250348LLU;
	static uint64_t t88 = 2955692543468360LLU;

	t88 = ((x497^(x498*x499))|x500);

	if (t88 != 1324173090543LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x506 = 10705004LLU;
	int8_t x507 = INT8_MIN;
	static volatile uint64_t t89 = 289694513033623981LLU;

	t89 = ((x505^(x506*x507))|x508);

	if (t89 != 777256959LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x513 = 1U;
	uint64_t x515 = 20460647246LLU;
	volatile uint8_t x516 = UINT8_MAX;
	volatile uint64_t t90 = 1128237988641387137LLU;

	t90 = ((x513^(x514*x515))|x516);

	if (t90 != 12484332474620901887LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x517 = -1;
	int16_t x518 = INT16_MAX;
	uint8_t x519 = 0U;
	int32_t x520 = -52;
	int32_t t91 = 39;

	t91 = ((x517^(x518*x519))|x520);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x521 = INT16_MAX;
	int8_t x522 = -22;
	static int16_t x523 = INT16_MIN;
	int32_t t92 = 1414064;

	t92 = ((x521^(x522*x523))|x524);

	if (t92 != 753663) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x531 = INT16_MIN;
	int16_t x532 = -4798;
	static int32_t t93 = -39620;

	t93 = ((x529^(x530*x531))|x532);

	if (t93 != -4798) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x533 = INT64_MIN;
	int16_t x534 = INT16_MAX;
	uint64_t x535 = 13414LLU;
	static int16_t x536 = INT16_MIN;

	t94 = ((x533^(x534*x535))|x536);

	if (t94 != 18446744073709538202LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x538 = 6305504344126925683LLU;
	static uint64_t x539 = 11764982644112LLU;
	static int16_t x540 = INT16_MAX;
	uint64_t t95 = 25LLU;

	t95 = ((x537^(x538*x539))|x540);

	if (t95 != 13862353716401733631LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x541 = INT8_MAX;
	static uint32_t x542 = UINT32_MAX;
	uint32_t x544 = UINT32_MAX;
	uint32_t t96 = UINT32_MAX;

	t96 = ((x541^(x542*x543))|x544);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x546 = 1;
	uint8_t x547 = 10U;
	int16_t x548 = INT16_MAX;
	volatile int32_t t97 = INT32_MAX;

	t97 = ((x545^(x546*x547))|x548);

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x549 = INT16_MAX;
	int32_t x550 = -1;
	uint16_t x552 = UINT16_MAX;

	t98 = ((x549^(x550*x551))|x552);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x562 = INT64_MIN;
	uint32_t x563 = 0U;
	static uint32_t x564 = 7U;
	volatile int64_t t99 = 14764901697673LL;

	t99 = ((x561^(x562*x563))|x564);

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

