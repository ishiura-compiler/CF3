#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x2 = UINT32_MAX;
static volatile int64_t x12 = INT64_MAX;
volatile uint8_t x27 = 3U;
static int16_t x32 = -1;
uint8_t x34 = UINT8_MAX;
int16_t x37 = INT16_MAX;
int32_t t9 = -331839286;
uint8_t x42 = UINT8_MAX;
int8_t x49 = INT8_MIN;
volatile uint32_t t12 = 99103673U;
static int16_t x55 = INT16_MIN;
static int8_t x56 = INT8_MAX;
static int32_t x57 = -2;
static uint32_t x58 = UINT32_MAX;
uint32_t x59 = 99170790U;
uint32_t t14 = 63866U;
int32_t x64 = INT32_MIN;
static int8_t x67 = INT8_MAX;
volatile int16_t x74 = -42;
static uint64_t x76 = UINT64_MAX;
int16_t x78 = 0;
static uint32_t x81 = 6200U;
int64_t x83 = 44717LL;
int64_t x96 = INT64_MIN;
uint32_t x97 = 13943U;
uint8_t x108 = 3U;
int32_t x120 = -1;
int16_t x126 = INT16_MIN;
static volatile int8_t x143 = -1;
uint32_t x147 = 762927U;
int16_t x153 = INT16_MAX;
volatile uint8_t x154 = 2U;
static int32_t x156 = INT32_MIN;
uint16_t x157 = UINT16_MAX;
int8_t x158 = INT8_MAX;
int32_t t39 = 432920088;
int64_t x162 = 55321LL;
volatile uint32_t x163 = UINT32_MAX;
uint16_t x168 = UINT16_MAX;
int32_t x169 = 2;
uint16_t x174 = UINT16_MAX;
int32_t x188 = INT32_MIN;
uint8_t x189 = UINT8_MAX;
uint64_t x190 = 178LLU;
volatile int16_t x191 = 1;
volatile int32_t x194 = INT32_MIN;
int8_t x202 = -1;
volatile uint8_t x208 = UINT8_MAX;
static uint64_t t52 = 2854LLU;
int32_t x213 = -1304303;
int64_t x217 = -7816073509207LL;
volatile uint64_t x220 = 4256691471491659569LLU;
int64_t x223 = -448957130LL;
uint8_t x225 = UINT8_MAX;
int64_t x226 = INT64_MIN;
volatile int64_t x230 = -2326991LL;
static int64_t x231 = -1LL;
int16_t x241 = INT16_MIN;
int16_t x243 = INT16_MAX;
uint32_t x245 = UINT32_MAX;
int8_t x252 = INT8_MIN;
uint64_t t62 = 255754564315924547LLU;
int8_t x264 = 1;
volatile uint32_t t65 = 85804U;
volatile uint32_t t67 = 1004U;
uint8_t x273 = 1U;
static uint16_t x278 = UINT16_MAX;
volatile uint16_t x280 = 419U;
static volatile uint32_t x283 = 15U;
volatile uint8_t x286 = 1U;
volatile int64_t t71 = 3LL;
uint64_t x290 = 252725987084125941LLU;
uint64_t t72 = 3LLU;
int16_t x297 = INT16_MIN;
static uint32_t x300 = 124U;
uint64_t t75 = 5732646LLU;
int32_t x305 = INT32_MAX;
static int16_t x311 = 1;
int8_t x313 = INT8_MAX;
int32_t x320 = INT32_MAX;
uint32_t x321 = UINT32_MAX;
int32_t x323 = -1;
uint64_t x326 = 2794315642LLU;
int64_t x332 = -16264LL;
int64_t x333 = INT64_MIN;
static int64_t t83 = -1193LL;
int64_t x337 = -1LL;
volatile int32_t x338 = -981497;
int64_t x340 = -1LL;
static int64_t x346 = 147693458761LL;
static int64_t x368 = INT64_MAX;
volatile int8_t x370 = INT8_MAX;
int32_t x380 = -151;
int16_t x381 = INT16_MIN;
static int64_t x388 = INT64_MAX;
uint8_t x389 = 22U;
static volatile uint32_t t97 = 1032055580U;
volatile int32_t x393 = -610;
uint32_t t98 = 801U;
uint64_t x398 = UINT64_MAX;
uint64_t x400 = UINT64_MAX;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int32_t x3 = 57;
	int8_t x4 = -1;
	uint32_t t0 = 2751854U;

	t0 = (x1&((x2&x3)|x4));

	if (t0 != 127U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -10;
	static int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MIN;
	int16_t x8 = 7;
	volatile int32_t t1 = 13770363;

	t1 = (x5&((x6&x7)|x8));

	if (t1 != -2147483642) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = 0U;
	uint16_t x10 = UINT16_MAX;
	int32_t x11 = -249232;
	volatile int64_t t2 = 517836477398LL;

	t2 = (x9&((x10&x11)|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	uint16_t x15 = 1U;
	static uint8_t x16 = 7U;
	volatile uint32_t t3 = 0U;

	t3 = (x13&((x14&x15)|x16));

	if (t3 != 7U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 426802165U;
	int8_t x18 = 5;
	int8_t x19 = INT8_MIN;
	uint32_t x20 = 63601566U;
	uint32_t t4 = 1007U;

	t4 = (x17&((x18&x19)|x20));

	if (t4 != 21003156U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = 3;
	uint8_t x22 = 2U;
	uint64_t x23 = 0LLU;
	static volatile uint8_t x24 = 56U;
	volatile uint64_t t5 = 1825191LLU;

	t5 = (x21&((x22&x23)|x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	static int32_t x26 = 71199;
	static volatile int64_t x28 = INT64_MIN;
	int64_t t6 = -2186352489320863499LL;

	t6 = (x25&((x26&x27)|x28));

	if (t6 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 8666U;
	static int8_t x30 = -1;
	int16_t x31 = -1;
	int32_t t7 = 483542;

	t7 = (x29&((x30&x31)|x32));

	if (t7 != 8666) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x35 = -1;
	static volatile uint64_t x36 = 69329572LLU;
	volatile uint64_t t8 = 76LLU;

	t8 = (x33&((x34&x35)|x36));

	if (t8 != 69329663LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	int32_t x39 = -124503;
	int8_t x40 = INT8_MAX;

	t9 = (x37&((x38&x39)|x40));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = INT32_MAX;
	uint32_t x43 = 368U;
	int8_t x44 = INT8_MIN;
	uint32_t t10 = 2813968U;

	t10 = (x41&((x42&x43)|x44));

	if (t10 != 2147483632U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	static int32_t x46 = -1;
	volatile int8_t x47 = INT8_MIN;
	int32_t x48 = -1;
	uint32_t t11 = UINT32_MAX;

	t11 = (x45&((x46&x47)|x48));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 13U;
	static uint8_t x51 = 67U;
	uint32_t x52 = 2780470U;

	t12 = (x49&((x50&x51)|x52));

	if (t12 != 2780416U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 0;
	int32_t x54 = -1;
	int32_t t13 = -7;

	t13 = (x53&((x54&x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x60 = INT8_MAX;

	t14 = (x57&((x58&x59)|x60));

	if (t14 != 99170814U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 2U;
	uint64_t x62 = 850993LLU;
	int64_t x63 = INT64_MIN;
	static volatile uint64_t t15 = 1615614148LLU;

	t15 = (x61&((x62&x63)|x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	static int64_t x66 = INT64_MIN;
	int8_t x68 = INT8_MAX;
	volatile int64_t t16 = 39236641005474LL;

	t16 = (x65&((x66&x67)|x68));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t x72 = -1;
	volatile uint64_t t17 = 1083799262253677LLU;

	t17 = (x69&((x70&x71)|x72));

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	static volatile uint64_t x75 = 974246LLU;
	volatile uint64_t t18 = 4648574000632565LLU;

	t18 = (x73&((x74&x75)|x76));

	if (t18 != 4294967295LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	uint16_t x79 = 0U;
	int64_t x80 = INT64_MAX;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x77&((x78&x79)|x80));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -20;
	int32_t x84 = 89141;
	volatile int64_t t20 = -66442038587563129LL;

	t20 = (x81&((x82&x83)|x84));

	if (t20 != 6200LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 1;
	int64_t x86 = 3816767548064LL;
	int32_t x87 = -1;
	static int32_t x88 = INT32_MIN;
	int64_t t21 = -181768018207586LL;

	t21 = (x85&((x86&x87)|x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	int16_t x90 = -5;
	volatile int8_t x91 = 1;
	uint64_t x92 = 804003673LLU;
	static uint64_t t22 = 1571265088LLU;

	t22 = (x89&((x90&x91)|x92));

	if (t22 != 804003584LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MAX;
	static int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MIN;
	int64_t t23 = 1LL;

	t23 = (x93&((x94&x95)|x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = -1;
	uint32_t x99 = 299173136U;
	int16_t x100 = INT16_MAX;
	volatile uint32_t t24 = 26391735U;

	t24 = (x97&((x98&x99)|x100));

	if (t24 != 13943U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 0;
	static int32_t x102 = -1;
	volatile int32_t x103 = -1;
	uint32_t x104 = UINT32_MAX;
	volatile uint32_t t25 = 136U;

	t25 = (x101&((x102&x103)|x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = -11;
	uint16_t x107 = 0U;
	int32_t t26 = -4;

	t26 = (x105&((x106&x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = 13U;
	static int64_t x111 = INT64_MIN;
	volatile int32_t x112 = INT32_MAX;
	volatile int64_t t27 = -975555850LL;

	t27 = (x109&((x110&x111)|x112));

	if (t27 != 2147483520LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 20203U;
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;
	uint32_t t28 = 110339236U;

	t28 = (x113&((x114&x115)|x116));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	uint32_t x118 = 0U;
	uint64_t x119 = 9348729LLU;
	uint64_t t29 = 66698LLU;

	t29 = (x117&((x118&x119)|x120));

	if (t29 != 65535LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x121 = 68969503491591559LLU;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	static int16_t x124 = INT16_MAX;
	uint64_t t30 = 31516LLU;

	t30 = (x121&((x122&x123)|x124));

	if (t30 != 68969501814689159LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MIN;
	volatile uint8_t x127 = 107U;
	static uint32_t x128 = UINT32_MAX;
	uint32_t t31 = 58118217U;

	t31 = (x125&((x126&x127)|x128));

	if (t31 != 2147483648U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	int64_t x130 = 1503353124926LL;
	int16_t x131 = INT16_MIN;
	int32_t x132 = INT32_MIN;
	volatile int64_t t32 = 9439LL;

	t32 = (x129&((x130&x131)|x132));

	if (t32 != -2032926720LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	uint8_t x135 = 0U;
	uint64_t x136 = 88135298084211469LLU;
	static volatile uint64_t t33 = 10159082524965LLU;

	t33 = (x133&((x134&x135)|x136));

	if (t33 != 88135297304363008LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	uint8_t x138 = 19U;
	int16_t x139 = INT16_MIN;
	static volatile int8_t x140 = -1;
	int32_t t34 = -143240;

	t34 = (x137&((x138&x139)|x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x142 = 31;
	volatile int16_t x144 = INT16_MAX;
	volatile uint64_t t35 = 253514778118158LLU;

	t35 = (x141&((x142&x143)|x144));

	if (t35 != 32767LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 36252;
	uint8_t x146 = UINT8_MAX;
	int8_t x148 = 4;
	uint32_t t36 = 12016U;

	t36 = (x145&((x146&x147)|x148));

	if (t36 != 12U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 1;
	int64_t x150 = -1LL;
	static volatile int16_t x151 = INT16_MIN;
	volatile uint8_t x152 = UINT8_MAX;
	int64_t t37 = 2LL;

	t37 = (x149&((x150&x151)|x152));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x155 = -1;
	int32_t t38 = 0;

	t38 = (x153&((x154&x155)|x156));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x159 = -1;
	static int16_t x160 = INT16_MIN;

	t39 = (x157&((x158&x159)|x160));

	if (t39 != 32895) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x164 = INT16_MIN;
	static volatile int64_t t40 = 107LL;

	t40 = (x161&((x162&x163)|x164));

	if (t40 != 4294957081LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 6;
	int64_t x166 = -4725684377050LL;
	static int32_t x167 = -1419364;
	int64_t t41 = -6357752157363LL;

	t41 = (x165&((x166&x167)|x168));

	if (t41 != 6LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x170 = INT32_MAX;
	uint32_t x171 = UINT32_MAX;
	uint16_t x172 = 24422U;
	static volatile uint32_t t42 = 223U;

	t42 = (x169&((x170&x171)|x172));

	if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	int64_t x175 = INT64_MIN;
	volatile int16_t x176 = 143;
	int64_t t43 = 57475LL;

	t43 = (x173&((x174&x175)|x176));

	if (t43 != 143LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	int8_t x178 = INT8_MIN;
	uint8_t x179 = 38U;
	static int32_t x180 = INT32_MIN;
	int64_t t44 = 330066657246046865LL;

	t44 = (x177&((x178&x179)|x180));

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint32_t x182 = UINT32_MAX;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = INT32_MIN;
	uint64_t t45 = 23723LLU;

	t45 = (x181&((x182&x183)|x184));

	if (t45 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static int16_t x186 = INT16_MIN;
	uint16_t x187 = 3U;
	volatile int32_t t46 = INT32_MIN;

	t46 = (x185&((x186&x187)|x188));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x192 = 13392759538836679LLU;
	volatile uint64_t t47 = 1265974LLU;

	t47 = (x189&((x190&x191)|x192));

	if (t47 != 199LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 1U;
	int32_t x195 = -4401255;
	int16_t x196 = INT16_MIN;
	int32_t t48 = 41016361;

	t48 = (x193&((x194&x195)|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	static volatile int16_t x198 = 1;
	int16_t x199 = 1529;
	uint16_t x200 = 2U;
	int32_t t49 = 778995;

	t49 = (x197&((x198&x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MAX;
	volatile uint8_t x203 = 21U;
	uint16_t x204 = UINT16_MAX;
	int32_t t50 = -244;

	t50 = (x201&((x202&x203)|x204));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MIN;
	int64_t x206 = 448LL;
	int16_t x207 = -1;
	int64_t t51 = 5512013368500371LL;

	t51 = (x205&((x206&x207)|x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = -1;
	static uint64_t x211 = 2820646508933716LLU;
	int16_t x212 = 1;

	t52 = (x209&((x210&x211)|x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x214 = -1;
	uint8_t x215 = 31U;
	static volatile uint16_t x216 = 77U;
	volatile int32_t t53 = 1006898;

	t53 = (x213&((x214&x215)|x216));

	if (t53 != 17) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = 63U;
	static uint32_t x219 = 7U;
	volatile uint64_t t54 = 6242LLU;

	t54 = (x217&((x218&x219)|x220));

	if (t54 != 4256684792817452577LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 0;
	static uint32_t x222 = UINT32_MAX;
	volatile uint16_t x224 = 16U;
	volatile int64_t t55 = 17LL;

	t55 = (x221&((x222&x223)|x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x227 = 5U;
	int8_t x228 = INT8_MIN;
	int64_t t56 = -169219082139253LL;

	t56 = (x225&((x226&x227)|x228));

	if (t56 != 128LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -85LL;
	int64_t x232 = -1694LL;
	volatile int64_t t57 = 43307915670737LL;

	t57 = (x229&((x230&x231)|x232));

	if (t57 != -221LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -15;
	static int16_t x234 = -1;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = INT16_MIN;
	uint32_t t58 = 1192U;

	t58 = (x233&((x234&x235)|x236));

	if (t58 != 4294967281U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -1580132LL;
	uint16_t x238 = 18309U;
	static int32_t x239 = -31;
	int16_t x240 = -1;
	volatile int64_t t59 = -2LL;

	t59 = (x237&((x238&x239)|x240));

	if (t59 != -1580132LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = INT32_MIN;
	uint16_t x244 = 0U;
	int32_t t60 = -1;

	t60 = (x241&((x242&x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = 1U;
	static volatile int64_t t61 = 3181809276LL;

	t61 = (x245&((x246&x247)|x248));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = 18070552924278LLU;
	uint64_t x251 = 146LLU;

	t62 = (x249&((x250&x251)|x252));

	if (t62 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 58;
	uint64_t x254 = 34496232120521424LLU;
	int8_t x255 = 34;
	uint32_t x256 = UINT32_MAX;
	static volatile uint64_t t63 = 299070035596492LLU;

	t63 = (x253&((x254&x255)|x256));

	if (t63 != 58LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	volatile uint16_t x258 = 37U;
	int64_t x259 = -877846074297498LL;
	int8_t x260 = INT8_MIN;
	volatile int64_t t64 = -918639125063LL;

	t64 = (x257&((x258&x259)|x260));

	if (t64 != 65444LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 21982566U;
	uint32_t x262 = 1078989332U;
	volatile int16_t x263 = INT16_MAX;

	t65 = (x261&((x262&x263)|x264));

	if (t65 != 4U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 2043976831U;
	static int64_t x266 = -1LL;
	static volatile int8_t x267 = INT8_MIN;
	static uint64_t x268 = 4986064117LLU;
	volatile uint64_t t66 = 29917620694499555LLU;

	t66 = (x265&((x266&x267)|x268));

	if (t66 != 2043976821LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 0U;
	int32_t x270 = 1;
	volatile int8_t x271 = INT8_MIN;
	volatile uint16_t x272 = UINT16_MAX;

	t67 = (x269&((x270&x271)|x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MIN;
	int64_t x275 = 1499234710LL;
	volatile uint16_t x276 = UINT16_MAX;
	int64_t t68 = 27681418811434413LL;

	t68 = (x273&((x274&x275)|x276));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = 6863LLU;
	uint8_t x279 = UINT8_MAX;
	volatile uint64_t t69 = 5858044980066LLU;

	t69 = (x277&((x278&x279)|x280));

	if (t69 != 207LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = INT8_MIN;
	uint64_t x282 = 6746020894079573LLU;
	int16_t x284 = 264;
	uint64_t t70 = 6299LLU;

	t70 = (x281&((x282&x283)|x284));

	if (t70 != 256LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	static volatile int64_t x288 = INT64_MAX;

	t71 = (x285&((x286&x287)|x288));

	if (t71 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	volatile int64_t x291 = INT64_MAX;
	uint8_t x292 = 73U;

	t72 = (x289&((x290&x291)|x292));

	if (t72 != 252725987084125824LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = 0;
	int16_t x294 = 1;
	volatile int8_t x295 = INT8_MAX;
	uint16_t x296 = 6306U;
	volatile int32_t t73 = -1120;

	t73 = (x293&((x294&x295)|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x298 = 14U;
	int8_t x299 = INT8_MIN;
	volatile uint32_t t74 = 186958148U;

	t74 = (x297&((x298&x299)|x300));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 142994LLU;
	int8_t x302 = 10;
	static int64_t x303 = -123143155317LL;
	volatile int32_t x304 = INT32_MAX;

	t75 = (x301&((x302&x303)|x304));

	if (t75 != 142994LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MAX;
	uint64_t x307 = 1508LLU;
	static int32_t x308 = INT32_MIN;
	static uint64_t t76 = 1435LLU;

	t76 = (x305&((x306&x307)|x308));

	if (t76 != 1508LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	volatile int32_t x312 = INT32_MAX;
	int32_t t77 = INT32_MAX;

	t77 = (x309&((x310&x311)|x312));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x314 = INT64_MIN;
	uint8_t x315 = UINT8_MAX;
	int8_t x316 = INT8_MAX;
	int64_t t78 = 1802999985LL;

	t78 = (x313&((x314&x315)|x316));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -430301465;
	int32_t x318 = INT32_MAX;
	int32_t x319 = 41162;
	int32_t t79 = -103130787;

	t79 = (x317&((x318&x319)|x320));

	if (t79 != 1717182183) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x322 = 45104U;
	int8_t x324 = INT8_MIN;
	volatile uint32_t t80 = 147U;

	t80 = (x321&((x322&x323)|x324));

	if (t80 != 4294967216U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int64_t x327 = 1930509296LL;
	static uint8_t x328 = 45U;
	uint64_t t81 = 126507712747379LLU;

	t81 = (x325&((x326&x327)|x328));

	if (t81 != 570497917LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	static int64_t x330 = -1LL;
	static volatile int64_t x331 = -1LL;
	volatile int64_t t82 = -285469981890257LL;

	t82 = (x329&((x330&x331)|x332));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MAX;
	uint8_t x335 = UINT8_MAX;
	volatile int64_t x336 = 686217360140732LL;

	t83 = (x333&((x334&x335)|x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x339 = INT64_MIN;
	volatile int64_t t84 = 6112511LL;

	t84 = (x337&((x338&x339)|x340));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = 51855289U;
	static volatile uint16_t x342 = UINT16_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	int8_t x344 = -3;
	volatile uint32_t t85 = 663U;

	t85 = (x341&((x342&x343)|x344));

	if (t85 != 51855289U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x345 = 205U;
	int32_t x347 = INT32_MIN;
	static volatile int8_t x348 = INT8_MIN;
	volatile int64_t t86 = -303512LL;

	t86 = (x345&((x346&x347)|x348));

	if (t86 != 128LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 19LLU;
	int64_t x350 = -2742880LL;
	static volatile uint64_t x351 = 13965LLU;
	int8_t x352 = 3;
	uint64_t t87 = 31055493656LLU;

	t87 = (x349&((x350&x351)|x352));

	if (t87 != 3LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	static int16_t x354 = -1;
	uint64_t x355 = 4814885LLU;
	volatile uint16_t x356 = 49U;
	volatile uint64_t t88 = 0LLU;

	t88 = (x353&((x354&x355)|x356));

	if (t88 != 4814848LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	uint16_t x358 = 751U;
	uint8_t x359 = 100U;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = -1928536;

	t89 = (x357&((x358&x359)|x360));

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = 34017545055LL;
	volatile int32_t x362 = -1;
	uint32_t x363 = UINT32_MAX;
	int64_t x364 = INT64_MIN;
	volatile int64_t t90 = 350087LL;

	t90 = (x361&((x362&x363)|x364));

	if (t90 != 3952773983LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	static volatile int8_t x366 = -6;
	int16_t x367 = INT16_MAX;
	volatile int64_t t91 = 15911711850LL;

	t91 = (x365&((x366&x367)|x368));

	if (t91 != 255LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = UINT8_MAX;
	static int8_t x371 = -1;
	int32_t x372 = INT32_MIN;
	volatile int32_t t92 = 6;

	t92 = (x369&((x370&x371)|x372));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x373 = UINT8_MAX;
	uint16_t x374 = 11U;
	int8_t x375 = -1;
	volatile uint8_t x376 = 99U;
	int32_t t93 = -512158282;

	t93 = (x373&((x374&x375)|x376));

	if (t93 != 107) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 61;
	volatile int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MIN;
	volatile int32_t t94 = 4;

	t94 = (x377&((x378&x379)|x380));

	if (t94 != 41) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = -4;
	int32_t x383 = INT32_MAX;
	static int64_t x384 = -124535412LL;
	volatile int64_t t95 = 391149172037LL;

	t95 = (x381&((x382&x383)|x384));

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = 1;
	uint64_t x386 = 20LLU;
	int32_t x387 = INT32_MIN;
	volatile uint64_t t96 = 4992310794731629LLU;

	t96 = (x385&((x386&x387)|x388));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x390 = 10465U;
	int32_t x391 = -24;
	volatile int16_t x392 = -1;

	t97 = (x389&((x390&x391)|x392));

	if (t97 != 22U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MIN;
	uint16_t x395 = 1806U;
	static uint32_t x396 = 364710U;

	t98 = (x393&((x394&x395)|x396));

	if (t98 != 365958U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	static int32_t x399 = 0;
	uint64_t t99 = 22139LLU;

	t99 = (x397&((x398&x399)|x400));

	if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
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

