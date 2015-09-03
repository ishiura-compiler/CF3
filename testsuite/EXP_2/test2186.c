#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int64_t x12 = 596849452LL;
volatile int16_t x13 = 688;
static int32_t x15 = INT32_MIN;
int32_t x32 = INT32_MAX;
int16_t x39 = -1;
volatile int64_t x41 = 2336992LL;
uint32_t x48 = 441817U;
volatile uint8_t x52 = UINT8_MAX;
uint64_t x57 = 4180826809LLU;
static int64_t x69 = -568227LL;
static int8_t x72 = -1;
uint16_t x76 = UINT16_MAX;
uint8_t x77 = 4U;
volatile int16_t x80 = INT16_MIN;
int64_t x83 = INT64_MIN;
int8_t x85 = 30;
uint64_t x87 = 855611232137543114LLU;
int64_t x89 = INT64_MIN;
uint64_t t21 = 400099549389LLU;
int64_t x108 = INT64_MAX;
static volatile int16_t x109 = INT16_MIN;
volatile int64_t x111 = INT64_MIN;
int8_t x116 = INT8_MAX;
volatile int16_t x117 = INT16_MAX;
static volatile int8_t x118 = INT8_MAX;
int64_t x120 = INT64_MAX;
uint64_t x121 = 389896LLU;
uint64_t x130 = 271448058808LLU;
int32_t x131 = -1;
static uint16_t x142 = UINT16_MAX;
static volatile uint64_t t34 = 7792LLU;
int16_t x155 = INT16_MAX;
static volatile uint32_t t35 = 953U;
uint32_t x158 = UINT32_MAX;
uint32_t t36 = 1U;
uint16_t x162 = 212U;
uint8_t x174 = 60U;
int8_t x175 = -1;
static uint64_t x176 = 221LLU;
int8_t x182 = -1;
uint8_t x193 = UINT8_MAX;
int8_t x196 = 14;
uint32_t x197 = UINT32_MAX;
uint64_t x200 = UINT64_MAX;
static int16_t x203 = 78;
int64_t x207 = -4716545104501LL;
uint32_t x212 = UINT32_MAX;
uint8_t x214 = 14U;
int64_t x220 = 30967LL;
uint64_t t52 = 1127116041LLU;
uint8_t x231 = 1U;
static uint32_t x234 = 6644955U;
volatile int8_t x236 = INT8_MAX;
static volatile uint32_t t55 = 721U;
volatile uint64_t x244 = 46181194168LLU;
int8_t x254 = INT8_MIN;
int32_t x255 = 73069;
static int32_t t57 = 6;
int16_t x257 = INT16_MIN;
int32_t x258 = INT32_MAX;
int8_t x260 = INT8_MIN;
int8_t x262 = INT8_MIN;
static uint16_t x264 = UINT16_MAX;
volatile uint32_t t60 = 821U;
int32_t x270 = INT32_MIN;
static volatile uint16_t x273 = 6036U;
uint32_t x277 = 50U;
int16_t x284 = -1;
static int16_t x287 = -1;
int32_t x289 = INT32_MIN;
int32_t t66 = 11989;
volatile int32_t x293 = -88;
int8_t x297 = -2;
int32_t x298 = -8150028;
volatile int64_t t70 = 31555900474821487LL;
int16_t x310 = INT16_MIN;
uint32_t x312 = UINT32_MAX;
volatile uint32_t t71 = 22374U;
volatile uint64_t t72 = 33026625LLU;
int16_t x320 = -1;
volatile uint32_t x321 = 246U;
int8_t x346 = -1;
uint32_t x353 = UINT32_MAX;
volatile uint32_t t81 = 2633483U;
uint32_t x360 = 137207391U;
uint32_t t82 = 1061136958U;
int64_t x362 = 1443789689051357LL;
static volatile uint64_t t83 = 9884LLU;
uint16_t x374 = UINT16_MAX;
static int8_t x375 = -1;
int16_t x377 = -904;
volatile uint64_t t86 = 11592LLU;
static int16_t x385 = INT16_MIN;
static volatile uint64_t t88 = 15803LLU;
int16_t x391 = 9268;
static int8_t x392 = INT8_MIN;
volatile int64_t t89 = -14395312LL;
int16_t x393 = INT16_MAX;
int16_t x395 = -1;
int64_t x396 = 154303376LL;
static volatile int8_t x401 = -1;
int64_t x407 = -1LL;
volatile int64_t t93 = -21LL;
uint32_t x410 = 5U;
static int64_t t95 = -1740427LL;
static int64_t x418 = INT64_MIN;
int16_t x419 = 1;
uint8_t x420 = UINT8_MAX;
int8_t x426 = -2;
static uint8_t x431 = UINT8_MAX;
static uint32_t x432 = UINT32_MAX;
uint64_t t99 = 191588582919LLU;


void f0(void) {
	uint16_t x1 = 4U;
	int32_t x2 = -1;
	int64_t x3 = 165LL;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int64_t t0 = -10850079350202LL;

	t0 = ((x1^(x2^x3))-x4);

	if (t0 != -417LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 120U;
	volatile int8_t x7 = INT8_MAX;
	static uint64_t x8 = 5012212751186206LLU;
	static uint64_t t1 = 400780926378LLU;

	t1 = ((x5^(x6^x7))-x8);

	if (t1 != 18441731860958365289LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 124U;
	static int8_t x10 = -1;
	volatile uint8_t x11 = 14U;
	int64_t t2 = -188657841LL;

	t2 = ((x9^(x10^x11))-x12);

	if (t2 != -596849567LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -1;
	int64_t x16 = -1LL;
	volatile int64_t t3 = 14562591572775LL;

	t3 = ((x13^(x14^x15))-x16);

	if (t3 != 2147482960LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	static int16_t x18 = -1;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = 907283935U;
	static uint64_t t4 = 10995072829309500LLU;

	t4 = ((x17^(x18^x19))-x20);

	if (t4 != 18446744072802234913LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int32_t x22 = INT32_MAX;
	static uint32_t x23 = 19618U;
	int32_t x24 = -258493;
	int64_t t5 = -6LL;

	t5 = ((x21^(x22^x23))-x24);

	if (t5 != -9223372034707053286LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	uint32_t x30 = 569272873U;
	static volatile int64_t x31 = -6583548822899LL;
	volatile uint64_t t6 = 395156LLU;

	t6 = ((x29^(x30^x31))-x32);

	if (t6 != 6581969792860LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = 4031082956464217140LLU;
	int16_t x34 = INT16_MIN;
	uint32_t x35 = 23U;
	uint16_t x36 = 3U;
	uint64_t t7 = 1LLU;

	t7 = ((x33^(x34^x35))-x36);

	if (t7 != 4031082957531896864LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	volatile uint16_t x38 = 947U;
	int8_t x40 = INT8_MIN;
	static int32_t t8 = 1768417;

	t8 = ((x37^(x38^x39))-x40);

	if (t8 != 31948) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x42 = UINT16_MAX;
	static volatile int8_t x43 = INT8_MIN;
	int8_t x44 = -1;
	volatile int64_t t9 = 17LL;

	t9 = ((x41^(x42^x43))-x44);

	if (t9 != -2316128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 10;
	volatile int64_t x46 = 1980730221113258170LL;
	uint16_t x47 = 117U;
	int64_t t10 = -29LL;

	t10 = ((x45^(x46^x47))-x48);

	if (t10 != 1980730221112816364LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	int16_t x51 = 1996;
	volatile int32_t t11 = 243064736;

	t11 = ((x49^(x50^x51))-x52);

	if (t11 != 2147452621) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = -1;
	int16_t x55 = 1;
	static int64_t x56 = 225191LL;
	volatile int64_t t12 = 96168601LL;

	t12 = ((x53^(x54^x55))-x56);

	if (t12 != -257958LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	int8_t x60 = -1;
	uint64_t t13 = 10LLU;

	t13 = ((x57^(x58^x59))-x60);

	if (t13 != 2261637818LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	uint8_t x62 = 1U;
	static volatile uint16_t x63 = 1U;
	static volatile uint32_t x64 = 217246239U;
	volatile uint64_t t14 = 17794922611LLU;

	t14 = ((x61^(x62^x63))-x64);

	if (t14 != 18446744073492305376LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = INT32_MIN;
	volatile uint32_t x66 = 5U;
	uint16_t x67 = 5240U;
	int16_t x68 = INT16_MIN;
	uint32_t t15 = 41854823U;

	t15 = ((x65^(x66^x67))-x68);

	if (t15 != 2147521661U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -1;
	uint8_t x71 = 4U;
	volatile int64_t t16 = 40419LL;

	t16 = ((x69^(x70^x71))-x72);

	if (t16 != 568231LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = -7;
	uint16_t x74 = 1U;
	volatile int32_t x75 = INT32_MIN;
	volatile int32_t t17 = -1;

	t17 = ((x73^(x74^x75))-x76);

	if (t17 != 2147418105) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x78 = -1;
	volatile uint16_t x79 = 11U;
	int32_t t18 = -7384;

	t18 = ((x77^(x78^x79))-x80);

	if (t18 != 32752) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -16;
	uint8_t x82 = 3U;
	uint16_t x84 = UINT16_MAX;
	int64_t t19 = -279297192533315LL;

	t19 = ((x81^(x82^x83))-x84);

	if (t19 != 9223372036854710260LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x86 = INT32_MIN;
	volatile int32_t x88 = 168838;
	uint64_t t20 = 271962415896430LLU;

	t20 = ((x85^(x86^x87))-x88);

	if (t20 != 17591132842826525262LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = UINT16_MAX;
	volatile uint64_t x91 = UINT64_MAX;
	volatile int32_t x92 = INT32_MIN;

	t21 = ((x89^(x90^x91))-x92);

	if (t21 != 9223372039002193920LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x97 = 2675U;
	volatile uint16_t x98 = 1U;
	int8_t x99 = INT8_MIN;
	uint8_t x100 = 0U;
	volatile int32_t t22 = -11463;

	t22 = ((x97^(x98^x99))-x100);

	if (t22 != -2574) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = 11177478664084LL;
	int16_t x102 = -1;
	uint8_t x103 = 14U;
	static int32_t x104 = -15522;
	volatile int64_t t23 = 763588150LL;

	t23 = ((x101^(x102^x103))-x104);

	if (t23 != -11177478648569LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = 0;
	static uint64_t x106 = 47549949707LLU;
	uint32_t x107 = 3729U;
	static uint64_t t24 = 422899424579629894LLU;

	t24 = ((x105^(x106^x107))-x108);

	if (t24 != 9223372084404726171LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x110 = UINT64_MAX;
	int8_t x112 = INT8_MIN;
	static uint64_t t25 = 225444LLU;

	t25 = ((x109^(x110^x111))-x112);

	if (t25 != 9223372036854808703LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x114 = INT8_MIN;
	int8_t x115 = -1;
	static int32_t t26 = -370682902;

	t26 = ((x113^(x114^x115))-x116);

	if (t26 != 65281) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x119 = 666U;
	static volatile int64_t t27 = -15LL;

	t27 = ((x117^(x118^x119))-x120);

	if (t27 != -9223372036854743781LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x122 = 5922LL;
	static int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MAX;
	uint64_t t28 = 356911886027803LLU;

	t28 = ((x121^(x122^x123))-x124);

	if (t28 != 9223372034707678251LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x125 = 1U;
	int64_t x126 = -1LL;
	static uint64_t x127 = UINT64_MAX;
	uint32_t x128 = 41171758U;
	uint64_t t29 = 96992566LLU;

	t29 = ((x125^(x126^x127))-x128);

	if (t29 != 18446744073668379859LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = INT8_MAX;
	volatile int32_t x132 = INT32_MIN;
	volatile uint64_t t30 = 2238831806200710LLU;

	t30 = ((x129^(x130^x131))-x132);

	if (t30 != 18446743804408976440LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 0LLU;
	int64_t x134 = -1LL;
	int8_t x135 = 3;
	int64_t x136 = INT64_MIN;
	uint64_t t31 = 673014033445771LLU;

	t31 = ((x133^(x134^x135))-x136);

	if (t31 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x141 = 2628U;
	uint16_t x143 = UINT16_MAX;
	int8_t x144 = -1;
	int32_t t32 = 482269901;

	t32 = ((x141^(x142^x143))-x144);

	if (t32 != 2629) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x145 = 30;
	int8_t x146 = INT8_MIN;
	volatile int8_t x147 = -1;
	int64_t x148 = -1LL;
	volatile int64_t t33 = 357LL;

	t33 = ((x145^(x146^x147))-x148);

	if (t33 != 98LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MAX;
	uint64_t x150 = UINT64_MAX;
	int16_t x151 = 114;
	int8_t x152 = INT8_MIN;

	t34 = ((x149^(x150^x151))-x152);

	if (t34 != 18446744073709519090LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 9U;
	static uint32_t x154 = UINT32_MAX;
	uint16_t x156 = 1283U;

	t35 = ((x153^(x154^x155))-x156);

	if (t35 != 4294933254U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	static int8_t x160 = -3;

	t36 = ((x157^(x158^x159))-x160);

	if (t36 != 4294934658U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = UINT8_MAX;
	static uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MIN;
	volatile uint64_t t37 = 207684LLU;

	t37 = ((x161^(x162^x163))-x164);

	if (t37 != 9223372036854775764LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MAX;
	static volatile uint32_t x166 = UINT32_MAX;
	int64_t x167 = INT64_MAX;
	int16_t x168 = INT16_MIN;
	volatile int64_t t38 = -1382499290LL;

	t38 = ((x165^(x166^x167))-x168);

	if (t38 != 9223372032559874047LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x169 = 191366579U;
	int64_t x170 = INT64_MIN;
	volatile int64_t x171 = -1LL;
	int8_t x172 = -1;
	volatile int64_t t39 = -159028586521870LL;

	t39 = ((x169^(x170^x171))-x172);

	if (t39 != 9223372036663409229LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = UINT64_MAX;
	uint64_t t40 = 43776761788502LLU;

	t40 = ((x173^(x174^x175))-x176);

	if (t40 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = 117U;
	static volatile uint16_t x178 = UINT16_MAX;
	static int8_t x179 = -19;
	uint64_t x180 = UINT64_MAX;
	static uint64_t t41 = 15808LLU;

	t41 = ((x177^(x178^x179))-x180);

	if (t41 != 4294901864LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 107U;
	int8_t x183 = INT8_MIN;
	int8_t x184 = 0;
	int32_t t42 = 2591753;

	t42 = ((x181^(x182^x183))-x184);

	if (t42 != 20) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = UINT8_MAX;
	static int32_t x186 = 1477215;
	volatile int64_t x187 = INT64_MIN;
	int64_t x188 = -77095795677072903LL;
	int64_t t43 = -17057440994LL;

	t43 = ((x185^(x186^x187))-x188);

	if (t43 != -9146276241176225625LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = -1;
	volatile int16_t x190 = 0;
	int8_t x191 = INT8_MIN;
	int8_t x192 = -1;
	volatile int32_t t44 = 5420;

	t44 = ((x189^(x190^x191))-x192);

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x194 = 9U;
	int16_t x195 = INT16_MIN;
	volatile int32_t t45 = 980950300;

	t45 = ((x193^(x194^x195))-x196);

	if (t45 != -32536) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x198 = 3140U;
	uint8_t x199 = 2U;
	uint64_t t46 = 191169254982496110LLU;

	t46 = ((x197^(x198^x199))-x200);

	if (t46 != 4294964154LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x201 = INT64_MAX;
	int64_t x202 = INT64_MIN;
	int32_t x204 = 352557;
	int64_t t47 = -19LL;

	t47 = ((x201^(x202^x203))-x204);

	if (t47 != -352636LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 4U;
	volatile uint64_t x206 = UINT64_MAX;
	volatile uint8_t x208 = 117U;
	uint64_t t48 = 3227041476720067LLU;

	t48 = ((x205^(x206^x207))-x208);

	if (t48 != 4716545104379LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x209 = INT16_MIN;
	uint32_t x210 = 735019U;
	uint8_t x211 = 2U;
	volatile uint32_t t49 = 26U;

	t49 = ((x209^(x210^x211))-x212);

	if (t49 != 4294227754U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x213 = UINT32_MAX;
	uint8_t x215 = 0U;
	volatile uint8_t x216 = 15U;
	uint32_t t50 = 391232U;

	t50 = ((x213^(x214^x215))-x216);

	if (t50 != 4294967266U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = -1;
	static uint8_t x219 = 0U;
	int64_t t51 = -325312713287994292LL;

	t51 = ((x217^(x218^x219))-x220);

	if (t51 != 2147452680LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = UINT16_MAX;
	static uint64_t x222 = UINT64_MAX;
	uint64_t x223 = 2LLU;
	uint64_t x224 = 89598165837729350LLU;

	t52 = ((x221^(x222^x223))-x224);

	if (t52 != 18357145907871756732LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = INT8_MIN;
	int16_t x230 = 2;
	uint8_t x232 = 0U;
	int32_t t53 = -54244;

	t53 = ((x229^(x230^x231))-x232);

	if (t53 != -125) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = UINT32_MAX;
	static volatile int32_t x235 = INT32_MIN;
	uint32_t t54 = 948549U;

	t54 = ((x233^(x234^x235))-x236);

	if (t54 != 2140838565U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = 0;
	uint32_t x238 = UINT32_MAX;
	static int32_t x239 = INT32_MIN;
	volatile int32_t x240 = -7;

	t55 = ((x237^(x238^x239))-x240);

	if (t55 != 2147483654U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MAX;
	volatile int16_t x242 = 0;
	uint16_t x243 = 86U;
	uint64_t t56 = 0LLU;

	t56 = ((x241^(x242^x243))-x244);

	if (t56 != 18446744027528357489LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = 7;
	int16_t x256 = INT16_MIN;

	t57 = ((x253^(x254^x255))-x256);

	if (t57 != -40214) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x259 = INT16_MAX;
	int32_t t58 = 1784037;

	t58 = ((x257^(x258^x259))-x260);

	if (t58 != -2147483520) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = -1;
	int8_t x263 = 1;
	volatile int32_t t59 = 1;

	t59 = ((x261^(x262^x263))-x264);

	if (t59 != -65409) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = -1;
	volatile uint32_t x266 = 26U;
	int8_t x267 = INT8_MIN;
	volatile uint8_t x268 = 0U;

	t60 = ((x265^(x266^x267))-x268);

	if (t60 != 101U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x269 = INT64_MIN;
	static int32_t x271 = INT32_MIN;
	int8_t x272 = -1;
	int64_t t61 = -2LL;

	t61 = ((x269^(x270^x271))-x272);

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x274 = UINT16_MAX;
	uint8_t x275 = 49U;
	uint16_t x276 = 2723U;
	static volatile int32_t t62 = 11806402;

	t62 = ((x273^(x274^x275))-x276);

	if (t62 != 56759) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x278 = 0;
	int32_t x279 = INT32_MIN;
	volatile int64_t x280 = INT64_MAX;
	int64_t t63 = 761660295370274976LL;

	t63 = ((x277^(x278^x279))-x280);

	if (t63 != -9223372034707292109LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x281 = -3;
	uint8_t x282 = 0U;
	int16_t x283 = INT16_MIN;
	static int32_t t64 = -58246054;

	t64 = ((x281^(x282^x283))-x284);

	if (t64 != 32766) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	uint8_t x286 = UINT8_MAX;
	static uint8_t x288 = UINT8_MAX;
	volatile int64_t t65 = -6363467LL;

	t65 = ((x285^(x286^x287))-x288);

	if (t65 != 9223372036854775297LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x290 = -25;
	int8_t x291 = 3;
	int16_t x292 = 1561;

	t66 = ((x289^(x290^x291))-x292);

	if (t66 != 2147482059) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x294 = -1LL;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = UINT8_MAX;
	int64_t t67 = 4842140138504820LL;

	t67 = ((x293^(x294^x295))-x296);

	if (t67 != -296LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x299 = 7LLU;
	int16_t x300 = 1;
	static volatile uint64_t t68 = 180866917194LLU;

	t68 = ((x297^(x298^x299))-x300);

	if (t68 != 8150028LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x301 = INT32_MAX;
	int32_t x302 = INT32_MIN;
	volatile int64_t x303 = -1LL;
	static volatile uint32_t x304 = 8U;
	static volatile int64_t t69 = -264782403790LL;

	t69 = ((x301^(x302^x303))-x304);

	if (t69 != -8LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = INT64_MAX;
	volatile uint8_t x306 = 2U;
	int64_t x307 = INT64_MAX;
	static int32_t x308 = INT32_MIN;

	t70 = ((x305^(x306^x307))-x308);

	if (t70 != 2147483650LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = 7;
	static int32_t x311 = -1;

	t71 = ((x309^(x310^x311))-x312);

	if (t71 != 32761U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x313 = INT32_MAX;
	int8_t x314 = 2;
	static uint32_t x315 = UINT32_MAX;
	static uint64_t x316 = 146750264676709LLU;

	t72 = ((x313^(x314^x315))-x316);

	if (t72 != 18446597325592358557LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = 1;
	static int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MAX;
	volatile int64_t t73 = -1361955930184LL;

	t73 = ((x317^(x318^x319))-x320);

	if (t73 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x322 = 7U;
	int16_t x323 = INT16_MAX;
	int8_t x324 = INT8_MIN;
	static uint32_t t74 = 130U;

	t74 = ((x321^(x322^x323))-x324);

	if (t74 != 32654U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x325 = 52794100LLU;
	uint8_t x326 = UINT8_MAX;
	int8_t x327 = -4;
	int8_t x328 = -1;
	uint64_t t75 = 13830452110010LLU;

	t75 = ((x325^(x326^x327))-x328);

	if (t75 != 18446744073656757752LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = UINT8_MAX;
	int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MAX;
	int32_t t76 = -534837950;

	t76 = ((x329^(x330^x331))-x332);

	if (t76 != 2147451008) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = INT8_MIN;
	uint8_t x338 = 78U;
	static int8_t x339 = INT8_MIN;
	volatile int64_t x340 = INT64_MAX;
	volatile int64_t t77 = 29200647250109754LL;

	t77 = ((x337^(x338^x339))-x340);

	if (t77 != -9223372036854775729LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x341 = 32781121LLU;
	static uint64_t x342 = UINT64_MAX;
	static uint32_t x343 = UINT32_MAX;
	uint16_t x344 = 1U;
	volatile uint64_t t78 = 7300259389490564425LLU;

	t78 = ((x341^(x342^x343))-x344);

	if (t78 != 18446744069447365440LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = 25627798268700852LLU;
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	volatile uint64_t t79 = 316067944904357624LLU;

	t79 = ((x345^(x346^x347))-x348);

	if (t79 != 25627798268680139LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MIN;
	int32_t x350 = -1;
	int64_t x351 = -1LL;
	int32_t x352 = -17;
	int64_t t80 = -1458162744865342385LL;

	t80 = ((x349^(x350^x351))-x352);

	if (t80 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x354 = 6;
	int8_t x355 = -1;
	static volatile int32_t x356 = -188319;

	t81 = ((x353^(x354^x355))-x356);

	if (t81 != 188325U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = INT16_MAX;
	volatile int16_t x358 = -875;
	int32_t x359 = -132983;

	t82 = ((x357^(x358^x359))-x360);

	if (t82 != 4157922692U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x363 = -53;
	uint16_t x364 = 103U;

	t83 = ((x361^(x362^x363))-x364);

	if (t83 != 1443789689051266LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x365 = UINT64_MAX;
	volatile uint8_t x366 = 1U;
	int16_t x367 = -1;
	int8_t x368 = INT8_MIN;
	static uint64_t t84 = 1666048828LLU;

	t84 = ((x365^(x366^x367))-x368);

	if (t84 != 129LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x373 = INT8_MAX;
	int8_t x376 = -1;
	int32_t t85 = 205;

	t85 = ((x373^(x374^x375))-x376);

	if (t85 != -65408) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x378 = 4528LLU;
	int16_t x379 = INT16_MAX;
	static uint64_t x380 = 2552402526LLU;

	t86 = ((x377^(x378^x379))-x380);

	if (t86 != 18446744071157120985LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = -62;
	static int32_t x383 = INT32_MIN;
	uint64_t x384 = 35LLU;
	uint64_t t87 = 24736186207933LLU;

	t87 = ((x381^(x382^x383))-x384);

	if (t87 != 18446744071562067994LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x386 = 2924244320LLU;
	uint32_t x387 = 876872U;
	static volatile int32_t x388 = 2538612;

	t88 = ((x385^(x386^x387))-x388);

	if (t88 != 18446744070783487924LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MAX;
	static volatile uint32_t x390 = UINT32_MAX;

	t89 = ((x389^(x390^x391))-x392);

	if (t89 != 9223372032559817908LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x394 = 111566LLU;
	volatile uint64_t t90 = 90064930780LLU;

	t90 = ((x393^(x394^x395))-x396);

	if (t90 != 18446744073555130430LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int16_t x398 = -1;
	int16_t x399 = 20;
	uint32_t x400 = 46604181U;
	static volatile uint32_t t91 = 464276U;

	t91 = ((x397^(x398^x399))-x400);

	if (t91 != 4248362879U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x402 = INT32_MAX;
	uint16_t x403 = 3493U;
	uint64_t x404 = 25056809LLU;
	uint64_t t92 = 623148351589422505LLU;

	t92 = ((x401^(x402^x403))-x404);

	if (t92 != 18446744071537014652LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MAX;
	int16_t x406 = -416;
	uint16_t x408 = UINT16_MAX;

	t93 = ((x405^(x406^x407))-x408);

	if (t93 != -33183LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MAX;
	static uint64_t x411 = 106LLU;
	uint16_t x412 = 73U;
	uint64_t t94 = 68138620487LLU;

	t94 = ((x409^(x410^x411))-x412);

	if (t94 != 32583LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = UINT8_MAX;
	volatile int32_t x414 = INT32_MIN;
	uint8_t x415 = 8U;
	int64_t x416 = -211968LL;

	t95 = ((x413^(x414^x415))-x416);

	if (t95 != -2147271433LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = 844870805830LL;
	int64_t t96 = 3116252LL;

	t96 = ((x417^(x418^x419))-x420);

	if (t96 != -9223371191983970232LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x421 = -10;
	uint8_t x422 = 0U;
	int16_t x423 = INT16_MIN;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t97 = -10919;

	t97 = ((x421^(x422^x423))-x424);

	if (t97 != 32886) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = 3506LL;
	uint32_t x427 = 892825U;
	static volatile uint16_t x428 = 2U;
	volatile int64_t t98 = 5538724839521LL;

	t98 = ((x425^(x426^x427))-x428);

	if (t98 != 4294077907LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x429 = 1548917532449890297LLU;
	static int64_t x430 = INT64_MIN;

	t99 = ((x429^(x430^x431))-x432);

	if (t99 != 10772289565009698567LLU) { NG(); } else { ; }
	
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

