#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
int16_t x9 = INT16_MIN;
int8_t x13 = -1;
int64_t x16 = -1LL;
uint64_t t3 = 236857403429LLU;
int64_t t4 = 8LL;
int8_t x23 = -1;
int32_t x28 = INT32_MIN;
volatile int16_t x30 = INT16_MAX;
volatile int8_t x33 = INT8_MIN;
static int32_t x36 = INT32_MIN;
static uint32_t x49 = UINT32_MAX;
volatile uint32_t t11 = UINT32_MAX;
uint8_t x55 = 16U;
int32_t x63 = INT32_MIN;
int32_t t14 = -1392;
int16_t x65 = -34;
int8_t x93 = -1;
static volatile int16_t x97 = INT16_MAX;
volatile int64_t x102 = INT64_MAX;
int8_t x108 = -1;
int32_t x109 = INT32_MIN;
int16_t x112 = INT16_MIN;
volatile int16_t x114 = INT16_MIN;
static int8_t x116 = INT8_MIN;
int16_t x132 = 45;
static volatile uint64_t t31 = UINT64_MAX;
uint8_t x136 = 113U;
uint8_t x151 = 11U;
int16_t x155 = -1;
volatile int32_t x168 = -1;
volatile int64_t x169 = INT64_MIN;
int64_t x171 = INT64_MIN;
volatile int64_t t41 = INT64_MIN;
int8_t x179 = INT8_MIN;
volatile int8_t x182 = 10;
uint8_t x185 = 12U;
static uint8_t x200 = 47U;
volatile int16_t x201 = INT16_MIN;
int16_t x202 = -1;
int16_t x205 = INT16_MIN;
static uint64_t x210 = 221214798886LLU;
int32_t x212 = -1;
volatile int8_t x213 = -4;
int16_t x214 = -46;
int16_t x220 = INT16_MAX;
int16_t x221 = INT16_MAX;
int32_t x224 = INT32_MAX;
int8_t x226 = INT8_MAX;
static int32_t x227 = -1;
int16_t x233 = 25;
uint32_t x234 = 251796U;
uint64_t x235 = 6LLU;
int16_t x238 = -40;
int8_t x244 = INT8_MAX;
static uint64_t x251 = 668625319LLU;
static int16_t x254 = 1;
volatile int64_t t62 = 907973152860101LL;
uint8_t x260 = 2U;
int16_t x261 = INT16_MIN;
uint8_t x262 = 10U;
uint64_t x263 = 3LLU;
uint16_t x266 = 27695U;
volatile int64_t t65 = -8LL;
static int64_t x273 = INT64_MIN;
static uint8_t x276 = 21U;
uint64_t t67 = 814762460LLU;
static int16_t x284 = INT16_MIN;
int32_t t68 = 114060;
int16_t x295 = INT16_MIN;
volatile int8_t x298 = INT8_MIN;
static int32_t t72 = -7;
volatile int64_t t74 = INT64_MIN;
uint32_t x312 = UINT32_MAX;
volatile uint32_t t76 = 12U;
int16_t x317 = -5739;
static volatile uint64_t t77 = 10873LLU;
uint16_t x323 = UINT16_MAX;
int32_t x330 = INT32_MIN;
int32_t t80 = 7;
int64_t x336 = 227087692496948LL;
volatile uint64_t t82 = 172099024608LLU;
int64_t x342 = -1LL;
int16_t x346 = 61;
static volatile int32_t x349 = -1;
int16_t x354 = INT16_MIN;
uint64_t t87 = UINT64_MAX;
int16_t x365 = 6352;
volatile int16_t x382 = 1632;
int64_t x384 = -1LL;
static int8_t x385 = -1;
uint32_t t94 = 1U;
int8_t x392 = INT8_MAX;
uint32_t x399 = 11234776U;


void f0(void) {
	static int8_t x1 = -8;
	uint32_t x2 = UINT32_MAX;
	int64_t x3 = -66623492LL;
	static int16_t x4 = -1;
	volatile int64_t t0 = 943594219855012LL;

	t0 = (x1^((x2/x3)&x4));

	if (t0 != 56LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int8_t x6 = 14;
	uint32_t x7 = 26U;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5^((x6/x7)&x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x10 = 13U;
	volatile uint8_t x11 = 2U;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -451078;

	t2 = (x9^((x10/x11)&x12));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 6773912811LLU;
	static int32_t x15 = 10;

	t3 = (x13^((x14/x15)&x16));

	if (t3 != 18446744073032160334LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MIN;
	volatile int16_t x19 = INT16_MAX;
	static int8_t x20 = -1;

	t4 = (x17^((x18/x19)&x20));

	if (t4 != 281483566907512LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	uint8_t x22 = 1U;
	volatile uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 256235980939001LLU;

	t5 = (x21^((x22/x23)&x24));

	if (t5 != 2147483647LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static uint64_t x26 = UINT64_MAX;
	int32_t x27 = -3;
	uint64_t t6 = UINT64_MAX;

	t6 = (x25^((x26/x27)&x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	uint16_t x31 = 124U;
	static volatile int8_t x32 = INT8_MIN;
	int32_t t7 = 610;

	t7 = (x29^((x30/x31)&x32));

	if (t7 != 65279) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = 945193U;
	int32_t x35 = -1;
	volatile uint32_t t8 = 84576U;

	t8 = (x33^((x34/x35)&x36));

	if (t8 != 4294967168U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -329;
	uint8_t x38 = 1U;
	uint32_t x39 = 262U;
	int16_t x40 = INT16_MIN;
	volatile uint32_t t9 = 159U;

	t9 = (x37^((x38/x39)&x40));

	if (t9 != 4294966967U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = -1;
	int16_t x46 = 2;
	int8_t x47 = INT8_MIN;
	volatile uint32_t x48 = 62U;
	static uint32_t t10 = UINT32_MAX;

	t10 = (x45^((x46/x47)&x48));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x50 = -4;
	int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;

	t11 = (x49^((x50/x51)&x52));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = 2;
	static uint16_t x54 = 45U;
	uint16_t x56 = 21U;
	volatile int32_t t12 = 68;

	t12 = (x53^((x54/x55)&x56));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MIN;
	volatile int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MAX;
	uint16_t x60 = 11U;
	int64_t t13 = INT64_MIN;

	t13 = (x57^((x58/x59)&x60));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 20124U;
	int32_t x62 = INT32_MIN;
	int16_t x64 = INT16_MIN;

	t14 = (x61^((x62/x63)&x64));

	if (t14 != 20124) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x66 = INT8_MIN;
	volatile uint8_t x67 = UINT8_MAX;
	static uint32_t x68 = UINT32_MAX;
	static volatile uint32_t t15 = 416U;

	t15 = (x65^((x66/x67)&x68));

	if (t15 != 4294967262U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = 3908000130LL;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = 13U;
	uint64_t x72 = 27744768478LLU;
	volatile uint64_t t16 = 18LLU;

	t16 = (x69^((x70/x71)&x72));

	if (t16 != 29222586762LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x73 = 1;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = 105;
	int32_t x76 = -1;
	static volatile uint32_t t17 = 3405207U;

	t17 = (x73^((x74/x75)&x76));

	if (t17 != 40904451U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MIN;
	volatile int32_t x78 = INT32_MIN;
	int32_t x79 = 80461202;
	uint16_t x80 = 1604U;
	volatile int32_t t18 = -1;

	t18 = (x77^((x78/x79)&x80));

	if (t18 != -1596) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MAX;
	int8_t x83 = INT8_MAX;
	uint32_t x84 = 7632U;
	volatile uint32_t t19 = 298283264U;

	t19 = (x81^((x82/x83)&x84));

	if (t19 != 4294934784U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 57U;
	static volatile uint16_t x86 = 2U;
	int32_t x87 = -112655403;
	int16_t x88 = INT16_MAX;
	int32_t t20 = 2322;

	t20 = (x85^((x86/x87)&x88));

	if (t20 != 57) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = INT64_MIN;
	uint64_t x91 = 959459590218207185LLU;
	uint8_t x92 = UINT8_MAX;
	volatile uint64_t t21 = 83199691936651LLU;

	t21 = (x89^((x90/x91)&x92));

	if (t21 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x94 = 1395U;
	uint16_t x95 = 5750U;
	volatile int8_t x96 = INT8_MIN;
	int32_t t22 = -68;

	t22 = (x93^((x94/x95)&x96));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = -1LL;
	static uint16_t x99 = 937U;
	static int16_t x100 = INT16_MIN;
	static int64_t t23 = -1LL;

	t23 = (x97^((x98/x99)&x100));

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = 1;
	static int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	int64_t t24 = -5960940067LL;

	t24 = (x101^((x102/x103)&x104));

	if (t24 != -4294967295LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	static int32_t x106 = 118811950;
	static volatile int32_t x107 = -1124;
	uint32_t t25 = 1262U;

	t25 = (x105^((x106/x107)&x108));

	if (t25 != 105703U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x110 = INT8_MIN;
	int32_t x111 = -28094348;
	int32_t t26 = INT32_MIN;

	t26 = (x109^((x110/x111)&x112));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MAX;
	int32_t x115 = INT32_MIN;
	static int64_t t27 = INT64_MAX;

	t27 = (x113^((x114/x115)&x116));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 8842274202LL;
	static int32_t x118 = INT32_MIN;
	int8_t x119 = 20;
	uint32_t x120 = UINT32_MAX;
	static volatile int64_t t28 = -30854LL;

	t28 = (x117^((x118/x119)&x120));

	if (t28 != 12726828032LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	volatile uint64_t x122 = 29407240765LLU;
	static uint8_t x123 = 3U;
	static uint64_t x124 = 1318590608003400LLU;
	uint64_t t29 = 282520380203135128LLU;

	t29 = (x121^((x122/x123)&x124));

	if (t29 != 18446744072497377152LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -59203;
	int16_t x126 = INT16_MIN;
	uint8_t x127 = 3U;
	volatile uint8_t x128 = 1U;
	volatile int32_t t30 = -1619;

	t30 = (x125^((x126/x127)&x128));

	if (t30 != -59203) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = UINT64_MAX;
	int16_t x130 = -1;
	int64_t x131 = INT64_MAX;

	t31 = (x129^((x130/x131)&x132));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x133 = 25484212617LLU;
	static volatile int32_t x134 = -1;
	static int64_t x135 = INT64_MAX;
	static volatile uint64_t t32 = 27675890804LLU;

	t32 = (x133^((x134/x135)&x136));

	if (t32 != 25484212617LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = 5819U;
	volatile uint64_t x138 = UINT64_MAX;
	int64_t x139 = INT64_MIN;
	int32_t x140 = INT32_MIN;
	static volatile uint64_t t33 = 110249512672041902LLU;

	t33 = (x137^((x138/x139)&x140));

	if (t33 != 5819LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = -362889277817899LL;
	volatile uint16_t x142 = 36U;
	int64_t x143 = 2362629230228087LL;
	int32_t x144 = INT32_MIN;
	volatile int64_t t34 = 14245002837079488LL;

	t34 = (x141^((x142/x143)&x144));

	if (t34 != -362889277817899LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = UINT64_MAX;
	int8_t x146 = -1;
	static volatile uint64_t x147 = 13631LLU;
	int64_t x148 = INT64_MIN;
	uint64_t t35 = UINT64_MAX;

	t35 = (x145^((x146/x147)&x148));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = INT64_MAX;
	volatile int16_t x150 = INT16_MIN;
	int8_t x152 = INT8_MIN;
	int64_t t36 = 1LL;

	t36 = (x149^((x150/x151)&x152));

	if (t36 != -9223372036854772737LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = -1;
	uint8_t x154 = 6U;
	volatile int64_t x156 = -1LL;
	int64_t t37 = 4302844LL;

	t37 = (x153^((x154/x155)&x156));

	if (t37 != 5LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 6U;
	volatile uint32_t x158 = 762U;
	volatile uint16_t x159 = UINT16_MAX;
	int8_t x160 = -1;
	uint32_t t38 = 55850525U;

	t38 = (x157^((x158/x159)&x160));

	if (t38 != 6U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = INT64_MAX;
	uint32_t x163 = 2U;
	int64_t x164 = INT64_MIN;
	int64_t t39 = 3LL;

	t39 = (x161^((x162/x163)&x164));

	if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MAX;
	int8_t x166 = INT8_MAX;
	volatile int16_t x167 = -1;
	volatile int32_t t40 = 0;

	t40 = (x165^((x166/x167)&x168));

	if (t40 != -32642) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x170 = 0U;
	int8_t x172 = INT8_MAX;

	t41 = (x169^((x170/x171)&x172));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1937884;
	int64_t x174 = -8538769377818LL;
	volatile int32_t x175 = -681;
	int32_t x176 = INT32_MAX;
	volatile int64_t t42 = -4089869LL;

	t42 = (x173^((x174/x175)&x176));

	if (t42 != -1799808686LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = 88U;
	static volatile uint8_t x178 = UINT8_MAX;
	int8_t x180 = -1;
	int32_t t43 = 52890;

	t43 = (x177^((x178/x179)&x180));

	if (t43 != -89) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = 11085;
	uint32_t x183 = 11U;
	volatile int32_t x184 = INT32_MAX;
	uint32_t t44 = 639193U;

	t44 = (x181^((x182/x183)&x184));

	if (t44 != 11085U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x186 = 550027LLU;
	uint32_t x187 = 39230U;
	int32_t x188 = -355657529;
	volatile uint64_t t45 = 2LLU;

	t45 = (x185^((x186/x187)&x188));

	if (t45 != 10LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -487;
	int16_t x190 = INT16_MAX;
	int8_t x191 = 13;
	static uint16_t x192 = UINT16_MAX;
	volatile int32_t t46 = 451;

	t46 = (x189^((x190/x191)&x192));

	if (t46 != -2111) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = UINT32_MAX;
	static int16_t x194 = INT16_MIN;
	volatile int32_t x195 = -4165809;
	int16_t x196 = -1;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x193^((x194/x195)&x196));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -33209;
	static int32_t x198 = INT32_MAX;
	int64_t x199 = INT64_MIN;
	static volatile int64_t t48 = 3885356272099314LL;

	t48 = (x197^((x198/x199)&x200));

	if (t48 != -33209LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x203 = -1;
	volatile int64_t x204 = -1LL;
	volatile int64_t t49 = 150857158776994110LL;

	t49 = (x201^((x202/x203)&x204));

	if (t49 != -32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x206 = UINT64_MAX;
	volatile uint16_t x207 = UINT16_MAX;
	static uint16_t x208 = 0U;
	volatile uint64_t t50 = 11761LLU;

	t50 = (x205^((x206/x207)&x208));

	if (t50 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x209 = 788847296U;
	static uint32_t x211 = 1495721U;
	volatile uint64_t t51 = 990572243535LLU;

	t51 = (x209^((x210/x211)&x212));

	if (t51 != 788962170LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x215 = INT8_MAX;
	static int8_t x216 = -57;
	volatile int32_t t52 = -16;

	t52 = (x213^((x214/x215)&x216));

	if (t52 != -4) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MIN;
	static uint64_t x218 = UINT64_MAX;
	uint16_t x219 = UINT16_MAX;
	uint64_t t53 = 457LLU;

	t53 = (x217^((x218/x219)&x220));

	if (t53 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x222 = 474242861LLU;
	int32_t x223 = -1;
	volatile uint64_t t54 = 102081LLU;

	t54 = (x221^((x222/x223)&x224));

	if (t54 != 32767LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = 1887372369U;
	uint8_t x228 = 0U;
	static uint32_t t55 = 3967U;

	t55 = (x225^((x226/x227)&x228));

	if (t55 != 1887372369U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = 1LL;
	int16_t x230 = -14283;
	int8_t x231 = INT8_MAX;
	volatile uint32_t x232 = UINT32_MAX;
	volatile int64_t t56 = 1658LL;

	t56 = (x229^((x230/x231)&x232));

	if (t56 != 4294967185LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x236 = INT8_MIN;
	uint64_t t57 = 30681257314023593LLU;

	t57 = (x233^((x234/x235)&x236));

	if (t57 != 41881LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x237 = 3914591LLU;
	int8_t x239 = INT8_MIN;
	static volatile uint16_t x240 = 1U;
	volatile uint64_t t58 = 12956832474LLU;

	t58 = (x237^((x238/x239)&x240));

	if (t58 != 3914591LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = 1;
	static volatile uint8_t x242 = 2U;
	int32_t x243 = -1;
	int32_t t59 = -947955;

	t59 = (x241^((x242/x243)&x244));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x245 = 204U;
	int16_t x246 = INT16_MAX;
	int32_t x247 = INT32_MIN;
	int32_t x248 = 392719;
	int32_t t60 = 113481;

	t60 = (x245^((x246/x247)&x248));

	if (t60 != 204) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -1;
	int64_t x250 = INT64_MAX;
	int8_t x252 = INT8_MIN;
	static uint64_t t61 = 60052213LLU;

	t61 = (x249^((x250/x251)&x252));

	if (t61 != 18446744059915021695LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MIN;
	int8_t x255 = 3;
	int64_t x256 = INT64_MIN;

	t62 = (x253^((x254/x255)&x256));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x257 = 2036U;
	uint64_t x258 = 475827349LLU;
	uint16_t x259 = UINT16_MAX;
	uint64_t t63 = 546122LLU;

	t63 = (x257^((x258/x259)&x260));

	if (t63 != 2036LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x264 = 164241683U;
	static volatile uint64_t t64 = 6977172LLU;

	t64 = (x261^((x262/x263)&x264));

	if (t64 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MIN;

	t65 = (x265^((x266/x267)&x268));

	if (t65 != -32768LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = 2023;
	int8_t x275 = 10;
	int64_t t66 = INT64_MIN;

	t66 = (x273^((x274/x275)&x276));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	uint64_t x278 = 1LLU;
	uint64_t x279 = 521908808LLU;
	uint16_t x280 = 2U;

	t67 = (x277^((x278/x279)&x280));

	if (t67 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = 30295;
	int16_t x282 = -14;
	uint16_t x283 = UINT16_MAX;

	t68 = (x281^((x282/x283)&x284));

	if (t68 != 30295) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = 0U;
	static volatile uint32_t x286 = 15075U;
	int8_t x287 = INT8_MIN;
	static uint16_t x288 = UINT16_MAX;
	static uint32_t t69 = 146U;

	t69 = (x285^((x286/x287)&x288));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x289 = 112U;
	int64_t x290 = -1LL;
	int64_t x291 = 1041524826831745764LL;
	uint16_t x292 = 390U;
	int64_t t70 = 26208LL;

	t70 = (x289^((x290/x291)&x292));

	if (t70 != 112LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x293 = INT16_MIN;
	int32_t x294 = -1;
	int32_t x296 = -1;
	volatile int32_t t71 = 951;

	t71 = (x293^((x294/x295)&x296));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = 500814;
	int8_t x299 = -1;
	int16_t x300 = -1;

	t72 = (x297^((x298/x299)&x300));

	if (t72 != 500942) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = UINT64_MAX;
	static uint32_t x302 = UINT32_MAX;
	static uint32_t x303 = UINT32_MAX;
	uint8_t x304 = UINT8_MAX;
	uint64_t t73 = 40LLU;

	t73 = (x301^((x302/x303)&x304));

	if (t73 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int16_t x306 = 0;
	static int16_t x307 = -1;
	uint8_t x308 = 35U;

	t74 = (x305^((x306/x307)&x308));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = -61365LL;
	int32_t x310 = INT32_MAX;
	static int8_t x311 = 11;
	int64_t t75 = -1803978294133554LL;

	t75 = (x309^((x310/x311)&x312));

	if (t75 != -195168015LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x313 = UINT32_MAX;
	volatile int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;

	t76 = (x313^((x314/x315)&x316));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x318 = UINT64_MAX;
	static int64_t x319 = -1443275225867554LL;
	static int8_t x320 = INT8_MIN;

	t77 = (x317^((x318/x319)&x320));

	if (t77 != 18446744073709545877LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = 0;
	int16_t x322 = 114;
	static int64_t x324 = INT64_MAX;
	int64_t t78 = -14662783228LL;

	t78 = (x321^((x322/x323)&x324));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = 10U;
	int64_t x326 = -1LL;
	volatile uint16_t x327 = 1437U;
	int8_t x328 = -1;
	int64_t t79 = -1LL;

	t79 = (x325^((x326/x327)&x328));

	if (t79 != 10LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = -1;
	volatile int8_t x331 = INT8_MAX;
	uint8_t x332 = UINT8_MAX;

	t80 = (x329^((x330/x331)&x332));

	if (t80 != -249) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = INT32_MAX;
	int16_t x334 = INT16_MIN;
	static volatile uint64_t x335 = UINT64_MAX;
	volatile uint64_t t81 = 10538LLU;

	t81 = (x333^((x334/x335)&x336));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = -1;
	int16_t x339 = INT16_MIN;
	uint64_t x340 = UINT64_MAX;

	t82 = (x337^((x338/x339)&x340));

	if (t82 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = 95297501;
	int64_t x343 = 1LL;
	static int8_t x344 = INT8_MIN;
	int64_t t83 = -1868734378LL;

	t83 = (x341^((x342/x343)&x344));

	if (t83 != -95297443LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x347 = INT8_MIN;
	volatile int8_t x348 = -1;
	volatile int32_t t84 = 442996044;

	t84 = (x345^((x346/x347)&x348));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x350 = INT64_MAX;
	int64_t x351 = 91447260541953039LL;
	static int8_t x352 = -1;
	int64_t t85 = 17LL;

	t85 = (x349^((x350/x351)&x352));

	if (t85 != -101LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x353 = 44U;
	volatile int8_t x355 = -1;
	int8_t x356 = -1;
	int32_t t86 = 919362890;

	t86 = (x353^((x354/x355)&x356));

	if (t86 != 32812) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x357 = UINT64_MAX;
	uint8_t x358 = 78U;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = 12841433447LLU;

	t87 = (x357^((x358/x359)&x360));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x361 = 2LLU;
	uint16_t x362 = 0U;
	volatile uint64_t x363 = 704352242LLU;
	volatile int8_t x364 = 1;
	volatile uint64_t t88 = 1429531260LLU;

	t88 = (x361^((x362/x363)&x364));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x366 = 9;
	static int8_t x367 = -1;
	uint8_t x368 = 38U;
	volatile int32_t t89 = -981652;

	t89 = (x365^((x366/x367)&x368));

	if (t89 != 6390) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x369 = -1;
	volatile int32_t x370 = INT32_MIN;
	uint32_t x371 = UINT32_MAX;
	static uint32_t x372 = UINT32_MAX;
	uint32_t t90 = UINT32_MAX;

	t90 = (x369^((x370/x371)&x372));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x373 = 0U;
	int64_t x374 = INT64_MIN;
	static int32_t x375 = INT32_MIN;
	int16_t x376 = 13264;
	volatile int64_t t91 = -6LL;

	t91 = (x373^((x374/x375)&x376));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x377 = UINT16_MAX;
	static int16_t x378 = INT16_MIN;
	volatile int16_t x379 = -1;
	static volatile int64_t x380 = INT64_MAX;
	int64_t t92 = -240105560331928LL;

	t92 = (x377^((x378/x379)&x380));

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x381 = 15LL;
	volatile int16_t x383 = -1;
	volatile int64_t t93 = 4921315559206569LL;

	t93 = (x381^((x382/x383)&x384));

	if (t93 != -1617LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x386 = UINT16_MAX;
	int16_t x387 = INT16_MAX;
	uint32_t x388 = UINT32_MAX;

	t94 = (x385^((x386/x387)&x388));

	if (t94 != 4294967293U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x389 = 0U;
	uint8_t x390 = 114U;
	int32_t x391 = -1;
	int32_t t95 = -12301;

	t95 = (x389^((x390/x391)&x392));

	if (t95 != 14) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = -5567823LL;
	int64_t x394 = -157032364983444150LL;
	volatile int16_t x395 = -64;
	volatile int64_t x396 = -1LL;
	static volatile int64_t t96 = -453904370396LL;

	t96 = (x393^((x394/x395)&x396));

	if (t96 != -2453630697388741LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x397 = 1867U;
	int16_t x398 = -1;
	int8_t x400 = 2;
	volatile uint32_t t97 = 0U;

	t97 = (x397^((x398/x399)&x400));

	if (t97 != 1865U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x401 = INT64_MAX;
	uint32_t x402 = 1513436115U;
	static int64_t x403 = 22254634LL;
	int32_t x404 = -1;
	int64_t t98 = -4604150716350522754LL;

	t98 = (x401^((x402/x403)&x404));

	if (t98 != 9223372036854775739LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x405 = -185537;
	uint16_t x406 = UINT16_MAX;
	int16_t x407 = 820;
	int32_t x408 = 2355142;
	int32_t t99 = -99;

	t99 = (x405^((x406/x407)&x408));

	if (t99 != -185479) { NG(); } else { ; }
	
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

