#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 169987U;
static volatile uint32_t t1 = 20U;
volatile int16_t x9 = -230;
int16_t x22 = INT16_MIN;
int32_t x23 = -212135;
static uint64_t x25 = UINT64_MAX;
int8_t x27 = -1;
volatile uint8_t x35 = UINT8_MAX;
int32_t x52 = INT32_MIN;
static uint8_t x55 = 3U;
uint64_t x63 = 140LLU;
static int8_t x65 = -1;
uint64_t x67 = 3943381876LLU;
int8_t x82 = 5;
volatile int32_t t20 = 25187574;
int32_t x88 = -86546;
int32_t x89 = -5148;
int64_t x91 = -63010420465LL;
static uint32_t x106 = 758731U;
static uint64_t x112 = UINT64_MAX;
int64_t x114 = INT64_MAX;
int64_t x116 = INT64_MAX;
volatile int64_t t28 = 43874149088LL;
uint64_t x124 = UINT64_MAX;
int8_t x126 = INT8_MIN;
uint16_t x128 = 0U;
volatile int64_t t31 = INT64_MIN;
int64_t x131 = 367412LL;
volatile int16_t x133 = INT16_MAX;
static int32_t x135 = INT32_MIN;
int32_t t33 = -478;
int64_t x152 = -1LL;
int32_t t37 = -7;
volatile int16_t x156 = INT16_MIN;
int32_t x161 = INT32_MIN;
uint16_t x162 = UINT16_MAX;
uint64_t x163 = 1990LLU;
static int16_t x174 = -1;
static uint64_t x181 = 147977263034LLU;
int64_t x183 = -1LL;
volatile int8_t x184 = INT8_MAX;
int64_t x186 = INT64_MIN;
int32_t x187 = -1;
int64_t t46 = -31736590187909039LL;
uint64_t x194 = 975905082201LLU;
volatile uint64_t t48 = 16676114822082LLU;
int8_t x202 = INT8_MIN;
uint32_t x205 = 1724280918U;
int64_t x208 = 4001111792188LL;
int16_t x212 = 58;
int8_t x215 = INT8_MAX;
volatile int32_t x216 = -7923;
uint64_t t53 = 10725921557410802LLU;
int32_t x221 = 1376257;
volatile int32_t t55 = -139327384;
static uint16_t x239 = UINT16_MAX;
static int16_t x240 = INT16_MIN;
int32_t x249 = -787076114;
int64_t x252 = INT64_MIN;
static int16_t x253 = INT16_MIN;
uint8_t x269 = 27U;
int32_t x274 = 11414;
int32_t x283 = INT32_MAX;
uint16_t x291 = 0U;
volatile uint16_t x301 = 1770U;
int8_t x304 = 7;
int16_t x307 = INT16_MIN;
volatile uint32_t t77 = 122U;
uint32_t x313 = UINT32_MAX;
int16_t x315 = 27;
int32_t x328 = -1;
volatile int64_t x329 = -225LL;
int32_t x337 = INT32_MIN;
static uint8_t x340 = UINT8_MAX;
static int8_t x342 = INT8_MIN;
static int32_t t85 = 519696305;
volatile int64_t x346 = 32790942399LL;
volatile int64_t x352 = -1LL;
static uint32_t t87 = 561618460U;
int32_t x359 = INT32_MIN;
uint8_t x361 = 1U;
volatile int16_t x363 = -148;
static int32_t x366 = 3451;
uint32_t x369 = UINT32_MAX;
int64_t x375 = 0LL;
static uint32_t x385 = 300U;


void f0(void) {
	uint32_t x1 = 7736U;
	static int8_t x2 = INT8_MIN;
	uint8_t x3 = UINT8_MAX;
	static volatile int32_t x4 = INT32_MIN;

	t0 = ((x1&x2)*(x3<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -6;
	uint32_t x6 = 146286U;
	volatile int16_t x7 = -5968;
	int8_t x8 = INT8_MIN;

	t1 = ((x5&x6)*(x7<x8));

	if (t1 != 146282U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 1U;
	int8_t x11 = 8;
	static uint64_t x12 = UINT64_MAX;
	int32_t t2 = -11670;

	t2 = ((x9&x10)*(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 595061673U;
	volatile int64_t x14 = 2977993471128LL;
	static uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MIN;
	static int64_t t3 = -40775683LL;

	t3 = ((x13&x14)*(x15<x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -12132LL;
	static volatile uint32_t x18 = 361U;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = -212162296874LL;

	t4 = ((x17&x18)*(x19<x20));

	if (t4 != 8LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	static int16_t x24 = 710;
	int32_t t5 = -28919993;

	t5 = ((x21&x22)*(x23<x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x26 = 12931553U;
	int16_t x28 = 82;
	static volatile uint64_t t6 = 2671136135174LLU;

	t6 = ((x25&x26)*(x27<x28));

	if (t6 != 12931553LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int8_t x30 = -1;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 2U;
	int64_t t7 = INT64_MIN;

	t7 = ((x29&x30)*(x31<x32));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	uint8_t x34 = 4U;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = 426100;

	t8 = ((x33&x34)*(x35<x36));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 132;
	uint64_t x38 = UINT64_MAX;
	uint64_t x39 = UINT64_MAX;
	int32_t x40 = INT32_MIN;
	volatile uint64_t t9 = 8LLU;

	t9 = ((x37&x38)*(x39<x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -12181221LL;
	int64_t x42 = -1LL;
	int32_t x43 = INT32_MIN;
	static volatile int32_t x44 = 453495029;
	volatile int64_t t10 = 27LL;

	t10 = ((x41&x42)*(x43<x44));

	if (t10 != -12181221LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 5;
	volatile int8_t x46 = INT8_MIN;
	static uint16_t x47 = 1008U;
	volatile int8_t x48 = INT8_MIN;
	int32_t t11 = -24552;

	t11 = ((x45&x46)*(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 212161530322LLU;
	int8_t x50 = INT8_MAX;
	static int64_t x51 = -18588683LL;
	static volatile uint64_t t12 = 32232575812367LLU;

	t12 = ((x49&x50)*(x51<x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x54 = -254831457291LL;
	int32_t x56 = -12968698;
	volatile int64_t t13 = -5410308849LL;

	t13 = ((x53&x54)*(x55<x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 323U;
	volatile int64_t x58 = 2127963540516LL;
	uint64_t x59 = UINT64_MAX;
	uint32_t x60 = 58115907U;
	int64_t t14 = -238385LL;

	t14 = ((x57&x58)*(x59<x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	int8_t x64 = 0;
	volatile int32_t t15 = 293;

	t15 = ((x61&x62)*(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = 1;
	int64_t x68 = INT64_MIN;
	int32_t t16 = -129635;

	t16 = ((x65&x66)*(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -50911199;
	int16_t x70 = INT16_MIN;
	int64_t x71 = -1LL;
	static int32_t x72 = 1545;
	int32_t t17 = 1;

	t17 = ((x69&x70)*(x71<x72));

	if (t17 != -50921472) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	int32_t x74 = INT32_MAX;
	volatile int32_t x75 = -4897;
	int64_t x76 = -5446LL;
	volatile int32_t t18 = -61;

	t18 = ((x73&x74)*(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = INT64_MIN;
	volatile int32_t x80 = -517025;
	int32_t t19 = -1048303;

	t19 = ((x77&x78)*(x79<x80));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MAX;
	int32_t x83 = -1;
	static int8_t x84 = INT8_MAX;

	t20 = ((x81&x82)*(x83<x84));

	if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int8_t x86 = INT8_MIN;
	static int64_t x87 = INT64_MAX;
	volatile int32_t t21 = 326;

	t21 = ((x85&x86)*(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x90 = 7926U;
	volatile int32_t x92 = -1064;
	int32_t t22 = -923;

	t22 = ((x89&x90)*(x91<x92));

	if (t22 != 2788) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = UINT16_MAX;
	int16_t x94 = -1;
	volatile uint32_t x95 = 42373230U;
	volatile int8_t x96 = -1;
	static int32_t t23 = -347;

	t23 = ((x93&x94)*(x95<x96));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	static uint16_t x98 = 9512U;
	int32_t x99 = -1;
	volatile int16_t x100 = INT16_MAX;
	volatile int64_t t24 = -2731906579809LL;

	t24 = ((x97&x98)*(x99<x100));

	if (t24 != 9512LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MAX;
	volatile int32_t x103 = INT32_MIN;
	int8_t x104 = -60;
	static volatile int32_t t25 = -97792579;

	t25 = ((x101&x102)*(x103<x104));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	int8_t x107 = 46;
	volatile int32_t x108 = INT32_MIN;
	uint32_t t26 = 5059U;

	t26 = ((x105&x106)*(x107<x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -290;
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = -1;
	volatile int32_t t27 = -3171605;

	t27 = ((x109&x110)*(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int16_t x115 = -1;

	t28 = ((x113&x114)*(x115<x116));

	if (t28 != 32767LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 19403;
	uint8_t x118 = 15U;
	uint8_t x119 = 21U;
	static uint32_t x120 = UINT32_MAX;
	int32_t t29 = 2386;

	t29 = ((x117&x118)*(x119<x120));

	if (t29 != 11) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 14U;
	int64_t x122 = INT64_MIN;
	int16_t x123 = 475;
	volatile int64_t t30 = 2LL;

	t30 = ((x121&x122)*(x123<x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int16_t x127 = -1;

	t31 = ((x125&x126)*(x127<x128));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MIN;
	static uint16_t x132 = 2478U;
	int32_t t32 = -2006373;

	t32 = ((x129&x130)*(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x134 = UINT8_MAX;
	int8_t x136 = -42;

	t33 = ((x133&x134)*(x135<x136));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = UINT8_MAX;
	volatile int8_t x140 = INT8_MIN;
	int32_t t34 = -8;

	t34 = ((x137&x138)*(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -3977;
	int64_t x142 = INT64_MAX;
	static int16_t x143 = INT16_MAX;
	uint16_t x144 = UINT16_MAX;
	int64_t t35 = 1LL;

	t35 = ((x141&x142)*(x143<x144));

	if (t35 != 9223372036854771831LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 399LLU;
	int8_t x146 = INT8_MIN;
	uint16_t x147 = 27U;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t36 = 9652LLU;

	t36 = ((x145&x146)*(x147<x148));

	if (t36 != 384LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	int16_t x150 = INT16_MAX;
	volatile int32_t x151 = -5;

	t37 = ((x149&x150)*(x151<x152));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MIN;
	int32_t x154 = 9;
	int8_t x155 = INT8_MIN;
	int32_t t38 = 3109;

	t38 = ((x153&x154)*(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 3U;
	int16_t x158 = INT16_MIN;
	volatile int32_t x159 = INT32_MAX;
	int32_t x160 = INT32_MAX;
	static int32_t t39 = 0;

	t39 = ((x157&x158)*(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x164 = -1;
	volatile int32_t t40 = -45;

	t40 = ((x161&x162)*(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 54257503LLU;
	uint8_t x166 = UINT8_MAX;
	volatile int16_t x167 = INT16_MIN;
	int32_t x168 = 59241;
	static uint64_t t41 = 128261420LLU;

	t41 = ((x165&x166)*(x167<x168));

	if (t41 != 95LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x169 = 194007326LLU;
	int64_t x170 = INT64_MAX;
	int32_t x171 = 53;
	static int64_t x172 = 12310LL;
	volatile uint64_t t42 = 914LLU;

	t42 = ((x169&x170)*(x171<x172));

	if (t42 != 194007326LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 5U;
	uint32_t x175 = 128527U;
	int16_t x176 = 55;
	volatile int32_t t43 = -152;

	t43 = ((x173&x174)*(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MAX;
	int8_t x179 = 1;
	int16_t x180 = INT16_MAX;
	volatile int32_t t44 = 2;

	t44 = ((x177&x178)*(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x182 = INT32_MIN;
	static uint64_t t45 = 1018LLU;

	t45 = ((x181&x182)*(x183<x184));

	if (t45 != 146028888064LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int32_t x188 = 1;

	t46 = ((x185&x186)*(x187<x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	int16_t x190 = 0;
	uint32_t x191 = 351U;
	uint32_t x192 = UINT32_MAX;
	static volatile int32_t t47 = 299257;

	t47 = ((x189&x190)*(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	int32_t x195 = -1;
	uint8_t x196 = 104U;

	t48 = ((x193&x194)*(x195<x196));

	if (t48 != 975905082201LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	static volatile uint32_t x198 = UINT32_MAX;
	uint32_t x199 = 3372236U;
	static uint64_t x200 = 3468031857488LLU;
	uint32_t t49 = 16879235U;

	t49 = ((x197&x198)*(x199<x200));

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = 4246235U;
	int32_t t50 = -47870689;

	t50 = ((x201&x202)*(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1;
	static uint8_t x207 = 3U;
	volatile uint32_t t51 = 1501086398U;

	t51 = ((x205&x206)*(x207<x208));

	if (t51 != 1724280918U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 125U;
	static int16_t x210 = 63;
	int32_t x211 = -1;
	static int32_t t52 = -332;

	t52 = ((x209&x210)*(x211<x212));

	if (t52 != 61) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 6U;
	uint64_t x214 = 992497520701083713LLU;

	t53 = ((x213&x214)*(x215<x216));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -267844862144774LL;
	volatile int32_t x218 = INT32_MIN;
	uint32_t x219 = 5U;
	int64_t x220 = INT64_MIN;
	volatile int64_t t54 = 1863422061LL;

	t54 = ((x217&x218)*(x219<x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = -1;
	uint8_t x223 = UINT8_MAX;
	int16_t x224 = 684;

	t55 = ((x221&x222)*(x223<x224));

	if (t55 != 1376257) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x225 = 14U;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = INT32_MAX;
	volatile int32_t t56 = 223849502;

	t56 = ((x225&x226)*(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = 145524464521412353LLU;
	uint16_t x230 = 258U;
	uint16_t x231 = 109U;
	int32_t x232 = 3;
	volatile uint64_t t57 = 75288932LLU;

	t57 = ((x229&x230)*(x231<x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = 3855536151205439455LL;
	int32_t x234 = -1735;
	static volatile uint32_t x235 = 678041005U;
	uint64_t x236 = UINT64_MAX;
	int64_t t58 = 2LL;

	t58 = ((x233&x234)*(x235<x236));

	if (t58 != 3855536151205437721LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int16_t x238 = -5341;
	int64_t t59 = -57673641380170LL;

	t59 = ((x237&x238)*(x239<x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x241 = INT16_MIN;
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MAX;
	volatile uint64_t t60 = 6954LLU;

	t60 = ((x241&x242)*(x243<x244));

	if (t60 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	uint8_t x246 = 105U;
	volatile int8_t x247 = -1;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -1448;

	t61 = ((x245&x246)*(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = UINT8_MAX;
	volatile int64_t x251 = -1LL;
	int32_t t62 = 185647;

	t62 = ((x249&x250)*(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = -9717875803LL;
	static uint32_t x255 = 488U;
	int16_t x256 = -1;
	static volatile int64_t t63 = 54768529609121132LL;

	t63 = ((x253&x254)*(x255<x256));

	if (t63 != -9717907456LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = 1;
	int8_t x259 = 0;
	int16_t x260 = -1;
	volatile int32_t t64 = 15634385;

	t64 = ((x257&x258)*(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 1085562676087LL;
	int32_t x262 = -13953101;
	uint64_t x263 = 180502186138121LLU;
	volatile int8_t x264 = -1;
	volatile int64_t t65 = -17566163871409542LL;

	t65 = ((x261&x262)*(x263<x264));

	if (t65 != 1085553181491LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = 724825U;
	int32_t x266 = -3709244;
	uint8_t x267 = 28U;
	int64_t x268 = -1LL;
	uint32_t t66 = 487363017U;

	t66 = ((x265&x266)*(x267<x268));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x270 = 392;
	uint64_t x271 = 1407340195LLU;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t67 = -211742822;

	t67 = ((x269&x270)*(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 6U;
	int32_t x275 = -1;
	int16_t x276 = -1;
	volatile int32_t t68 = 1095840;

	t68 = ((x273&x274)*(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = -1;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = 27259349460175786LLU;
	volatile int64_t t69 = -2824678020555789061LL;

	t69 = ((x277&x278)*(x279<x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MAX;
	int64_t x282 = 200848615760LL;
	static uint64_t x284 = 165373397LLU;
	volatile int64_t t70 = 52LL;

	t70 = ((x281&x282)*(x283<x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint16_t x286 = 22885U;
	int64_t x287 = INT64_MAX;
	uint8_t x288 = 11U;
	volatile int32_t t71 = -6743960;

	t71 = ((x285&x286)*(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	uint32_t x290 = UINT32_MAX;
	static uint16_t x292 = UINT16_MAX;
	uint32_t t72 = 26139818U;

	t72 = ((x289&x290)*(x291<x292));

	if (t72 != 65535U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int8_t x294 = -26;
	uint32_t x295 = 0U;
	uint16_t x296 = UINT16_MAX;
	int32_t t73 = 21;

	t73 = ((x293&x294)*(x295<x296));

	if (t73 != 65510) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = 0U;
	uint16_t x298 = 41U;
	int8_t x299 = -1;
	int64_t x300 = INT64_MIN;
	int32_t t74 = 7321281;

	t74 = ((x297&x298)*(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = 1;
	int8_t x303 = 0;
	int32_t t75 = 5895;

	t75 = ((x301&x302)*(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = INT32_MIN;
	static int8_t x306 = INT8_MIN;
	int8_t x308 = 6;
	volatile int32_t t76 = INT32_MIN;

	t76 = ((x305&x306)*(x307<x308));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 958U;
	static int32_t x310 = -48517;
	static uint64_t x311 = 372370LLU;
	static uint64_t x312 = UINT64_MAX;

	t77 = ((x309&x310)*(x311<x312));

	if (t77 != 570U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	volatile int16_t x316 = -7816;
	static volatile int64_t t78 = -46946265830670LL;

	t78 = ((x313&x314)*(x315<x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MIN;
	uint8_t x318 = 19U;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = -2;
	volatile int32_t t79 = -25688562;

	t79 = ((x317&x318)*(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 10553479LLU;
	static int8_t x322 = INT8_MAX;
	uint64_t x323 = 0LLU;
	int16_t x324 = INT16_MAX;
	uint64_t t80 = 17LLU;

	t80 = ((x321&x322)*(x323<x324));

	if (t80 != 7LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -15853229;
	int32_t x326 = INT32_MAX;
	uint8_t x327 = 41U;
	int32_t t81 = 917;

	t81 = ((x325&x326)*(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = 0U;
	static uint8_t x331 = UINT8_MAX;
	int8_t x332 = INT8_MAX;
	int64_t t82 = 12491177587LL;

	t82 = ((x329&x330)*(x331<x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	int8_t x334 = -1;
	volatile int32_t x335 = -8;
	int32_t x336 = -32;
	int32_t t83 = 20098984;

	t83 = ((x333&x334)*(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = 499984138112294697LL;
	int8_t x339 = INT8_MAX;
	volatile int64_t t84 = -65748550LL;

	t84 = ((x337&x338)*(x339<x340));

	if (t84 != 499984137281601536LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	int64_t x343 = INT64_MIN;
	static int16_t x344 = -14;

	t85 = ((x341&x342)*(x343<x344));

	if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int16_t x347 = -71;
	int8_t x348 = INT8_MIN;
	int64_t t86 = 115648004350483323LL;

	t86 = ((x345&x346)*(x347<x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 4027U;
	uint16_t x350 = UINT16_MAX;
	static volatile uint16_t x351 = UINT16_MAX;

	t87 = ((x349&x350)*(x351<x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 4U;
	int64_t x354 = -26848LL;
	uint8_t x355 = UINT8_MAX;
	static int64_t x356 = 2995917559881323LL;
	static volatile int64_t t88 = -54693016903LL;

	t88 = ((x353&x354)*(x355<x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = 145882746;
	static volatile int64_t x358 = INT64_MIN;
	uint8_t x360 = 35U;
	int64_t t89 = 3LL;

	t89 = ((x357&x358)*(x359<x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = -1;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = -941;

	t90 = ((x361&x362)*(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 5983U;
	int64_t x367 = INT64_MIN;
	static int32_t x368 = 40710;
	volatile uint32_t t91 = 194U;

	t91 = ((x365&x366)*(x367<x368));

	if (t91 != 1371U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x370 = 33205U;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = INT64_MAX;
	volatile uint32_t t92 = 44U;

	t92 = ((x369&x370)*(x371<x372));

	if (t92 != 33205U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	int32_t x376 = 11451;
	volatile int32_t t93 = 0;

	t93 = ((x373&x374)*(x375<x376));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -2806276517LL;
	static int64_t x378 = INT64_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = -1;
	int64_t t94 = 329517450LL;

	t94 = ((x377&x378)*(x379<x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = -1;
	int32_t x382 = INT32_MAX;
	static int64_t x383 = INT64_MIN;
	uint8_t x384 = 4U;
	volatile int32_t t95 = INT32_MAX;

	t95 = ((x381&x382)*(x383<x384));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x386 = INT8_MAX;
	volatile int16_t x387 = INT16_MIN;
	volatile uint8_t x388 = UINT8_MAX;
	uint32_t t96 = 221477420U;

	t96 = ((x385&x386)*(x387<x388));

	if (t96 != 44U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 5U;
	int32_t x390 = INT32_MIN;
	uint32_t x391 = 123U;
	static int64_t x392 = INT64_MIN;
	int32_t t97 = 176;

	t97 = ((x389&x390)*(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint32_t x394 = 166518686U;
	uint16_t x395 = 208U;
	int16_t x396 = INT16_MIN;
	uint32_t t98 = 1168304192U;

	t98 = ((x393&x394)*(x395<x396));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 8955945U;
	int32_t x398 = 199;
	uint8_t x399 = 2U;
	int64_t x400 = INT64_MAX;
	static uint32_t t99 = 7622467U;

	t99 = ((x397&x398)*(x399<x400));

	if (t99 != 1U) { NG(); } else { ; }
	
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

