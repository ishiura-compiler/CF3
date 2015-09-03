#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 5667361502046188305LLU;
uint8_t x19 = UINT8_MAX;
volatile uint64_t x20 = 16236949431439557LLU;
uint32_t x21 = UINT32_MAX;
uint8_t x29 = 1U;
uint32_t x32 = UINT32_MAX;
uint32_t x39 = 19U;
volatile uint32_t t9 = 29U;
int64_t x43 = -822607416380531376LL;
volatile uint64_t t11 = 2777229568154LLU;
int32_t x49 = INT32_MIN;
static int32_t t12 = 0;
int16_t x66 = -5233;
volatile int32_t x70 = 7643854;
volatile uint32_t x75 = 1614U;
volatile int64_t t18 = -3777344693975LL;
static int8_t x77 = -12;
volatile int64_t t20 = -397980301LL;
int16_t x88 = -7086;
int32_t x90 = INT32_MIN;
int16_t x96 = INT16_MIN;
static int8_t x99 = INT8_MIN;
volatile uint32_t x102 = 144U;
uint32_t x104 = UINT32_MAX;
uint8_t x114 = 15U;
static int8_t x115 = INT8_MAX;
int8_t x118 = INT8_MIN;
int64_t x121 = -1LL;
static volatile int8_t x125 = -47;
volatile int64_t x129 = INT64_MIN;
uint32_t x130 = 792763U;
int8_t x132 = -9;
volatile int32_t t33 = 2266;
volatile int64_t x144 = INT64_MIN;
int64_t t35 = 33701LL;
static uint8_t x145 = 0U;
int32_t t36 = -101;
volatile uint64_t x155 = UINT64_MAX;
uint32_t x161 = UINT32_MAX;
int8_t x163 = INT8_MIN;
uint16_t x167 = UINT16_MAX;
uint32_t x168 = 26211769U;
int64_t t42 = 118755372654LL;
volatile int64_t t44 = -7741250846LL;
uint16_t x184 = 15523U;
static volatile uint64_t t45 = 301171719874444023LLU;
static int16_t x185 = -19;
static int16_t x186 = INT16_MIN;
int16_t x187 = -1;
int32_t x189 = -26;
volatile int64_t t47 = 8575911302915LL;
uint32_t x193 = UINT32_MAX;
int32_t x194 = -1;
int32_t x196 = 52;
static int64_t x206 = INT64_MIN;
static int16_t x210 = -1;
uint64_t x215 = 56373LLU;
int16_t x218 = INT16_MIN;
int16_t x220 = -1;
volatile int8_t x226 = 3;
uint64_t x228 = UINT64_MAX;
int16_t x232 = 2116;
uint64_t t57 = 6LLU;
int16_t x236 = INT16_MIN;
static uint64_t t58 = 20387630LLU;
static int16_t x238 = INT16_MAX;
static uint16_t x239 = UINT16_MAX;
uint32_t x240 = 359801U;
int32_t x241 = -41;
volatile int32_t t61 = -257739;
int16_t x254 = 14;
uint64_t x261 = 91196704655LLU;
uint32_t x269 = 67662998U;
uint8_t x272 = 9U;
uint8_t x274 = UINT8_MAX;
int32_t x278 = INT32_MIN;
int16_t x283 = INT16_MIN;
volatile int8_t x285 = 0;
static int8_t x286 = INT8_MAX;
int16_t x290 = 19;
uint32_t x293 = 33U;
uint64_t t75 = 120498750556132909LLU;
volatile int16_t x316 = INT16_MIN;
int32_t x318 = INT32_MIN;
int8_t x322 = INT8_MAX;
uint64_t x324 = UINT64_MAX;
int64_t x326 = INT64_MIN;
volatile int64_t t81 = -5LL;
int64_t x332 = INT64_MAX;
int64_t t82 = 457736779154302876LL;
uint64_t x339 = UINT64_MAX;
uint8_t x342 = 4U;
int8_t x356 = 0;
volatile uint64_t x359 = UINT64_MAX;
volatile uint64_t t89 = 1656210LLU;
int16_t x363 = INT16_MIN;
int64_t t90 = -668209628LL;
int8_t x367 = INT8_MAX;
int8_t x368 = INT8_MAX;
uint16_t x370 = UINT16_MAX;
volatile uint8_t x372 = UINT8_MAX;
volatile uint64_t t92 = 687908684915829LLU;
static volatile uint32_t x390 = 35U;
volatile uint64_t x398 = UINT64_MAX;
uint8_t x400 = UINT8_MAX;


void f0(void) {
	volatile int32_t x1 = -1;
	uint16_t x3 = UINT16_MAX;
	volatile int16_t x4 = INT16_MAX;
	uint64_t t0 = 98125618174283LLU;

	t0 = (x1%((x2^x3)|x4));

	if (t0 != 1444659567571075074LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 17;
	static uint8_t x6 = 0U;
	int32_t x7 = INT32_MIN;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = -123750184;

	t1 = (x5%((x6^x7)|x8));

	if (t1 != 17) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -348;
	int8_t x10 = INT8_MIN;
	int32_t x11 = -3482543;
	int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = 1757095;

	t2 = (x9%((x10^x11)|x12));

	if (t2 != -348) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	volatile uint8_t x14 = 15U;
	uint32_t x15 = UINT32_MAX;
	uint8_t x16 = 1U;
	volatile uint32_t t3 = 1162U;

	t3 = (x13%((x14^x15)|x16));

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MIN;
	static volatile uint64_t t4 = 15031941841803LLU;

	t4 = (x17%((x18^x19)|x20));

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 1788006U;
	int32_t x23 = -1;
	uint64_t x24 = 31LLU;
	uint64_t t5 = 1477658555983482746LLU;

	t5 = (x21%((x22^x23)|x24));

	if (t5 != 1788000LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 2LLU;

	t6 = (x25%((x26^x27)|x28));

	if (t6 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MAX;
	static int32_t x31 = INT32_MAX;
	volatile int64_t t7 = -1344LL;

	t7 = (x29%((x30^x31)|x32));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 3LLU;
	volatile int16_t x34 = INT16_MIN;
	uint8_t x35 = 114U;
	int64_t x36 = INT64_MAX;
	volatile uint64_t t8 = 157LLU;

	t8 = (x33%((x34^x35)|x36));

	if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = -30;
	uint8_t x40 = UINT8_MAX;

	t9 = (x37%((x38^x39)|x40));

	if (t9 != 4294934528U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 23386007LLU;
	volatile int32_t x42 = INT32_MAX;
	static int64_t x44 = 7116941222LL;
	uint64_t t10 = 2103151468559960LLU;

	t10 = (x41%((x42^x43)|x44));

	if (t10 != 23386007LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	static uint64_t x48 = UINT64_MAX;

	t11 = (x45%((x46^x47)|x48));

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int8_t x51 = INT8_MAX;
	static int32_t x52 = INT32_MIN;

	t12 = (x49%((x50^x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int16_t x54 = 1;
	static int64_t x55 = -1LL;
	uint64_t x56 = 16914LLU;
	uint64_t t13 = 1135LLU;

	t13 = (x53%((x54^x55)|x56));

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = INT64_MIN;
	volatile int8_t x58 = 0;
	int32_t x59 = -30681251;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t14 = 3727146853LL;

	t14 = (x57%((x58^x59)|x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MAX;
	uint32_t x63 = UINT32_MAX;
	volatile int32_t x64 = INT32_MAX;
	static volatile int64_t t15 = 1LL;

	t15 = (x61%((x62^x63)|x64));

	if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	static int32_t x67 = -1;
	int64_t x68 = -25446920521LL;
	int64_t t16 = 13LL;

	t16 = (x65%((x66^x67)|x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	volatile int16_t x71 = -1;
	static uint32_t x72 = 100U;
	static volatile uint32_t t17 = 1U;

	t17 = (x69%((x70^x71)|x72));

	if (t17 != 2147483647U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = 9520;
	static volatile int64_t x74 = INT64_MAX;
	static int32_t x76 = -63;

	t18 = (x73%((x74^x75)|x76));

	if (t18 != 10LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MIN;
	static int8_t x79 = INT8_MAX;
	static volatile int32_t x80 = 1875938;
	int32_t t19 = 33748;

	t19 = (x77%((x78^x79)|x80));

	if (t19 != -12) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	volatile uint32_t x82 = 211660U;
	volatile int64_t x83 = 492230598512168165LL;
	static uint16_t x84 = 30U;

	t20 = (x81%((x82^x83)|x84));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x86 = -8567;
	uint32_t x87 = 28U;
	volatile uint32_t t21 = 78U;

	t21 = (x85%((x86^x87)|x88));

	if (t21 != 169U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 8U;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = 24347U;
	int32_t t22 = 1437;

	t22 = (x89%((x90^x91)|x92));

	if (t22 != 8) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	uint32_t x94 = 980849U;
	static int64_t x95 = INT64_MIN;
	volatile int64_t t23 = 26LL;

	t23 = (x93%((x94^x95)|x96));

	if (t23 != 1289LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 1849613915U;
	int8_t x98 = INT8_MIN;
	volatile int8_t x100 = -1;
	uint32_t t24 = 9735467U;

	t24 = (x97%((x98^x99)|x100));

	if (t24 != 1849613915U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 7U;
	uint8_t x103 = 0U;
	uint32_t t25 = 8442405U;

	t25 = (x101%((x102^x103)|x104));

	if (t25 != 7U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MIN;
	uint64_t x107 = 1652310698LLU;
	int32_t x108 = 5;
	uint64_t t26 = 194391768186LLU;

	t26 = (x105%((x106^x107)|x108));

	if (t26 != 1652310736LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	static int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MIN;
	int64_t t27 = 15240LL;

	t27 = (x109%((x110^x111)|x112));

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	static uint32_t x116 = 95U;
	static volatile uint32_t t28 = 27U;

	t28 = (x113%((x114^x115)|x116));

	if (t28 != 15U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int16_t x119 = 10561;
	int32_t x120 = INT32_MIN;
	volatile int64_t t29 = 510386742649LL;

	t29 = (x117%((x118^x119)|x120));

	if (t29 != -4678LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MAX;
	int16_t x123 = -1;
	static int8_t x124 = INT8_MIN;
	static volatile int64_t t30 = -405LL;

	t30 = (x121%((x122^x123)|x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x126 = -21;
	uint64_t x127 = 1399352LLU;
	static int16_t x128 = INT16_MIN;
	static volatile uint64_t t31 = 2390443LLU;

	t31 = (x125%((x126^x127)|x128));

	if (t31 != 23038LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x131 = INT8_MIN;
	int64_t t32 = 10LL;

	t32 = (x129%((x130^x131)|x132));

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile uint16_t x134 = 637U;
	volatile int16_t x135 = -1;
	volatile int8_t x136 = INT8_MIN;

	t33 = (x133%((x134^x135)|x136));

	if (t33 != -8) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 6U;
	int64_t x138 = -1LL;
	int8_t x139 = INT8_MAX;
	uint64_t x140 = 280916649520497LLU;
	volatile uint64_t t34 = 12410429352LLU;

	t34 = (x137%((x138^x139)|x140));

	if (t34 != 6LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	static int64_t x142 = INT64_MAX;
	int16_t x143 = 4805;

	t35 = (x141%((x142^x143)|x144));

	if (t35 != -4250LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = 1011132981;
	int32_t x147 = 1;
	uint8_t x148 = UINT8_MAX;

	t36 = (x145%((x146^x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = 4833;
	volatile int64_t x150 = -206471LL;
	int8_t x151 = 4;
	volatile uint32_t x152 = 121614300U;
	int64_t t37 = 177448018657787LL;

	t37 = (x149%((x150^x151)|x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int32_t x154 = 6931801;
	int16_t x156 = 12021;
	volatile uint64_t t38 = 41526190LLU;

	t38 = (x153%((x154^x155)|x156));

	if (t38 != 65535LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	uint64_t x158 = 44769701833LLU;
	volatile uint8_t x159 = 42U;
	static int16_t x160 = -1;
	volatile uint64_t t39 = 53LLU;

	t39 = (x157%((x158^x159)|x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = 3075;
	int64_t x164 = 63874155070536LL;
	int64_t t40 = -28105103187LL;

	t40 = (x161%((x162^x163)|x164));

	if (t40 != 146LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = 1966U;
	static int32_t x166 = -8;
	static uint32_t t41 = 59167469U;

	t41 = (x165%((x166^x167)|x168));

	if (t41 != 1966U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	volatile uint32_t x170 = 508U;
	int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MAX;

	t42 = (x169%((x170^x171)|x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	static uint16_t x174 = 4U;
	int8_t x175 = -39;
	int8_t x176 = -1;
	volatile int32_t t43 = 24;

	t43 = (x173%((x174^x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = 7589930360LL;
	static int8_t x179 = INT8_MIN;
	uint8_t x180 = UINT8_MAX;

	t44 = (x177%((x178^x179)|x180));

	if (t44 != -5807756108LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	static int16_t x183 = INT16_MAX;

	t45 = (x181%((x182^x183)|x184));

	if (t45 != 2147450880LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x188 = INT16_MAX;
	static int32_t t46 = -45;

	t46 = (x185%((x186^x187)|x188));

	if (t46 != -19) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = -1;
	static int64_t x191 = 717043843020LL;
	uint16_t x192 = UINT16_MAX;

	t47 = (x189%((x190^x191)|x192));

	if (t47 != -26LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x195 = 6;
	static volatile uint32_t t48 = 434511U;

	t48 = (x193%((x194^x195)|x196));

	if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static int16_t x198 = -15249;
	int8_t x199 = INT8_MIN;
	static uint8_t x200 = 33U;
	int32_t t49 = -24590;

	t49 = (x197%((x198^x199)|x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -3;
	static uint64_t x202 = 84399LLU;
	volatile uint32_t x203 = UINT32_MAX;
	uint16_t x204 = UINT16_MAX;
	volatile uint64_t t50 = 481920704791096LLU;

	t50 = (x201%((x202^x203)|x204));

	if (t50 != 196607LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 7588335140LLU;
	int8_t x207 = -29;
	int16_t x208 = INT16_MAX;
	uint64_t t51 = 98879LLU;

	t51 = (x205%((x206^x207)|x208));

	if (t51 != 7588335140LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MAX;
	static int32_t x211 = INT32_MAX;
	static uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = 55;

	t52 = (x209%((x210^x211)|x212));

	if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x214 = INT8_MAX;
	uint32_t x216 = UINT32_MAX;
	uint64_t t53 = 104954246LLU;

	t53 = (x213%((x214^x215)|x216));

	if (t53 != 255LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	int16_t x219 = 1;
	volatile int32_t t54 = 1328080;

	t54 = (x217%((x218^x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t55 = 7997347066LLU;

	t55 = (x221%((x222^x223)|x224));

	if (t55 != 65535LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MAX;
	static uint32_t x227 = 52319U;
	volatile uint64_t t56 = 41353873543LLU;

	t56 = (x225%((x226^x227)|x228));

	if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x230 = 17489344LLU;
	volatile int64_t x231 = INT64_MIN;

	t57 = (x229%((x230^x231)|x232));

	if (t57 != 9223372036837253692LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 225620890905827214LLU;
	uint8_t x235 = 2U;

	t58 = (x233%((x234^x235)|x236));

	if (t58 != 65535LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	static uint32_t t59 = 7450U;

	t59 = (x237%((x238^x239)|x240));

	if (t59 != 131218U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = UINT16_MAX;
	uint8_t x243 = 18U;
	int32_t x244 = -256656299;
	static volatile int32_t t60 = 87522;

	t60 = (x241%((x242^x243)|x244));

	if (t60 != -41) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 30U;
	int8_t x246 = INT8_MAX;
	volatile int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MAX;

	t61 = (x245%((x246^x247)|x248));

	if (t61 != 30) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 18U;
	static uint64_t x250 = UINT64_MAX;
	int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	static volatile uint64_t t62 = 188362295610756288LLU;

	t62 = (x249%((x250^x251)|x252));

	if (t62 != 18LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	uint8_t x255 = 0U;
	int64_t x256 = -85842760001195LL;
	volatile int64_t t63 = 1991703048748383LL;

	t63 = (x253%((x254^x255)|x256));

	if (t63 != 4294967295LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	uint16_t x258 = UINT16_MAX;
	int64_t x259 = INT64_MIN;
	volatile int8_t x260 = INT8_MIN;
	int64_t t64 = 115398LL;

	t64 = (x257%((x258^x259)|x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x262 = 9457U;
	int16_t x263 = -17;
	uint8_t x264 = UINT8_MAX;
	volatile uint64_t t65 = 6316LLU;

	t65 = (x261%((x262^x263)|x264));

	if (t65 != 1002584996LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 28;
	int16_t x266 = -1;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = 24U;
	int32_t t66 = 163;

	t66 = (x265%((x266^x267)|x268));

	if (t66 != 28) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 5439723LLU;
	uint8_t x271 = 1U;
	static uint64_t t67 = 468102694044LLU;

	t67 = (x269%((x270^x271)|x272));

	if (t67 != 2386322LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = -23;
	uint16_t x275 = UINT16_MAX;
	volatile int8_t x276 = -1;
	int32_t t68 = 30315399;

	t68 = (x273%((x274^x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int32_t x279 = INT32_MIN;
	static uint32_t x280 = 174U;
	uint32_t t69 = 4070774U;

	t69 = (x277%((x278^x279)|x280));

	if (t69 != 127U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1731;
	int32_t x282 = -24;
	int8_t x284 = -1;
	volatile int32_t t70 = -425;

	t70 = (x281%((x282^x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x287 = UINT8_MAX;
	volatile int8_t x288 = 16;
	volatile int32_t t71 = 1;

	t71 = (x285%((x286^x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = INT8_MIN;
	int32_t x291 = 282;
	int8_t x292 = -1;
	int32_t t72 = 0;

	t72 = (x289%((x290^x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = UINT16_MAX;
	volatile int16_t x295 = INT16_MIN;
	static int64_t x296 = INT64_MIN;
	int64_t t73 = 57LL;

	t73 = (x293%((x294^x295)|x296));

	if (t73 != 33LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = 1;
	uint16_t x300 = UINT16_MAX;
	int32_t t74 = -22;

	t74 = (x297%((x298^x299)|x300));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile uint64_t x302 = 3527026179279047LLU;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = 10U;

	t75 = (x301%((x302^x303)|x304));

	if (t75 != 3527026179307185LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	int16_t x306 = INT16_MAX;
	uint16_t x307 = 11823U;
	int64_t x308 = -55943759100LL;
	int64_t t76 = 28760984LL;

	t76 = (x305%((x306^x307)|x308));

	if (t76 != 255LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MIN;
	uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 108719925U;
	uint64_t t77 = 1907961825295597240LLU;

	t77 = (x309%((x310^x311)|x312));

	if (t77 != 32767LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x313 = 15827LLU;
	uint32_t x314 = 16257806U;
	int8_t x315 = -1;
	static volatile uint64_t t78 = 1LLU;

	t78 = (x313%((x314^x315)|x316));

	if (t78 != 15827LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = UINT64_MAX;
	uint8_t x319 = 76U;
	int8_t x320 = INT8_MAX;
	static uint64_t t79 = 25158818756LLU;

	t79 = (x317%((x318^x319)|x320));

	if (t79 != 2147483520LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	static uint32_t x323 = 1U;
	static uint64_t t80 = 748526658289LLU;

	t80 = (x321%((x322^x323)|x324));

	if (t80 != 2147483647LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 2U;
	int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MIN;

	t81 = (x325%((x326^x327)|x328));

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	static int32_t x330 = INT32_MIN;
	volatile int64_t x331 = INT64_MIN;

	t82 = (x329%((x330^x331)|x332));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = 78754225U;
	int8_t x334 = 6;
	uint64_t x335 = 1LLU;
	int16_t x336 = 1450;
	uint64_t t83 = 228999845748111LLU;

	t83 = (x333%((x334^x335)|x336));

	if (t83 != 895LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	int32_t x338 = INT32_MIN;
	uint16_t x340 = 8324U;
	volatile uint64_t t84 = 29396359950896LLU;

	t84 = (x337%((x338^x339)|x340));

	if (t84 != 127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int16_t x343 = -1775;
	volatile int16_t x344 = INT16_MAX;
	volatile int64_t t85 = 384516LL;

	t85 = (x341%((x342^x343)|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x345 = 19U;
	static uint16_t x346 = 874U;
	int16_t x347 = -1;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 127488752;

	t86 = (x345%((x346^x347)|x348));

	if (t86 != 19) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = 0;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MAX;
	int16_t x352 = INT16_MAX;
	int32_t t87 = -21456;

	t87 = (x349%((x350^x351)|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 0U;
	static int8_t x354 = -6;
	uint32_t x355 = UINT32_MAX;
	uint32_t t88 = 282835U;

	t88 = (x353%((x354^x355)|x356));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -7847;
	uint8_t x358 = UINT8_MAX;
	static uint16_t x360 = 1085U;

	t89 = (x357%((x358^x359)|x360));

	if (t89 != 18446744073709543769LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MAX;
	int16_t x362 = -1;
	int32_t x364 = INT32_MAX;

	t90 = (x361%((x362^x363)|x364));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 1595586;
	int16_t x366 = 0;
	int32_t t91 = 5745840;

	t91 = (x365%((x366^x367)|x368));

	if (t91 != 85) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 5535569919249973105LLU;
	int8_t x371 = INT8_MAX;

	t92 = (x369%((x370^x371)|x372));

	if (t92 != 25090LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	int16_t x375 = -9;
	static int32_t x376 = INT32_MIN;
	static int32_t t93 = 99;

	t93 = (x373%((x374^x375)|x376));

	if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	static int32_t x378 = 135785932;
	static uint64_t x379 = 627190106726948LLU;
	uint32_t x380 = UINT32_MAX;
	uint64_t t94 = 547602512185447LLU;

	t94 = (x377%((x378^x379)|x380));

	if (t94 != 339154240041699LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = -1;
	int8_t x382 = -16;
	int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 52383894;

	t95 = (x381%((x382^x383)|x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static int16_t x386 = -1;
	static int64_t x387 = INT64_MAX;
	static volatile int16_t x388 = INT16_MAX;
	volatile int64_t t96 = 50169644840LL;

	t96 = (x385%((x386^x387)|x388));

	if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 474U;
	volatile uint8_t x391 = 53U;
	int64_t x392 = -435LL;
	volatile int64_t t97 = -984537457937129LL;

	t97 = (x389%((x390^x391)|x392));

	if (t97 != 57LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	int8_t x394 = INT8_MAX;
	volatile int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MAX;
	volatile int64_t t98 = -339248570LL;

	t98 = (x393%((x394^x395)|x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 492937825835LL;
	static int32_t x399 = 3694520;
	volatile uint64_t t99 = 361807LLU;

	t99 = (x397%((x398^x399)|x400));

	if (t99 != 492937825835LLU) { NG(); } else { ; }
	
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

