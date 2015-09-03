#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x8 = INT16_MIN;
volatile uint64_t t3 = 393428198559966660LLU;
uint8_t x18 = 33U;
int8_t x23 = -1;
static volatile int32_t t6 = 559012753;
volatile int64_t t7 = 8483227160588LL;
static uint16_t x34 = 95U;
int8_t x36 = 1;
uint64_t t9 = 857686546707552LLU;
int64_t x42 = INT64_MIN;
uint32_t x49 = 500367U;
uint16_t x53 = UINT16_MAX;
int16_t x58 = INT16_MAX;
volatile int8_t x60 = 6;
volatile int32_t t14 = -11925695;
static int16_t x63 = INT16_MIN;
volatile uint32_t x65 = 6532012U;
static int64_t x74 = INT64_MIN;
int16_t x79 = INT16_MIN;
static uint64_t x80 = 127069LLU;
volatile uint64_t t19 = 598024LLU;
uint8_t x81 = 1U;
static uint64_t t20 = 232174096763LLU;
int16_t x88 = INT16_MAX;
volatile int64_t x91 = INT64_MIN;
volatile int64_t t22 = -524848797761LL;
int8_t x101 = INT8_MIN;
uint8_t x102 = 7U;
int16_t x103 = INT16_MIN;
int32_t t25 = 6988;
volatile int32_t t26 = 1;
static uint64_t x112 = 14839817928374259LLU;
uint32_t x117 = 458U;
int64_t t28 = 26980970283850681LL;
int64_t x125 = INT64_MIN;
static volatile int8_t x129 = INT8_MAX;
static int64_t x135 = -1LL;
volatile int64_t x138 = INT64_MAX;
int64_t x139 = INT64_MIN;
static int32_t x140 = INT32_MAX;
volatile int8_t x143 = INT8_MIN;
int64_t x144 = -1LL;
int8_t x147 = -1;
uint16_t x149 = 0U;
static int64_t t36 = -216827638935248LL;
int16_t x156 = INT16_MIN;
volatile uint32_t x157 = 14484027U;
uint64_t t38 = 58167963038LLU;
int16_t x161 = INT16_MIN;
static volatile uint64_t t40 = 547734310231592654LLU;
int8_t x171 = INT8_MIN;
uint32_t t41 = 105156610U;
int8_t x173 = -1;
int32_t x185 = -107742;
uint32_t x188 = UINT32_MAX;
static uint64_t x190 = UINT64_MAX;
int16_t x205 = -20;
int64_t x207 = INT64_MAX;
uint32_t x211 = UINT32_MAX;
int16_t x213 = INT16_MIN;
uint64_t x214 = 187878793LLU;
int32_t x217 = INT32_MIN;
static int16_t x218 = -1;
int64_t x219 = -1LL;
uint32_t x220 = UINT32_MAX;
int64_t t52 = -5033542322779LL;
int16_t x222 = 1;
uint64_t x228 = UINT64_MAX;
volatile uint64_t t54 = 133LLU;
uint32_t x233 = UINT32_MAX;
int64_t t57 = 15488828243404LL;
volatile int32_t x241 = 4372;
volatile int16_t x242 = -6;
int8_t x246 = 0;
int8_t x248 = 23;
int64_t x249 = INT64_MIN;
volatile int64_t x250 = 841776825LL;
int32_t x251 = -2814;
int64_t t60 = -235962483LL;
static uint8_t x254 = UINT8_MAX;
int64_t x260 = INT64_MIN;
int32_t x261 = INT32_MIN;
volatile int16_t x262 = INT16_MIN;
volatile int32_t t64 = -4;
static uint64_t x278 = UINT64_MAX;
int8_t x281 = 0;
volatile uint32_t x282 = UINT32_MAX;
volatile uint8_t x286 = 4U;
int16_t x292 = -6;
volatile int16_t x302 = 11089;
static volatile int32_t t73 = 1462;
uint16_t x311 = 15U;
volatile uint32_t x312 = 3486182U;
int32_t x317 = 285414;
int64_t x326 = -1LL;
int16_t x331 = -1;
int32_t x332 = -1;
int32_t x333 = 54632237;
int32_t x334 = INT32_MIN;
int64_t t80 = 1432LL;
static int64_t x345 = INT64_MIN;
volatile uint64_t t82 = 4291493453962360LLU;
uint16_t x359 = 14232U;
int64_t x362 = -1LL;
volatile int64_t t88 = 7532LL;
int64_t t89 = -8751LL;
int32_t x388 = INT32_MAX;
volatile int64_t t90 = 140LL;
uint64_t t92 = 114LLU;
static int8_t x400 = -39;
uint32_t x401 = 0U;
uint32_t t94 = 266528833U;
volatile uint64_t x411 = 58661786436LLU;
volatile uint64_t t96 = 1566326311209906534LLU;
volatile uint32_t x413 = 5349U;
int32_t x415 = -34800148;
int64_t x427 = -48208576109633596LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x2 = INT64_MAX;
	int32_t x3 = -684805;
	volatile uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = 4513LL;

	t0 = (x1%(x2+(x3^x4)));

	if (t0 != 65535LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int8_t x6 = 1;
	volatile uint8_t x7 = 1U;
	int32_t t1 = -483819;

	t1 = (x5%(x6+(x7^x8)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint16_t x10 = 3U;
	static int8_t x11 = -1;
	int8_t x12 = -1;
	volatile uint32_t t2 = 1508471U;

	t2 = (x9%(x10+(x11^x12)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static uint64_t x14 = 16140LLU;
	uint16_t x15 = 26622U;
	int16_t x16 = -1;

	t3 = (x13%(x14+(x15^x16)));

	if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MAX;
	static int64_t x19 = INT64_MIN;
	uint16_t x20 = 2U;
	static int64_t t4 = -32057LL;

	t4 = (x17%(x18+(x19^x20)));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	static uint32_t x22 = 768U;
	uint16_t x24 = 72U;
	int64_t t5 = -6LL;

	t5 = (x21%(x22+(x23^x24)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile uint8_t x26 = 5U;
	static int8_t x27 = -1;
	int8_t x28 = INT8_MIN;

	t6 = (x25%(x26+(x27^x28)));

	if (t6 != 123) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	uint8_t x32 = UINT8_MAX;

	t7 = (x29%(x30+(x31^x32)));

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = 4;
	uint32_t x35 = 27189U;
	static volatile uint32_t t8 = 51U;

	t8 = (x33%(x34+(x35^x36)));

	if (t8 != 4U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -2209398089LL;
	int64_t x38 = 241282472538053724LL;
	volatile uint64_t x39 = UINT64_MAX;
	static uint64_t x40 = 830LLU;

	t9 = (x37%(x38+(x39^x40)));

	if (t9 != 109276158608133659LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 954828539LLU;
	uint32_t x43 = UINT32_MAX;
	uint64_t x44 = 67358504264LLU;
	uint64_t t10 = 1535LLU;

	t10 = (x41%(x42+(x43^x44)));

	if (t10 != 954828539LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = INT16_MIN;
	static int64_t x46 = -1LL;
	int32_t x47 = INT32_MIN;
	static uint16_t x48 = UINT16_MAX;
	static volatile int64_t t11 = -113LL;

	t11 = (x45%(x46+(x47^x48)));

	if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MIN;
	int32_t x52 = 7;
	static uint32_t t12 = 54884870U;

	t12 = (x49%(x50+(x51^x52)));

	if (t12 != 500367U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x54 = 68968022712535242LLU;
	static uint8_t x55 = 32U;
	int8_t x56 = INT8_MIN;
	volatile uint64_t t13 = 87LLU;

	t13 = (x53%(x54+(x55^x56)));

	if (t13 != 65535LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -15;
	int32_t x59 = INT32_MIN;

	t14 = (x57%(x58+(x59^x60)));

	if (t14 != -15) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 1670U;
	uint32_t x62 = 53077U;
	static uint16_t x64 = 44U;
	uint32_t t15 = 31U;

	t15 = (x61%(x62+(x63^x64)));

	if (t15 != 1670U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x66 = INT8_MAX;
	int16_t x67 = INT16_MIN;
	int8_t x68 = 13;
	volatile uint32_t t16 = 5U;

	t16 = (x65%(x66+(x67^x68)));

	if (t16 != 6532012U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 7745883725273344738LLU;
	int8_t x70 = -1;
	volatile int32_t x71 = INT32_MAX;
	uint8_t x72 = UINT8_MAX;
	uint64_t t17 = 248180242LLU;

	t17 = (x69%(x70+(x71^x72)));

	if (t17 != 1094031100LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int32_t x75 = -1;
	static int64_t x76 = INT64_MIN;
	int64_t t18 = -21927LL;

	t18 = (x73%(x74+(x75^x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -70799;
	volatile int64_t x78 = 1066110722LL;

	t19 = (x77%(x78+(x79^x80)));

	if (t19 != 174485927LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	static int32_t x83 = -1;
	uint64_t x84 = 30368050655270543LLU;

	t20 = (x81%(x82+(x83^x84)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 20128285325954742LLU;
	static volatile int32_t x86 = INT32_MIN;
	static int16_t x87 = INT16_MAX;
	uint64_t t21 = 66940306LLU;

	t21 = (x85%(x86+(x87^x88)));

	if (t21 != 20128285325954742LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -206172;
	uint8_t x90 = UINT8_MAX;
	uint16_t x92 = UINT16_MAX;

	t22 = (x89%(x90+(x91^x92)));

	if (t22 != -206172LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	volatile uint32_t x94 = 694310861U;
	int64_t x95 = INT64_MAX;
	uint32_t x96 = UINT32_MAX;
	int64_t t23 = 57889289LL;

	t23 = (x93%(x94+(x95^x96)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	int64_t x99 = INT64_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t24 = 2979LLU;

	t24 = (x97%(x98+(x99^x100)));

	if (t24 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x104 = -1;

	t25 = (x101%(x102+(x103^x104)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	static int32_t x108 = -232;

	t26 = (x105%(x106+(x107^x108)));

	if (t26 != 111) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 1555783U;
	static int8_t x110 = INT8_MIN;
	static int64_t x111 = -2318629955LL;
	volatile uint64_t t27 = 428756207162450549LLU;

	t27 = (x109%(x110+(x111^x112)));

	if (t27 != 1555783LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = -1LL;
	uint32_t x119 = 3399901U;
	volatile uint16_t x120 = 66U;

	t28 = (x117%(x118+(x119^x120)));

	if (t28 != 458LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -1;
	int8_t x122 = -13;
	static int64_t x123 = INT64_MIN;
	volatile int64_t x124 = 20421990LL;
	volatile int64_t t29 = 3414879LL;

	t29 = (x121%(x122+(x123^x124)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x126 = -16478158092559LL;
	static uint32_t x127 = 3U;
	int64_t x128 = -1LL;
	int64_t t30 = -4LL;

	t30 = (x125%(x126+(x127^x128)));

	if (t30 != -3173230210129LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = -632603552LL;
	int8_t x131 = 1;
	int32_t x132 = INT32_MAX;
	volatile int64_t t31 = 10028132941541LL;

	t31 = (x129%(x130+(x131^x132)));

	if (t31 != 127LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x133 = 60U;
	volatile uint32_t x134 = 28643U;
	int32_t x136 = 2;
	int64_t t32 = -29404701640016LL;

	t32 = (x133%(x134+(x135^x136)));

	if (t32 != 60LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = 158114733;
	int64_t t33 = -23940131LL;

	t33 = (x137%(x138+(x139^x140)));

	if (t33 != 158114733LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = INT64_MIN;
	volatile int32_t x142 = -1;
	int64_t t34 = -43355LL;

	t34 = (x141%(x142+(x143^x144)));

	if (t34 != -8LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -3893;
	int8_t x146 = INT8_MIN;
	int16_t x148 = 0;
	static int32_t t35 = 3156;

	t35 = (x145%(x146+(x147^x148)));

	if (t35 != -23) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x150 = 1736U;
	static int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MAX;

	t36 = (x149%(x150+(x151^x152)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x153 = 10953436;
	int8_t x154 = INT8_MIN;
	int32_t x155 = -1;
	int32_t t37 = -813;

	t37 = (x153%(x154+(x155^x156)));

	if (t37 != 19371) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x158 = -1;
	int8_t x159 = 11;
	uint64_t x160 = UINT64_MAX;

	t38 = (x157%(x158+(x159^x160)));

	if (t38 != 14484027LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x162 = 108U;
	int8_t x163 = -1;
	static uint64_t x164 = 7789LLU;
	static volatile uint64_t t39 = 1573039902749310LLU;

	t39 = (x161%(x162+(x163^x164)));

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	uint16_t x166 = 22U;
	uint64_t x167 = UINT64_MAX;
	static int16_t x168 = 0;

	t40 = (x165%(x166+(x167^x168)));

	if (t40 != 8LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 523742U;
	uint32_t x170 = UINT32_MAX;
	uint32_t x172 = 150605U;

	t41 = (x169%(x170+(x171^x172)));

	if (t41 != 523742U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x174 = 11233U;
	int32_t x175 = INT32_MIN;
	static uint16_t x176 = 91U;
	int32_t t42 = 129638527;

	t42 = (x173%(x174+(x175^x176)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -4061;
	static uint16_t x178 = UINT16_MAX;
	int8_t x179 = -1;
	int64_t x180 = 690871LL;
	volatile int64_t t43 = 658381278422710LL;

	t43 = (x177%(x178+(x179^x180)));

	if (t43 != -4061LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x186 = INT8_MIN;
	int16_t x187 = -1;
	uint32_t t44 = 2839U;

	t44 = (x185%(x186+(x187^x188)));

	if (t44 != 4294859554U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	static int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MIN;
	uint64_t t45 = 51132664170LLU;

	t45 = (x189%(x190+(x191^x192)));

	if (t45 != 129LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -4LL;
	int32_t x194 = -86538071;
	volatile int8_t x195 = INT8_MIN;
	volatile uint32_t x196 = UINT32_MAX;
	volatile int64_t t46 = 465935845403132LL;

	t46 = (x193%(x194+(x195^x196)));

	if (t46 != -4LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = 0;
	int16_t x198 = -16;
	int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	int64_t t47 = 139484726LL;

	t47 = (x197%(x198+(x199^x200)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 1U;
	int64_t x202 = INT64_MIN;
	int32_t x203 = -1;
	int16_t x204 = INT16_MIN;
	int64_t t48 = -970609140LL;

	t48 = (x201%(x202+(x203^x204)));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x206 = 307U;
	static int32_t x208 = INT32_MIN;
	int64_t t49 = -11669421LL;

	t49 = (x205%(x206+(x207^x208)));

	if (t49 != -20LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = 188568;
	static uint32_t x210 = UINT32_MAX;
	uint64_t x212 = 12764198392160LLU;
	uint64_t t50 = 45007561LLU;

	t50 = (x209%(x210+(x211^x212)));

	if (t50 != 188568LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x215 = -2234371463016143860LL;
	int8_t x216 = -1;
	volatile uint64_t t51 = 2762967445LLU;

	t51 = (x213%(x214+(x215^x216)));

	if (t51 != 571772368077337632LLU) { NG(); } else { ; }
	
}

void f52(void) {


	t52 = (x217%(x218+(x219^x220)));

	if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = 13282877LL;
	int64_t x223 = INT64_MAX;
	int8_t x224 = 1;
	volatile int64_t t53 = -3633625LL;

	t53 = (x221%(x222+(x223^x224)));

	if (t53 != 13282877LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = 0;
	volatile uint16_t x226 = 30265U;
	int32_t x227 = INT32_MIN;

	t54 = (x225%(x226+(x227^x228)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = 0U;
	uint16_t x230 = UINT16_MAX;
	static int32_t x231 = -5159;
	uint32_t x232 = 94U;
	static uint32_t t55 = 27U;

	t55 = (x229%(x230+(x231^x232)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x234 = 7615;
	uint64_t x235 = 483779333049LLU;
	uint8_t x236 = 1U;
	uint64_t t56 = 2LLU;

	t56 = (x233%(x234+(x235^x236)));

	if (t56 != 4294967295LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = 636LL;
	int32_t x238 = 1;
	volatile uint16_t x239 = 16U;
	uint8_t x240 = 24U;

	t57 = (x237%(x238+(x239^x240)));

	if (t57 != 6LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x243 = UINT16_MAX;
	uint8_t x244 = 10U;
	int32_t t58 = -3415;

	t58 = (x241%(x242+(x243^x244)));

	if (t58 != 4372) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	int8_t x247 = 40;
	int32_t t59 = -79852451;

	t59 = (x245%(x246+(x247^x248)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x252 = -1;

	t60 = (x249%(x250+(x251^x252)));

	if (t60 != -614588850LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x253 = 21336U;
	int64_t x255 = INT64_MAX;
	int32_t x256 = 7380;
	volatile int64_t t61 = 12164450830945LL;

	t61 = (x253%(x254+(x255^x256)));

	if (t61 != 21336LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -1;
	int64_t x258 = INT64_MAX;
	int64_t x259 = INT64_MIN;
	int64_t t62 = -49649633032LL;

	t62 = (x257%(x258+(x259^x260)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x263 = 4;
	static int64_t x264 = -1LL;
	volatile int64_t t63 = -558882215098815124LL;

	t63 = (x261%(x262+(x263^x264)));

	if (t63 != -50LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MIN;
	uint16_t x266 = 0U;
	static int8_t x267 = -1;
	volatile int32_t x268 = -8769;

	t64 = (x265%(x266+(x267^x268)));

	if (t64 != -6464) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x269 = INT16_MIN;
	volatile uint8_t x270 = 4U;
	static int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	volatile int32_t t65 = 164;

	t65 = (x269%(x270+(x271^x272)));

	if (t65 != -124) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MAX;
	uint16_t x274 = UINT16_MAX;
	volatile int64_t x275 = 17800909390735199LL;
	uint64_t x276 = 82781LLU;
	uint64_t t66 = 2238241962484150LLU;

	t66 = (x273%(x274+(x275^x276)));

	if (t66 != 127LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = INT8_MIN;
	static uint16_t x279 = 21U;
	uint32_t x280 = 259551U;
	uint64_t t67 = 1478305833031806459LLU;

	t67 = (x277%(x278+(x279^x280)));

	if (t67 != 203550LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x283 = -1;
	uint64_t x284 = 33562477352LLU;
	static uint64_t t68 = 5649530261379299LLU;

	t68 = (x281%(x282+(x283^x284)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	uint8_t x287 = UINT8_MAX;
	uint64_t x288 = 433548563559LLU;
	uint64_t t69 = 49LLU;

	t69 = (x285%(x286+(x287^x288)));

	if (t69 != 64871309352LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = 1257LL;
	int16_t x290 = 8631;
	int16_t x291 = -1;
	volatile int64_t t70 = 375137736973740LL;

	t70 = (x289%(x290+(x291^x292)));

	if (t70 != 1257LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -1;
	int8_t x294 = 8;
	static volatile uint32_t x295 = 825270U;
	static int16_t x296 = -1;
	uint32_t t71 = 55U;

	t71 = (x293%(x294+(x295^x296)));

	if (t71 != 825262U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -1LL;
	int64_t x298 = -1LL;
	static int64_t x299 = -1LL;
	uint8_t x300 = UINT8_MAX;
	volatile int64_t t72 = 1LL;

	t72 = (x297%(x298+(x299^x300)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x301 = -254545681;
	uint8_t x303 = 0U;
	static uint8_t x304 = UINT8_MAX;

	t73 = (x301%(x302+(x303^x304)));

	if (t73 != -9009) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = UINT8_MAX;
	int16_t x310 = 21;
	static volatile uint32_t t74 = 1606480U;

	t74 = (x309%(x310+(x311^x312)));

	if (t74 != 255U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = -1LL;
	int16_t x314 = INT16_MIN;
	static int8_t x315 = -1;
	uint32_t x316 = UINT32_MAX;
	volatile int64_t t75 = 43789376200136LL;

	t75 = (x313%(x314+(x315^x316)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x318 = 20902880LL;
	uint16_t x319 = 3408U;
	volatile int8_t x320 = INT8_MIN;
	volatile int64_t t76 = 7LL;

	t76 = (x317%(x318+(x319^x320)));

	if (t76 != 285414LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = 31951195942689527LLU;
	volatile uint64_t x327 = UINT64_MAX;
	int32_t x328 = INT32_MIN;
	static volatile uint64_t t77 = 10LLU;

	t77 = (x325%(x326+(x327^x328)));

	if (t77 != 102115517LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MAX;
	volatile int64_t t78 = 22522015575075073LL;

	t78 = (x329%(x330+(x331^x332)));

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x335 = INT64_MIN;
	int64_t x336 = INT64_MIN;
	static int64_t t79 = 1LL;

	t79 = (x333%(x334+(x335^x336)));

	if (t79 != 54632237LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MAX;
	int16_t x342 = 7;
	int64_t x343 = -1LL;
	volatile int8_t x344 = 1;

	t80 = (x341%(x342+(x343^x344)));

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x346 = -230701;
	int8_t x347 = -1;
	volatile uint16_t x348 = 26U;
	int64_t t81 = -25261623624544402LL;

	t81 = (x345%(x346+(x347^x348)));

	if (t81 != -227112LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = 1U;
	int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = UINT64_MAX;

	t82 = (x349%(x350+(x351^x352)));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int32_t x354 = INT32_MAX;
	static int16_t x355 = -2058;
	volatile uint64_t x356 = 1LLU;
	volatile uint64_t t83 = 6143968LLU;

	t83 = (x353%(x354+(x355^x356)));

	if (t83 != 4115LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = INT32_MIN;
	volatile uint16_t x358 = UINT16_MAX;
	volatile uint64_t x360 = 66331064355313494LLU;
	uint64_t t84 = 52248LLU;

	t84 = (x357%(x358+(x359^x360)));

	if (t84 != 6708180766024034LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = INT64_MAX;
	uint64_t x363 = UINT64_MAX;
	int8_t x364 = INT8_MIN;
	uint64_t t85 = 4723168668770LLU;

	t85 = (x361%(x362+(x363^x364)));

	if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x365 = 25U;
	int64_t x366 = 286595049LL;
	uint8_t x367 = 103U;
	static int32_t x368 = INT32_MAX;
	int64_t t86 = 45019512722779066LL;

	t86 = (x365%(x366+(x367^x368)));

	if (t86 != 25LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x369 = INT64_MAX;
	static volatile int32_t x370 = -1;
	static uint16_t x371 = 365U;
	static uint16_t x372 = 5U;
	static int64_t t87 = -1162008583LL;

	t87 = (x369%(x370+(x371^x372)));

	if (t87 != 330LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x373 = 6004697LL;
	int64_t x374 = -1LL;
	int64_t x375 = 0LL;
	int64_t x376 = INT64_MAX;

	t88 = (x373%(x374+(x375^x376)));

	if (t88 != 6004697LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = UINT32_MAX;
	uint8_t x382 = UINT8_MAX;
	int64_t x383 = -172257298754438LL;
	int16_t x384 = 144;

	t89 = (x381%(x382+(x383^x384)));

	if (t89 != 4294967295LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = -43784002686LL;
	volatile int64_t x386 = -1LL;
	int64_t x387 = -1LL;

	t90 = (x385%(x386+(x387^x388)));

	if (t90 != -834329706LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x389 = 7386U;
	static uint8_t x390 = 35U;
	uint8_t x391 = UINT8_MAX;
	static int64_t x392 = -1LL;
	volatile int64_t t91 = -109706749LL;

	t91 = (x389%(x390+(x391^x392)));

	if (t91 != 93LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x393 = 934162319LLU;
	uint8_t x394 = 79U;
	static volatile int16_t x395 = 0;
	volatile uint64_t x396 = 1435LLU;

	t92 = (x393%(x394+(x395^x396)));

	if (t92 != 95LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = 310035864449LLU;
	static int16_t x399 = -1;
	uint64_t t93 = 934LLU;

	t93 = (x397%(x398+(x399^x400)));

	if (t93 != 159703092614LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x402 = INT16_MIN;
	uint8_t x403 = 8U;
	int32_t x404 = 0;

	t94 = (x401%(x402+(x403^x404)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MIN;
	int64_t x407 = -46533LL;
	uint8_t x408 = UINT8_MAX;
	static volatile int64_t t95 = -1664LL;

	t95 = (x405%(x406+(x407^x408)));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x409 = INT16_MIN;
	int8_t x410 = 2;
	volatile int8_t x412 = INT8_MIN;

	t96 = (x409%(x410+(x411^x412)));

	if (t96 != 58661753658LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x414 = -1LL;
	volatile int32_t x416 = -1;
	volatile int64_t t97 = 27LL;

	t97 = (x413%(x414+(x415^x416)));

	if (t97 != 5349LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x421 = UINT32_MAX;
	uint32_t x422 = 2097U;
	int32_t x423 = -20502157;
	int32_t x424 = INT32_MIN;
	uint32_t t98 = 12U;

	t98 = (x421%(x422+(x423^x424)));

	if (t98 != 41000119U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x425 = 2U;
	volatile int64_t x426 = 247370403589591LL;
	int32_t x428 = -3443;
	volatile int64_t t99 = -890481604924LL;

	t99 = (x425%(x426+(x427^x428)));

	if (t99 != 2LL) { NG(); } else { ; }
	
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

