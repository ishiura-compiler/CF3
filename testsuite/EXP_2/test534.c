#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x11 = INT64_MAX;
int32_t x12 = 55;
int32_t x23 = -2794791;
static int8_t x25 = 0;
int64_t x36 = 14494844811LL;
static uint64_t x38 = 729795839LLU;
volatile uint64_t t6 = 0LLU;
int8_t x45 = 43;
int8_t x56 = 12;
static uint64_t t9 = 472597680LLU;
volatile int32_t t10 = -413;
int8_t x62 = INT8_MAX;
volatile uint64_t x66 = UINT64_MAX;
int8_t x74 = INT8_MIN;
int64_t t15 = -35LL;
volatile int32_t x99 = INT32_MIN;
int32_t x103 = 8097298;
static volatile uint16_t x107 = UINT16_MAX;
volatile int64_t t21 = -1403074056LL;
static volatile uint32_t x115 = UINT32_MAX;
uint16_t x121 = 910U;
int8_t x130 = 1;
uint32_t x140 = 1300428239U;
int64_t t29 = -28LL;
static int64_t x147 = INT64_MAX;
int64_t t30 = -29016588LL;
static int8_t x151 = INT8_MAX;
int64_t x154 = 15LL;
volatile int32_t x161 = INT32_MAX;
int8_t x168 = INT8_MAX;
int16_t x170 = 2;
uint32_t x174 = 381U;
int64_t x176 = INT64_MAX;
uint8_t x178 = UINT8_MAX;
int32_t t38 = 100559066;
uint8_t x189 = 1U;
static int64_t x191 = -340057LL;
volatile int8_t x202 = -1;
static uint8_t x204 = UINT8_MAX;
static volatile uint64_t t43 = 220528682961964768LLU;
int64_t x208 = INT64_MAX;
volatile int64_t t44 = -199811LL;
int32_t x216 = -1;
uint32_t x228 = UINT32_MAX;
static volatile int64_t t49 = 4LL;
uint16_t x231 = UINT16_MAX;
volatile int32_t x235 = INT32_MIN;
int64_t x243 = -450724622794083786LL;
static uint64_t x251 = UINT64_MAX;
uint32_t x255 = 1U;
uint64_t t58 = 23136LLU;
volatile int8_t x265 = INT8_MIN;
int16_t x266 = INT16_MAX;
uint8_t x268 = 29U;
volatile uint64_t x270 = 1436614367813217LLU;
static int8_t x278 = -10;
uint8_t x280 = 1U;
int8_t x288 = -1;
int16_t x290 = INT16_MIN;
int32_t x291 = INT32_MIN;
volatile uint64_t t66 = 5LLU;
int32_t x297 = 10;
uint32_t x304 = UINT32_MAX;
volatile int16_t x306 = INT16_MAX;
int8_t x307 = INT8_MIN;
static int64_t x337 = -983367925LL;
int8_t x342 = -1;
volatile int32_t t76 = -12710;
int8_t x351 = INT8_MIN;
int32_t x352 = 112627338;
static int16_t x353 = 239;
uint32_t x358 = 14708762U;
uint8_t x360 = UINT8_MAX;
uint32_t t80 = 8509U;
static int32_t x361 = 497394;
uint8_t x370 = 1U;
uint64_t x374 = 1908751LLU;
uint64_t x375 = UINT64_MAX;
int16_t x378 = INT16_MAX;
static int32_t x380 = -69069;
int8_t x382 = INT8_MIN;
int16_t x387 = INT16_MIN;
static int32_t x394 = INT32_MIN;
uint64_t t88 = 16546390LLU;
volatile int16_t x415 = 12;
volatile uint8_t x416 = UINT8_MAX;
volatile int32_t x449 = -16309;
uint16_t x456 = 13559U;
int64_t t98 = -20478228LL;
static volatile int32_t x459 = INT32_MIN;
uint8_t x460 = UINT8_MAX;


void f0(void) {
	int16_t x5 = INT16_MAX;
	static int32_t x6 = -1;
	int32_t x7 = -1;
	static volatile int8_t x8 = INT8_MIN;
	volatile int32_t t0 = 3;

	t0 = ((x5*(x6/x7))+x8);

	if (t0 != 32639) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	volatile int8_t x10 = 1;
	volatile int64_t t1 = -2446072071279LL;

	t1 = ((x9*(x10/x11))+x12);

	if (t1 != 55LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = -1;
	uint32_t x22 = UINT32_MAX;
	uint64_t x24 = 9248LLU;
	uint64_t t2 = 13887998418846515LLU;

	t2 = ((x21*(x22/x23))+x24);

	if (t2 != 4294976543LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x26 = INT32_MIN;
	static uint16_t x27 = UINT16_MAX;
	static int8_t x28 = 1;
	static int32_t t3 = -4139;

	t3 = ((x25*(x26/x27))+x28);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x29 = -1;
	int16_t x30 = INT16_MIN;
	uint16_t x31 = 18U;
	int64_t x32 = 2035084856208LL;
	volatile int64_t t4 = 433LL;

	t4 = ((x29*(x30/x31))+x32);

	if (t4 != 2035084858028LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MIN;
	static int64_t x35 = -1LL;
	static int64_t t5 = 12LL;

	t5 = ((x33*(x34/x35))+x36);

	if (t5 != -70354249332853LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x37 = 7U;
	volatile int8_t x39 = -1;
	uint8_t x40 = 1U;

	t6 = ((x37*(x38/x39))+x40);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x41 = 27U;
	int16_t x42 = -1;
	volatile int64_t x43 = INT64_MAX;
	volatile int16_t x44 = INT16_MIN;
	int64_t t7 = -1LL;

	t7 = ((x41*(x42/x43))+x44);

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x46 = INT8_MAX;
	int32_t x47 = INT32_MIN;
	uint64_t x48 = 13882650LLU;
	static uint64_t t8 = 189LLU;

	t8 = ((x45*(x46/x47))+x48);

	if (t8 != 13882650LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MAX;
	uint64_t x54 = UINT64_MAX;
	volatile uint32_t x55 = 26U;

	t9 = ((x53*(x54/x55))+x56);

	if (t9 != 17737253917028415028LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = -1;
	static int8_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	uint16_t x60 = 23619U;

	t10 = ((x57*(x58/x59))+x60);

	if (t10 != 23619) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x61 = 170062LLU;
	int8_t x63 = -1;
	volatile int64_t x64 = INT64_MIN;
	uint64_t t11 = 599596477058960LLU;

	t11 = ((x61*(x62/x63))+x64);

	if (t11 != 9223372036833177934LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MIN;
	uint64_t t12 = 672028197LLU;

	t12 = ((x65*(x66/x67))+x68);

	if (t12 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = 1533;
	int32_t x70 = -1;
	static volatile int16_t x71 = 335;
	int64_t x72 = 26LL;
	volatile int64_t t13 = 7990824203022045LL;

	t13 = ((x69*(x70/x71))+x72);

	if (t13 != 26LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x73 = INT16_MIN;
	volatile uint16_t x75 = UINT16_MAX;
	uint8_t x76 = 0U;
	volatile int32_t t14 = -114718;

	t14 = ((x73*(x74/x75))+x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x77 = INT32_MIN;
	int8_t x78 = 5;
	int64_t x79 = -173321LL;
	int64_t x80 = 85986268615LL;

	t15 = ((x77*(x78/x79))+x80);

	if (t15 != 85986268615LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -1LL;
	int64_t x82 = INT64_MAX;
	volatile uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MIN;
	volatile int64_t t16 = -134512135755938412LL;

	t16 = ((x81*(x82/x83))+x84);

	if (t16 != -36170086419071104LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MIN;
	uint8_t x86 = 24U;
	static int64_t x87 = 324303742237613836LL;
	int64_t x88 = -1088700LL;
	volatile int64_t t17 = -8181536LL;

	t17 = ((x85*(x86/x87))+x88);

	if (t17 != -1088700LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = INT8_MIN;
	static int64_t x94 = INT64_MIN;
	static int64_t x95 = INT64_MIN;
	static int8_t x96 = 19;
	volatile int64_t t18 = -23014381401LL;

	t18 = ((x93*(x94/x95))+x96);

	if (t18 != -109LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = INT64_MIN;
	int64_t x98 = -406320LL;
	uint8_t x100 = 44U;
	volatile int64_t t19 = -2164798693737388LL;

	t19 = ((x97*(x98/x99))+x100);

	if (t19 != 44LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	volatile int8_t x102 = -34;
	static int16_t x104 = INT16_MIN;
	volatile int64_t t20 = 75592LL;

	t20 = ((x101*(x102/x103))+x104);

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -7;
	int64_t x106 = 6LL;
	int8_t x108 = INT8_MAX;

	t21 = ((x105*(x106/x107))+x108);

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = INT8_MAX;
	int64_t x114 = 18309LL;
	int32_t x116 = INT32_MAX;
	volatile int64_t t22 = 15LL;

	t22 = ((x113*(x114/x115))+x116);

	if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MIN;
	volatile uint32_t x118 = 4U;
	static int32_t x119 = 722006939;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t23 = INT64_MIN;

	t23 = ((x117*(x118/x119))+x120);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x122 = -1LL;
	uint16_t x123 = 121U;
	static int8_t x124 = 13;
	volatile int64_t t24 = -6LL;

	t24 = ((x121*(x122/x123))+x124);

	if (t24 != 13LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MIN;
	volatile int8_t x126 = 30;
	int16_t x127 = INT16_MAX;
	int64_t x128 = -1LL;
	static int64_t t25 = -54376854213537LL;

	t25 = ((x125*(x126/x127))+x128);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = -1;
	static int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t26 = INT32_MIN;

	t26 = ((x129*(x130/x131))+x132);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = INT16_MAX;
	static uint32_t x134 = 51U;
	int16_t x135 = -1;
	uint8_t x136 = 24U;
	volatile uint32_t t27 = 1026340U;

	t27 = ((x133*(x134/x135))+x136);

	if (t27 != 24U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = -61;
	int8_t x138 = INT8_MIN;
	volatile int8_t x139 = INT8_MIN;
	uint32_t t28 = 11U;

	t28 = ((x137*(x138/x139))+x140);

	if (t28 != 1300428178U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 2U;
	int16_t x142 = INT16_MIN;
	static int16_t x143 = -1;
	int64_t x144 = 672LL;

	t29 = ((x141*(x142/x143))+x144);

	if (t29 != 66208LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x145 = 14U;
	static int64_t x146 = INT64_MAX;
	static int64_t x148 = -22378LL;

	t30 = ((x145*(x146/x147))+x148);

	if (t30 != -22364LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MAX;
	static int8_t x150 = INT8_MIN;
	uint8_t x152 = 53U;
	int32_t t31 = -46;

	t31 = ((x149*(x150/x151))+x152);

	if (t31 != -74) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = INT32_MIN;
	uint8_t x155 = 45U;
	static uint32_t x156 = 26159U;
	int64_t t32 = 180144170976LL;

	t32 = ((x153*(x154/x155))+x156);

	if (t32 != 26159LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = INT8_MAX;
	int32_t x158 = INT32_MIN;
	static volatile int16_t x159 = INT16_MIN;
	static int8_t x160 = 1;
	volatile int32_t t33 = 32032;

	t33 = ((x157*(x158/x159))+x160);

	if (t33 != 8323073) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x162 = 113441U;
	uint8_t x163 = UINT8_MAX;
	volatile int16_t x164 = INT16_MIN;
	volatile uint32_t t34 = 45197U;

	t34 = ((x161*(x162/x163))+x164);

	if (t34 != 4294934084U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x165 = INT64_MIN;
	volatile int16_t x166 = 465;
	int32_t x167 = -53406;
	int64_t t35 = 224234643LL;

	t35 = ((x165*(x166/x167))+x168);

	if (t35 != 127LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x169 = 0U;
	int32_t x171 = INT32_MIN;
	static uint32_t x172 = 90785U;
	volatile uint32_t t36 = 3047U;

	t36 = ((x169*(x170/x171))+x172);

	if (t36 != 90785U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x173 = INT16_MIN;
	int64_t x175 = INT64_MIN;
	static volatile int64_t t37 = INT64_MAX;

	t37 = ((x173*(x174/x175))+x176);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = -1;
	int32_t x179 = INT32_MAX;
	int8_t x180 = INT8_MAX;

	t38 = ((x177*(x178/x179))+x180);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = 0U;
	static uint32_t x182 = 39619061U;
	int16_t x183 = 1;
	int8_t x184 = INT8_MIN;
	static uint32_t t39 = 10538U;

	t39 = ((x181*(x182/x183))+x184);

	if (t39 != 4294967168U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	uint32_t x186 = 17U;
	uint32_t x187 = 72877U;
	static int16_t x188 = -1;
	volatile int64_t t40 = 4967291884LL;

	t40 = ((x185*(x186/x187))+x188);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x190 = 104U;
	uint16_t x192 = 1U;
	volatile int64_t t41 = -209867657353LL;

	t41 = ((x189*(x190/x191))+x192);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x197 = -6;
	static int32_t x198 = INT32_MIN;
	int32_t x199 = INT32_MAX;
	uint16_t x200 = 13501U;
	static volatile int32_t t42 = -721;

	t42 = ((x197*(x198/x199))+x200);

	if (t42 != 13507) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x201 = 7LLU;
	int16_t x203 = -1;

	t43 = ((x201*(x202/x203))+x204);

	if (t43 != 262LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x205 = 1804U;
	int8_t x206 = 1;
	int8_t x207 = -1;

	t44 = ((x205*(x206/x207))+x208);

	if (t44 != 9223372036854774003LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = UINT32_MAX;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = UINT8_MAX;
	volatile int64_t x212 = INT64_MIN;
	static volatile int64_t t45 = INT64_MIN;

	t45 = ((x209*(x210/x211))+x212);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x213 = UINT16_MAX;
	uint64_t x214 = UINT64_MAX;
	int64_t x215 = -1LL;
	uint64_t t46 = 12992271LLU;

	t46 = ((x213*(x214/x215))+x216);

	if (t46 != 65534LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x217 = 2U;
	volatile int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	int8_t x220 = -1;
	static volatile int64_t t47 = 966849956377LL;

	t47 = ((x217*(x218/x219))+x220);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x221 = -1;
	int16_t x222 = 1;
	static int32_t x223 = -20110955;
	uint8_t x224 = 1U;
	int32_t t48 = 21381860;

	t48 = ((x221*(x222/x223))+x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x225 = 60;
	int64_t x226 = -1LL;
	int16_t x227 = 187;

	t49 = ((x225*(x226/x227))+x228);

	if (t49 != 4294967295LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = 51U;
	static volatile int32_t x230 = INT32_MIN;
	volatile uint64_t x232 = UINT64_MAX;
	uint64_t t50 = 585961673LLU;

	t50 = ((x229*(x230/x231))+x232);

	if (t50 != 18446744073707880447LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = -1;
	volatile int64_t x234 = -62077LL;
	int16_t x236 = INT16_MAX;
	static volatile int64_t t51 = 6385LL;

	t51 = ((x233*(x234/x235))+x236);

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x237 = -1;
	static int8_t x238 = 2;
	int16_t x239 = 36;
	volatile uint64_t x240 = 1753440LLU;
	uint64_t t52 = 1485518LLU;

	t52 = ((x237*(x238/x239))+x240);

	if (t52 != 1753440LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x241 = INT32_MAX;
	volatile int64_t x242 = 2054888LL;
	static int16_t x244 = -3681;
	static int64_t t53 = -1896LL;

	t53 = ((x241*(x242/x243))+x244);

	if (t53 != -3681LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x245 = 1075994613351858LLU;
	uint64_t x246 = 48029LLU;
	uint32_t x247 = UINT32_MAX;
	volatile uint32_t x248 = UINT32_MAX;
	uint64_t t54 = 140294349LLU;

	t54 = ((x245*(x246/x247))+x248);

	if (t54 != 4294967295LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -1;
	volatile int8_t x250 = INT8_MIN;
	static uint32_t x252 = 26573U;
	uint64_t t55 = 7823LLU;

	t55 = ((x249*(x250/x251))+x252);

	if (t55 != 26573LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = 1;
	uint32_t x254 = 2848U;
	int8_t x256 = INT8_MIN;
	static volatile uint32_t t56 = 6329463U;

	t56 = ((x253*(x254/x255))+x256);

	if (t56 != 2720U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x257 = 1043U;
	static int16_t x258 = -1;
	int16_t x259 = 163;
	volatile int64_t x260 = -1LL;
	volatile int64_t t57 = -15199642692LL;

	t57 = ((x257*(x258/x259))+x260);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x261 = INT32_MIN;
	uint16_t x262 = 31689U;
	uint64_t x263 = 2465LLU;
	volatile int32_t x264 = 221604;

	t58 = ((x261*(x262/x263))+x264);

	if (t58 != 18446744047939969444LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x267 = 29344U;
	int32_t t59 = -7869996;

	t59 = ((x265*(x266/x267))+x268);

	if (t59 != -99) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x269 = 3U;
	int32_t x271 = 1;
	static int32_t x272 = INT32_MAX;
	uint64_t t60 = 91468700355292900LLU;

	t60 = ((x269*(x270/x271))+x272);

	if (t60 != 4309845250923298LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = UINT8_MAX;
	static volatile int32_t x274 = 1773;
	uint32_t x275 = UINT32_MAX;
	static int16_t x276 = -59;
	volatile uint32_t t61 = 122322U;

	t61 = ((x273*(x274/x275))+x276);

	if (t61 != 4294967237U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = -3;
	volatile int32_t x279 = INT32_MAX;
	volatile int32_t t62 = -1213197;

	t62 = ((x277*(x278/x279))+x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x281 = INT8_MIN;
	int8_t x282 = 0;
	uint8_t x283 = 6U;
	int64_t x284 = -20276150453000LL;
	volatile int64_t t63 = -832507498239024LL;

	t63 = ((x281*(x282/x283))+x284);

	if (t63 != -20276150453000LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = INT32_MAX;
	int64_t x287 = -1LL;
	volatile int64_t t64 = -1313LL;

	t64 = ((x285*(x286/x287))+x288);

	if (t64 != -140735340806146LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x289 = 499U;
	int32_t x292 = -1;
	volatile int32_t t65 = -175841725;

	t65 = ((x289*(x290/x291))+x292);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x293 = 20U;
	uint64_t x294 = 245313646LLU;
	int64_t x295 = 58426399LL;
	int8_t x296 = -30;

	t66 = ((x293*(x294/x295))+x296);

	if (t66 != 50LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x298 = 1U;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	static int64_t t67 = -333049884LL;

	t67 = ((x297*(x298/x299))+x300);

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = 6517;
	int32_t x302 = INT32_MIN;
	volatile int16_t x303 = INT16_MAX;
	volatile uint32_t t68 = 0U;

	t68 = ((x301*(x302/x303))+x304);

	if (t68 != 3867856149U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x305 = 17666440U;
	volatile int64_t x308 = -1LL;
	int64_t t69 = -13028962LL;

	t69 = ((x305*(x306/x307))+x308);

	if (t69 != 4084992391LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x313 = UINT8_MAX;
	int8_t x314 = INT8_MIN;
	volatile int64_t x315 = INT64_MIN;
	int32_t x316 = -15;
	int64_t t70 = -2592839276LL;

	t70 = ((x313*(x314/x315))+x316);

	if (t70 != -15LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = UINT32_MAX;
	int32_t x322 = 0;
	static volatile int16_t x323 = -3814;
	int32_t x324 = INT32_MIN;
	uint32_t t71 = 9730U;

	t71 = ((x321*(x322/x323))+x324);

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = -46;
	static int8_t x326 = -1;
	uint32_t x327 = 450U;
	static int16_t x328 = INT16_MIN;
	volatile uint32_t t72 = 3U;

	t72 = ((x325*(x326/x327))+x328);

	if (t72 != 3855893462U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x329 = UINT32_MAX;
	static int32_t x330 = -552;
	volatile int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	volatile int64_t t73 = 242LL;

	t73 = ((x329*(x330/x331))+x332);

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x333 = UINT32_MAX;
	static uint32_t x334 = 2753061U;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = -1572607761138074991LL;
	volatile int64_t t74 = -1131112LL;

	t74 = ((x333*(x334/x335))+x336);

	if (t74 != -1572607756843107737LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x338 = 1931304916LLU;
	int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t75 = 671783LLU;

	t75 = ((x337*(x338/x339))+x340);

	if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x343 = UINT16_MAX;
	uint16_t x344 = 4678U;

	t76 = ((x341*(x342/x343))+x344);

	if (t76 != 4678) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x345 = -1LL;
	uint8_t x346 = 32U;
	int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MIN;
	int64_t t77 = 310625LL;

	t77 = ((x345*(x346/x347))+x348);

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x349 = -44;
	volatile int8_t x350 = -2;
	int32_t t78 = -61090;

	t78 = ((x349*(x350/x351))+x352);

	if (t78 != 112627338) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = -1LL;
	volatile uint8_t x356 = UINT8_MAX;
	int64_t t79 = 766860758LL;

	t79 = ((x353*(x354/x355))+x356);

	if (t79 != -15662610LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int8_t x359 = INT8_MIN;

	t80 = ((x357*(x358/x359))+x360);

	if (t80 != 255U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x362 = -1LL;
	volatile int32_t x363 = 15;
	int16_t x364 = -1;
	int64_t t81 = 11273038LL;

	t81 = ((x361*(x362/x363))+x364);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x365 = 684134U;
	static uint32_t x366 = 3U;
	static uint8_t x367 = 23U;
	static volatile int16_t x368 = INT16_MAX;
	uint32_t t82 = 8U;

	t82 = ((x365*(x366/x367))+x368);

	if (t82 != 32767U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x369 = 27;
	int16_t x371 = INT16_MAX;
	uint64_t x372 = 431497LLU;
	uint64_t t83 = 660129182450397LLU;

	t83 = ((x369*(x370/x371))+x372);

	if (t83 != 431497LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = -1;
	int32_t x376 = -15421915;
	volatile uint64_t t84 = 18769LLU;

	t84 = ((x373*(x374/x375))+x376);

	if (t84 != 18446744073694129701LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x377 = 0;
	int16_t x379 = INT16_MAX;
	int32_t t85 = 1;

	t85 = ((x377*(x378/x379))+x380);

	if (t85 != -69069) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x383 = -1LL;
	uint64_t x384 = 535772306442LLU;
	volatile uint64_t t86 = 538998LLU;

	t86 = ((x381*(x382/x383))+x384);

	if (t86 != 535780694922LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = 332;
	int64_t x386 = 8064LL;
	volatile int64_t x388 = INT64_MAX;
	static volatile int64_t t87 = INT64_MAX;

	t87 = ((x385*(x386/x387))+x388);

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x393 = 27765834LLU;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MAX;

	t88 = ((x393*(x394/x395))+x396);

	if (t88 != 2175249481LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x397 = -3997844;
	int8_t x398 = -7;
	static int32_t x399 = -1;
	uint8_t x400 = 68U;
	int32_t t89 = -61;

	t89 = ((x397*(x398/x399))+x400);

	if (t89 != -27984840) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x401 = -215097108197800LL;
	static volatile int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MAX;
	volatile int64_t x404 = INT64_MIN;
	int64_t t90 = INT64_MIN;

	t90 = ((x401*(x402/x403))+x404);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x405 = UINT16_MAX;
	int8_t x406 = -1;
	int16_t x407 = -4;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t91 = 327793;

	t91 = ((x405*(x406/x407))+x408);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x413 = 88U;
	volatile int32_t x414 = -1;
	int32_t t92 = -43217247;

	t92 = ((x413*(x414/x415))+x416);

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = INT16_MIN;
	volatile int8_t x426 = -7;
	static uint64_t x427 = 2LLU;
	volatile uint32_t x428 = 1U;
	volatile uint64_t t93 = 50033411LLU;

	t93 = ((x425*(x426/x427))+x428);

	if (t93 != 131073LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x429 = INT64_MIN;
	int32_t x430 = -25793;
	static volatile uint64_t x431 = 729133062754805432LLU;
	volatile int64_t x432 = INT64_MIN;
	static volatile uint64_t t94 = 525612864261LLU;

	t94 = ((x429*(x430/x431))+x432);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = -7;
	uint32_t x434 = UINT32_MAX;
	int64_t x435 = -8248686684510LL;
	int16_t x436 = INT16_MIN;
	int64_t t95 = -55333970LL;

	t95 = ((x433*(x434/x435))+x436);

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = INT64_MAX;
	static uint64_t x438 = 4864692621198895LLU;
	uint32_t x439 = UINT32_MAX;
	uint16_t x440 = 4094U;
	uint64_t t96 = 13620537933LLU;

	t96 = ((x437*(x438/x439))+x440);

	if (t96 != 9223372036853647253LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x450 = INT16_MIN;
	int16_t x451 = -47;
	volatile uint32_t x452 = 1096U;
	uint32_t t97 = 29845463U;

	t97 = ((x449*(x450/x451))+x452);

	if (t97 != 4283601019U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x453 = 16443251258567804LL;
	int32_t x454 = 0;
	volatile int32_t x455 = INT32_MIN;

	t98 = ((x453*(x454/x455))+x456);

	if (t98 != 13559LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x457 = 7U;
	static uint8_t x458 = UINT8_MAX;
	int32_t t99 = 40849533;

	t99 = ((x457*(x458/x459))+x460);

	if (t99 != 255) { NG(); } else { ; }
	
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

