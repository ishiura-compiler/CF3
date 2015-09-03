#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -28;
int8_t x12 = INT8_MIN;
int8_t x13 = -1;
int32_t x19 = INT32_MIN;
int32_t x25 = INT32_MAX;
int32_t x31 = INT32_MIN;
volatile uint64_t x32 = UINT64_MAX;
uint8_t x42 = UINT8_MAX;
int64_t x43 = -1LL;
static int64_t t9 = -253677LL;
static int64_t x54 = 1005050855831LL;
volatile int32_t x70 = INT32_MAX;
static int32_t x71 = INT32_MIN;
static uint16_t x74 = 194U;
int32_t x79 = -1;
int64_t t17 = -5803100546LL;
int64_t x84 = INT64_MAX;
int8_t x85 = INT8_MIN;
static volatile uint16_t x86 = UINT16_MAX;
static int32_t x91 = INT32_MIN;
static uint32_t x93 = 1712314943U;
volatile int8_t x102 = INT8_MAX;
int16_t x103 = -1;
volatile int32_t t23 = -427035053;
static uint64_t x109 = UINT64_MAX;
int64_t x115 = -273158LL;
uint8_t x123 = 3U;
volatile uint32_t t28 = 1U;
int16_t x126 = INT16_MIN;
uint32_t x140 = 5U;
volatile int32_t x148 = INT32_MAX;
int64_t x153 = 41425848292LL;
volatile uint32_t x155 = 807783U;
int16_t x156 = INT16_MIN;
int16_t x159 = 0;
volatile int32_t x160 = INT32_MAX;
int32_t x167 = -1;
volatile int8_t x168 = INT8_MIN;
int64_t t36 = -308211568LL;
uint64_t x173 = 555009LLU;
int8_t x175 = INT8_MIN;
int8_t x182 = -6;
uint32_t x183 = UINT32_MAX;
int64_t t39 = 9753264LL;
uint32_t x192 = 551U;
static uint16_t x194 = 12717U;
int8_t x198 = 1;
uint64_t x201 = UINT64_MAX;
volatile uint32_t x204 = 9892923U;
int8_t x205 = 0;
static uint16_t x217 = 7717U;
static int32_t x220 = 30706;
volatile int8_t x224 = -1;
int32_t x235 = INT32_MAX;
uint64_t t50 = 1062392930316841LLU;
int64_t x240 = -1LL;
volatile int8_t x246 = INT8_MAX;
int16_t x248 = -1;
uint16_t x256 = 1218U;
volatile int32_t x259 = INT32_MIN;
volatile int32_t t61 = 23;
int64_t x288 = INT64_MIN;
int64_t t62 = 63LL;
volatile int32_t t64 = 3663194;
int32_t t65 = -88;
uint64_t t66 = UINT64_MAX;
uint8_t x310 = 15U;
static volatile uint64_t t68 = 12472LLU;
int32_t x316 = INT32_MIN;
static int64_t x322 = INT64_MIN;
volatile int64_t t71 = -2399246LL;
uint32_t x325 = 434U;
volatile int32_t x328 = -84737173;
int16_t x346 = INT16_MIN;
int8_t x348 = -1;
int32_t x360 = INT32_MIN;
int32_t t78 = 0;
int32_t x369 = INT32_MAX;
static volatile int64_t x372 = INT64_MAX;
static int64_t t80 = 1086067LL;
uint64_t x376 = 41265080784LLU;
static int64_t x382 = 41LL;
volatile int8_t x383 = INT8_MAX;
uint8_t x395 = UINT8_MAX;
uint8_t x403 = 5U;
int64_t x415 = -1LL;
int64_t x416 = 6670855213845LL;
static volatile int32_t x431 = INT32_MIN;
int64_t x434 = -6281990LL;
int16_t x440 = INT16_MIN;
int32_t x441 = INT32_MAX;
static volatile int8_t x443 = INT8_MIN;
static volatile int32_t t94 = 3;
int8_t x449 = INT8_MIN;
uint16_t x451 = 0U;
int32_t t96 = 28;
static volatile uint32_t x457 = 1154U;
static int32_t x463 = INT32_MIN;
volatile uint64_t t99 = 5287LLU;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint8_t x3 = 1U;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 0;

	t0 = ((x1^(x2<x3))-x4);

	if (t0 != 382) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = 13;
	volatile int64_t x7 = INT64_MAX;
	int64_t x8 = -1LL;
	volatile int64_t t1 = -46018LL;

	t1 = ((x5^(x6<x7))-x8);

	if (t1 != -32766LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -7298278140507LL;
	uint64_t x10 = 102159498705337LLU;
	static int32_t x11 = 473;
	int64_t t2 = -430009907743496LL;

	t2 = ((x9^(x10<x11))-x12);

	if (t2 != -7298278140379LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = -143564921700482543LL;
	int64_t x15 = INT64_MAX;
	int32_t x16 = -19969;
	int32_t t3 = -1411381;

	t3 = ((x13^(x14<x15))-x16);

	if (t3 != 19967) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	int16_t x18 = INT16_MIN;
	static int64_t x20 = 5923363615LL;
	static volatile int64_t t4 = 7LL;

	t4 = ((x17^(x18<x19))-x20);

	if (t4 != -5923363616LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MAX;
	int32_t x27 = INT32_MAX;
	int32_t x28 = 267633065;
	volatile int32_t t5 = 26950;

	t5 = ((x25^(x26<x27))-x28);

	if (t5 != 1879850581) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 6U;
	static volatile uint32_t x30 = 470019518U;
	uint64_t t6 = 2727LLU;

	t6 = ((x29^(x30<x31))-x32);

	if (t6 != 8LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 10U;
	static volatile uint16_t x34 = UINT16_MAX;
	static uint32_t x35 = 28U;
	static int8_t x36 = INT8_MIN;
	static volatile int32_t t7 = 2;

	t7 = ((x33^(x34<x35))-x36);

	if (t7 != 138) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MIN;
	int64_t x38 = INT64_MAX;
	int32_t x39 = -744388371;
	volatile uint64_t x40 = 149020LLU;
	static volatile uint64_t t8 = 26660LLU;

	t8 = ((x37^(x38<x39))-x40);

	if (t8 != 9223372036854626788LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MIN;
	int64_t x44 = INT64_MIN;

	t9 = ((x41^(x42<x43))-x44);

	if (t9 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1001;
	int64_t x46 = INT64_MIN;
	int8_t x47 = -14;
	int16_t x48 = INT16_MAX;
	static int32_t t10 = 111047321;

	t10 = ((x45^(x46<x47))-x48);

	if (t10 != -33769) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 5718;
	uint64_t x55 = 163304219097843925LLU;
	static uint8_t x56 = 7U;
	int32_t t11 = -64;

	t11 = ((x53^(x54<x55))-x56);

	if (t11 != 5712) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = 51528913LL;
	volatile uint32_t x58 = 20696U;
	volatile int16_t x59 = INT16_MIN;
	volatile int64_t x60 = 16858548266145313LL;
	static int64_t t12 = -38049LL;

	t12 = ((x57^(x58<x59))-x60);

	if (t12 != -16858548214616401LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 53186451362039677LLU;
	int8_t x62 = 1;
	uint8_t x63 = 31U;
	int64_t x64 = -522583LL;
	volatile uint64_t t13 = 6LLU;

	t13 = ((x61^(x62<x63))-x64);

	if (t13 != 53186451362562259LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 104860346916451LL;
	int32_t x66 = INT32_MIN;
	uint16_t x67 = 12U;
	int64_t x68 = INT64_MAX;
	int64_t t14 = 4LL;

	t14 = ((x65^(x66<x67))-x68);

	if (t14 != -9223267176507859357LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x69 = 48925LLU;
	uint32_t x72 = UINT32_MAX;
	volatile uint64_t t15 = 36363524307LLU;

	t15 = ((x69^(x70<x71))-x72);

	if (t15 != 18446744069414633246LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = INT8_MAX;
	static uint8_t x75 = UINT8_MAX;
	uint32_t x76 = 942652U;
	volatile uint32_t t16 = 507113U;

	t16 = ((x73^(x74<x75))-x76);

	if (t16 != 4294024770U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = -18885396LL;
	int64_t x78 = INT64_MAX;
	uint16_t x80 = 4161U;

	t17 = ((x77^(x78<x79))-x80);

	if (t17 != -18889557LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 56U;
	int64_t x82 = INT64_MIN;
	uint8_t x83 = 48U;
	static volatile int64_t t18 = 95416049685LL;

	t18 = ((x81^(x82<x83))-x84);

	if (t18 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x87 = INT32_MAX;
	int32_t x88 = -1;
	int32_t t19 = -382720;

	t19 = ((x85^(x86<x87))-x88);

	if (t19 != -126) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -211;
	int32_t x90 = 14778;
	static int64_t x92 = INT64_MIN;
	volatile int64_t t20 = -101LL;

	t20 = ((x89^(x90<x91))-x92);

	if (t20 != 9223372036854775597LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = 1;
	volatile int32_t x95 = INT32_MIN;
	volatile int64_t x96 = -3686660365203297LL;
	int64_t t21 = 1LL;

	t21 = ((x93^(x94<x95))-x96);

	if (t21 != 3686662077518240LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = 25;
	static uint64_t x99 = 207223LLU;
	int16_t x100 = -1;
	volatile int32_t t22 = 5;

	t22 = ((x97^(x98<x99))-x100);

	if (t22 != -126) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x101 = 6;
	volatile int32_t x104 = -1;

	t23 = ((x101^(x102<x103))-x104);

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x105 = UINT8_MAX;
	int16_t x106 = INT16_MIN;
	int64_t x107 = -1LL;
	uint64_t x108 = 65355678943419154LLU;
	uint64_t t24 = 87LLU;

	t24 = ((x105^(x106<x107))-x108);

	if (t24 != 18381388394766132716LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = INT16_MAX;
	static uint8_t x111 = 1U;
	int32_t x112 = INT32_MAX;
	volatile uint64_t t25 = 276824866577017LLU;

	t25 = ((x109^(x110<x111))-x112);

	if (t25 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x113 = 17U;
	uint64_t x114 = UINT64_MAX;
	int8_t x116 = INT8_MIN;
	volatile int32_t t26 = 9478;

	t26 = ((x113^(x114<x115))-x116);

	if (t26 != 145) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = 1;
	int16_t x119 = -1;
	static volatile uint32_t x120 = 174U;
	uint32_t t27 = 15808U;

	t27 = ((x117^(x118<x119))-x120);

	if (t27 != 32593U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = UINT32_MAX;
	int16_t x122 = INT16_MIN;
	int8_t x124 = -22;

	t28 = ((x121^(x122<x123))-x124);

	if (t28 != 20U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x125 = INT32_MIN;
	int16_t x127 = 2;
	volatile int32_t x128 = -1;
	volatile int32_t t29 = 23;

	t29 = ((x125^(x126<x127))-x128);

	if (t29 != -2147483646) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = 364766328484794LLU;
	static int64_t x138 = INT64_MIN;
	volatile uint64_t x139 = 19359LLU;
	uint64_t t30 = 283LLU;

	t30 = ((x137^(x138<x139))-x140);

	if (t30 != 364766328484789LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = -1LL;
	int32_t x146 = INT32_MIN;
	static volatile uint64_t x147 = 149659145555LLU;
	int64_t t31 = 665690LL;

	t31 = ((x145^(x146<x147))-x148);

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x154 = INT32_MIN;
	static volatile int64_t t32 = 2654717LL;

	t32 = ((x153^(x154<x155))-x156);

	if (t32 != 41425881060LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x157 = UINT64_MAX;
	uint16_t x158 = 0U;
	static volatile uint64_t t33 = 3175833011042LLU;

	t33 = ((x157^(x158<x159))-x160);

	if (t33 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x161 = -1;
	int16_t x162 = -1245;
	uint32_t x163 = 158U;
	int8_t x164 = -31;
	int32_t t34 = -1;

	t34 = ((x161^(x162<x163))-x164);

	if (t34 != 30) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 1646U;
	int8_t x166 = INT8_MIN;
	int32_t t35 = 2419941;

	t35 = ((x165^(x166<x167))-x168);

	if (t35 != 1775) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x169 = -1LL;
	int16_t x170 = -22;
	int32_t x171 = -1;
	uint16_t x172 = UINT16_MAX;

	t36 = ((x169^(x170<x171))-x172);

	if (t36 != -65537LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x174 = -1;
	int32_t x176 = -1;
	volatile uint64_t t37 = 30618471244364LLU;

	t37 = ((x173^(x174<x175))-x176);

	if (t37 != 555010LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = INT8_MIN;
	uint32_t x178 = 183592080U;
	int16_t x179 = -1;
	int16_t x180 = INT16_MIN;
	int32_t t38 = 261284;

	t38 = ((x177^(x178<x179))-x180);

	if (t38 != 32641) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = -1LL;
	int16_t x184 = INT16_MIN;

	t39 = ((x181^(x182<x183))-x184);

	if (t39 != 32766LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = -1;
	int32_t x190 = INT32_MIN;
	static int64_t x191 = -3937LL;
	uint32_t t40 = 59087988U;

	t40 = ((x189^(x190<x191))-x192);

	if (t40 != 4294966743U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x193 = 0;
	int32_t x195 = INT32_MAX;
	int64_t x196 = 60175264845865020LL;
	volatile int64_t t41 = 4447313936383524372LL;

	t41 = ((x193^(x194<x195))-x196);

	if (t41 != -60175264845865019LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x197 = UINT64_MAX;
	uint32_t x199 = 75548U;
	volatile int16_t x200 = 1;
	uint64_t t42 = 1184LLU;

	t42 = ((x197^(x198<x199))-x200);

	if (t42 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x202 = INT8_MAX;
	volatile int16_t x203 = INT16_MIN;
	static volatile uint64_t t43 = 10242463025LLU;

	t43 = ((x201^(x202<x203))-x204);

	if (t43 != 18446744073699658692LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x206 = INT8_MIN;
	volatile uint16_t x207 = UINT16_MAX;
	int64_t x208 = -118859LL;
	int64_t t44 = -10246LL;

	t44 = ((x205^(x206<x207))-x208);

	if (t44 != 118860LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MIN;
	int16_t x215 = -1;
	uint8_t x216 = 2U;
	static int64_t t45 = 154190219412119258LL;

	t45 = ((x213^(x214<x215))-x216);

	if (t45 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x218 = -3;
	volatile int8_t x219 = INT8_MAX;
	static volatile int32_t t46 = 1;

	t46 = ((x217^(x218<x219))-x220);

	if (t46 != -22990) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x222 = INT8_MAX;
	int32_t x223 = INT32_MAX;
	uint64_t t47 = UINT64_MAX;

	t47 = ((x221^(x222<x223))-x224);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = -4197;
	int16_t x226 = INT16_MAX;
	uint64_t x227 = 251LLU;
	int16_t x228 = -1;
	volatile int32_t t48 = -59487;

	t48 = ((x225^(x226<x227))-x228);

	if (t48 != -4196) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = 7105U;
	int8_t x230 = INT8_MIN;
	volatile int64_t x231 = INT64_MIN;
	int8_t x232 = -1;
	int32_t t49 = -7;

	t49 = ((x229^(x230<x231))-x232);

	if (t49 != 7106) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x233 = 0LLU;
	uint8_t x234 = 0U;
	static uint16_t x236 = UINT16_MAX;

	t50 = ((x233^(x234<x235))-x236);

	if (t50 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 5147874403957LLU;
	int64_t t51 = -2807028298720363LL;

	t51 = ((x237^(x238<x239))-x240);

	if (t51 != -127LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = 102LL;
	int16_t x242 = INT16_MIN;
	static int64_t x243 = INT64_MAX;
	static int8_t x244 = -4;
	static int64_t t52 = 537547894804484LL;

	t52 = ((x241^(x242<x243))-x244);

	if (t52 != 107LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x245 = INT16_MIN;
	static int16_t x247 = INT16_MIN;
	int32_t t53 = 4648;

	t53 = ((x245^(x246<x247))-x248);

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	static int8_t x251 = -1;
	uint16_t x252 = 16U;
	static int32_t t54 = 92356022;

	t54 = ((x249^(x250<x251))-x252);

	if (t54 != -143) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x253 = INT8_MIN;
	int8_t x254 = -1;
	uint64_t x255 = 0LLU;
	static int32_t t55 = 85;

	t55 = ((x253^(x254<x255))-x256);

	if (t55 != -1346) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x257 = UINT32_MAX;
	volatile uint64_t x258 = UINT64_MAX;
	static int64_t x260 = -110347LL;
	int64_t t56 = 246787074778736LL;

	t56 = ((x257^(x258<x259))-x260);

	if (t56 != 4295077642LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x261 = 2U;
	int8_t x262 = INT8_MIN;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = -1;
	int32_t t57 = -108139552;

	t57 = ((x261^(x262<x263))-x264);

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x265 = INT8_MAX;
	uint16_t x266 = UINT16_MAX;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t58 = -13927;

	t58 = ((x265^(x266<x267))-x268);

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x269 = UINT32_MAX;
	volatile uint64_t x270 = 88925794LLU;
	int32_t x271 = 9;
	uint8_t x272 = 8U;
	uint32_t t59 = 27963U;

	t59 = ((x269^(x270<x271))-x272);

	if (t59 != 4294967287U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x277 = 5055;
	int16_t x278 = INT16_MIN;
	static int16_t x279 = INT16_MIN;
	static uint64_t x280 = UINT64_MAX;
	volatile uint64_t t60 = 393146435992LLU;

	t60 = ((x277^(x278<x279))-x280);

	if (t60 != 5056LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = -32008864;
	int64_t x282 = -1LL;
	int64_t x283 = 8648251332197LL;
	int16_t x284 = INT16_MIN;

	t61 = ((x281^(x282<x283))-x284);

	if (t61 != -31976095) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x285 = INT32_MIN;
	volatile int8_t x286 = 1;
	int32_t x287 = INT32_MIN;

	t62 = ((x285^(x286<x287))-x288);

	if (t62 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x289 = UINT8_MAX;
	volatile uint32_t x290 = UINT32_MAX;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 3U;
	static int32_t t63 = -78086;

	t63 = ((x289^(x290<x291))-x292);

	if (t63 != 252) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x293 = 2U;
	int32_t x294 = 97573798;
	int8_t x295 = 0;
	uint8_t x296 = UINT8_MAX;

	t64 = ((x293^(x294<x295))-x296);

	if (t64 != -253) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = -1182;
	int8_t x298 = INT8_MIN;
	int32_t x299 = -1;
	volatile int16_t x300 = INT16_MIN;

	t65 = ((x297^(x298<x299))-x300);

	if (t65 != 31587) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = -1LL;
	int32_t x302 = -1;
	int16_t x303 = INT16_MAX;
	uint64_t x304 = UINT64_MAX;

	t66 = ((x301^(x302<x303))-x304);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x305 = -26;
	uint32_t x306 = 1599U;
	uint16_t x307 = 65U;
	uint8_t x308 = UINT8_MAX;
	int32_t t67 = -23;

	t67 = ((x305^(x306<x307))-x308);

	if (t67 != -281) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x309 = 54U;
	int8_t x311 = INT8_MAX;
	uint64_t x312 = UINT64_MAX;

	t68 = ((x309^(x310<x311))-x312);

	if (t68 != 56LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x313 = 24958LLU;
	volatile int8_t x314 = -1;
	int8_t x315 = INT8_MAX;
	static volatile uint64_t t69 = 1881751585092331LLU;

	t69 = ((x313^(x314<x315))-x316);

	if (t69 != 2147508607LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = 6U;
	uint8_t x318 = 0U;
	uint32_t x319 = UINT32_MAX;
	static volatile int8_t x320 = INT8_MAX;
	static int32_t t70 = -5;

	t70 = ((x317^(x318<x319))-x320);

	if (t70 != -120) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x321 = -4052432346122LL;
	int16_t x323 = -1;
	uint16_t x324 = 4037U;

	t71 = ((x321^(x322<x323))-x324);

	if (t71 != -4052432350158LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x326 = -1;
	static volatile int16_t x327 = INT16_MIN;
	static uint32_t t72 = 2U;

	t72 = ((x325^(x326<x327))-x328);

	if (t72 != 84737607U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x329 = UINT8_MAX;
	int8_t x330 = 0;
	static uint16_t x331 = 4U;
	int16_t x332 = INT16_MAX;
	volatile int32_t t73 = -1194089;

	t73 = ((x329^(x330<x331))-x332);

	if (t73 != -32513) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int32_t x338 = INT32_MIN;
	static volatile uint16_t x339 = 15U;
	uint16_t x340 = UINT16_MAX;
	volatile uint64_t t74 = 1545080078113LLU;

	t74 = ((x337^(x338<x339))-x340);

	if (t74 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = 1;
	int8_t x347 = 4;
	volatile int32_t t75 = 8544980;

	t75 = ((x345^(x346<x347))-x348);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x353 = 3U;
	volatile int8_t x354 = -4;
	uint64_t x355 = 330LLU;
	uint32_t x356 = 440U;
	static uint32_t t76 = 198868139U;

	t76 = ((x353^(x354<x355))-x356);

	if (t76 != 4294966859U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x357 = UINT32_MAX;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MIN;
	uint32_t t77 = 56196149U;

	t77 = ((x357^(x358<x359))-x360);

	if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = 350;
	volatile int32_t x362 = -96961832;
	static uint16_t x363 = UINT16_MAX;
	int8_t x364 = -1;

	t78 = ((x361^(x362<x363))-x364);

	if (t78 != 352) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x365 = UINT8_MAX;
	int16_t x366 = 7673;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = 14700926U;
	volatile uint32_t t79 = 13593U;

	t79 = ((x365^(x366<x367))-x368);

	if (t79 != 4280266625U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x370 = 18576673563LLU;
	int8_t x371 = INT8_MAX;

	t80 = ((x369^(x370<x371))-x372);

	if (t80 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = UINT16_MAX;
	static int32_t x374 = INT32_MAX;
	uint32_t x375 = 14572U;
	static uint64_t t81 = 42LLU;

	t81 = ((x373^(x374<x375))-x376);

	if (t81 != 18446744032444536367LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = INT16_MIN;
	static uint8_t x384 = UINT8_MAX;
	volatile int32_t t82 = 47;

	t82 = ((x381^(x382<x383))-x384);

	if (t82 != -33022) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = INT16_MAX;
	volatile int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	int32_t x388 = -1;
	volatile int32_t t83 = -9;

	t83 = ((x385^(x386<x387))-x388);

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x393 = 1286;
	int8_t x394 = 0;
	static volatile uint64_t x396 = 0LLU;
	volatile uint64_t t84 = 1044941LLU;

	t84 = ((x393^(x394<x395))-x396);

	if (t84 != 1287LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x397 = 52009370U;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	uint32_t x400 = 2657U;
	static uint32_t t85 = 2U;

	t85 = ((x397^(x398<x399))-x400);

	if (t85 != 52006714U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x401 = -1LL;
	static uint8_t x402 = 46U;
	static int16_t x404 = -27;
	static int64_t t86 = -6218LL;

	t86 = ((x401^(x402<x403))-x404);

	if (t86 != 26LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MIN;
	volatile int64_t t87 = 348123LL;

	t87 = ((x413^(x414<x415))-x416);

	if (t87 != -6670855246612LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x417 = -5287367LL;
	static uint64_t x418 = 582364LLU;
	volatile int16_t x419 = INT16_MAX;
	uint8_t x420 = UINT8_MAX;
	static volatile int64_t t88 = -221839LL;

	t88 = ((x417^(x418<x419))-x420);

	if (t88 != -5287622LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = -1;
	int16_t x422 = INT16_MAX;
	volatile int64_t x423 = INT64_MIN;
	volatile uint16_t x424 = 5096U;
	int32_t t89 = 480305;

	t89 = ((x421^(x422<x423))-x424);

	if (t89 != -5097) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x425 = -1LL;
	int8_t x426 = -1;
	int8_t x427 = 9;
	static int8_t x428 = INT8_MAX;
	int64_t t90 = -542258377LL;

	t90 = ((x425^(x426<x427))-x428);

	if (t90 != -129LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = INT16_MIN;
	int32_t x430 = -18;
	int8_t x432 = INT8_MAX;
	int32_t t91 = -108589;

	t91 = ((x429^(x430<x431))-x432);

	if (t91 != -32895) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = INT8_MIN;
	static int8_t x435 = INT8_MAX;
	static volatile int32_t x436 = 491;
	int32_t t92 = 66200;

	t92 = ((x433^(x434<x435))-x436);

	if (t92 != -618) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = INT8_MIN;
	uint32_t x438 = 93U;
	int32_t x439 = INT32_MIN;
	int32_t t93 = 831502765;

	t93 = ((x437^(x438<x439))-x440);

	if (t93 != 32641) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x442 = 154U;
	volatile uint8_t x444 = 3U;

	t94 = ((x441^(x442<x443))-x444);

	if (t94 != 2147483643) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x445 = INT32_MIN;
	static int16_t x446 = INT16_MAX;
	uint64_t x447 = UINT64_MAX;
	int32_t x448 = INT32_MIN;
	static volatile int32_t t95 = 64;

	t95 = ((x445^(x446<x447))-x448);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x450 = 8U;
	static int32_t x452 = INT32_MIN;

	t96 = ((x449^(x450<x451))-x452);

	if (t96 != 2147483520) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x453 = INT16_MAX;
	volatile int64_t x454 = -1748940LL;
	int64_t x455 = 13513895450417LL;
	volatile int8_t x456 = -2;
	int32_t t97 = 47;

	t97 = ((x453^(x454<x455))-x456);

	if (t97 != 32768) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x458 = INT16_MIN;
	int32_t x459 = INT32_MAX;
	volatile int32_t x460 = 43836995;
	uint32_t t98 = 11334U;

	t98 = ((x457^(x458<x459))-x460);

	if (t98 != 4251131456U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x461 = UINT32_MAX;
	int8_t x462 = 0;
	uint64_t x464 = UINT64_MAX;

	t99 = ((x461^(x462<x463))-x464);

	if (t99 != 4294967296LLU) { NG(); } else { ; }
	
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

