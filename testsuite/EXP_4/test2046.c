#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x16 = 16331LLU;
static uint8_t x20 = UINT8_MAX;
int32_t x32 = INT32_MIN;
static uint64_t x37 = 1139456775LLU;
int32_t x39 = 90891;
volatile int16_t x45 = INT16_MAX;
int8_t x46 = 23;
static volatile uint8_t x49 = UINT8_MAX;
static int64_t t9 = 11392102219LL;
int64_t x58 = -1LL;
int16_t x71 = -1;
volatile uint8_t x75 = 11U;
int16_t x79 = INT16_MIN;
int32_t x86 = INT32_MIN;
int8_t x90 = INT8_MIN;
int8_t x98 = INT8_MIN;
int16_t x99 = INT16_MAX;
static volatile uint64_t x100 = 10812783560LLU;
int8_t x102 = -1;
uint16_t x105 = 71U;
uint16_t x107 = 13U;
static int32_t x109 = INT32_MIN;
static volatile int64_t x110 = 1LL;
volatile uint32_t x112 = UINT32_MAX;
int64_t x116 = -2161263978248LL;
static uint16_t x117 = 2U;
int32_t x121 = -1;
int32_t x122 = INT32_MIN;
int8_t x129 = 19;
int64_t t27 = 29876382LL;
int32_t x138 = INT32_MIN;
int16_t x150 = INT16_MAX;
static volatile uint8_t x151 = 1U;
uint64_t x153 = 0LLU;
volatile int16_t x155 = INT16_MAX;
uint64_t t32 = 7535423236600956LLU;
int64_t t34 = 44318935789658531LL;
int32_t x169 = -1277;
uint32_t x182 = UINT32_MAX;
int64_t x184 = INT64_MIN;
uint64_t x193 = UINT64_MAX;
uint64_t t40 = 56LLU;
int16_t x202 = INT16_MAX;
static volatile uint64_t t41 = 3965111711845LLU;
uint16_t x206 = 0U;
int16_t x209 = INT16_MAX;
int64_t x215 = -903834423296LL;
int16_t x217 = -1;
int16_t x220 = -1;
volatile int8_t x223 = INT8_MAX;
int32_t x226 = INT32_MIN;
int16_t x228 = INT16_MAX;
static uint32_t x243 = 502U;
int8_t x247 = -2;
uint32_t x249 = 4096267U;
static uint16_t x250 = 3U;
volatile uint32_t t53 = 45431469U;
int64_t x257 = INT64_MIN;
static uint64_t x259 = 31953815105865LLU;
static volatile uint64_t t54 = 3667403312083LLU;
static volatile int16_t x262 = INT16_MIN;
static int8_t x265 = INT8_MAX;
uint16_t x268 = UINT16_MAX;
uint8_t x278 = UINT8_MAX;
static int64_t t58 = -28LL;
volatile int8_t x281 = INT8_MIN;
uint16_t x283 = UINT16_MAX;
int32_t x288 = INT32_MAX;
volatile uint32_t t60 = 260074012U;
volatile int64_t x299 = INT64_MIN;
volatile int64_t x306 = INT64_MAX;
volatile int16_t x316 = 10;
uint64_t x317 = 430563329513835LLU;
int8_t x319 = INT8_MIN;
static uint64_t x327 = UINT64_MAX;
uint8_t x328 = 8U;
int8_t x329 = -1;
int16_t x338 = INT16_MIN;
int32_t x345 = -1;
int32_t x354 = INT32_MIN;
static int32_t t76 = -4;
static uint64_t x366 = UINT64_MAX;
static uint8_t x368 = UINT8_MAX;
static uint64_t t78 = 2136875228872474111LLU;
static int64_t x369 = INT64_MIN;
volatile uint64_t x370 = UINT64_MAX;
int64_t x374 = INT64_MIN;
static volatile int64_t t81 = -4046LL;
volatile int16_t x390 = INT16_MIN;
volatile uint64_t x391 = 95595LLU;
volatile int16_t x394 = -577;
int64_t t85 = -2154153781121148388LL;
int32_t x401 = INT32_MIN;
int8_t x402 = -1;
int16_t x406 = INT16_MIN;
uint32_t x420 = UINT32_MAX;
int64_t t91 = 23215016646936412LL;
int32_t x430 = INT32_MIN;
uint8_t x436 = 1U;
static int64_t x438 = -331LL;
uint16_t x447 = 1611U;
int32_t x455 = INT32_MIN;


void f0(void) {
	static int8_t x1 = -9;
	uint64_t x2 = 434932LLU;
	static int16_t x3 = -231;
	int8_t x4 = 0;
	static uint64_t t0 = 16464793003LLU;

	t0 = (x1%(x2-(x3^x4)));

	if (t0 != 100252LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = -2;
	volatile int8_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	static uint64_t t1 = 81313993306768215LLU;

	t1 = (x13%(x14-(x15^x16)));

	if (t1 != 4294950963LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -1;
	uint32_t x18 = 46U;
	uint8_t x19 = 102U;
	uint32_t t2 = 374089339U;

	t2 = (x17%(x18-(x19^x20)));

	if (t2 != 106U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x29 = INT8_MIN;
	int32_t x30 = 502;
	int8_t x31 = -1;
	int32_t t3 = -78262;

	t3 = (x29%(x30-(x31^x32)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x33 = 1013U;
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MAX;
	int16_t x36 = -1;
	int32_t t4 = 5818;

	t4 = (x33%(x34-(x35^x36)));

	if (t4 != 1013) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x38 = 698LLU;
	int16_t x40 = INT16_MIN;
	volatile uint64_t t5 = 422LLU;

	t5 = (x37%(x38-(x39^x40)));

	if (t5 != 64038LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = 54;
	uint32_t x42 = UINT32_MAX;
	static int64_t x43 = 339384217LL;
	int8_t x44 = INT8_MIN;
	int64_t t6 = -1241787594624LL;

	t6 = (x41%(x42-(x43^x44)));

	if (t6 != 54LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x47 = 8U;
	static uint32_t x48 = 1895874236U;
	volatile uint32_t t7 = 281833U;

	t7 = (x45%(x46-(x47^x48)));

	if (t7 != 32767U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x50 = INT64_MIN;
	volatile int8_t x51 = -8;
	int16_t x52 = INT16_MAX;
	volatile int64_t t8 = -26714091799104LL;

	t8 = (x49%(x50-(x51^x52)));

	if (t8 != 255LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x53 = INT32_MAX;
	uint16_t x54 = 246U;
	int64_t x55 = INT64_MIN;
	int64_t x56 = INT64_MAX;

	t9 = (x53%(x54-(x55^x56)));

	if (t9 != 192LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MIN;
	uint32_t x59 = 14414799U;
	uint16_t x60 = UINT16_MAX;
	int64_t t10 = 31798LL;

	t10 = (x57%(x58-(x59^x60)));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x61 = 4768U;
	int64_t x62 = 92639450LL;
	volatile int8_t x63 = -14;
	uint16_t x64 = 51U;
	volatile int64_t t11 = -268955107810219LL;

	t11 = (x61%(x62-(x63^x64)));

	if (t11 != 4768LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = -3;
	volatile int32_t x70 = INT32_MIN;
	int8_t x72 = -1;
	static int32_t t12 = -2735497;

	t12 = (x69%(x70-(x71^x72)));

	if (t12 != -3) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = -1;
	int32_t x74 = INT32_MIN;
	int64_t x76 = -1769LL;
	int64_t t13 = -11910224LL;

	t13 = (x73%(x74-(x75^x76)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x77 = 211U;
	volatile int16_t x78 = INT16_MIN;
	int16_t x80 = -1;
	volatile int32_t t14 = 783404367;

	t14 = (x77%(x78-(x79^x80)));

	if (t14 != 211) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x81 = 41U;
	static int64_t x82 = INT64_MAX;
	int8_t x83 = INT8_MAX;
	int16_t x84 = 1;
	int64_t t15 = -3976386658LL;

	t15 = (x81%(x82-(x83^x84)));

	if (t15 != 41LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = -1;
	uint64_t x87 = 1989017733192LLU;
	int16_t x88 = INT16_MIN;
	uint64_t t16 = 15159159627798LLU;

	t16 = (x85%(x86-(x87^x88)));

	if (t16 != 639859564431LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 63041309U;
	uint16_t x91 = 576U;
	int16_t x92 = -5;
	volatile uint32_t t17 = 8848524U;

	t17 = (x89%(x90-(x91^x92)));

	if (t17 != 17U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = 170545594386165LLU;
	int16_t x94 = INT16_MIN;
	uint64_t x95 = 81LLU;
	uint32_t x96 = UINT32_MAX;
	volatile uint64_t t18 = 936047805LLU;

	t18 = (x93%(x94-(x95^x96)));

	if (t18 != 170545594386165LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x97 = 0U;
	uint64_t t19 = 42505276LLU;

	t19 = (x97%(x98-(x99^x100)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = 54628633;
	int16_t x103 = -1;
	static int64_t x104 = -1LL;
	static volatile int64_t t20 = -12171762LL;

	t20 = (x101%(x102-(x103^x104)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x106 = INT16_MAX;
	int16_t x108 = -1;
	static int32_t t21 = 208;

	t21 = (x105%(x106-(x107^x108)));

	if (t21 != 71) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x111 = -1;
	volatile int64_t t22 = 725LL;

	t22 = (x109%(x110-(x111^x112)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x113 = 492U;
	static uint8_t x114 = 1U;
	static int64_t x115 = INT64_MAX;
	volatile int64_t t23 = 467297351447495070LL;

	t23 = (x113%(x114-(x115^x116)));

	if (t23 != 492LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x118 = -1;
	static volatile uint8_t x119 = UINT8_MAX;
	int64_t x120 = INT64_MIN;
	static int64_t t24 = 12852719LL;

	t24 = (x117%(x118-(x119^x120)));

	if (t24 != 2LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x123 = -238407819LL;
	static int32_t x124 = INT32_MAX;
	volatile int64_t t25 = 275431972330353933LL;

	t25 = (x121%(x122-(x123^x124)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = 226233888U;
	int16_t x126 = INT16_MIN;
	volatile int32_t x127 = -1;
	uint64_t x128 = 6786530681LLU;
	uint64_t t26 = 513612742943854179LLU;

	t26 = (x125%(x126-(x127^x128)));

	if (t26 != 226233888LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x130 = INT32_MAX;
	volatile int64_t x131 = 6696275683LL;
	int32_t x132 = INT32_MIN;

	t27 = (x129%(x130-(x131^x132)));

	if (t27 != 19LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x139 = INT32_MIN;
	static volatile int32_t x140 = INT32_MIN;
	volatile uint64_t t28 = 31913764326LLU;

	t28 = (x137%(x138-(x139^x140)));

	if (t28 != 2147483647LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = 5;
	uint32_t x142 = 836U;
	volatile int8_t x143 = INT8_MAX;
	int64_t x144 = 6781038110LL;
	static volatile int64_t t29 = 1222984426LL;

	t29 = (x141%(x142-(x143^x144)));

	if (t29 != 5LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = -1;
	int8_t x146 = INT8_MIN;
	uint32_t x147 = 121888U;
	static int32_t x148 = INT32_MIN;
	volatile uint32_t t30 = 1112494U;

	t30 = (x145%(x146-(x147^x148)));

	if (t30 != 244031U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = 1359309198709665LL;
	uint16_t x152 = 1748U;
	static volatile int64_t t31 = -32875471997483069LL;

	t31 = (x149%(x150-(x151^x152)));

	if (t31 != 6261LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = UINT16_MAX;
	int32_t x156 = 3;

	t32 = (x153%(x154-(x155^x156)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 0LLU;
	int16_t x158 = INT16_MAX;
	int64_t x159 = INT64_MAX;
	int8_t x160 = INT8_MAX;
	volatile uint64_t t33 = 24115760LLU;

	t33 = (x157%(x158-(x159^x160)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MAX;
	static uint8_t x166 = 20U;
	uint16_t x167 = UINT16_MAX;
	volatile int64_t x168 = INT64_MIN;

	t34 = (x165%(x166-(x167^x168)));

	if (t34 != 32767LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x170 = -1970;
	volatile int32_t x171 = INT32_MAX;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t35 = -59954;

	t35 = (x169%(x170-(x171^x172)));

	if (t35 != -1277) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x181 = INT32_MAX;
	volatile int64_t x183 = INT64_MIN;
	int64_t t36 = 468365263478LL;

	t36 = (x181%(x182-(x183^x184)));

	if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = 58;
	static volatile int64_t x186 = INT64_MIN;
	int32_t x187 = -1;
	static volatile uint32_t x188 = UINT32_MAX;
	volatile int64_t t37 = 382860628675LL;

	t37 = (x185%(x186-(x187^x188)));

	if (t37 != 58LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x189 = 0U;
	int64_t x190 = 806986073611114LL;
	uint64_t x191 = UINT64_MAX;
	uint64_t x192 = 516316463567837LLU;
	volatile uint64_t t38 = 7774LLU;

	t38 = (x189%(x190-(x191^x192)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x194 = 35056LLU;
	int32_t x195 = -1;
	int64_t x196 = 18132LL;
	volatile uint64_t t39 = 217LLU;

	t39 = (x193%(x194-(x195^x196)));

	if (t39 != 27198LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x197 = 7709067343410115LLU;
	uint8_t x198 = 1U;
	int8_t x199 = INT8_MIN;
	int16_t x200 = 7587;

	t40 = (x197%(x198-(x199^x200)));

	if (t40 != 7249LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x201 = 21512369U;
	static volatile int8_t x203 = -25;
	volatile uint64_t x204 = UINT64_MAX;

	t41 = (x201%(x202-(x203^x204)));

	if (t41 != 218LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x205 = UINT64_MAX;
	uint16_t x207 = 3U;
	volatile uint8_t x208 = 22U;
	static volatile uint64_t t42 = 5492243070736165LLU;

	t42 = (x205%(x206-(x207^x208)));

	if (t42 != 20LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x210 = 28761LL;
	int8_t x211 = -1;
	static uint64_t x212 = UINT64_MAX;
	uint64_t t43 = 375720LLU;

	t43 = (x209%(x210-(x211^x212)));

	if (t43 != 4006LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x213 = 72U;
	int16_t x214 = INT16_MAX;
	int64_t x216 = INT64_MAX;
	volatile int64_t t44 = -43451443642058919LL;

	t44 = (x213%(x214-(x215^x216)));

	if (t44 != 72LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x218 = -1;
	int32_t x219 = -107;
	int32_t t45 = -21644484;

	t45 = (x217%(x218-(x219^x220)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x221 = 4U;
	int16_t x222 = 0;
	volatile uint64_t x224 = 3759051774133147LLU;
	uint64_t t46 = 141319598178LLU;

	t46 = (x221%(x222-(x223^x224)));

	if (t46 != 4LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x225 = -1LL;
	uint32_t x227 = UINT32_MAX;
	volatile int64_t t47 = 292957LL;

	t47 = (x225%(x226-(x227^x228)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = 418494;
	static int32_t x230 = 19669;
	uint16_t x231 = 3U;
	uint16_t x232 = 462U;
	volatile int32_t t48 = -5544981;

	t48 = (x229%(x230-(x231^x232)));

	if (t48 != 15126) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x233 = -1;
	int8_t x234 = 0;
	uint8_t x235 = 13U;
	uint32_t x236 = UINT32_MAX;
	uint32_t t49 = 25990079U;

	t49 = (x233%(x234-(x235^x236)));

	if (t49 != 3U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x237 = -1176786089610LL;
	volatile int8_t x238 = -1;
	uint32_t x239 = UINT32_MAX;
	int8_t x240 = -1;
	volatile int64_t t50 = 77309529LL;

	t50 = (x237%(x238-(x239^x240)));

	if (t50 != -4260018075LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x241 = 0U;
	static int64_t x242 = -5553295LL;
	int64_t x244 = INT64_MIN;
	static int64_t t51 = 53138407977LL;

	t51 = (x241%(x242-(x243^x244)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = 104461727LL;
	uint64_t x246 = UINT64_MAX;
	static volatile int32_t x248 = 1858415;
	static volatile uint64_t t52 = 40441855792175LLU;

	t52 = (x245%(x246-(x247^x248)));

	if (t52 != 390543LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x251 = 464804325U;
	int16_t x252 = INT16_MIN;

	t53 = (x249%(x250-(x251^x252)));

	if (t53 != 4096267U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x258 = UINT32_MAX;
	int8_t x260 = 0;

	t54 = (x257%(x258-(x259^x260)));

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x261 = INT16_MAX;
	static int32_t x263 = -573;
	static int16_t x264 = INT16_MIN;
	int32_t t55 = -1559;

	t55 = (x261%(x262-(x263^x264)));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x266 = 729U;
	int8_t x267 = 1;
	int32_t t56 = 19134646;

	t56 = (x265%(x266-(x267^x268)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MIN;
	int32_t x275 = -1;
	int16_t x276 = -74;
	uint64_t t57 = 56227LLU;

	t57 = (x273%(x274-(x275^x276)));

	if (t57 != 32840LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x277 = INT32_MAX;
	volatile int64_t x279 = -1LL;
	uint16_t x280 = UINT16_MAX;

	t58 = (x277%(x278-(x279^x280)));

	if (t58 != 65407LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x282 = 26588671U;
	int16_t x284 = -1;
	uint32_t t59 = 16103079U;

	t59 = (x281%(x282-(x283^x284)));

	if (t59 != 3639841U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x285 = 49U;
	int16_t x286 = INT16_MIN;
	volatile uint32_t x287 = 2U;

	t60 = (x285%(x286-(x287^x288)));

	if (t60 != 49U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MAX;
	int64_t x292 = 127464165LL;
	volatile int64_t t61 = 10056314316063LL;

	t61 = (x289%(x290-(x291^x292)));

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MAX;
	int8_t x295 = INT8_MIN;
	static volatile uint32_t x296 = 12166U;
	uint32_t t62 = 0U;

	t62 = (x293%(x294-(x295^x296)));

	if (t62 != 255U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x297 = INT8_MAX;
	uint32_t x298 = 0U;
	uint64_t x300 = UINT64_MAX;
	static uint64_t t63 = 3822746152452807LLU;

	t63 = (x297%(x298-(x299^x300)));

	if (t63 != 127LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x301 = 50U;
	int32_t x302 = -1;
	int32_t x303 = -1702;
	int64_t x304 = 1LL;
	int64_t t64 = -43399976672847453LL;

	t64 = (x301%(x302-(x303^x304)));

	if (t64 != 50LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = INT16_MIN;
	static uint64_t x307 = UINT64_MAX;
	int16_t x308 = -2;
	uint64_t t65 = 52466319LLU;

	t65 = (x305%(x306-(x307^x308)));

	if (t65 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x309 = INT64_MIN;
	static volatile int64_t x310 = -23LL;
	uint32_t x311 = 49897831U;
	int8_t x312 = -1;
	volatile int64_t t66 = 15632819960615LL;

	t66 = (x309%(x310-(x311^x312)));

	if (t66 != -1451485825LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x313 = -1;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	uint64_t t67 = 5LLU;

	t67 = (x313%(x314-(x315^x316)));

	if (t67 != 4956LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x318 = INT64_MAX;
	int64_t x320 = INT64_MIN;
	static volatile uint64_t t68 = 1013973216258973276LLU;

	t68 = (x317%(x318-(x319^x320)));

	if (t68 != 103LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x321 = -1LL;
	uint64_t x322 = 1982647821900574467LLU;
	volatile int64_t x323 = -1LL;
	uint8_t x324 = 11U;
	volatile uint64_t t69 = 12834750125270422LLU;

	t69 = (x321%(x322-(x323^x324)));

	if (t69 != 602913676604381304LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x325 = 9048445715674604LLU;
	int64_t x326 = 4708843307LL;
	volatile uint64_t t70 = 6LLU;

	t70 = (x325%(x326-(x327^x328)));

	if (t70 != 3032298744LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x330 = UINT64_MAX;
	volatile int32_t x331 = INT32_MIN;
	volatile int16_t x332 = 22;
	uint64_t t71 = 1745341047890LLU;

	t71 = (x329%(x330-(x331^x332)));

	if (t71 != 2115LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x333 = INT16_MIN;
	int16_t x334 = -1;
	static int32_t x335 = INT32_MAX;
	int16_t x336 = INT16_MIN;
	volatile int32_t t72 = -952243;

	t72 = (x333%(x334-(x335^x336)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = INT16_MAX;
	static uint8_t x339 = UINT8_MAX;
	int32_t x340 = INT32_MIN;
	volatile int32_t t73 = 0;

	t73 = (x337%(x338-(x339^x340)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = 538;
	int16_t x342 = -1;
	static int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MAX;
	volatile int64_t t74 = 159117LL;

	t74 = (x341%(x342-(x343^x344)));

	if (t74 != 538LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x346 = INT64_MIN;
	int32_t x347 = 2114;
	uint64_t x348 = UINT64_MAX;
	uint64_t t75 = 91527575719189017LLU;

	t75 = (x345%(x346-(x347^x348)));

	if (t75 != 9223372036854773692LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = -5;
	int16_t x355 = INT16_MAX;
	int32_t x356 = INT32_MIN;

	t76 = (x353%(x354-(x355^x356)));

	if (t76 != -5) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x357 = INT8_MIN;
	static int32_t x358 = 489;
	int32_t x359 = -1;
	int16_t x360 = INT16_MIN;
	int32_t t77 = 3569;

	t77 = (x357%(x358-(x359^x360)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x365 = -1;
	volatile int64_t x367 = -19303084581LL;

	t78 = (x365%(x366-(x367^x368)));

	if (t78 != 13923535737LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x371 = INT16_MIN;
	int64_t x372 = -10504002LL;
	uint64_t t79 = 52LLU;

	t79 = (x369%(x370-(x371^x372)));

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = 0;
	int8_t x375 = -28;
	static volatile uint8_t x376 = 60U;
	int64_t t80 = -133614355LL;

	t80 = (x373%(x374-(x375^x376)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = INT64_MIN;
	volatile int16_t x378 = INT16_MIN;
	static int64_t x379 = 7813143311049789LL;
	int8_t x380 = 8;

	t81 = (x377%(x378-(x379^x380)));

	if (t81 != -3862929777367988LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = INT8_MAX;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MAX;
	static uint64_t t82 = 7962LLU;

	t82 = (x381%(x382-(x383^x384)));

	if (t82 != 127LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x385 = 39LLU;
	volatile uint16_t x386 = 175U;
	volatile uint16_t x387 = UINT16_MAX;
	int64_t x388 = INT64_MIN;
	uint64_t t83 = 105462LLU;

	t83 = (x385%(x386-(x387^x388)));

	if (t83 != 39LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x389 = UINT64_MAX;
	volatile int32_t x392 = -1;
	uint64_t t84 = 61LLU;

	t84 = (x389%(x390-(x391^x392)));

	if (t84 != 707LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = -12766LL;
	uint8_t x395 = 16U;
	volatile int8_t x396 = INT8_MIN;

	t85 = (x393%(x394-(x395^x396)));

	if (t85 != -211LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = INT32_MAX;
	uint16_t x399 = UINT16_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t86 = 4720;

	t86 = (x397%(x398-(x399^x400)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x403 = UINT32_MAX;
	int8_t x404 = INT8_MAX;
	static volatile uint32_t t87 = 12U;

	t87 = (x401%(x402-(x403^x404)));

	if (t87 != 8U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x405 = 5078031275675LLU;
	uint32_t x407 = 4004U;
	static uint8_t x408 = UINT8_MAX;
	static volatile uint64_t t88 = 901548530571018353LLU;

	t88 = (x405%(x406-(x407^x408)));

	if (t88 != 1423310021LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = -1374LL;
	uint8_t x414 = 100U;
	volatile int8_t x415 = INT8_MIN;
	int16_t x416 = -244;
	static int64_t t89 = -4LL;

	t89 = (x413%(x414-(x415^x416)));

	if (t89 != -14LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x417 = 15;
	int64_t x418 = 898256937309LL;
	static uint16_t x419 = 31983U;
	int64_t t90 = -27142015014078LL;

	t90 = (x417%(x418-(x419^x420)));

	if (t90 != 15LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = INT32_MIN;
	uint16_t x422 = UINT16_MAX;
	int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MIN;

	t91 = (x421%(x422-(x423^x424)));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x425 = 4U;
	uint64_t x426 = 76783914448242LLU;
	uint16_t x427 = 6215U;
	uint16_t x428 = 7U;
	volatile uint64_t t92 = 99LLU;

	t92 = (x425%(x426-(x427^x428)));

	if (t92 != 4LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = -1;
	static int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MIN;
	int32_t t93 = 1;

	t93 = (x429%(x430-(x431^x432)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = -1;
	static volatile int16_t x434 = INT16_MIN;
	volatile int16_t x435 = -1;
	int32_t t94 = -4348;

	t94 = (x433%(x434-(x435^x436)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x437 = 16484U;
	volatile int32_t x439 = INT32_MIN;
	static int32_t x440 = 6357;
	static int64_t t95 = -27455LL;

	t95 = (x437%(x438-(x439^x440)));

	if (t95 != 16484LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x441 = INT8_MAX;
	volatile int16_t x442 = 3;
	int16_t x443 = INT16_MIN;
	volatile uint64_t x444 = 139993277LLU;
	volatile uint64_t t96 = 1566527524LLU;

	t96 = (x441%(x442-(x443^x444)));

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = 12;
	int8_t x446 = INT8_MIN;
	static uint8_t x448 = 16U;
	volatile int32_t t97 = -57;

	t97 = (x445%(x446-(x447^x448)));

	if (t97 != 12) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x449 = INT64_MIN;
	int8_t x450 = INT8_MAX;
	static int16_t x451 = INT16_MIN;
	int16_t x452 = -1;
	volatile int64_t t98 = 468242LL;

	t98 = (x449%(x450-(x451^x452)));

	if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = -5;
	uint32_t x454 = UINT32_MAX;
	volatile int8_t x456 = INT8_MIN;
	uint32_t t99 = 1U;

	t99 = (x453%(x454-(x455^x456)));

	if (t99 != 2147483516U) { NG(); } else { ; }
	
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

