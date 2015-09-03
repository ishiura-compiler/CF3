#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x18 = 22U;
int32_t x19 = 0;
int32_t t1 = INT32_MIN;
uint16_t x27 = 1277U;
int16_t x28 = 25;
volatile uint32_t t3 = 415U;
int8_t x29 = -9;
int32_t x30 = INT32_MIN;
volatile int32_t t5 = 286607;
int64_t x37 = -1LL;
int64_t x42 = -1LL;
static int8_t x51 = -2;
static uint64_t x54 = 6797935720730152LLU;
int8_t x58 = INT8_MAX;
volatile int32_t x59 = INT32_MIN;
int16_t x61 = INT16_MIN;
volatile int32_t t13 = -1546;
volatile int16_t x72 = -1554;
int32_t t14 = -7;
uint32_t t16 = 3014U;
int16_t x82 = INT16_MIN;
volatile uint32_t t17 = 6U;
int8_t x85 = INT8_MAX;
static int32_t x88 = INT32_MIN;
int64_t x89 = 91605907LL;
int8_t x91 = -1;
volatile int16_t x101 = INT16_MIN;
int32_t x104 = -1;
int32_t x111 = INT32_MAX;
int64_t x114 = INT64_MAX;
int8_t x117 = -1;
int64_t x122 = -1LL;
static volatile uint8_t x134 = 8U;
int64_t x136 = -1LL;
static uint32_t x139 = UINT32_MAX;
int64_t t28 = 20496693LL;
volatile uint8_t x144 = 0U;
int16_t x146 = -1;
int64_t x147 = INT64_MIN;
uint64_t x148 = 26029641974LLU;
static volatile int64_t x152 = -1LL;
static volatile int64_t t31 = 109441996748LL;
int32_t x153 = -16244;
static int16_t x154 = INT16_MIN;
int32_t t32 = 1116231;
int8_t x157 = -1;
volatile int8_t x158 = 34;
int16_t x163 = INT16_MIN;
uint64_t t34 = 18869872LLU;
int16_t x176 = INT16_MAX;
uint32_t t36 = 7U;
static int32_t x181 = INT32_MIN;
int8_t x196 = INT8_MIN;
static uint16_t x200 = 14U;
int16_t x207 = 4;
int32_t x214 = 15;
static uint32_t x215 = 263U;
uint64_t t48 = 621350294LLU;
int8_t x232 = INT8_MIN;
static uint16_t x234 = 15U;
static int8_t x236 = INT8_MAX;
static volatile int32_t t50 = 578092;
volatile uint32_t t51 = 53916U;
volatile int8_t x243 = INT8_MAX;
int16_t x248 = -1;
volatile int8_t x249 = INT8_MIN;
int8_t x251 = -1;
volatile uint16_t x259 = 7017U;
static volatile uint64_t t56 = 505057127LLU;
int8_t x261 = -1;
int64_t x262 = INT64_MIN;
int32_t x263 = -1;
volatile int8_t x267 = -1;
int32_t t59 = -1;
int32_t x275 = INT32_MAX;
volatile int32_t x278 = INT32_MIN;
static int16_t x286 = -1;
int16_t x306 = INT16_MIN;
volatile int8_t x307 = INT8_MIN;
volatile uint8_t x310 = 0U;
int16_t x324 = INT16_MIN;
int64_t x325 = INT64_MIN;
static uint64_t x337 = 9LLU;
uint64_t x339 = UINT64_MAX;
uint32_t x340 = 344218046U;
volatile int64_t t74 = -45773371LL;
int64_t x349 = INT64_MIN;
uint8_t x350 = 6U;
int64_t t75 = 2243817909565067238LL;
volatile uint8_t x354 = 48U;
static int8_t x357 = INT8_MAX;
static uint32_t t77 = 15U;
static volatile int16_t x361 = INT16_MIN;
int32_t x364 = 2;
static int32_t x367 = -1;
int32_t t79 = -29;
uint8_t x371 = 2U;
uint16_t x375 = 1978U;
uint8_t x379 = 116U;
int32_t x393 = INT32_MAX;
volatile int16_t x402 = INT16_MAX;
volatile uint32_t t87 = 250759U;
int16_t x408 = INT16_MAX;
volatile int32_t t88 = INT32_MIN;
uint64_t x414 = 95360766267581LLU;
int8_t x426 = -1;
volatile int8_t x427 = INT8_MIN;
int8_t x428 = INT8_MAX;
volatile int16_t x430 = -5;
int16_t x431 = INT16_MIN;
volatile uint64_t x432 = 48887796057LLU;
uint32_t x440 = 0U;
static int32_t x441 = INT32_MIN;
int64_t t95 = -2085849034675472706LL;
volatile int64_t t96 = 2180376776894LL;
int32_t x456 = -1;
uint32_t x461 = 1U;
static volatile int64_t x467 = INT64_MIN;
int64_t t99 = 41711467449207646LL;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	static int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = UINT8_MAX;
	uint16_t x4 = 4U;
	int32_t t0 = -17808;

	t0 = (x1^(x2|(x3+x4)));

	if (t0 != -32388) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = INT32_MAX;
	volatile int8_t x20 = -1;

	t1 = (x17^(x18|(x19+x20)));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 0U;
	static volatile int8_t x22 = INT8_MIN;
	volatile uint8_t x23 = 2U;
	uint64_t x24 = 1944829LLU;
	uint64_t t2 = UINT64_MAX;

	t2 = (x21^(x22|(x23+x24)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = UINT32_MAX;
	int16_t x26 = -763;

	t3 = (x25^(x26|(x27+x28)));

	if (t3 != 744U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MAX;
	uint64_t t4 = 962LLU;

	t4 = (x29^(x30|(x31+x32)));

	if (t4 != 2147450889LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = 12U;
	int8_t x34 = 11;
	int16_t x35 = -1;
	static int32_t x36 = -1;

	t5 = (x33^(x34|(x35+x36)));

	if (t5 != -13) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	static volatile uint8_t x40 = 3U;
	volatile int64_t t6 = 1661LL;

	t6 = (x37^(x38|(x39+x40)));

	if (t6 != 124LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = -94;
	uint16_t x43 = UINT16_MAX;
	static volatile int32_t x44 = -1;
	int64_t t7 = -244481317LL;

	t7 = (x41^(x42|(x43+x44)));

	if (t7 != 93LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 36U;
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = INT8_MIN;
	int32_t x48 = -19;
	volatile int32_t t8 = -16029;

	t8 = (x45^(x46|(x47+x48)));

	if (t8 != -37) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x49 = 128U;
	uint64_t x50 = 8941943LLU;
	static volatile uint64_t x52 = UINT64_MAX;
	volatile uint64_t t9 = 63047375652518535LLU;

	t9 = (x49^(x50|(x51+x52)));

	if (t9 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	volatile uint16_t x55 = 2218U;
	int32_t x56 = 75959663;
	volatile uint64_t t10 = 2759LLU;

	t10 = (x53^(x54|(x55+x56)));

	if (t10 != 18439946137988817350LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	int8_t x60 = 1;
	volatile int32_t t11 = INT32_MAX;

	t11 = (x57^(x58|(x59+x60)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = INT16_MAX;
	int32_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	uint32_t t12 = 388U;

	t12 = (x61^(x62|(x63+x64)));

	if (t12 != 32767U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = INT32_MIN;
	static int32_t x66 = INT32_MIN;
	uint16_t x67 = 317U;
	int16_t x68 = INT16_MAX;

	t13 = (x65^(x66|(x67+x68)));

	if (t13 != 33084) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x69 = 3786986;
	int16_t x70 = -1;
	static int16_t x71 = -218;

	t14 = (x69^(x70|(x71+x72)));

	if (t14 != -3786987) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MAX;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MAX;
	int64_t t15 = -326310512570043LL;

	t15 = (x73^(x74|(x75+x76)));

	if (t15 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MAX;
	int16_t x78 = INT16_MIN;
	int16_t x79 = -1;
	volatile uint32_t x80 = 42U;

	t16 = (x77^(x78|(x79+x80)));

	if (t16 != 2147516374U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 467948U;
	uint16_t x83 = UINT16_MAX;
	volatile uint8_t x84 = UINT8_MAX;

	t17 = (x81^(x82|(x83+x84)));

	if (t17 != 4294484754U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x86 = -1133;
	static int64_t x87 = 18LL;
	volatile int64_t t18 = 9177434456327LL;

	t18 = (x85^(x86|(x87+x88)));

	if (t18 != -1044LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x90 = UINT8_MAX;
	int8_t x92 = INT8_MIN;
	volatile int64_t t19 = 7LL;

	t19 = (x89^(x90|(x91+x92)));

	if (t19 != -91605908LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 1U;
	int64_t x94 = 812006515039LL;
	static uint16_t x95 = UINT16_MAX;
	int16_t x96 = -644;
	int64_t t20 = -40299636632LL;

	t20 = (x93^(x94|(x95+x96)));

	if (t20 != 812006571390LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = INT32_MIN;
	static int16_t x99 = INT16_MIN;
	static int16_t x100 = -1;
	static volatile uint32_t t21 = 3530U;

	t21 = (x97^(x98|(x99+x100)));

	if (t21 != 32768U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x102 = 19044167839604LLU;
	volatile uint16_t x103 = 9120U;
	uint64_t t22 = 1204166301377LLU;

	t22 = (x101^(x102|(x103+x104)));

	if (t22 != 18446725029541736447LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x109 = UINT16_MAX;
	volatile int32_t x110 = -94750015;
	int8_t x112 = INT8_MIN;
	volatile int32_t t23 = -16281;

	t23 = (x109^(x110|(x111+x112)));

	if (t23 != -65536) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MIN;
	int8_t x115 = 1;
	uint8_t x116 = UINT8_MAX;
	static volatile int64_t t24 = 1LL;

	t24 = (x113^(x114|(x115+x116)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x118 = -1;
	int64_t x119 = INT64_MAX;
	int64_t x120 = -727330835236LL;
	volatile int64_t t25 = -1911847596706784LL;

	t25 = (x117^(x118|(x119+x120)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x121 = INT32_MIN;
	int64_t x123 = -646556LL;
	volatile int32_t x124 = -1;
	volatile int64_t t26 = -1231594612LL;

	t26 = (x121^(x122|(x123+x124)));

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MAX;
	volatile int16_t x135 = INT16_MIN;
	volatile int64_t t27 = 22247131241300LL;

	t27 = (x133^(x134|(x135+x136)));

	if (t27 != -32896LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x137 = 525114U;
	static int8_t x138 = INT8_MAX;
	volatile int64_t x140 = INT64_MIN;

	t28 = (x137^(x138|(x139+x140)));

	if (t28 != -9223372032560333627LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x141 = 443U;
	static int16_t x142 = 1;
	volatile int8_t x143 = INT8_MAX;
	uint32_t t29 = 8362623U;

	t29 = (x141^(x142|(x143+x144)));

	if (t29 != 452U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x145 = INT64_MIN;
	volatile uint64_t t30 = 254621787775980LLU;

	t30 = (x145^(x146|(x147+x148)));

	if (t30 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = 39U;
	volatile int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MAX;

	t31 = (x149^(x150|(x151+x152)));

	if (t31 != 2147483608LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x155 = -1;
	static uint8_t x156 = UINT8_MAX;

	t32 = (x153^(x154|(x155+x156)));

	if (t32 != 16498) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x159 = INT16_MIN;
	static uint16_t x160 = 1U;
	int32_t t33 = -8402034;

	t33 = (x157^(x158|(x159+x160)));

	if (t33 != 32732) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = 10322LLU;
	int8_t x162 = INT8_MIN;
	static int32_t x164 = -143;

	t34 = (x161^(x162|(x163+x164)));

	if (t34 != 18446744073709541283LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 747278207U;
	static int32_t x170 = INT32_MIN;
	volatile int16_t x171 = -1;
	volatile uint32_t x172 = UINT32_MAX;
	volatile uint32_t t35 = 15592U;

	t35 = (x169^(x170|(x171+x172)));

	if (t35 != 3547689089U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MAX;
	int8_t x174 = -1;
	uint32_t x175 = UINT32_MAX;

	t36 = (x173^(x174|(x175+x176)));

	if (t36 != 4294934528U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x177 = 678169904413LL;
	static int8_t x178 = -1;
	int16_t x179 = 24;
	static uint8_t x180 = 1U;
	int64_t t37 = -60174003LL;

	t37 = (x177^(x178|(x179+x180)));

	if (t37 != -678169904414LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x182 = -1;
	int32_t x183 = -2158638;
	uint8_t x184 = 13U;
	volatile int32_t t38 = INT32_MAX;

	t38 = (x181^(x182|(x183+x184)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x186 = 21482U;
	uint8_t x187 = 0U;
	int8_t x188 = 17;
	volatile int64_t t39 = 30790041115LL;

	t39 = (x185^(x186|(x187+x188)));

	if (t39 != -9223372036854754309LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x193 = UINT8_MAX;
	int16_t x194 = -1;
	int64_t x195 = -522845LL;
	int64_t t40 = 102LL;

	t40 = (x193^(x194|(x195+x196)));

	if (t40 != -256LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MAX;
	uint64_t x198 = UINT64_MAX;
	int64_t x199 = INT64_MIN;
	uint64_t t41 = 106044LLU;

	t41 = (x197^(x198|(x199+x200)));

	if (t41 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = -5;
	volatile uint8_t x203 = 7U;
	static int32_t x204 = -1;
	volatile int32_t t42 = INT32_MAX;

	t42 = (x201^(x202|(x203+x204)));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = INT8_MIN;
	static int64_t x206 = 50291LL;
	uint64_t x208 = 665LLU;
	static volatile uint64_t t43 = 161864758547LLU;

	t43 = (x205^(x206|(x207+x208)));

	if (t43 != 18446744073709500799LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x209 = 45075458051LL;
	uint8_t x210 = 45U;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = INT8_MIN;
	volatile int64_t t44 = -1947546609975115605LL;

	t44 = (x209^(x210|(x211+x212)));

	if (t44 != 45075458172LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x213 = UINT16_MAX;
	uint32_t x216 = 49U;
	uint32_t t45 = 174941106U;

	t45 = (x213^(x214|(x215+x216)));

	if (t45 != 65216U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = -1;
	uint8_t x218 = UINT8_MAX;
	int16_t x219 = 960;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t46 = 21929;

	t46 = (x217^(x218|(x219+x220)));

	if (t46 != -1024) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x221 = 712319U;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = 39826381717686LLU;
	static uint32_t x224 = 214702688U;
	volatile uint64_t t47 = 1947824144192LLU;

	t47 = (x221^(x222|(x223+x224)));

	if (t47 != 18446744073708839401LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x225 = UINT32_MAX;
	uint64_t x226 = 5082773445790967520LLU;
	int16_t x227 = INT16_MAX;
	int32_t x228 = -20747;

	t48 = (x225^(x226|(x227+x228)));

	if (t48 != 5082773442094649611LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x229 = 1217311LL;
	volatile int32_t x230 = INT32_MIN;
	int32_t x231 = -1324;
	volatile int64_t t49 = 1905583LL;

	t49 = (x229^(x230|(x231+x232)));

	if (t49 != -1218229LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = -1;
	volatile int8_t x235 = -1;

	t50 = (x233^(x234|(x235+x236)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = INT16_MAX;
	uint32_t x238 = UINT32_MAX;
	uint8_t x239 = UINT8_MAX;
	static volatile uint8_t x240 = UINT8_MAX;

	t51 = (x237^(x238|(x239+x240)));

	if (t51 != 4294934528U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MIN;
	static int64_t x242 = INT64_MIN;
	static volatile uint32_t x244 = UINT32_MAX;
	static volatile int64_t t52 = -747806605985LL;

	t52 = (x241^(x242|(x243+x244)));

	if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x245 = 116U;
	int32_t x246 = INT32_MIN;
	uint8_t x247 = 2U;
	volatile int32_t t53 = 5;

	t53 = (x245^(x246|(x247+x248)));

	if (t53 != -2147483531) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x250 = INT32_MIN;
	int8_t x252 = INT8_MIN;
	volatile int32_t t54 = 529649;

	t54 = (x249^(x250|(x251+x252)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = -1;
	static volatile int64_t x254 = INT64_MIN;
	uint64_t x255 = 1541856197079446LLU;
	uint8_t x256 = 0U;
	static volatile uint64_t t55 = 3001805708LLU;

	t55 = (x253^(x254|(x255+x256)));

	if (t55 != 9221830180657696361LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = -1763;
	volatile int32_t x258 = -166965;
	uint64_t x260 = 409LLU;

	t56 = (x257^(x258|(x259+x260)));

	if (t56 != 165590LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x264 = 3;
	int64_t t57 = 17157870166548021LL;

	t57 = (x261^(x262|(x263+x264)));

	if (t57 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x265 = 39U;
	uint32_t x266 = 10972U;
	int16_t x268 = -1;
	volatile uint32_t t58 = 5329U;

	t58 = (x265^(x266|(x267+x268)));

	if (t58 != 4294967257U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x269 = 70U;
	int8_t x270 = -1;
	int8_t x271 = INT8_MIN;
	uint16_t x272 = 13697U;

	t59 = (x269^(x270|(x271+x272)));

	if (t59 != -71) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x273 = INT32_MIN;
	int32_t x274 = 3;
	static int32_t x276 = -20422;
	static int32_t t60 = -598434360;

	t60 = (x273^(x274|(x275+x276)));

	if (t60 != -20421) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = -1LL;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = 0U;
	int64_t t61 = 131172430LL;

	t61 = (x277^(x278|(x279+x280)));

	if (t61 != 32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x285 = 1841887U;
	int64_t x287 = INT64_MIN;
	uint16_t x288 = UINT16_MAX;
	int64_t t62 = -66469940499LL;

	t62 = (x285^(x286|(x287+x288)));

	if (t62 != -1841888LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = 503993434771009LL;
	volatile int16_t x290 = INT16_MIN;
	int16_t x291 = -1;
	int8_t x292 = INT8_MAX;
	int64_t t63 = 120448198153LL;

	t63 = (x289^(x290|(x291+x292)));

	if (t63 != -503993434796481LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = 25;
	static volatile int32_t x298 = 3;
	int8_t x299 = -1;
	int16_t x300 = INT16_MAX;
	int32_t t64 = -914;

	t64 = (x297^(x298|(x299+x300)));

	if (t64 != 32742) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = 17;
	int8_t x302 = 1;
	uint64_t x303 = 95LLU;
	int32_t x304 = -1;
	uint64_t t65 = 25080885LLU;

	t65 = (x301^(x302|(x303+x304)));

	if (t65 != 78LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x305 = 76U;
	int16_t x308 = -1;
	volatile int32_t t66 = -729;

	t66 = (x305^(x306|(x307+x308)));

	if (t66 != -205) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = INT32_MAX;
	volatile int64_t x311 = INT64_MIN;
	int64_t x312 = 344141521904LL;
	int64_t t67 = 2640376955738LL;

	t67 = (x309^(x310|(x311+x312)));

	if (t67 != -9223371691654046705LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x313 = INT8_MAX;
	static int8_t x314 = INT8_MIN;
	static volatile int64_t x315 = 39045LL;
	static uint8_t x316 = UINT8_MAX;
	int64_t t68 = 1939248622943823LL;

	t68 = (x313^(x314|(x315+x316)));

	if (t68 != -5LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = INT32_MIN;
	static int64_t x318 = INT64_MAX;
	static int8_t x319 = -1;
	volatile int16_t x320 = -908;
	static volatile int64_t t69 = 97080132265138LL;

	t69 = (x317^(x318|(x319+x320)));

	if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x321 = 59LLU;
	int8_t x322 = INT8_MIN;
	static int16_t x323 = INT16_MAX;
	static uint64_t t70 = 1LLU;

	t70 = (x321^(x322|(x323+x324)));

	if (t70 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x326 = -3;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = UINT64_MAX;
	uint64_t t71 = 713228096230LLU;

	t71 = (x325^(x326|(x327+x328)));

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x329 = INT16_MIN;
	uint32_t x330 = UINT32_MAX;
	static volatile int64_t x331 = INT64_MIN;
	uint64_t x332 = UINT64_MAX;
	uint64_t t72 = 189469902691265LLU;

	t72 = (x329^(x330|(x331+x332)));

	if (t72 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x338 = -16451456577477LL;
	uint64_t t73 = 142810695488666813LLU;

	t73 = (x337^(x338|(x339+x340)));

	if (t73 != 18446727622320085430LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = -1LL;
	static int8_t x346 = -1;
	uint16_t x347 = 0U;
	int8_t x348 = 29;

	t74 = (x345^(x346|(x347+x348)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x351 = -291;
	int32_t x352 = -1;

	t75 = (x349^(x350|(x351+x352)));

	if (t75 != 9223372036854775518LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -1LL;
	volatile int32_t x355 = -1;
	int16_t x356 = INT16_MIN;
	volatile int64_t t76 = -5135LL;

	t76 = (x353^(x354|(x355+x356)));

	if (t76 != 32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x358 = 328U;
	uint32_t x359 = 821725680U;
	uint8_t x360 = UINT8_MAX;

	t77 = (x357^(x358|(x359+x360)));

	if (t77 != 821726096U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x362 = 4694900U;
	static uint16_t x363 = 85U;
	static uint32_t t78 = 2218U;

	t78 = (x361^(x362|(x363+x364)));

	if (t78 != 4290257783U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x365 = 1U;
	uint8_t x366 = 20U;
	int16_t x368 = -1;

	t79 = (x365^(x366|(x367+x368)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x369 = 105U;
	int32_t x370 = INT32_MAX;
	volatile int8_t x372 = -11;
	static volatile uint32_t t80 = 237934U;

	t80 = (x369^(x370|(x371+x372)));

	if (t80 != 4294967190U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = INT16_MIN;
	volatile uint64_t x374 = 3841235540LLU;
	volatile int32_t x376 = INT32_MIN;
	uint64_t t81 = 12481215846056LLU;

	t81 = (x373^(x374|(x375+x376)));

	if (t81 != 453713918LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = INT8_MIN;
	static int64_t x378 = 3000913872781818LL;
	uint8_t x380 = 7U;
	int64_t t82 = 263738006LL;

	t82 = (x377^(x378|(x379+x380)));

	if (t82 != -3000913872781701LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = -1;
	volatile uint32_t x386 = UINT32_MAX;
	int8_t x387 = -1;
	int8_t x388 = INT8_MAX;
	volatile uint32_t t83 = 88U;

	t83 = (x385^(x386|(x387+x388)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x389 = 168452LL;
	static int64_t x390 = -1LL;
	static uint64_t x391 = 116877858884LLU;
	uint32_t x392 = 2U;
	static volatile uint64_t t84 = 497165741912778904LLU;

	t84 = (x389^(x390|(x391+x392)));

	if (t84 != 18446744073709383163LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x394 = INT8_MIN;
	int16_t x395 = 1;
	static int16_t x396 = -1;
	static int32_t t85 = -1316112;

	t85 = (x393^(x394|(x395+x396)));

	if (t85 != -2147483521) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = -6;
	uint64_t x398 = UINT64_MAX;
	uint64_t x399 = 122077765579642236LLU;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t86 = 6611530974005199LLU;

	t86 = (x397^(x398|(x399+x400)));

	if (t86 != 5LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x401 = 372837U;
	uint32_t x403 = 9U;
	int16_t x404 = -1;

	t87 = (x401^(x402|(x403+x404)));

	if (t87 != 380826U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = INT32_MAX;
	int8_t x406 = -15;
	volatile int16_t x407 = INT16_MIN;

	t88 = (x405^(x406|(x407+x408)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x413 = 22941U;
	int64_t x415 = -1LL;
	static volatile uint8_t x416 = 50U;
	uint64_t t89 = 2689318555LLU;

	t89 = (x413^(x414|(x415+x416)));

	if (t89 != 95360766249248LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x421 = 88U;
	volatile int64_t x422 = -9979395294591964LL;
	static int8_t x423 = INT8_MAX;
	int64_t x424 = -1152965810341LL;
	int64_t t90 = -845031198676LL;

	t90 = (x421^(x422|(x423+x424)));

	if (t90 != -17215133786LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = 8742751759LL;
	int64_t t91 = -251814374781924LL;

	t91 = (x425^(x426|(x427+x428)));

	if (t91 != -8742751760LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = INT32_MIN;
	uint64_t t92 = 221LLU;

	t92 = (x429^(x430|(x431+x432)));

	if (t92 != 2147483643LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x433 = INT8_MIN;
	uint16_t x434 = 6U;
	static volatile uint64_t x435 = 183413LLU;
	uint32_t x436 = UINT32_MAX;
	volatile uint64_t t93 = 742436710167LLU;

	t93 = (x433^(x434|(x435+x436)));

	if (t93 != 18446744069414401014LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x437 = INT32_MIN;
	static uint32_t x438 = UINT32_MAX;
	int16_t x439 = INT16_MAX;
	static volatile uint32_t t94 = 1U;

	t94 = (x437^(x438|(x439+x440)));

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x442 = -1;
	int8_t x443 = INT8_MAX;
	int64_t x444 = INT64_MIN;

	t95 = (x441^(x442|(x443+x444)));

	if (t95 != 2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x445 = -1LL;
	int64_t x446 = INT64_MIN;
	int32_t x447 = -25918;
	int32_t x448 = 0;

	t96 = (x445^(x446|(x447+x448)));

	if (t96 != 25917LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = -17LL;
	static uint16_t x454 = 6797U;
	static int8_t x455 = INT8_MAX;
	int64_t t97 = -3664776788745024LL;

	t97 = (x453^(x454|(x455+x456)));

	if (t97 != -6896LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x462 = INT32_MIN;
	static uint64_t x463 = 46729325LLU;
	int8_t x464 = 14;
	static volatile uint64_t t98 = 53206261LLU;

	t98 = (x461^(x462|(x463+x464)));

	if (t98 != 18446744071608797306LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x465 = 5U;
	static int32_t x466 = INT32_MIN;
	volatile uint8_t x468 = 49U;

	t99 = (x465^(x466|(x467+x468)));

	if (t99 != -2147483596LL) { NG(); } else { ; }
	
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

