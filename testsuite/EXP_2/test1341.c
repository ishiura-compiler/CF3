#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 8710060340681511LL;
volatile int32_t t0 = 196;
static int32_t x8 = INT32_MIN;
uint64_t x10 = 2977668674272556687LLU;
volatile uint8_t x11 = 1U;
static int16_t x13 = INT16_MAX;
int64_t x17 = INT64_MAX;
volatile int8_t x19 = INT8_MIN;
static volatile int64_t t4 = INT64_MAX;
int64_t x22 = -358798305117LL;
uint64_t x23 = 1296LLU;
int16_t x25 = -1806;
static uint32_t x40 = 326457284U;
int32_t x48 = 21;
int64_t x49 = -1LL;
static uint64_t t10 = 1702LLU;
uint32_t x62 = 440629195U;
static volatile uint64_t t13 = 47077516LLU;
int32_t t15 = 52242111;
uint32_t x78 = 178U;
static int64_t t17 = 33310195644085872LL;
int64_t x92 = INT64_MAX;
volatile int64_t t19 = 14910116597LL;
uint8_t x95 = 3U;
static volatile int32_t t20 = 1;
static uint8_t x102 = 28U;
static int16_t x104 = -3284;
int32_t x109 = -1;
int8_t x112 = -1;
static int16_t x115 = INT16_MAX;
uint8_t x117 = 34U;
int32_t x128 = 35626;
uint8_t x131 = UINT8_MAX;
volatile int32_t t27 = -3833280;
volatile uint16_t x138 = 5U;
int8_t x141 = -2;
int64_t t30 = 4LL;
int32_t x147 = INT32_MAX;
int32_t t31 = -4757;
uint64_t x155 = 387637489265813173LLU;
int16_t x160 = INT16_MIN;
static int32_t t34 = -179293283;
static int8_t x163 = INT8_MIN;
volatile int32_t t37 = 90444;
volatile uint32_t x176 = 20U;
int16_t x178 = -1;
int32_t t40 = 20730;
static int32_t t42 = 596562510;
static volatile int8_t x198 = -3;
uint8_t x199 = 3U;
int16_t x200 = -8;
static volatile uint8_t x205 = 0U;
volatile uint16_t x210 = 19405U;
volatile uint32_t t46 = 7136096U;
static uint64_t x214 = 1LLU;
int32_t t47 = -1;
volatile int64_t x220 = -6304680452468LL;
int8_t x221 = INT8_MAX;
int8_t x223 = -1;
uint8_t x224 = 9U;
static uint64_t x227 = UINT64_MAX;
uint64_t t51 = 669LLU;
int16_t x237 = INT16_MIN;
int32_t x239 = INT32_MAX;
static volatile int32_t x247 = -1;
int64_t x254 = 2LL;
int32_t t57 = -482671973;
int8_t x258 = -1;
uint8_t x260 = UINT8_MAX;
int64_t x263 = INT64_MAX;
volatile int8_t x269 = INT8_MAX;
uint16_t x277 = UINT16_MAX;
int16_t x278 = INT16_MIN;
volatile int32_t t62 = 442;
volatile int8_t x288 = -44;
volatile int8_t x293 = -1;
static uint16_t x300 = 2U;
static volatile uint16_t x301 = UINT16_MAX;
static uint32_t x309 = UINT32_MAX;
static volatile int32_t x310 = -1;
volatile uint32_t t70 = 6U;
static volatile int16_t x316 = -1;
volatile uint64_t t71 = 10901796336LLU;
uint32_t x319 = 294775U;
volatile uint32_t t73 = 26815U;
int32_t x325 = -1;
volatile int8_t x330 = -1;
volatile uint32_t x342 = UINT32_MAX;
int64_t t78 = 85830301423LL;
volatile uint32_t t79 = 6U;
uint8_t x355 = 5U;
static int32_t x357 = -1;
uint32_t x364 = 1120U;
int64_t x388 = 28515LL;
int32_t t87 = 0;
volatile uint16_t x394 = 27208U;
static volatile int64_t x403 = 186172566747647LL;
static int32_t x408 = 415005026;
volatile uint16_t x409 = UINT16_MAX;
uint64_t t92 = 532353270LLU;
int32_t x421 = -1;
uint32_t x435 = 7U;
volatile int16_t x441 = -1;
volatile uint32_t x443 = 199U;
uint8_t x445 = 1U;
int8_t x447 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int32_t x3 = 1;
	uint8_t x4 = UINT8_MAX;

	t0 = ((x1^(x2==x3))-x4);

	if (t0 != -33023) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	uint16_t x6 = 0U;
	int8_t x7 = INT8_MIN;
	static int64_t t1 = -17173306449591LL;

	t1 = ((x5^(x6==x7))-x8);

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = -504;

	t2 = ((x9^(x10==x11))-x12);

	if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = INT8_MIN;
	volatile int32_t x16 = -67508;
	volatile int32_t t3 = -274;

	t3 = ((x13^(x14==x15))-x16);

	if (t3 != 100275) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x18 = INT8_MIN;
	volatile int8_t x20 = -1;

	t4 = ((x17^(x18==x19))-x20);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	int32_t x24 = -1;
	volatile int32_t t5 = 924142;

	t5 = ((x21^(x22==x23))-x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = 118247;
	static int64_t x27 = INT64_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 48117841LLU;

	t6 = ((x25^(x26==x27))-x28);

	if (t6 != 18446744073709549811LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 1U;
	uint8_t x38 = UINT8_MAX;
	static int64_t x39 = INT64_MAX;
	uint32_t t7 = 109613U;

	t7 = ((x37^(x38==x39))-x40);

	if (t7 != 3968510013U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 14;
	int16_t x42 = INT16_MAX;
	static int32_t x43 = 0;
	int8_t x44 = 1;
	int32_t t8 = -5157;

	t8 = ((x41^(x42==x43))-x44);

	if (t8 != 13) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MAX;
	int16_t x46 = 84;
	int64_t x47 = -15307999582854LL;
	volatile int32_t t9 = 1;

	t9 = ((x45^(x46==x47))-x48);

	if (t9 != 2147483626) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	uint64_t x52 = 838376547711LLU;

	t10 = ((x49^(x50==x51))-x52);

	if (t10 != 18446743235333003903LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 1;
	int32_t x54 = -1;
	int8_t x55 = INT8_MIN;
	volatile int8_t x56 = INT8_MAX;
	volatile int32_t t11 = 1407272;

	t11 = ((x53^(x54==x55))-x56);

	if (t11 != -126) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = 1;
	int32_t x58 = -1;
	volatile int8_t x59 = -1;
	uint64_t x60 = UINT64_MAX;
	uint64_t t12 = 43617LLU;

	t12 = ((x57^(x58==x59))-x60);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	volatile int8_t x63 = -32;
	uint64_t x64 = 14342273989121449LLU;

	t13 = ((x61^(x62==x63))-x64);

	if (t13 != 18432401799720430039LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x65 = INT8_MAX;
	int64_t x66 = INT64_MAX;
	int32_t x67 = 25660;
	static int16_t x68 = 1554;
	int32_t t14 = 1;

	t14 = ((x65^(x66==x67))-x68);

	if (t14 != -1427) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = UINT8_MAX;
	volatile uint64_t x70 = 6LLU;
	int32_t x71 = -1;
	uint8_t x72 = UINT8_MAX;

	t15 = ((x69^(x70==x71))-x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x73 = INT32_MIN;
	int64_t x74 = 788183476341616064LL;
	static volatile int64_t x75 = INT64_MAX;
	uint32_t x76 = 5560U;
	uint32_t t16 = 647269728U;

	t16 = ((x73^(x74==x75))-x76);

	if (t16 != 2147478088U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	int32_t x79 = -1;
	int64_t x80 = -1000186LL;

	t17 = ((x77^(x78==x79))-x80);

	if (t17 != 1000185LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 0U;
	uint16_t x86 = 2759U;
	volatile uint16_t x87 = UINT16_MAX;
	static volatile int16_t x88 = -1;
	volatile int32_t t18 = 1364;

	t18 = ((x85^(x86==x87))-x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 2U;
	volatile int32_t x90 = INT32_MAX;
	int32_t x91 = 6;

	t19 = ((x89^(x90==x91))-x92);

	if (t19 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -3;
	uint8_t x94 = 15U;
	int32_t x96 = INT32_MIN;

	t20 = ((x93^(x94==x95))-x96);

	if (t20 != 2147483645) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 63845326U;
	int32_t x103 = INT32_MIN;
	volatile uint32_t t21 = 397439U;

	t21 = ((x101^(x102==x103))-x104);

	if (t21 != 63848610U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x110 = 665520;
	uint32_t x111 = UINT32_MAX;
	static int32_t t22 = 2865788;

	t22 = ((x109^(x110==x111))-x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = 36388343831741271LLU;
	int64_t x114 = INT64_MIN;
	static volatile uint32_t x116 = UINT32_MAX;
	volatile uint64_t t23 = 978372LLU;

	t23 = ((x113^(x114==x115))-x116);

	if (t23 != 36388339536773976LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x118 = UINT8_MAX;
	int32_t x119 = -1;
	volatile int8_t x120 = INT8_MAX;
	static int32_t t24 = -8896975;

	t24 = ((x117^(x118==x119))-x120);

	if (t24 != -93) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = 603171593204600LL;
	int16_t x122 = INT16_MIN;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = -1;
	int64_t t25 = 10LL;

	t25 = ((x121^(x122==x123))-x124);

	if (t25 != 603171593204601LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = 121198U;
	volatile int16_t x126 = -2700;
	int16_t x127 = INT16_MIN;
	uint32_t t26 = 2976U;

	t26 = ((x125^(x126==x127))-x128);

	if (t26 != 85572U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = 1U;
	int64_t x130 = 83LL;
	volatile int8_t x132 = 0;

	t27 = ((x129^(x130==x131))-x132);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x133 = -116;
	uint8_t x134 = 0U;
	int32_t x135 = INT32_MIN;
	static int16_t x136 = INT16_MAX;
	int32_t t28 = -49721;

	t28 = ((x133^(x134==x135))-x136);

	if (t28 != -32883) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x137 = 2U;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t29 = -50437;

	t29 = ((x137^(x138==x139))-x140);

	if (t29 != -253) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MIN;
	int64_t x144 = -1LL;

	t30 = ((x141^(x142==x143))-x144);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = 57466U;
	int8_t x148 = INT8_MIN;

	t31 = ((x145^(x146==x147))-x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MIN;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = -30;
	int32_t t32 = 1358101;

	t32 = ((x149^(x150==x151))-x152);

	if (t32 != -32738) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -264763;
	volatile uint64_t x154 = 3836194775125LLU;
	int16_t x156 = -1;
	int32_t t33 = 3889235;

	t33 = ((x153^(x154==x155))-x156);

	if (t33 != -264762) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = 15U;
	int16_t x158 = -15;
	int16_t x159 = INT16_MIN;

	t34 = ((x157^(x158==x159))-x160);

	if (t34 != 32783) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x161 = 11U;
	int8_t x162 = INT8_MAX;
	int16_t x164 = INT16_MAX;
	static volatile int32_t t35 = -19338052;

	t35 = ((x161^(x162==x163))-x164);

	if (t35 != -32756) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -44722LL;
	uint64_t x166 = 352872857044770LLU;
	uint64_t x167 = UINT64_MAX;
	uint64_t x168 = 63086897LLU;
	uint64_t t36 = 145857LLU;

	t36 = ((x165^(x166==x167))-x168);

	if (t36 != 18446744073646419997LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x169 = INT16_MIN;
	static volatile int64_t x170 = INT64_MIN;
	int16_t x171 = -1;
	volatile int8_t x172 = INT8_MIN;

	t37 = ((x169^(x170==x171))-x172);

	if (t37 != -32640) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x173 = 3714351749055153LLU;
	volatile uint16_t x174 = UINT16_MAX;
	uint16_t x175 = UINT16_MAX;
	static volatile uint64_t t38 = 609522989468185912LLU;

	t38 = ((x173^(x174==x175))-x176);

	if (t38 != 3714351749055132LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MAX;
	int8_t x179 = INT8_MIN;
	int32_t x180 = 5520966;
	static int32_t t39 = -101;

	t39 = ((x177^(x178==x179))-x180);

	if (t39 != -5520839) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x181 = 1006;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	int16_t x184 = -1368;

	t40 = ((x181^(x182==x183))-x184);

	if (t40 != 2374) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x189 = INT32_MIN;
	static volatile int32_t x190 = 808934563;
	static uint32_t x191 = 3327U;
	int64_t x192 = INT64_MIN;
	volatile int64_t t41 = -5644283482087LL;

	t41 = ((x189^(x190==x191))-x192);

	if (t41 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MAX;
	volatile uint16_t x194 = UINT16_MAX;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;

	t42 = ((x193^(x194==x195))-x196);

	if (t42 != 32512) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x197 = -74005344;
	int32_t t43 = -757766;

	t43 = ((x197^(x198==x199))-x200);

	if (t43 != -74005336) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x201 = INT32_MIN;
	int16_t x202 = 3981;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = -8556798;
	static int32_t t44 = -980671;

	t44 = ((x201^(x202==x203))-x204);

	if (t44 != -2138926850) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x206 = INT64_MIN;
	static uint64_t x207 = 13327LLU;
	int16_t x208 = -2968;
	volatile int32_t t45 = -496258634;

	t45 = ((x205^(x206==x207))-x208);

	if (t45 != 2968) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = UINT32_MAX;
	static int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MIN;

	t46 = ((x209^(x210==x211))-x212);

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x213 = INT16_MIN;
	uint8_t x215 = 0U;
	int32_t x216 = 1;

	t47 = ((x213^(x214==x215))-x216);

	if (t47 != -32769) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = -1;
	int8_t x219 = -9;
	static volatile int64_t t48 = -5008211LL;

	t48 = ((x217^(x218==x219))-x220);

	if (t48 != 6304680452340LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x222 = UINT16_MAX;
	volatile int32_t t49 = 824360;

	t49 = ((x221^(x222==x223))-x224);

	if (t49 != 118) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = 302513607;
	static volatile uint32_t x226 = 14286U;
	uint32_t x228 = 787U;
	volatile uint32_t t50 = 2U;

	t50 = ((x225^(x226==x227))-x228);

	if (t50 != 302512820U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x229 = 0U;
	static int8_t x230 = INT8_MIN;
	static int32_t x231 = -246380;
	uint64_t x232 = 627534564307256LLU;

	t51 = ((x229^(x230==x231))-x232);

	if (t51 != 18446116539145244360LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = 1002;
	int8_t x234 = -1;
	uint64_t x235 = 22284531768148653LLU;
	int64_t x236 = 6LL;
	volatile int64_t t52 = -185653671920658884LL;

	t52 = ((x233^(x234==x235))-x236);

	if (t52 != 996LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x238 = 3179U;
	static volatile int8_t x240 = INT8_MIN;
	int32_t t53 = 2519;

	t53 = ((x237^(x238==x239))-x240);

	if (t53 != -32640) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 20016U;
	uint8_t x244 = 12U;
	uint32_t t54 = 2U;

	t54 = ((x241^(x242==x243))-x244);

	if (t54 != 4294967283U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x245 = -1LL;
	int16_t x246 = INT16_MIN;
	static int8_t x248 = 0;
	static int64_t t55 = -1751LL;

	t55 = ((x245^(x246==x247))-x248);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x249 = INT16_MIN;
	uint8_t x250 = 2U;
	uint64_t x251 = 217217LLU;
	uint32_t x252 = 0U;
	static uint32_t t56 = 1U;

	t56 = ((x249^(x250==x251))-x252);

	if (t56 != 4294934528U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = 1;
	int16_t x255 = INT16_MIN;
	volatile int8_t x256 = 0;

	t57 = ((x253^(x254==x255))-x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 453U;
	static uint16_t x259 = 19U;
	int32_t t58 = 14562426;

	t58 = ((x257^(x258==x259))-x260);

	if (t58 != 198) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = 41;
	int16_t x262 = INT16_MAX;
	uint64_t x264 = 63294178428LLU;
	uint64_t t59 = 165420804461987LLU;

	t59 = ((x261^(x262==x263))-x264);

	if (t59 != 18446744010415373229LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x265 = 16U;
	int64_t x266 = 98980LL;
	uint8_t x267 = 2U;
	volatile int32_t x268 = -17631;
	volatile int32_t t60 = -11299;

	t60 = ((x265^(x266==x267))-x268);

	if (t60 != 17647) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = INT32_MIN;
	volatile uint8_t x271 = 1U;
	int32_t x272 = -1;
	volatile int32_t t61 = 38342691;

	t61 = ((x269^(x270==x271))-x272);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x279 = -1;
	static int32_t x280 = -335183;

	t62 = ((x277^(x278==x279))-x280);

	if (t62 != 400718) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x281 = 26831056473104668LLU;
	static volatile int16_t x282 = INT16_MIN;
	int64_t x283 = 1LL;
	int64_t x284 = INT64_MAX;
	uint64_t t63 = 1688LLU;

	t63 = ((x281^(x282==x283))-x284);

	if (t63 != 9250203093327880477LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 12U;
	uint32_t x286 = 255172U;
	int16_t x287 = INT16_MAX;
	int32_t t64 = 18080;

	t64 = ((x285^(x286==x287))-x288);

	if (t64 != 56) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x289 = INT8_MIN;
	volatile uint32_t x290 = UINT32_MAX;
	volatile int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t65 = 9815;

	t65 = ((x289^(x290==x291))-x292);

	if (t65 != 32640) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x294 = UINT16_MAX;
	uint16_t x295 = 2U;
	uint32_t x296 = 187U;
	volatile uint32_t t66 = 100U;

	t66 = ((x293^(x294==x295))-x296);

	if (t66 != 4294967108U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -16;
	static int64_t x298 = INT64_MIN;
	static volatile int8_t x299 = -1;
	int32_t t67 = 246398023;

	t67 = ((x297^(x298==x299))-x300);

	if (t67 != -18) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x302 = 0;
	int64_t x303 = INT64_MAX;
	uint8_t x304 = 28U;
	static int32_t t68 = 133954979;

	t68 = ((x301^(x302==x303))-x304);

	if (t68 != 65507) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MAX;
	int8_t x307 = INT8_MAX;
	int8_t x308 = -1;
	int32_t t69 = 16214;

	t69 = ((x305^(x306==x307))-x308);

	if (t69 != 65536) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x311 = 3U;
	static volatile uint16_t x312 = 3988U;

	t70 = ((x309^(x310==x311))-x312);

	if (t70 != 4294963307U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = 47U;
	int64_t x315 = -16558253171593001LL;

	t71 = ((x313^(x314==x315))-x316);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = INT8_MIN;
	uint32_t x318 = UINT32_MAX;
	static int16_t x320 = -1;
	static volatile int32_t t72 = 857794;

	t72 = ((x317^(x318==x319))-x320);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x321 = 62401U;
	static int32_t x322 = -1;
	static int16_t x323 = INT16_MIN;
	int8_t x324 = 12;

	t73 = ((x321^(x322==x323))-x324);

	if (t73 != 62389U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x326 = 3U;
	int8_t x327 = 52;
	int32_t x328 = -1;
	static volatile int32_t t74 = -21466855;

	t74 = ((x325^(x326==x327))-x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = INT64_MIN;
	static int8_t x331 = 10;
	int8_t x332 = -1;
	int64_t t75 = -684LL;

	t75 = ((x329^(x330==x331))-x332);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x333 = 2U;
	volatile int16_t x334 = -7486;
	volatile int16_t x335 = INT16_MIN;
	volatile uint16_t x336 = 5453U;
	static int32_t t76 = 145669;

	t76 = ((x333^(x334==x335))-x336);

	if (t76 != -5451) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x341 = 6U;
	int8_t x343 = 0;
	int16_t x344 = -1;
	int32_t t77 = -16517;

	t77 = ((x341^(x342==x343))-x344);

	if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = -1;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = -52;
	static int64_t x348 = -1LL;

	t78 = ((x345^(x346==x347))-x348);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x349 = UINT32_MAX;
	static uint64_t x350 = 222098774LLU;
	int8_t x351 = -1;
	int16_t x352 = -1;

	t79 = ((x349^(x350==x351))-x352);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = -5;
	static volatile uint64_t x354 = 14LLU;
	int8_t x356 = INT8_MIN;
	volatile int32_t t80 = -1;

	t80 = ((x353^(x354==x355))-x356);

	if (t80 != 123) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x358 = INT16_MIN;
	volatile int16_t x359 = -8508;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t81 = -49;

	t81 = ((x357^(x358==x359))-x360);

	if (t81 != -65536) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x361 = 23LLU;
	volatile uint16_t x362 = 0U;
	int32_t x363 = INT32_MIN;
	volatile uint64_t t82 = 21096973834496LLU;

	t82 = ((x361^(x362==x363))-x364);

	if (t82 != 18446744073709550519LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x369 = 328811U;
	int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	uint32_t x372 = 15404451U;
	uint32_t t83 = 1449U;

	t83 = ((x369^(x370==x371))-x372);

	if (t83 != 4279891656U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = -1LL;
	int8_t x374 = 0;
	int64_t x375 = INT64_MAX;
	static uint64_t x376 = 407855872361LLU;
	volatile uint64_t t84 = 2172456235597LLU;

	t84 = ((x373^(x374==x375))-x376);

	if (t84 != 18446743665853679254LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = 0LL;
	static uint32_t x382 = 1U;
	int64_t x383 = INT64_MAX;
	int64_t x384 = 4084925228217LL;
	volatile int64_t t85 = 6263580109LL;

	t85 = ((x381^(x382==x383))-x384);

	if (t85 != -4084925228217LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x385 = 91LLU;
	int16_t x386 = 11;
	static volatile uint32_t x387 = 25704U;
	volatile uint64_t t86 = 17186LLU;

	t86 = ((x385^(x386==x387))-x388);

	if (t86 != 18446744073709523192LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x389 = -96208;
	int16_t x390 = -1;
	static int16_t x391 = -186;
	int16_t x392 = 6903;

	t87 = ((x389^(x390==x391))-x392);

	if (t87 != -103111) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x393 = -8998403;
	int16_t x395 = INT16_MAX;
	uint32_t x396 = UINT32_MAX;
	uint32_t t88 = 49929U;

	t88 = ((x393^(x394==x395))-x396);

	if (t88 != 4285968894U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x401 = -2;
	int8_t x402 = INT8_MIN;
	uint32_t x404 = 5854U;
	uint32_t t89 = 48206U;

	t89 = ((x401^(x402==x403))-x404);

	if (t89 != 4294961440U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x405 = -8;
	int8_t x406 = -1;
	uint64_t x407 = 47024349LLU;
	volatile int32_t t90 = -57309;

	t90 = ((x405^(x406==x407))-x408);

	if (t90 != -415005034) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x410 = -1;
	static uint64_t x411 = UINT64_MAX;
	int16_t x412 = INT16_MAX;
	int32_t t91 = -11;

	t91 = ((x409^(x410==x411))-x412);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x413 = UINT16_MAX;
	uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MAX;
	uint64_t x416 = 7459506414LLU;

	t92 = ((x413^(x414==x415))-x416);

	if (t92 != 18446744066250110737LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x417 = -1LL;
	uint64_t x418 = UINT64_MAX;
	volatile uint8_t x419 = 39U;
	uint16_t x420 = UINT16_MAX;
	int64_t t93 = -231723961863280116LL;

	t93 = ((x417^(x418==x419))-x420);

	if (t93 != -65536LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x422 = UINT8_MAX;
	uint8_t x423 = 36U;
	int64_t x424 = -1LL;
	int64_t t94 = -2006293439822086556LL;

	t94 = ((x421^(x422==x423))-x424);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x425 = 975904349U;
	volatile int16_t x426 = INT16_MIN;
	static volatile uint64_t x427 = 993491LLU;
	uint16_t x428 = 1U;
	uint32_t t95 = 15996U;

	t95 = ((x425^(x426==x427))-x428);

	if (t95 != 975904348U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = INT32_MIN;
	static int8_t x434 = 3;
	static uint64_t x436 = UINT64_MAX;
	uint64_t t96 = 558728313855LLU;

	t96 = ((x433^(x434==x435))-x436);

	if (t96 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = INT16_MAX;
	uint16_t x438 = 1614U;
	uint8_t x439 = 28U;
	uint16_t x440 = 43U;
	static int32_t t97 = -397401579;

	t97 = ((x437^(x438==x439))-x440);

	if (t97 != 32724) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x442 = INT8_MIN;
	static volatile int64_t x444 = INT64_MAX;
	volatile int64_t t98 = INT64_MIN;

	t98 = ((x441^(x442==x443))-x444);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x446 = -1LL;
	volatile uint8_t x448 = UINT8_MAX;
	volatile int32_t t99 = 1;

	t99 = ((x445^(x446==x447))-x448);

	if (t99 != -254) { NG(); } else { ; }
	
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

