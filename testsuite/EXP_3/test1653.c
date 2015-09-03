#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
uint8_t x6 = 2U;
volatile uint64_t t1 = 104260548LLU;
uint32_t x11 = 121U;
uint8_t x16 = UINT8_MAX;
int64_t x21 = 695LL;
uint8_t x22 = 0U;
int32_t x29 = INT32_MIN;
static uint64_t x30 = 72069629196LLU;
int8_t x33 = INT8_MIN;
int8_t x35 = INT8_MIN;
int32_t t8 = -287010988;
uint64_t x39 = UINT64_MAX;
uint64_t t9 = 200176047815LLU;
static volatile uint64_t x48 = UINT64_MAX;
int8_t x50 = -1;
int16_t x52 = INT16_MAX;
static int64_t x58 = INT64_MAX;
uint32_t x59 = UINT32_MAX;
volatile int16_t x62 = -1;
volatile int64_t x63 = -59867202736410953LL;
uint16_t x85 = UINT16_MAX;
static volatile int16_t x91 = INT16_MIN;
static uint64_t x92 = 444183737LLU;
volatile int16_t x99 = 11;
uint32_t x110 = 21999U;
int16_t x118 = 0;
int8_t x123 = -1;
volatile uint64_t t29 = 13LLU;
uint32_t x126 = 65788564U;
uint32_t x127 = 409787U;
int32_t x131 = 3352;
uint64_t x135 = UINT64_MAX;
static volatile int32_t t33 = -408;
uint32_t t34 = 1U;
int32_t t37 = INT32_MAX;
int16_t x160 = INT16_MAX;
volatile uint64_t t38 = 59640187603680LLU;
uint64_t x162 = 8LLU;
int64_t x170 = INT64_MIN;
int64_t t41 = -421851LL;
volatile uint16_t x191 = UINT16_MAX;
int16_t x199 = INT16_MIN;
volatile uint64_t t46 = 76926050552686802LLU;
static int32_t x202 = -1;
uint8_t x204 = UINT8_MAX;
uint64_t x208 = 15640500518LLU;
int64_t x212 = INT64_MAX;
static int8_t x213 = INT8_MIN;
int64_t x218 = -1LL;
static int16_t x220 = -1;
volatile int8_t x222 = INT8_MIN;
uint64_t x230 = 36189127360286LLU;
static int32_t x233 = INT32_MAX;
int64_t x237 = 110LL;
uint32_t x244 = UINT32_MAX;
int16_t x247 = 0;
int16_t x248 = -1;
volatile int32_t t58 = 215407;
uint16_t x249 = 22U;
int64_t x258 = INT64_MAX;
int64_t x264 = INT64_MAX;
static volatile uint64_t t62 = 63280LLU;
volatile int64_t t63 = 12370970685LL;
int64_t x269 = -1LL;
int16_t x276 = 6559;
int32_t x293 = -94203918;
int8_t x299 = INT8_MAX;
static uint64_t x309 = UINT64_MAX;
uint32_t x312 = 251855040U;
uint64_t t74 = 7607159795486LLU;
uint16_t x323 = 37U;
int32_t t78 = 22446;
int64_t x330 = INT64_MIN;
uint16_t x331 = 1215U;
uint64_t x358 = UINT64_MAX;
static int32_t x359 = INT32_MAX;
static int16_t x360 = INT16_MAX;
uint64_t t86 = 612118126LLU;
int8_t x366 = 1;
volatile int32_t t88 = 6861967;
int16_t x370 = INT16_MIN;
uint32_t x372 = 130635722U;
int16_t x386 = -1;
uint64_t x389 = UINT64_MAX;
int16_t x392 = -1;
static int32_t t94 = -148041670;
uint8_t x407 = 20U;
int64_t x415 = INT64_MIN;
int16_t x416 = -1;


void f0(void) {
	int16_t x1 = -1;
	volatile int64_t x2 = -1LL;
	volatile int8_t x3 = INT8_MIN;
	volatile int64_t t0 = -48715361123973LL;

	t0 = ((x1&x2)-(x3<=x4));

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x7 = -1;
	int32_t x8 = -1;

	t1 = ((x5&x6)-(x7<=x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 1828;
	uint32_t x10 = 117354740U;
	volatile uint64_t x12 = 190213290LLU;
	static volatile uint32_t t2 = 7455U;

	t2 = ((x9&x10)-(x11<=x12));

	if (t2 != 35U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2047096U;
	volatile uint32_t x14 = UINT32_MAX;
	volatile uint64_t x15 = 757421359733LLU;
	volatile uint32_t t3 = 151361U;

	t3 = ((x13&x14)-(x15<=x16));

	if (t3 != 2047096U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MAX;
	volatile int8_t x20 = 34;
	int64_t t4 = 7062670946858LL;

	t4 = ((x17&x18)-(x19<=x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x23 = 5U;
	int16_t x24 = 0;
	int64_t t5 = 2LL;

	t5 = ((x21&x22)-(x23<=x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = -231355885;
	volatile int16_t x28 = -725;
	static int32_t t6 = 5880;

	t6 = ((x25&x26)-(x27<=x28));

	if (t6 != 65534) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = -1;
	int16_t x32 = INT16_MIN;
	static volatile uint64_t t7 = 3000332LLU;

	t7 = ((x29&x30)-(x31<=x32));

	if (t7 != 70866960384LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = -1;
	int64_t x36 = INT64_MIN;

	t8 = ((x33&x34)-(x35<=x36));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	uint16_t x38 = 120U;
	volatile int32_t x40 = -128033;

	t9 = ((x37&x38)-(x39<=x40));

	if (t9 != 120LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = 4;
	int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MAX;
	static uint8_t x44 = 114U;
	int64_t t10 = -866468LL;

	t10 = ((x41&x42)-(x43<=x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int64_t x46 = -419LL;
	static int64_t x47 = 1301LL;
	static int64_t t11 = -136684965802LL;

	t11 = ((x45&x46)-(x47<=x48));

	if (t11 != -420LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	static volatile int8_t x51 = -1;
	int32_t t12 = -10269419;

	t12 = ((x49&x50)-(x51<=x52));

	if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	int8_t x54 = -30;
	uint32_t x55 = UINT32_MAX;
	int64_t x56 = -806400831932LL;
	int64_t t13 = -6093766091LL;

	t13 = ((x53&x54)-(x55<=x56));

	if (t13 != -30LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MIN;
	uint32_t x60 = 435U;
	volatile int64_t t14 = 1412714066879LL;

	t14 = ((x57&x58)-(x59<=x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	uint64_t x64 = 1885LLU;
	static volatile int32_t t15 = -752750;

	t15 = ((x61&x62)-(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	volatile int64_t x66 = -1LL;
	int16_t x67 = INT16_MIN;
	int64_t x68 = INT64_MIN;
	static int64_t t16 = -603LL;

	t16 = ((x65&x66)-(x67<=x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MAX;
	static uint8_t x70 = UINT8_MAX;
	uint16_t x71 = 6U;
	int32_t x72 = -1;
	int32_t t17 = 130168193;

	t17 = ((x69&x70)-(x71<=x72));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	volatile uint16_t x74 = 141U;
	int16_t x75 = -1;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = 7;

	t18 = ((x73&x74)-(x75<=x76));

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int16_t x78 = -1;
	int64_t x79 = INT64_MAX;
	uint64_t x80 = 4LLU;
	static volatile int32_t t19 = INT32_MAX;

	t19 = ((x77&x78)-(x79<=x80));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MAX;
	int32_t x83 = INT32_MIN;
	static int16_t x84 = 12;
	int32_t t20 = -3070;

	t20 = ((x81&x82)-(x83<=x84));

	if (t20 != 2147483519) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -1;
	int64_t x87 = INT64_MAX;
	static volatile uint8_t x88 = 2U;
	int32_t t21 = 7157627;

	t21 = ((x85&x86)-(x87<=x88));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	int64_t x90 = -1LL;
	volatile int64_t t22 = 11LL;

	t22 = ((x89&x90)-(x91<=x92));

	if (t22 != -2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MAX;
	static volatile uint64_t x98 = 109631012993LLU;
	int64_t x100 = -97228LL;
	volatile uint64_t t23 = 17075676LLU;

	t23 = ((x97&x98)-(x99<=x100));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x101 = 3U;
	volatile int64_t x102 = -1LL;
	int32_t x103 = INT32_MIN;
	static volatile int32_t x104 = INT32_MIN;
	volatile int64_t t24 = -66783LL;

	t24 = ((x101&x102)-(x103<=x104));

	if (t24 != 2LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = 31U;
	volatile uint64_t x106 = 141LLU;
	volatile int8_t x107 = INT8_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile uint64_t t25 = 90688329LLU;

	t25 = ((x105&x106)-(x107<=x108));

	if (t25 != 12LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = -159LL;
	int8_t x111 = 0;
	int64_t x112 = -1LL;
	static int64_t t26 = -7475757063LL;

	t26 = ((x109&x110)-(x111<=x112));

	if (t26 != 21857LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	uint16_t x114 = 1U;
	volatile int8_t x115 = INT8_MAX;
	volatile int64_t x116 = INT64_MAX;
	volatile int32_t t27 = -8102096;

	t27 = ((x113&x114)-(x115<=x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = -1;
	volatile int8_t x119 = INT8_MIN;
	static volatile uint32_t x120 = UINT32_MAX;
	int32_t t28 = 2024;

	t28 = ((x117&x118)-(x119<=x120));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 2330023915455LLU;
	static uint16_t x122 = UINT16_MAX;
	uint16_t x124 = UINT16_MAX;

	t29 = ((x121&x122)-(x123<=x124));

	if (t29 != 28606LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1LL;
	int32_t x128 = -1;
	volatile int64_t t30 = 948076552LL;

	t30 = ((x125&x126)-(x127<=x128));

	if (t30 != 65788563LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 93U;
	int16_t x130 = -1;
	int64_t x132 = 144462966963422295LL;
	volatile int32_t t31 = -663763;

	t31 = ((x129&x130)-(x131<=x132));

	if (t31 != 92) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = INT32_MAX;
	volatile int16_t x134 = -3;
	int16_t x136 = 241;
	volatile int32_t t32 = -614302729;

	t32 = ((x133&x134)-(x135<=x136));

	if (t32 != 2147483645) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = 18;
	static int32_t x138 = INT32_MIN;
	volatile int64_t x139 = 14LL;
	int64_t x140 = INT64_MIN;

	t33 = ((x137&x138)-(x139<=x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 1502251995U;
	int8_t x142 = 13;
	int64_t x143 = -275017352080727405LL;
	static int16_t x144 = INT16_MIN;

	t34 = ((x141&x142)-(x143<=x144));

	if (t34 != 8U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	static volatile uint16_t x146 = UINT16_MAX;
	int64_t x147 = INT64_MAX;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t35 = -24787887;

	t35 = ((x145&x146)-(x147<=x148));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = -6;
	int16_t x151 = -1;
	int32_t x152 = -1;
	int32_t t36 = 1;

	t36 = ((x149&x150)-(x151<=x152));

	if (t36 != -32769) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x153 = INT32_MAX;
	int32_t x154 = INT32_MAX;
	volatile int16_t x155 = 143;
	int8_t x156 = INT8_MIN;

	t37 = ((x153&x154)-(x155<=x156));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MAX;
	volatile uint64_t x158 = UINT64_MAX;
	int64_t x159 = INT64_MAX;

	t38 = ((x157&x158)-(x159<=x160));

	if (t38 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	int16_t x163 = -35;
	uint32_t x164 = UINT32_MAX;
	uint64_t t39 = 64813834901769LLU;

	t39 = ((x161&x162)-(x163<=x164));

	if (t39 != 7LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MIN;
	static int16_t x166 = 36;
	int32_t x167 = -1195;
	int64_t x168 = INT64_MIN;
	volatile int32_t t40 = 0;

	t40 = ((x165&x166)-(x167<=x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 0;
	int32_t x171 = 2400;
	int64_t x172 = INT64_MAX;

	t41 = ((x169&x170)-(x171<=x172));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = 1;
	static uint32_t x174 = 50U;
	int32_t x175 = -1;
	static int8_t x176 = 1;
	uint32_t t42 = UINT32_MAX;

	t42 = ((x173&x174)-(x175<=x176));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = 98;
	int8_t x178 = INT8_MAX;
	static uint64_t x179 = 3480745622871LLU;
	int8_t x180 = INT8_MIN;
	volatile int32_t t43 = 14;

	t43 = ((x177&x178)-(x179<=x180));

	if (t43 != 97) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = 1;
	int8_t x182 = INT8_MAX;
	static uint16_t x183 = UINT16_MAX;
	volatile uint16_t x184 = 1U;
	volatile int32_t t44 = 4;

	t44 = ((x181&x182)-(x183<=x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 976718221250LLU;
	static uint32_t x190 = UINT32_MAX;
	volatile int16_t x192 = INT16_MIN;
	uint64_t t45 = 6284505026LLU;

	t45 = ((x189&x190)-(x191<=x192));

	if (t45 != 1760645058LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x197 = 28881LLU;
	uint32_t x198 = UINT32_MAX;
	int32_t x200 = 6525;

	t46 = ((x197&x198)-(x199<=x200));

	if (t46 != 28880LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 1U;
	int16_t x203 = INT16_MIN;
	int32_t t47 = -18253;

	t47 = ((x201&x202)-(x203<=x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MAX;
	int16_t x206 = -1;
	static int64_t x207 = -809512LL;
	volatile int32_t t48 = 74713;

	t48 = ((x205&x206)-(x207<=x208));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = 2U;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	volatile int32_t t49 = -634536;

	t49 = ((x209&x210)-(x211<=x212));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = INT16_MAX;
	uint16_t x215 = 1170U;
	static int32_t x216 = INT32_MIN;
	int32_t t50 = -246;

	t50 = ((x213&x214)-(x215<=x216));

	if (t50 != 32640) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = 2U;
	int32_t x219 = INT32_MAX;
	static volatile int64_t t51 = 72LL;

	t51 = ((x217&x218)-(x219<=x220));

	if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -920269;
	int32_t x223 = INT32_MIN;
	static int8_t x224 = INT8_MAX;
	int32_t t52 = 53670914;

	t52 = ((x221&x222)-(x223<=x224));

	if (t52 != -920321) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = -1;
	volatile int8_t x226 = INT8_MIN;
	uint16_t x227 = 2U;
	uint32_t x228 = 511562816U;
	volatile int32_t t53 = -4971;

	t53 = ((x225&x226)-(x227<=x228));

	if (t53 != -129) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = UINT32_MAX;
	static int64_t x231 = 15625LL;
	uint16_t x232 = 2765U;
	uint64_t t54 = 80539LLU;

	t54 = ((x229&x230)-(x231<=x232));

	if (t54 != 4027891486LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	uint32_t x236 = 19620U;
	volatile int32_t t55 = -7122;

	t55 = ((x233&x234)-(x235<=x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x238 = 7;
	static int64_t x239 = -1859916405481436LL;
	uint8_t x240 = 4U;
	int64_t t56 = 576222686LL;

	t56 = ((x237&x238)-(x239<=x240));

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x241 = 46467LLU;
	static volatile int8_t x242 = -1;
	volatile int32_t x243 = -61;
	uint64_t t57 = 38157075902LLU;

	t57 = ((x241&x242)-(x243<=x244));

	if (t57 != 46466LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = -9;
	static int16_t x246 = INT16_MAX;

	t58 = ((x245&x246)-(x247<=x248));

	if (t58 != 32759) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x250 = UINT8_MAX;
	int16_t x251 = INT16_MIN;
	volatile int8_t x252 = -1;
	static volatile int32_t t59 = 266;

	t59 = ((x249&x250)-(x251<=x252));

	if (t59 != 21) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = -1LL;
	int16_t x254 = INT16_MAX;
	volatile uint16_t x255 = 9U;
	uint64_t x256 = 13088LLU;
	int64_t t60 = -43444387013817470LL;

	t60 = ((x253&x254)-(x255<=x256));

	if (t60 != 32766LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = -11;
	static int32_t x259 = INT32_MAX;
	int32_t x260 = INT32_MIN;
	volatile int64_t t61 = 135471761643340086LL;

	t61 = ((x257&x258)-(x259<=x260));

	if (t61 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = 1432774568457LL;
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = -1LL;

	t62 = ((x261&x262)-(x263<=x264));

	if (t62 != 1432774568456LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x265 = 12U;
	static int64_t x266 = -5835669LL;
	int32_t x267 = INT32_MAX;
	uint64_t x268 = 23897349739LLU;

	t63 = ((x265&x266)-(x267<=x268));

	if (t63 != 7LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x270 = 24U;
	volatile int8_t x271 = -1;
	int64_t x272 = -27595000LL;
	volatile int64_t t64 = -116093LL;

	t64 = ((x269&x270)-(x271<=x272));

	if (t64 != 24LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x273 = INT8_MAX;
	uint16_t x274 = 4647U;
	static uint8_t x275 = 0U;
	int32_t t65 = -129335840;

	t65 = ((x273&x274)-(x275<=x276));

	if (t65 != 38) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = 4638895LLU;
	int32_t x278 = INT32_MAX;
	volatile int64_t x279 = -506998282610LL;
	int64_t x280 = INT64_MAX;
	volatile uint64_t t66 = 5047720098504738LLU;

	t66 = ((x277&x278)-(x279<=x280));

	if (t66 != 4638894LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = -2;
	int16_t x283 = 16157;
	int16_t x284 = 356;
	volatile int32_t t67 = INT32_MIN;

	t67 = ((x281&x282)-(x283<=x284));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x285 = 4U;
	volatile int32_t x286 = -1;
	volatile int8_t x287 = -8;
	uint32_t x288 = 4672797U;
	static int32_t t68 = -10781;

	t68 = ((x285&x286)-(x287<=x288));

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x289 = 85LLU;
	int32_t x290 = -24990182;
	volatile uint16_t x291 = 15592U;
	static int32_t x292 = -6;
	uint64_t t69 = 8089405LLU;

	t69 = ((x289&x290)-(x291<=x292));

	if (t69 != 16LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x294 = 0U;
	int32_t x295 = 345467252;
	int64_t x296 = -90911612LL;
	volatile int32_t t70 = 23676;

	t70 = ((x293&x294)-(x295<=x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = 72;
	int32_t x298 = -1045;
	int8_t x300 = -1;
	volatile int32_t t71 = 1000;

	t71 = ((x297&x298)-(x299<=x300));

	if (t71 != 72) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x301 = INT8_MIN;
	static int32_t x302 = INT32_MAX;
	static int8_t x303 = INT8_MAX;
	int32_t x304 = INT32_MIN;
	volatile int32_t t72 = -19;

	t72 = ((x301&x302)-(x303<=x304));

	if (t72 != 2147483520) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MAX;
	uint32_t x306 = 1204656255U;
	int8_t x307 = INT8_MIN;
	int32_t x308 = -1;
	static volatile uint32_t t73 = 16205669U;

	t73 = ((x305&x306)-(x307<=x308));

	if (t73 != 6270U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x310 = -1;
	static uint8_t x311 = 4U;

	t74 = ((x309&x310)-(x311<=x312));

	if (t74 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = INT64_MIN;
	static volatile int32_t x314 = -475622;
	static int64_t x315 = 116332672LL;
	uint32_t x316 = 17729U;
	static volatile int64_t t75 = INT64_MIN;

	t75 = ((x313&x314)-(x315<=x316));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x317 = -102LL;
	int16_t x318 = 204;
	static int16_t x319 = INT16_MIN;
	volatile int16_t x320 = -12;
	volatile int64_t t76 = -13219915LL;

	t76 = ((x317&x318)-(x319<=x320));

	if (t76 != 135LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = 56880650LLU;
	int16_t x322 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	uint64_t t77 = 8388547201013LLU;

	t77 = ((x321&x322)-(x323<=x324));

	if (t77 != 56852480LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = 0U;
	volatile int32_t x326 = -1;
	static int64_t x327 = 33617LL;
	int32_t x328 = 36;

	t78 = ((x325&x326)-(x327<=x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = UINT16_MAX;
	uint32_t x332 = 709974755U;
	int64_t t79 = -427LL;

	t79 = ((x329&x330)-(x331<=x332));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = 31331812U;
	int8_t x334 = 0;
	uint32_t x335 = 114U;
	static volatile int32_t x336 = INT32_MIN;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = ((x333&x334)-(x335<=x336));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = 1087495740U;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	int32_t x340 = -1;
	uint32_t t81 = 503U;

	t81 = ((x337&x338)-(x339<=x340));

	if (t81 != 1087495679U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = INT8_MAX;
	int16_t x342 = -7;
	int32_t x343 = -34539;
	int8_t x344 = -1;
	volatile int32_t t82 = -1020285;

	t82 = ((x341&x342)-(x343<=x344));

	if (t82 != 120) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x345 = 64300;
	static int64_t x346 = -1LL;
	int16_t x347 = 0;
	static uint16_t x348 = 13U;
	int64_t t83 = 1LL;

	t83 = ((x345&x346)-(x347<=x348));

	if (t83 != 64299LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	static int16_t x350 = -1392;
	int32_t x351 = 26103;
	int8_t x352 = -3;
	int32_t t84 = 0;

	t84 = ((x349&x350)-(x351<=x352));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = 14202164475LL;
	int64_t x355 = INT64_MIN;
	uint32_t x356 = UINT32_MAX;
	int64_t t85 = 469426106560098LL;

	t85 = ((x353&x354)-(x355<=x356));

	if (t85 != 14202164351LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MIN;

	t86 = ((x357&x358)-(x359<=x360));

	if (t86 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = 50U;
	int64_t x362 = INT64_MIN;
	uint8_t x363 = 3U;
	int64_t x364 = INT64_MIN;
	volatile int64_t t87 = 485483555643098LL;

	t87 = ((x361&x362)-(x363<=x364));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MIN;
	volatile int8_t x367 = INT8_MIN;
	uint64_t x368 = 21058343LLU;

	t88 = ((x365&x366)-(x367<=x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = -1;
	int64_t x371 = -9331020LL;
	int32_t t89 = -85578;

	t89 = ((x369&x370)-(x371<=x372));

	if (t89 != -32769) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x377 = INT64_MAX;
	int64_t x378 = INT64_MIN;
	int32_t x379 = -13;
	static volatile int64_t x380 = INT64_MAX;
	static volatile int64_t t90 = 38243582LL;

	t90 = ((x377&x378)-(x379<=x380));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MAX;
	static uint16_t x382 = 251U;
	uint64_t x383 = 2LLU;
	volatile int64_t x384 = INT64_MIN;
	int32_t t91 = -28342;

	t91 = ((x381&x382)-(x383<=x384));

	if (t91 != 250) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -1;
	uint32_t x387 = 3U;
	static uint64_t x388 = UINT64_MAX;
	volatile int32_t t92 = 91317;

	t92 = ((x385&x386)-(x387<=x388));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x390 = 0;
	int16_t x391 = INT16_MIN;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = ((x389&x390)-(x391<=x392));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x393 = 13194;
	int8_t x394 = -1;
	int32_t x395 = -227910;
	int8_t x396 = INT8_MAX;

	t94 = ((x393&x394)-(x395<=x396));

	if (t94 != 13193) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = -1;
	int64_t x398 = -1LL;
	static int32_t x399 = INT32_MAX;
	int32_t x400 = -3537173;
	volatile int64_t t95 = -309038996238466727LL;

	t95 = ((x397&x398)-(x399<=x400));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = 4740;
	int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MIN;
	uint16_t x404 = UINT16_MAX;
	int32_t t96 = 7666;

	t96 = ((x401&x402)-(x403<=x404));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x405 = 31;
	int32_t x406 = -10784725;
	static volatile int16_t x408 = -6;
	int32_t t97 = 42897684;

	t97 = ((x405&x406)-(x407<=x408));

	if (t97 != 11) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = 145443;
	int32_t x410 = -194457;
	static int16_t x411 = INT16_MAX;
	volatile int32_t x412 = INT32_MIN;
	volatile int32_t t98 = 129339970;

	t98 = ((x409&x410)-(x411<=x412));

	if (t98 != 2083) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x413 = UINT32_MAX;
	uint64_t x414 = 89802383922752695LLU;
	uint64_t t99 = 3247276817647848524LLU;

	t99 = ((x413&x414)-(x415<=x416));

	if (t99 != 3652381878LLU) { NG(); } else { ; }
	
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

