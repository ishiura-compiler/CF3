#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
volatile int16_t x4 = INT16_MIN;
uint64_t x7 = 27570048475339064LLU;
uint64_t x8 = 3931890492156993102LLU;
static int16_t x11 = INT16_MIN;
static volatile uint32_t t2 = 27666219U;
volatile int8_t x13 = -1;
volatile int16_t x18 = INT16_MAX;
int16_t x22 = 7681;
uint8_t x30 = 1U;
int8_t x34 = INT8_MAX;
static uint16_t x39 = 12U;
static volatile int32_t x41 = -1;
volatile int64_t x45 = INT64_MIN;
int8_t x48 = INT8_MIN;
int16_t x60 = -1;
int32_t t15 = 162686;
uint64_t x70 = UINT64_MAX;
uint64_t t17 = UINT64_MAX;
static int64_t t18 = -1333444225LL;
uint64_t x83 = 3720382926214LLU;
static int16_t x84 = 4609;
int32_t x91 = INT32_MAX;
static uint32_t x103 = 611428348U;
volatile int32_t t25 = -72219;
uint8_t x105 = 13U;
uint32_t x116 = 149576U;
int16_t x122 = INT16_MIN;
uint8_t x126 = 4U;
int32_t x132 = INT32_MAX;
volatile int16_t x135 = 1720;
uint16_t x148 = 21U;
int32_t t36 = 3351;
int32_t t37 = -1;
static int64_t x155 = -539780LL;
volatile int32_t x162 = INT32_MIN;
uint32_t x163 = 7843U;
static volatile int32_t t40 = INT32_MIN;
int16_t x165 = INT16_MIN;
uint8_t x167 = 5U;
uint64_t x168 = 922194079369LLU;
volatile int64_t t41 = INT64_MIN;
int64_t x177 = -1LL;
volatile int64_t t44 = INT64_MIN;
int32_t x181 = 6415;
int8_t x183 = INT8_MAX;
int16_t x190 = INT16_MIN;
static uint32_t x194 = 15U;
static uint32_t t48 = 3025U;
static int16_t x197 = 1;
int8_t x200 = INT8_MAX;
static int32_t t49 = 333;
static int16_t x203 = INT16_MAX;
int32_t x204 = INT32_MIN;
uint64_t x216 = 3246814407LLU;
volatile uint64_t t53 = 395LLU;
uint16_t x218 = 37U;
volatile int16_t x223 = 138;
uint32_t t55 = 48U;
static volatile int16_t x228 = INT16_MIN;
uint32_t t57 = 61772921U;
uint32_t x233 = UINT32_MAX;
int16_t x244 = INT16_MIN;
static int16_t x246 = -1;
int16_t x247 = INT16_MIN;
volatile int16_t x249 = INT16_MIN;
int32_t x253 = 91327291;
volatile int32_t x268 = -23398559;
int32_t x272 = 1;
volatile int8_t x275 = 0;
static uint32_t x276 = 3U;
volatile int64_t x278 = INT64_MIN;
volatile int32_t x280 = 62974;
volatile int64_t t69 = 1931345367578292LL;
static uint32_t x293 = 93U;
static int32_t x296 = -7;
int64_t x297 = -1LL;
static int8_t x299 = -1;
volatile int32_t t75 = 63;
uint64_t x307 = 700281LLU;
volatile int64_t t76 = 708457013044883418LL;
int64_t x313 = INT64_MIN;
volatile int64_t t78 = 317547485579884LL;
uint64_t x318 = UINT64_MAX;
static volatile uint16_t x319 = 43U;
static uint64_t t79 = 12003865387LLU;
int64_t x324 = -68941650LL;
volatile int64_t x326 = INT64_MIN;
int8_t x328 = INT8_MIN;
volatile int16_t x330 = 17;
volatile int16_t x334 = -1;
int16_t x340 = INT16_MIN;
volatile int32_t t85 = 69189066;
int8_t x347 = INT8_MIN;
static volatile int8_t x349 = 1;
static int32_t x354 = INT32_MAX;
int16_t x356 = -1;
uint8_t x361 = 1U;
int64_t x373 = -93341030701379540LL;
int8_t x379 = -1;
volatile int32_t t94 = -874935556;
volatile int16_t x381 = INT16_MIN;
static int64_t x387 = INT64_MIN;
int64_t x392 = -1LL;
int32_t x395 = -5;


void f0(void) {
	int8_t x2 = -1;
	int64_t x3 = -1LL;
	volatile int32_t t0 = -1834321;

	t0 = ((x1&x2)^(x3==x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = 3073;
	int32_t t1 = 1975129;

	t1 = ((x5&x6)^(x7==x8));

	if (t1 != 3073) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 100U;
	volatile uint8_t x10 = 96U;
	int16_t x12 = INT16_MIN;

	t2 = ((x9&x10)^(x11==x12));

	if (t2 != 97U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 16344912;

	t3 = ((x13&x14)^(x15==x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = INT64_MAX;
	int32_t t4 = -215277;

	t4 = ((x17&x18)^(x19==x20));

	if (t4 != 32640) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	uint16_t x23 = UINT16_MAX;
	uint32_t x24 = 28618119U;
	volatile uint32_t t5 = 18U;

	t5 = ((x21&x22)^(x23==x24));

	if (t5 != 7681U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int32_t x26 = INT32_MIN;
	volatile int32_t x27 = INT32_MIN;
	uint32_t x28 = 1U;
	int32_t t6 = INT32_MIN;

	t6 = ((x25&x26)^(x27==x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = 1;
	static int64_t x31 = 32885959771LL;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = 4410;

	t7 = ((x29&x30)^(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 26U;
	int8_t x35 = -1;
	uint8_t x36 = 1U;
	int32_t t8 = -103448180;

	t8 = ((x33&x34)^(x35==x36));

	if (t8 != 26) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	volatile uint64_t x38 = 538347LLU;
	volatile int16_t x40 = -1;
	volatile uint64_t t9 = 67179269765LLU;

	t9 = ((x37&x38)^(x39==x40));

	if (t9 != 538347LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MAX;
	volatile int8_t x43 = -58;
	uint32_t x44 = 33632U;
	int64_t t10 = INT64_MAX;

	t10 = ((x41&x42)^(x43==x44));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -88;
	int16_t x47 = -1;
	int64_t t11 = INT64_MIN;

	t11 = ((x45&x46)^(x47==x48));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	uint16_t x50 = 4U;
	int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MAX;
	volatile uint32_t t12 = 86495U;

	t12 = ((x49&x50)^(x51==x52));

	if (t12 != 4U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int32_t x54 = -15;
	int8_t x55 = INT8_MIN;
	static uint8_t x56 = UINT8_MAX;
	static int32_t t13 = -488784;

	t13 = ((x53&x54)^(x55==x56));

	if (t13 != 65521) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 71U;
	volatile int16_t x58 = INT16_MIN;
	int32_t x59 = -222;
	int32_t t14 = -25682;

	t14 = ((x57&x58)^(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	volatile uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MIN;
	int64_t x64 = 34957011105883903LL;

	t15 = ((x61&x62)^(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = INT16_MIN;
	static int16_t x66 = INT16_MIN;
	volatile int64_t x67 = -1LL;
	int64_t x68 = 588522733352LL;
	volatile int32_t t16 = -285803;

	t16 = ((x65&x66)^(x67==x68));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x69 = UINT64_MAX;
	int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;

	t17 = ((x69&x70)^(x71==x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 12U;
	int64_t x74 = INT64_MAX;
	volatile int64_t x75 = INT64_MIN;
	int32_t x76 = -1;

	t18 = ((x73&x74)^(x75==x76));

	if (t18 != 12LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 14U;
	volatile int32_t x78 = -1;
	int8_t x79 = -1;
	int32_t x80 = -7088224;
	int32_t t19 = -66132;

	t19 = ((x77&x78)^(x79==x80));

	if (t19 != 14) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = 13;
	uint64_t x82 = UINT64_MAX;
	uint64_t t20 = 84320086475799731LLU;

	t20 = ((x81&x82)^(x83==x84));

	if (t20 != 13LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = 1;
	int16_t x86 = INT16_MIN;
	uint32_t x87 = UINT32_MAX;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -638;

	t21 = ((x85&x86)^(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	uint64_t x90 = 2113267722323404810LLU;
	int32_t x92 = INT32_MIN;
	uint64_t t22 = 33634618869804515LLU;

	t22 = ((x89&x90)^(x91==x92));

	if (t22 != 2113267722323394560LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	volatile int8_t x94 = 3;
	int8_t x95 = INT8_MIN;
	static int64_t x96 = -1LL;
	int32_t t23 = -254;

	t23 = ((x93&x94)^(x95==x96));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = -1;
	uint16_t x98 = 24U;
	int32_t x99 = INT32_MAX;
	int8_t x100 = -1;
	int32_t t24 = 4;

	t24 = ((x97&x98)^(x99==x100));

	if (t24 != 24) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int16_t x102 = -1;
	static int32_t x104 = -1;

	t25 = ((x101&x102)^(x103==x104));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MIN;
	int32_t x107 = INT32_MIN;
	volatile uint64_t x108 = 11438LLU;
	int32_t t26 = 540474586;

	t26 = ((x105&x106)^(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = -1;
	int64_t x111 = -1LL;
	uint8_t x112 = 4U;
	volatile int64_t t27 = INT64_MIN;

	t27 = ((x109&x110)^(x111==x112));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static volatile int16_t x114 = 39;
	uint32_t x115 = 37U;
	int32_t t28 = -10100;

	t28 = ((x113&x114)^(x115==x116));

	if (t28 != 39) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	uint16_t x118 = 0U;
	int32_t x119 = INT32_MIN;
	uint16_t x120 = 107U;
	volatile int64_t t29 = -87964LL;

	t29 = ((x117&x118)^(x119==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = UINT16_MAX;
	int32_t x123 = INT32_MIN;
	static int64_t x124 = -1LL;
	int32_t t30 = 12;

	t30 = ((x121&x122)^(x123==x124));

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 451129759U;
	int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MIN;
	uint32_t t31 = 3U;

	t31 = ((x125&x126)^(x127==x128));

	if (t31 != 4U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 40572LLU;
	int16_t x130 = INT16_MAX;
	int64_t x131 = INT64_MAX;
	uint64_t t32 = 5370627919688LLU;

	t32 = ((x129&x130)^(x131==x132));

	if (t32 != 7804LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -16;
	int8_t x134 = INT8_MAX;
	static volatile uint32_t x136 = 56243495U;
	volatile int32_t t33 = -79;

	t33 = ((x133&x134)^(x135==x136));

	if (t33 != 112) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = 1015;
	int64_t x138 = INT64_MAX;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = INT8_MAX;
	int64_t t34 = 25889676718LL;

	t34 = ((x137&x138)^(x139==x140));

	if (t34 != 1015LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MAX;
	static int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MAX;
	uint8_t x144 = UINT8_MAX;
	int64_t t35 = -8180204LL;

	t35 = ((x141&x142)^(x143==x144));

	if (t35 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	int32_t x146 = 2763;
	uint32_t x147 = 107852560U;

	t36 = ((x145&x146)^(x147==x148));

	if (t36 != 75) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 1149;
	static int8_t x150 = -1;
	volatile int16_t x151 = -1;
	static volatile uint8_t x152 = 1U;

	t37 = ((x149&x150)^(x151==x152));

	if (t37 != 1149) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	uint8_t x156 = UINT8_MAX;
	int32_t t38 = -1202;

	t38 = ((x153&x154)^(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -54LL;
	int8_t x158 = INT8_MAX;
	static int64_t x159 = INT64_MIN;
	uint64_t x160 = 41944373LLU;
	int64_t t39 = 201656666870215LL;

	t39 = ((x157&x158)^(x159==x160));

	if (t39 != 74LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x164 = 2U;

	t40 = ((x161&x162)^(x163==x164));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x166 = INT64_MIN;

	t41 = ((x165&x166)^(x167==x168));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 1U;
	uint16_t x170 = 2U;
	volatile uint8_t x171 = UINT8_MAX;
	volatile int16_t x172 = 1252;
	static volatile int32_t t42 = 156079;

	t42 = ((x169&x170)^(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MAX;
	uint32_t x175 = UINT32_MAX;
	static int64_t x176 = INT64_MAX;
	volatile int32_t t43 = 269;

	t43 = ((x173&x174)^(x175==x176));

	if (t43 != 32640) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	volatile int64_t x179 = INT64_MIN;
	int64_t x180 = -1LL;

	t44 = ((x177&x178)^(x179==x180));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x182 = INT8_MAX;
	uint64_t x184 = 16LLU;
	int32_t t45 = 1046170;

	t45 = ((x181&x182)^(x183==x184));

	if (t45 != 15) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 10;
	volatile int8_t x186 = INT8_MIN;
	uint16_t x187 = 7U;
	uint8_t x188 = UINT8_MAX;
	int32_t t46 = 16749513;

	t46 = ((x185&x186)^(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	static volatile int16_t x191 = -1;
	volatile int16_t x192 = -7197;
	volatile int32_t t47 = INT32_MIN;

	t47 = ((x189&x190)^(x191==x192));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	volatile int8_t x195 = INT8_MIN;
	int16_t x196 = -29;

	t48 = ((x193&x194)^(x195==x196));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = -1;
	int32_t x199 = -1936251;

	t49 = ((x197&x198)^(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x201 = 22895U;
	uint64_t x202 = 3977572LLU;
	uint64_t t50 = 43644LLU;

	t50 = ((x201&x202)^(x203==x204));

	if (t50 != 4452LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MAX;
	int8_t x206 = INT8_MIN;
	static int32_t x207 = INT32_MIN;
	static volatile int16_t x208 = -1;
	int32_t t51 = 45;

	t51 = ((x205&x206)^(x207==x208));

	if (t51 != 2147483520) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 32198500;
	int16_t x210 = INT16_MAX;
	volatile int32_t x211 = -16862047;
	int64_t x212 = -39869904LL;
	int32_t t52 = 828487362;

	t52 = ((x209&x210)^(x211==x212));

	if (t52 != 20324) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 12134969727LLU;
	int16_t x214 = -497;
	int16_t x215 = INT16_MAX;

	t53 = ((x213&x214)^(x215==x216));

	if (t53 != 12134969359LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	volatile uint16_t x219 = 2U;
	volatile int8_t x220 = INT8_MIN;
	int32_t t54 = -40262984;

	t54 = ((x217&x218)^(x219==x220));

	if (t54 != 37) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 25737U;
	volatile uint16_t x222 = UINT16_MAX;
	int32_t x224 = 5113308;

	t55 = ((x221&x222)^(x223==x224));

	if (t55 != 25737U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	int8_t x226 = -1;
	volatile int16_t x227 = INT16_MAX;
	static volatile int32_t t56 = 31005;

	t56 = ((x225&x226)^(x227==x228));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	uint32_t x230 = UINT32_MAX;
	uint64_t x231 = 3048054LLU;
	uint8_t x232 = 10U;

	t57 = ((x229&x230)^(x231==x232));

	if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = -12;
	int16_t x235 = -2;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t58 = 991U;

	t58 = ((x233&x234)^(x235==x236));

	if (t58 != 4294967284U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = -592942479628LL;
	static int32_t x239 = 395053526;
	uint16_t x240 = UINT16_MAX;
	int64_t t59 = INT64_MIN;

	t59 = ((x237&x238)^(x239==x240));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 7U;
	int8_t x242 = -42;
	int64_t x243 = INT64_MIN;
	volatile int32_t t60 = 64008611;

	t60 = ((x241&x242)^(x243==x244));

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -1;
	static uint16_t x248 = 7267U;
	volatile int32_t t61 = -110;

	t61 = ((x245&x246)^(x247==x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = -2;
	int32_t x252 = INT32_MAX;
	volatile int32_t t62 = 1598;

	t62 = ((x249&x250)^(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = -1LL;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MIN;
	int64_t t63 = -3LL;

	t63 = ((x253&x254)^(x255==x256));

	if (t63 != 91327291LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MAX;
	int64_t x258 = -1LL;
	volatile int16_t x259 = -1502;
	static uint8_t x260 = 49U;
	static int64_t t64 = 83357293339LL;

	t64 = ((x257&x258)^(x259==x260));

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	uint64_t x262 = 16LLU;
	uint64_t x263 = 402021784660245LLU;
	int32_t x264 = INT32_MIN;
	uint64_t t65 = 4655708LLU;

	t65 = ((x261&x262)^(x263==x264));

	if (t65 != 16LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -6806512LL;
	uint8_t x266 = 11U;
	int16_t x267 = INT16_MAX;
	int64_t t66 = -1352171210LL;

	t66 = ((x265&x266)^(x267==x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = -1;
	int64_t x270 = INT64_MIN;
	volatile int8_t x271 = INT8_MAX;
	volatile int64_t t67 = INT64_MIN;

	t67 = ((x269&x270)^(x271==x272));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 5;
	int8_t x274 = INT8_MIN;
	int32_t t68 = -259026;

	t68 = ((x273&x274)^(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x279 = INT64_MIN;

	t69 = ((x277&x278)^(x279==x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	static int64_t x282 = INT64_MAX;
	int16_t x283 = 1;
	volatile uint32_t x284 = 49254124U;
	static volatile uint64_t t70 = 247883539098LLU;

	t70 = ((x281&x282)^(x283==x284));

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	volatile uint32_t x286 = 1043865218U;
	int64_t x287 = -3144048276291LL;
	int64_t x288 = INT64_MIN;
	volatile uint32_t t71 = 914994158U;

	t71 = ((x285&x286)^(x287==x288));

	if (t71 != 1043865218U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = UINT32_MAX;
	int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	uint32_t t72 = 1056821293U;

	t72 = ((x289&x290)^(x291==x292));

	if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -1;
	volatile int64_t x295 = INT64_MIN;
	volatile uint32_t t73 = 474387U;

	t73 = ((x293&x294)^(x295==x296));

	if (t73 != 93U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = INT8_MAX;
	uint64_t x300 = 989700063457LLU;
	volatile int64_t t74 = -3301123752897224990LL;

	t74 = ((x297&x298)^(x299==x300));

	if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 1U;
	static volatile int16_t x302 = INT16_MIN;
	int8_t x303 = -1;
	static uint32_t x304 = 3579338U;

	t75 = ((x301&x302)^(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = -87350802822624LL;
	int8_t x306 = -14;
	int64_t x308 = 355104415313584101LL;

	t76 = ((x305&x306)^(x307==x308));

	if (t76 != -87350802822624LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 72U;
	uint8_t x310 = 15U;
	uint32_t x311 = 9273U;
	static int8_t x312 = INT8_MAX;
	int32_t t77 = -101;

	t77 = ((x309&x310)^(x311==x312));

	if (t77 != 8) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = 24123917U;
	uint64_t x315 = 324752791073626434LLU;
	uint32_t x316 = 388122415U;

	t78 = ((x313&x314)^(x315==x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int8_t x320 = INT8_MIN;

	t79 = ((x317&x318)^(x319==x320));

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x321 = UINT8_MAX;
	int32_t x322 = -1;
	int8_t x323 = INT8_MIN;
	int32_t t80 = -523785424;

	t80 = ((x321&x322)^(x323==x324));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 368340736957LLU;
	static volatile uint8_t x327 = 1U;
	uint64_t t81 = 27803LLU;

	t81 = ((x325&x326)^(x327==x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	int8_t x331 = INT8_MAX;
	int64_t x332 = -31598732LL;
	static volatile int32_t t82 = 28023402;

	t82 = ((x329&x330)^(x331==x332));

	if (t82 != 17) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MIN;
	int8_t x335 = -15;
	uint32_t x336 = 22U;
	volatile int32_t t83 = -7;

	t83 = ((x333&x334)^(x335==x336));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	uint16_t x338 = UINT16_MAX;
	static int16_t x339 = -1;
	int32_t t84 = -21132;

	t84 = ((x337&x338)^(x339==x340));

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	int32_t x342 = -185273604;
	volatile uint64_t x343 = 50LLU;
	int8_t x344 = INT8_MIN;

	t85 = ((x341&x342)^(x343==x344));

	if (t85 != -185273728) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 29010592U;
	volatile uint8_t x346 = 13U;
	static volatile int32_t x348 = INT32_MIN;
	volatile uint32_t t86 = 6U;

	t86 = ((x345&x346)^(x347==x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t87 = -14889;

	t87 = ((x349&x350)^(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 2U;
	static int32_t x355 = 3;
	int32_t t88 = -91;

	t88 = ((x353&x354)^(x355==x356));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	volatile int16_t x359 = -1;
	static uint64_t x360 = UINT64_MAX;
	volatile int64_t t89 = -67015493220925LL;

	t89 = ((x357&x358)^(x359==x360));

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x362 = 0U;
	static int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 1;

	t90 = ((x361&x362)^(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	int16_t x366 = -2;
	static volatile uint32_t x367 = 127563419U;
	static int32_t x368 = INT32_MAX;
	uint32_t t91 = 269549U;

	t91 = ((x365&x366)^(x367==x368));

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = 154;
	int8_t x371 = INT8_MIN;
	int32_t x372 = -48317;
	volatile int32_t t92 = 2;

	t92 = ((x369&x370)^(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MIN;
	volatile int64_t t93 = -15637286LL;

	t93 = ((x373&x374)^(x375==x376));

	if (t93 != 20524LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	uint32_t x380 = 106142101U;

	t94 = ((x377&x378)^(x379==x380));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MAX;
	int64_t x384 = -1634675LL;
	int64_t t95 = INT64_MIN;

	t95 = ((x381&x382)^(x383==x384));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 5U;
	int64_t x386 = 0LL;
	int8_t x388 = INT8_MIN;
	static int64_t t96 = 72520189729121486LL;

	t96 = ((x385&x386)^(x387==x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -7;
	int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MAX;
	volatile int64_t t97 = INT64_MIN;

	t97 = ((x389&x390)^(x391==x392));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 99LL;
	uint8_t x394 = 0U;
	static int64_t x396 = INT64_MAX;
	static volatile int64_t t98 = 1055269507771007LL;

	t98 = ((x393&x394)^(x395==x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = INT32_MIN;
	volatile int64_t x399 = INT64_MIN;
	static uint16_t x400 = 4774U;
	static volatile int32_t t99 = 0;

	t99 = ((x397&x398)^(x399==x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

