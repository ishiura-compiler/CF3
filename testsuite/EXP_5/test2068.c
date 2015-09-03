#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -1LL;
static volatile int16_t x6 = 1;
int16_t x9 = -1;
int64_t x12 = INT64_MAX;
int64_t x20 = 179LL;
uint64_t t4 = UINT64_MAX;
uint64_t x24 = 10774526LLU;
volatile uint64_t t5 = 2740662442923577LLU;
static uint16_t x25 = 1664U;
uint32_t x27 = 41671U;
int16_t x28 = INT16_MIN;
static volatile uint16_t x31 = UINT16_MAX;
uint16_t x36 = 22U;
uint8_t x44 = UINT8_MAX;
uint64_t x46 = 1309906245380652LLU;
uint64_t t11 = 15664289014973LLU;
int8_t x50 = 48;
volatile uint8_t x54 = UINT8_MAX;
int32_t x55 = INT32_MIN;
int32_t x56 = INT32_MAX;
int8_t x63 = INT8_MIN;
volatile int32_t t15 = 2069214;
static uint16_t x65 = 0U;
int32_t x73 = INT32_MIN;
int16_t x82 = INT16_MIN;
uint64_t t19 = 446666153948261445LLU;
static int64_t x85 = 2706990854361497LL;
uint32_t x89 = UINT32_MAX;
int8_t x90 = INT8_MIN;
int64_t x102 = -5602LL;
static volatile int8_t x114 = INT8_MIN;
int8_t x119 = INT8_MIN;
int8_t x129 = -1;
volatile int8_t x132 = INT8_MIN;
static volatile int64_t x135 = -8174LL;
volatile uint16_t x136 = UINT16_MAX;
int32_t t32 = -8885;
static int16_t x145 = -1;
static int16_t x154 = -1;
int32_t t36 = -1009768;
static uint32_t t37 = 13308074U;
int32_t x162 = INT32_MIN;
static int32_t x169 = -438861;
static uint64_t x170 = UINT64_MAX;
int8_t x172 = INT8_MIN;
uint64_t t40 = 4LLU;
volatile uint8_t x174 = UINT8_MAX;
int32_t x177 = INT32_MIN;
uint32_t x181 = 90516317U;
uint64_t x186 = UINT64_MAX;
uint64_t t44 = UINT64_MAX;
int64_t x193 = INT64_MAX;
static uint8_t x197 = 2U;
uint16_t x200 = 20293U;
static int16_t x206 = -1;
int16_t x208 = -583;
volatile int8_t x209 = 3;
int8_t x228 = 3;
int16_t x229 = INT16_MAX;
int8_t x232 = 1;
int64_t t58 = -7991311LL;
uint16_t x257 = 9U;
uint16_t x258 = 6873U;
int32_t t60 = 262434597;
static volatile int32_t x270 = INT32_MIN;
uint8_t x272 = 125U;
uint16_t x273 = 3811U;
int32_t x276 = -1;
volatile uint64_t x278 = UINT64_MAX;
static int8_t x282 = INT8_MIN;
int16_t x284 = -1;
volatile uint64_t t67 = 929070191623692524LLU;
static int64_t x289 = INT64_MAX;
uint32_t x291 = 54599U;
int64_t t70 = -30036377529702LL;
volatile uint64_t x310 = UINT64_MAX;
uint8_t x311 = 1U;
int64_t x313 = INT64_MIN;
int64_t x317 = INT64_MIN;
static volatile int64_t x322 = INT64_MAX;
static int64_t t76 = -32725128103LL;
int8_t x341 = -1;
static uint64_t x342 = 0LLU;
int8_t x344 = INT8_MIN;
int32_t x346 = INT32_MIN;
int64_t x349 = 1507055945913946LL;
uint16_t x350 = 0U;
uint16_t x352 = 27655U;
int8_t x362 = INT8_MAX;
int64_t t88 = INT64_MIN;
uint32_t x375 = 121978272U;
volatile uint32_t t89 = 1762U;
uint32_t x382 = UINT32_MAX;
int16_t x393 = 1;
int64_t x404 = INT64_MAX;
int16_t x408 = INT16_MIN;
volatile uint64_t t95 = 2053891175496LLU;
int64_t t96 = -211508LL;
int8_t x413 = INT8_MAX;
uint32_t x415 = UINT32_MAX;
volatile uint8_t x417 = 71U;
static int16_t x420 = INT16_MAX;
static int32_t x426 = INT32_MIN;
uint64_t x428 = 88LLU;


void f0(void) {
	static volatile int8_t x1 = INT8_MAX;
	uint32_t x2 = 1423420438U;
	static volatile uint32_t x4 = UINT32_MAX;
	int64_t t0 = 2LL;

	t0 = (x1+((x2^x3)/x4));

	if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int64_t x7 = INT64_MIN;
	uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = -515229785LL;

	t1 = (x5+((x6^x7)/x8));

	if (t1 != -140739635871743LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int8_t x11 = 14;
	int64_t t2 = 127486516723647618LL;

	t2 = (x9+((x10^x11)/x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int32_t x14 = -1;
	int64_t x15 = 10245772806129LL;
	uint64_t x16 = 3645381LLU;
	uint64_t t3 = 1288870LLU;

	t3 = (x13+((x14^x15)/x16));

	if (t3 != 5060303388845LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int64_t x18 = -1LL;
	volatile int8_t x19 = -28;

	t4 = (x17+((x18^x19)/x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -554213003980886767LL;
	uint32_t x22 = 0U;
	uint32_t x23 = 1037709U;

	t5 = (x21+((x22^x23)/x24));

	if (t5 != 17892531069728664849LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	volatile uint32_t t6 = 3U;

	t6 = (x25+((x26^x27)/x28));

	if (t6 != 1664U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint32_t x30 = UINT32_MAX;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 37945LLU;

	t7 = (x29+((x30^x31)/x32));

	if (t7 != 65535LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	uint8_t x34 = 2U;
	volatile uint64_t x35 = 91954075881651500LLU;
	uint64_t t8 = 59783LLU;

	t8 = (x33+((x34^x35)/x36));

	if (t8 != 4179730721893377LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	static int16_t x38 = 221;
	int32_t x39 = INT32_MIN;
	volatile int8_t x40 = 19;
	volatile int32_t t9 = 23951;

	t9 = (x37+((x38^x39)/x40));

	if (t9 != -113025442) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 153324214LLU;
	int16_t x42 = 7;
	uint16_t x43 = 46U;
	volatile uint64_t t10 = 1LLU;

	t10 = (x41+((x42^x43)/x44));

	if (t10 != 153324214LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int64_t x47 = INT64_MIN;
	static uint8_t x48 = UINT8_MAX;

	t11 = (x45+((x46^x47)/x48));

	if (t11 != 36175223306274995LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = UINT32_MAX;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x49+((x50^x51)/x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	static int32_t t13 = -184614152;

	t13 = (x53+((x54^x55)/x56));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 948118;
	uint16_t x58 = 397U;
	int32_t x59 = 112;
	static int32_t x60 = -12797;
	int32_t t14 = 30844;

	t14 = (x57+((x58^x59)/x60));

	if (t14 != 948118) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = 36387845;
	int32_t x62 = INT32_MIN;
	int16_t x64 = INT16_MIN;

	t15 = (x61+((x62^x63)/x64));

	if (t15 != 36322310) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x66 = UINT64_MAX;
	uint8_t x67 = 10U;
	uint32_t x68 = 202U;
	volatile uint64_t t16 = 1639864409LLU;

	t16 = (x65+((x66^x67)/x68));

	if (t16 != 91320515216383918LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x74 = -210869469445594805LL;
	int8_t x75 = -1;
	int64_t x76 = INT64_MIN;
	static int64_t t17 = 1687808LL;

	t17 = (x73+((x74^x75)/x76));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -6571593485730763LL;
	uint16_t x78 = UINT16_MAX;
	int8_t x79 = 6;
	volatile int64_t x80 = -229012938468654476LL;
	int64_t t18 = -3768381208418LL;

	t18 = (x77+((x78^x79)/x80));

	if (t18 != -6571593485730763LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x81 = 7729810129783LLU;
	volatile int64_t x83 = -52LL;
	static int64_t x84 = -1LL;

	t19 = (x81+((x82^x83)/x84));

	if (t19 != 7729810097067LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MAX;
	uint16_t x88 = 19594U;
	static int64_t t20 = 492554902LL;

	t20 = (x85+((x86^x87)/x88));

	if (t20 != 2236266549122407LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x91 = 25459U;
	int16_t x92 = -1;
	uint32_t t21 = 158U;

	t21 = (x89+((x90^x91)/x92));

	if (t21 != 25356U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 20U;
	static uint64_t x94 = UINT64_MAX;
	uint8_t x95 = 47U;
	uint64_t x96 = 12259936854LLU;
	uint64_t t22 = 16097663841319753LLU;

	t22 = (x93+((x94^x95)/x96));

	if (t22 != 1504636160LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -1;
	int64_t x103 = -1LL;
	static volatile uint32_t x104 = 584013U;
	static volatile int64_t t23 = -990595618LL;

	t23 = (x101+((x102^x103)/x104));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = -1;
	int8_t x106 = INT8_MAX;
	volatile uint64_t x107 = 0LLU;
	static int8_t x108 = -1;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x105+((x106^x107)/x108));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x109 = 3LLU;
	static volatile int32_t x110 = INT32_MIN;
	uint16_t x111 = 28567U;
	int64_t x112 = INT64_MIN;
	static uint64_t t25 = 927664932935007LLU;

	t25 = (x109+((x110^x111)/x112));

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	int32_t x115 = INT32_MIN;
	int16_t x116 = -1;
	volatile int32_t t26 = 106;

	t26 = (x113+((x114^x115)/x116));

	if (t26 != -2147483521) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = -1;
	uint64_t x120 = 5LLU;
	volatile uint64_t t27 = 15394LLU;

	t27 = (x117+((x118^x119)/x120));

	if (t27 != 4294967320LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = 7U;
	volatile int16_t x122 = 187;
	int32_t x123 = -28070;
	int64_t x124 = INT64_MAX;
	int64_t t28 = 69328351108426LL;

	t28 = (x121+((x122^x123)/x124));

	if (t28 != 7LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MAX;
	volatile int32_t x126 = -214690013;
	uint16_t x127 = 127U;
	uint32_t x128 = UINT32_MAX;
	static uint32_t t29 = 2U;

	t29 = (x125+((x126^x127)/x128));

	if (t29 != 32767U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x130 = -1;
	int8_t x131 = -2;
	volatile int32_t t30 = 2953298;

	t30 = (x129+((x130^x131)/x132));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -2;
	int32_t x134 = INT32_MAX;
	static volatile int64_t t31 = 178899188019184LL;

	t31 = (x133+((x134^x135)/x136));

	if (t31 != -32770LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = -2;
	static volatile uint16_t x138 = 15U;
	int16_t x139 = 39;
	volatile int8_t x140 = INT8_MIN;

	t32 = (x137+((x138^x139)/x140));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = 4872LLU;
	int16_t x142 = INT16_MAX;
	int32_t x143 = INT32_MAX;
	uint8_t x144 = 1U;
	volatile uint64_t t33 = 39LLU;

	t33 = (x141+((x142^x143)/x144));

	if (t33 != 2147455752LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = INT16_MIN;
	int8_t x147 = -1;
	int8_t x148 = -6;
	int32_t t34 = -1139082;

	t34 = (x145+((x146^x147)/x148));

	if (t34 != -5462) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	uint32_t x150 = UINT32_MAX;
	uint32_t x151 = 39223U;
	int32_t x152 = 1;
	static uint32_t t35 = 30314U;

	t35 = (x149+((x150^x151)/x152));

	if (t35 != 2147444424U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	volatile int8_t x155 = INT8_MIN;
	volatile uint8_t x156 = 1U;

	t36 = (x153+((x154^x155)/x156));

	if (t36 != 32894) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = UINT32_MAX;
	uint8_t x158 = 0U;
	static int16_t x159 = -711;
	uint8_t x160 = 15U;

	t37 = (x157+((x158^x159)/x160));

	if (t37 != 4294967248U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x161 = 98U;
	int64_t x163 = INT64_MIN;
	int32_t x164 = -1;
	static int64_t t38 = 0LL;

	t38 = (x161+((x162^x163)/x164));

	if (t38 != -9223372034707292062LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x166 = -1;
	uint32_t x167 = 27597826U;
	uint32_t x168 = 22458901U;
	volatile uint32_t t39 = 53U;

	t39 = (x165+((x166^x167)/x168));

	if (t39 != 189U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x171 = INT16_MAX;

	t40 = (x169+((x170^x171)/x172));

	if (t40 != 18446744073709112755LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 3U;
	int64_t x175 = 34109LL;
	int64_t x176 = -1LL;
	int64_t t41 = -470806LL;

	t41 = (x173+((x174^x175)/x176));

	if (t41 != -34239LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = INT16_MAX;
	int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MIN;
	static volatile int64_t t42 = 10730031935011LL;

	t42 = (x177+((x178^x179)/x180));

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = 3;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = 2907LLU;
	volatile uint64_t t43 = 8896933LLU;

	t43 = (x181+((x182^x183)/x184));

	if (t43 != 6345629286100103LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x185 = -1LL;
	int32_t x187 = INT32_MIN;
	volatile int8_t x188 = INT8_MIN;

	t44 = (x185+((x186^x187)/x188));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = 96753U;
	uint32_t x190 = 52U;
	volatile int16_t x191 = -1;
	uint16_t x192 = 1U;
	uint32_t t45 = 30508U;

	t45 = (x189+((x190^x191)/x192));

	if (t45 != 96700U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x194 = 0;
	uint16_t x195 = 31016U;
	static int16_t x196 = -1;
	int64_t t46 = -388352763855079365LL;

	t46 = (x193+((x194^x195)/x196));

	if (t46 != 9223372036854744791LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x198 = UINT8_MAX;
	volatile uint16_t x199 = UINT16_MAX;
	int32_t t47 = 14825;

	t47 = (x197+((x198^x199)/x200));

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -11;
	uint32_t x202 = 15U;
	static volatile int32_t x203 = -1;
	int64_t x204 = INT64_MAX;
	int64_t t48 = -107912405LL;

	t48 = (x201+((x202^x203)/x204));

	if (t48 != -11LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x205 = 34849U;
	int16_t x207 = INT16_MIN;
	uint32_t t49 = 12860U;

	t49 = (x205+((x206^x207)/x208));

	if (t49 != 34793U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x210 = UINT64_MAX;
	uint16_t x211 = 300U;
	static int16_t x212 = -140;
	uint64_t t50 = 666988249LLU;

	t50 = (x209+((x210^x211)/x212));

	if (t50 != 3LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 28U;
	static int32_t x214 = INT32_MAX;
	int64_t x215 = -1LL;
	static int64_t x216 = -9347293945LL;
	int64_t t51 = -13991501LL;

	t51 = (x213+((x214^x215)/x216));

	if (t51 != 28LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x217 = INT16_MAX;
	volatile int16_t x218 = INT16_MIN;
	int16_t x219 = 2;
	static uint16_t x220 = UINT16_MAX;
	volatile int32_t t52 = 29950;

	t52 = (x217+((x218^x219)/x220));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1;
	static int32_t x222 = INT32_MIN;
	uint16_t x223 = 2U;
	int16_t x224 = 49;
	int32_t t53 = 6426003;

	t53 = (x221+((x222^x223)/x224));

	if (t53 != -43826197) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x225 = -12;
	volatile uint32_t x226 = 3U;
	static volatile int32_t x227 = -1;
	uint32_t t54 = 54749U;

	t54 = (x225+((x226^x227)/x228));

	if (t54 != 1431655752U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x230 = 721577493;
	int8_t x231 = INT8_MIN;
	int32_t t55 = 19;

	t55 = (x229+((x230^x231)/x232));

	if (t55 != -721544812) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = INT8_MIN;
	volatile int32_t x239 = -1;
	int32_t x240 = 170424;
	int32_t t56 = INT32_MIN;

	t56 = (x237+((x238^x239)/x240));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 5024U;
	int32_t x242 = 170827107;
	int64_t x243 = -47953LL;
	uint32_t x244 = 707939U;
	volatile int64_t t57 = 3466862140LL;

	t57 = (x241+((x242^x243)/x244));

	if (t57 != 4783LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x249 = 38733163557215LL;
	int16_t x250 = INT16_MIN;
	uint32_t x251 = 11144U;
	volatile int16_t x252 = INT16_MIN;

	t58 = (x249+((x250^x251)/x252));

	if (t58 != 38733163557216LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -1;
	int16_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = 6U;
	static volatile int32_t t59 = 3672766;

	t59 = (x253+((x254^x255)/x256));

	if (t59 != -10923) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x259 = 701517;
	uint16_t x260 = 1U;

	t60 = (x257+((x258^x259)/x260));

	if (t60 != 700061) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x261 = 242127421LLU;
	static int32_t x262 = INT32_MIN;
	int32_t x263 = 8713;
	static volatile uint32_t x264 = UINT32_MAX;
	static uint64_t t61 = 1390753392418243LLU;

	t61 = (x261+((x262^x263)/x264));

	if (t61 != 242127421LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x265 = UINT16_MAX;
	int8_t x266 = INT8_MIN;
	static uint32_t x267 = 23977415U;
	uint8_t x268 = 8U;
	uint32_t t62 = 79650U;

	t62 = (x265+((x266^x267)/x268));

	if (t62 != 533939271U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x269 = UINT8_MAX;
	volatile uint64_t x271 = 28309335LLU;
	uint64_t t63 = 2LLU;

	t63 = (x269+((x270^x271)/x272));

	if (t63 != 147573952572723273LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x274 = 733347023703LL;
	int64_t x275 = INT64_MIN;
	static volatile int64_t t64 = 430638434022LL;

	t64 = (x273+((x274^x275)/x276));

	if (t64 != 9223371303507755916LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x277 = -1;
	int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MIN;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x277+((x278^x279)/x280));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x281 = 3U;
	int8_t x283 = INT8_MAX;
	volatile int32_t t66 = 46090607;

	t66 = (x281+((x282^x283)/x284));

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x285 = INT64_MIN;
	static uint64_t x286 = 8294502248LLU;
	volatile int32_t x287 = INT32_MAX;
	static int16_t x288 = INT16_MIN;

	t67 = (x285+((x286^x287)/x288));

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x290 = INT32_MAX;
	int8_t x292 = -1;
	int64_t t68 = INT64_MAX;

	t68 = (x289+((x290^x291)/x292));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x293 = 4U;
	volatile int8_t x294 = -32;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = 868;
	static int32_t t69 = -1622467;

	t69 = (x293+((x294^x295)/x296));

	if (t69 != -71) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = -1;
	static volatile uint32_t x298 = UINT32_MAX;
	uint8_t x299 = 11U;
	int64_t x300 = INT64_MIN;

	t70 = (x297+((x298^x299)/x300));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = 61363795LLU;
	static int8_t x302 = INT8_MIN;
	int32_t x303 = -479111739;
	static uint16_t x304 = UINT16_MAX;
	volatile uint64_t t71 = 18847635755266LLU;

	t71 = (x301+((x302^x303)/x304));

	if (t71 != 61371105LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = UINT32_MAX;
	uint32_t x306 = 14271692U;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MAX;
	volatile uint32_t t72 = 3397247U;

	t72 = (x305+((x306^x307)/x308));

	if (t72 != 130639U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -30;
	static uint64_t x312 = 42LLU;
	uint64_t t73 = 28715LLU;

	t73 = (x309+((x310^x311)/x312));

	if (t73 != 439208192231179770LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x314 = INT16_MAX;
	int64_t x315 = INT64_MIN;
	int8_t x316 = -6;
	volatile int64_t t74 = -14651LL;

	t74 = (x313+((x314^x315)/x316));

	if (t74 != -7686143364045651968LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x318 = UINT8_MAX;
	volatile uint64_t x319 = 79044LLU;
	int32_t x320 = -102113746;
	uint64_t t75 = 4476883013527LLU;

	t75 = (x317+((x318^x319)/x320));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x321 = INT32_MIN;
	uint16_t x323 = 10U;
	volatile uint16_t x324 = 59U;

	t76 = (x321+((x322^x323)/x324));

	if (t76 != 156328337460224416LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x325 = 35U;
	volatile int8_t x326 = -1;
	int16_t x327 = -6;
	int8_t x328 = INT8_MIN;
	volatile int32_t t77 = 927903907;

	t77 = (x325+((x326^x327)/x328));

	if (t77 != 35) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x329 = 752683539LLU;
	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MAX;
	volatile uint8_t x332 = 38U;
	uint64_t t78 = 13305673LLU;

	t78 = (x329+((x330^x331)/x332));

	if (t78 != 696171674LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = 27;
	uint8_t x334 = UINT8_MAX;
	uint64_t x335 = 2750LLU;
	int8_t x336 = 2;
	uint64_t t79 = 4LLU;

	t79 = (x333+((x334^x335)/x336));

	if (t79 != 1339LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 123339686714500LLU;
	volatile int32_t x338 = -1;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;
	volatile uint64_t t80 = 52013573902LLU;

	t80 = (x337+((x338^x339)/x340));

	if (t80 != 123339686714500LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x343 = 4551078721565319LLU;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x341+((x342^x343)/x344));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x345 = 0;
	int32_t x347 = -13593971;
	uint64_t x348 = 6992076942172LLU;
	uint64_t t82 = 106962766LLU;

	t82 = (x345+((x346^x347)/x348));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x351 = -1;
	int64_t t83 = -28489186LL;

	t83 = (x349+((x350^x351)/x352));

	if (t83 != 1507055945913946LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = -1LL;
	uint8_t x355 = 21U;
	volatile uint32_t x356 = 127462732U;
	int64_t t84 = 12386008466LL;

	t84 = (x353+((x354^x355)/x356));

	if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = UINT32_MAX;
	volatile int8_t x358 = -1;
	int64_t x359 = -130849865LL;
	int8_t x360 = INT8_MIN;
	int64_t t85 = -7875365001514LL;

	t85 = (x357+((x358^x359)/x360));

	if (t85 != 4293945031LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x361 = 2U;
	int32_t x363 = -18926;
	volatile int16_t x364 = -1;
	int32_t t86 = -1;

	t86 = (x361+((x362^x363)/x364));

	if (t86 != 18837) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x365 = 105U;
	static int64_t x366 = -2686592104053785303LL;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = -1;
	volatile int64_t t87 = -270LL;

	t87 = (x365+((x366^x367)/x368));

	if (t87 != 2686592101285707155LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MIN;
	static int16_t x371 = 309;
	int16_t x372 = 11617;

	t88 = (x369+((x370^x371)/x372));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x373 = 2U;
	static int32_t x374 = INT32_MIN;
	int8_t x376 = INT8_MIN;

	t89 = (x373+((x374^x375)/x376));

	if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x381 = -44;
	volatile uint8_t x383 = 51U;
	int64_t x384 = -1LL;
	int64_t t90 = 1727464LL;

	t90 = (x381+((x382^x383)/x384));

	if (t90 != -4294967288LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MAX;
	uint64_t x386 = 14LLU;
	static uint16_t x387 = 8U;
	static volatile int8_t x388 = INT8_MIN;
	static uint64_t t91 = 99955359567677LLU;

	t91 = (x385+((x386^x387)/x388));

	if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x389 = INT8_MIN;
	int32_t x390 = -580346;
	static int64_t x391 = -1886LL;
	static int8_t x392 = INT8_MIN;
	volatile int64_t t92 = -16178191LL;

	t92 = (x389+((x390^x391)/x392));

	if (t92 != -4667LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x394 = -1;
	int8_t x395 = INT8_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t93 = -1632;

	t93 = (x393+((x394^x395)/x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x401 = 840LLU;
	int64_t x402 = INT64_MIN;
	volatile int8_t x403 = INT8_MAX;
	uint64_t t94 = 0LLU;

	t94 = (x401+((x402^x403)/x404));

	if (t94 != 840LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = -68742978694LL;
	uint64_t x406 = UINT64_MAX;
	uint64_t x407 = UINT64_MAX;

	t95 = (x405+((x406^x407)/x408));

	if (t95 != 18446744004966572922LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = -430;
	int32_t x410 = 74512;
	int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MIN;

	t96 = (x409+((x410^x411)/x412));

	if (t96 != -430LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x414 = INT32_MAX;
	int64_t x416 = INT64_MIN;
	static int64_t t97 = -29LL;

	t97 = (x413+((x414^x415)/x416));

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x418 = 31U;
	static int16_t x419 = -30;
	volatile uint32_t t98 = 61205U;

	t98 = (x417+((x418^x419)/x420));

	if (t98 != 131147U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = UINT16_MAX;
	static uint32_t x427 = 449U;
	static uint64_t t99 = 1142LLU;

	t99 = (x425+((x426^x427)/x428));

	if (t99 != 24468763LLU) { NG(); } else { ; }
	
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

