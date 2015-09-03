#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x6 = 45U;
uint32_t t1 = 1379U;
volatile int64_t t2 = 26LL;
int64_t x15 = INT64_MIN;
volatile int64_t t5 = -216933LL;
static uint16_t x31 = UINT16_MAX;
uint32_t x33 = UINT32_MAX;
int32_t x35 = -1;
volatile int32_t x36 = 0;
volatile int32_t x37 = INT32_MIN;
int16_t x46 = -506;
int64_t x51 = -1LL;
uint8_t x52 = 4U;
volatile int64_t x60 = INT64_MIN;
uint16_t x67 = 61U;
volatile int64_t t17 = 2443LL;
int64_t x97 = 9541466833873LL;
int16_t x99 = 14;
int16_t x100 = -1;
int16_t x101 = INT16_MIN;
static volatile int16_t x104 = INT16_MIN;
volatile int32_t t24 = 57;
uint16_t x110 = 948U;
int64_t x112 = -20816562581LL;
static int32_t t26 = -807;
uint16_t x119 = UINT16_MAX;
uint16_t x123 = UINT16_MAX;
int8_t x124 = INT8_MAX;
uint32_t x125 = 2037U;
static uint16_t x126 = UINT16_MAX;
volatile uint32_t t29 = 1451U;
volatile int64_t x134 = -244LL;
int64_t t31 = -1035764068LL;
int8_t x137 = 49;
static int32_t x138 = -1;
static int32_t x141 = INT32_MIN;
volatile uint64_t t35 = UINT64_MAX;
int8_t x159 = INT8_MAX;
int32_t x162 = -564;
uint16_t x167 = 2382U;
int32_t x168 = -11107;
int16_t x170 = -1;
static int16_t x173 = INT16_MIN;
uint64_t x174 = 30591530670LLU;
uint16_t x176 = 28497U;
static uint64_t t40 = 64265LLU;
int64_t x178 = -41329364LL;
static uint64_t t41 = 6104534844471276880LLU;
int32_t x183 = INT32_MIN;
int32_t x184 = INT32_MIN;
uint32_t t42 = 178U;
int32_t x189 = INT32_MAX;
int8_t x194 = INT8_MAX;
int8_t x195 = INT8_MIN;
static int16_t x196 = 851;
int8_t x203 = INT8_MIN;
uint8_t x207 = UINT8_MAX;
int8_t x208 = -1;
volatile int32_t t48 = -55028;
int32_t x222 = INT32_MIN;
static int8_t x229 = 27;
int64_t x230 = INT64_MIN;
volatile int32_t x233 = 16325;
int32_t x250 = 944988708;
volatile int32_t t61 = 5067;
int8_t x264 = INT8_MAX;
volatile int64_t x265 = INT64_MAX;
volatile int64_t x266 = INT64_MAX;
volatile uint64_t t63 = 644654529LLU;
volatile int64_t x274 = -3891073413713835859LL;
static int64_t x280 = -6747605047642010LL;
volatile int8_t x297 = -1;
int8_t x302 = INT8_MAX;
int16_t x308 = -1;
int64_t x311 = -967189304115769001LL;
int16_t x312 = 5653;
static int64_t t72 = -2315882LL;
int8_t x314 = -17;
int16_t x316 = INT16_MIN;
uint64_t x318 = 1012LLU;
volatile int32_t x319 = INT32_MIN;
int16_t x320 = -22;
static uint8_t x325 = UINT8_MAX;
int8_t x328 = INT8_MIN;
static uint8_t x329 = UINT8_MAX;
volatile int32_t x334 = INT32_MAX;
volatile int32_t x340 = -44;
volatile uint32_t x342 = 2547799U;
int64_t x343 = 1683709766LL;
volatile int16_t x345 = -282;
int32_t x348 = -1;
volatile int16_t x349 = INT16_MAX;
uint64_t x350 = UINT64_MAX;
int16_t x359 = -1;
uint8_t x362 = 3U;
int16_t x364 = 3;
int32_t t85 = 1254;
int32_t x366 = INT32_MIN;
uint16_t x374 = UINT16_MAX;
volatile int64_t x377 = -2683486723LL;
static int32_t x378 = -1;
static int64_t t89 = 41486333464308LL;
int32_t x386 = -25521;
int16_t x390 = -1;
uint8_t x394 = 40U;
int8_t x397 = INT8_MIN;
uint32_t x398 = 305U;
volatile uint32_t t94 = 1U;
volatile uint64_t x409 = 81026751741LLU;
volatile uint8_t x419 = 13U;


void f0(void) {
	volatile uint16_t x1 = 247U;
	uint8_t x2 = UINT8_MAX;
	static volatile uint8_t x3 = 4U;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (((x1^x2)&x3)+x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = INT8_MAX;
	int16_t x7 = INT16_MIN;
	static uint32_t x8 = 172U;

	t1 = (((x5^x6)&x7)+x8);

	if (t1 != 172U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	static volatile int64_t x11 = 1857607LL;
	int8_t x12 = INT8_MIN;

	t2 = (((x9^x10)&x11)+x12);

	if (t2 != -57LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -3237;
	int8_t x14 = 40;
	uint32_t x16 = 9105U;
	volatile int64_t t3 = -15LL;

	t3 = (((x13^x14)&x15)+x16);

	if (t3 != -9223372036854766703LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x18 = -1130819718640LL;
	int16_t x19 = INT16_MAX;
	static int64_t x20 = -1LL;
	int64_t t4 = -39LL;

	t4 = (((x17^x18)&x19)+x20);

	if (t4 != 29422LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -288506924051LL;
	int64_t x26 = INT64_MIN;
	int8_t x27 = -1;
	int32_t x28 = INT32_MIN;

	t5 = (((x25^x26)&x27)+x28);

	if (t5 != 9223371746200368109LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x29 = 921169168U;
	static int64_t x30 = 160843535596888LL;
	int16_t x32 = -1;
	volatile int64_t t6 = 101021LL;

	t6 = (((x29^x30)&x31)+x32);

	if (t6 != 20551LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x34 = INT64_MIN;
	static int64_t t7 = 12367274LL;

	t7 = (((x33^x34)&x35)+x36);

	if (t7 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -31125041252360LL;
	int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MIN;
	int64_t t8 = 634591768147709309LL;

	t8 = (((x37^x38)&x39)+x40);

	if (t8 != 31124067219328LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int32_t x42 = INT32_MAX;
	static volatile int8_t x43 = -3;
	volatile uint8_t x44 = UINT8_MAX;
	volatile int32_t t9 = 2060;

	t9 = (((x41^x42)&x43)+x44);

	if (t9 != -2147483393) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int8_t x47 = 0;
	int64_t x48 = INT64_MIN;
	int64_t t10 = INT64_MIN;

	t10 = (((x45^x46)&x47)+x48);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	static volatile int32_t x50 = 4851;
	int64_t t11 = -8827140281LL;

	t11 = (((x49^x50)&x51)+x52);

	if (t11 != -9223372036854770953LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x53 = 2927785019LLU;
	static int32_t x54 = INT32_MIN;
	int64_t x55 = -1LL;
	static int16_t x56 = -3482;
	volatile uint64_t t12 = 13831LLU;

	t12 = (((x53^x54)&x55)+x56);

	if (t12 != 18446744070194882209LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = 116U;
	static int32_t x58 = -6;
	int8_t x59 = 1;
	int64_t t13 = INT64_MIN;

	t13 = (((x57^x58)&x59)+x60);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 142U;
	volatile uint64_t x62 = 41320704622687680LLU;
	int8_t x63 = -1;
	int64_t x64 = INT64_MIN;
	uint64_t t14 = 857508818LLU;

	t14 = (((x61^x62)&x63)+x64);

	if (t14 != 9264692741477463374LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = -295936416005389029LL;
	volatile uint8_t x66 = 9U;
	int64_t x68 = INT64_MIN;
	int64_t t15 = -2330425139LL;

	t15 = (((x65^x66)&x67)+x68);

	if (t15 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -1LL;
	int8_t x70 = -1;
	uint64_t x71 = 13549171330124490LLU;
	int8_t x72 = 1;
	static uint64_t t16 = 407715LLU;

	t16 = (((x69^x70)&x71)+x72);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -1830782496225551417LL;
	int64_t x74 = -39326466438LL;
	uint16_t x75 = UINT16_MAX;
	static int64_t x76 = INT64_MIN;

	t17 = (((x73^x74)&x75)+x76);

	if (t17 != -9223372036854733379LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = UINT8_MAX;
	int8_t x78 = -1;
	static volatile uint16_t x79 = 23240U;
	int32_t x80 = INT32_MIN;
	int32_t t18 = -1;

	t18 = (((x77^x78)&x79)+x80);

	if (t18 != -2147460608) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = 75;
	volatile int32_t x83 = INT32_MAX;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t19 = 268798511LLU;

	t19 = (((x81^x82)&x83)+x84);

	if (t19 != 74LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = -35;
	volatile int64_t x86 = -20681LL;
	uint8_t x87 = 0U;
	int8_t x88 = INT8_MIN;
	static volatile int64_t t20 = -5285LL;

	t20 = (((x85^x86)&x87)+x88);

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 229LLU;
	volatile int32_t x90 = 183029;
	int32_t x91 = INT32_MAX;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t21 = 15439224994737LLU;

	t21 = (((x89^x90)&x91)+x92);

	if (t21 != 182672LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 19U;
	int64_t x94 = INT64_MIN;
	uint16_t x95 = 25940U;
	static int16_t x96 = 4298;
	static int64_t t22 = 114396LL;

	t22 = (((x93^x94)&x95)+x96);

	if (t22 != 4314LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = INT8_MAX;
	volatile int64_t t23 = 178797702662978LL;

	t23 = (((x97^x98)&x99)+x100);

	if (t23 != 13LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x102 = INT8_MAX;
	int16_t x103 = INT16_MIN;

	t24 = (((x101^x102)&x103)+x104);

	if (t24 != -65536) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int32_t x111 = INT32_MAX;
	static int64_t t25 = 0LL;

	t25 = (((x109^x110)&x111)+x112);

	if (t25 != -20816561738LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 160U;
	volatile int32_t x114 = INT32_MIN;
	int8_t x115 = -3;
	int8_t x116 = 41;

	t26 = (((x113^x114)&x115)+x116);

	if (t26 != -2147483447) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = INT8_MIN;
	static int16_t x118 = INT16_MAX;
	static int64_t x120 = 1713LL;
	int64_t t27 = -402889369107894LL;

	t27 = (((x117^x118)&x119)+x120);

	if (t27 != 34608LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = -43528;
	int32_t x122 = INT32_MIN;
	volatile int32_t t28 = -306064250;

	t28 = (((x121^x122)&x123)+x124);

	if (t28 != 22135) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x127 = 1;
	int16_t x128 = 13908;

	t29 = (((x125^x126)&x127)+x128);

	if (t29 != 13908U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	int16_t x130 = INT16_MIN;
	volatile int32_t x131 = 48376508;
	int8_t x132 = 11;
	volatile int32_t t30 = 18160;

	t30 = (((x129^x130)&x131)+x132);

	if (t30 != 48365767) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x133 = 3U;
	volatile uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MIN;

	t31 = (((x133^x134)&x135)+x136);

	if (t31 != -113LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x139 = INT64_MIN;
	int8_t x140 = 1;
	volatile int64_t t32 = 42248LL;

	t32 = (((x137^x138)&x139)+x140);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x142 = UINT16_MAX;
	uint32_t x143 = 7U;
	uint8_t x144 = 7U;
	volatile uint32_t t33 = 14406660U;

	t33 = (((x141^x142)&x143)+x144);

	if (t33 != 14U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x145 = UINT8_MAX;
	int32_t x146 = INT32_MIN;
	volatile int64_t x147 = -1LL;
	volatile int16_t x148 = 4;
	int64_t t34 = 181188035LL;

	t34 = (((x145^x146)&x147)+x148);

	if (t34 != -2147483389LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x149 = UINT16_MAX;
	uint16_t x150 = 1276U;
	volatile uint8_t x151 = 40U;
	uint64_t x152 = UINT64_MAX;

	t35 = (((x149^x150)&x151)+x152);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = -7;
	volatile uint64_t x160 = UINT64_MAX;
	uint64_t t36 = 27944988522728LLU;

	t36 = (((x157^x158)&x159)+x160);

	if (t36 != 120LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = 1270917731LL;
	int8_t x163 = INT8_MIN;
	static uint8_t x164 = 2U;
	volatile int64_t t37 = -82019881016LL;

	t37 = (((x161^x162)&x163)+x164);

	if (t37 != -1270917246LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -11;
	int16_t x166 = INT16_MIN;
	static int32_t t38 = -65963026;

	t38 = (((x165^x166)&x167)+x168);

	if (t38 != -8735) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x169 = -7587;
	int64_t x171 = 389502LL;
	int64_t x172 = INT64_MIN;
	volatile int64_t t39 = -2082690LL;

	t39 = (((x169^x170)&x171)+x172);

	if (t39 != -9223372036854771422LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x175 = 47526257LLU;

	t40 = (((x173^x174)&x175)+x176);

	if (t40 != 9478001LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MAX;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = -1;

	t41 = (((x177^x178)&x179)+x180);

	if (t41 != 18446744071603397330LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -1;
	uint32_t x182 = 8702U;

	t42 = (((x181^x182)&x183)+x184);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = UINT8_MAX;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	static volatile uint32_t t43 = 56U;

	t43 = (((x185^x186)&x187)+x188);

	if (t43 != 2147450880U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = -1;
	uint32_t x191 = 3092486U;
	int64_t x192 = -6LL;
	int64_t t44 = 9780763605513LL;

	t44 = (((x189^x190)&x191)+x192);

	if (t44 != -6LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = UINT32_MAX;
	uint32_t t45 = 253U;

	t45 = (((x193^x194)&x195)+x196);

	if (t45 != 723U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = -1;
	int8_t x198 = -1;
	uint8_t x199 = 5U;
	static volatile int16_t x200 = INT16_MIN;
	volatile int32_t t46 = -1;

	t46 = (((x197^x198)&x199)+x200);

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x201 = UINT16_MAX;
	static volatile int32_t x202 = INT32_MIN;
	volatile uint8_t x204 = UINT8_MAX;
	int32_t t47 = 1;

	t47 = (((x201^x202)&x203)+x204);

	if (t47 != -2147417985) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -1;
	uint8_t x206 = UINT8_MAX;

	t48 = (((x205^x206)&x207)+x208);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x209 = 82302332U;
	uint64_t x210 = 4LLU;
	uint16_t x211 = 17U;
	int64_t x212 = INT64_MAX;
	uint64_t t49 = 1703017668461LLU;

	t49 = (((x209^x210)&x211)+x212);

	if (t49 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = 1763U;
	int8_t x214 = INT8_MAX;
	volatile int16_t x215 = 1;
	int64_t x216 = INT64_MAX;
	volatile int64_t t50 = INT64_MAX;

	t50 = (((x213^x214)&x215)+x216);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x217 = 39U;
	int8_t x218 = -45;
	int8_t x219 = INT8_MIN;
	int8_t x220 = 5;
	int32_t t51 = 0;

	t51 = (((x217^x218)&x219)+x220);

	if (t51 != -123) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = -1;
	volatile uint32_t x223 = 189572992U;
	static volatile int8_t x224 = INT8_MIN;
	uint32_t t52 = 119949U;

	t52 = (((x221^x222)&x223)+x224);

	if (t52 != 189572864U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MAX;
	volatile int16_t x226 = 1;
	int8_t x227 = -6;
	static uint64_t x228 = 4776522452LLU;
	volatile uint64_t t53 = 4036736364528492074LLU;

	t53 = (((x225^x226)&x227)+x228);

	if (t53 != 9223372041631298254LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x231 = 1778;
	uint16_t x232 = 3U;
	volatile int64_t t54 = -1LL;

	t54 = (((x229^x230)&x231)+x232);

	if (t54 != 21LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x234 = 61LLU;
	uint16_t x235 = 25930U;
	int64_t x236 = -1LL;
	static volatile uint64_t t55 = 60835884LLU;

	t55 = (((x233^x234)&x235)+x236);

	if (t55 != 9543LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x237 = INT32_MAX;
	uint16_t x238 = 1429U;
	int64_t x239 = -1LL;
	static volatile int8_t x240 = -55;
	static int64_t t56 = 0LL;

	t56 = (((x237^x238)&x239)+x240);

	if (t56 != 2147482163LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x241 = -1;
	int32_t x242 = -1;
	int16_t x243 = -166;
	uint8_t x244 = 27U;
	static int32_t t57 = 1976172;

	t57 = (((x241^x242)&x243)+x244);

	if (t57 != 27) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = UINT32_MAX;
	uint16_t x246 = UINT16_MAX;
	uint16_t x247 = 159U;
	static uint32_t x248 = 69530U;
	static volatile uint32_t t58 = 32U;

	t58 = (((x245^x246)&x247)+x248);

	if (t58 != 69530U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x249 = UINT64_MAX;
	uint32_t x251 = 43654U;
	static int16_t x252 = -87;
	static uint64_t t59 = 60731631854LLU;

	t59 = (((x249^x250)&x251)+x252);

	if (t59 != 34859LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -1;
	int64_t x254 = -1LL;
	static uint8_t x255 = UINT8_MAX;
	int64_t x256 = -267434405733020LL;
	int64_t t60 = -70270LL;

	t60 = (((x253^x254)&x255)+x256);

	if (t60 != -267434405733020LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = 2U;
	int16_t x258 = -1;
	int8_t x259 = -1;
	static uint16_t x260 = 237U;

	t61 = (((x257^x258)&x259)+x260);

	if (t61 != 234) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x261 = INT64_MIN;
	int32_t x262 = 217229296;
	uint16_t x263 = 7U;
	volatile int64_t t62 = 1802LL;

	t62 = (((x261^x262)&x263)+x264);

	if (t62 != 127LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x267 = 474542404140356LLU;
	volatile int64_t x268 = INT64_MAX;

	t63 = (((x265^x266)&x267)+x268);

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	uint64_t x270 = 957445610708491LLU;
	volatile uint16_t x271 = UINT16_MAX;
	int64_t x272 = -1LL;
	volatile uint64_t t64 = 1368756545960410LLU;

	t64 = (((x269^x270)&x271)+x272);

	if (t64 != 40458LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = 7;
	int64_t x275 = -1LL;
	int8_t x276 = -18;
	static volatile int64_t t65 = -18756566LL;

	t65 = (((x273^x274)&x275)+x276);

	if (t65 != -3891073413713835880LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -1653;
	int8_t x278 = INT8_MIN;
	uint32_t x279 = 392252990U;
	volatile int64_t t66 = -515188LL;

	t66 = (((x277^x278)&x279)+x280);

	if (t66 != -6747605047640464LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = UINT8_MAX;
	int32_t x282 = 79537;
	int32_t x283 = INT32_MAX;
	uint8_t x284 = UINT8_MAX;
	int32_t t67 = -25256908;

	t67 = (((x281^x282)&x283)+x284);

	if (t67 != 79693) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MIN;
	uint16_t x287 = 3U;
	int64_t x288 = 279080902417309816LL;
	int64_t t68 = -226998590111972946LL;

	t68 = (((x285^x286)&x287)+x288);

	if (t68 != 279080902417309816LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x298 = 0;
	static uint16_t x299 = 886U;
	int16_t x300 = INT16_MAX;
	volatile int32_t t69 = 14499;

	t69 = (((x297^x298)&x299)+x300);

	if (t69 != 33653) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x303 = -5951963;
	int64_t x304 = -1LL;
	volatile int64_t t70 = 9174LL;

	t70 = (((x301^x302)&x303)+x304);

	if (t70 != 4289015295LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x305 = INT32_MIN;
	volatile int64_t x306 = INT64_MIN;
	int32_t x307 = -1;
	volatile int64_t t71 = -43LL;

	t71 = (((x305^x306)&x307)+x308);

	if (t71 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x309 = -1LL;
	static int64_t x310 = -1LL;

	t72 = (((x309^x310)&x311)+x312);

	if (t72 != 5653LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x313 = INT16_MAX;
	int8_t x315 = 7;
	static volatile int32_t t73 = 18;

	t73 = (((x313^x314)&x315)+x316);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = INT32_MIN;
	volatile uint64_t t74 = 4353608522777867092LLU;

	t74 = (((x317^x318)&x319)+x320);

	if (t74 != 18446744071562067946LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x321 = -31;
	uint32_t x322 = 35027U;
	uint8_t x323 = UINT8_MAX;
	uint64_t x324 = UINT64_MAX;
	static uint64_t t75 = 66927040637167LLU;

	t75 = (((x321^x322)&x323)+x324);

	if (t75 != 49LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x326 = UINT32_MAX;
	volatile int64_t x327 = -272921380LL;
	static int64_t t76 = -2LL;

	t76 = (((x325^x326)&x327)+x328);

	if (t76 != 4022045568LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x330 = 21037U;
	uint32_t x331 = UINT32_MAX;
	int8_t x332 = INT8_MAX;
	uint32_t t77 = 4785U;

	t77 = (((x329^x330)&x331)+x332);

	if (t77 != 21329U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x333 = 2539LLU;
	static volatile uint32_t x335 = 37519260U;
	volatile int64_t x336 = INT64_MIN;
	static volatile uint64_t t78 = 1LLU;

	t78 = (((x333^x334)&x335)+x336);

	if (t78 != 9223372036892292628LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x337 = UINT32_MAX;
	volatile uint16_t x338 = 0U;
	volatile uint16_t x339 = UINT16_MAX;
	static uint32_t t79 = 10837U;

	t79 = (((x337^x338)&x339)+x340);

	if (t79 != 65491U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MAX;
	int64_t x344 = INT64_MIN;
	static int64_t t80 = 13LL;

	t80 = (((x341^x342)&x343)+x344);

	if (t80 != -9223372036854628352LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x346 = INT32_MIN;
	int32_t x347 = -1;
	static volatile int32_t t81 = 15;

	t81 = (((x345^x346)&x347)+x348);

	if (t81 != 2147483365) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x351 = INT64_MIN;
	uint16_t x352 = 16U;
	volatile uint64_t t82 = 6396LLU;

	t82 = (((x349^x350)&x351)+x352);

	if (t82 != 9223372036854775824LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x353 = INT64_MAX;
	static int64_t x354 = INT64_MAX;
	uint16_t x355 = 1U;
	uint8_t x356 = 50U;
	volatile int64_t t83 = -208396318326LL;

	t83 = (((x353^x354)&x355)+x356);

	if (t83 != 50LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x357 = INT32_MIN;
	uint32_t x358 = UINT32_MAX;
	int32_t x360 = INT32_MIN;
	uint32_t t84 = UINT32_MAX;

	t84 = (((x357^x358)&x359)+x360);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x361 = 15;
	int16_t x363 = -80;

	t85 = (((x361^x362)&x363)+x364);

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x365 = 8237U;
	volatile int64_t x367 = -1LL;
	int32_t x368 = INT32_MIN;
	volatile int64_t t86 = -41614649308629298LL;

	t86 = (((x365^x366)&x367)+x368);

	if (t86 != -4294959059LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MIN;
	volatile int64_t x372 = INT64_MIN;
	static int64_t t87 = INT64_MIN;

	t87 = (((x369^x370)&x371)+x372);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x373 = INT64_MIN;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = 11031674617LLU;
	static uint64_t t88 = 3368LLU;

	t88 = (((x373^x374)&x375)+x376);

	if (t88 != 9223372047886450425LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x379 = INT8_MIN;
	static volatile int8_t x380 = 0;

	t89 = (((x377^x378)&x379)+x380);

	if (t89 != 2683486720LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = -1;
	uint8_t x382 = 6U;
	int16_t x383 = INT16_MIN;
	int64_t x384 = 536539884318LL;
	int64_t t90 = 2250731835LL;

	t90 = (((x381^x382)&x383)+x384);

	if (t90 != 536539851550LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x385 = 12;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = 1LLU;
	volatile uint64_t t91 = 1359922383265LLU;

	t91 = (((x385^x386)&x387)+x388);

	if (t91 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 1866U;
	int8_t x391 = -1;
	static int32_t x392 = -1;
	volatile uint32_t t92 = 15U;

	t92 = (((x389^x390)&x391)+x392);

	if (t92 != 4294965428U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x393 = 1653U;
	uint32_t x395 = UINT32_MAX;
	volatile int64_t x396 = -1LL;
	volatile int64_t t93 = -349837815767LL;

	t93 = (((x393^x394)&x395)+x396);

	if (t93 != 1628LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x399 = 7;
	static uint32_t x400 = UINT32_MAX;

	t94 = (((x397^x398)&x399)+x400);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = 46;
	volatile int64_t x402 = INT64_MIN;
	volatile uint16_t x403 = UINT16_MAX;
	int64_t x404 = 58LL;
	volatile int64_t t95 = -32570LL;

	t95 = (((x401^x402)&x403)+x404);

	if (t95 != 104LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x405 = UINT16_MAX;
	uint8_t x406 = 35U;
	volatile int64_t x407 = INT64_MIN;
	uint64_t x408 = UINT64_MAX;
	uint64_t t96 = UINT64_MAX;

	t96 = (((x405^x406)&x407)+x408);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MAX;
	static uint32_t x412 = UINT32_MAX;
	volatile uint64_t t97 = 2LLU;

	t97 = (((x409^x410)&x411)+x412);

	if (t97 != 9223371960122973436LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x413 = 1LLU;
	int8_t x414 = INT8_MAX;
	volatile uint8_t x415 = 0U;
	uint8_t x416 = 10U;
	uint64_t t98 = 86245751547LLU;

	t98 = (((x413^x414)&x415)+x416);

	if (t98 != 10LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x417 = 7U;
	static int16_t x418 = INT16_MAX;
	static int64_t x420 = -1013424123LL;
	int64_t t99 = -60385417792LL;

	t99 = (((x417^x418)&x419)+x420);

	if (t99 != -1013424115LL) { NG(); } else { ; }
	
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

