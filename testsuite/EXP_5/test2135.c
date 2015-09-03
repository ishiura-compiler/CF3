#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MAX;
uint64_t t1 = 426145581LLU;
int64_t x10 = INT64_MAX;
int16_t x11 = INT16_MIN;
volatile uint8_t x12 = 60U;
static volatile uint64_t x14 = 63LLU;
int8_t x15 = INT8_MAX;
volatile uint16_t x16 = 1U;
int8_t x19 = -1;
static int32_t x24 = INT32_MAX;
static int32_t t5 = -15306878;
int8_t x30 = INT8_MAX;
int64_t x32 = INT64_MIN;
int64_t t10 = 442991752407642LL;
int64_t x57 = -1LL;
volatile int64_t x60 = -1LL;
int8_t x71 = -1;
static volatile int32_t t21 = 2593;
int32_t x102 = INT32_MIN;
int8_t x104 = -45;
volatile int64_t x107 = 977LL;
volatile uint32_t t27 = 840349U;
int64_t x113 = -1LL;
volatile int64_t x118 = -86603114721915289LL;
volatile int32_t x126 = -1;
volatile int16_t x135 = -1;
uint16_t x137 = UINT16_MAX;
int8_t x141 = INT8_MIN;
volatile int16_t x147 = INT16_MAX;
static int32_t x148 = -1;
static volatile int32_t t37 = -27879;
uint32_t x154 = 55U;
int8_t x161 = -1;
int64_t x163 = INT64_MIN;
volatile uint8_t x168 = 10U;
int64_t x179 = INT64_MAX;
int8_t x194 = 3;
int8_t x197 = 3;
int8_t x201 = -9;
int16_t x206 = INT16_MAX;
static volatile uint8_t x210 = 10U;
volatile int16_t x212 = INT16_MIN;
uint8_t x214 = 1U;
int32_t x216 = INT32_MAX;
volatile int64_t x222 = -102687LL;
static int64_t x224 = -1LL;
static uint32_t x229 = UINT32_MAX;
int32_t t59 = -11;
volatile uint16_t x246 = 19416U;
int64_t x249 = 13586576701329LL;
uint64_t x252 = UINT64_MAX;
int16_t x253 = INT16_MAX;
volatile int32_t t63 = 0;
static int32_t x260 = -2545791;
uint16_t x263 = 5135U;
int32_t t65 = 514;
volatile int32_t t66 = -571363;
int64_t x270 = INT64_MIN;
int32_t x271 = 129;
volatile uint8_t x272 = 27U;
static volatile int64_t t69 = 3LL;
volatile int32_t x284 = -1;
volatile int16_t x290 = -52;
int8_t x296 = INT8_MIN;
int32_t t74 = 3005;
volatile int64_t t76 = -37526090802LL;
uint64_t x309 = 1309483093805796LLU;
int64_t x312 = INT64_MIN;
int32_t x313 = -1;
volatile int32_t t78 = 5;
volatile int16_t x319 = INT16_MIN;
int64_t x325 = -1LL;
int8_t x330 = INT8_MIN;
int16_t x336 = INT16_MIN;
static volatile int64_t t83 = 380LL;
static int32_t t84 = -2034017;
uint32_t x348 = 1906431887U;
int8_t x357 = INT8_MIN;
int16_t x358 = INT16_MAX;
static volatile int32_t t89 = 22;
uint64_t t92 = UINT64_MAX;
uint16_t x375 = UINT16_MAX;
int64_t x382 = INT64_MIN;
int32_t x383 = INT32_MAX;
static uint16_t x396 = UINT16_MAX;
int32_t t98 = INT32_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static volatile int8_t x2 = -1;
	int8_t x3 = INT8_MAX;
	uint8_t x4 = 3U;
	volatile int32_t t0 = 5723084;

	t0 = (x1*((x2^x3)<x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 11015687206LLU;
	uint16_t x7 = 1009U;
	uint64_t x8 = 226225270942LLU;

	t1 = (x5*((x6^x7)<x8));

	if (t1 != 11015687206LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	volatile int32_t t2 = -71;

	t2 = (x9*((x10^x11)<x12));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	volatile int32_t t3 = 14986;

	t3 = (x13*((x14^x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile int64_t x18 = -1LL;
	static int32_t x20 = INT32_MIN;
	volatile int64_t t4 = -13962364356027063LL;

	t4 = (x17*((x18^x19)<x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	static volatile int64_t x22 = INT64_MAX;
	uint32_t x23 = 3126060U;

	t5 = (x21*((x22^x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -53;
	int8_t x26 = INT8_MIN;
	uint32_t x27 = UINT32_MAX;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -60;

	t6 = (x25*((x26^x27)<x28));

	if (t6 != -53) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 2U;
	static volatile int16_t x31 = INT16_MAX;
	volatile int32_t t7 = -4854649;

	t7 = (x29*((x30^x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -5;
	volatile uint64_t x34 = 381021LLU;
	static int16_t x35 = INT16_MIN;
	uint8_t x36 = 25U;
	volatile int32_t t8 = 4886592;

	t8 = (x33*((x34^x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile int32_t x38 = 452;
	int64_t x39 = -1727LL;
	int64_t x40 = INT64_MIN;
	int32_t t9 = 22706132;

	t9 = (x37*((x38^x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = 15892LL;
	volatile uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = 169U;

	t10 = (x41*((x42^x43)<x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 847LLU;
	uint32_t x46 = 1506U;
	int32_t x47 = 25;
	static volatile int8_t x48 = INT8_MAX;
	volatile uint64_t t11 = 219887456694038LLU;

	t11 = (x45*((x46^x47)<x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	volatile uint16_t x52 = UINT16_MAX;
	volatile uint64_t t12 = 7155076641491575LLU;

	t12 = (x49*((x50^x51)<x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile int8_t x54 = INT8_MAX;
	uint8_t x55 = 1U;
	uint8_t x56 = 109U;
	int32_t t13 = -1;

	t13 = (x53*((x54^x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = -1;
	int16_t x59 = INT16_MAX;
	static int64_t t14 = -27497180LL;

	t14 = (x57*((x58^x59)<x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = -1;
	int8_t x62 = INT8_MIN;
	uint8_t x63 = 3U;
	int8_t x64 = -1;
	int32_t t15 = 231658972;

	t15 = (x61*((x62^x63)<x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	static uint64_t x68 = 30597LLU;
	int32_t t16 = -15497443;

	t16 = (x65*((x66^x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int32_t x70 = -5;
	volatile int64_t x72 = INT64_MIN;
	int32_t t17 = 237065909;

	t17 = (x69*((x70^x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = -1LL;
	static uint32_t x74 = 10811U;
	volatile int8_t x75 = INT8_MIN;
	int16_t x76 = 370;
	volatile int64_t t18 = -2590345LL;

	t18 = (x73*((x74^x75)<x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 3;
	int32_t x78 = INT32_MIN;
	static volatile uint32_t x79 = 329550925U;
	int8_t x80 = 1;
	int32_t t19 = 4;

	t19 = (x77*((x78^x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 3045U;
	uint64_t x82 = 136237460451LLU;
	static int8_t x83 = 3;
	uint8_t x84 = 10U;
	volatile int32_t t20 = -4;

	t20 = (x81*((x82^x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MIN;
	static int8_t x88 = INT8_MAX;

	t21 = (x85*((x86^x87)<x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = -1LL;
	uint8_t x91 = 114U;
	int8_t x92 = -1;
	int64_t t22 = INT64_MIN;

	t22 = (x89*((x90^x91)<x92));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	uint32_t x94 = 292486U;
	volatile int16_t x95 = -2247;
	static volatile uint32_t x96 = 12052U;
	volatile int32_t t23 = 641473436;

	t23 = (x93*((x94^x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MAX;
	uint32_t x98 = UINT32_MAX;
	uint8_t x99 = 11U;
	int16_t x100 = -58;
	volatile int32_t t24 = -2102;

	t24 = (x97*((x98^x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x103 = 98LLU;
	volatile int32_t t25 = 265255221;

	t25 = (x101*((x102^x103)<x104));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 2528U;
	int64_t x108 = -3718257916244688LL;
	volatile int32_t t26 = 6;

	t26 = (x105*((x106^x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 25U;
	int64_t x110 = -4530LL;
	static uint64_t x111 = 62678361LLU;
	static uint16_t x112 = 12U;

	t27 = (x109*((x110^x111)<x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -3491639425285221LL;
	uint32_t x115 = UINT32_MAX;
	static int64_t x116 = -1LL;
	volatile int64_t t28 = 736LL;

	t28 = (x113*((x114^x115)<x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1163;
	int64_t x119 = -50194148LL;
	volatile int16_t x120 = INT16_MIN;
	int32_t t29 = -53;

	t29 = (x117*((x118^x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	static volatile uint32_t x122 = UINT32_MAX;
	static int64_t x123 = 4602584841567540LL;
	int32_t x124 = INT32_MIN;
	volatile int64_t t30 = -68001111LL;

	t30 = (x121*((x122^x123)<x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int8_t x127 = -12;
	int64_t x128 = INT64_MAX;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x125*((x126^x127)<x128));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 380821LLU;
	static int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MAX;
	static int8_t x132 = -60;
	volatile uint64_t t32 = 55467048811887596LLU;

	t32 = (x129*((x130^x131)<x132));

	if (t32 != 380821LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	volatile int64_t x134 = -1138772888LL;
	static int8_t x136 = -1;
	volatile int32_t t33 = -55212347;

	t33 = (x133*((x134^x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 5U;
	volatile int16_t x139 = -1;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 3;

	t34 = (x137*((x138^x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = 33855901397LL;
	uint8_t x143 = UINT8_MAX;
	static int64_t x144 = INT64_MAX;
	int32_t t35 = -2091404;

	t35 = (x141*((x142^x143)<x144));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	volatile uint32_t x146 = 24171483U;
	int32_t t36 = 0;

	t36 = (x145*((x146^x147)<x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -19;
	volatile int32_t x150 = INT32_MAX;
	uint16_t x151 = 854U;
	uint32_t x152 = 51201U;

	t37 = (x149*((x150^x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	static uint16_t x155 = 30U;
	static uint64_t x156 = 11499602LLU;
	volatile int32_t t38 = -120128;

	t38 = (x153*((x154^x155)<x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 120;
	int16_t x158 = 6623;
	int8_t x159 = INT8_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = 1973;

	t39 = (x157*((x158^x159)<x160));

	if (t39 != 120) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = -1049;
	int32_t x164 = 3166;
	volatile int32_t t40 = -320744;

	t40 = (x161*((x162^x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	volatile uint16_t x166 = 4838U;
	uint64_t x167 = UINT64_MAX;
	volatile int64_t t41 = 97275243831831LL;

	t41 = (x165*((x166^x167)<x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MAX;
	int32_t x171 = INT32_MIN;
	volatile int8_t x172 = -10;
	volatile int32_t t42 = -2328630;

	t42 = (x169*((x170^x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = -1;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = 31LL;
	volatile int32_t t43 = 490514714;

	t43 = (x173*((x174^x175)<x176));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	uint32_t x178 = UINT32_MAX;
	int8_t x180 = -1;
	int32_t t44 = -92649;

	t44 = (x177*((x178^x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	uint8_t x182 = 29U;
	int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MAX;
	int64_t t45 = -68735175751LL;

	t45 = (x181*((x182^x183)<x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 8U;
	int16_t x186 = INT16_MIN;
	uint64_t x187 = 3194615038353583053LLU;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = -7;

	t46 = (x185*((x186^x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = -1LL;
	static uint8_t x190 = UINT8_MAX;
	uint32_t x191 = 157377U;
	int32_t x192 = -1;
	int64_t t47 = 12635LL;

	t47 = (x189*((x190^x191)<x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -3539133678LL;
	uint64_t x195 = 4230664988344LLU;
	int32_t x196 = INT32_MIN;
	volatile int64_t t48 = -5376586961866LL;

	t48 = (x193*((x194^x195)<x196));

	if (t48 != -3539133678LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = 18;
	int32_t x199 = INT32_MIN;
	uint64_t x200 = 395319920217871101LLU;
	volatile int32_t t49 = -78907421;

	t49 = (x197*((x198^x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x202 = 264986456LLU;
	uint16_t x203 = 3U;
	volatile uint16_t x204 = 17U;
	int32_t t50 = 59473581;

	t50 = (x201*((x202^x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	static uint32_t x207 = 965944870U;
	volatile int16_t x208 = -1;
	int64_t t51 = INT64_MIN;

	t51 = (x205*((x206^x207)<x208));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = 1;
	static int64_t x211 = 202LL;
	volatile int32_t t52 = -417217;

	t52 = (x209*((x210^x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 969464;
	int8_t x215 = 0;
	int32_t t53 = 2758;

	t53 = (x213*((x214^x215)<x216));

	if (t53 != 969464) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x217 = UINT32_MAX;
	volatile int64_t x218 = -44LL;
	int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MAX;
	volatile uint32_t t54 = 4838228U;

	t54 = (x217*((x218^x219)<x220));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	uint64_t x223 = UINT64_MAX;
	int32_t t55 = -1452;

	t55 = (x221*((x222^x223)<x224));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	volatile int16_t x226 = -1;
	int8_t x227 = -8;
	uint64_t x228 = 0LLU;
	uint64_t t56 = 2370567857136856LLU;

	t56 = (x225*((x226^x227)<x228));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	static uint8_t x231 = UINT8_MAX;
	int64_t x232 = INT64_MIN;
	uint32_t t57 = 1U;

	t57 = (x229*((x230^x231)<x232));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	int8_t x234 = INT8_MAX;
	static uint64_t x235 = 7027285197LLU;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x233*((x234^x235)<x236));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = 16U;
	static int32_t x238 = -433714;
	int8_t x239 = -1;
	volatile int8_t x240 = INT8_MIN;

	t59 = (x237*((x238^x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 1;
	static volatile int64_t x242 = 249538341453694LL;
	int8_t x243 = -1;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = 367;

	t60 = (x241*((x242^x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	static int8_t x247 = -1;
	uint16_t x248 = 1U;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x245*((x246^x247)<x248));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = INT64_MIN;
	int32_t x251 = -14071769;
	int64_t t62 = 11LL;

	t62 = (x249*((x250^x251)<x252));

	if (t62 != 13586576701329LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x254 = 11245720;
	int64_t x255 = INT64_MIN;
	uint8_t x256 = 3U;

	t63 = (x253*((x254^x255)<x256));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x258 = INT32_MIN;
	uint16_t x259 = UINT16_MAX;
	int32_t t64 = 143654194;

	t64 = (x257*((x258^x259)<x260));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	static uint8_t x262 = 7U;
	uint8_t x264 = 5U;

	t65 = (x261*((x262^x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = INT8_MAX;
	uint32_t x266 = 15U;
	int8_t x267 = -1;
	uint32_t x268 = UINT32_MAX;

	t66 = (x265*((x266^x267)<x268));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int32_t t67 = 31990;

	t67 = (x269*((x270^x271)<x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	volatile int32_t x274 = INT32_MIN;
	volatile int8_t x275 = INT8_MAX;
	volatile int16_t x276 = -1;
	static volatile int64_t t68 = INT64_MIN;

	t68 = (x273*((x274^x275)<x276));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	int64_t x278 = -1LL;
	int64_t x279 = -1LL;
	int64_t x280 = 32LL;

	t69 = (x277*((x278^x279)<x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -5;
	static int64_t x282 = INT64_MIN;
	static uint64_t x283 = 1012544022LLU;
	int32_t t70 = 221;

	t70 = (x281*((x282^x283)<x284));

	if (t70 != -5) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = -1;
	uint8_t x286 = 1U;
	uint64_t x287 = 1382310024007813437LLU;
	uint16_t x288 = 1235U;
	volatile int32_t t71 = 35744;

	t71 = (x285*((x286^x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x291 = INT16_MAX;
	int32_t x292 = -39652;
	uint32_t t72 = 1080568U;

	t72 = (x289*((x290^x291)<x292));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 1612;
	int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MIN;
	static int32_t t73 = 0;

	t73 = (x293*((x294^x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	static uint8_t x298 = 0U;
	volatile int16_t x299 = INT16_MIN;
	int16_t x300 = -1;

	t74 = (x297*((x298^x299)<x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 1;
	int16_t x302 = -1;
	int32_t x303 = INT32_MAX;
	int64_t x304 = 31LL;
	volatile int32_t t75 = -18;

	t75 = (x301*((x302^x303)<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MAX;
	uint64_t x307 = UINT64_MAX;
	static volatile int64_t x308 = INT64_MIN;

	t76 = (x305*((x306^x307)<x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x310 = INT32_MAX;
	volatile int64_t x311 = -1LL;
	volatile uint64_t t77 = 54277499LLU;

	t77 = (x309*((x310^x311)<x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = INT32_MIN;
	static volatile int64_t x315 = -1LL;
	static uint8_t x316 = 2U;

	t78 = (x313*((x314^x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -1;
	uint32_t x318 = UINT32_MAX;
	volatile uint32_t x320 = 52U;
	volatile int32_t t79 = 889876236;

	t79 = (x317*((x318^x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = UINT8_MAX;
	int16_t x323 = 2;
	int16_t x324 = 3463;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x321*((x322^x323)<x324));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MAX;
	static int32_t x328 = INT32_MIN;
	volatile int64_t t81 = -13638869079159652LL;

	t81 = (x325*((x326^x327)<x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int32_t x331 = INT32_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t82 = 0;

	t82 = (x329*((x330^x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	static int8_t x334 = INT8_MIN;
	uint16_t x335 = 219U;

	t83 = (x333*((x334^x335)<x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	int64_t x338 = -27053382389540LL;
	int8_t x339 = INT8_MAX;
	int32_t x340 = -134;

	t84 = (x337*((x338^x339)<x340));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	uint64_t x342 = 353963122378162LLU;
	volatile uint64_t x343 = UINT64_MAX;
	uint16_t x344 = 26U;
	volatile uint32_t t85 = 463U;

	t85 = (x341*((x342^x343)<x344));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	static int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	volatile int32_t t86 = 100;

	t86 = (x345*((x346^x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x350 = -1322994;
	static volatile int16_t x351 = INT16_MIN;
	static int8_t x352 = 2;
	static uint32_t t87 = 129628U;

	t87 = (x349*((x350^x351)<x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile uint16_t x354 = 235U;
	static int16_t x355 = INT16_MAX;
	static int8_t x356 = INT8_MIN;
	int32_t t88 = -15196;

	t88 = (x353*((x354^x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x359 = UINT8_MAX;
	uint16_t x360 = 464U;

	t89 = (x357*((x358^x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	int16_t x362 = -1;
	int32_t x363 = INT32_MAX;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t90 = 54613;

	t90 = (x361*((x362^x363)<x364));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = 94;
	int8_t x366 = -23;
	static int64_t x367 = -1LL;
	static int8_t x368 = INT8_MIN;
	int32_t t91 = 6667112;

	t91 = (x365*((x366^x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x370 = 454714715576LL;
	int32_t x371 = -2109414;
	int32_t x372 = INT32_MIN;

	t92 = (x369*((x370^x371)<x372));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = 4666756LL;
	int16_t x376 = 0;
	volatile int64_t t93 = -554535965LL;

	t93 = (x373*((x374^x375)<x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	uint8_t x378 = 13U;
	uint8_t x379 = UINT8_MAX;
	static uint8_t x380 = UINT8_MAX;
	volatile int32_t t94 = 54470796;

	t94 = (x377*((x378^x379)<x380));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	int16_t x384 = INT16_MAX;
	volatile int32_t t95 = -1;

	t95 = (x381*((x382^x383)<x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 209U;
	int8_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	uint64_t x388 = 570298LLU;
	int32_t t96 = -1;

	t96 = (x385*((x386^x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x389 = INT64_MIN;
	static int16_t x390 = -1;
	uint64_t x391 = 88LLU;
	uint8_t x392 = 17U;
	static volatile int64_t t97 = 356521185LL;

	t97 = (x389*((x390^x391)<x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = -1;
	static int32_t x395 = INT32_MAX;

	t98 = (x393*((x394^x395)<x396));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 53U;
	int32_t x398 = INT32_MAX;
	int64_t x399 = -1LL;
	volatile int8_t x400 = 23;
	volatile int32_t t99 = -2475;

	t99 = (x397*((x398^x399)<x400));

	if (t99 != 53) { NG(); } else { ; }
	
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

