#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 334159U;
int64_t x14 = INT64_MAX;
static int32_t x15 = INT32_MIN;
volatile int64_t t2 = -10192259283073941LL;
volatile uint64_t x26 = 12LLU;
int64_t x42 = 445611LL;
static int64_t x47 = INT64_MIN;
uint64_t x48 = 42LLU;
volatile uint64_t x50 = 991940779918LLU;
int16_t x54 = -1;
static uint64_t t12 = 4143LLU;
int32_t x58 = -1;
uint16_t x59 = 2046U;
volatile uint32_t x65 = 3U;
static int32_t x68 = 6451599;
uint64_t t16 = 1LLU;
static int8_t x76 = -1;
int8_t x78 = 14;
volatile int32_t x79 = INT32_MIN;
uint16_t x91 = 1605U;
uint8_t x93 = 11U;
int32_t t21 = 1045578663;
volatile int64_t x101 = -1LL;
static int16_t x104 = -4765;
static int32_t x106 = 11213208;
uint64_t t23 = 15792708332314LLU;
uint64_t x117 = UINT64_MAX;
uint64_t t25 = 194LLU;
static volatile int32_t x143 = INT32_MIN;
volatile int64_t t29 = 15192855LL;
volatile int8_t x150 = INT8_MIN;
volatile uint64_t t30 = 10LLU;
int16_t x155 = INT16_MIN;
int8_t x158 = -1;
int64_t t33 = 391962524465762LL;
int16_t x169 = -1;
int64_t x177 = -1LL;
volatile uint64_t t37 = 9LLU;
volatile int8_t x196 = INT8_MIN;
int32_t x198 = INT32_MAX;
int8_t x199 = 8;
int32_t x206 = -1598;
int8_t x211 = 0;
uint8_t x212 = 10U;
int64_t x214 = 4320150698931587808LL;
volatile uint64_t t43 = 0LLU;
uint64_t t44 = 20147279041867011LLU;
int16_t x231 = -51;
volatile int32_t t50 = 8989854;
int8_t x276 = INT8_MIN;
int8_t x278 = INT8_MAX;
int16_t x281 = -127;
uint32_t t54 = 51139U;
uint64_t t57 = 237LLU;
static int16_t x319 = -118;
int16_t x323 = INT16_MIN;
static int64_t x325 = INT64_MAX;
static int16_t x327 = -1;
static uint32_t x339 = 30539793U;
static int8_t x341 = INT8_MIN;
volatile int64_t x342 = -1LL;
volatile int64_t t64 = 454532900134LL;
int64_t x364 = -16118780756292LL;
volatile uint64_t t69 = 94912671870680LLU;
static volatile uint16_t x377 = 5325U;
volatile int16_t x387 = INT16_MIN;
int16_t x389 = INT16_MIN;
int8_t x393 = INT8_MIN;
int64_t x398 = INT64_MIN;
uint64_t x399 = 361LLU;
int32_t t76 = 17397109;
uint64_t x407 = UINT64_MAX;
static uint64_t t77 = 2142537625LLU;
static int16_t x409 = -1;
static int64_t x420 = -31090045919733LL;
uint64_t t80 = 56427354LLU;
volatile int32_t x426 = 1374;
int8_t x427 = -1;
volatile uint64_t t82 = 44LLU;
int32_t x430 = INT32_MAX;
volatile uint32_t x435 = UINT32_MAX;
static int32_t t86 = 15011033;
uint32_t x447 = 15355261U;
int64_t t88 = 126LL;
int32_t x455 = -1;
int32_t x468 = INT32_MIN;
volatile uint8_t x477 = UINT8_MAX;
volatile uint16_t x481 = 7306U;
volatile uint32_t t95 = 8014U;
static int16_t x485 = -1;
uint8_t x492 = UINT8_MAX;
int8_t x493 = -1;
uint8_t x496 = 47U;
volatile int32_t x499 = INT32_MIN;
int16_t x500 = -23;


void f0(void) {
	static int32_t x1 = -1;
	int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	int64_t t0 = -4782124LL;

	t0 = ((x1*(x2|x3))+x4);

	if (t0 != 9223372036854441521LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 1U;
	int64_t x10 = INT64_MAX;
	int32_t x11 = INT32_MIN;
	static uint32_t x12 = 19U;
	int64_t t1 = 257920112420821868LL;

	t1 = ((x9*(x10|x11))+x12);

	if (t1 != 18LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -1;
	int64_t x16 = INT64_MIN;

	t2 = ((x13*(x14|x15))+x16);

	if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MIN;
	uint32_t x18 = 81U;
	int16_t x19 = INT16_MIN;
	static uint16_t x20 = 434U;
	uint32_t t3 = 88529U;

	t3 = ((x17*(x18|x19))+x20);

	if (t3 != 1071088050U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 1912847193U;
	volatile uint16_t x22 = UINT16_MAX;
	uint32_t x23 = UINT32_MAX;
	static uint16_t x24 = UINT16_MAX;
	uint32_t t4 = 2U;

	t4 = ((x21*(x22|x23))+x24);

	if (t4 != 2382185638U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	uint16_t x27 = UINT16_MAX;
	volatile uint16_t x28 = 115U;
	static volatile uint64_t t5 = 5934466800520LLU;

	t5 = ((x25*(x26|x27))+x28);

	if (t5 != 18446603338368680051LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MAX;
	static uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t6 = 2051038766125041928LLU;

	t6 = ((x29*(x30|x31))+x32);

	if (t6 != 18446744073709551233LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 14U;
	int16_t x35 = 315;
	int32_t x36 = INT32_MIN;
	uint32_t t7 = 1U;

	t7 = ((x33*(x34|x35))+x36);

	if (t7 != 2137030656U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = 6U;
	uint16_t x38 = 1U;
	int8_t x39 = INT8_MIN;
	int64_t x40 = 897941038LL;
	static int64_t t8 = 101786866213353LL;

	t8 = ((x37*(x38|x39))+x40);

	if (t8 != 897940276LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = -1LL;
	int32_t x43 = INT32_MIN;
	uint32_t x44 = 5845239U;
	int64_t t9 = -9762173941573074LL;

	t9 = ((x41*(x42|x43))+x44);

	if (t9 != 2152883276LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	uint32_t x46 = UINT32_MAX;
	uint64_t t10 = 95858037654243LLU;

	t10 = ((x45*(x46|x47))+x48);

	if (t10 != 9223372032559808555LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = 26U;
	int32_t x51 = INT32_MAX;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t11 = 4731610585LLU;

	t11 = ((x49*(x50|x51))+x52);

	if (t11 != 25795573579749LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x53 = 6781763835987LLU;
	int8_t x55 = INT8_MIN;
	static int8_t x56 = -1;

	t12 = ((x53*(x54|x55))+x56);

	if (t12 != 18446737291945715628LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	volatile uint8_t x60 = UINT8_MAX;
	volatile int32_t t13 = 9;

	t13 = ((x57*(x58|x59))+x60);

	if (t13 != -32512) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = -1;
	static int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	volatile int8_t x64 = INT8_MAX;
	int64_t t14 = -2731438471315LL;

	t14 = ((x61*(x62|x63))+x64);

	if (t14 != 2147483775LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = INT8_MAX;
	static int8_t x67 = INT8_MIN;
	volatile uint32_t t15 = 972435322U;

	t15 = ((x65*(x66|x67))+x68);

	if (t15 != 6451596U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = -48LL;
	volatile int32_t x70 = INT32_MIN;
	volatile uint64_t x71 = 2387782620372786774LLU;
	int16_t x72 = -878;

	t16 = ((x69*(x70|x71))+x72);

	if (t16 != 19189353586LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 28910U;
	volatile int32_t x74 = -1;
	static int32_t x75 = INT32_MAX;
	uint32_t t17 = 441136U;

	t17 = ((x73*(x74|x75))+x76);

	if (t17 != 4294938385U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x80 = -1;
	static uint64_t t18 = 169892092565182LLU;

	t18 = ((x77*(x78|x79))+x80);

	if (t18 != 2147483633LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 26440LL;
	volatile int32_t x82 = -1;
	int64_t x83 = 18450429124LL;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t19 = -1561336379LL;

	t19 = ((x81*(x82|x83))+x84);

	if (t19 != 4294940855LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -1;
	int8_t x90 = INT8_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t20 = 111;

	t20 = ((x89*(x90|x91))+x92);

	if (t20 != -32709) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x94 = UINT16_MAX;
	static int16_t x95 = 1255;
	static int8_t x96 = INT8_MIN;

	t21 = ((x93*(x94|x95))+x96);

	if (t21 != 720757) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x102 = INT32_MIN;
	static uint32_t x103 = 2891U;
	int64_t t22 = -1489283185LL;

	t22 = ((x101*(x102|x103))+x104);

	if (t22 != -2147491304LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = UINT64_MAX;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = INT16_MIN;

	t23 = ((x105*(x106|x107))+x108);

	if (t23 != 18446744073698305537LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = -1;
	volatile int8_t x110 = INT8_MIN;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = INT16_MAX;
	uint32_t t24 = 1U;

	t24 = ((x109*(x110|x111))+x112);

	if (t24 != 32768U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x118 = -1;
	volatile int8_t x119 = INT8_MAX;
	static volatile uint16_t x120 = UINT16_MAX;

	t25 = ((x117*(x118|x119))+x120);

	if (t25 != 65536LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile int64_t x122 = -389400487LL;
	volatile int16_t x123 = INT16_MAX;
	int16_t x124 = -1;
	int64_t t26 = 117783921693728LL;

	t26 = ((x121*(x122|x123))+x124);

	if (t26 != 836191789210664959LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	volatile uint32_t x127 = 103U;
	int16_t x128 = INT16_MIN;
	uint32_t t27 = 242852U;

	t27 = ((x125*(x126|x127))+x128);

	if (t27 != 4294934656U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t28 = 1660050611LLU;

	t28 = ((x141*(x142|x143))+x144);

	if (t28 != 16383LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x145 = 2179U;
	int16_t x146 = INT16_MAX;
	volatile int64_t x147 = -1LL;
	static volatile int8_t x148 = INT8_MIN;

	t29 = ((x145*(x146|x147))+x148);

	if (t29 != -2307LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = -62;
	int8_t x151 = INT8_MIN;
	static volatile uint64_t x152 = 31390152LLU;

	t30 = ((x149*(x150|x151))+x152);

	if (t30 != 31398088LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = 1;
	uint64_t x154 = UINT64_MAX;
	static int16_t x156 = -7537;
	volatile uint64_t t31 = 1308426LLU;

	t31 = ((x153*(x154|x155))+x156);

	if (t31 != 18446744073709544078LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x157 = 54U;
	int16_t x159 = -350;
	int8_t x160 = -1;
	int32_t t32 = -142937408;

	t32 = ((x157*(x158|x159))+x160);

	if (t32 != -55) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x161 = 4202112346077LL;
	int32_t x162 = INT32_MAX;
	int16_t x163 = INT16_MIN;
	int8_t x164 = -1;

	t33 = ((x161*(x162|x163))+x164);

	if (t33 != -4202112346078LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x170 = 1094604482986048LLU;
	int8_t x171 = -3;
	int8_t x172 = -1;
	volatile uint64_t t34 = 32401LLU;

	t34 = ((x169*(x170|x171))+x172);

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x178 = UINT16_MAX;
	static uint64_t x179 = 214701697431045LLU;
	static volatile int32_t x180 = 801230;
	volatile uint64_t t35 = 7140306027294443519LLU;

	t35 = ((x177*(x178|x179))+x180);

	if (t35 != 18446529372012886479LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	int16_t x187 = INT16_MIN;
	int8_t x188 = 7;
	static volatile int32_t t36 = 15;

	t36 = ((x185*(x186|x187))+x188);

	if (t36 != 4194311) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x189 = -1;
	int8_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	uint16_t x192 = 11U;

	t37 = ((x189*(x190|x191))+x192);

	if (t37 != 12LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x193 = UINT8_MAX;
	static volatile int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;
	volatile int64_t t38 = -759545813LL;

	t38 = ((x193*(x194|x195))+x196);

	if (t38 != -547608330368LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x197 = 12702U;
	int8_t x200 = INT8_MIN;
	uint32_t t39 = 3630210U;

	t39 = ((x197*(x198|x199))+x200);

	if (t39 != 4294954466U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = 11941;
	uint64_t x202 = 23086184LLU;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -1;
	static uint64_t t40 = 54079514LLU;

	t40 = ((x201*(x202|x203))+x204);

	if (t40 != 18446744073527379719LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = -1;
	volatile uint16_t x207 = 5U;
	uint8_t x208 = 0U;
	volatile int32_t t41 = 22537140;

	t41 = ((x205*(x206|x207))+x208);

	if (t41 != 1593) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x209 = 1;
	uint64_t x210 = 1973LLU;
	uint64_t t42 = 694LLU;

	t42 = ((x209*(x210|x211))+x212);

	if (t42 != 1983LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = -1;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = UINT64_MAX;

	t43 = ((x213*(x214|x215))+x216);

	if (t43 != 29983LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x217 = UINT16_MAX;
	uint64_t x218 = 5615607849628123220LLU;
	int32_t x219 = 21485;
	int32_t x220 = -1;

	t44 = ((x217*(x218|x219))+x220);

	if (t44 != 6316154873830321154LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	int8_t x232 = -1;
	volatile int64_t t45 = -7LL;

	t45 = ((x229*(x230|x231))+x232);

	if (t45 != 32767LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x237 = -1LL;
	int8_t x238 = INT8_MAX;
	static int32_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	volatile int64_t t46 = -503902632005669173LL;

	t46 = ((x237*(x238|x239))+x240);

	if (t46 != 4294967296LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x241 = INT16_MIN;
	int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MIN;
	int64_t t47 = 0LL;

	t47 = ((x241*(x242|x243))+x244);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int64_t x250 = INT64_MAX;
	static uint8_t x251 = 0U;
	volatile int64_t x252 = -11LL;
	static uint64_t t48 = 3438235LLU;

	t48 = ((x249*(x250|x251))+x252);

	if (t48 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x253 = INT8_MIN;
	volatile uint32_t x254 = 188089U;
	int8_t x255 = -1;
	int16_t x256 = -1;
	volatile uint32_t t49 = 466U;

	t49 = ((x253*(x254|x255))+x256);

	if (t49 != 127U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x257 = INT16_MIN;
	int8_t x258 = -1;
	static uint8_t x259 = 70U;
	volatile uint8_t x260 = 2U;

	t50 = ((x257*(x258|x259))+x260);

	if (t50 != 32770) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	int32_t x271 = -14;
	int16_t x272 = INT16_MIN;
	uint32_t t51 = 583762193U;

	t51 = ((x269*(x270|x271))+x272);

	if (t51 != 4294934542U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x273 = 215;
	int16_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int32_t t52 = 7031198;

	t52 = ((x273*(x274|x275))+x276);

	if (t52 != -343) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x277 = 1U;
	static int16_t x279 = 2969;
	static volatile int64_t x280 = 1284LL;
	volatile int64_t t53 = -17LL;

	t53 = ((x277*(x278|x279))+x280);

	if (t53 != 4355LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x282 = 3U;
	int32_t x283 = INT32_MAX;
	static int8_t x284 = -1;

	t54 = ((x281*(x282|x283))+x284);

	if (t54 != 2147483774U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = INT16_MIN;
	static int64_t x286 = -1LL;
	static uint8_t x287 = UINT8_MAX;
	volatile int32_t x288 = INT32_MIN;
	int64_t t55 = 323112410617LL;

	t55 = ((x285*(x286|x287))+x288);

	if (t55 != -2147450880LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x289 = 13U;
	int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MIN;
	static uint8_t x292 = 0U;
	uint32_t t56 = 2315U;

	t56 = ((x289*(x290|x291))+x292);

	if (t56 != 4294965632U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x293 = 5U;
	volatile int8_t x294 = INT8_MIN;
	uint16_t x295 = 439U;
	uint64_t x296 = 13443LLU;

	t57 = ((x293*(x294|x295))+x296);

	if (t57 != 13078LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = -1;
	int32_t x310 = 16556303;
	uint64_t x311 = UINT64_MAX;
	volatile int8_t x312 = INT8_MIN;
	volatile uint64_t t58 = 23100136454259270LLU;

	t58 = ((x309*(x310|x311))+x312);

	if (t58 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x317 = INT16_MAX;
	uint64_t x318 = 2LLU;
	static int16_t x320 = -1;
	static uint64_t t59 = 415937314190LLU;

	t59 = ((x317*(x318|x319))+x320);

	if (t59 != 18446744073705685109LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x321 = UINT8_MAX;
	uint64_t x322 = UINT64_MAX;
	volatile int32_t x324 = -259198858;
	static uint64_t t60 = 190771LLU;

	t60 = ((x321*(x322|x323))+x324);

	if (t60 != 18446744073450352503LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x326 = 32111U;
	int16_t x328 = INT16_MAX;
	volatile int64_t t61 = 475LL;

	t61 = ((x325*(x326|x327))+x328);

	if (t61 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x333 = 1LL;
	uint8_t x334 = 1U;
	static int64_t x335 = INT64_MIN;
	int16_t x336 = INT16_MAX;
	volatile int64_t t62 = 34LL;

	t62 = ((x333*(x334|x335))+x336);

	if (t62 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x337 = INT32_MAX;
	uint16_t x338 = 287U;
	volatile int16_t x340 = -1;
	uint32_t t63 = 31697358U;

	t63 = ((x337*(x338|x339))+x340);

	if (t63 != 2116943584U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x343 = 8;
	int32_t x344 = INT32_MIN;

	t64 = ((x341*(x342|x343))+x344);

	if (t64 != -2147483520LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x345 = INT16_MIN;
	volatile int8_t x346 = -1;
	static int32_t x347 = 55;
	int32_t x348 = INT32_MIN;
	volatile int32_t t65 = 1303;

	t65 = ((x345*(x346|x347))+x348);

	if (t65 != -2147450880) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x353 = 5970513;
	int8_t x354 = 18;
	uint8_t x355 = 106U;
	int32_t x356 = INT32_MIN;
	volatile int32_t t66 = -4060280;

	t66 = ((x353*(x354|x355))+x356);

	if (t66 != -1419081062) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x357 = -1;
	int16_t x358 = 57;
	int32_t x359 = -1;
	static volatile uint16_t x360 = 1U;
	volatile int32_t t67 = 21345;

	t67 = ((x357*(x358|x359))+x360);

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x361 = 6U;
	int32_t x362 = INT32_MIN;
	int64_t x363 = INT64_MIN;
	static int64_t t68 = 18LL;

	t68 = ((x361*(x362|x363))+x364);

	if (t68 != -16131665658180LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x369 = 8509332383LLU;
	volatile uint8_t x370 = 40U;
	int64_t x371 = -180684155954131LL;
	uint32_t x372 = 82U;

	t69 = ((x369*(x370|x371))+x372);

	if (t69 != 16132444108236717893LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x373 = 39U;
	static int16_t x374 = -2615;
	static uint64_t x375 = 2729347LLU;
	int8_t x376 = INT8_MIN;
	uint64_t t70 = 533300823516663064LLU;

	t70 = ((x373*(x374|x375))+x376);

	if (t70 != 18446744073709449581LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x378 = INT16_MAX;
	uint16_t x379 = 4750U;
	static volatile int64_t x380 = INT64_MIN;
	static volatile int64_t t71 = -1022255755065922LL;

	t71 = ((x377*(x378|x379))+x380);

	if (t71 != -9223372036680291533LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x385 = UINT16_MAX;
	static int8_t x386 = -1;
	static uint64_t x388 = UINT64_MAX;
	volatile uint64_t t72 = 452551711223256LLU;

	t72 = ((x385*(x386|x387))+x388);

	if (t72 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x390 = 13U;
	uint32_t x391 = 1117241944U;
	int32_t x392 = -1;
	volatile uint32_t t73 = 1518U;

	t73 = ((x389*(x390|x391))+x392);

	if (t73 != 517046271U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x394 = 56;
	static int16_t x395 = -1;
	volatile int32_t x396 = -1;
	volatile int32_t t74 = 3811;

	t74 = ((x393*(x394|x395))+x396);

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x397 = INT64_MIN;
	uint64_t x400 = 65575LLU;
	volatile uint64_t t75 = 957336354LLU;

	t75 = ((x397*(x398|x399))+x400);

	if (t75 != 9223372036854841383LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x401 = 58U;
	volatile int8_t x402 = INT8_MIN;
	uint8_t x403 = 1U;
	static volatile uint8_t x404 = UINT8_MAX;

	t76 = ((x401*(x402|x403))+x404);

	if (t76 != -7111) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x405 = 33511532LL;
	static volatile int32_t x406 = -1919;
	int8_t x408 = 30;

	t77 = ((x405*(x406|x407))+x408);

	if (t77 != 18446744073676040114LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x410 = 3099056756999LL;
	int16_t x411 = 46;
	int8_t x412 = 2;
	static volatile int64_t t78 = 77385858805LL;

	t78 = ((x409*(x410|x411))+x412);

	if (t78 != -3099056757037LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x413 = 97U;
	int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	static int32_t t79 = -117280549;

	t79 = ((x413*(x414|x415))+x416);

	if (t79 != -3178624) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x417 = 23905651LL;
	uint64_t x418 = 388005927809LLU;
	int64_t x419 = -1LL;

	t80 = ((x417*(x418|x419))+x420);

	if (t80 != 18446712983639726232LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x421 = INT8_MIN;
	int16_t x422 = -5731;
	int16_t x423 = INT16_MIN;
	static uint8_t x424 = 3U;
	int32_t t81 = -38;

	t81 = ((x421*(x422|x423))+x424);

	if (t81 != 733571) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x425 = 1586110849U;
	static volatile uint64_t x428 = 18228LLU;

	t82 = ((x425*(x426|x427))+x428);

	if (t82 != 2708874675LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x429 = -1;
	uint16_t x431 = 0U;
	volatile uint8_t x432 = 2U;
	volatile int32_t t83 = 4048;

	t83 = ((x429*(x430|x431))+x432);

	if (t83 != -2147483645) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x433 = INT32_MAX;
	uint16_t x434 = 0U;
	int32_t x436 = -1;
	uint32_t t84 = 929U;

	t84 = ((x433*(x434|x435))+x436);

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x437 = INT16_MIN;
	int64_t x438 = -30966LL;
	int16_t x439 = 0;
	int32_t x440 = -808202054;
	volatile int64_t t85 = 111349457217LL;

	t85 = ((x437*(x438|x439))+x440);

	if (t85 != 206491834LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x441 = UINT8_MAX;
	static volatile int8_t x442 = -1;
	int32_t x443 = INT32_MAX;
	int32_t x444 = INT32_MAX;

	t86 = ((x441*(x442|x443))+x444);

	if (t86 != 2147483392) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x445 = 50;
	int16_t x446 = 2;
	static int64_t x448 = -1LL;
	int64_t t87 = 38518057531LL;

	t87 = ((x445*(x446|x447))+x448);

	if (t87 != 767763149LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x449 = -1;
	uint32_t x450 = 59286111U;
	uint32_t x451 = 229732U;
	int64_t x452 = 3072130372357LL;

	t88 = ((x449*(x450|x451))+x452);

	if (t88 != 3076365856646LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x453 = INT8_MIN;
	int32_t x454 = -2;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t89 = -4525229;

	t89 = ((x453*(x454|x455))+x456);

	if (t89 != 383) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x457 = 16U;
	int8_t x458 = -1;
	int16_t x459 = -105;
	static uint32_t x460 = 737826U;
	volatile uint32_t t90 = 60579392U;

	t90 = ((x457*(x458|x459))+x460);

	if (t90 != 737810U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x461 = 0;
	volatile int8_t x462 = -1;
	uint32_t x463 = 212990U;
	volatile int16_t x464 = 7934;
	volatile uint32_t t91 = 8695U;

	t91 = ((x461*(x462|x463))+x464);

	if (t91 != 7934U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x465 = INT16_MIN;
	int32_t x466 = -1;
	uint8_t x467 = 26U;
	int32_t t92 = 120;

	t92 = ((x465*(x466|x467))+x468);

	if (t92 != -2147450880) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x469 = -46;
	static int8_t x470 = 7;
	uint64_t x471 = 46LLU;
	int8_t x472 = -1;
	volatile uint64_t t93 = 358726426LLU;

	t93 = ((x469*(x470|x471))+x472);

	if (t93 != 18446744073709549453LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x478 = -1;
	uint16_t x479 = 931U;
	uint16_t x480 = 2U;
	static volatile int32_t t94 = -130256;

	t94 = ((x477*(x478|x479))+x480);

	if (t94 != -253) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x482 = INT16_MIN;
	uint32_t x483 = UINT32_MAX;
	int16_t x484 = INT16_MIN;

	t95 = ((x481*(x482|x483))+x484);

	if (t95 != 4294927222U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x486 = UINT32_MAX;
	int16_t x487 = INT16_MIN;
	static int8_t x488 = INT8_MIN;
	volatile uint32_t t96 = 22U;

	t96 = ((x485*(x486|x487))+x488);

	if (t96 != 4294967169U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x489 = 781145624529LL;
	static uint32_t x490 = 1U;
	static uint8_t x491 = 0U;
	volatile int64_t t97 = 195LL;

	t97 = ((x489*(x490|x491))+x492);

	if (t97 != 781145624784LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x494 = -1LL;
	uint16_t x495 = 120U;
	int64_t t98 = 51LL;

	t98 = ((x493*(x494|x495))+x496);

	if (t98 != 48LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x497 = 0U;
	volatile int32_t x498 = INT32_MAX;
	static volatile int32_t t99 = -17;

	t99 = ((x497*(x498|x499))+x500);

	if (t99 != -23) { NG(); } else { ; }
	
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

