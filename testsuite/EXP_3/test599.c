#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 4012859U;
uint16_t x8 = 586U;
static volatile int32_t t2 = 103282191;
static int32_t x17 = 415239881;
volatile int32_t x18 = INT32_MAX;
volatile int8_t x20 = 5;
int16_t x21 = INT16_MAX;
static volatile int32_t x40 = 1;
int8_t x41 = 1;
int8_t x45 = -1;
volatile int32_t t11 = 304330373;
volatile int64_t t12 = -32717697LL;
uint64_t x54 = UINT64_MAX;
volatile int32_t t15 = 17229683;
volatile uint16_t x66 = 12U;
int32_t x68 = INT32_MIN;
int16_t x70 = INT16_MIN;
volatile uint64_t x72 = 20952432LLU;
uint8_t x84 = 22U;
volatile int32_t t21 = 1;
uint32_t x94 = UINT32_MAX;
int16_t x95 = INT16_MIN;
int64_t x102 = INT64_MIN;
static int8_t x105 = -1;
static int16_t x106 = -1;
int8_t x107 = -18;
int64_t x111 = INT64_MIN;
int64_t x119 = INT64_MAX;
static volatile int64_t t29 = 110224519LL;
static int64_t x123 = INT64_MIN;
int8_t x136 = -1;
uint8_t x138 = 7U;
volatile int16_t x146 = INT16_MAX;
int16_t x148 = INT16_MAX;
uint8_t x150 = UINT8_MAX;
int16_t x156 = -1;
int16_t x169 = 15578;
volatile uint64_t t42 = 2029848LLU;
int8_t x176 = -42;
static int32_t t43 = 35535;
int32_t x180 = -385516120;
static int64_t t45 = -32914755LL;
int16_t x185 = 0;
int64_t x187 = INT64_MIN;
int64_t t46 = 2541521218034034LL;
int64_t x189 = 14124338733LL;
int8_t x190 = INT8_MIN;
int8_t x191 = INT8_MAX;
uint32_t x193 = 116449247U;
uint8_t x207 = UINT8_MAX;
static int8_t x209 = -4;
volatile int16_t x210 = -1;
uint64_t x219 = 519975LLU;
int32_t x226 = -184;
int64_t x241 = INT64_MIN;
uint16_t x243 = UINT16_MAX;
static volatile int64_t t61 = 14153615LL;
volatile int64_t t65 = 13800916114003LL;
uint8_t x272 = 2U;
int8_t x273 = -1;
static int8_t x274 = INT8_MIN;
uint64_t x275 = 70773LLU;
static uint64_t t67 = 945855004405425LLU;
uint32_t x285 = UINT32_MAX;
int16_t x290 = -13304;
int16_t x292 = 14;
int64_t x295 = 8407LL;
volatile int64_t t72 = 417LL;
int8_t x297 = 20;
static uint32_t x300 = UINT32_MAX;
int64_t x302 = -1LL;
volatile uint64_t t76 = 55474LLU;
int16_t x313 = -1584;
uint32_t x314 = 358575U;
volatile uint16_t x318 = 305U;
volatile int64_t t78 = -2869456451008285LL;
int8_t x324 = INT8_MIN;
int8_t x328 = INT8_MIN;
static int8_t x331 = -1;
int8_t x335 = 6;
int32_t x337 = -1;
uint32_t x338 = UINT32_MAX;
static int32_t x347 = -1;
volatile int32_t t85 = -54;
volatile int32_t t86 = -350;
int8_t x357 = INT8_MAX;
int64_t x361 = INT64_MIN;
static uint16_t x364 = 2U;
volatile int16_t x368 = INT16_MIN;
int64_t t90 = 33724662221LL;
int32_t x369 = -29311305;
volatile int64_t t91 = INT64_MAX;
volatile int32_t t92 = 48154;
uint8_t x377 = 1U;
uint64_t x378 = UINT64_MAX;
static volatile int32_t x380 = -9596;
static int64_t t94 = 531555LL;
static volatile uint64_t x390 = UINT64_MAX;
static int32_t t96 = -1;
int64_t x394 = INT64_MIN;
int8_t x396 = INT8_MIN;
uint32_t x400 = 2495U;
static int16_t x401 = INT16_MIN;
uint64_t x404 = 211560396251128881LLU;


void f0(void) {
	volatile uint16_t x1 = 1U;
	volatile int16_t x3 = INT16_MIN;
	static volatile int16_t x4 = 95;
	volatile int32_t t0 = -73754638;

	t0 = ((x1==x2)+(x3/x4));

	if (t0 != -344) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int64_t x6 = -1LL;
	uint16_t x7 = 7U;
	volatile int32_t t1 = -108999110;

	t1 = ((x5==x6)+(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1;
	static int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;

	t2 = ((x9==x10)+(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	int16_t x14 = -1;
	volatile uint8_t x15 = UINT8_MAX;
	int32_t x16 = -1;
	static int32_t t3 = 153456;

	t3 = ((x13==x14)+(x15/x16));

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x19 = INT8_MIN;
	static volatile int32_t t4 = -1479;

	t4 = ((x17==x18)+(x19/x20));

	if (t4 != -25) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x22 = INT32_MAX;
	uint64_t x23 = 311LLU;
	static int8_t x24 = -1;
	volatile uint64_t t5 = 63706764LLU;

	t5 = ((x21==x22)+(x23/x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	int8_t x26 = -1;
	static int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MAX;
	int64_t t6 = 15609280284656164LL;

	t6 = ((x25==x26)+(x27/x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 118065U;
	int8_t x30 = -1;
	int32_t x31 = 1;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 20241738;

	t7 = ((x29==x30)+(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 470153;
	int16_t x34 = INT16_MIN;
	int8_t x35 = 7;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -150115558;

	t8 = ((x33==x34)+(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -1;
	int32_t x38 = INT32_MAX;
	int8_t x39 = -1;
	int32_t t9 = -65;

	t9 = ((x37==x38)+(x39/x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 22938U;
	int16_t x43 = INT16_MIN;
	static uint16_t x44 = 14U;
	volatile int32_t t10 = 69227;

	t10 = ((x41==x42)+(x43/x44));

	if (t10 != -2340) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MAX;
	int16_t x47 = -1;
	int32_t x48 = -914;

	t11 = ((x45==x46)+(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static volatile uint64_t x50 = UINT64_MAX;
	uint32_t x51 = 1110479659U;
	int64_t x52 = -8166313173872LL;

	t12 = ((x49==x50)+(x51/x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 488087U;
	uint64_t x55 = 2381524LLU;
	int16_t x56 = INT16_MIN;
	static uint64_t t13 = 12177151503LLU;

	t13 = ((x53==x54)+(x55/x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 0;
	int8_t x58 = 8;
	int32_t x59 = INT32_MIN;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 11180138LLU;

	t14 = ((x57==x58)+(x59/x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	static int8_t x62 = INT8_MAX;
	volatile uint16_t x63 = 16U;
	int8_t x64 = 53;

	t15 = ((x61==x62)+(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 1416U;
	static uint64_t x67 = 354686489327LLU;
	static volatile uint64_t t16 = 1LLU;

	t16 = ((x65==x66)+(x67/x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	static volatile uint8_t x71 = UINT8_MAX;
	volatile uint64_t t17 = 39191572407LLU;

	t17 = ((x69==x70)+(x71/x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 25U;
	int32_t x74 = 1752027;
	int16_t x75 = -1;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 26057548;

	t18 = ((x73==x74)+(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 3782780U;
	int16_t x78 = 277;
	volatile uint16_t x79 = 575U;
	volatile uint32_t x80 = 112U;
	volatile uint32_t t19 = 103370U;

	t19 = ((x77==x78)+(x79/x80));

	if (t19 != 5U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint32_t x82 = 326839578U;
	volatile int16_t x83 = -2828;
	volatile int32_t t20 = 2;

	t20 = ((x81==x82)+(x83/x84));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	static int8_t x86 = -62;
	int16_t x87 = -1;
	int16_t x88 = 2;

	t21 = ((x85==x86)+(x87/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -1LL;
	int8_t x90 = INT8_MIN;
	int64_t x91 = -1LL;
	static int16_t x92 = -11414;
	static volatile int64_t t22 = 2LL;

	t22 = ((x89==x90)+(x91/x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int32_t x96 = -2319;
	int32_t t23 = -14444658;

	t23 = ((x93==x94)+(x95/x96));

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -35;
	uint16_t x98 = UINT16_MAX;
	static volatile int64_t x99 = -13151914LL;
	int8_t x100 = -5;
	volatile int64_t t24 = -2161927827631510428LL;

	t24 = ((x97==x98)+(x99/x100));

	if (t24 != 2630382LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	uint32_t x103 = 5756682U;
	volatile int16_t x104 = INT16_MIN;
	static volatile uint32_t t25 = 227080774U;

	t25 = ((x101==x102)+(x103/x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = -1;

	t26 = ((x105==x106)+(x107/x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -1;
	volatile uint16_t x110 = 15110U;
	int8_t x112 = -53;
	volatile int64_t t27 = -20357237568LL;

	t27 = ((x109==x110)+(x111/x112));

	if (t27 != 174025887487825958LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int64_t x114 = -261560556286637138LL;
	int8_t x115 = -2;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -41184613;

	t28 = ((x113==x114)+(x115/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MAX;
	uint32_t x118 = 5250U;
	volatile int8_t x120 = -1;

	t29 = ((x117==x118)+(x119/x120));

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -476071;
	volatile uint32_t x122 = 583U;
	int8_t x124 = INT8_MAX;
	volatile int64_t t30 = 1LL;

	t30 = ((x121==x122)+(x123/x124));

	if (t30 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	volatile uint64_t x126 = 1064548915LLU;
	static int32_t x127 = INT32_MIN;
	volatile uint8_t x128 = 45U;
	volatile int32_t t31 = 1234666;

	t31 = ((x125==x126)+(x127/x128));

	if (t31 != -47721858) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = UINT32_MAX;
	static volatile uint32_t x130 = 34842126U;
	int32_t x131 = -1;
	volatile uint32_t x132 = UINT32_MAX;
	volatile uint32_t t32 = 4741901U;

	t32 = ((x129==x130)+(x131/x132));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 0U;
	uint64_t x134 = 502743LLU;
	int16_t x135 = -3;
	static volatile int32_t t33 = -89861;

	t33 = ((x133==x134)+(x135/x136));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	int8_t x139 = -15;
	int32_t x140 = -1;
	volatile int32_t t34 = -5434877;

	t34 = ((x137==x138)+(x139/x140));

	if (t34 != 15) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 498U;
	int8_t x142 = INT8_MAX;
	static int32_t x143 = INT32_MAX;
	int32_t x144 = -1;
	int32_t t35 = 2001;

	t35 = ((x141==x142)+(x143/x144));

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	int32_t x147 = -1;
	volatile int32_t t36 = 824298;

	t36 = ((x145==x146)+(x147/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 86U;
	uint32_t x151 = 152934605U;
	static volatile int32_t x152 = -1;
	volatile uint32_t t37 = 1404442U;

	t37 = ((x149==x150)+(x151/x152));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	static int64_t x154 = INT64_MIN;
	static int8_t x155 = INT8_MIN;
	static volatile int32_t t38 = -9333284;

	t38 = ((x153==x154)+(x155/x156));

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 104U;
	int16_t x158 = -1;
	volatile int64_t x159 = -1LL;
	static uint64_t x160 = UINT64_MAX;
	volatile uint64_t t39 = 2829048837066LLU;

	t39 = ((x157==x158)+(x159/x160));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	static int8_t x162 = INT8_MIN;
	uint8_t x163 = UINT8_MAX;
	int8_t x164 = INT8_MAX;
	int32_t t40 = 2522;

	t40 = ((x161==x162)+(x163/x164));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 7;
	static volatile int64_t x166 = INT64_MIN;
	static volatile int16_t x167 = 3800;
	uint8_t x168 = UINT8_MAX;
	static int32_t t41 = -804;

	t41 = ((x165==x166)+(x167/x168));

	if (t41 != 14) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x170 = INT32_MIN;
	uint64_t x171 = 39643418LLU;
	int32_t x172 = -5267;

	t42 = ((x169==x170)+(x171/x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	int64_t x174 = -4998112LL;
	int8_t x175 = INT8_MAX;

	t43 = ((x173==x174)+(x175/x176));

	if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MIN;
	volatile uint8_t x178 = 11U;
	int32_t x179 = -1;
	int32_t t44 = -1818;

	t44 = ((x177==x178)+(x179/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 26U;
	uint16_t x182 = 1800U;
	int64_t x183 = 261523663351144370LL;
	int16_t x184 = 4;

	t45 = ((x181==x182)+(x183/x184));

	if (t45 != 65380915837786092LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = -3;
	static int16_t x188 = 6;

	t46 = ((x185==x186)+(x187/x188));

	if (t46 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x192 = UINT8_MAX;
	int32_t t47 = 1027335;

	t47 = ((x189==x190)+(x191/x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = 68499055U;
	static uint64_t x195 = 14722LLU;
	uint32_t x196 = 6448265U;
	static uint64_t t48 = 4709779074387707LLU;

	t48 = ((x193==x194)+(x195/x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = INT8_MIN;
	static int64_t x203 = 3LL;
	int64_t x204 = 2104369115734688070LL;
	int64_t t49 = -10LL;

	t49 = ((x201==x202)+(x203/x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = 785LL;
	static int8_t x206 = 7;
	uint8_t x208 = 1U;
	static int32_t t50 = -4480;

	t50 = ((x205==x206)+(x207/x208));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x211 = UINT16_MAX;
	static uint32_t x212 = 884757897U;
	volatile uint32_t t51 = 129247680U;

	t51 = ((x209==x210)+(x211/x212));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x213 = 3;
	static int8_t x214 = INT8_MIN;
	uint16_t x215 = UINT16_MAX;
	uint8_t x216 = 8U;
	int32_t t52 = -22;

	t52 = ((x213==x214)+(x215/x216));

	if (t52 != 8191) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x217 = UINT8_MAX;
	static int32_t x218 = -1350579;
	volatile int16_t x220 = INT16_MAX;
	uint64_t t53 = 35832269LLU;

	t53 = ((x217==x218)+(x219/x220));

	if (t53 != 15LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MAX;
	volatile int32_t x223 = INT32_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t54 = 626267897;

	t54 = ((x221==x222)+(x223/x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x225 = 1980;
	static uint8_t x227 = 27U;
	int16_t x228 = -1;
	volatile int32_t t55 = -88515;

	t55 = ((x225==x226)+(x227/x228));

	if (t55 != -27) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -1;
	uint32_t x230 = 22U;
	int32_t x231 = 125433;
	int8_t x232 = INT8_MIN;
	volatile int32_t t56 = 590626;

	t56 = ((x229==x230)+(x231/x232));

	if (t56 != -979) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 15U;
	static int8_t x234 = 0;
	volatile int16_t x235 = INT16_MIN;
	uint16_t x236 = 117U;
	static int32_t t57 = 2740;

	t57 = ((x233==x234)+(x235/x236));

	if (t57 != -280) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x237 = -1LL;
	int64_t x238 = INT64_MIN;
	static volatile int32_t x239 = INT32_MIN;
	volatile uint16_t x240 = 47U;
	static volatile int32_t t58 = 125;

	t58 = ((x237==x238)+(x239/x240));

	if (t58 != -45691141) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x242 = 2U;
	int64_t x244 = INT64_MIN;
	int64_t t59 = 0LL;

	t59 = ((x241==x242)+(x243/x244));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = INT16_MIN;
	volatile int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	uint32_t x248 = 353416U;
	uint32_t t60 = 19819U;

	t60 = ((x245==x246)+(x247/x248));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	volatile int16_t x252 = INT16_MIN;

	t61 = ((x249==x250)+(x251/x252));

	if (t61 != 281474976710656LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x253 = 0;
	static volatile int16_t x254 = INT16_MIN;
	int8_t x255 = -9;
	int8_t x256 = 9;
	volatile int32_t t62 = 16465887;

	t62 = ((x253==x254)+(x255/x256));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = 7U;
	int32_t x258 = -147372775;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = INT16_MAX;
	volatile uint64_t t63 = 3537LLU;

	t63 = ((x257==x258)+(x259/x260));

	if (t63 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = 2;
	int8_t x262 = -1;
	int32_t x263 = -4384;
	volatile int16_t x264 = -1407;
	volatile int32_t t64 = 109490;

	t64 = ((x261==x262)+(x263/x264));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x265 = 182U;
	uint8_t x266 = 0U;
	int64_t x267 = 6537190105LL;
	static int16_t x268 = INT16_MIN;

	t65 = ((x265==x266)+(x267/x268));

	if (t65 != -199499LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MIN;
	uint32_t x271 = 808353882U;
	uint32_t t66 = 1608U;

	t66 = ((x269==x270)+(x271/x272));

	if (t66 != 404176941U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x276 = 16;

	t67 = ((x273==x274)+(x275/x276));

	if (t67 != 4423LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MIN;
	static int64_t x278 = -1LL;
	uint32_t x279 = 2527U;
	int16_t x280 = -28;
	static uint32_t t68 = 451U;

	t68 = ((x277==x278)+(x279/x280));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x281 = 1320246703LLU;
	int64_t x282 = 118550322622919662LL;
	static uint32_t x283 = 0U;
	int8_t x284 = -1;
	volatile uint32_t t69 = 138U;

	t69 = ((x281==x282)+(x283/x284));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x286 = 14U;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 5;
	int32_t t70 = -22;

	t70 = ((x285==x286)+(x287/x288));

	if (t70 != -6553) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x289 = UINT32_MAX;
	uint16_t x291 = UINT16_MAX;
	volatile int32_t t71 = 2335103;

	t71 = ((x289==x290)+(x291/x292));

	if (t71 != 4681) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x293 = 329726291256893819LLU;
	volatile int32_t x294 = INT32_MAX;
	int32_t x296 = INT32_MAX;

	t72 = ((x293==x294)+(x295/x296));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x298 = -1;
	int32_t x299 = 77954;
	volatile uint32_t t73 = 333870304U;

	t73 = ((x297==x298)+(x299/x300));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = 0;
	uint32_t x303 = 1316975U;
	int64_t x304 = INT64_MIN;
	volatile int64_t t74 = 107216963768966769LL;

	t74 = ((x301==x302)+(x303/x304));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MAX;
	int8_t x306 = INT8_MAX;
	volatile int32_t x307 = -16150507;
	static int32_t x308 = INT32_MIN;
	static int32_t t75 = 409;

	t75 = ((x305==x306)+(x307/x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x309 = UINT64_MAX;
	int8_t x310 = -30;
	uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 13490592U;

	t76 = ((x309==x310)+(x311/x312));

	if (t76 != 1367378397753LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x315 = -1;
	int32_t x316 = -1;
	static volatile int32_t t77 = 3955;

	t77 = ((x313==x314)+(x315/x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x317 = UINT8_MAX;
	int8_t x319 = -32;
	int64_t x320 = -233684LL;

	t78 = ((x317==x318)+(x319/x320));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 36;
	int32_t x322 = -120;
	int64_t x323 = INT64_MAX;
	int64_t t79 = -3217294537734180LL;

	t79 = ((x321==x322)+(x323/x324));

	if (t79 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x326 = UINT16_MAX;
	int32_t x327 = -1;
	int32_t t80 = -482307007;

	t80 = ((x325==x326)+(x327/x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = INT64_MAX;
	int64_t x330 = INT64_MIN;
	uint32_t x332 = 3172U;
	uint32_t t81 = 16U;

	t81 = ((x329==x330)+(x331/x332));

	if (t81 != 1354024U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x333 = 0;
	uint16_t x334 = 353U;
	int64_t x336 = INT64_MAX;
	int64_t t82 = 25384LL;

	t82 = ((x333==x334)+(x335/x336));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x339 = 996LLU;
	static volatile uint8_t x340 = UINT8_MAX;
	volatile uint64_t t83 = 182LLU;

	t83 = ((x337==x338)+(x339/x340));

	if (t83 != 4LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = INT16_MIN;
	uint8_t x342 = UINT8_MAX;
	volatile uint64_t x343 = 20872425819474LLU;
	static int32_t x344 = -1;
	volatile uint64_t t84 = 4108706690861107LLU;

	t84 = ((x341==x342)+(x343/x344));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MIN;
	volatile uint8_t x346 = 2U;
	int16_t x348 = 12;

	t85 = ((x345==x346)+(x347/x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x349 = 20485U;
	volatile int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -1;

	t86 = ((x349==x350)+(x351/x352));

	if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MAX;
	int32_t t87 = 376;

	t87 = ((x353==x354)+(x355/x356));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x358 = 1035U;
	uint64_t x359 = 229710LLU;
	int64_t x360 = INT64_MAX;
	volatile uint64_t t88 = 565809LLU;

	t88 = ((x357==x358)+(x359/x360));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x362 = UINT32_MAX;
	static volatile uint16_t x363 = 30431U;
	int32_t t89 = -91626;

	t89 = ((x361==x362)+(x363/x364));

	if (t89 != 15215) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MAX;
	static int64_t x367 = INT64_MIN;

	t90 = ((x365==x366)+(x367/x368));

	if (t90 != 281474976710656LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x370 = -15610624635LL;
	int64_t x371 = INT64_MAX;
	uint16_t x372 = 1U;

	t91 = ((x369==x370)+(x371/x372));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = -15;
	volatile int8_t x375 = INT8_MIN;
	volatile int16_t x376 = -1;

	t92 = ((x373==x374)+(x375/x376));

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x379 = INT8_MAX;
	volatile int32_t t93 = 15741728;

	t93 = ((x377==x378)+(x379/x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x381 = 39009198LL;
	uint16_t x382 = 65U;
	uint32_t x383 = UINT32_MAX;
	volatile int64_t x384 = 4986257549339LL;

	t94 = ((x381==x382)+(x383/x384));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = INT16_MAX;
	uint16_t x386 = 1324U;
	uint64_t x387 = 892428LLU;
	int64_t x388 = 223433LL;
	static uint64_t t95 = 169675312913505803LLU;

	t95 = ((x385==x386)+(x387/x388));

	if (t95 != 3LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = 11075;
	static volatile uint8_t x391 = 0U;
	int32_t x392 = 298;

	t96 = ((x389==x390)+(x391/x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x393 = 0;
	int32_t x395 = 3825;
	volatile int32_t t97 = 47585;

	t97 = ((x393==x394)+(x395/x396));

	if (t97 != -29) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x397 = INT32_MIN;
	int16_t x398 = -29;
	static int64_t x399 = 3913287LL;
	static volatile int64_t t98 = -226894826820LL;

	t98 = ((x397==x398)+(x399/x400));

	if (t98 != 1568LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x402 = -14LL;
	int8_t x403 = INT8_MAX;
	uint64_t t99 = 18170LLU;

	t99 = ((x401==x402)+(x403/x404));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

