#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x7 = 160U;
volatile uint32_t t1 = 244574U;
int8_t x10 = 7;
static int32_t x17 = INT32_MAX;
uint64_t t4 = 1417LLU;
int64_t x22 = INT64_MIN;
int64_t t5 = -14113632441470346LL;
int32_t x26 = INT32_MIN;
static uint64_t x34 = UINT64_MAX;
int8_t x43 = INT8_MIN;
int8_t x44 = -1;
volatile int64_t t10 = -5329023391344228LL;
int8_t x45 = INT8_MIN;
uint64_t x46 = 2448363937675544713LLU;
static volatile int64_t x51 = -13214360LL;
volatile int32_t x55 = INT32_MIN;
uint8_t x58 = 51U;
static int64_t x59 = -2342514035442390LL;
volatile int64_t x60 = -1LL;
int64_t x68 = -1LL;
int64_t x72 = -1LL;
volatile int64_t t19 = -1946LL;
int64_t x85 = INT64_MIN;
static volatile int64_t x86 = INT64_MIN;
int64_t t20 = 147055LL;
uint64_t t22 = 471LLU;
volatile uint16_t x98 = 21559U;
int32_t x100 = INT32_MAX;
volatile uint32_t t23 = 74U;
static int8_t x105 = INT8_MAX;
static int8_t x107 = 30;
static int64_t x116 = INT64_MAX;
int64_t t26 = -13770LL;
static uint64_t t27 = 1203LLU;
int32_t x123 = INT32_MIN;
volatile int32_t t28 = 0;
static int8_t x136 = -1;
static int64_t x143 = -263253138156440258LL;
int64_t x148 = INT64_MAX;
int64_t t33 = 97214355LL;
int64_t x152 = INT64_MAX;
uint32_t x153 = 88066U;
int32_t x157 = 8436822;
int16_t x160 = -2986;
uint64_t x164 = 5LLU;
volatile int16_t x167 = -1;
uint8_t x174 = 8U;
int64_t x176 = -1LL;
uint64_t x184 = 38LLU;
uint8_t x189 = UINT8_MAX;
volatile uint64_t x197 = UINT64_MAX;
static volatile int32_t t46 = 16472;
static volatile uint64_t t47 = 4032006LLU;
uint32_t x209 = UINT32_MAX;
static uint64_t t48 = 1737345797033631875LLU;
int64_t x213 = -1LL;
volatile int8_t x214 = 3;
static volatile int8_t x220 = -1;
volatile int8_t x225 = INT8_MAX;
uint64_t x226 = UINT64_MAX;
volatile uint64_t t51 = 109180109447LLU;
int32_t x231 = INT32_MAX;
int64_t x236 = 2630063191437LL;
int64_t x237 = INT64_MIN;
int16_t x239 = INT16_MAX;
volatile int64_t x240 = 1255441LL;
volatile int8_t x242 = 7;
int64_t x246 = INT64_MIN;
volatile int64_t t56 = -260625746581LL;
uint16_t x251 = UINT16_MAX;
int16_t x252 = INT16_MAX;
uint64_t x267 = 5686825903LLU;
volatile int16_t x268 = INT16_MAX;
static int64_t x277 = INT64_MIN;
int16_t x279 = INT16_MIN;
int64_t x283 = INT64_MIN;
volatile int64_t x284 = -4918LL;
uint32_t x285 = UINT32_MAX;
uint8_t x288 = 26U;
uint16_t x295 = 16U;
uint8_t x300 = UINT8_MAX;
uint8_t x301 = 28U;
uint8_t x312 = 38U;
volatile int32_t t69 = 338888415;
int32_t x313 = INT32_MIN;
int64_t x314 = INT64_MIN;
int8_t x315 = INT8_MAX;
static int64_t x320 = INT64_MAX;
int16_t x325 = INT16_MIN;
uint8_t x328 = 23U;
uint64_t x346 = 233544740766LLU;
int32_t x349 = -1;
volatile int16_t x354 = 42;
int64_t x355 = -1623838215699598807LL;
volatile int64_t t80 = -1133948755588818950LL;
volatile uint64_t x360 = 27880043100049LLU;
int16_t x378 = INT16_MAX;
int32_t x381 = 421;
uint32_t x388 = 61U;
int32_t x402 = 22998162;
volatile uint16_t x408 = 8356U;
uint32_t x416 = UINT32_MAX;
static int64_t x418 = INT64_MAX;
uint64_t t97 = 7213267LLU;


void f0(void) {
	int8_t x1 = -1;
	int64_t x2 = -1692926490556419LL;
	int64_t x3 = 127646647081298726LL;
	static uint64_t x4 = UINT64_MAX;
	static uint64_t t0 = 23490740451672133LLU;

	t0 = ((x1/(x2^x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint32_t x6 = 1U;
	static int8_t x8 = -1;

	t1 = ((x5/(x6^x7))/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint64_t x11 = 13205900998737LLU;
	static int8_t x12 = 4;
	uint64_t t2 = 1LLU;

	t2 = ((x9/(x10^x11))/x12);

	if (t2 != 349214LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 48;
	int8_t x14 = INT8_MIN;
	static volatile int32_t x15 = INT32_MAX;
	volatile int64_t x16 = -41LL;
	int64_t t3 = -1333LL;

	t3 = ((x13/(x14^x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 3185LLU;
	volatile uint8_t x19 = 18U;
	volatile int64_t x20 = INT64_MAX;

	t4 = ((x17/(x18^x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	static uint16_t x23 = UINT16_MAX;
	int32_t x24 = -1;

	t5 = ((x21/(x22^x23))/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	volatile uint64_t x27 = UINT64_MAX;
	int32_t x28 = -1;
	volatile uint64_t t6 = 15LLU;

	t6 = ((x25/(x26^x27))/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 210U;
	static int32_t x30 = -1;
	int32_t x31 = INT32_MAX;
	int64_t x32 = -1LL;
	int64_t t7 = -562750562428289LL;

	t7 = ((x29/(x30^x31))/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 16132707U;
	int64_t x35 = INT64_MAX;
	int8_t x36 = -1;
	volatile uint64_t t8 = 249628790930003LLU;

	t8 = ((x33/(x34^x35))/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 4362U;
	int64_t x38 = INT64_MAX;
	volatile uint32_t x39 = 10U;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = 292546913LL;

	t9 = ((x37/(x38^x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	volatile uint8_t x42 = 3U;

	t10 = ((x41/(x42^x43))/x44);

	if (t10 != 73786976294838206LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t11 = 256603934453LLU;

	t11 = ((x45/(x46^x47))/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -9319;
	volatile int64_t x50 = INT64_MAX;
	uint8_t x52 = 34U;
	int64_t t12 = 67LL;

	t12 = ((x49/(x50^x51))/x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 3LLU;
	uint16_t x54 = 21U;
	static int8_t x56 = INT8_MIN;
	uint64_t t13 = 48293252838192493LLU;

	t13 = ((x53/(x54^x55))/x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t t14 = 2253107843081LL;

	t14 = ((x57/(x58^x59))/x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 15;
	static int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	int8_t x64 = 1;
	int64_t t15 = -4934074616548027LL;

	t15 = ((x61/(x62^x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int64_t x66 = INT64_MIN;
	volatile int8_t x67 = INT8_MIN;
	static volatile int64_t t16 = 2333380708614163LL;

	t16 = ((x65/(x66^x67))/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int16_t x70 = INT16_MAX;
	uint64_t x71 = 265093293330968946LLU;
	volatile uint64_t t17 = 26556266LLU;

	t17 = ((x69/(x70^x71))/x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 16270603007131LL;
	int16_t x78 = -1;
	uint8_t x79 = UINT8_MAX;
	uint8_t x80 = 45U;
	int64_t t18 = -2943LL;

	t18 = ((x77/(x78^x79))/x80);

	if (t18 != -1412378733LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x81 = 55U;
	int64_t x82 = -1LL;
	uint16_t x83 = 0U;
	int64_t x84 = INT64_MAX;

	t19 = ((x81/(x82^x83))/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x87 = 178696212791LL;
	uint8_t x88 = 1U;

	t20 = ((x85/(x86^x87))/x88);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = INT64_MIN;
	int8_t x90 = -1;
	static volatile int8_t x91 = 7;
	int16_t x92 = INT16_MAX;
	static int64_t t21 = -2805537928969867LL;

	t21 = ((x89/(x90^x91))/x92);

	if (t21 != 35185445863425LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = INT8_MAX;
	static uint64_t x94 = 25LLU;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = 11;

	t22 = ((x93/(x94^x95))/x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x97 = UINT32_MAX;
	int16_t x99 = INT16_MIN;

	t23 = ((x97/(x98^x99))/x100);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = -5;
	static uint64_t x103 = 3757467499LLU;
	volatile int32_t x104 = -1;
	volatile uint64_t t24 = 53995615LLU;

	t24 = ((x101/(x102^x103))/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = INT8_MIN;
	int8_t x108 = -5;
	volatile int32_t t25 = -2005722;

	t25 = ((x105/(x106^x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = 1412;
	volatile int32_t x115 = 46191;

	t26 = ((x113/(x114^x115))/x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = UINT64_MAX;
	volatile int8_t x118 = INT8_MAX;
	int64_t x119 = INT64_MIN;
	static volatile int16_t x120 = -92;

	t27 = ((x117/(x118^x119))/x120);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = INT32_MIN;
	volatile int8_t x122 = -1;
	volatile uint16_t x124 = UINT16_MAX;

	t28 = ((x121/(x122^x123))/x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -3774;
	uint64_t x126 = 1908LLU;
	static int8_t x127 = -10;
	int8_t x128 = -5;
	uint64_t t29 = 55LLU;

	t29 = ((x125/(x126^x127))/x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 2556029530364331299LLU;
	int32_t x134 = 90684;
	static int32_t x135 = -2469138;
	static volatile uint64_t t30 = 462497839510280LLU;

	t30 = ((x133/(x134^x135))/x136);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x137 = UINT64_MAX;
	static uint16_t x138 = UINT16_MAX;
	int32_t x139 = 3346;
	uint16_t x140 = 10585U;
	uint64_t t31 = 39469166366400927LLU;

	t31 = ((x137/(x138^x139))/x140);

	if (t31 != 28023042582LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = -1;
	static int64_t x142 = INT64_MAX;
	int16_t x144 = INT16_MIN;
	static volatile int64_t t32 = 3105019057086896LL;

	t32 = ((x141/(x142^x143))/x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x145 = -3;
	uint8_t x146 = UINT8_MAX;
	volatile int8_t x147 = INT8_MIN;

	t33 = ((x145/(x146^x147))/x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x149 = 1U;
	volatile uint16_t x150 = UINT16_MAX;
	int8_t x151 = INT8_MIN;
	volatile int64_t t34 = -1LL;

	t34 = ((x149/(x150^x151))/x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x154 = -1;
	volatile uint16_t x155 = 1U;
	static int16_t x156 = -13;
	uint32_t t35 = 244688U;

	t35 = ((x153/(x154^x155))/x156);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x158 = INT16_MIN;
	volatile uint32_t x159 = UINT32_MAX;
	uint32_t t36 = 175430U;

	t36 = ((x157/(x158^x159))/x160);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = 1;
	int64_t x162 = -6001149211637823LL;
	int8_t x163 = -1;
	volatile uint64_t t37 = 7661042138882819LLU;

	t37 = ((x161/(x162^x163))/x164);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MAX;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t38 = -619;

	t38 = ((x165/(x166^x167))/x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = UINT8_MAX;
	int16_t x170 = -1;
	int64_t x171 = INT64_MIN;
	int32_t x172 = -90377;
	volatile int64_t t39 = 17518503617504LL;

	t39 = ((x169/(x170^x171))/x172);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x173 = INT64_MIN;
	volatile uint32_t x175 = 1059995651U;
	static volatile int64_t t40 = 3253318439892486708LL;

	t40 = ((x173/(x174^x175))/x176);

	if (t40 != 8701330008LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x177 = 4LLU;
	static int8_t x178 = INT8_MIN;
	uint64_t x179 = 5780621178LLU;
	int32_t x180 = -1;
	volatile uint64_t t41 = 4153096804161932067LLU;

	t41 = ((x177/(x178^x179))/x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = -1;
	volatile uint16_t x182 = 248U;
	uint32_t x183 = 2U;
	volatile uint64_t t42 = 267936386152LLU;

	t42 = ((x181/(x182^x183))/x184);

	if (t42 != 452101LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -1;
	static uint8_t x186 = 14U;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t43 = -3815835;

	t43 = ((x185/(x186^x187))/x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x190 = 7LL;
	static uint16_t x191 = UINT16_MAX;
	int32_t x192 = 209862854;
	int64_t t44 = -626391598LL;

	t44 = ((x189/(x190^x191))/x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x198 = 406;
	int8_t x199 = INT8_MIN;
	volatile uint32_t x200 = 3084461U;
	uint64_t t45 = 13549359414577391LLU;

	t45 = ((x197/(x198^x199))/x200);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = -1;
	int32_t x202 = INT32_MIN;
	volatile uint16_t x203 = UINT16_MAX;
	volatile uint16_t x204 = 17U;

	t46 = ((x201/(x202^x203))/x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x205 = 46184749807LLU;
	volatile uint64_t x206 = 427403615766553366LLU;
	int8_t x207 = -53;
	int8_t x208 = -22;

	t47 = ((x205/(x206^x207))/x208);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x210 = 37U;
	uint64_t x211 = UINT64_MAX;
	static volatile int64_t x212 = INT64_MIN;

	t48 = ((x209/(x210^x211))/x212);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x215 = INT64_MIN;
	volatile int8_t x216 = 1;
	static int64_t t49 = 249536753332742692LL;

	t49 = ((x213/(x214^x215))/x216);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = INT64_MIN;
	static int32_t x218 = -1;
	static uint32_t x219 = 3825098U;
	static volatile int64_t t50 = 1LL;

	t50 = ((x217/(x218^x219))/x220);

	if (t50 != 2149397902LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x227 = INT64_MAX;
	int64_t x228 = -155LL;

	t51 = ((x225/(x226^x227))/x228);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x229 = -1;
	volatile uint64_t x230 = 4354175313509145787LLU;
	uint32_t x232 = UINT32_MAX;
	volatile uint64_t t52 = 169130152222195LLU;

	t52 = ((x229/(x230^x231))/x232);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = INT8_MIN;
	static int8_t x234 = -1;
	static int32_t x235 = INT32_MIN;
	int64_t t53 = -1991530345107120LL;

	t53 = ((x233/(x234^x235))/x236);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x238 = UINT8_MAX;
	static volatile int64_t t54 = -124796612493105LL;

	t54 = ((x237/(x238^x239))/x240);

	if (t54 != -225969452LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile int64_t t55 = 1LL;

	t55 = ((x241/(x242^x243))/x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x245 = 200170217U;
	volatile uint32_t x247 = UINT32_MAX;
	int32_t x248 = INT32_MAX;

	t56 = ((x245/(x246^x247))/x248);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x249 = 34U;
	int16_t x250 = -1;
	int32_t t57 = -48721368;

	t57 = ((x249/(x250^x251))/x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x257 = 8U;
	int32_t x258 = -1;
	volatile int16_t x259 = INT16_MAX;
	volatile int32_t x260 = 1089175;
	int32_t t58 = -7379;

	t58 = ((x257/(x258^x259))/x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = 1;
	int32_t x266 = -1;
	volatile uint64_t t59 = 1484003465LLU;

	t59 = ((x265/(x266^x267))/x268);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -18;
	int64_t x270 = -1LL;
	static int8_t x271 = INT8_MIN;
	int32_t x272 = -9;
	int64_t t60 = 5720004250582LL;

	t60 = ((x269/(x270^x271))/x272);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = -1;
	int64_t x274 = INT64_MIN;
	volatile int32_t x275 = -17189;
	uint16_t x276 = 894U;
	int64_t t61 = -2197427347399529927LL;

	t61 = ((x273/(x274^x275))/x276);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x278 = INT32_MIN;
	uint32_t x280 = UINT32_MAX;
	static int64_t t62 = 174192804633LL;

	t62 = ((x277/(x278^x279))/x280);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x281 = 4LLU;
	volatile uint32_t x282 = 40841312U;
	uint64_t t63 = 11898155437171LLU;

	t63 = ((x281/(x282^x283))/x284);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x286 = -1;
	volatile int64_t x287 = INT64_MIN;
	volatile int64_t t64 = 1LL;

	t64 = ((x285/(x286^x287))/x288);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x289 = 1U;
	uint16_t x290 = UINT16_MAX;
	static int16_t x291 = INT16_MIN;
	volatile uint8_t x292 = 13U;
	int32_t t65 = 0;

	t65 = ((x289/(x290^x291))/x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x293 = UINT64_MAX;
	static int16_t x294 = 7;
	static int16_t x296 = -5;
	uint64_t t66 = 1025021564256LLU;

	t66 = ((x293/(x294^x295))/x296);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x297 = INT16_MIN;
	uint16_t x298 = 12U;
	static uint16_t x299 = 1U;
	static volatile int32_t t67 = -255802;

	t67 = ((x297/(x298^x299))/x300);

	if (t67 != -9) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x302 = UINT64_MAX;
	int8_t x303 = 0;
	static int64_t x304 = INT64_MIN;
	static volatile uint64_t t68 = 1057670032LLU;

	t68 = ((x301/(x302^x303))/x304);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int8_t x311 = 47;

	t69 = ((x309/(x310^x311))/x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x316 = INT8_MAX;
	int64_t t70 = -106480905258LL;

	t70 = ((x313/(x314^x315))/x316);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x317 = 4144;
	volatile int32_t x318 = INT32_MAX;
	int32_t x319 = -11126;
	static int64_t t71 = 3428727382878LL;

	t71 = ((x317/(x318^x319))/x320);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MAX;
	int8_t x322 = -3;
	uint64_t x323 = UINT64_MAX;
	volatile int32_t x324 = -1;
	volatile uint64_t t72 = 31944548LLU;

	t72 = ((x321/(x322^x323))/x324);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x326 = -1819LL;
	volatile uint32_t x327 = 40U;
	volatile int64_t t73 = 14011809LL;

	t73 = ((x325/(x326^x327))/x328);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x329 = 110U;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = UINT16_MAX;
	static int8_t x332 = INT8_MIN;
	int32_t t74 = 1;

	t74 = ((x329/(x330^x331))/x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x333 = INT32_MIN;
	volatile int8_t x334 = INT8_MAX;
	int64_t x335 = -12488966901677385LL;
	uint16_t x336 = UINT16_MAX;
	int64_t t75 = 528527187339LL;

	t75 = ((x333/(x334^x335))/x336);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x337 = 235U;
	static uint64_t x338 = 2LLU;
	volatile uint16_t x339 = 20U;
	static volatile int16_t x340 = INT16_MAX;
	volatile uint64_t t76 = 1690751233794160LLU;

	t76 = ((x337/(x338^x339))/x340);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = -138872;
	static int8_t x342 = INT8_MAX;
	uint32_t x343 = UINT32_MAX;
	int8_t x344 = 1;
	uint32_t t77 = 379376U;

	t77 = ((x341/(x342^x343))/x344);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x345 = 6651705LLU;
	int64_t x347 = 11036494562LL;
	static volatile uint16_t x348 = 66U;
	uint64_t t78 = 145835473LLU;

	t78 = ((x345/(x346^x347))/x348);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x350 = 281U;
	int8_t x351 = 3;
	volatile int8_t x352 = 21;
	volatile int32_t t79 = -1856639;

	t79 = ((x349/(x350^x351))/x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MAX;
	static uint16_t x356 = 43U;

	t80 = ((x353/(x354^x355))/x356);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = INT64_MAX;
	uint16_t x358 = 462U;
	int8_t x359 = INT8_MAX;
	volatile uint64_t t81 = 6530832330LLU;

	t81 = ((x357/(x358^x359))/x360);

	if (t81 != 764LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x361 = 2;
	static int32_t x362 = 244;
	static volatile uint32_t x363 = UINT32_MAX;
	uint16_t x364 = UINT16_MAX;
	uint32_t t82 = 73065U;

	t82 = ((x361/(x362^x363))/x364);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x365 = 15363;
	static int64_t x366 = INT64_MIN;
	volatile uint64_t x367 = 1190LLU;
	int8_t x368 = -1;
	volatile uint64_t t83 = 6827410864439105LLU;

	t83 = ((x365/(x366^x367))/x368);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = -4791;
	int8_t x375 = INT8_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t84 = -28891612213442240LL;

	t84 = ((x373/(x374^x375))/x376);

	if (t84 != -446555LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = INT16_MAX;
	int32_t x379 = -1;
	int8_t x380 = -1;
	int32_t t85 = 450;

	t85 = ((x377/(x378^x379))/x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x382 = -1LL;
	volatile int8_t x383 = INT8_MAX;
	volatile int8_t x384 = 63;
	volatile int64_t t86 = 34342020237372LL;

	t86 = ((x381/(x382^x383))/x384);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = -1;
	int64_t x386 = INT64_MIN;
	static uint8_t x387 = UINT8_MAX;
	int64_t t87 = 2848296123LL;

	t87 = ((x385/(x386^x387))/x388);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x389 = UINT8_MAX;
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	uint64_t x392 = 1481LLU;
	uint64_t t88 = 403673456950831423LLU;

	t88 = ((x389/(x390^x391))/x392);

	if (t88 != 12455600319857900LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x393 = -49;
	volatile int64_t x394 = 1LL;
	uint16_t x395 = 2433U;
	uint32_t x396 = 381U;
	int64_t t89 = 25LL;

	t89 = ((x393/(x394^x395))/x396);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x397 = -227861639LL;
	int16_t x398 = 0;
	uint32_t x399 = 3949853U;
	volatile uint8_t x400 = 32U;
	static int64_t t90 = 6182860278081LL;

	t90 = ((x397/(x398^x399))/x400);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = INT64_MIN;
	uint8_t x403 = UINT8_MAX;
	int16_t x404 = -1;
	static int64_t t91 = 250499377999460522LL;

	t91 = ((x401/(x402^x403))/x404);

	if (t91 != 401048869716LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = 1783588876LLU;
	volatile int16_t x406 = 62;
	int8_t x407 = INT8_MIN;
	uint64_t t92 = 819841454524085906LLU;

	t92 = ((x405/(x406^x407))/x408);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MIN;
	int64_t x410 = INT64_MIN;
	uint16_t x411 = 46U;
	static uint16_t x412 = 82U;
	volatile int64_t t93 = 29031896871134607LL;

	t93 = ((x409/(x410^x411))/x412);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x413 = 34U;
	uint16_t x414 = UINT16_MAX;
	int64_t x415 = INT64_MAX;
	volatile int64_t t94 = 24698374200608LL;

	t94 = ((x413/(x414^x415))/x416);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x417 = UINT8_MAX;
	uint32_t x419 = 0U;
	static int64_t x420 = INT64_MIN;
	volatile int64_t t95 = -6850879719164146LL;

	t95 = ((x417/(x418^x419))/x420);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x421 = 6588U;
	uint16_t x422 = 8U;
	static int64_t x423 = -304LL;
	int32_t x424 = -1;
	static int64_t t96 = 8LL;

	t96 = ((x421/(x422^x423))/x424);

	if (t96 != 22LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x425 = 183526836186369LLU;
	uint16_t x426 = UINT16_MAX;
	int16_t x427 = -4;
	uint16_t x428 = 25U;

	t97 = ((x425/(x426^x427))/x428);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = INT64_MAX;
	static int8_t x430 = -2;
	static uint8_t x431 = 1U;
	volatile int16_t x432 = INT16_MIN;
	volatile int64_t t98 = 978160031728812814LL;

	t98 = ((x429/(x430^x431))/x432);

	if (t98 != 281474976710655LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x433 = UINT8_MAX;
	uint8_t x434 = 38U;
	int16_t x435 = -1;
	int32_t x436 = INT32_MAX;
	int32_t t99 = -12590;

	t99 = ((x433/(x434^x435))/x436);

	if (t99 != 0) { NG(); } else { ; }
	
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

