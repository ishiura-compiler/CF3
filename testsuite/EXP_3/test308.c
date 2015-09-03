#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x6 = INT16_MIN;
uint64_t x8 = 13322865489975742LLU;
volatile int32_t t0 = 6109;
int8_t x16 = INT8_MIN;
int32_t t5 = -1053;
static int32_t x36 = 3891;
volatile int64_t x39 = 1LL;
static uint64_t x40 = 36077LLU;
volatile int32_t t7 = -9164;
int32_t t10 = 416;
volatile uint32_t x70 = 29452788U;
uint32_t x74 = 31694628U;
volatile int32_t t14 = 30701443;
static uint16_t x80 = 13U;
int32_t x85 = -48496;
int8_t x88 = INT8_MIN;
int32_t t17 = 0;
static volatile int32_t t18 = 611795;
int8_t x111 = INT8_MIN;
uint8_t x119 = 33U;
int16_t x120 = INT16_MAX;
int32_t t23 = 1;
static int8_t x122 = INT8_MAX;
uint8_t x127 = 20U;
int16_t x136 = INT16_MIN;
volatile int32_t t27 = 25679942;
int16_t x143 = INT16_MIN;
uint8_t x144 = 47U;
uint32_t x151 = UINT32_MAX;
static int32_t t31 = -10421;
int32_t x159 = -1;
volatile int32_t x163 = -1;
int8_t x171 = INT8_MIN;
volatile int8_t x181 = INT8_MIN;
volatile int32_t t40 = -20724;
int32_t x194 = INT32_MAX;
uint64_t x195 = UINT64_MAX;
static int8_t x197 = INT8_MIN;
int64_t x205 = 4589342036692188LL;
int16_t x213 = -13;
int16_t x215 = 29;
static volatile int32_t t47 = -6384;
int64_t x221 = 14987620LL;
uint32_t x225 = UINT32_MAX;
volatile int32_t t50 = 31;
int8_t x234 = INT8_MIN;
int8_t x238 = INT8_MAX;
volatile int64_t x241 = INT64_MAX;
uint16_t x243 = 123U;
int32_t x244 = -1;
uint8_t x247 = UINT8_MAX;
volatile uint64_t x263 = UINT64_MAX;
int32_t t58 = -986;
int64_t x276 = -1LL;
int32_t t63 = -10;
int64_t x289 = INT64_MAX;
static int32_t x293 = -1;
int64_t x294 = -10478LL;
static volatile int32_t t67 = -905003;
volatile int8_t x312 = -2;
int64_t x324 = INT64_MIN;
int8_t x330 = -9;
uint8_t x350 = 42U;
uint8_t x375 = 0U;
uint32_t x376 = UINT32_MAX;
int64_t x377 = INT64_MIN;
int16_t x378 = INT16_MIN;
int16_t x380 = 69;
uint16_t x381 = 405U;
volatile int32_t t84 = 2;
int64_t x391 = INT64_MIN;
int32_t x395 = -1;
int32_t x398 = INT32_MIN;
volatile int16_t x399 = INT16_MIN;
static volatile int32_t t88 = 19307;
int16_t x401 = -1;
static int8_t x402 = 1;
uint8_t x409 = UINT8_MAX;
volatile int32_t x412 = -91619197;
static volatile uint32_t x421 = 1574596U;
static volatile int8_t x422 = INT8_MIN;
uint8_t x424 = 34U;
int32_t x425 = 2;
int32_t t96 = -21;
uint32_t x439 = UINT32_MAX;
uint8_t x441 = 1U;
uint64_t x442 = UINT64_MAX;
static uint32_t x445 = 27086835U;
volatile int16_t x447 = INT16_MIN;
int32_t x448 = INT32_MIN;


void f0(void) {
	int8_t x5 = INT8_MIN;
	int16_t x7 = INT16_MIN;

	t0 = ((x5&x6)<(x7-x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = 2054873;
	uint8_t x10 = 0U;
	uint64_t x11 = 120542LLU;
	int16_t x12 = -1;
	int32_t t1 = -361132;

	t1 = ((x9&x10)<(x11-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x13 = INT32_MAX;
	volatile int64_t x14 = INT64_MIN;
	int8_t x15 = 1;
	volatile int32_t t2 = 254257;

	t2 = ((x13&x14)<(x15-x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	static uint16_t x18 = 111U;
	int64_t x19 = INT64_MAX;
	static int64_t x20 = INT64_MAX;
	int32_t t3 = 8543;

	t3 = ((x17&x18)<(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = -1LL;
	static volatile uint32_t x23 = UINT32_MAX;
	uint8_t x24 = 25U;
	static volatile int32_t t4 = 0;

	t4 = ((x21&x22)<(x23-x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -994LL;
	uint32_t x26 = 516916631U;
	uint64_t x27 = 99933LLU;
	uint8_t x28 = UINT8_MAX;

	t5 = ((x25&x26)<(x27-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = -1;
	int8_t x35 = INT8_MIN;
	volatile int32_t t6 = -42;

	t6 = ((x33&x34)<(x35-x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = INT64_MAX;
	int64_t x38 = -13LL;

	t7 = ((x37&x38)<(x39-x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	volatile int64_t x46 = INT64_MIN;
	uint32_t x47 = UINT32_MAX;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t8 = 2;

	t8 = ((x45&x46)<(x47-x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = 16476626LL;
	int32_t x50 = 0;
	volatile int32_t x51 = INT32_MIN;
	int64_t x52 = INT64_MIN;
	int32_t t9 = -6161536;

	t9 = ((x49&x50)<(x51-x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = -880;
	int8_t x54 = 0;
	uint32_t x55 = 91567117U;
	static int16_t x56 = INT16_MIN;

	t10 = ((x53&x54)<(x55-x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	uint32_t x58 = 3292792U;
	int16_t x59 = -1;
	int32_t x60 = INT32_MAX;
	static volatile int32_t t11 = 24673238;

	t11 = ((x57&x58)<(x59-x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MIN;
	volatile int8_t x62 = -1;
	static int16_t x63 = INT16_MAX;
	uint32_t x64 = UINT32_MAX;
	static int32_t t12 = 2565151;

	t12 = ((x61&x62)<(x63-x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = INT64_MIN;
	static int64_t x71 = 330LL;
	int16_t x72 = -22;
	int32_t t13 = 269814;

	t13 = ((x69&x70)<(x71-x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MIN;
	int32_t x75 = -272;
	int8_t x76 = INT8_MIN;

	t14 = ((x73&x74)<(x75-x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = -3507436LL;
	int64_t x78 = INT64_MAX;
	volatile int8_t x79 = -1;
	static int32_t t15 = -26072;

	t15 = ((x77&x78)<(x79-x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MAX;
	uint16_t x83 = UINT16_MAX;
	uint64_t x84 = 291225293LLU;
	volatile int32_t t16 = 1;

	t16 = ((x81&x82)<(x83-x84));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x86 = 128373LLU;
	uint64_t x87 = 584909983846240852LLU;

	t17 = ((x85&x86)<(x87-x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 3848LLU;
	int64_t x90 = 4311699858LL;
	int64_t x91 = -1LL;
	static uint64_t x92 = 16LLU;

	t18 = ((x89&x90)<(x91-x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MAX;
	volatile int32_t x95 = 1;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t19 = 1;

	t19 = ((x93&x94)<(x95-x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MIN;
	int32_t x99 = 1029611595;
	int16_t x100 = INT16_MIN;
	int32_t t20 = -22369;

	t20 = ((x97&x98)<(x99-x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -771;
	uint8_t x102 = UINT8_MAX;
	int32_t x103 = -7053051;
	int32_t x104 = -10812;
	int32_t t21 = -421101145;

	t21 = ((x101&x102)<(x103-x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = -14233939654758LL;
	uint8_t x110 = 31U;
	static int16_t x112 = 1;
	int32_t t22 = 2052602;

	t22 = ((x109&x110)<(x111-x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x117 = UINT16_MAX;
	volatile int64_t x118 = INT64_MIN;

	t23 = ((x117&x118)<(x119-x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = 43;
	volatile uint32_t x123 = 98U;
	int16_t x124 = -1;
	static int32_t t24 = 229;

	t24 = ((x121&x122)<(x123-x124));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = 1;
	int8_t x126 = INT8_MIN;
	int8_t x128 = INT8_MIN;
	int32_t t25 = 9154;

	t25 = ((x125&x126)<(x127-x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x129 = 2120110490U;
	volatile uint64_t x130 = 772133LLU;
	static volatile uint32_t x131 = 59338U;
	int8_t x132 = INT8_MAX;
	volatile int32_t t26 = 1;

	t26 = ((x129&x130)<(x131-x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 17U;
	uint8_t x134 = UINT8_MAX;
	int64_t x135 = -1LL;

	t27 = ((x133&x134)<(x135-x136));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 19226947522905LLU;
	int64_t x138 = -1LL;
	static int16_t x139 = INT16_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t28 = -11314;

	t28 = ((x137&x138)<(x139-x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = 3606LLU;
	volatile int64_t x142 = 102079LL;
	volatile int32_t t29 = 1778017;

	t29 = ((x141&x142)<(x143-x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = INT32_MIN;
	static int8_t x146 = 6;
	uint16_t x147 = UINT16_MAX;
	int64_t x148 = -1157080002LL;
	int32_t t30 = 55917;

	t30 = ((x145&x146)<(x147-x148));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -4799206LL;
	static int64_t x150 = INT64_MIN;
	volatile uint64_t x152 = 742LLU;

	t31 = ((x149&x150)<(x151-x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MIN;
	int16_t x155 = INT16_MIN;
	int64_t x156 = -1LL;
	volatile int32_t t32 = -1;

	t32 = ((x153&x154)<(x155-x156));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = 3277U;
	int64_t x158 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	int32_t t33 = -38173;

	t33 = ((x157&x158)<(x159-x160));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x161 = INT64_MAX;
	int8_t x162 = -1;
	uint64_t x164 = 251668342LLU;
	volatile int32_t t34 = -39143;

	t34 = ((x161&x162)<(x163-x164));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x165 = 7650LLU;
	uint32_t x166 = 0U;
	static int8_t x167 = -3;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t35 = 22475;

	t35 = ((x165&x166)<(x167-x168));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = -2;
	int32_t x172 = -1;
	volatile int32_t t36 = -106361;

	t36 = ((x169&x170)<(x171-x172));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	uint8_t x176 = 36U;
	volatile int32_t t37 = -65066408;

	t37 = ((x173&x174)<(x175-x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x182 = 2121U;
	volatile uint8_t x183 = 9U;
	int32_t x184 = INT32_MAX;
	int32_t t38 = -207;

	t38 = ((x181&x182)<(x183-x184));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = UINT64_MAX;
	int32_t x186 = INT32_MIN;
	volatile int64_t x187 = 553445742823399427LL;
	int32_t x188 = INT32_MIN;
	static volatile int32_t t39 = -50273;

	t39 = ((x185&x186)<(x187-x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = -22;
	volatile int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	volatile uint32_t x192 = 60U;

	t40 = ((x189&x190)<(x191-x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x196 = INT64_MAX;
	volatile int32_t t41 = 1;

	t41 = ((x193&x194)<(x195-x196));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x198 = 4U;
	static int16_t x199 = 62;
	int16_t x200 = -1;
	int32_t t42 = 1;

	t42 = ((x197&x198)<(x199-x200));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x201 = -1LL;
	int32_t x202 = INT32_MIN;
	int8_t x203 = -5;
	volatile int64_t x204 = 281700116736LL;
	int32_t t43 = -671833;

	t43 = ((x201&x202)<(x203-x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x206 = UINT32_MAX;
	int64_t x207 = 1181624612247541LL;
	volatile int8_t x208 = -1;
	static int32_t t44 = -2;

	t44 = ((x205&x206)<(x207-x208));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = INT16_MAX;
	int16_t x210 = INT16_MIN;
	uint16_t x211 = 6618U;
	uint32_t x212 = UINT32_MAX;
	static int32_t t45 = -806859;

	t45 = ((x209&x210)<(x211-x212));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x214 = INT64_MAX;
	uint64_t x216 = 9116012250LLU;
	volatile int32_t t46 = -5413840;

	t46 = ((x213&x214)<(x215-x216));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MAX;
	int64_t x219 = INT64_MIN;
	static int32_t x220 = -1;

	t47 = ((x217&x218)<(x219-x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = 7U;
	int32_t t48 = -9280378;

	t48 = ((x221&x222)<(x223-x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x226 = 8;
	static int32_t x227 = INT32_MIN;
	uint32_t x228 = 822691397U;
	volatile int32_t t49 = 1;

	t49 = ((x225&x226)<(x227-x228));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = INT32_MIN;
	volatile int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MAX;
	int8_t x232 = 23;

	t50 = ((x229&x230)<(x231-x232));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x233 = 9236U;
	uint32_t x235 = 176U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t51 = 12272;

	t51 = ((x233&x234)<(x235-x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x237 = -1;
	volatile int32_t x239 = INT32_MIN;
	int64_t x240 = -1LL;
	volatile int32_t t52 = -4433137;

	t52 = ((x237&x238)<(x239-x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x242 = INT32_MIN;
	int32_t t53 = -2232;

	t53 = ((x241&x242)<(x243-x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = 19385U;
	uint32_t x246 = UINT32_MAX;
	int16_t x248 = -1;
	static volatile int32_t t54 = -488347;

	t54 = ((x245&x246)<(x247-x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	int16_t x250 = -1;
	volatile uint32_t x251 = 2U;
	volatile int8_t x252 = INT8_MAX;
	int32_t t55 = 31639450;

	t55 = ((x249&x250)<(x251-x252));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x253 = -244884493556LL;
	static volatile int64_t x254 = -1LL;
	uint16_t x255 = UINT16_MAX;
	static uint16_t x256 = 3606U;
	volatile int32_t t56 = 39879;

	t56 = ((x253&x254)<(x255-x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x257 = 6U;
	static int16_t x258 = INT16_MIN;
	int64_t x259 = 1812579453413754LL;
	int32_t x260 = INT32_MAX;
	int32_t t57 = -4771;

	t57 = ((x257&x258)<(x259-x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = INT64_MIN;
	uint16_t x262 = 1254U;
	volatile uint32_t x264 = UINT32_MAX;

	t58 = ((x261&x262)<(x263-x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = -1LL;
	int16_t x266 = -2;
	volatile uint8_t x267 = 48U;
	int8_t x268 = -1;
	static volatile int32_t t59 = -15;

	t59 = ((x265&x266)<(x267-x268));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 101645323LLU;
	volatile uint16_t x270 = 0U;
	uint16_t x271 = 10U;
	int8_t x272 = -1;
	int32_t t60 = 684472585;

	t60 = ((x269&x270)<(x271-x272));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = 3709U;
	volatile int8_t x274 = INT8_MIN;
	static uint64_t x275 = 556378781000711082LLU;
	volatile int32_t t61 = -24453;

	t61 = ((x273&x274)<(x275-x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -1;
	int64_t x278 = INT64_MAX;
	int64_t x279 = -4286478076LL;
	int16_t x280 = 0;
	int32_t t62 = -546;

	t62 = ((x277&x278)<(x279-x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x281 = -5838;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = -26914418LL;
	static volatile int32_t x284 = -40943988;

	t63 = ((x281&x282)<(x283-x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MAX;
	int8_t x287 = -3;
	static int64_t x288 = INT64_MIN;
	int32_t t64 = 9967;

	t64 = ((x285&x286)<(x287-x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x290 = 692U;
	uint8_t x291 = 5U;
	int32_t x292 = 23100591;
	volatile int32_t t65 = -195720502;

	t65 = ((x289&x290)<(x291-x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x295 = -300088432LL;
	volatile int16_t x296 = -2120;
	static volatile int32_t t66 = -3349585;

	t66 = ((x293&x294)<(x295-x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = INT64_MAX;
	int16_t x298 = INT16_MAX;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;

	t67 = ((x297&x298)<(x299-x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 27U;
	volatile uint16_t x306 = 47U;
	static volatile int64_t x307 = INT64_MAX;
	volatile int8_t x308 = 1;
	int32_t t68 = 246735029;

	t68 = ((x305&x306)<(x307-x308));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x309 = INT8_MAX;
	int64_t x310 = INT64_MIN;
	volatile uint32_t x311 = 16770872U;
	volatile int32_t t69 = 730546;

	t69 = ((x309&x310)<(x311-x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x317 = 4658785604521LLU;
	uint16_t x318 = UINT16_MAX;
	static volatile int32_t x319 = 85450578;
	uint16_t x320 = 10U;
	volatile int32_t t70 = 0;

	t70 = ((x317&x318)<(x319-x320));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = UINT16_MAX;
	int32_t x322 = -153860800;
	uint64_t x323 = 8813LLU;
	int32_t t71 = -7727484;

	t71 = ((x321&x322)<(x323-x324));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x325 = 2837630;
	int8_t x326 = INT8_MIN;
	int16_t x327 = -1;
	int16_t x328 = -1;
	int32_t t72 = 230;

	t72 = ((x325&x326)<(x327-x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x329 = -1;
	int32_t x331 = 30;
	int32_t x332 = INT32_MAX;
	int32_t t73 = 388362;

	t73 = ((x329&x330)<(x331-x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x333 = 36U;
	uint8_t x334 = 0U;
	int16_t x335 = 25;
	int32_t x336 = INT32_MAX;
	int32_t t74 = 742965589;

	t74 = ((x333&x334)<(x335-x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x337 = 98U;
	static int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	uint32_t x340 = 1859U;
	static volatile int32_t t75 = -189525886;

	t75 = ((x337&x338)<(x339-x340));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = 21;
	uint8_t x342 = 0U;
	int32_t x343 = -4188657;
	volatile int8_t x344 = INT8_MAX;
	int32_t t76 = -58356722;

	t76 = ((x341&x342)<(x343-x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = INT8_MIN;
	static uint16_t x346 = UINT16_MAX;
	int64_t x347 = -2584517LL;
	int8_t x348 = -1;
	static int32_t t77 = -23303554;

	t77 = ((x345&x346)<(x347-x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x349 = UINT16_MAX;
	uint64_t x351 = 4309192049903823864LLU;
	int16_t x352 = -4;
	static int32_t t78 = -25262415;

	t78 = ((x349&x350)<(x351-x352));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = 1020U;
	int32_t x354 = -66866332;
	uint16_t x355 = 874U;
	uint64_t x356 = 103LLU;
	volatile int32_t t79 = 485701;

	t79 = ((x353&x354)<(x355-x356));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x357 = 5U;
	static uint64_t x358 = 3LLU;
	int16_t x359 = INT16_MAX;
	int64_t x360 = INT64_MAX;
	volatile int32_t t80 = 2632622;

	t80 = ((x357&x358)<(x359-x360));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x370 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MAX;
	static int32_t t81 = -1562758;

	t81 = ((x369&x370)<(x371-x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = INT32_MAX;
	static int64_t x374 = 252993240379848LL;
	int32_t t82 = 75;

	t82 = ((x373&x374)<(x375-x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x379 = -22346076LL;
	volatile int32_t t83 = -444636;

	t83 = ((x377&x378)<(x379-x380));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x382 = INT8_MIN;
	volatile uint16_t x383 = 2U;
	static int32_t x384 = 1;

	t84 = ((x381&x382)<(x383-x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = INT32_MAX;
	volatile int32_t x386 = -1;
	static int64_t x387 = INT64_MIN;
	uint64_t x388 = 36041LLU;
	static volatile int32_t t85 = -6949461;

	t85 = ((x385&x386)<(x387-x388));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x389 = 430U;
	int16_t x390 = INT16_MIN;
	static volatile int32_t x392 = INT32_MIN;
	int32_t t86 = 377692;

	t86 = ((x389&x390)<(x391-x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t87 = 181392995;

	t87 = ((x393&x394)<(x395-x396));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x397 = -1;
	int16_t x400 = -1;

	t88 = ((x397&x398)<(x399-x400));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x403 = 54912530LLU;
	uint64_t x404 = 558469096LLU;
	int32_t t89 = -350802298;

	t89 = ((x401&x402)<(x403-x404));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x410 = -1;
	volatile uint32_t x411 = UINT32_MAX;
	int32_t t90 = 7677673;

	t90 = ((x409&x410)<(x411-x412));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = 0;
	volatile uint32_t x414 = 1U;
	volatile uint32_t x415 = UINT32_MAX;
	uint8_t x416 = 26U;
	int32_t t91 = -1437656;

	t91 = ((x413&x414)<(x415-x416));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x417 = 19116698LLU;
	int64_t x418 = INT64_MAX;
	uint32_t x419 = 1819248U;
	static uint32_t x420 = 304686U;
	int32_t t92 = -64533;

	t92 = ((x417&x418)<(x419-x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x423 = INT8_MIN;
	volatile int32_t t93 = -2966443;

	t93 = ((x421&x422)<(x423-x424));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x426 = 0U;
	static int32_t x427 = INT32_MIN;
	int64_t x428 = 141924260883LL;
	static volatile int32_t t94 = 947645363;

	t94 = ((x425&x426)<(x427-x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = -42;
	volatile uint8_t x430 = 42U;
	uint16_t x431 = 3U;
	uint16_t x432 = 10758U;
	int32_t t95 = -132;

	t95 = ((x429&x430)<(x431-x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x433 = -1LL;
	uint32_t x434 = UINT32_MAX;
	uint8_t x435 = 2U;
	int8_t x436 = INT8_MIN;

	t96 = ((x433&x434)<(x435-x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x437 = UINT8_MAX;
	static uint8_t x438 = UINT8_MAX;
	uint64_t x440 = 1265066765728005250LLU;
	int32_t t97 = -179067064;

	t97 = ((x437&x438)<(x439-x440));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x443 = 1U;
	int32_t x444 = -1;
	static volatile int32_t t98 = -23300;

	t98 = ((x441&x442)<(x443-x444));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x446 = 1;
	static volatile int32_t t99 = -122612753;

	t99 = ((x445&x446)<(x447-x448));

	if (t99 != 1) { NG(); } else { ; }
	
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

