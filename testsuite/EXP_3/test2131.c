#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = UINT64_MAX;
int32_t x10 = INT32_MAX;
int16_t x11 = INT16_MAX;
volatile int16_t x12 = -1;
int32_t t2 = -356;
static int64_t x14 = -1LL;
static int64_t x16 = -1LL;
static uint16_t x18 = 2U;
int8_t x20 = 3;
static volatile int64_t x26 = INT64_MIN;
static uint16_t x34 = 21298U;
int8_t x43 = 2;
uint64_t x46 = 345378LLU;
int8_t x48 = 19;
static int64_t x58 = -1LL;
int8_t x61 = INT8_MAX;
volatile uint16_t x62 = 7U;
int32_t t17 = 14;
volatile int32_t x75 = -368340344;
volatile int16_t x78 = -1;
static volatile int16_t x91 = INT16_MIN;
uint64_t t22 = 766185399432LLU;
int32_t x93 = INT32_MAX;
uint8_t x95 = 3U;
static int32_t t24 = 3316054;
volatile int32_t x102 = -1;
int16_t x104 = -1;
static int32_t t25 = 819396;
uint32_t x107 = 402046U;
volatile uint64_t t26 = 21296857970819LLU;
int8_t x111 = -5;
static int32_t t27 = -1;
uint64_t t29 = 23176973LLU;
int64_t t30 = 1LL;
static int16_t x127 = INT16_MIN;
int8_t x130 = -1;
static int32_t x131 = -101;
int64_t x132 = 121241934257385751LL;
static int64_t x136 = -1LL;
uint8_t x137 = 53U;
uint32_t x139 = 27U;
int8_t x145 = -1;
volatile int32_t x152 = INT32_MIN;
volatile int16_t x154 = -1;
int64_t x156 = -1LL;
uint8_t x165 = UINT8_MAX;
static int32_t x170 = INT32_MIN;
volatile int64_t x174 = -1LL;
int16_t x176 = 763;
int32_t x180 = -1;
uint32_t x185 = UINT32_MAX;
volatile int16_t x194 = INT16_MIN;
volatile int32_t t48 = 26;
volatile int64_t t49 = -6160152827598891LL;
int16_t x201 = -1;
volatile uint8_t x209 = 51U;
int16_t x214 = INT16_MIN;
int8_t x215 = -27;
static uint64_t x217 = 622LLU;
int64_t x218 = INT64_MIN;
volatile int8_t x221 = 2;
static volatile int64_t x225 = INT64_MIN;
volatile uint64_t t57 = 16300082LLU;
uint8_t x236 = 12U;
volatile int32_t t58 = 21;
int32_t x239 = INT32_MIN;
volatile int8_t x254 = INT8_MIN;
static int16_t x271 = 2269;
volatile int32_t t67 = 1;
static int64_t x275 = 78907628LL;
int32_t x284 = INT32_MIN;
int64_t x286 = INT64_MAX;
volatile uint64_t t71 = 6536256419867771379LLU;
static int8_t x291 = -1;
uint32_t x300 = 569U;
volatile int8_t x305 = INT8_MIN;
static uint32_t t77 = 476592534U;
int8_t x313 = 0;
static uint32_t x330 = 2002U;
static int16_t x331 = -12315;
static int32_t t82 = 243;
static int32_t x338 = 28;
static int16_t x342 = INT16_MIN;
int8_t x348 = INT8_MAX;
int8_t x349 = INT8_MIN;
int32_t x350 = -1;
int16_t x355 = INT16_MIN;
static int8_t x359 = INT8_MIN;
int16_t x363 = -1;
int16_t x367 = -1;
int16_t x369 = -37;
volatile int16_t x373 = INT16_MIN;
volatile int32_t x376 = 0;
uint32_t x381 = 688363U;
uint64_t x383 = UINT64_MAX;
static uint16_t x391 = 8U;
int8_t x395 = 1;
volatile int32_t t98 = 4928;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static volatile int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 348487095;

	t0 = ((x1==x2)|(x3^x4));

	if (t0 != -65409) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint64_t x6 = 12400980911271LLU;
	uint64_t x7 = UINT64_MAX;
	uint64_t t1 = 2174299297087019LLU;

	t1 = ((x5==x6)|(x7^x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;

	t2 = ((x9==x10)|(x11^x12));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 59127423U;
	int16_t x15 = -1;
	int64_t t3 = -4LL;

	t3 = ((x13==x14)|(x15^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -315;
	uint16_t x19 = UINT16_MAX;
	volatile int32_t t4 = -10;

	t4 = ((x17==x18)|(x19^x20));

	if (t4 != 65532) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	volatile int64_t x22 = -1LL;
	static int16_t x23 = INT16_MAX;
	uint32_t x24 = 97U;
	volatile uint32_t t5 = 141U;

	t5 = ((x21==x22)|(x23^x24));

	if (t5 != 32670U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int8_t x27 = -23;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 29205;

	t6 = ((x25==x26)|(x27^x28));

	if (t6 != 32745) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 437008U;
	static int8_t x30 = 29;
	uint16_t x31 = UINT16_MAX;
	int64_t x32 = -1LL;
	int64_t t7 = -41596410LL;

	t7 = ((x29==x30)|(x31^x32));

	if (t7 != -65536LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 4LLU;
	static uint64_t x35 = UINT64_MAX;
	uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 414326524LLU;

	t8 = ((x33==x34)|(x35^x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = -1;
	uint64_t x38 = 6302697LLU;
	uint8_t x39 = 2U;
	uint32_t x40 = 3U;
	uint32_t t9 = 1484364U;

	t9 = ((x37==x38)|(x39^x40));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 2U;
	int64_t x42 = INT64_MIN;
	volatile uint16_t x44 = UINT16_MAX;
	static int32_t t10 = 4803;

	t10 = ((x41==x42)|(x43^x44));

	if (t10 != 65533) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint32_t x47 = UINT32_MAX;
	uint32_t t11 = 134516699U;

	t11 = ((x45==x46)|(x47^x48));

	if (t11 != 4294967276U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = 1208111LL;
	volatile int64_t x50 = INT64_MIN;
	static int32_t x51 = 28674305;
	int32_t x52 = -3136;
	volatile int32_t t12 = -54;

	t12 = ((x49==x50)|(x51^x52));

	if (t12 != -28673343) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int64_t x54 = -1LL;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	static volatile int64_t t13 = -1798804915LL;

	t13 = ((x53==x54)|(x55^x56));

	if (t13 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	volatile int32_t x59 = INT32_MIN;
	volatile uint8_t x60 = 7U;
	int32_t t14 = 175364;

	t14 = ((x57==x58)|(x59^x60));

	if (t14 != -2147483641) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x63 = INT32_MIN;
	volatile int8_t x64 = 14;
	int32_t t15 = 1872;

	t15 = ((x61==x62)|(x63^x64));

	if (t15 != -2147483634) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint32_t x66 = UINT32_MAX;
	volatile int8_t x67 = INT8_MIN;
	int64_t x68 = -3591659728LL;
	int64_t t16 = 1353997316LL;

	t16 = ((x65==x66)|(x67^x68));

	if (t16 != 3591659697LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 2U;
	uint16_t x70 = 71U;
	volatile uint16_t x71 = 3U;
	uint16_t x72 = 20U;

	t17 = ((x69==x70)|(x71^x72));

	if (t17 != 23) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	static int8_t x74 = -1;
	static int16_t x76 = INT16_MIN;
	int32_t t18 = 1;

	t18 = ((x73==x74)|(x75^x76));

	if (t18 != 368317064) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	uint64_t x79 = 1LLU;
	uint32_t x80 = UINT32_MAX;
	static volatile uint64_t t19 = 996627947064213246LLU;

	t19 = ((x77==x78)|(x79^x80));

	if (t19 != 4294967295LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MIN;
	int64_t x83 = -1LL;
	volatile uint64_t x84 = 33609222823212LLU;
	uint64_t t20 = 21LLU;

	t20 = ((x81==x82)|(x83^x84));

	if (t20 != 18446710464486728403LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	volatile int32_t x86 = INT32_MIN;
	uint32_t x87 = 2539U;
	int64_t x88 = -1LL;
	volatile int64_t t21 = -110468816721427000LL;

	t21 = ((x85==x86)|(x87^x88));

	if (t21 != -2540LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 7028103701LL;
	volatile uint8_t x90 = UINT8_MAX;
	uint64_t x92 = 14912888LLU;

	t22 = ((x89==x90)|(x91^x92));

	if (t22 != 18446744073694612856LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = UINT16_MAX;
	static uint64_t x96 = 170229LLU;
	uint64_t t23 = 26LLU;

	t23 = ((x93==x94)|(x95^x96));

	if (t23 != 170230LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int8_t x98 = 1;
	static int32_t x99 = -259452;
	int32_t x100 = INT32_MIN;

	t24 = ((x97==x98)|(x99^x100));

	if (t24 != 2147224196) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = UINT8_MAX;
	static int16_t x103 = 44;

	t25 = ((x101==x102)|(x103^x104));

	if (t25 != -45) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 25938LL;
	int16_t x106 = -1;
	uint64_t x108 = UINT64_MAX;

	t26 = ((x105==x106)|(x107^x108));

	if (t26 != 18446744073709149569LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	volatile int8_t x110 = -4;
	uint8_t x112 = 1U;

	t27 = ((x109==x110)|(x111^x112));

	if (t27 != -6) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -136508591;
	int64_t x114 = INT64_MIN;
	volatile uint64_t x115 = 17034099135LLU;
	uint8_t x116 = 0U;
	volatile uint64_t t28 = 115LLU;

	t28 = ((x113==x114)|(x115^x116));

	if (t28 != 17034099135LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	static uint64_t x118 = 9042790309585489LLU;
	static uint64_t x119 = 39LLU;
	int32_t x120 = INT32_MIN;

	t29 = ((x117==x118)|(x119^x120));

	if (t29 != 18446744071562068007LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int64_t x122 = 11599813545587LL;
	int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MAX;

	t30 = ((x121==x122)|(x123^x124));

	if (t30 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 3212809U;
	uint32_t x126 = 1U;
	int16_t x128 = -38;
	volatile int32_t t31 = -718;

	t31 = ((x125==x126)|(x127^x128));

	if (t31 != 32730) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -6780903923206505LL;
	int64_t t32 = 4253401827LL;

	t32 = ((x129==x130)|(x131^x132));

	if (t32 != -121241934257385844LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile uint16_t x134 = UINT16_MAX;
	volatile uint16_t x135 = 13901U;
	int64_t t33 = 1LL;

	t33 = ((x133==x134)|(x135^x136));

	if (t33 != -13902LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MIN;
	uint16_t x140 = 1U;
	uint32_t t34 = 0U;

	t34 = ((x137==x138)|(x139^x140));

	if (t34 != 26U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	static int16_t x142 = -182;
	static volatile int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	volatile int64_t t35 = -1364517LL;

	t35 = ((x141==x142)|(x143^x144));

	if (t35 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MAX;
	int32_t x147 = -1;
	uint64_t x148 = 60862206398LLU;
	uint64_t t36 = 30614546LLU;

	t36 = ((x145==x146)|(x147^x148));

	if (t36 != 18446744012847345217LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MIN;
	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MIN;
	static int32_t t37 = 10573223;

	t37 = ((x149==x150)|(x151^x152));

	if (t37 != 2147483520) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -2029318;
	volatile uint16_t x155 = 22339U;
	int64_t t38 = 556969LL;

	t38 = ((x153==x154)|(x155^x156));

	if (t38 != -22340LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = 0LL;
	int32_t x158 = INT32_MAX;
	int8_t x159 = -8;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 123053;

	t39 = ((x157==x158)|(x159^x160));

	if (t39 != 32760) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = -1;
	int16_t x162 = INT16_MIN;
	uint32_t x163 = 2919850U;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t40 = 53306LLU;

	t40 = ((x161==x162)|(x163^x164));

	if (t40 != 18446744073706631765LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x166 = -29914;
	uint16_t x167 = UINT16_MAX;
	int64_t x168 = INT64_MAX;
	volatile int64_t t41 = -16577146859574682LL;

	t41 = ((x165==x166)|(x167^x168));

	if (t41 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	static int8_t x171 = INT8_MAX;
	int16_t x172 = INT16_MAX;
	static int32_t t42 = -877;

	t42 = ((x169==x170)|(x171^x172));

	if (t42 != 32640) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 32;
	uint16_t x175 = 5619U;
	int32_t t43 = 154;

	t43 = ((x173==x174)|(x175^x176));

	if (t43 != 5896) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 19434055U;
	volatile int32_t x178 = INT32_MAX;
	int8_t x179 = INT8_MIN;
	volatile int32_t t44 = -6904;

	t44 = ((x177==x178)|(x179^x180));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	uint64_t x182 = 70960LLU;
	int16_t x183 = -1;
	uint16_t x184 = 4785U;
	int32_t t45 = -93905997;

	t45 = ((x181==x182)|(x183^x184));

	if (t45 != -4786) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = INT64_MIN;
	int16_t x187 = 0;
	static volatile int16_t x188 = INT16_MAX;
	volatile int32_t t46 = 0;

	t46 = ((x185==x186)|(x187^x188));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x189 = 4U;
	int64_t x190 = INT64_MIN;
	static int16_t x191 = -9465;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 13548;

	t47 = ((x189==x190)|(x191^x192));

	if (t47 != 23303) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = 7;
	static uint8_t x195 = UINT8_MAX;
	uint8_t x196 = UINT8_MAX;

	t48 = ((x193==x194)|(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -10;
	int32_t x198 = INT32_MAX;
	volatile int64_t x199 = INT64_MAX;
	int64_t x200 = INT64_MIN;

	t49 = ((x197==x198)|(x199^x200));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x202 = UINT32_MAX;
	uint8_t x203 = 28U;
	int64_t x204 = -1LL;
	int64_t t50 = -52181011LL;

	t50 = ((x201==x202)|(x203^x204));

	if (t50 != -29LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MAX;
	int64_t x207 = -1LL;
	int8_t x208 = INT8_MIN;
	static int64_t t51 = 5407920218726LL;

	t51 = ((x205==x206)|(x207^x208));

	if (t51 != 127LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 27079718717135740LLU;
	static volatile uint64_t x211 = 477573167866175LLU;
	uint64_t x212 = 432LLU;
	volatile uint64_t t52 = 8825289518509956725LLU;

	t52 = ((x209==x210)|(x211^x212));

	if (t52 != 477573167865999LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = 665U;
	static uint64_t x216 = 54978292930LLU;
	static volatile uint64_t t53 = 7LLU;

	t53 = ((x213==x214)|(x215^x216));

	if (t53 != 18446744018731258663LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x219 = 1;
	int32_t x220 = INT32_MIN;
	int32_t t54 = 88;

	t54 = ((x217==x218)|(x219^x220));

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x222 = 1U;
	int64_t x223 = -85288695LL;
	uint8_t x224 = 4U;
	int64_t t55 = 3427LL;

	t55 = ((x221==x222)|(x223^x224));

	if (t55 != -85288691LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x226 = 3747U;
	uint64_t x227 = 14LLU;
	int16_t x228 = INT16_MAX;
	uint64_t t56 = 1928414126LLU;

	t56 = ((x225==x226)|(x227^x228));

	if (t56 != 32753LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 100U;
	int16_t x230 = INT16_MIN;
	static volatile uint16_t x231 = 2285U;
	static uint64_t x232 = 3313952LLU;

	t57 = ((x229==x230)|(x231^x232));

	if (t57 != 3316173LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 1244901U;
	int32_t x234 = -1;
	int32_t x235 = INT32_MAX;

	t58 = ((x233==x234)|(x235^x236));

	if (t58 != 2147483635) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	static int64_t x238 = 102855391LL;
	static uint64_t x240 = UINT64_MAX;
	volatile uint64_t t59 = 8399359325LLU;

	t59 = ((x237==x238)|(x239^x240));

	if (t59 != 2147483647LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 864022915U;
	int16_t x242 = INT16_MIN;
	static int32_t x243 = -21153908;
	int32_t x244 = INT32_MIN;
	static int32_t t60 = 1524810;

	t60 = ((x241==x242)|(x243^x244));

	if (t60 != 2126329740) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MAX;
	volatile int32_t x247 = -1;
	uint16_t x248 = 5U;
	volatile int32_t t61 = 35692;

	t61 = ((x245==x246)|(x247^x248));

	if (t61 != -6) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	uint16_t x250 = 1U;
	static int8_t x251 = 0;
	int32_t x252 = INT32_MAX;
	int32_t t62 = INT32_MAX;

	t62 = ((x249==x250)|(x251^x252));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = 3377;
	int8_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t63 = 1701U;

	t63 = ((x253==x254)|(x255^x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 46U;
	int64_t x258 = INT64_MAX;
	uint32_t x259 = 101U;
	static int64_t x260 = 654LL;
	static volatile int64_t t64 = -3899529078LL;

	t64 = ((x257==x258)|(x259^x260));

	if (t64 != 747LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = 3;
	int32_t x262 = INT32_MIN;
	int32_t x263 = 300340;
	int8_t x264 = INT8_MAX;
	static volatile int32_t t65 = -181774397;

	t65 = ((x261==x262)|(x263^x264));

	if (t65 != 300363) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x265 = UINT32_MAX;
	static int16_t x266 = -12;
	int32_t x267 = 1;
	int8_t x268 = INT8_MIN;
	int32_t t66 = -30043;

	t66 = ((x265==x266)|(x267^x268));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = 3861;
	int16_t x270 = -203;
	int16_t x272 = INT16_MIN;

	t67 = ((x269==x270)|(x271^x272));

	if (t67 != -30499) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 8;
	uint32_t x274 = 48U;
	uint8_t x276 = 118U;
	volatile int64_t t68 = 388LL;

	t68 = ((x273==x274)|(x275^x276));

	if (t68 != 78907546LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 81U;
	static int8_t x278 = -1;
	static volatile int32_t x279 = -126576;
	static uint64_t x280 = UINT64_MAX;
	static volatile uint64_t t69 = 45409904892493LLU;

	t69 = ((x277==x278)|(x279^x280));

	if (t69 != 126575LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int64_t x282 = -3598LL;
	uint64_t x283 = 1021229781110987947LLU;
	static volatile uint64_t t70 = 2033952640LLU;

	t70 = ((x281==x282)|(x283^x284));

	if (t70 != 17425514292637834411LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	static uint64_t x287 = 1818LLU;
	uint32_t x288 = 42980U;

	t71 = ((x285==x286)|(x287^x288));

	if (t71 != 41214LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	uint16_t x290 = UINT16_MAX;
	int32_t x292 = INT32_MAX;
	volatile int32_t t72 = INT32_MIN;

	t72 = ((x289==x290)|(x291^x292));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = -1;
	static volatile uint64_t x296 = 67636506785LLU;
	volatile uint64_t t73 = 0LLU;

	t73 = ((x293==x294)|(x295^x296));

	if (t73 != 18446744006073044831LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	static int64_t x298 = -44249873LL;
	uint16_t x299 = UINT16_MAX;
	uint32_t t74 = 101U;

	t74 = ((x297==x298)|(x299^x300));

	if (t74 != 64966U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	int32_t x302 = -7319;
	uint32_t x303 = 7482435U;
	uint32_t x304 = UINT32_MAX;
	uint32_t t75 = 181632U;

	t75 = ((x301==x302)|(x303^x304));

	if (t75 != 4287484860U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	volatile uint8_t x307 = 22U;
	int16_t x308 = -1;
	int32_t t76 = 26717;

	t76 = ((x305==x306)|(x307^x308));

	if (t76 != -23) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -330111738;
	uint16_t x310 = UINT16_MAX;
	volatile uint32_t x311 = UINT32_MAX;
	uint32_t x312 = 3315U;

	t77 = ((x309==x310)|(x311^x312));

	if (t77 != 4294963980U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = -6;
	uint8_t x315 = 1U;
	int16_t x316 = -1;
	static int32_t t78 = -1001975869;

	t78 = ((x313==x314)|(x315^x316));

	if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	static uint64_t x318 = 575417167886858799LLU;
	int8_t x319 = INT8_MIN;
	static volatile uint32_t x320 = UINT32_MAX;
	uint32_t t79 = 7812U;

	t79 = ((x317==x318)|(x319^x320));

	if (t79 != 127U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 117059U;
	static int32_t x322 = -1;
	static uint16_t x323 = 9U;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -53180615;

	t80 = ((x321==x322)|(x323^x324));

	if (t80 != -119) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 560353307U;
	static int8_t x326 = 7;
	static int32_t x327 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t81 = -25;

	t81 = ((x325==x326)|(x327^x328));

	if (t81 != 2147450880) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int32_t x332 = INT32_MIN;

	t82 = ((x329==x330)|(x331^x332));

	if (t82 != 2147471333) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = 0U;
	static int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MAX;
	uint16_t x336 = 2461U;
	volatile int64_t t83 = 0LL;

	t83 = ((x333==x334)|(x335^x336));

	if (t83 != 9223372036854773346LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	volatile int32_t x339 = -1;
	int64_t x340 = INT64_MIN;
	int64_t t84 = INT64_MAX;

	t84 = ((x337==x338)|(x339^x340));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	int32_t x343 = INT32_MIN;
	static uint64_t x344 = UINT64_MAX;
	static volatile uint64_t t85 = 46228148906717LLU;

	t85 = ((x341==x342)|(x343^x344));

	if (t85 != 2147483647LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int8_t x346 = INT8_MIN;
	static volatile uint64_t x347 = 1089565998LLU;
	uint64_t t86 = 9021LLU;

	t86 = ((x345==x346)|(x347^x348));

	if (t86 != 1089566033LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x351 = 4849553;
	uint32_t x352 = UINT32_MAX;
	uint32_t t87 = 95885403U;

	t87 = ((x349==x350)|(x351^x352));

	if (t87 != 4290117742U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 4440046LLU;
	uint8_t x354 = UINT8_MAX;
	uint32_t x356 = 2382070U;
	uint32_t t88 = 3403652U;

	t88 = ((x353==x354)|(x355^x356));

	if (t88 != 4292598006U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = 15;
	volatile int64_t x358 = -1LL;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 1248756;

	t89 = ((x357==x358)|(x359^x360));

	if (t89 != 2147483520) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	static uint8_t x364 = 2U;
	volatile int32_t t90 = 137379493;

	t90 = ((x361==x362)|(x363^x364));

	if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	int64_t x366 = 3464891LL;
	int64_t x368 = 1LL;
	volatile int64_t t91 = -240066LL;

	t91 = ((x365==x366)|(x367^x368));

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x370 = -64899616;
	uint8_t x371 = 1U;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 209752;

	t92 = ((x369==x370)|(x371^x372));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x374 = -1;
	static int8_t x375 = -33;
	int32_t t93 = -2;

	t93 = ((x373==x374)|(x375^x376));

	if (t93 != -33) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = 134213549;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MAX;
	static volatile int8_t x380 = -1;
	static volatile int32_t t94 = -384;

	t94 = ((x377==x378)|(x379^x380));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = 9755U;
	int16_t x384 = INT16_MAX;
	uint64_t t95 = 830297252553LLU;

	t95 = ((x381==x382)|(x383^x384));

	if (t95 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -60656;
	int64_t x386 = INT64_MAX;
	int32_t x387 = INT32_MAX;
	uint32_t x388 = 455143U;
	volatile uint32_t t96 = 386193875U;

	t96 = ((x385==x386)|(x387^x388));

	if (t96 != 2147028504U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = UINT8_MAX;
	int8_t x390 = INT8_MIN;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = -430774882;

	t97 = ((x389==x390)|(x391^x392));

	if (t97 != 65527) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 0;
	int32_t x394 = INT32_MAX;
	int8_t x396 = INT8_MIN;

	t98 = ((x393==x394)|(x395^x396));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	static volatile int32_t x398 = -127209;
	uint16_t x399 = 20U;
	static uint32_t x400 = UINT32_MAX;
	volatile uint32_t t99 = 363U;

	t99 = ((x397==x398)|(x399^x400));

	if (t99 != 4294967275U) { NG(); } else { ; }
	
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

