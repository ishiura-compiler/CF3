#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 4384364276221410LLU;
int32_t t0 = -2069277;
int32_t x8 = INT32_MIN;
static int16_t x11 = -1;
volatile int32_t x12 = -1;
uint64_t x26 = 18LLU;
int8_t x30 = 1;
volatile int32_t t9 = -35937;
static volatile int8_t x45 = INT8_MAX;
static volatile int16_t x50 = INT16_MIN;
int64_t t12 = 7113LL;
int64_t x55 = 28659563LL;
static uint8_t x56 = 4U;
int8_t x62 = 13;
int32_t t15 = 12376575;
volatile int64_t x67 = INT64_MIN;
volatile int8_t x73 = INT8_MAX;
static int64_t x75 = INT64_MIN;
static int16_t x82 = 54;
int64_t x96 = -1LL;
int8_t x104 = 0;
int32_t t25 = -1;
uint32_t t27 = 3257U;
int32_t x115 = 49428754;
uint16_t x116 = UINT16_MAX;
static volatile int32_t t31 = -488057329;
uint64_t x130 = UINT64_MAX;
int16_t x132 = -1;
uint16_t x133 = UINT16_MAX;
int64_t x138 = INT64_MAX;
int64_t t34 = 0LL;
static uint32_t x144 = UINT32_MAX;
int32_t x145 = 4038;
static volatile int32_t t36 = 985277;
static volatile int8_t x150 = -1;
int32_t x151 = -103;
int8_t x152 = 20;
static volatile int64_t t38 = 234LL;
int8_t x157 = -9;
volatile int16_t x160 = 0;
uint32_t x161 = 8323640U;
int16_t x173 = INT16_MIN;
int16_t x174 = INT16_MAX;
uint32_t x177 = 1555U;
volatile uint64_t x184 = 4920762077355668263LLU;
static int32_t t46 = -453068002;
int32_t x192 = INT32_MAX;
int16_t x199 = INT16_MAX;
uint16_t x203 = 3U;
static int16_t x205 = -1;
int64_t x208 = INT64_MIN;
int32_t t52 = -1;
volatile uint32_t x217 = 183977U;
static int64_t x222 = -1LL;
static uint64_t x228 = UINT64_MAX;
static uint8_t x229 = 0U;
static int8_t x231 = -1;
static int64_t x240 = INT64_MIN;
static int64_t t59 = INT64_MIN;
volatile int64_t x242 = -424LL;
static volatile int64_t x244 = INT64_MIN;
static volatile uint64_t t60 = 232220571LLU;
volatile uint16_t x255 = 11U;
volatile int32_t x257 = -27607;
int64_t x265 = INT64_MIN;
uint64_t x268 = UINT64_MAX;
int64_t x270 = INT64_MIN;
volatile int64_t t67 = 22671207LL;
uint32_t x275 = 75795101U;
int32_t x278 = INT32_MAX;
int16_t x279 = 0;
int32_t t69 = -20;
int64_t x286 = INT64_MIN;
int32_t x288 = -1;
int32_t x292 = INT32_MIN;
volatile int16_t x296 = INT16_MAX;
static volatile int32_t t73 = 15441026;
int32_t t74 = -225;
int32_t t75 = 2514;
int8_t x305 = 0;
uint16_t x306 = UINT16_MAX;
int32_t x307 = -1;
uint16_t x315 = 8U;
uint64_t t78 = 1266621486039169984LLU;
volatile int32_t x322 = INT32_MAX;
int16_t x323 = INT16_MIN;
uint16_t x324 = 1U;
uint32_t x332 = UINT32_MAX;
int8_t x334 = -1;
int8_t x340 = INT8_MIN;
uint32_t x341 = UINT32_MAX;
int8_t x346 = INT8_MIN;
int64_t x347 = INT64_MIN;
static uint8_t x349 = UINT8_MAX;
int32_t x352 = 28;
volatile int8_t x354 = INT8_MIN;
int8_t x355 = INT8_MIN;
static int32_t x357 = -42984427;
uint32_t x364 = 121141U;
int8_t x369 = -1;
uint16_t x374 = 0U;
int64_t x377 = INT64_MAX;
int64_t x382 = -1LL;
volatile uint64_t x387 = UINT64_MAX;
static int64_t x389 = INT64_MIN;
uint64_t x391 = 18417939154167LLU;
uint64_t x392 = 3467787498050094LLU;
int64_t t97 = 261398024318598475LL;
static int8_t x396 = INT8_MAX;
int64_t x398 = -63935187127955LL;


void f0(void) {
	static volatile uint16_t x1 = UINT16_MAX;
	int32_t x2 = -226717324;
	int16_t x4 = -6009;

	t0 = ((x1^x2)-(x3==x4));

	if (t0 != -226726261) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	static volatile int16_t x7 = -1;
	int32_t t1 = -7;

	t1 = ((x5^x6)-(x7==x8));

	if (t1 != -2147450881) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int32_t x10 = 14002;
	volatile int32_t t2 = 736;

	t2 = ((x9^x10)-(x11==x12));

	if (t2 != -14031) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	uint16_t x14 = UINT16_MAX;
	static int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MAX;
	static int32_t t3 = 55;

	t3 = ((x13^x14)-(x15==x16));

	if (t3 != 65407) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 1U;
	static int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MAX;
	volatile uint16_t x20 = 0U;
	volatile int64_t t4 = -37792823603LL;

	t4 = ((x17^x18)-(x19==x20));

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	static uint64_t x22 = UINT64_MAX;
	int8_t x23 = -1;
	uint32_t x24 = UINT32_MAX;
	uint64_t t5 = 22085706483402877LLU;

	t5 = ((x21^x22)-(x23==x24));

	if (t5 != 2147483646LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = 5577867471LL;
	int16_t x27 = INT16_MIN;
	uint8_t x28 = 18U;
	volatile uint64_t t6 = 2485495341255220620LLU;

	t6 = ((x25^x26)-(x27==x28));

	if (t6 != 5577867485LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 2LLU;
	int8_t x31 = 10;
	int32_t x32 = INT32_MIN;
	uint64_t t7 = 98845061539995990LLU;

	t7 = ((x29^x30)-(x31==x32));

	if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 865;
	int32_t x34 = INT32_MIN;
	static uint16_t x35 = 42U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -16;

	t8 = ((x33^x34)-(x35==x36));

	if (t8 != -2147482783) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int8_t x38 = INT8_MAX;
	volatile int16_t x39 = INT16_MIN;
	volatile uint8_t x40 = 30U;

	t9 = ((x37^x38)-(x39==x40));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	int8_t x44 = -1;
	volatile int32_t t10 = 62554694;

	t10 = ((x41^x42)-(x43==x44));

	if (t10 != 2147483520) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x46 = INT8_MIN;
	static int64_t x47 = INT64_MIN;
	uint64_t x48 = 23145LLU;
	volatile int32_t t11 = -45513360;

	t11 = ((x45^x46)-(x47==x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int64_t x51 = 2LL;
	int32_t x52 = -1;

	t12 = ((x49^x50)-(x51==x52));

	if (t12 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 17U;
	uint8_t x54 = 21U;
	volatile int32_t t13 = 26;

	t13 = ((x53^x54)-(x55==x56));

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	static volatile int64_t x58 = INT64_MIN;
	uint8_t x59 = 49U;
	volatile int32_t x60 = -1;
	static volatile int64_t t14 = -9383424061LL;

	t14 = ((x57^x58)-(x59==x60));

	if (t14 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = UINT16_MAX;
	int8_t x63 = INT8_MIN;
	uint32_t x64 = 115U;

	t15 = ((x61^x62)-(x63==x64));

	if (t15 != 65522) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -6953105;
	int16_t x66 = -12;
	int8_t x68 = INT8_MIN;
	int32_t t16 = 1030628;

	t16 = ((x65^x66)-(x67==x68));

	if (t16 != 6953115) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1109;
	volatile uint16_t x70 = 2U;
	int32_t x71 = INT32_MAX;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = -87103615;

	t17 = ((x69^x70)-(x71==x72));

	if (t17 != -1111) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	int8_t x76 = 5;
	static volatile int32_t t18 = -10;

	t18 = ((x73^x74)-(x75==x76));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = -298;
	int16_t x78 = INT16_MIN;
	static int64_t x79 = -1227955137824399478LL;
	static uint16_t x80 = 0U;
	int32_t t19 = -261;

	t19 = ((x77^x78)-(x79==x80));

	if (t19 != 32470) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	static int32_t x83 = -26;
	volatile int32_t x84 = INT32_MAX;
	volatile int32_t t20 = 1;

	t20 = ((x81^x82)-(x83==x84));

	if (t20 != 2147483593) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	uint32_t x86 = UINT32_MAX;
	int64_t x87 = 848579051952143380LL;
	int8_t x88 = -1;
	volatile uint32_t t21 = 1808000182U;

	t21 = ((x85^x86)-(x87==x88));

	if (t21 != 4294901760U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	static volatile uint64_t x90 = UINT64_MAX;
	int8_t x91 = INT8_MAX;
	static int64_t x92 = -3978600880898667552LL;
	volatile uint64_t t22 = 1645553113623LLU;

	t22 = ((x89^x90)-(x91==x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 136LLU;
	uint16_t x94 = UINT16_MAX;
	int16_t x95 = INT16_MIN;
	volatile uint64_t t23 = 7231763515774533LLU;

	t23 = ((x93^x94)-(x95==x96));

	if (t23 != 65399LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	uint64_t x98 = 191LLU;
	int64_t x99 = -1LL;
	volatile int64_t x100 = INT64_MIN;
	uint64_t t24 = 5225875987LLU;

	t24 = ((x97^x98)-(x99==x100));

	if (t24 != 2147483456LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	int8_t x103 = 1;

	t25 = ((x101^x102)-(x103==x104));

	if (t25 != 2147450880) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int32_t x106 = INT32_MAX;
	static uint8_t x107 = 60U;
	int8_t x108 = -1;
	int32_t t26 = -711;

	t26 = ((x105^x106)-(x107==x108));

	if (t26 != 2147483392) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 785602161U;
	int32_t x110 = -1;
	int32_t x111 = 8516;
	int32_t x112 = INT32_MIN;

	t27 = ((x109^x110)-(x111==x112));

	if (t27 != 3509365134U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static int64_t x114 = INT64_MIN;
	static volatile int64_t t28 = -1460892LL;

	t28 = ((x113^x114)-(x115==x116));

	if (t28 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = INT8_MIN;
	uint8_t x118 = UINT8_MAX;
	static int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MAX;
	volatile int32_t t29 = -349001650;

	t29 = ((x117^x118)-(x119==x120));

	if (t29 != -129) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = 35954356348254322LL;
	static uint16_t x122 = UINT16_MAX;
	uint64_t x123 = 14LLU;
	int8_t x124 = 1;
	int64_t t30 = -1LL;

	t30 = ((x121^x122)-(x123==x124));

	if (t30 != 35954356348192653LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = -1;
	uint16_t x127 = 17U;
	int64_t x128 = -70885794112510171LL;

	t31 = ((x125^x126)-(x127==x128));

	if (t31 != -256) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	uint32_t x131 = 1U;
	uint64_t t32 = 4219616681141LLU;

	t32 = ((x129^x130)-(x131==x132));

	if (t32 != 127LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 5U;
	uint64_t x135 = 81LLU;
	int16_t x136 = -1;
	volatile int32_t t33 = 678;

	t33 = ((x133^x134)-(x135==x136));

	if (t33 != 65530) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = -64201813LL;
	int64_t x139 = INT64_MIN;
	volatile int64_t x140 = -1LL;

	t34 = ((x137^x138)-(x139==x140));

	if (t34 != -9223372036790573996LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 0U;
	int64_t x142 = INT64_MAX;
	volatile uint64_t x143 = UINT64_MAX;
	static int64_t t35 = INT64_MAX;

	t35 = ((x141^x142)-(x143==x144));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = 10;
	int16_t x147 = 1;
	int64_t x148 = -1LL;

	t36 = ((x145^x146)-(x147==x148));

	if (t36 != 4044) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 7U;
	int32_t t37 = -65;

	t37 = ((x149^x150)-(x151==x152));

	if (t37 != -8) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = 324463741442674085LL;
	int8_t x154 = -7;
	static uint32_t x155 = 49620U;
	static int8_t x156 = INT8_MIN;

	t38 = ((x153^x154)-(x155==x156));

	if (t38 != -324463741442674084LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x158 = 13082LL;
	volatile int16_t x159 = -1887;
	volatile int64_t t39 = -2113874350599LL;

	t39 = ((x157^x158)-(x159==x160));

	if (t39 != -13075LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = 14;
	uint32_t x163 = UINT32_MAX;
	int32_t x164 = INT32_MIN;
	static volatile uint32_t t40 = 82U;

	t40 = ((x161^x162)-(x163==x164));

	if (t40 != 8323638U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	volatile uint32_t x166 = 877814U;
	uint64_t x167 = 0LLU;
	int8_t x168 = INT8_MAX;
	volatile uint32_t t41 = 2006772U;

	t41 = ((x165^x166)-(x167==x168));

	if (t41 != 4294108406U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MIN;
	static volatile uint32_t x170 = 4098U;
	static uint16_t x171 = 34U;
	int16_t x172 = -9;
	int64_t t42 = 82762061384547LL;

	t42 = ((x169^x170)-(x171==x172));

	if (t42 != -9223372036854771710LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x175 = INT32_MAX;
	int32_t x176 = -1;
	static volatile int32_t t43 = 3122;

	t43 = ((x173^x174)-(x175==x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x178 = INT32_MIN;
	static int64_t x179 = -1LL;
	uint16_t x180 = 48U;
	uint32_t t44 = 722610U;

	t44 = ((x177^x178)-(x179==x180));

	if (t44 != 2147485203U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = -89;
	uint32_t x183 = 110184U;
	int32_t t45 = 52193891;

	t45 = ((x181^x182)-(x183==x184));

	if (t45 != 39) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 43U;
	static int16_t x186 = INT16_MIN;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = INT16_MIN;

	t46 = ((x185^x186)-(x187==x188));

	if (t46 != -32725) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = 1;
	int8_t x190 = 1;
	static int64_t x191 = INT64_MIN;
	volatile int32_t t47 = 708118818;

	t47 = ((x189^x190)-(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -66;
	int64_t x194 = -58664092LL;
	static int64_t x195 = INT64_MAX;
	int8_t x196 = 3;
	volatile int64_t t48 = -30408LL;

	t48 = ((x193^x194)-(x195==x196));

	if (t48 != 58664154LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	int8_t x198 = 10;
	int8_t x200 = INT8_MIN;
	int64_t t49 = -411155494739LL;

	t49 = ((x197^x198)-(x199==x200));

	if (t49 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int64_t x202 = -1LL;
	volatile int64_t x204 = INT64_MIN;
	static volatile int64_t t50 = INT64_MIN;

	t50 = ((x201^x202)-(x203==x204));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1;
	static volatile int64_t x207 = INT64_MAX;
	int32_t t51 = -13566949;

	t51 = ((x205^x206)-(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MIN;
	uint16_t x211 = UINT16_MAX;
	static uint16_t x212 = 20U;

	t52 = ((x209^x210)-(x211==x212));

	if (t52 != -2147450881) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	static uint8_t x214 = 6U;
	volatile int8_t x215 = -1;
	int32_t x216 = -1;
	volatile int32_t t53 = 1397591;

	t53 = ((x213^x214)-(x215==x216));

	if (t53 != -2147483643) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x218 = 1764374LLU;
	static int16_t x219 = INT16_MAX;
	volatile int64_t x220 = -445446LL;
	volatile uint64_t t54 = 5LLU;

	t54 = ((x217^x218)-(x219==x220));

	if (t54 != 1581759LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MIN;
	int16_t x223 = -1;
	static uint16_t x224 = 2U;
	int64_t t55 = INT64_MAX;

	t55 = ((x221^x222)-(x223==x224));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = 1;
	int32_t x227 = -5;
	int64_t t56 = 8295774334384773LL;

	t56 = ((x225^x226)-(x227==x228));

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x230 = INT64_MIN;
	uint64_t x232 = 287741280LLU;
	volatile int64_t t57 = INT64_MIN;

	t57 = ((x229^x230)-(x231==x232));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = INT16_MIN;
	static int8_t x234 = -1;
	int32_t x235 = 693880504;
	uint64_t x236 = 0LLU;
	volatile int32_t t58 = -58;

	t58 = ((x233^x234)-(x235==x236));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	int64_t x238 = INT64_MAX;
	int8_t x239 = -53;

	t59 = ((x237^x238)-(x239==x240));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 343461LLU;
	uint8_t x243 = 28U;

	t60 = ((x241^x242)-(x243==x244));

	if (t60 != 18446744073709208573LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x246 = 8642384726LL;
	int32_t x247 = -1;
	int64_t x248 = INT64_MAX;
	volatile int64_t t61 = -1568LL;

	t61 = ((x245^x246)-(x247==x248));

	if (t61 != 12832451753LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MIN;
	static volatile uint16_t x250 = 4U;
	volatile int64_t x251 = -1LL;
	volatile int64_t x252 = INT64_MIN;
	static volatile int64_t t62 = -9871410972896869LL;

	t62 = ((x249^x250)-(x251==x252));

	if (t62 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static uint32_t x254 = 2897533U;
	uint32_t x256 = UINT32_MAX;
	static uint32_t t63 = 31U;

	t63 = ((x253^x254)-(x255==x256));

	if (t63 != 2150381181U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MIN;
	static int32_t x259 = INT32_MAX;
	int64_t x260 = INT64_MIN;
	volatile int32_t t64 = 947;

	t64 = ((x257^x258)-(x259==x260));

	if (t64 != 27561) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	volatile uint32_t x262 = 2059088U;
	int8_t x263 = -1;
	static uint32_t x264 = UINT32_MAX;
	volatile uint32_t t65 = 1709858U;

	t65 = ((x261^x262)-(x263==x264));

	if (t65 != 2149542735U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = -117LL;
	int16_t x267 = 1;
	int64_t t66 = -1733152253968LL;

	t66 = ((x265^x266)-(x267==x268));

	if (t66 != 9223372036854775691LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MIN;
	uint64_t x271 = 3LLU;
	int64_t x272 = INT64_MIN;

	t67 = ((x269^x270)-(x271==x272));

	if (t67 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	volatile int32_t x274 = INT32_MAX;
	static int8_t x276 = -1;
	volatile int64_t t68 = -6982833946167LL;

	t68 = ((x273^x274)-(x275==x276));

	if (t68 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -6;
	uint32_t x280 = UINT32_MAX;

	t69 = ((x277^x278)-(x279==x280));

	if (t69 != -2147483643) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = -1;
	static int16_t x282 = 0;
	int64_t x283 = -36LL;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t70 = 0;

	t70 = ((x281^x282)-(x283==x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MAX;
	volatile int64_t x287 = -358201908LL;
	int64_t t71 = 7585LL;

	t71 = ((x285^x286)-(x287==x288));

	if (t71 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	volatile int8_t x290 = 11;
	uint64_t x291 = UINT64_MAX;
	volatile int64_t t72 = -469906226280738LL;

	t72 = ((x289^x290)-(x291==x292));

	if (t72 != -12LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = 10600U;
	int8_t x294 = 1;
	int64_t x295 = -1LL;

	t73 = ((x293^x294)-(x295==x296));

	if (t73 != 10601) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x297 = -1;
	static volatile int8_t x298 = INT8_MIN;
	uint8_t x299 = 2U;
	int8_t x300 = 2;

	t74 = ((x297^x298)-(x299==x300));

	if (t74 != 126) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int8_t x303 = -21;
	volatile int8_t x304 = -1;

	t75 = ((x301^x302)-(x303==x304));

	if (t75 != 2147450880) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x308 = UINT64_MAX;
	int32_t t76 = -19;

	t76 = ((x305^x306)-(x307==x308));

	if (t76 != 65534) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MIN;
	uint8_t x310 = 4U;
	volatile uint8_t x311 = UINT8_MAX;
	uint64_t x312 = 23614240123244192LLU;
	volatile int32_t t77 = -117;

	t77 = ((x309^x310)-(x311==x312));

	if (t77 != -2147483644) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 55955311307LLU;
	int16_t x314 = INT16_MIN;
	static uint32_t x316 = UINT32_MAX;

	t78 = ((x313^x314)-(x315==x316));

	if (t78 != 18446744017754245835LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 269170217U;
	static int64_t x318 = INT64_MAX;
	uint16_t x319 = 28174U;
	uint16_t x320 = 1U;
	volatile int64_t t79 = 192067LL;

	t79 = ((x317^x318)-(x319==x320));

	if (t79 != 9223372036585605590LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	int32_t t80 = INT32_MIN;

	t80 = ((x321^x322)-(x323==x324));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = 25;
	volatile uint32_t x327 = UINT32_MAX;
	int32_t x328 = 5924568;
	static int32_t t81 = 700;

	t81 = ((x325^x326)-(x327==x328));

	if (t81 != -103) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	int64_t t82 = -341076LL;

	t82 = ((x329^x330)-(x331==x332));

	if (t82 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 5538038056341LL;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 1783348138072LLU;
	volatile int64_t t83 = 7587273996LL;

	t83 = ((x333^x334)-(x335==x336));

	if (t83 != -5538038056342LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	uint16_t x338 = 6359U;
	volatile int16_t x339 = 1;
	volatile int32_t t84 = -50262011;

	t84 = ((x337^x338)-(x339==x340));

	if (t84 != -26409) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MAX;
	int16_t x343 = INT16_MIN;
	volatile int16_t x344 = INT16_MAX;
	uint32_t t85 = 1112141999U;

	t85 = ((x341^x342)-(x343==x344));

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = 0;
	int8_t x348 = -7;
	int32_t t86 = -1930409;

	t86 = ((x345^x346)-(x347==x348));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 51U;
	uint64_t x351 = 2LLU;
	static volatile int32_t t87 = -246;

	t87 = ((x349^x350)-(x351==x352));

	if (t87 != 204) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	uint8_t x356 = 13U;
	volatile int32_t t88 = 26;

	t88 = ((x353^x354)-(x355==x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = INT16_MAX;
	int16_t x359 = 752;
	uint8_t x360 = 123U;
	volatile int32_t t89 = -20;

	t89 = ((x357^x358)-(x359==x360));

	if (t89 != -42966038) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 44U;
	int16_t x362 = INT16_MAX;
	static int8_t x363 = INT8_MIN;
	int32_t t90 = 130877562;

	t90 = ((x361^x362)-(x363==x364));

	if (t90 != 32723) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	uint32_t x366 = 22902801U;
	static int8_t x367 = 0;
	uint16_t x368 = 11U;
	volatile uint32_t t91 = 91U;

	t91 = ((x365^x366)-(x367==x368));

	if (t91 != 4272064494U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = -416839123305LL;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = UINT16_MAX;
	int64_t t92 = 4569176888LL;

	t92 = ((x369^x370)-(x371==x372));

	if (t92 != 416839123304LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1U;
	static uint8_t x375 = UINT8_MAX;
	volatile int64_t x376 = INT64_MIN;
	int32_t t93 = -15619;

	t93 = ((x373^x374)-(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = -1LL;
	volatile int16_t x379 = INT16_MIN;
	uint16_t x380 = 44U;
	static int64_t t94 = INT64_MIN;

	t94 = ((x377^x378)-(x379==x380));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	int32_t x383 = INT32_MIN;
	static uint64_t x384 = 1020546LLU;
	static volatile int64_t t95 = -32286720LL;

	t95 = ((x381^x382)-(x383==x384));

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	uint16_t x386 = 6989U;
	static volatile int8_t x388 = -1;
	volatile int32_t t96 = 79792;

	t96 = ((x385^x386)-(x387==x388));

	if (t96 != 6961) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = 294881559;

	t97 = ((x389^x390)-(x391==x392));

	if (t97 != -9223372036559894249LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	static int16_t x394 = -1;
	int16_t x395 = INT16_MAX;
	static volatile int32_t t98 = 373781;

	t98 = ((x393^x394)-(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = 1U;
	int32_t x399 = -49839;
	int64_t x400 = INT64_MIN;
	volatile int64_t t99 = 1LL;

	t99 = ((x397^x398)-(x399==x400));

	if (t99 != -63935187127956LL) { NG(); } else { ; }
	
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

