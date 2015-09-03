#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = INT8_MIN;
static int32_t t0 = -450750454;
static int64_t x7 = -1LL;
int16_t x10 = -2265;
uint32_t x16 = UINT32_MAX;
volatile uint8_t x22 = 50U;
int32_t x31 = 410008834;
uint32_t x34 = UINT32_MAX;
volatile uint8_t x40 = 7U;
int32_t t10 = 235902;
static int8_t x45 = INT8_MIN;
int64_t x59 = 972053LL;
volatile int32_t t15 = 7;
int16_t x71 = INT16_MIN;
uint32_t x72 = UINT32_MAX;
volatile int32_t t17 = 178;
volatile int16_t x81 = INT16_MIN;
uint16_t x84 = UINT16_MAX;
int16_t x87 = INT16_MIN;
static volatile int64_t x94 = INT64_MAX;
int32_t x95 = -1;
static volatile int32_t x101 = 3026;
int32_t t25 = 7024138;
int16_t x105 = INT16_MIN;
int8_t x109 = INT8_MIN;
static uint16_t x111 = UINT16_MAX;
uint32_t x117 = UINT32_MAX;
static uint64_t x119 = UINT64_MAX;
int64_t x120 = INT64_MAX;
static uint32_t x122 = 8U;
int32_t t30 = -26;
static int64_t x127 = -71808495456929LL;
int32_t t31 = -113101;
volatile int8_t x132 = INT8_MAX;
static volatile int32_t t32 = 132026090;
volatile int32_t t33 = 2;
volatile int32_t x139 = -250282;
int8_t x149 = INT8_MAX;
int8_t x151 = 28;
int64_t x163 = INT64_MAX;
static uint8_t x167 = 56U;
uint16_t x180 = 1U;
static volatile int32_t x183 = -5;
int64_t x184 = 12109095896274089LL;
int32_t x191 = 15761;
static int16_t x198 = INT16_MIN;
volatile int64_t x199 = INT64_MIN;
uint64_t x202 = UINT64_MAX;
static int8_t x203 = INT8_MAX;
int8_t x205 = -1;
uint32_t x209 = 1054282307U;
uint64_t x216 = 1LLU;
static int16_t x217 = 2023;
uint32_t x225 = 249170615U;
uint32_t x231 = 37042U;
int64_t x235 = -3492267LL;
static uint32_t x239 = UINT32_MAX;
int16_t x240 = -1;
int32_t x246 = INT32_MAX;
uint64_t x250 = 1173298LLU;
int64_t x252 = -1LL;
static uint8_t x261 = 20U;
int8_t x264 = -1;
int16_t x273 = INT16_MAX;
volatile int32_t x276 = INT32_MAX;
uint8_t x279 = 31U;
volatile int32_t t68 = -1;
uint8_t x285 = 1U;
uint16_t x287 = 2107U;
int32_t x296 = INT32_MIN;
int16_t x298 = INT16_MIN;
static volatile uint32_t x303 = UINT32_MAX;
int32_t x321 = -1;
int32_t x327 = INT32_MIN;
static volatile int32_t x340 = INT32_MIN;
uint16_t x342 = 247U;
uint64_t x343 = UINT64_MAX;
static int32_t x347 = INT32_MAX;
int32_t t83 = 62791;
int32_t t84 = -57130;
static int8_t x355 = -1;
static volatile int32_t t88 = -31142;
static int16_t x372 = -101;
static int8_t x381 = INT8_MIN;
static uint16_t x383 = 0U;
int64_t x385 = 718129LL;
int32_t t93 = 3023;
int32_t x389 = -29785;
uint64_t x390 = UINT64_MAX;
uint8_t x391 = 34U;
int32_t x396 = INT32_MAX;
volatile int32_t t95 = -44849850;
volatile int64_t x403 = INT64_MIN;
int8_t x411 = -1;


void f0(void) {
	static int8_t x1 = -1;
	int64_t x2 = -14365038606068283LL;
	int16_t x4 = -1;

	t0 = ((x1^x2)==(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -2;
	int32_t x6 = INT32_MIN;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -1;

	t1 = ((x5^x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1;
	volatile uint32_t x11 = 75U;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = 6057444;

	t2 = ((x9^x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int8_t x14 = -1;
	volatile int8_t x15 = INT8_MIN;
	static volatile int32_t t3 = 0;

	t3 = ((x13^x14)==(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static volatile int16_t x18 = -2819;
	uint16_t x19 = UINT16_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -213095698;

	t4 = ((x17^x18)==(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x23 = 5;
	volatile uint32_t x24 = 47470698U;
	int32_t t5 = -5332;

	t5 = ((x21^x22)==(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 17196649758529LL;
	static int64_t x26 = INT64_MIN;
	int8_t x27 = -1;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t6 = 993916261;

	t6 = ((x25^x26)==(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 3328301;
	int16_t x30 = INT16_MIN;
	int16_t x32 = 258;
	volatile int32_t t7 = -546819;

	t7 = ((x29^x30)==(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1263942;
	static volatile int64_t x35 = -1LL;
	static uint8_t x36 = 1U;
	int32_t t8 = 237281;

	t8 = ((x33^x34)==(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int64_t x38 = INT64_MIN;
	int64_t x39 = -1LL;
	volatile int32_t t9 = -2008;

	t9 = ((x37^x38)==(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 0;
	uint8_t x42 = 1U;
	int32_t x43 = INT32_MIN;
	uint32_t x44 = 1894U;

	t10 = ((x41^x42)==(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x46 = 106U;
	static int8_t x47 = 0;
	static int32_t x48 = -1;
	volatile int32_t t11 = 75002;

	t11 = ((x45^x46)==(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 528812046079766LLU;
	int8_t x50 = 11;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = -105108696315LL;
	static int32_t t12 = -2938473;

	t12 = ((x49^x50)==(x51%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = 9;
	int64_t x54 = INT64_MIN;
	static int64_t x55 = 498144068LL;
	uint16_t x56 = 23006U;
	static volatile int32_t t13 = -6793673;

	t13 = ((x53^x54)==(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	uint32_t x58 = UINT32_MAX;
	static int8_t x60 = -1;
	int32_t t14 = 50491818;

	t14 = ((x57^x58)==(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 0U;
	static uint64_t x62 = 630602530LLU;
	volatile int64_t x63 = -16294837389437631LL;
	int8_t x64 = -1;

	t15 = ((x61^x62)==(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = UINT8_MAX;
	volatile int64_t x66 = 11537LL;
	static int16_t x67 = -1;
	uint64_t x68 = 1LLU;
	int32_t t16 = 31;

	t16 = ((x65^x66)==(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 1683;
	uint16_t x70 = 47U;

	t17 = ((x69^x70)==(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 664572280144510414LLU;
	volatile uint64_t x74 = 1906124LLU;
	volatile int16_t x75 = -3312;
	static uint32_t x76 = UINT32_MAX;
	static int32_t t18 = -112287;

	t18 = ((x73^x74)==(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int64_t x78 = 739555LL;
	volatile uint16_t x79 = UINT16_MAX;
	volatile int8_t x80 = -25;
	static volatile int32_t t19 = -30;

	t19 = ((x77^x78)==(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -1;
	volatile int32_t x83 = 14765583;
	int32_t t20 = -13430271;

	t20 = ((x81^x82)==(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MAX;
	volatile int8_t x86 = INT8_MAX;
	int16_t x88 = -729;
	volatile int32_t t21 = 893928;

	t21 = ((x85^x86)==(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	int8_t x90 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	volatile int32_t x92 = INT32_MAX;
	int32_t t22 = -50449009;

	t22 = ((x89^x90)==(x91%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = -4410292;

	t23 = ((x93^x94)==(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 22;
	static int64_t x98 = INT64_MIN;
	volatile int64_t x99 = INT64_MIN;
	int64_t x100 = -54524958272LL;
	volatile int32_t t24 = 0;

	t24 = ((x97^x98)==(x99%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x102 = -1;
	uint8_t x103 = 68U;
	uint8_t x104 = UINT8_MAX;

	t25 = ((x101^x102)==(x103%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x106 = 1119649163552LLU;
	int8_t x107 = INT8_MIN;
	static int16_t x108 = INT16_MAX;
	volatile int32_t t26 = 18;

	t26 = ((x105^x106)==(x107%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = 1;
	uint16_t x112 = 11U;
	int32_t t27 = 14;

	t27 = ((x109^x110)==(x111%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	static uint8_t x114 = 1U;
	int16_t x115 = INT16_MIN;
	volatile int16_t x116 = INT16_MIN;
	static int32_t t28 = 0;

	t28 = ((x113^x114)==(x115%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MAX;
	static int32_t t29 = 3;

	t29 = ((x117^x118)==(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static int64_t x123 = -1LL;
	int16_t x124 = INT16_MIN;

	t30 = ((x121^x122)==(x123%x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = UINT8_MAX;
	static int64_t x128 = -1LL;

	t31 = ((x125^x126)==(x127%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x130 = 6U;
	static int8_t x131 = INT8_MIN;

	t32 = ((x129^x130)==(x131%x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	volatile int8_t x134 = INT8_MIN;
	volatile int32_t x135 = INT32_MIN;
	uint64_t x136 = UINT64_MAX;

	t33 = ((x133^x134)==(x135%x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int16_t x138 = 1;
	int16_t x140 = INT16_MIN;
	int32_t t34 = -6231142;

	t34 = ((x137^x138)==(x139%x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 605U;
	uint32_t x142 = 869U;
	int64_t x143 = INT64_MIN;
	static int32_t x144 = INT32_MAX;
	int32_t t35 = -5;

	t35 = ((x141^x142)==(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MIN;
	volatile int64_t x147 = INT64_MIN;
	int8_t x148 = 33;
	int32_t t36 = 1928;

	t36 = ((x145^x146)==(x147%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = -3;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 3347616;

	t37 = ((x149^x150)==(x151%x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MAX;
	static uint8_t x154 = UINT8_MAX;
	volatile uint16_t x155 = 248U;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = -9166;

	t38 = ((x153^x154)==(x155%x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 11U;
	static int8_t x158 = INT8_MIN;
	static volatile int8_t x159 = -3;
	int32_t x160 = 1;
	int32_t t39 = -1;

	t39 = ((x157^x158)==(x159%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 1U;
	volatile int64_t x162 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 13367;

	t40 = ((x161^x162)==(x163%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 58668578LLU;
	int64_t x166 = -7016689028280909LL;
	int64_t x168 = 68844339738418792LL;
	volatile int32_t t41 = 2870976;

	t41 = ((x165^x166)==(x167%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 12689U;
	uint8_t x170 = UINT8_MAX;
	volatile uint8_t x171 = 2U;
	int32_t x172 = 176;
	volatile int32_t t42 = 21;

	t42 = ((x169^x170)==(x171%x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 11418521LL;
	int16_t x174 = -1;
	int64_t x175 = INT64_MAX;
	volatile int64_t x176 = 65653112143902LL;
	int32_t t43 = 132929;

	t43 = ((x173^x174)==(x175%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	uint16_t x178 = UINT16_MAX;
	volatile int16_t x179 = 241;
	int32_t t44 = 0;

	t44 = ((x177^x178)==(x179%x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 1203763181U;
	static volatile int16_t x182 = -102;
	int32_t t45 = 0;

	t45 = ((x181^x182)==(x183%x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1832520LL;
	int8_t x186 = 1;
	int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;
	static int32_t t46 = 77;

	t46 = ((x185^x186)==(x187%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 1260447199U;
	uint64_t x190 = 171287LLU;
	int32_t x192 = -112;
	volatile int32_t t47 = -119914;

	t47 = ((x189^x190)==(x191%x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -8178;
	uint8_t x194 = 105U;
	uint32_t x195 = 90489U;
	static volatile uint32_t x196 = 2208964U;
	volatile int32_t t48 = -3398;

	t48 = ((x193^x194)==(x195%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 1989309647681668LLU;
	int8_t x200 = INT8_MIN;
	int32_t t49 = 73691873;

	t49 = ((x197^x198)==(x199%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x204 = 258907127U;
	volatile int32_t t50 = 5;

	t50 = ((x201^x202)==(x203%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -438;
	int16_t x207 = -1;
	static uint64_t x208 = 6072752LLU;
	int32_t t51 = -1752;

	t51 = ((x205^x206)==(x207%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MAX;
	int16_t x211 = -1;
	uint64_t x212 = 947883257277787LLU;
	static volatile int32_t t52 = -35;

	t52 = ((x209^x210)==(x211%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int8_t x214 = 0;
	static int32_t x215 = 33779993;
	volatile int32_t t53 = -467;

	t53 = ((x213^x214)==(x215%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x218 = 517956109257076178LL;
	static int32_t x219 = 460151277;
	uint8_t x220 = 5U;
	int32_t t54 = 1128;

	t54 = ((x217^x218)==(x219%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	uint16_t x222 = 1U;
	volatile int32_t x223 = -1;
	volatile int64_t x224 = INT64_MIN;
	volatile int32_t t55 = 2;

	t55 = ((x221^x222)==(x223%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = UINT64_MAX;
	volatile uint16_t x227 = 1539U;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t56 = -247918;

	t56 = ((x225^x226)==(x227%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = 1;
	uint16_t x230 = 256U;
	static uint32_t x232 = UINT32_MAX;
	static int32_t t57 = 10465;

	t57 = ((x229^x230)==(x231%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 40416LLU;
	uint8_t x234 = UINT8_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t58 = -43;

	t58 = ((x233^x234)==(x235%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 11U;
	int16_t x238 = 126;
	volatile int32_t t59 = -38372165;

	t59 = ((x237^x238)==(x239%x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -145447198445LL;
	int8_t x242 = INT8_MIN;
	static uint16_t x243 = 2275U;
	int16_t x244 = INT16_MIN;
	int32_t t60 = -17612;

	t60 = ((x241^x242)==(x243%x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -1LL;
	static uint32_t x247 = 320801142U;
	int8_t x248 = -1;
	static int32_t t61 = -122;

	t61 = ((x245^x246)==(x247%x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	static volatile int16_t x251 = INT16_MIN;
	volatile int32_t t62 = 16774563;

	t62 = ((x249^x250)==(x251%x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -153LL;
	static int32_t x254 = INT32_MIN;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = INT64_MIN;
	static int32_t t63 = 606859;

	t63 = ((x253^x254)==(x255%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = 47697483U;
	static int64_t x258 = -138LL;
	uint64_t x259 = 988881678477LLU;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 3854834;

	t64 = ((x257^x258)==(x259%x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MAX;
	static int8_t x263 = INT8_MIN;
	static volatile int32_t t65 = -5221;

	t65 = ((x261^x262)==(x263%x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = -3;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = 5U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t66 = -29132;

	t66 = ((x269^x270)==(x271%x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x274 = -1;
	uint64_t x275 = 50396835074LLU;
	static volatile int32_t t67 = -2690553;

	t67 = ((x273^x274)==(x275%x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	int64_t x280 = 610LL;

	t68 = ((x277^x278)==(x279%x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = 40065;
	int64_t x282 = -1LL;
	int32_t x283 = -1;
	static int16_t x284 = 553;
	volatile int32_t t69 = -1532516;

	t69 = ((x281^x282)==(x283%x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x286 = INT64_MIN;
	int16_t x288 = -4146;
	int32_t t70 = -63;

	t70 = ((x285^x286)==(x287%x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = UINT16_MAX;
	volatile uint64_t x290 = 101519852LLU;
	int64_t x291 = INT64_MIN;
	volatile uint64_t x292 = UINT64_MAX;
	int32_t t71 = -54355;

	t71 = ((x289^x290)==(x291%x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = INT32_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	static volatile int32_t x295 = 529;
	int32_t t72 = 293;

	t72 = ((x293^x294)==(x295%x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x297 = 12309743059LLU;
	static int16_t x299 = INT16_MIN;
	volatile int16_t x300 = 291;
	int32_t t73 = 10;

	t73 = ((x297^x298)==(x299%x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x301 = 1275853LLU;
	uint64_t x302 = 44991108LLU;
	int8_t x304 = -12;
	static volatile int32_t t74 = -6134;

	t74 = ((x301^x302)==(x303%x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = UINT16_MAX;
	static uint32_t x306 = 2071U;
	uint8_t x307 = 6U;
	int64_t x308 = 25806LL;
	volatile int32_t t75 = -60776156;

	t75 = ((x305^x306)==(x307%x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MIN;
	volatile uint8_t x319 = UINT8_MAX;
	int64_t x320 = -1LL;
	static int32_t t76 = 6026;

	t76 = ((x317^x318)==(x319%x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x322 = -1;
	int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	static int32_t t77 = 1;

	t77 = ((x321^x322)==(x323%x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x325 = 40502728900LL;
	uint32_t x326 = 26690720U;
	uint64_t x328 = 6LLU;
	int32_t t78 = 9097304;

	t78 = ((x325^x326)==(x327%x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x329 = -1LL;
	int16_t x330 = 10877;
	int32_t x331 = INT32_MIN;
	int64_t x332 = INT64_MIN;
	int32_t t79 = -13655214;

	t79 = ((x329^x330)==(x331%x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = -7;
	static int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t80 = 2095186;

	t80 = ((x333^x334)==(x335%x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x337 = -1LL;
	uint32_t x338 = UINT32_MAX;
	int8_t x339 = -6;
	int32_t t81 = -89;

	t81 = ((x337^x338)==(x339%x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MAX;
	static int32_t x344 = INT32_MAX;
	volatile int32_t t82 = -19916935;

	t82 = ((x341^x342)==(x343%x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = 33U;
	volatile int8_t x346 = INT8_MAX;
	static int8_t x348 = -1;

	t83 = ((x345^x346)==(x347%x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x349 = INT16_MAX;
	int64_t x350 = INT64_MIN;
	uint8_t x351 = UINT8_MAX;
	static int64_t x352 = 1032751740LL;

	t84 = ((x349^x350)==(x351%x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	int64_t x354 = -3178706LL;
	static int64_t x356 = -146LL;
	int32_t t85 = 230352943;

	t85 = ((x353^x354)==(x355%x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x357 = -19;
	static int16_t x358 = INT16_MIN;
	volatile int64_t x359 = INT64_MIN;
	uint16_t x360 = 9U;
	int32_t t86 = -5;

	t86 = ((x357^x358)==(x359%x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MIN;
	static uint8_t x362 = 3U;
	uint64_t x363 = 7766257081492251566LLU;
	int8_t x364 = INT8_MAX;
	volatile int32_t t87 = -11052;

	t87 = ((x361^x362)==(x363%x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = 0;
	uint32_t x366 = 1438502607U;
	static int64_t x367 = -1LL;
	int16_t x368 = INT16_MIN;

	t88 = ((x365^x366)==(x367%x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = UINT8_MAX;
	static int8_t x370 = INT8_MAX;
	int32_t x371 = -3947835;
	int32_t t89 = -1799;

	t89 = ((x369^x370)==(x371%x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = 53193443LL;
	int8_t x374 = INT8_MIN;
	static uint16_t x375 = UINT16_MAX;
	volatile uint32_t x376 = 1U;
	int32_t t90 = 4927;

	t90 = ((x373^x374)==(x375%x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x377 = 109800U;
	static int32_t x378 = 135;
	int32_t x379 = 245846;
	int64_t x380 = 3LL;
	int32_t t91 = 62;

	t91 = ((x377^x378)==(x379%x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x382 = 7377198160LLU;
	uint64_t x384 = 981289384936485801LLU;
	volatile int32_t t92 = 1;

	t92 = ((x381^x382)==(x383%x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x386 = 5;
	uint64_t x387 = 492268921466094586LLU;
	int8_t x388 = -1;

	t93 = ((x385^x386)==(x387%x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x392 = UINT16_MAX;
	volatile int32_t t94 = 2;

	t94 = ((x389^x390)==(x391%x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x393 = INT16_MAX;
	int64_t x394 = -147690LL;
	static volatile int32_t x395 = -1;

	t95 = ((x393^x394)==(x395%x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x398 = -1307;
	static int16_t x399 = INT16_MAX;
	int8_t x400 = -1;
	volatile int32_t t96 = -228;

	t96 = ((x397^x398)==(x399%x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x401 = 1U;
	uint32_t x402 = UINT32_MAX;
	static int8_t x404 = INT8_MAX;
	int32_t t97 = 0;

	t97 = ((x401^x402)==(x403%x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x405 = -1;
	int8_t x406 = -1;
	int64_t x407 = -1LL;
	volatile int32_t x408 = INT32_MIN;
	volatile int32_t t98 = -67;

	t98 = ((x405^x406)==(x407%x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	volatile int32_t x410 = INT32_MAX;
	int32_t x412 = INT32_MIN;
	volatile int32_t t99 = -3;

	t99 = ((x409^x410)==(x411%x412));

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

