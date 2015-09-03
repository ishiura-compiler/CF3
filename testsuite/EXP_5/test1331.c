#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
static uint8_t x5 = 0U;
static int32_t x8 = -166226371;
volatile int32_t t2 = -384248;
static uint32_t x15 = 103827585U;
int8_t x34 = INT8_MAX;
uint32_t x40 = UINT32_MAX;
static int16_t x41 = INT16_MIN;
int8_t x42 = -2;
volatile int8_t x43 = INT8_MIN;
int32_t x44 = -1;
int64_t x47 = INT64_MAX;
int64_t x48 = INT64_MAX;
static volatile uint64_t t13 = 189542918239LLU;
volatile int8_t x58 = -38;
int16_t x59 = -1;
volatile int64_t x60 = 880564974746755LL;
uint32_t t16 = 373007U;
static int64_t x69 = INT64_MIN;
int16_t x73 = 489;
int64_t x74 = -106171133368275560LL;
int16_t x82 = INT16_MIN;
static int64_t x85 = -61318272989LL;
int32_t x98 = INT32_MIN;
static volatile uint64_t t24 = 3256050037177LLU;
int64_t x102 = 183595972786093280LL;
static volatile uint32_t x103 = UINT32_MAX;
int32_t t26 = 5;
volatile uint64_t x111 = 11851709177151512LLU;
volatile uint64_t x122 = UINT64_MAX;
uint64_t x126 = 25LLU;
int64_t x130 = INT64_MIN;
static int64_t t33 = 98449088127079LL;
int8_t x138 = -7;
uint32_t t34 = 6137U;
static int32_t x144 = INT32_MIN;
static uint8_t x146 = 19U;
uint16_t x153 = 322U;
int8_t x160 = -14;
int16_t x166 = -1;
int32_t x172 = INT32_MIN;
volatile uint32_t t44 = 10029U;
uint16_t x184 = UINT16_MAX;
int32_t t45 = -124;
int32_t x189 = -163727;
int32_t x191 = INT32_MAX;
int16_t x194 = -1;
int32_t x199 = INT32_MIN;
uint64_t x203 = 65218885345078946LLU;
static volatile int64_t t50 = 132508829913733LL;
static volatile int32_t t51 = -4;
int8_t x210 = INT8_MIN;
static int8_t x212 = -2;
static int32_t x222 = INT32_MIN;
volatile int32_t x226 = -1;
uint8_t x232 = 2U;
volatile int32_t x234 = 5871955;
int16_t x236 = 4;
int32_t x242 = -1;
static int8_t x249 = 0;
int64_t x254 = -1LL;
int8_t x255 = INT8_MAX;
volatile int64_t x268 = -1LL;
int64_t x271 = -28478534301LL;
uint64_t x274 = 1LLU;
uint16_t x278 = 13U;
volatile uint8_t x279 = 12U;
volatile int32_t t72 = 62;
uint16_t x302 = 3016U;
uint64_t x303 = 2286LLU;
static int64_t x312 = 780312409794346LL;
volatile int32_t x323 = -83842;
volatile int8_t x327 = -4;
int8_t x340 = INT8_MIN;
int32_t t83 = 4927;
int64_t x342 = 197015151473665LL;
static int16_t x344 = INT16_MAX;
int8_t x353 = INT8_MAX;
uint32_t x354 = 3527877U;
volatile int32_t t88 = -727;
volatile uint16_t x364 = 10U;
static int16_t x365 = INT16_MAX;
int64_t x375 = INT64_MIN;
int32_t x377 = INT32_MIN;
uint64_t x379 = 9LLU;
static volatile int32_t t92 = 173;
volatile uint64_t x381 = UINT64_MAX;
static uint64_t t93 = 2230957LLU;
static uint8_t x391 = 12U;
int8_t x398 = -1;
int8_t x399 = -2;
volatile int16_t x408 = INT16_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int64_t x2 = 2086157493LL;
	int16_t x4 = -1;
	volatile int32_t t0 = -198;

	t0 = (x1%((x2==x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	volatile int16_t x7 = -1;
	volatile int32_t t1 = 157;

	t1 = (x5%((x6==x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	int64_t x10 = INT64_MAX;
	int8_t x11 = -1;
	static int16_t x12 = 15684;

	t2 = (x9%((x10==x11)|x12));

	if (t2 != 2799) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int64_t x14 = -1LL;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 171;

	t3 = (x13%((x14==x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	static uint32_t x19 = 772361420U;
	static uint64_t x20 = 14LLU;
	uint64_t t4 = 4047939LLU;

	t4 = (x17%((x18==x19)|x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 6579806U;
	static volatile int16_t x22 = -47;
	int64_t x23 = 28238512825805279LL;
	static int16_t x24 = INT16_MIN;
	static volatile uint32_t t5 = 448U;

	t5 = (x21%((x22==x23)|x24));

	if (t5 != 6579806U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	uint32_t x26 = UINT32_MAX;
	int64_t x27 = -4911260LL;
	int32_t x28 = -1;
	static int32_t t6 = 0;

	t6 = (x25%((x26==x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 25U;
	int64_t x30 = INT64_MIN;
	static uint64_t x31 = 172096422297LLU;
	static volatile int8_t x32 = -21;
	static int32_t t7 = -1;

	t7 = (x29%((x30==x31)|x32));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x33 = UINT8_MAX;
	int16_t x35 = INT16_MAX;
	int32_t x36 = -1;
	int32_t t8 = 5966;

	t8 = (x33%((x34==x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 1U;
	int32_t x38 = -1;
	uint64_t x39 = 8165693792LLU;
	uint32_t t9 = 4366916U;

	t9 = (x37%((x38==x39)|x40));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t t10 = -2;

	t10 = (x41%((x42==x43)|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 500LLU;
	volatile int8_t x46 = -1;
	static uint64_t t11 = 406973881LLU;

	t11 = (x45%((x46==x47)|x48));

	if (t11 != 500LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MIN;
	volatile int64_t x52 = -264LL;
	volatile int64_t t12 = 322592LL;

	t12 = (x49%((x50==x51)|x52));

	if (t12 != 63LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	int32_t x54 = -1;
	uint16_t x55 = 202U;
	static uint64_t x56 = 2094504407838361821LLU;

	t13 = (x53%((x54==x55)|x56));

	if (t13 != 1690708811002656920LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 19717U;
	int64_t t14 = -3019399727LL;

	t14 = (x57%((x58==x59)|x60));

	if (t14 != 19717LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int16_t x62 = -1;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MIN;
	uint32_t t15 = 1659248099U;

	t15 = (x61%((x62==x63)|x64));

	if (t15 != 126U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	static int32_t x66 = INT32_MAX;
	int64_t x67 = -31916LL;
	volatile uint32_t x68 = UINT32_MAX;

	t16 = (x65%((x66==x67)|x68));

	if (t16 != 4294934528U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = INT16_MIN;
	uint8_t x71 = 0U;
	static volatile int32_t x72 = INT32_MAX;
	volatile int64_t t17 = -474052470522LL;

	t17 = (x69%((x70==x71)|x72));

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x75 = -1LL;
	static uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 7819357U;

	t18 = (x73%((x74==x75)|x76));

	if (t18 != 489U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	uint8_t x78 = 114U;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = -1;
	volatile int32_t t19 = 5793313;

	t19 = (x77%((x78==x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	static int32_t x84 = -21;
	volatile int32_t t20 = 15;

	t20 = (x81%((x82==x83)|x84));

	if (t20 != -8) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	uint8_t x87 = 1U;
	volatile uint64_t x88 = 31034LLU;
	static volatile uint64_t t21 = 3549135471623471LLU;

	t21 = (x85%((x86==x87)|x88));

	if (t21 != 11951LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile int32_t x90 = -1;
	int16_t x91 = 0;
	int32_t x92 = -1;
	int32_t t22 = -63;

	t22 = (x89%((x90==x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int64_t x94 = -1LL;
	uint32_t x95 = UINT32_MAX;
	static volatile uint32_t x96 = 38677222U;
	int64_t t23 = 55682761230LL;

	t23 = (x93%((x94==x95)|x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 215913875441LLU;
	uint16_t x99 = UINT16_MAX;
	uint16_t x100 = UINT16_MAX;

	t24 = (x97%((x98==x99)|x100));

	if (t24 != 36251LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 55340LLU;
	int8_t x104 = INT8_MIN;
	volatile uint64_t t25 = 103883576LLU;

	t25 = (x101%((x102==x103)|x104));

	if (t25 != 55340LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = 31508U;
	int16_t x108 = 1600;

	t26 = (x105%((x106==x107)|x108));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -1;
	static uint16_t x110 = UINT16_MAX;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = 109;

	t27 = (x109%((x110==x111)|x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	int8_t x114 = INT8_MIN;
	int64_t x115 = -618185939815238864LL;
	uint16_t x116 = 15747U;
	volatile uint64_t t28 = 1893644681107LLU;

	t28 = (x113%((x114==x115)|x116));

	if (t28 != 14523LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x117 = -706;
	int64_t x118 = INT64_MIN;
	volatile int16_t x119 = INT16_MIN;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = -1771874;

	t29 = (x117%((x118==x119)|x120));

	if (t29 != -196) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	static int8_t x123 = INT8_MIN;
	uint32_t x124 = 126152U;
	volatile uint32_t t30 = 11454U;

	t30 = (x121%((x122==x123)|x124));

	if (t30 != 127U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 224;
	int8_t x127 = INT8_MIN;
	int8_t x128 = -1;
	volatile int32_t t31 = 231;

	t31 = (x125%((x126==x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	static int64_t x131 = INT64_MIN;
	uint32_t x132 = 4964372U;
	volatile int64_t t32 = -1LL;

	t32 = (x129%((x130==x131)|x132));

	if (t32 != 308356LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 4;
	int16_t x134 = INT16_MIN;
	int32_t x135 = 6366;
	static volatile int64_t x136 = -15349126276068LL;

	t33 = (x133%((x134==x135)|x136));

	if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = -1;

	t34 = (x137%((x138==x139)|x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 1;
	uint16_t x142 = UINT16_MAX;
	volatile int8_t x143 = INT8_MIN;
	int32_t t35 = -31;

	t35 = (x141%((x142==x143)|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 63716267U;
	int64_t x147 = INT64_MIN;
	int8_t x148 = -3;
	uint32_t t36 = 81U;

	t36 = (x145%((x146==x147)|x148));

	if (t36 != 63716267U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	static int32_t x150 = -1;
	int32_t x151 = INT32_MIN;
	static int16_t x152 = -100;
	int64_t t37 = -2149547809866LL;

	t37 = (x149%((x150==x151)|x152));

	if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 677U;
	int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MIN;
	static int32_t t38 = -182222022;

	t38 = (x153%((x154==x155)|x156));

	if (t38 != 322) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 120289443U;
	int32_t x158 = INT32_MIN;
	int8_t x159 = -1;
	volatile uint32_t t39 = 27402U;

	t39 = (x157%((x158==x159)|x160));

	if (t39 != 120289443U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 0;
	int32_t x162 = INT32_MIN;
	volatile int32_t x163 = INT32_MIN;
	volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = 38882;

	t40 = (x161%((x162==x163)|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = -1;
	uint16_t x167 = UINT16_MAX;
	static int32_t x168 = INT32_MIN;
	int32_t t41 = -988921;

	t41 = (x165%((x166==x167)|x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MIN;
	volatile int16_t x170 = -1;
	int16_t x171 = -6936;
	volatile int64_t t42 = 35LL;

	t42 = (x169%((x170==x171)|x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = -1845674078307LL;
	int16_t x174 = -22;
	int16_t x175 = INT16_MIN;
	int16_t x176 = -5;
	volatile int64_t t43 = -1248817477364035LL;

	t43 = (x173%((x174==x175)|x176));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MIN;
	uint32_t x178 = 359425U;
	uint64_t x179 = 51883LLU;
	uint32_t x180 = UINT32_MAX;

	t44 = (x177%((x178==x179)|x180));

	if (t44 != 4294934528U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x181 = UINT16_MAX;
	volatile int16_t x182 = -11662;
	volatile uint64_t x183 = 17LLU;

	t45 = (x181%((x182==x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	static volatile uint32_t x186 = UINT32_MAX;
	int32_t x187 = -1;
	static volatile int32_t x188 = 1000;
	static volatile int32_t t46 = -223652830;

	t46 = (x185%((x186==x187)|x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x190 = 254403967191970LLU;
	int8_t x192 = INT8_MAX;
	int32_t t47 = 1712546;

	t47 = (x189%((x190==x191)|x192));

	if (t47 != -24) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -34784005;

	t48 = (x193%((x194==x195)|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	static uint32_t x198 = 42888425U;
	uint64_t x200 = 505003LLU;
	volatile uint64_t t49 = 98LLU;

	t49 = (x197%((x198==x199)|x200));

	if (t49 != 255LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	static int32_t x202 = INT32_MIN;
	static int64_t x204 = -8334639092920LL;

	t50 = (x201%((x202==x203)|x204));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int32_t x206 = -1;
	volatile uint8_t x207 = 69U;
	int8_t x208 = INT8_MIN;

	t51 = (x205%((x206==x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	static int16_t x211 = INT16_MAX;
	volatile int32_t t52 = -67013;

	t52 = (x209%((x210==x211)|x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	int64_t x214 = INT64_MIN;
	static int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MAX;
	volatile int64_t t53 = -19076953762LL;

	t53 = (x213%((x214==x215)|x216));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 7U;
	int32_t x218 = 1810071;
	int16_t x219 = INT16_MAX;
	int64_t x220 = -1LL;
	int64_t t54 = -566081536LL;

	t54 = (x217%((x218==x219)|x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 46U;
	uint8_t x223 = 8U;
	uint16_t x224 = UINT16_MAX;
	int32_t t55 = 1;

	t55 = (x221%((x222==x223)|x224));

	if (t55 != 46) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint64_t x227 = 649561LLU;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t56 = 43522923955817LL;

	t56 = (x225%((x226==x227)|x228));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 66U;
	volatile int32_t x230 = INT32_MIN;
	uint64_t x231 = 19666LLU;
	volatile int32_t t57 = -13;

	t57 = (x229%((x230==x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = INT8_MIN;
	int8_t x235 = -42;
	volatile int32_t t58 = -105508484;

	t58 = (x233%((x234==x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = 45816413;
	uint8_t x238 = 2U;
	int64_t x239 = -1790841636LL;
	static uint8_t x240 = UINT8_MAX;
	int32_t t59 = -1;

	t59 = (x237%((x238==x239)|x240));

	if (t59 != 53) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	static uint8_t x243 = 8U;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = 9797873;

	t60 = (x241%((x242==x243)|x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	uint64_t x246 = 979007828LLU;
	int32_t x247 = -1;
	int64_t x248 = -1LL;
	volatile int64_t t61 = 13369317276402247LL;

	t61 = (x245%((x246==x247)|x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x250 = 448;
	volatile uint64_t x251 = 23657743046LLU;
	uint16_t x252 = UINT16_MAX;
	int32_t t62 = -7448512;

	t62 = (x249%((x250==x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	static uint32_t x256 = 15U;
	static volatile uint32_t t63 = 217248134U;

	t63 = (x253%((x254==x255)|x256));

	if (t63 != 8U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = 10;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MIN;
	static int64_t t64 = 17LL;

	t64 = (x257%((x258==x259)|x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -2;
	volatile int64_t x262 = INT64_MIN;
	int32_t x263 = -240990546;
	static volatile int32_t x264 = 124174;
	int32_t t65 = -19065124;

	t65 = (x261%((x262==x263)|x264));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	static uint64_t x266 = UINT64_MAX;
	volatile uint64_t x267 = 392386654065524759LLU;
	volatile int64_t t66 = 14133080LL;

	t66 = (x265%((x266==x267)|x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = UINT64_MAX;
	int8_t x270 = -1;
	static int32_t x272 = 162385823;
	uint64_t t67 = 148LLU;

	t67 = (x269%((x270==x271)|x272));

	if (t67 != 137591618LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MAX;
	static uint8_t x275 = 119U;
	int64_t x276 = INT64_MIN;
	int64_t t68 = 6377173LL;

	t68 = (x273%((x274==x275)|x276));

	if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 0U;
	int64_t x280 = -30LL;
	int64_t t69 = 21LL;

	t69 = (x277%((x278==x279)|x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x285 = -1LL;
	static int8_t x286 = INT8_MAX;
	volatile int64_t x287 = 177272LL;
	int32_t x288 = INT32_MIN;
	volatile int64_t t70 = -7731728938103917LL;

	t70 = (x285%((x286==x287)|x288));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = -1;
	static int16_t x290 = INT16_MIN;
	static int32_t x291 = INT32_MIN;
	static uint32_t x292 = 233739982U;
	static volatile uint32_t t71 = 57487469U;

	t71 = (x289%((x290==x291)|x292));

	if (t71 != 87647619U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	int64_t x295 = -1LL;
	uint16_t x296 = UINT16_MAX;

	t72 = (x293%((x294==x295)|x296));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = -3;
	volatile int64_t x298 = 257357960885LL;
	uint32_t x299 = 748U;
	int64_t x300 = -1LL;
	volatile int64_t t73 = 0LL;

	t73 = (x297%((x298==x299)|x300));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1;
	int32_t x304 = -6576;
	int32_t t74 = 2;

	t74 = (x301%((x302==x303)|x304));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x305 = -466;
	volatile uint8_t x306 = 29U;
	int64_t x307 = INT64_MAX;
	int32_t x308 = INT32_MIN;
	volatile int32_t t75 = -62909243;

	t75 = (x305%((x306==x307)|x308));

	if (t75 != -466) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x309 = -1LL;
	static int16_t x310 = INT16_MIN;
	static volatile int64_t x311 = INT64_MIN;
	int64_t t76 = 217309443700675LL;

	t76 = (x309%((x310==x311)|x312));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = -9844;
	int32_t x314 = INT32_MIN;
	int32_t x315 = -1;
	uint16_t x316 = 18893U;
	volatile int32_t t77 = 6694437;

	t77 = (x313%((x314==x315)|x316));

	if (t77 != -9844) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int8_t x318 = 0;
	volatile int32_t x319 = -284457258;
	int16_t x320 = INT16_MIN;
	volatile int32_t t78 = -164589354;

	t78 = (x317%((x318==x319)|x320));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = INT8_MAX;
	static int64_t x322 = -1LL;
	static int8_t x324 = INT8_MIN;
	int32_t t79 = 21105723;

	t79 = (x321%((x322==x323)|x324));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = INT8_MIN;
	static int64_t x326 = INT64_MIN;
	volatile int32_t x328 = -1;
	int32_t t80 = 5325;

	t80 = (x325%((x326==x327)|x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = 351;
	uint16_t x330 = 15U;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	volatile int64_t t81 = 6LL;

	t81 = (x329%((x330==x331)|x332));

	if (t81 != 351LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x333 = INT16_MIN;
	static volatile int32_t x334 = INT32_MAX;
	int8_t x335 = 0;
	int16_t x336 = 1146;
	int32_t t82 = 6;

	t82 = (x333%((x334==x335)|x336));

	if (t82 != -680) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x337 = -1;
	volatile uint16_t x338 = 0U;
	int32_t x339 = -9191050;

	t83 = (x337%((x338==x339)|x340));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = 17523;
	int16_t x343 = -7061;
	int32_t t84 = 0;

	t84 = (x341%((x342==x343)|x344));

	if (t84 != 17523) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x345 = UINT8_MAX;
	static volatile int16_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	int16_t x348 = INT16_MIN;
	volatile int32_t t85 = 100460728;

	t85 = (x345%((x346==x347)|x348));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x349 = UINT32_MAX;
	uint16_t x350 = 2U;
	int8_t x351 = 1;
	int16_t x352 = -8;
	volatile uint32_t t86 = 258779U;

	t86 = (x349%((x350==x351)|x352));

	if (t86 != 7U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x355 = UINT16_MAX;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t87 = 2;

	t87 = (x353%((x354==x355)|x356));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = 9314735;
	uint8_t x358 = 88U;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = 2;

	t88 = (x357%((x358==x359)|x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x361 = 1800182746U;
	volatile int16_t x362 = -1;
	int64_t x363 = INT64_MIN;
	uint32_t t89 = 16009962U;

	t89 = (x361%((x362==x363)|x364));

	if (t89 != 6U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	volatile int8_t x368 = -22;
	int32_t t90 = -89;

	t90 = (x365%((x366==x367)|x368));

	if (t90 != 9) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x373 = 0U;
	uint64_t x374 = UINT64_MAX;
	int32_t x376 = -2719;
	static volatile uint32_t t91 = 10U;

	t91 = (x373%((x374==x375)|x376));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x378 = 14;
	volatile int16_t x380 = INT16_MIN;

	t92 = (x377%((x378==x379)|x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	int8_t x384 = -13;

	t93 = (x381%((x382==x383)|x384));

	if (t93 != 12LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x385 = 2500435LLU;
	volatile int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	static int64_t x388 = -1LL;
	volatile uint64_t t94 = 1410955528LLU;

	t94 = (x385%((x386==x387)|x388));

	if (t94 != 2500435LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = INT64_MAX;
	int32_t x390 = -1;
	int64_t x392 = INT64_MAX;
	int64_t t95 = -1416519820483915LL;

	t95 = (x389%((x390==x391)|x392));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = 0;
	static uint32_t x394 = UINT32_MAX;
	int32_t x395 = INT32_MAX;
	uint64_t x396 = 60559LLU;
	uint64_t t96 = 10LLU;

	t96 = (x393%((x394==x395)|x396));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MIN;
	int8_t x400 = INT8_MAX;
	static int64_t t97 = 22442LL;

	t97 = (x397%((x398==x399)|x400));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = INT8_MIN;
	int16_t x402 = -1;
	static int8_t x403 = INT8_MIN;
	static uint64_t x404 = UINT64_MAX;
	volatile uint64_t t98 = 2040375LLU;

	t98 = (x401%((x402==x403)|x404));

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = 22;
	int64_t x406 = -962823566657530307LL;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t t99 = -43794560;

	t99 = (x405%((x406==x407)|x408));

	if (t99 != 22) { NG(); } else { ; }
	
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

