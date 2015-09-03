#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MAX;
int16_t x5 = INT16_MIN;
int8_t x7 = INT8_MIN;
uint16_t x9 = 12U;
int16_t x10 = -1;
int64_t x26 = 9421LL;
int16_t x27 = 1512;
int16_t x29 = INT16_MIN;
volatile int32_t x32 = INT32_MAX;
uint32_t t6 = 2045934341U;
uint64_t x46 = 24709302045524LLU;
volatile int64_t x50 = INT64_MAX;
int8_t x51 = INT8_MIN;
static uint64_t x52 = UINT64_MAX;
uint64_t t10 = 1726646665608633LLU;
static int32_t x61 = INT32_MIN;
static volatile int32_t x63 = 472315;
volatile uint64_t x67 = UINT64_MAX;
static uint8_t x72 = UINT8_MAX;
volatile int32_t x73 = INT32_MIN;
volatile uint64_t x96 = UINT64_MAX;
volatile uint64_t t20 = 252625360419271958LLU;
int8_t x101 = -1;
int64_t t22 = -53663030507542611LL;
volatile uint32_t x109 = 118878950U;
uint16_t x117 = 10U;
volatile int32_t t25 = 20667776;
static int16_t x127 = INT16_MIN;
uint16_t x132 = 234U;
int16_t x133 = INT16_MIN;
int8_t x136 = -1;
uint64_t x137 = 8747612550505298LLU;
int8_t x140 = -5;
int32_t x184 = -1;
int32_t x190 = INT32_MAX;
volatile int64_t x192 = -1LL;
int16_t x194 = INT16_MAX;
uint32_t t41 = 3285U;
volatile int64_t x200 = -1LL;
uint16_t x202 = UINT16_MAX;
int64_t x214 = 165LL;
volatile int64_t t46 = 11249457581108845LL;
uint8_t x223 = 2U;
int16_t x224 = INT16_MIN;
uint8_t x231 = 56U;
static int32_t x234 = 2;
int16_t x244 = INT16_MAX;
static volatile int64_t t51 = -6234524636532080LL;
int8_t x263 = INT8_MAX;
static volatile int8_t x273 = 28;
int32_t t57 = -1;
volatile uint8_t x285 = UINT8_MAX;
int32_t t60 = 43325123;
int32_t x303 = 23525;
int8_t x304 = INT8_MAX;
uint32_t x309 = UINT32_MAX;
static int32_t x310 = INT32_MAX;
volatile int8_t x312 = INT8_MIN;
int8_t x318 = INT8_MIN;
int32_t x320 = -1;
volatile int16_t x324 = INT16_MIN;
volatile int64_t x327 = -1LL;
uint64_t t69 = 562842108739643490LLU;
static int64_t x331 = -1LL;
volatile int8_t x340 = -1;
int64_t t73 = 3983437666LL;
uint32_t x356 = 69245U;
volatile int8_t x361 = INT8_MIN;
int16_t x364 = 45;
int32_t x367 = -1;
static int8_t x371 = INT8_MIN;
static int32_t x372 = -1;
uint64_t t81 = 75LLU;
static volatile int64_t t84 = 1783482219651101240LL;
int8_t x393 = -1;
uint8_t x399 = 7U;
static int64_t x400 = 220391764686LL;
static int64_t t86 = -58638014257311LL;
int64_t x403 = INT64_MIN;
static int64_t x407 = INT64_MAX;
int16_t x408 = INT16_MIN;
int64_t t88 = -314LL;
int8_t x412 = INT8_MIN;
int64_t x415 = -1LL;
volatile int32_t x422 = 2307866;
uint64_t x427 = 1850654772116261LLU;
int32_t t96 = -143358137;
static volatile int32_t t97 = 252580;
static volatile uint64_t t98 = 662917731217282LLU;
uint16_t x465 = UINT16_MAX;


void f0(void) {
	int8_t x1 = -38;
	volatile int8_t x2 = 1;
	uint8_t x4 = 82U;
	volatile int32_t t0 = -12775;

	t0 = ((x1%x2)/(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = 1;
	static uint16_t x8 = 2751U;
	int32_t t1 = 953003;

	t1 = ((x5%x6)/(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = INT16_MAX;
	int64_t x12 = 2179106215187084LL;
	int64_t t2 = -366597304616062LL;

	t2 = ((x9%x10)/(x11+x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = -236;
	static int32_t x18 = 3177;
	int32_t x19 = -1;
	uint64_t x20 = 22428479551LLU;
	volatile uint64_t t3 = 2853029LLU;

	t3 = ((x17%x18)/(x19+x20));

	if (t3 != 822469665LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = -1LL;
	static int64_t x28 = -14894365723516138LL;
	volatile int64_t t4 = 1LL;

	t4 = ((x25%x26)/(x27+x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x30 = 120;
	static int16_t x31 = INT16_MIN;
	int32_t t5 = 2;

	t5 = ((x29%x30)/(x31+x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = INT8_MIN;
	volatile uint16_t x35 = UINT16_MAX;
	static uint32_t x36 = 12816U;

	t6 = ((x33%x34)/(x35+x36));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	volatile int16_t x38 = 1;
	int8_t x39 = INT8_MIN;
	static uint32_t x40 = 6573U;
	uint32_t t7 = 7839U;

	t7 = ((x37%x38)/(x39+x40));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = 1;
	uint64_t x42 = UINT64_MAX;
	volatile uint64_t x43 = UINT64_MAX;
	uint8_t x44 = 2U;
	volatile uint64_t t8 = 2106577207398527725LLU;

	t8 = ((x41%x42)/(x43+x44));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -3345;
	static uint16_t x47 = 58U;
	uint16_t x48 = UINT16_MAX;
	static uint64_t t9 = 170427410600815188LLU;

	t9 = ((x45%x46)/(x47+x48));

	if (t9 != 223066845LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = 967138150LL;

	t10 = ((x49%x50)/(x51+x52));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MAX;
	static volatile int16_t x55 = INT16_MIN;
	uint8_t x56 = 0U;
	volatile int64_t t11 = -21262477507654LL;

	t11 = ((x53%x54)/(x55+x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x62 = 22137LLU;
	uint32_t x64 = 2U;
	uint64_t t12 = 249665206486338LLU;

	t12 = ((x61%x62)/(x63+x64));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	int32_t x66 = 12183759;
	uint8_t x68 = 90U;
	uint64_t t13 = 681332391LLU;

	t13 = ((x65%x66)/(x67+x68));

	if (t13 != 207266787345051140LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 74U;
	int32_t x70 = INT32_MAX;
	int8_t x71 = INT8_MAX;
	volatile uint32_t t14 = 15637526U;

	t14 = ((x69%x70)/(x71+x72));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = -1837584362LL;
	int32_t x75 = INT32_MAX;
	int32_t x76 = INT32_MIN;
	int64_t t15 = 34174840019LL;

	t15 = ((x73%x74)/(x75+x76));

	if (t15 != 309899286LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = UINT8_MAX;
	uint16_t x78 = 74U;
	int32_t x79 = -1;
	static volatile int16_t x80 = INT16_MAX;
	static int32_t t16 = 1624;

	t16 = ((x77%x78)/(x79+x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = INT32_MIN;
	static int64_t x82 = INT64_MAX;
	volatile uint64_t x83 = 47902883493446167LLU;
	int8_t x84 = INT8_MAX;
	uint64_t t17 = 729LLU;

	t17 = ((x81%x82)/(x83+x84));

	if (t17 != 385LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x85 = -44;
	int64_t x86 = 19092636758025771LL;
	int64_t x87 = -2LL;
	volatile uint32_t x88 = UINT32_MAX;
	volatile int64_t t18 = -3902093827LL;

	t18 = ((x85%x86)/(x87+x88));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 1;
	uint16_t x90 = 12U;
	uint32_t x91 = 0U;
	int8_t x92 = -12;
	static uint32_t t19 = 14601U;

	t19 = ((x89%x90)/(x91+x92));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 7984U;
	int32_t x94 = INT32_MAX;
	volatile int16_t x95 = 181;

	t20 = ((x93%x94)/(x95+x96));

	if (t20 != 44LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x102 = INT32_MIN;
	static uint64_t x103 = 442614630LLU;
	volatile int64_t x104 = -1012040173607438LL;
	static uint64_t t21 = 3542753310815LLU;

	t21 = ((x101%x102)/(x103+x104));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = UINT16_MAX;
	int16_t x106 = 664;
	volatile int8_t x107 = INT8_MAX;
	int64_t x108 = -1LL;

	t22 = ((x105%x106)/(x107+x108));

	if (t22 != 3LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x110 = UINT32_MAX;
	static int16_t x111 = INT16_MIN;
	uint32_t x112 = UINT32_MAX;
	uint32_t t23 = 2833756U;

	t23 = ((x109%x110)/(x111+x112));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x113 = 4081644271486LL;
	static int16_t x114 = -5361;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = 72638138473202321LLU;
	volatile uint64_t t24 = 42802LLU;

	t24 = ((x113%x114)/(x115+x116));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x118 = INT16_MIN;
	int32_t x119 = 5289;
	int8_t x120 = INT8_MIN;

	t25 = ((x117%x118)/(x119+x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MAX;
	int16_t x128 = -1;
	uint64_t t26 = 1128409230335001702LLU;

	t26 = ((x125%x126)/(x127+x128));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x129 = 26342311302LLU;
	static int16_t x130 = -1;
	int16_t x131 = INT16_MIN;
	static uint64_t t27 = 68584561894374LLU;

	t27 = ((x129%x130)/(x131+x132));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x134 = -2753;
	int64_t x135 = -138305LL;
	static volatile int64_t t28 = -1LL;

	t28 = ((x133%x134)/(x135+x136));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x138 = UINT8_MAX;
	static volatile int16_t x139 = INT16_MIN;
	static volatile uint64_t t29 = 161LLU;

	t29 = ((x137%x138)/(x139+x140));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 32588U;
	int8_t x142 = 1;
	volatile int32_t x143 = INT32_MIN;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t30 = 7013676424306LLU;

	t30 = ((x141%x142)/(x143+x144));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = 512U;
	volatile int8_t x146 = INT8_MIN;
	uint16_t x147 = 224U;
	int32_t x148 = -1;
	volatile int32_t t31 = -48930;

	t31 = ((x145%x146)/(x147+x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MAX;
	static int16_t x150 = INT16_MAX;
	int64_t x151 = -1817960036905846277LL;
	volatile int8_t x152 = INT8_MIN;
	int64_t t32 = 107311386346LL;

	t32 = ((x149%x150)/(x151+x152));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MAX;
	volatile int32_t x154 = -228186092;
	volatile int8_t x155 = -1;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t33 = -1922;

	t33 = ((x153%x154)/(x155+x156));

	if (t33 != -254) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = -3307282690903983976LL;
	int64_t x158 = INT64_MIN;
	static int32_t x159 = 402904988;
	static int16_t x160 = -1;
	static int64_t t34 = -105891891LL;

	t34 = ((x157%x158)/(x159+x160));

	if (t34 != -8208592093LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x169 = UINT32_MAX;
	int32_t x170 = INT32_MIN;
	uint8_t x171 = 69U;
	int8_t x172 = 30;
	uint32_t t35 = 1U;

	t35 = ((x169%x170)/(x171+x172));

	if (t35 != 21691754U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x173 = UINT64_MAX;
	volatile int64_t x174 = 127681LL;
	int16_t x175 = INT16_MIN;
	uint16_t x176 = 1783U;
	uint64_t t36 = 4248275724440LLU;

	t36 = ((x173%x174)/(x175+x176));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = -56;
	int16_t x178 = 3;
	int64_t x179 = INT64_MAX;
	static int64_t x180 = INT64_MIN;
	int64_t t37 = -3763449624LL;

	t37 = ((x177%x178)/(x179+x180));

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -1;
	uint8_t x182 = UINT8_MAX;
	uint8_t x183 = 3U;
	volatile int32_t t38 = 999090;

	t38 = ((x181%x182)/(x183+x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = -1;
	static int16_t x186 = INT16_MIN;
	int8_t x187 = INT8_MIN;
	static uint32_t x188 = 1958162U;
	volatile uint32_t t39 = 30388U;

	t39 = ((x185%x186)/(x187+x188));

	if (t39 != 2193U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = UINT32_MAX;
	int8_t x191 = -14;
	volatile int64_t t40 = -62892LL;

	t40 = ((x189%x190)/(x191+x192));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = INT32_MAX;
	uint32_t x195 = 237U;
	int16_t x196 = INT16_MIN;

	t41 = ((x193%x194)/(x195+x196));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x197 = 2U;
	volatile int16_t x198 = INT16_MIN;
	volatile int8_t x199 = 0;
	int64_t t42 = -2844657LL;

	t42 = ((x197%x198)/(x199+x200));

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x201 = UINT8_MAX;
	uint64_t x203 = 476108774934LLU;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t43 = 372589439LLU;

	t43 = ((x201%x202)/(x203+x204));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x209 = INT16_MIN;
	static int8_t x210 = -1;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = 4U;
	volatile int32_t t44 = -6742;

	t44 = ((x209%x210)/(x211+x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x213 = INT8_MIN;
	int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MIN;
	volatile int64_t t45 = 399LL;

	t45 = ((x213%x214)/(x215+x216));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x217 = 9833U;
	volatile int64_t x218 = -8226886781648LL;
	int16_t x219 = 912;
	int32_t x220 = INT32_MIN;

	t46 = ((x217%x218)/(x219+x220));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = 1841340LL;
	volatile int64_t t47 = -1415679816148LL;

	t47 = ((x221%x222)/(x223+x224));

	if (t47 != 14LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x225 = 8572892U;
	int32_t x226 = INT32_MAX;
	static volatile int16_t x227 = -1;
	volatile int64_t x228 = -1LL;
	int64_t t48 = 877335434572179LL;

	t48 = ((x225%x226)/(x227+x228));

	if (t48 != -4286446LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x229 = UINT64_MAX;
	static volatile int8_t x230 = INT8_MIN;
	static volatile int8_t x232 = -1;
	uint64_t t49 = 185962407394189LLU;

	t49 = ((x229%x230)/(x231+x232));

	if (t49 != 2LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x233 = INT16_MAX;
	uint16_t x235 = UINT16_MAX;
	uint16_t x236 = 510U;
	volatile int32_t t50 = 10;

	t50 = ((x233%x234)/(x235+x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = -6;
	int64_t x242 = 172619309342LL;
	int32_t x243 = 11729;

	t51 = ((x241%x242)/(x243+x244));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = -1;
	uint32_t x255 = 46U;
	volatile int32_t x256 = INT32_MAX;
	volatile int64_t t52 = -67226LL;

	t52 = ((x253%x254)/(x255+x256));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = 7;
	volatile uint64_t x258 = UINT64_MAX;
	int16_t x259 = 3160;
	int32_t x260 = -1634241;
	uint64_t t53 = 28822876706984LLU;

	t53 = ((x257%x258)/(x259+x260));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = -51;
	uint8_t x264 = UINT8_MAX;
	volatile int64_t t54 = -3566471262856LL;

	t54 = ((x261%x262)/(x263+x264));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x265 = 68U;
	uint8_t x266 = UINT8_MAX;
	uint32_t x267 = UINT32_MAX;
	volatile uint32_t x268 = UINT32_MAX;
	volatile uint32_t t55 = 5030U;

	t55 = ((x265%x266)/(x267+x268));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	int8_t x271 = -1;
	volatile uint8_t x272 = 8U;
	volatile uint32_t t56 = 11U;

	t56 = ((x269%x270)/(x271+x272));

	if (t56 != 306783378U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x274 = 18098U;
	uint8_t x275 = 31U;
	int8_t x276 = -1;

	t57 = ((x273%x274)/(x275+x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = 19;
	uint16_t x278 = 32480U;
	int64_t x279 = -706167581729082LL;
	int64_t x280 = INT64_MAX;
	int64_t t58 = -5540959778512LL;

	t58 = ((x277%x278)/(x279+x280));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = -5;
	int8_t x282 = INT8_MAX;
	int32_t x283 = INT32_MAX;
	static volatile int32_t x284 = -1;
	static volatile int32_t t59 = -204557;

	t59 = ((x281%x282)/(x283+x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x286 = INT16_MIN;
	int32_t x287 = -28330;
	static int16_t x288 = INT16_MAX;

	t60 = ((x285%x286)/(x287+x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x289 = -1;
	static uint8_t x290 = UINT8_MAX;
	static uint32_t x291 = 126U;
	static volatile uint16_t x292 = 131U;
	uint32_t t61 = 253589U;

	t61 = ((x289%x290)/(x291+x292));

	if (t61 != 16711935U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x293 = UINT32_MAX;
	uint8_t x294 = 26U;
	int16_t x295 = INT16_MAX;
	static uint8_t x296 = 14U;
	uint32_t t62 = 41U;

	t62 = ((x293%x294)/(x295+x296));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = 1;
	int64_t x298 = INT64_MIN;
	int16_t x299 = -1316;
	static int16_t x300 = INT16_MIN;
	volatile int64_t t63 = -972387380464LL;

	t63 = ((x297%x298)/(x299+x300));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = 765098LL;
	int32_t x302 = -589503;
	int64_t t64 = -690118636475LL;

	t64 = ((x301%x302)/(x303+x304));

	if (t64 != 7LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x311 = UINT64_MAX;
	uint64_t t65 = 59298763511329LLU;

	t65 = ((x309%x310)/(x311+x312));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x313 = INT32_MAX;
	uint16_t x314 = 12729U;
	volatile int32_t x315 = INT32_MIN;
	static uint32_t x316 = 380U;
	uint32_t t66 = 142169U;

	t66 = ((x313%x314)/(x315+x316));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x317 = 4U;
	int16_t x319 = INT16_MAX;
	int32_t t67 = -10744;

	t67 = ((x317%x318)/(x319+x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x321 = INT64_MAX;
	uint32_t x322 = UINT32_MAX;
	volatile int8_t x323 = 5;
	int64_t t68 = -1087LL;

	t68 = ((x321%x322)/(x323+x324));

	if (t68 != -65546LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = 2577679LL;
	volatile int32_t x326 = INT32_MIN;
	static uint64_t x328 = 3742504LLU;

	t69 = ((x325%x326)/(x327+x328));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x329 = 1397U;
	uint16_t x330 = 474U;
	uint32_t x332 = 330388103U;
	volatile int64_t t70 = -48249159101LL;

	t70 = ((x329%x330)/(x331+x332));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x333 = INT16_MAX;
	uint64_t x334 = 81496389LLU;
	uint16_t x335 = UINT16_MAX;
	volatile int64_t x336 = INT64_MIN;
	uint64_t t71 = 3LLU;

	t71 = ((x333%x334)/(x335+x336));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MAX;
	uint16_t x339 = UINT16_MAX;
	static int64_t t72 = -443427000LL;

	t72 = ((x337%x338)/(x339+x340));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x341 = INT64_MAX;
	static int8_t x342 = INT8_MAX;
	static int32_t x343 = -1;
	int8_t x344 = INT8_MIN;

	t73 = ((x341%x342)/(x343+x344));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x345 = 5U;
	int16_t x346 = INT16_MIN;
	uint16_t x347 = 7U;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t74 = -142;

	t74 = ((x345%x346)/(x347+x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x349 = INT16_MIN;
	volatile int16_t x350 = -1;
	static uint64_t x351 = 6089328948102029051LLU;
	int64_t x352 = -1LL;
	volatile uint64_t t75 = 445LLU;

	t75 = ((x349%x350)/(x351+x352));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x353 = INT16_MIN;
	static int8_t x354 = INT8_MIN;
	static volatile int8_t x355 = INT8_MIN;
	volatile uint32_t t76 = 12569U;

	t76 = ((x353%x354)/(x355+x356));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x357 = -1;
	static volatile int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MAX;
	uint64_t x360 = 244345269924LLU;
	volatile uint64_t t77 = 4LLU;

	t77 = ((x357%x358)/(x359+x360));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x362 = -7466615371195378LL;
	uint64_t x363 = 29815678241957LLU;
	uint64_t t78 = 58802314LLU;

	t78 = ((x361%x362)/(x363+x364));

	if (t78 != 618692LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = 80;
	volatile int8_t x366 = INT8_MIN;
	static int16_t x368 = -1;
	int32_t t79 = -10346918;

	t79 = ((x365%x366)/(x367+x368));

	if (t79 != -40) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x369 = INT32_MIN;
	static int64_t x370 = INT64_MIN;
	int64_t t80 = -53118283388794LL;

	t80 = ((x369%x370)/(x371+x372));

	if (t80 != 16647160LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x373 = 0U;
	volatile uint64_t x374 = 7LLU;
	volatile int16_t x375 = 13986;
	int64_t x376 = -1LL;

	t81 = ((x373%x374)/(x375+x376));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = INT64_MIN;
	volatile int16_t x382 = INT16_MIN;
	uint32_t x383 = 16185U;
	static int32_t x384 = -1;
	int64_t t82 = -579941LL;

	t82 = ((x381%x382)/(x383+x384));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x385 = 2U;
	int32_t x386 = INT32_MIN;
	uint32_t x387 = 103U;
	uint16_t x388 = UINT16_MAX;
	static uint32_t t83 = 55247U;

	t83 = ((x385%x386)/(x387+x388));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = -1LL;
	volatile uint16_t x390 = 1U;
	int8_t x391 = INT8_MIN;
	uint32_t x392 = UINT32_MAX;

	t84 = ((x389%x390)/(x391+x392));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x394 = 447739U;
	uint8_t x395 = 0U;
	static int32_t x396 = -7559;
	uint32_t t85 = 43205604U;

	t85 = ((x393%x394)/(x395+x396));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x397 = INT32_MAX;
	static int8_t x398 = -1;

	t86 = ((x397%x398)/(x399+x400));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x401 = INT32_MIN;
	static int32_t x402 = INT32_MIN;
	uint16_t x404 = 5375U;
	volatile int64_t t87 = -5972825978LL;

	t87 = ((x401%x402)/(x403+x404));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = INT16_MIN;
	int64_t x406 = -1LL;

	t88 = ((x405%x406)/(x407+x408));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = -1;
	int32_t x410 = 1038;
	uint16_t x411 = UINT16_MAX;
	volatile int32_t t89 = -1757875;

	t89 = ((x409%x410)/(x411+x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x413 = INT32_MAX;
	volatile int64_t x414 = INT64_MAX;
	int32_t x416 = INT32_MIN;
	volatile int64_t t90 = -73825198070LL;

	t90 = ((x413%x414)/(x415+x416));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x421 = INT32_MIN;
	volatile uint8_t x423 = UINT8_MAX;
	int64_t x424 = -1LL;
	static int64_t t91 = -162687557010668033LL;

	t91 = ((x421%x422)/(x423+x424));

	if (t91 != -4599LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x425 = INT16_MIN;
	static int16_t x426 = -6;
	int8_t x428 = 0;
	volatile uint64_t t92 = 24LLU;

	t92 = ((x425%x426)/(x427+x428));

	if (t92 != 9967LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x437 = 1U;
	uint32_t x438 = 6456U;
	int16_t x439 = INT16_MIN;
	int8_t x440 = -1;
	uint32_t t93 = 14109485U;

	t93 = ((x437%x438)/(x439+x440));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x441 = -350248696LL;
	int8_t x442 = -1;
	uint16_t x443 = 85U;
	int64_t x444 = INT64_MIN;
	volatile int64_t t94 = -1112065982252975225LL;

	t94 = ((x441%x442)/(x443+x444));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x445 = -11;
	uint32_t x446 = 122339459U;
	int16_t x447 = -17;
	int32_t x448 = -1;
	uint32_t t95 = 2123U;

	t95 = ((x445%x446)/(x447+x448));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = 739602757;
	static int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MIN;
	int16_t x452 = INT16_MAX;

	t96 = ((x449%x450)/(x451+x452));

	if (t96 != -28997) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x453 = -15778;
	int8_t x454 = -11;
	static volatile int32_t x455 = -1;
	static int32_t x456 = INT32_MAX;

	t97 = ((x453%x454)/(x455+x456));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x461 = -1;
	static volatile int8_t x462 = -1;
	static uint64_t x463 = UINT64_MAX;
	int16_t x464 = INT16_MIN;

	t98 = ((x461%x462)/(x463+x464));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x466 = 360416U;
	int16_t x467 = -1;
	volatile uint64_t x468 = 30685LLU;
	uint64_t t99 = 1943LLU;

	t99 = ((x465%x466)/(x467+x468));

	if (t99 != 2LLU) { NG(); } else { ; }
	
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

