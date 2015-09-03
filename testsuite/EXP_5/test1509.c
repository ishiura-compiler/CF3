#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 24U;
volatile int32_t x6 = INT32_MIN;
uint32_t x8 = 465865U;
uint16_t x10 = 2U;
int32_t x14 = -849;
volatile int32_t t3 = -640134;
static int64_t t5 = 0LL;
static int8_t x40 = INT8_MIN;
int8_t x44 = 0;
volatile int8_t x45 = 1;
uint16_t x51 = 0U;
static int8_t x58 = -1;
uint64_t t12 = 88101538241875025LLU;
static int8_t x61 = 41;
uint16_t x64 = 1912U;
int32_t x65 = INT32_MAX;
int8_t x68 = -1;
volatile int64_t x70 = -3989651643LL;
int32_t x74 = INT32_MIN;
int64_t x76 = -18596232690999LL;
int64_t t16 = -8266642LL;
static uint32_t t17 = 27U;
static int16_t x92 = -1;
volatile int8_t x96 = INT8_MIN;
int32_t x102 = 15812741;
static uint32_t x103 = UINT32_MAX;
volatile int64_t x104 = -1LL;
volatile int32_t t29 = -14445244;
int32_t x139 = 5945;
int8_t x165 = 1;
uint8_t x167 = UINT8_MAX;
uint8_t x169 = UINT8_MAX;
int32_t x172 = INT32_MIN;
uint64_t x173 = 418714678557LLU;
uint64_t t37 = 118201518271LLU;
uint64_t x181 = 4387758160185185594LLU;
int8_t x183 = 0;
uint64_t x187 = 8786377LLU;
int8_t x189 = -5;
uint32_t x192 = UINT32_MAX;
volatile uint32_t t41 = 1814U;
uint64_t x194 = UINT64_MAX;
uint16_t x196 = 2U;
uint16_t x197 = 24U;
uint64_t x200 = 2270LLU;
uint16_t x201 = UINT16_MAX;
uint16_t x203 = UINT16_MAX;
volatile uint64_t t45 = 0LLU;
uint64_t x218 = 15750804213198LLU;
int32_t x233 = -3;
uint8_t x234 = 3U;
static int32_t t51 = 21;
volatile uint16_t x237 = UINT16_MAX;
int64_t t54 = -18064230LL;
uint8_t x258 = UINT8_MAX;
int16_t x259 = -138;
static int32_t x261 = -13028;
volatile int32_t x263 = -463026628;
uint64_t x264 = UINT64_MAX;
uint64_t t57 = 354739LLU;
int8_t x270 = -1;
static volatile int32_t t59 = 16;
uint64_t t62 = 8100813732506758LLU;
int8_t x287 = INT8_MAX;
static volatile int32_t x295 = INT32_MIN;
int8_t x302 = INT8_MIN;
int8_t x315 = INT8_MIN;
volatile uint32_t t68 = 6U;
volatile int64_t t69 = 15307390003LL;
uint8_t x331 = 57U;
volatile uint64_t x344 = UINT64_MAX;
int64_t x349 = INT64_MIN;
int16_t x350 = -1;
int8_t x351 = INT8_MIN;
volatile int32_t t77 = 2034439;
int64_t x357 = 2741872550LL;
static int64_t t79 = 1438161318484560773LL;
uint8_t x372 = 54U;
int64_t x388 = -1LL;
int64_t t84 = -28394501491483534LL;
uint16_t x405 = 272U;
volatile int64_t x406 = INT64_MIN;
volatile int16_t x410 = INT16_MAX;
int64_t x414 = 1763689465LL;
int64_t t91 = -545554460647532LL;
int16_t x419 = -1;
int16_t x427 = -1;
int64_t t94 = 0LL;
uint64_t t95 = 254174724LLU;
int16_t x435 = INT16_MIN;
int32_t x437 = INT32_MIN;
int32_t x443 = 7414;
uint32_t x448 = 40U;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	static uint64_t x2 = UINT64_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 3423594521966242165LL;

	t0 = (x1+((x2<x3)^x4));

	if (t0 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 598751245350LLU;
	static int32_t x7 = -3597;
	uint64_t t1 = 4LLU;

	t1 = (x5+((x6<x7)^x8));

	if (t1 != 598751711214LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x11 = -1;
	static int8_t x12 = 1;
	volatile int32_t t2 = -8161166;

	t2 = (x9+((x10<x11)^x12));

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 2U;
	uint16_t x15 = UINT16_MAX;
	int8_t x16 = INT8_MIN;

	t3 = (x13+((x14<x15)^x16));

	if (t3 != -125) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	int16_t x23 = INT16_MIN;
	static volatile uint32_t x24 = 34209U;
	uint32_t t4 = 379156224U;

	t4 = (x21+((x22<x23)^x24));

	if (t4 != 2147517857U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -80929LL;
	uint64_t x30 = 121LLU;
	int32_t x31 = INT32_MIN;
	static int16_t x32 = INT16_MIN;

	t5 = (x29+((x30<x31)^x32));

	if (t5 != -113696LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x33 = UINT16_MAX;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	uint64_t t6 = 8796545LLU;

	t6 = (x33+((x34<x35)^x36));

	if (t6 != 65534LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int8_t x39 = -1;
	static int32_t t7 = 188725;

	t7 = (x37+((x38<x39)^x40));

	if (t7 != -255) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	int64_t x42 = 60508603460LL;
	int16_t x43 = -3;
	int32_t t8 = 72924795;

	t8 = (x41+((x42<x43)^x44));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x46 = 8509255094569LL;
	int32_t x47 = 6;
	uint8_t x48 = 39U;
	int32_t t9 = -1;

	t9 = (x45+((x46<x47)^x48));

	if (t9 != 40) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x49 = -1;
	uint64_t x50 = 84797179LLU;
	int64_t x52 = INT64_MAX;
	volatile int64_t t10 = 767847020245054037LL;

	t10 = (x49+((x50<x51)^x52));

	if (t10 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 6784U;
	static volatile int16_t x54 = INT16_MAX;
	uint32_t x55 = 8U;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t11 = -3615;

	t11 = (x53+((x54<x55)^x56));

	if (t11 != 6656) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 26493300U;
	static int64_t x59 = -64303LL;
	uint64_t x60 = 313339889314451085LLU;

	t12 = (x57+((x58<x59)^x60));

	if (t12 != 313339889340944385LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MIN;
	static volatile int64_t x63 = 8570897184619LL;
	static volatile int32_t t13 = -5332;

	t13 = (x61+((x62<x63)^x64));

	if (t13 != 1954) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x66 = 8LLU;
	volatile int64_t x67 = -1LL;
	volatile int32_t t14 = 21707;

	t14 = (x65+((x66<x67)^x68));

	if (t14 != 2147483645) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 0LLU;
	uint8_t x71 = 6U;
	volatile int16_t x72 = -991;
	static uint64_t t15 = 3521911205552041LLU;

	t15 = (x69+((x70<x71)^x72));

	if (t15 != 18446744073709550624LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x73 = 3973U;
	uint32_t x75 = 70U;

	t16 = (x73+((x74<x75)^x76));

	if (t16 != -18596232687026LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x77 = 64U;
	int16_t x78 = 0;
	static uint64_t x79 = 3554979864910098LLU;
	static uint8_t x80 = UINT8_MAX;

	t17 = (x77+((x78<x79)^x80));

	if (t17 != 318U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = UINT32_MAX;
	volatile uint64_t x82 = 408147138117721379LLU;
	uint64_t x83 = 1714851LLU;
	static volatile int32_t x84 = INT32_MIN;
	volatile uint32_t t18 = 933172131U;

	t18 = (x81+((x82<x83)^x84));

	if (t18 != 2147483647U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MAX;
	uint64_t x86 = UINT64_MAX;
	uint16_t x87 = 13U;
	volatile int64_t x88 = INT64_MIN;
	volatile int64_t t19 = 305LL;

	t19 = (x85+((x86<x87)^x88));

	if (t19 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x89 = INT64_MAX;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = INT16_MAX;
	int64_t t20 = 389507400060864LL;

	t20 = (x89+((x90<x91)^x92));

	if (t20 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x93 = -1LL;
	uint64_t x94 = UINT64_MAX;
	int8_t x95 = INT8_MIN;
	int64_t t21 = 1266916954359381LL;

	t21 = (x93+((x94<x95)^x96));

	if (t21 != -129LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	int16_t x100 = 64;
	volatile int64_t t22 = 8LL;

	t22 = (x97+((x98<x99)^x100));

	if (t22 != -9223372036854775744LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = 13;
	static int64_t t23 = 141LL;

	t23 = (x101+((x102<x103)^x104));

	if (t23 != 11LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = -1;
	int16_t x106 = -118;
	int16_t x107 = -1;
	int64_t x108 = -1LL;
	static int64_t t24 = -10LL;

	t24 = (x105+((x106<x107)^x108));

	if (t24 != -3LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x109 = 16113LLU;
	volatile int32_t x110 = INT32_MIN;
	int64_t x111 = -1185796521289LL;
	int8_t x112 = 2;
	volatile uint64_t t25 = 17859816962769LLU;

	t25 = (x109+((x110<x111)^x112));

	if (t25 != 16115LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 29LLU;
	static volatile int32_t x118 = INT32_MIN;
	int64_t x119 = INT64_MAX;
	volatile uint8_t x120 = 25U;
	uint64_t t26 = 2267822660361720828LLU;

	t26 = (x117+((x118<x119)^x120));

	if (t26 != 53LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = 360896918LL;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	static uint32_t x124 = UINT32_MAX;
	int64_t t27 = 2LL;

	t27 = (x121+((x122<x123)^x124));

	if (t27 != 4655864213LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = -1LL;
	int32_t x126 = -149;
	uint16_t x127 = UINT16_MAX;
	int32_t x128 = 1;
	static volatile int64_t t28 = -42305313445LL;

	t28 = (x125+((x126<x127)^x128));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = 36U;
	int16_t x134 = -14578;
	int16_t x135 = INT16_MAX;
	volatile int32_t x136 = -1572;

	t29 = (x133+((x134<x135)^x136));

	if (t29 != -1535) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x137 = INT32_MIN;
	int32_t x138 = -36;
	volatile uint16_t x140 = 368U;
	static volatile int32_t t30 = 463689079;

	t30 = (x137+((x138<x139)^x140));

	if (t30 != -2147483279) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x141 = 0U;
	volatile uint32_t x142 = 1983629U;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;
	int32_t t31 = -602544;

	t31 = (x141+((x142<x143)^x144));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x149 = -68997522LL;
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MAX;
	int32_t x152 = INT32_MAX;
	int64_t t32 = -351784636071LL;

	t32 = (x149+((x150<x151)^x152));

	if (t32 != 2078486124LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = UINT64_MAX;
	volatile int32_t x158 = INT32_MIN;
	int16_t x159 = 24;
	int32_t x160 = 7;
	uint64_t t33 = 27350LLU;

	t33 = (x157+((x158<x159)^x160));

	if (t33 != 5LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = INT8_MIN;
	static int16_t x162 = -802;
	int16_t x163 = -1;
	int8_t x164 = 0;
	int32_t t34 = -1;

	t34 = (x161+((x162<x163)^x164));

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x166 = 52U;
	int16_t x168 = 40;
	int32_t t35 = -86;

	t35 = (x165+((x166<x167)^x168));

	if (t35 != 42) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x170 = INT8_MIN;
	uint16_t x171 = UINT16_MAX;
	int32_t t36 = -14;

	t36 = (x169+((x170<x171)^x172));

	if (t36 != -2147483392) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x174 = -1;
	uint32_t x175 = 388680327U;
	static int8_t x176 = INT8_MIN;

	t37 = (x173+((x174<x175)^x176));

	if (t37 != 418714678429LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = UINT16_MAX;
	int16_t x178 = -601;
	static int8_t x179 = INT8_MIN;
	int8_t x180 = -16;
	int32_t t38 = 18918157;

	t38 = (x177+((x178<x179)^x180));

	if (t38 != 65520) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x182 = -6806078117702LL;
	int8_t x184 = INT8_MIN;
	uint64_t t39 = 2087LLU;

	t39 = (x181+((x182<x183)^x184));

	if (t39 != 4387758160185185467LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = -1;
	int8_t x186 = INT8_MIN;
	static int32_t x188 = -1;
	volatile int32_t t40 = 28733;

	t40 = (x185+((x186<x187)^x188));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x190 = 4;
	int8_t x191 = 0;

	t41 = (x189+((x190<x191)^x192));

	if (t41 != 4294967290U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 142519889545928LLU;
	static int64_t x195 = INT64_MIN;
	volatile uint64_t t42 = 29096165266LLU;

	t42 = (x193+((x194<x195)^x196));

	if (t42 != 142519889545930LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x198 = -10;
	int64_t x199 = INT64_MAX;
	volatile uint64_t t43 = 165059LLU;

	t43 = (x197+((x198<x199)^x200));

	if (t43 != 2295LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x202 = -1;
	static uint16_t x204 = UINT16_MAX;
	static volatile int32_t t44 = -30;

	t44 = (x201+((x202<x203)^x204));

	if (t44 != 131069) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 2181858LLU;
	int32_t x206 = INT32_MIN;
	int16_t x207 = -394;
	static int32_t x208 = INT32_MIN;

	t45 = (x205+((x206<x207)^x208));

	if (t45 != 18446744071564249827LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = 3U;
	static volatile int8_t x210 = 17;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	volatile int64_t t46 = -101588899379501208LL;

	t46 = (x209+((x210<x211)^x212));

	if (t46 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x214 = INT32_MIN;
	uint8_t x215 = 3U;
	uint8_t x216 = 31U;
	static volatile int32_t t47 = 0;

	t47 = (x213+((x214<x215)^x216));

	if (t47 != 285) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = 112218838219268234LLU;
	volatile int8_t x219 = 10;
	volatile int16_t x220 = 6557;
	uint64_t t48 = 6330376059453523506LLU;

	t48 = (x217+((x218<x219)^x220));

	if (t48 != 112218838219274791LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x221 = UINT64_MAX;
	uint8_t x222 = UINT8_MAX;
	volatile uint8_t x223 = UINT8_MAX;
	uint8_t x224 = 41U;
	uint64_t t49 = 3274967757LLU;

	t49 = (x221+((x222<x223)^x224));

	if (t49 != 40LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = -1;
	int64_t x226 = INT64_MIN;
	int8_t x227 = -1;
	int64_t x228 = INT64_MIN;
	int64_t t50 = INT64_MIN;

	t50 = (x225+((x226<x227)^x228));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x235 = 26859LLU;
	int16_t x236 = -3;

	t51 = (x233+((x234<x235)^x236));

	if (t51 != -7) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x238 = 5U;
	static uint16_t x239 = 1624U;
	int32_t x240 = INT32_MIN;
	int32_t t52 = -114520539;

	t52 = (x237+((x238<x239)^x240));

	if (t52 != -2147418112) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = -31LL;
	static uint32_t x242 = 70156329U;
	static int8_t x243 = INT8_MAX;
	int16_t x244 = INT16_MAX;
	int64_t t53 = -5999794867101LL;

	t53 = (x241+((x242<x243)^x244));

	if (t53 != 32736LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x245 = -1954911LL;
	volatile int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	volatile uint16_t x248 = 10U;

	t54 = (x245+((x246<x247)^x248));

	if (t54 != -1954900LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x253 = 3U;
	int64_t x254 = 2665504964608798LL;
	volatile int8_t x255 = 5;
	int8_t x256 = INT8_MAX;
	volatile int32_t t55 = 108588411;

	t55 = (x253+((x254<x255)^x256));

	if (t55 != 130) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x257 = 0U;
	uint32_t x260 = 26278061U;
	uint32_t t56 = 29915U;

	t56 = (x257+((x258<x259)^x260));

	if (t56 != 26278061U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x262 = 15;

	t57 = (x261+((x262<x263)^x264));

	if (t57 != 18446744073709538587LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x265 = -1LL;
	static int8_t x266 = 1;
	int64_t x267 = 105443LL;
	int64_t x268 = INT64_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (x265+((x266<x267)^x268));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = INT8_MIN;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = -45;

	t59 = (x269+((x270<x271)^x272));

	if (t59 != -174) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = -1;
	volatile uint64_t x275 = 105907919LLU;
	int16_t x276 = INT16_MAX;
	int32_t t60 = 858;

	t60 = (x273+((x274<x275)^x276));

	if (t60 != 32639) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x277 = 123U;
	volatile int8_t x278 = -39;
	int64_t x279 = -1LL;
	int8_t x280 = -1;
	volatile int32_t t61 = -490981315;

	t61 = (x277+((x278<x279)^x280));

	if (t61 != 121) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x281 = 705411865697LLU;
	uint8_t x282 = UINT8_MAX;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = INT64_MAX;

	t62 = (x281+((x282<x283)^x284));

	if (t62 != 9223372742266641503LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x285 = 38533531498384554LLU;
	int32_t x286 = INT32_MIN;
	static volatile uint32_t x288 = 2055882125U;
	volatile uint64_t t63 = 3957411952664138190LLU;

	t63 = (x285+((x286<x287)^x288));

	if (t63 != 38533533554266678LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x289 = INT8_MAX;
	int32_t x290 = -1;
	int32_t x291 = INT32_MAX;
	volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t64 = 2239;

	t64 = (x289+((x290<x291)^x292));

	if (t64 != 65661) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x293 = INT32_MIN;
	uint32_t x294 = 21U;
	int32_t x296 = INT32_MAX;
	volatile int32_t t65 = 61796;

	t65 = (x293+((x294<x295)^x296));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = INT16_MIN;
	static volatile int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t66 = -8758;

	t66 = (x301+((x302<x303)^x304));

	if (t66 != -65536) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MAX;
	uint8_t x307 = UINT8_MAX;
	uint8_t x308 = 11U;
	int32_t t67 = 20019;

	t67 = (x305+((x306<x307)^x308));

	if (t67 != -2147483638) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 6U;
	int8_t x314 = -1;
	int32_t x316 = INT32_MAX;

	t68 = (x313+((x314<x315)^x316));

	if (t68 != 2147483653U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = INT32_MAX;
	int8_t x318 = -1;
	int32_t x319 = INT32_MIN;
	static int64_t x320 = INT64_MIN;

	t69 = (x317+((x318<x319)^x320));

	if (t69 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x322 = 246020743502286LL;
	int16_t x323 = -1;
	int64_t x324 = -1LL;
	uint64_t t70 = 171832340LLU;

	t70 = (x321+((x322<x323)^x324));

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = INT32_MIN;
	uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 234LLU;
	uint64_t x328 = UINT64_MAX;
	uint64_t t71 = 34035734375760LLU;

	t71 = (x325+((x326<x327)^x328));

	if (t71 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x329 = INT64_MAX;
	uint16_t x330 = UINT16_MAX;
	int8_t x332 = -1;
	volatile int64_t t72 = 2971858795008LL;

	t72 = (x329+((x330<x331)^x332));

	if (t72 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = 220704809;
	int8_t x334 = -30;
	static int16_t x335 = -1;
	int32_t x336 = INT32_MIN;
	volatile int32_t t73 = -3027884;

	t73 = (x333+((x334<x335)^x336));

	if (t73 != -1926778838) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x337 = 1633856878U;
	int8_t x338 = INT8_MIN;
	volatile int32_t x339 = 17060;
	volatile uint32_t x340 = UINT32_MAX;
	uint32_t t74 = 3U;

	t74 = (x337+((x338<x339)^x340));

	if (t74 != 1633856876U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x341 = 247LLU;
	static int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MIN;
	volatile uint64_t t75 = 4358843006566LLU;

	t75 = (x341+((x342<x343)^x344));

	if (t75 != 246LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x352 = INT16_MAX;
	volatile int64_t t76 = -32LL;

	t76 = (x349+((x350<x351)^x352));

	if (t76 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x353 = UINT8_MAX;
	uint16_t x354 = 75U;
	volatile int64_t x355 = 500566321LL;
	uint8_t x356 = 2U;

	t77 = (x353+((x354<x355)^x356));

	if (t77 != 258) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x358 = UINT16_MAX;
	int8_t x359 = INT8_MIN;
	int16_t x360 = -1;
	static volatile int64_t t78 = 492187432413LL;

	t78 = (x357+((x358<x359)^x360));

	if (t78 != 2741872549LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = 675251261585LL;
	int64_t x362 = -1939029067937810474LL;
	int32_t x363 = -1;
	static int64_t x364 = -284LL;

	t79 = (x361+((x362<x363)^x364));

	if (t79 != 675251261302LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x369 = 0;
	static int8_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int32_t t80 = -54;

	t80 = (x369+((x370<x371)^x372));

	if (t80 != 54) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x373 = -46;
	volatile int8_t x374 = -41;
	int16_t x375 = -1;
	volatile int64_t x376 = INT64_MAX;
	int64_t t81 = -173LL;

	t81 = (x373+((x374<x375)^x376));

	if (t81 != 9223372036854775760LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = -1LL;
	static int16_t x378 = INT16_MIN;
	int32_t x379 = -163;
	int16_t x380 = -1;
	static int64_t t82 = -5089220726086454LL;

	t82 = (x377+((x378<x379)^x380));

	if (t82 != -3LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x381 = 180636U;
	int32_t x382 = INT32_MIN;
	int32_t x383 = 514752;
	volatile int32_t x384 = -91074;
	uint32_t t83 = 1U;

	t83 = (x381+((x382<x383)^x384));

	if (t83 != 89563U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x385 = 603;
	volatile int8_t x386 = INT8_MIN;
	int8_t x387 = -1;

	t84 = (x385+((x386<x387)^x388));

	if (t84 != 601LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x389 = UINT16_MAX;
	volatile uint64_t x390 = 423761858626LLU;
	static uint64_t x391 = 3028LLU;
	volatile int8_t x392 = -56;
	volatile int32_t t85 = -63;

	t85 = (x389+((x390<x391)^x392));

	if (t85 != 65479) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x394 = -2444989822171968LL;
	static volatile uint64_t x395 = 3880646755427903LLU;
	volatile uint16_t x396 = 521U;
	uint64_t t86 = 6122LLU;

	t86 = (x393+((x394<x395)^x396));

	if (t86 != 520LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x397 = UINT16_MAX;
	int16_t x398 = -1;
	volatile int16_t x399 = -753;
	int64_t x400 = -1LL;
	int64_t t87 = 160369910LL;

	t87 = (x397+((x398<x399)^x400));

	if (t87 != 65534LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = -1;
	static int64_t x402 = INT64_MIN;
	int32_t x403 = -4268;
	uint64_t x404 = 32574754853293057LLU;
	static uint64_t t88 = 1401LLU;

	t88 = (x401+((x402<x403)^x404));

	if (t88 != 32574754853293055LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x407 = INT64_MIN;
	static int16_t x408 = -1;
	int32_t t89 = -428;

	t89 = (x405+((x406<x407)^x408));

	if (t89 != 271) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x409 = 98U;
	int16_t x411 = INT16_MAX;
	uint16_t x412 = 4U;
	int32_t t90 = -492;

	t90 = (x409+((x410<x411)^x412));

	if (t90 != 102) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = -32369LL;
	int16_t x415 = -5118;
	int32_t x416 = 0;

	t91 = (x413+((x414<x415)^x416));

	if (t91 != -32369LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x417 = 4961541;
	volatile int16_t x418 = INT16_MAX;
	int64_t x420 = -1LL;
	int64_t t92 = 358LL;

	t92 = (x417+((x418<x419)^x420));

	if (t92 != 4961540LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = INT32_MIN;
	volatile uint64_t x422 = 61113577205031470LLU;
	int32_t x423 = INT32_MAX;
	int64_t x424 = -5850968236877LL;
	int64_t t93 = 3605734819867927244LL;

	t93 = (x421+((x422<x423)^x424));

	if (t93 != -5853115720525LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x425 = 0U;
	int8_t x426 = INT8_MIN;
	static int64_t x428 = INT64_MIN;

	t94 = (x425+((x426<x427)^x428));

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x429 = 13LLU;
	int8_t x430 = -9;
	int32_t x431 = -1;
	int8_t x432 = INT8_MIN;

	t95 = (x429+((x430<x431)^x432));

	if (t95 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x433 = 4LLU;
	volatile int16_t x434 = -9607;
	int16_t x436 = INT16_MAX;
	uint64_t t96 = 3928561LLU;

	t96 = (x433+((x434<x435)^x436));

	if (t96 != 32771LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x438 = INT64_MAX;
	uint8_t x439 = 1U;
	static uint64_t x440 = 2260LLU;
	volatile uint64_t t97 = 397LLU;

	t97 = (x437+((x438<x439)^x440));

	if (t97 != 18446744071562070228LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = INT8_MIN;
	uint8_t x442 = 6U;
	static volatile int8_t x444 = INT8_MAX;
	int32_t t98 = 30112101;

	t98 = (x441+((x442<x443)^x444));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = -3000891629606LL;
	int32_t x446 = INT32_MAX;
	volatile uint8_t x447 = UINT8_MAX;
	volatile int64_t t99 = -10837064LL;

	t99 = (x445+((x446<x447)^x448));

	if (t99 != -3000891629566LL) { NG(); } else { ; }
	
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

