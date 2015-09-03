#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
volatile int32_t x5 = -1;
int64_t x9 = -1LL;
volatile int8_t x32 = INT8_MIN;
uint32_t t9 = 373913U;
uint8_t x43 = UINT8_MAX;
volatile uint32_t t10 = 33U;
int8_t x45 = INT8_MAX;
volatile int64_t x46 = 16281822602948321LL;
static volatile int32_t t12 = -766;
int64_t t14 = -354434615490LL;
volatile int64_t x65 = -2029643624487301200LL;
static uint64_t x67 = UINT64_MAX;
int32_t x68 = INT32_MIN;
uint32_t t17 = 1557U;
volatile int16_t x76 = INT16_MIN;
volatile int8_t x79 = 1;
static int32_t t19 = 213447040;
int32_t x82 = -53598;
uint8_t x84 = UINT8_MAX;
volatile uint64_t t20 = 185LLU;
static volatile int32_t t21 = -5364;
int32_t x94 = -3344;
uint32_t x99 = 308761735U;
volatile uint32_t x100 = UINT32_MAX;
int32_t x108 = INT32_MIN;
int8_t x114 = INT8_MIN;
int64_t x119 = -15044889756LL;
static volatile int16_t x126 = INT16_MAX;
uint64_t x128 = UINT64_MAX;
int64_t x130 = 0LL;
volatile uint64_t t34 = 213797002409109540LLU;
int32_t x143 = -9;
static int64_t x144 = -128830565273LL;
int64_t t35 = 3076338269316105LL;
uint64_t x148 = UINT64_MAX;
volatile int32_t t39 = -1;
volatile int32_t t40 = -512;
int64_t x166 = INT64_MIN;
volatile uint64_t x176 = 2068175333851124LLU;
int32_t x180 = -115698;
volatile int32_t t45 = 5166;
volatile int8_t x190 = INT8_MIN;
static uint64_t x191 = 195340791LLU;
int8_t x195 = INT8_MIN;
static volatile int8_t x197 = INT8_MIN;
int8_t x198 = -1;
int64_t x204 = INT64_MAX;
static uint64_t x213 = UINT64_MAX;
uint32_t x216 = UINT32_MAX;
static int32_t x227 = INT32_MIN;
int16_t x230 = INT16_MIN;
uint32_t x235 = 141U;
int32_t x236 = -1;
static int8_t x237 = INT8_MIN;
int32_t x244 = INT32_MIN;
volatile uint32_t t60 = 61U;
static volatile int8_t x248 = -3;
volatile int32_t t63 = -1;
uint8_t x261 = 55U;
uint8_t x268 = 103U;
volatile int64_t t66 = 183075562LL;
int32_t x271 = -78151;
int32_t x274 = INT32_MAX;
int64_t x284 = INT64_MIN;
int32_t t70 = -1;
volatile int32_t x290 = 4;
int64_t x291 = -1LL;
volatile uint16_t x292 = 10U;
int16_t x306 = INT16_MIN;
static uint16_t x310 = 2U;
static int8_t x311 = INT8_MAX;
int16_t x331 = INT16_MIN;
volatile uint64_t x333 = 374581931057411LLU;
volatile int8_t x334 = -1;
static uint16_t x339 = 23898U;
uint32_t x341 = 457894U;
volatile int64_t x344 = -15767391013LL;
static int64_t x357 = -1LL;
static int16_t x362 = -1;
int8_t x364 = INT8_MIN;
int8_t x367 = INT8_MIN;
volatile int32_t x373 = 25507;
int64_t x376 = INT64_MAX;
static uint8_t x378 = 15U;
static int32_t x391 = -1;
uint64_t t97 = 4847644LLU;
volatile int8_t x404 = INT8_MIN;


void f0(void) {
	static int8_t x2 = INT8_MIN;
	volatile int32_t x3 = -1;
	int8_t x4 = -41;
	int64_t t0 = 908772LL;

	t0 = (x1&((x2%x3)==x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 1;
	int32_t x7 = 41;
	int16_t x8 = 1;
	int32_t t1 = 2248;

	t1 = (x5&((x6%x7)==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 26U;
	int8_t x11 = 1;
	uint64_t x12 = 443337195653LLU;
	int64_t t2 = 45363812288LL;

	t2 = (x9&((x10%x11)==x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int64_t x14 = 250954787662298LL;
	int16_t x15 = INT16_MIN;
	static volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 337;

	t3 = (x13&((x14%x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	volatile int8_t x18 = INT8_MIN;
	int32_t x19 = -6679;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -157284344;

	t4 = (x17&((x18%x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	uint64_t x22 = 39844846777LLU;
	uint64_t x23 = 387877078245LLU;
	int16_t x24 = 0;
	volatile int32_t t5 = -6;

	t5 = (x21&((x22%x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 20449482005247LL;
	uint16_t x26 = 1U;
	int64_t x27 = 92460220329791331LL;
	volatile uint8_t x28 = 0U;
	int64_t t6 = 284763542699111497LL;

	t6 = (x25&((x26%x27)==x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = 1;
	static uint8_t x30 = UINT8_MAX;
	int32_t x31 = -11531780;
	int32_t t7 = 68562645;

	t7 = (x29&((x30%x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint16_t x34 = UINT16_MAX;
	int64_t x35 = -1LL;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 158567355;

	t8 = (x33&((x34%x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 501141490U;
	int32_t x38 = INT32_MIN;
	uint64_t x39 = 2695891757369615141LLU;
	int32_t x40 = INT32_MIN;

	t9 = (x37&((x38%x39)==x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	uint16_t x42 = 0U;
	static int16_t x44 = 6;

	t10 = (x41&((x42%x43)==x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = INT32_MIN;
	int8_t x48 = 0;
	volatile int32_t t11 = 119973201;

	t11 = (x45&((x46%x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = 5;
	int64_t x50 = 71631464LL;
	volatile int32_t x51 = INT32_MIN;
	volatile int32_t x52 = -1222;

	t12 = (x49&((x50%x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 18;
	int64_t x54 = INT64_MIN;
	uint64_t x55 = 36302152750348761LLU;
	int16_t x56 = 11;
	static volatile int32_t t13 = -119565001;

	t13 = (x53&((x54%x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MAX;
	int16_t x58 = -1;
	uint32_t x59 = 235405U;
	static int16_t x60 = -1;

	t14 = (x57&((x58%x59)==x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = -1LL;
	int16_t x62 = INT16_MIN;
	static int16_t x63 = INT16_MIN;
	int8_t x64 = INT8_MIN;
	int64_t t15 = -11501288309718LL;

	t15 = (x61&((x62%x63)==x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -146;
	volatile int64_t t16 = 29351145145394LL;

	t16 = (x65&((x66%x67)==x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 150287155U;
	static int16_t x70 = -1;
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MAX;

	t17 = (x69&((x70%x71)==x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	uint64_t x75 = 46659655822823216LLU;
	int32_t t18 = 243;

	t18 = (x73&((x74%x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 1;
	int16_t x78 = -1;
	volatile int8_t x80 = INT8_MAX;

	t19 = (x77&((x78%x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x81 = 19579463066057LLU;
	int32_t x83 = -2249379;

	t20 = (x81&((x82%x83)==x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 5558U;
	static int8_t x86 = -1;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = 9U;

	t21 = (x85&((x86%x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	static int16_t x90 = INT16_MIN;
	static volatile int16_t x91 = -999;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 1;

	t22 = (x89&((x90%x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x93 = INT64_MAX;
	int16_t x95 = INT16_MIN;
	static int16_t x96 = -1;
	static int64_t t23 = -31LL;

	t23 = (x93&((x94%x95)==x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	static int8_t x98 = INT8_MIN;
	uint32_t t24 = 20U;

	t24 = (x97&((x98%x99)==x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MAX;
	volatile int64_t x104 = 1011812LL;
	volatile int32_t t25 = -8;

	t25 = (x101&((x102%x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	volatile int32_t x106 = 4862107;
	uint16_t x107 = 1867U;
	volatile int32_t t26 = -18968;

	t26 = (x105&((x106%x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 271009879LLU;
	volatile uint16_t x110 = UINT16_MAX;
	int8_t x111 = -1;
	int64_t x112 = INT64_MAX;
	volatile uint64_t t27 = 120623214793980LLU;

	t27 = (x109&((x110%x111)==x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	volatile int16_t x115 = -1;
	int32_t x116 = 1643;
	static volatile int32_t t28 = -13310;

	t28 = (x113&((x114%x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	int32_t x118 = -1;
	static volatile int16_t x120 = 11684;
	volatile int64_t t29 = -8115025586159LL;

	t29 = (x117&((x118%x119)==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 45;
	static int8_t x122 = INT8_MAX;
	int16_t x123 = INT16_MAX;
	int64_t x124 = -1LL;
	volatile int32_t t30 = 15879;

	t30 = (x121&((x122%x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	uint32_t x127 = UINT32_MAX;
	static int64_t t31 = 13707470386LL;

	t31 = (x125&((x126%x127)==x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 5884832018562LLU;
	int32_t x131 = INT32_MIN;
	static uint16_t x132 = 60U;
	volatile uint64_t t32 = 2LLU;

	t32 = (x129&((x130%x131)==x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -16167;
	volatile uint64_t x134 = 69204LLU;
	int8_t x135 = -1;
	int32_t x136 = 130601847;
	int32_t t33 = 24354;

	t33 = (x133&((x134%x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 29242744625LLU;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = UINT64_MAX;
	static int8_t x140 = INT8_MIN;

	t34 = (x137&((x138%x139)==x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	uint8_t x142 = 10U;

	t35 = (x141&((x142%x143)==x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MAX;
	int32_t x146 = INT32_MIN;
	static uint16_t x147 = UINT16_MAX;
	int32_t t36 = 11772;

	t36 = (x145&((x146%x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 1U;
	int8_t x150 = -1;
	static volatile int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MIN;
	int32_t t37 = -11234;

	t37 = (x149&((x150%x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	static uint8_t x155 = UINT8_MAX;
	int8_t x156 = INT8_MIN;
	int32_t t38 = 13592;

	t38 = (x153&((x154%x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = -1;
	volatile int32_t x159 = -2509055;
	int16_t x160 = -12;

	t39 = (x157&((x158%x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -270;
	volatile int32_t x162 = INT32_MAX;
	int64_t x163 = INT64_MIN;
	int32_t x164 = 0;

	t40 = (x161&((x162%x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 1;
	volatile uint16_t x167 = UINT16_MAX;
	int64_t x168 = 134121LL;
	int32_t t41 = 1927;

	t41 = (x165&((x166%x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = 105410;
	int64_t x170 = -230028LL;
	int64_t x171 = INT64_MIN;
	volatile int32_t x172 = INT32_MAX;
	volatile int32_t t42 = -1;

	t42 = (x169&((x170%x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int8_t x174 = 11;
	volatile int64_t x175 = INT64_MAX;
	uint64_t t43 = 15034LLU;

	t43 = (x173&((x174%x175)==x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MAX;
	uint16_t x179 = 115U;
	volatile int64_t t44 = 52153006640LL;

	t44 = (x177&((x178%x179)==x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	int8_t x182 = INT8_MAX;
	int32_t x183 = 1119180;
	uint32_t x184 = UINT32_MAX;

	t45 = (x181&((x182%x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 13U;
	volatile int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	volatile uint32_t x188 = 21033024U;
	volatile int32_t t46 = -98245;

	t46 = (x185&((x186%x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = -49217870;

	t47 = (x189&((x190%x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = 32129U;
	int16_t x194 = -1;
	volatile int32_t x196 = INT32_MIN;
	int32_t t48 = 0;

	t48 = (x193&((x194%x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x199 = 28U;
	uint32_t x200 = 95U;
	volatile int32_t t49 = -109;

	t49 = (x197&((x198%x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	int64_t x202 = INT64_MAX;
	uint16_t x203 = 14U;
	int32_t t50 = 4384;

	t50 = (x201&((x202%x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 44855769058646273LLU;
	int8_t x206 = -3;
	volatile int64_t x207 = INT64_MAX;
	int64_t x208 = 453374LL;
	static volatile uint64_t t51 = 14954978726LLU;

	t51 = (x205&((x206%x207)==x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	volatile uint16_t x210 = 376U;
	int64_t x211 = INT64_MAX;
	volatile int16_t x212 = INT16_MIN;
	int32_t t52 = -533918332;

	t52 = (x209&((x210%x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x214 = INT64_MIN;
	volatile int32_t x215 = INT32_MIN;
	static uint64_t t53 = 32LLU;

	t53 = (x213&((x214%x215)==x216));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = 5554U;
	int32_t x220 = -115;
	volatile int32_t t54 = 19109;

	t54 = (x217&((x218%x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x222 = -849LL;
	int16_t x223 = -22;
	volatile int64_t x224 = INT64_MAX;
	uint32_t t55 = 144U;

	t55 = (x221&((x222%x223)==x224));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MIN;
	int8_t x228 = -1;
	int32_t t56 = 19;

	t56 = (x225&((x226%x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 4045LLU;
	static int64_t x231 = INT64_MIN;
	int64_t x232 = 6LL;
	uint64_t t57 = 44597436703576392LLU;

	t57 = (x229&((x230%x231)==x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MIN;
	int8_t x234 = INT8_MAX;
	int64_t t58 = -1LL;

	t58 = (x233&((x234%x235)==x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = -207;
	volatile int32_t t59 = -10190444;

	t59 = (x237&((x238%x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 6U;
	static volatile uint64_t x242 = 96812004163LLU;
	uint16_t x243 = UINT16_MAX;

	t60 = (x241&((x242%x243)==x244));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 2U;
	int32_t x246 = 459172726;
	int8_t x247 = -2;
	int32_t t61 = -11978181;

	t61 = (x245&((x246%x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	uint8_t x250 = UINT8_MAX;
	int64_t x251 = -1186LL;
	static int64_t x252 = 3142733839039833462LL;
	volatile int32_t t62 = -1;

	t62 = (x249&((x250%x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	volatile int8_t x254 = INT8_MIN;
	static int16_t x255 = -1;
	static volatile int16_t x256 = INT16_MIN;

	t63 = (x253&((x254%x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = UINT8_MAX;
	int32_t x258 = 1;
	uint16_t x259 = UINT16_MAX;
	volatile int16_t x260 = 1236;
	volatile int32_t t64 = -1299;

	t64 = (x257&((x258%x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x262 = UINT16_MAX;
	volatile uint32_t x263 = 804U;
	int64_t x264 = -7578373994LL;
	volatile int32_t t65 = -20866922;

	t65 = (x261&((x262%x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = 490328369972LL;
	uint32_t x266 = 43393939U;
	uint8_t x267 = 1U;

	t66 = (x265&((x266%x267)==x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	static int16_t x270 = -3;
	int64_t x272 = 58LL;
	static volatile int32_t t67 = 6282866;

	t67 = (x269&((x270%x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = 3056019773490LL;
	uint64_t x275 = UINT64_MAX;
	int32_t x276 = INT32_MIN;
	volatile int64_t t68 = 1299818LL;

	t68 = (x273&((x274%x275)==x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	volatile uint64_t x278 = 229991402471608193LLU;
	int32_t x279 = -122771245;
	static int64_t x280 = -25LL;
	volatile uint32_t t69 = 8U;

	t69 = (x277&((x278%x279)==x280));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = 87;
	uint8_t x283 = UINT8_MAX;

	t70 = (x281&((x282%x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 28;
	int64_t x286 = INT64_MIN;
	int8_t x287 = -10;
	static int64_t x288 = 164806LL;
	volatile int32_t t71 = 1;

	t71 = (x285&((x286%x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 7331195U;
	volatile uint32_t t72 = 7523U;

	t72 = (x289&((x290%x291)==x292));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	static int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	int64_t x296 = 2575LL;
	uint64_t t73 = 3LLU;

	t73 = (x293&((x294%x295)==x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	volatile int64_t x298 = INT64_MIN;
	int32_t x299 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	static int32_t t74 = 1;

	t74 = (x297&((x298%x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MAX;
	static volatile int64_t x303 = INT64_MIN;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 517366536;

	t75 = (x301&((x302%x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = INT8_MIN;
	int32_t x307 = 104824909;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 348778003;

	t76 = (x305&((x306%x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	int8_t x312 = INT8_MAX;
	int64_t t77 = -94663471066043166LL;

	t77 = (x309&((x310%x311)==x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 0U;
	uint16_t x314 = 6835U;
	int8_t x315 = 1;
	volatile uint32_t x316 = 26299U;
	static int32_t t78 = -5647;

	t78 = (x313&((x314%x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 12619536292119LLU;
	int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	static int8_t x320 = -1;
	volatile uint64_t t79 = 3377314040518711LLU;

	t79 = (x317&((x318%x319)==x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x325 = INT16_MAX;
	volatile uint8_t x326 = 0U;
	volatile uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t80 = 696013;

	t80 = (x325&((x326%x327)==x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x329 = UINT16_MAX;
	uint64_t x330 = UINT64_MAX;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t81 = 11;

	t81 = (x329&((x330%x331)==x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x335 = 33113247;
	volatile int8_t x336 = -5;
	uint64_t t82 = 379623345369426LLU;

	t82 = (x333&((x334%x335)==x336));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x337 = 1192687055U;
	int16_t x338 = 0;
	volatile uint64_t x340 = 3956403180LLU;
	volatile uint32_t t83 = 12U;

	t83 = (x337&((x338%x339)==x340));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x342 = INT8_MIN;
	volatile uint16_t x343 = 883U;
	volatile uint32_t t84 = 402567U;

	t84 = (x341&((x342%x343)==x344));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MAX;
	int32_t x346 = INT32_MIN;
	volatile int8_t x347 = INT8_MIN;
	int16_t x348 = -1;
	int32_t t85 = 10;

	t85 = (x345&((x346%x347)==x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = 197LL;
	uint32_t x354 = UINT32_MAX;
	volatile int16_t x355 = -1;
	volatile int32_t x356 = INT32_MIN;
	int64_t t86 = -61879415LL;

	t86 = (x353&((x354%x355)==x356));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = -4162;
	volatile uint64_t x359 = 7231357LLU;
	int16_t x360 = -50;
	volatile int64_t t87 = -5133651549LL;

	t87 = (x357&((x358%x359)==x360));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	int32_t x363 = -1;
	volatile int32_t t88 = -6009;

	t88 = (x361&((x362%x363)==x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 131252296183270LLU;
	int8_t x366 = 1;
	static uint32_t x368 = 23888U;
	static uint64_t t89 = 1485361705LLU;

	t89 = (x365&((x366%x367)==x368));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	static int8_t x370 = -1;
	int64_t x371 = INT64_MAX;
	static int8_t x372 = -37;
	int32_t t90 = 0;

	t90 = (x369&((x370%x371)==x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x374 = INT8_MAX;
	int8_t x375 = -1;
	volatile int32_t t91 = 1053309215;

	t91 = (x373&((x374%x375)==x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = 382147260;
	int32_t x379 = INT32_MAX;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t92 = -1;

	t92 = (x377&((x378%x379)==x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = -700;
	static int16_t x382 = 7;
	int64_t x383 = 110820044685189651LL;
	static int64_t x384 = 3743886033LL;
	static volatile int32_t t93 = -125508;

	t93 = (x381&((x382%x383)==x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x385 = INT64_MIN;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = -97318025;
	int8_t x388 = -1;
	static int64_t t94 = -50448095652354952LL;

	t94 = (x385&((x386%x387)==x388));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = 2935313;
	int64_t x390 = 245668LL;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t95 = 1022039;

	t95 = (x389&((x390%x391)==x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = -4;
	uint64_t x394 = 361875808059378LLU;
	int64_t x395 = INT64_MAX;
	static int32_t x396 = INT32_MIN;
	static volatile int32_t t96 = 74;

	t96 = (x393&((x394%x395)==x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x397 = 26708559LLU;
	static uint64_t x398 = 50LLU;
	int32_t x399 = -1;
	uint32_t x400 = UINT32_MAX;

	t97 = (x397&((x398%x399)==x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x401 = -7;
	static volatile int8_t x402 = INT8_MAX;
	static uint16_t x403 = 7U;
	static int32_t t98 = -60406194;

	t98 = (x401&((x402%x403)==x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = 312275;
	volatile int64_t x406 = 711006913214LL;
	int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MIN;
	int32_t t99 = 3510;

	t99 = (x405&((x406%x407)==x408));

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

