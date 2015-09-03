#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = 15;
static int8_t x10 = 5;
static volatile uint32_t x14 = 7227904U;
volatile int16_t x15 = -1;
int32_t x17 = 244;
int16_t x21 = INT16_MIN;
uint16_t x28 = UINT16_MAX;
int64_t x31 = -1LL;
int32_t x33 = -1;
int16_t x35 = INT16_MIN;
static int32_t x36 = 112596000;
int32_t x40 = -3666029;
static volatile int64_t t9 = INT64_MIN;
int16_t x43 = -1;
int32_t t11 = 0;
volatile int32_t x49 = INT32_MAX;
int32_t x52 = -16298;
volatile uint8_t x57 = 34U;
uint8_t x64 = 1U;
int8_t x67 = 53;
uint64_t x68 = UINT64_MAX;
static int8_t x69 = INT8_MIN;
volatile int64_t x71 = INT64_MAX;
uint64_t x75 = 32873253778LLU;
int32_t x91 = INT32_MIN;
volatile int32_t t22 = -92594282;
volatile uint64_t t23 = 30619LLU;
int16_t x103 = -3262;
uint16_t x105 = 66U;
int32_t x106 = INT32_MAX;
int8_t x109 = 7;
volatile uint64_t t27 = 17324554909LLU;
int8_t x117 = INT8_MIN;
uint32_t x120 = 1818164509U;
uint64_t x122 = 2105728980140LLU;
uint64_t t30 = 526665018299LLU;
static int64_t x128 = -701598LL;
static int16_t x147 = -1257;
volatile uint16_t x148 = 567U;
int32_t t36 = -154272327;
uint64_t x149 = 54892531445LLU;
static int64_t x152 = -280150984544371LL;
uint64_t t37 = 4491394069477776LLU;
volatile int16_t x156 = INT16_MIN;
int16_t x159 = 0;
int16_t x167 = INT16_MIN;
int64_t x169 = -9739797257LL;
static int64_t x173 = INT64_MIN;
volatile int64_t t43 = -4411683345323228LL;
int64_t x177 = -1LL;
int64_t x178 = INT64_MAX;
int32_t t45 = -45919;
static uint64_t x187 = UINT64_MAX;
int32_t x188 = 1;
int32_t t46 = -540;
int16_t x196 = -1;
static volatile int32_t t48 = 0;
int64_t x197 = 3LL;
int32_t x205 = INT32_MIN;
volatile uint8_t x214 = 11U;
uint32_t x216 = 14U;
int8_t x220 = 1;
volatile int32_t t54 = 3963;
static uint8_t x221 = UINT8_MAX;
int64_t x235 = INT64_MIN;
uint16_t x236 = 7547U;
volatile int32_t x238 = 247;
uint8_t x239 = 10U;
static uint8_t x244 = UINT8_MAX;
int32_t x249 = 3664;
uint32_t x250 = 323462U;
int16_t x252 = INT16_MIN;
uint32_t x254 = 4U;
uint16_t x255 = 0U;
int8_t x262 = INT8_MIN;
int32_t x268 = INT32_MIN;
static volatile uint16_t x271 = 5U;
int64_t x274 = 4LL;
int32_t x278 = INT32_MAX;
int16_t x282 = INT16_MIN;
uint32_t x284 = UINT32_MAX;
uint64_t x287 = 2101LLU;
volatile uint32_t x295 = 5418U;
volatile int32_t x298 = INT32_MIN;
volatile int64_t t74 = -67374138636LL;
uint16_t x309 = UINT16_MAX;
volatile int8_t x310 = -1;
static int8_t x312 = INT8_MIN;
uint16_t x314 = 18552U;
int32_t t78 = -11;
uint8_t x325 = 100U;
int16_t x328 = INT16_MIN;
int8_t x331 = 14;
int8_t x336 = -1;
int16_t x351 = 1528;
uint8_t x359 = 17U;
volatile uint8_t x360 = 0U;
int64_t x369 = INT64_MIN;
uint64_t x377 = UINT64_MAX;
volatile int32_t t92 = 193307;
volatile int32_t x389 = -37034;
uint32_t x391 = 10538076U;
int64_t x394 = INT64_MIN;
static int8_t x399 = 0;
int8_t x402 = -31;
static int64_t x405 = -4418212535333870237LL;
volatile int32_t x410 = INT32_MIN;
int32_t t98 = 1051;
int16_t x415 = INT16_MIN;


void f0(void) {
	volatile int64_t x1 = 98374620382LL;
	uint64_t x2 = 151459422611353954LLU;
	int64_t x3 = -331135026269766LL;
	volatile uint32_t x4 = 115217835U;
	int64_t t0 = 3822793934954681LL;

	t0 = (x1&((x2<=x3)+x4));

	if (t0 != 110367884LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -117;

	t1 = (x5&((x6<=x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	volatile int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MIN;
	int64_t t2 = INT64_MIN;

	t2 = (x9&((x10<=x11)+x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	int8_t x16 = 1;
	int32_t t3 = 13;

	t3 = (x13&((x14<=x15)+x16));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	volatile int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 1;

	t4 = (x17&((x18<=x19)+x20));

	if (t4 != 244) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	int64_t x23 = -11723LL;
	uint8_t x24 = 116U;
	int32_t t5 = 1528147;

	t5 = (x21&((x22<=x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	volatile int16_t x26 = 0;
	uint64_t x27 = UINT64_MAX;
	int32_t t6 = 1529;

	t6 = (x25&((x26<=x27)+x28));

	if (t6 != 65536) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int64_t x30 = -21510707299758032LL;
	static uint8_t x32 = 83U;
	int32_t t7 = -55176008;

	t7 = (x29&((x30<=x31)+x32));

	if (t7 != 84) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = INT16_MAX;
	static int32_t t8 = -357;

	t8 = (x33&((x34<=x35)+x36));

	if (t8 != 112596000) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	static volatile uint32_t x38 = UINT32_MAX;
	int32_t x39 = -7;

	t9 = (x37&((x38<=x39)+x40));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	int64_t x42 = -1LL;
	uint16_t x44 = 239U;
	int32_t t10 = 0;

	t10 = (x41&((x42<=x43)+x44));

	if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	static volatile int32_t x46 = -1;
	uint64_t x47 = 273LLU;
	uint16_t x48 = 6731U;

	t11 = (x45&((x46<=x47)+x48));

	if (t11 != 6731) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x50 = INT32_MIN;
	uint8_t x51 = UINT8_MAX;
	static volatile int32_t t12 = 18140684;

	t12 = (x49&((x50<=x51)+x52));

	if (t12 != 2147467351) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	int64_t x54 = 854358095352032148LL;
	volatile int8_t x55 = INT8_MIN;
	static int32_t x56 = 959280496;
	volatile int32_t t13 = -470;

	t13 = (x53&((x54<=x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x58 = 0U;
	static volatile int8_t x59 = 3;
	volatile uint32_t x60 = 52042U;
	volatile uint32_t t14 = 10640U;

	t14 = (x57&((x58<=x59)+x60));

	if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = UINT8_MAX;
	volatile int64_t x62 = 117593778996122317LL;
	int64_t x63 = INT64_MIN;
	volatile int32_t t15 = -8;

	t15 = (x61&((x62<=x63)+x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	int8_t x66 = 0;
	uint64_t t16 = 105071643494703947LLU;

	t16 = (x65&((x66<=x67)+x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	static int32_t x72 = -995505593;
	volatile int32_t t17 = 1691;

	t17 = (x69&((x70<=x71)+x72));

	if (t17 != -995505664) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	volatile int8_t x74 = INT8_MIN;
	volatile uint8_t x76 = 51U;
	int64_t t18 = 5868145936876239LL;

	t18 = (x73&((x74<=x75)+x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int8_t x78 = -1;
	int8_t x79 = 15;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 2589373;

	t19 = (x77&((x78<=x79)+x80));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int8_t x82 = 0;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = -1;
	int32_t t20 = 1;

	t20 = (x81&((x82<=x83)+x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 4U;
	int32_t x86 = INT32_MIN;
	int64_t x87 = -1LL;
	volatile int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 1945;

	t21 = (x85&((x86<=x87)+x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = UINT8_MAX;
	static volatile uint8_t x90 = UINT8_MAX;
	int16_t x92 = -1;

	t22 = (x89&((x90<=x91)+x92));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int32_t x94 = -1;
	volatile int64_t x95 = -134143311174747LL;
	volatile uint64_t x96 = 68376487816410267LLU;

	t23 = (x93&((x94<=x95)+x96));

	if (t23 != 13467LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -1LL;
	volatile int32_t x98 = -2076881;
	volatile uint16_t x99 = 111U;
	static int16_t x100 = 230;
	volatile int64_t t24 = -8564742LL;

	t24 = (x97&((x98<=x99)+x100));

	if (t24 != 231LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 111U;
	int8_t x102 = INT8_MIN;
	uint8_t x104 = 17U;
	volatile int32_t t25 = 39;

	t25 = (x101&((x102<=x103)+x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x107 = -1;
	uint8_t x108 = 12U;
	volatile int32_t t26 = 334;

	t26 = (x105&((x106<=x107)+x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = UINT32_MAX;
	static volatile int16_t x111 = -6;
	volatile uint64_t x112 = UINT64_MAX;

	t27 = (x109&((x110<=x111)+x112));

	if (t27 != 7LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	int32_t x114 = -46788737;
	int16_t x115 = 4;
	static uint8_t x116 = 29U;
	int64_t t28 = 864LL;

	t28 = (x113&((x114<=x115)+x116));

	if (t28 != 30LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = 21;
	uint64_t x119 = 386394668101LLU;
	uint32_t t29 = 173U;

	t29 = (x117&((x118<=x119)+x120));

	if (t29 != 1818164480U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 7LLU;
	int8_t x123 = -57;
	volatile uint64_t x124 = 43944678754771LLU;

	t30 = (x121&((x122<=x123)+x124));

	if (t30 != 4LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MAX;
	uint8_t x126 = 62U;
	int16_t x127 = INT16_MIN;
	volatile int64_t t31 = -1004361685357LL;

	t31 = (x125&((x126<=x127)+x128));

	if (t31 != 2146782050LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MAX;
	static uint16_t x131 = 702U;
	int32_t x132 = 80389;
	volatile int32_t t32 = 61;

	t32 = (x129&((x130<=x131)+x132));

	if (t32 != 14854) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MIN;
	int64_t x134 = INT64_MIN;
	static int32_t x135 = 513122;
	int8_t x136 = INT8_MAX;
	int32_t t33 = 799;

	t33 = (x133&((x134<=x135)+x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MAX;
	static uint16_t x138 = UINT16_MAX;
	volatile int32_t x139 = -11949;
	volatile int8_t x140 = INT8_MIN;
	int32_t t34 = -100717;

	t34 = (x137&((x138<=x139)+x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 5;
	uint32_t x142 = 49458878U;
	static volatile int64_t x143 = 268808967LL;
	int8_t x144 = INT8_MAX;
	static volatile int32_t t35 = -28007995;

	t35 = (x141&((x142<=x143)+x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint32_t x146 = 7U;

	t36 = (x145&((x146<=x147)+x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x150 = 0;
	uint8_t x151 = UINT8_MAX;

	t37 = (x149&((x150<=x151)+x152));

	if (t37 != 18321837700LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -28359642;
	int64_t x154 = -1LL;
	volatile int8_t x155 = -1;
	int32_t t38 = 239;

	t38 = (x153&((x154<=x155)+x156));

	if (t38 != -28377088) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x158 = 1297728;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = -5769677;

	t39 = (x157&((x158<=x159)+x160));

	if (t39 != 65408) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = 15612;
	volatile int32_t x162 = 419273;
	int64_t x163 = INT64_MAX;
	uint64_t x164 = 359127846681180050LLU;
	volatile uint64_t t40 = 510691LLU;

	t40 = (x161&((x162<=x163)+x164));

	if (t40 != 13456LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = -1;
	uint16_t x168 = 4U;
	static volatile int64_t t41 = 262718965347LL;

	t41 = (x165&((x166<=x167)+x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x170 = INT8_MIN;
	int16_t x171 = 0;
	uint16_t x172 = UINT16_MAX;
	int64_t t42 = 247776298136LL;

	t42 = (x169&((x170<=x171)+x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = 121U;
	uint64_t x175 = 19LLU;
	uint16_t x176 = UINT16_MAX;

	t43 = (x173&((x174<=x175)+x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x179 = 369554948934439LLU;
	uint64_t x180 = UINT64_MAX;
	uint64_t t44 = UINT64_MAX;

	t44 = (x177&((x178<=x179)+x180));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 1112U;
	int32_t x184 = 1;

	t45 = (x181&((x182<=x183)+x184));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 3U;
	int16_t x186 = INT16_MIN;

	t46 = (x185&((x186<=x187)+x188));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	uint32_t x190 = 180U;
	uint16_t x191 = 295U;
	uint8_t x192 = 1U;
	volatile int32_t t47 = -152;

	t47 = (x189&((x190<=x191)+x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;

	t48 = (x193&((x194<=x195)+x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 4205124137071769733LLU;
	static volatile int32_t x199 = -1;
	static volatile uint8_t x200 = 12U;
	volatile int64_t t49 = -5032911721LL;

	t49 = (x197&((x198<=x199)+x200));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 107U;
	static uint32_t x202 = UINT32_MAX;
	volatile uint16_t x203 = UINT16_MAX;
	uint32_t x204 = UINT32_MAX;
	static volatile uint32_t t50 = 563U;

	t50 = (x201&((x202<=x203)+x204));

	if (t50 != 107U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MIN;
	static int16_t x207 = -31;
	uint32_t x208 = 548535295U;
	uint32_t t51 = 47418953U;

	t51 = (x205&((x206<=x207)+x208));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 3U;
	int32_t x210 = 87;
	uint8_t x211 = 20U;
	uint8_t x212 = 81U;
	static volatile int32_t t52 = -8373;

	t52 = (x209&((x210<=x211)+x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -4;
	uint8_t x215 = UINT8_MAX;
	volatile uint32_t t53 = 3420U;

	t53 = (x213&((x214<=x215)+x216));

	if (t53 != 12U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 32;
	int64_t x218 = -100067575604303357LL;
	volatile int16_t x219 = -292;

	t54 = (x217&((x218<=x219)+x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x222 = 53U;
	uint16_t x223 = 31U;
	uint64_t x224 = 966973540058LLU;
	static volatile uint64_t t55 = 4332364417181369LLU;

	t55 = (x221&((x222<=x223)+x224));

	if (t55 != 218LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -716;
	static int64_t x226 = 217717123LL;
	uint32_t x227 = 533265593U;
	static int16_t x228 = INT16_MIN;
	static volatile int32_t t56 = 1561;

	t56 = (x225&((x226<=x227)+x228));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = 8U;
	int8_t x230 = INT8_MAX;
	int32_t x231 = 1696324;
	int64_t x232 = INT64_MIN;
	int64_t t57 = 934884407221LL;

	t57 = (x229&((x230<=x231)+x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	int16_t x234 = INT16_MIN;
	volatile int32_t t58 = -6;

	t58 = (x233&((x234<=x235)+x236));

	if (t58 != 7547) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	uint64_t x240 = 7571563108209373LLU;
	uint64_t t59 = 152699677611LLU;

	t59 = (x237&((x238<=x239)+x240));

	if (t59 != 7571563108209373LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 27U;
	int64_t x242 = INT64_MIN;
	int32_t x243 = INT32_MIN;
	static volatile int32_t t60 = -1;

	t60 = (x241&((x242<=x243)+x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 1883394U;
	static volatile int16_t x246 = -1;
	int64_t x247 = -227796755LL;
	int16_t x248 = INT16_MIN;
	volatile uint32_t t61 = 169927175U;

	t61 = (x245&((x246<=x247)+x248));

	if (t61 != 1867776U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x251 = INT8_MAX;
	volatile int32_t t62 = -65;

	t62 = (x249&((x250<=x251)+x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -15041383;
	int16_t x256 = -100;
	volatile int32_t t63 = -1190888;

	t63 = (x253&((x254<=x255)+x256));

	if (t63 != -15041384) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int16_t x258 = INT16_MAX;
	static volatile int16_t x259 = INT16_MIN;
	int64_t x260 = 1LL;
	volatile int64_t t64 = 384861625171798LL;

	t64 = (x257&((x258<=x259)+x260));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 6738518284615901812LLU;
	volatile int8_t x263 = INT8_MAX;
	int8_t x264 = 40;
	volatile uint64_t t65 = 19LLU;

	t65 = (x261&((x262<=x263)+x264));

	if (t65 != 32LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	static int8_t x266 = 47;
	volatile int64_t x267 = INT64_MIN;
	static volatile uint64_t t66 = 3042584919LLU;

	t66 = (x265&((x266<=x267)+x268));

	if (t66 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	uint32_t x270 = UINT32_MAX;
	volatile int32_t x272 = INT32_MIN;
	static int32_t t67 = 6175;

	t67 = (x269&((x270<=x271)+x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	int16_t x275 = 653;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = -204611641;

	t68 = (x273&((x274<=x275)+x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int16_t x279 = INT16_MAX;
	volatile int16_t x280 = INT16_MIN;
	static int32_t t69 = 212;

	t69 = (x277&((x278<=x279)+x280));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x283 = INT32_MIN;
	uint64_t t70 = 14186268224970402LLU;

	t70 = (x281&((x282<=x283)+x284));

	if (t70 != 4294967295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	volatile int8_t x286 = -1;
	uint8_t x288 = 58U;
	volatile int32_t t71 = -1;

	t71 = (x285&((x286<=x287)+x288));

	if (t71 != 58) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = 456648267LL;
	int32_t x290 = 12;
	int16_t x291 = 3763;
	int16_t x292 = INT16_MAX;
	int64_t t72 = -3850275LL;

	t72 = (x289&((x290<=x291)+x292));

	if (t72 != 32768LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = 89;
	uint8_t x296 = 2U;
	static volatile int64_t t73 = 3720330LL;

	t73 = (x293&((x294<=x295)+x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int16_t x299 = 1;
	int64_t x300 = 3683932754835LL;

	t74 = (x297&((x298<=x299)+x300));

	if (t74 != 3683932733440LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	int32_t x302 = -1;
	uint16_t x303 = 16107U;
	static int64_t x304 = INT64_MIN;
	int64_t t75 = 322307659LL;

	t75 = (x301&((x302<=x303)+x304));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MIN;
	static int32_t x307 = INT32_MAX;
	uint8_t x308 = 3U;
	int64_t t76 = 19933730898LL;

	t76 = (x305&((x306<=x307)+x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x311 = INT32_MIN;
	int32_t t77 = -1;

	t77 = (x309&((x310<=x311)+x312));

	if (t77 != 65408) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint64_t x315 = 4906397LLU;
	int16_t x316 = INT16_MAX;

	t78 = (x313&((x314<=x315)+x316));

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -1;
	static int16_t x322 = INT16_MAX;
	static volatile int8_t x323 = 17;
	int16_t x324 = 1177;
	static volatile int32_t t79 = 328114124;

	t79 = (x321&((x322<=x323)+x324));

	if (t79 != 1177) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x326 = INT8_MIN;
	static int8_t x327 = 3;
	volatile int32_t t80 = -9973128;

	t80 = (x325&((x326<=x327)+x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x329 = 7LLU;
	static int64_t x330 = INT64_MIN;
	int64_t x332 = INT64_MIN;
	uint64_t t81 = 3LLU;

	t81 = (x329&((x330<=x331)+x332));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = 4044801476418LL;
	static uint8_t x334 = UINT8_MAX;
	static int64_t x335 = -1519LL;
	volatile int64_t t82 = -33701261851370127LL;

	t82 = (x333&((x334<=x335)+x336));

	if (t82 != 4044801476418LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x337 = 115U;
	uint16_t x338 = 13402U;
	int16_t x339 = INT16_MAX;
	uint32_t x340 = 2361U;
	static uint32_t t83 = 227U;

	t83 = (x337&((x338<=x339)+x340));

	if (t83 != 50U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x341 = INT64_MAX;
	volatile uint32_t x342 = 3799736U;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = INT16_MIN;
	volatile int64_t t84 = 1LL;

	t84 = (x341&((x342<=x343)+x344));

	if (t84 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x345 = UINT64_MAX;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MAX;
	uint16_t x348 = UINT16_MAX;
	volatile uint64_t t85 = 835401194830090326LLU;

	t85 = (x345&((x346<=x347)+x348));

	if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x349 = 1;
	volatile int64_t x350 = -760LL;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t86 = -11072;

	t86 = (x349&((x350<=x351)+x352));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MAX;
	volatile int8_t x354 = INT8_MAX;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	uint64_t t87 = 1622991LLU;

	t87 = (x353&((x354<=x355)+x356));

	if (t87 != 32767LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x357 = INT8_MIN;
	uint8_t x358 = UINT8_MAX;
	int32_t t88 = 48622288;

	t88 = (x357&((x358<=x359)+x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 13890457LLU;
	static int32_t x362 = -1;
	static uint8_t x363 = UINT8_MAX;
	static int16_t x364 = INT16_MIN;
	uint64_t t89 = 1078430757408323LLU;

	t89 = (x361&((x362<=x363)+x364));

	if (t89 != 13860865LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x370 = INT16_MIN;
	int8_t x371 = -1;
	int8_t x372 = -1;
	volatile int64_t t90 = 33603483190LL;

	t90 = (x369&((x370<=x371)+x372));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = -1;
	int64_t x380 = -1LL;
	volatile uint64_t t91 = 4949794029LLU;

	t91 = (x377&((x378<=x379)+x380));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	static int64_t x386 = 1335096LL;
	int32_t x387 = INT32_MIN;
	static uint16_t x388 = 102U;

	t92 = (x385&((x386<=x387)+x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x390 = -4;
	uint8_t x392 = UINT8_MAX;
	static int32_t t93 = 15015;

	t93 = (x389&((x390<=x391)+x392));

	if (t93 != 86) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x393 = UINT64_MAX;
	int8_t x395 = INT8_MAX;
	int64_t x396 = -1LL;
	static volatile uint64_t t94 = 3465160471000806950LLU;

	t94 = (x393&((x394<=x395)+x396));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x397 = 53U;
	int32_t x398 = INT32_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t95 = 882273637;

	t95 = (x397&((x398<=x399)+x400));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = 0;
	int16_t x403 = INT16_MAX;
	volatile uint64_t x404 = 205446LLU;
	volatile uint64_t t96 = 766771720865603LLU;

	t96 = (x401&((x402<=x403)+x404));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x406 = -1LL;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MIN;
	volatile int64_t t97 = -3760689458259LL;

	t97 = (x405&((x406<=x407)+x408));

	if (t97 != -4418212535333870335LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x409 = 3U;
	uint8_t x411 = 5U;
	int16_t x412 = INT16_MAX;

	t98 = (x409&((x410<=x411)+x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x413 = UINT8_MAX;
	int64_t x414 = -1LL;
	uint16_t x416 = 4681U;
	volatile int32_t t99 = 13973123;

	t99 = (x413&((x414<=x415)+x416));

	if (t99 != 73) { NG(); } else { ; }
	
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

