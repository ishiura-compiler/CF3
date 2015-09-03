#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -87;
int64_t t0 = INT64_MIN;
static volatile int8_t x8 = -4;
uint32_t x16 = UINT32_MAX;
int64_t t4 = -28490841574067681LL;
int8_t x22 = -1;
volatile int16_t x25 = INT16_MAX;
int64_t x27 = 34021389946782707LL;
uint16_t x28 = UINT16_MAX;
static volatile uint32_t x39 = 81U;
int16_t x40 = INT16_MAX;
int32_t x49 = INT32_MAX;
uint16_t x53 = 46U;
static int32_t x57 = 42300202;
static int8_t x62 = INT8_MIN;
int8_t x63 = -50;
volatile uint64_t x77 = 1LLU;
static uint32_t x80 = UINT32_MAX;
volatile int8_t x87 = -6;
int64_t x88 = -5LL;
static int8_t x94 = INT8_MIN;
uint64_t x97 = UINT64_MAX;
int32_t x98 = -512833;
int32_t x100 = -41845;
int16_t x102 = -1;
static uint64_t x119 = UINT64_MAX;
uint64_t t28 = 3279LLU;
static volatile uint32_t x121 = UINT32_MAX;
int8_t x123 = INT8_MAX;
int32_t x124 = -1;
static int32_t x128 = -1;
volatile int32_t t30 = 25391037;
int32_t x159 = -167;
static uint64_t x161 = 11342320LLU;
int64_t x162 = 2591712LL;
volatile int32_t x163 = 2;
static uint32_t t39 = 3329U;
int16_t x169 = -1;
volatile int64_t t40 = 2168197787LL;
int64_t x173 = INT64_MIN;
int64_t x179 = INT64_MIN;
uint64_t t42 = 7969573289301130LLU;
int32_t x184 = INT32_MIN;
volatile int8_t x190 = INT8_MIN;
static uint16_t x191 = UINT16_MAX;
int64_t x196 = 35412154995025LL;
int32_t x197 = -30;
int32_t x212 = -1;
volatile int16_t x214 = INT16_MIN;
volatile uint64_t t51 = 64944LLU;
int32_t x218 = INT32_MIN;
static volatile uint16_t x219 = UINT16_MAX;
volatile int32_t t52 = 1043724;
uint64_t x227 = 255045234834LLU;
static int64_t t58 = -15832LL;
int64_t x247 = -1LL;
uint32_t x250 = UINT32_MAX;
uint8_t x260 = 37U;
uint64_t x267 = 111663908376968LLU;
uint64_t t64 = 5891058835300156LLU;
static int64_t x280 = -1LL;
uint64_t t67 = 6809LLU;
volatile uint64_t t68 = 3758347815LLU;
int8_t x288 = -1;
int64_t x291 = -4093LL;
volatile int16_t x292 = INT16_MAX;
int64_t t73 = 97LL;
volatile int32_t x306 = INT32_MAX;
volatile int8_t x308 = INT8_MIN;
volatile int16_t x309 = INT16_MIN;
int64_t x312 = INT64_MIN;
static int16_t x315 = INT16_MAX;
static volatile uint16_t x320 = 282U;
int32_t t77 = 92111790;
int32_t x321 = 1305699;
int64_t x323 = INT64_MIN;
static uint32_t x326 = 33866U;
int64_t t79 = -237950LL;
volatile int64_t x330 = INT64_MIN;
uint8_t x332 = 9U;
volatile int64_t t80 = -3834LL;
volatile uint32_t x335 = 61271852U;
int32_t x338 = INT32_MAX;
int8_t x345 = INT8_MAX;
static int16_t x347 = 14;
static uint64_t t84 = 405LLU;
int16_t x350 = -1;
static int32_t x355 = INT32_MIN;
int8_t x366 = 28;
int32_t x367 = INT32_MIN;
int64_t x372 = 82902LL;
volatile int64_t t90 = 363167373204588LL;
static int32_t t92 = 1392437;
int8_t x381 = -1;
volatile int32_t t93 = -9030;
int8_t x386 = INT8_MIN;
uint16_t x387 = 2868U;
int32_t x389 = INT32_MAX;
int8_t x392 = INT8_MIN;
int64_t x394 = -1386LL;
static int16_t x396 = INT16_MIN;
uint16_t x397 = 605U;
uint32_t x406 = 1325U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x3 = 5730U;
	uint32_t x4 = 1U;

	t0 = (x1^((x2^x3)%x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5^((x6^x7)%x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint16_t x10 = 9269U;
	int16_t x11 = INT16_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -147412387;

	t2 = (x9^((x10^x11)%x12));

	if (t2 != -23499) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 870238024795LLU;
	uint8_t x14 = 93U;
	static int8_t x15 = INT8_MIN;
	volatile uint64_t t3 = 437939438LLU;

	t3 = (x13^((x14^x15)%x16));

	if (t3 != 869223730054LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -11;
	volatile uint16_t x18 = 7519U;
	int16_t x19 = 1040;
	int64_t x20 = -1LL;

	t4 = (x17^((x18^x19)%x20));

	if (t4 != -11LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 2019451374510924804LL;
	uint8_t x23 = 5U;
	int8_t x24 = INT8_MIN;
	int64_t t5 = -655120LL;

	t5 = (x21^((x22^x23)%x24));

	if (t5 != -2019451374510924802LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	static int64_t t6 = 5858501768LL;

	t6 = (x25^((x26^x27)%x28));

	if (t6 != -17344LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 2040U;
	uint64_t x30 = 1921673LLU;
	static int8_t x31 = INT8_MIN;
	volatile int16_t x32 = INT16_MIN;
	volatile uint64_t t7 = 55955167496577LLU;

	t7 = (x29^((x30^x31)%x32));

	if (t7 != 18446744073707629297LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	int8_t x34 = -1;
	static int64_t x35 = -1LL;
	volatile int64_t x36 = INT64_MIN;
	static volatile int64_t t8 = 755634814403LL;

	t8 = (x33^((x34^x35)%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	static uint8_t x38 = UINT8_MAX;
	volatile int64_t t9 = -3673587635629360LL;

	t9 = (x37^((x38^x39)%x40));

	if (t9 != 9223372036854775633LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	static uint16_t x42 = 1U;
	uint16_t x43 = 1777U;
	volatile int32_t x44 = INT32_MAX;
	volatile int32_t t10 = -2070;

	t10 = (x41^((x42^x43)%x44));

	if (t10 != -1777) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = 2LLU;
	int32_t x51 = INT32_MIN;
	int8_t x52 = -1;
	uint64_t t11 = 6688828LLU;

	t11 = (x49^((x50^x51)%x52));

	if (t11 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -1761917;
	volatile int64_t x55 = -6124682303699099LL;
	int8_t x56 = 5;
	int64_t t12 = -22LL;

	t12 = (x53^((x54^x55)%x56));

	if (t12 != 44LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MAX;
	volatile int64_t t13 = -1LL;

	t13 = (x57^((x58^x59)%x60));

	if (t13 != 42300242LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = 0;
	int16_t x64 = INT16_MAX;
	static volatile int32_t t14 = 6732;

	t14 = (x61^((x62^x63)%x64));

	if (t14 != 78) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	int8_t x67 = 0;
	int16_t x68 = INT16_MIN;
	volatile int32_t t15 = 569;

	t15 = (x65^((x66^x67)%x68));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 7;
	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = UINT16_MAX;
	int64_t x72 = 132295016LL;
	int64_t t16 = 502LL;

	t16 = (x69^((x70^x71)%x72));

	if (t16 != 61461255LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x73 = 2U;
	int32_t x74 = INT32_MAX;
	uint64_t x75 = 193362444LLU;
	uint64_t x76 = 50557310265714LLU;
	volatile uint64_t t17 = 11908788673252LLU;

	t17 = (x73^((x74^x75)%x76));

	if (t17 != 1954121201LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = INT32_MIN;
	volatile uint64_t x79 = UINT64_MAX;
	static volatile uint64_t t18 = 835LLU;

	t18 = (x77^((x78^x79)%x80));

	if (t18 != 2147483646LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 6U;
	int16_t x82 = 1;
	uint8_t x83 = 62U;
	int16_t x84 = -1;
	int32_t t19 = -10666;

	t19 = (x81^((x82^x83)%x84));

	if (t19 != 6) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = -1;
	int64_t x86 = 1LL;
	int64_t t20 = 367166671214351890LL;

	t20 = (x85^((x86^x87)%x88));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x89 = UINT8_MAX;
	int16_t x90 = -7;
	static uint8_t x91 = UINT8_MAX;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t21 = 4221;

	t21 = (x89^((x90^x91)%x92));

	if (t21 != -7) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -661322482;
	int16_t x95 = -1;
	int32_t x96 = INT32_MIN;
	volatile int32_t t22 = -478;

	t22 = (x93^((x94^x95)%x96));

	if (t22 != -661322383) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x99 = 2LLU;
	volatile uint64_t t23 = 74875655145333137LLU;

	t23 = (x97^((x98^x99)%x100));

	if (t23 != 512834LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	volatile int32_t x104 = -1;
	volatile int64_t t24 = 547695802391160554LL;

	t24 = (x101^((x102^x103)%x104));

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = -1LL;
	volatile int8_t x107 = -14;
	static int16_t x108 = INT16_MIN;
	int64_t t25 = 10563419311483842LL;

	t25 = (x105^((x106^x107)%x108));

	if (t25 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 147U;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = 1;
	uint64_t x112 = UINT64_MAX;
	uint64_t t26 = 49939561916201LLU;

	t26 = (x109^((x110^x111)%x112));

	if (t26 != 4294967149LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x114 = 6541456;
	static volatile int16_t x115 = 921;
	volatile int8_t x116 = 21;
	uint64_t t27 = 317220289535LLU;

	t27 = (x113^((x114^x115)%x116));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x117 = 1982LLU;
	static volatile int32_t x118 = INT32_MIN;
	int8_t x120 = INT8_MAX;

	t28 = (x117^((x118^x119)%x120));

	if (t28 != 1977LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x122 = 26;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x121^((x122^x123)%x124));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x125 = 5U;
	static int16_t x126 = INT16_MIN;
	uint16_t x127 = UINT16_MAX;

	t30 = (x125^((x126^x127)%x128));

	if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x129 = 12977832U;
	int32_t x130 = -54137;
	int64_t x131 = INT64_MAX;
	static int16_t x132 = INT16_MAX;
	static int64_t t31 = 517175760672544957LL;

	t31 = (x129^((x130^x131)%x132));

	if (t31 != -12986918LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = UINT16_MAX;
	static int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	static int32_t x136 = -1;
	int32_t t32 = -231233;

	t32 = (x133^((x134^x135)%x136));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = 104152022;
	uint16_t x138 = 0U;
	static int64_t x139 = 20866302855LL;
	uint32_t x140 = 5U;
	static volatile int64_t t33 = 171625LL;

	t33 = (x137^((x138^x139)%x140));

	if (t33 != 104152022LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MIN;
	int32_t x147 = -1;
	volatile int16_t x148 = INT16_MAX;
	int32_t t34 = -242320261;

	t34 = (x145^((x146^x147)%x148));

	if (t34 != 2147483520) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x149 = -1;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = -51;
	int32_t x152 = INT32_MAX;
	volatile int32_t t35 = -12607;

	t35 = (x149^((x150^x151)%x152));

	if (t35 != 65485) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int8_t x154 = -1;
	int32_t x155 = -1;
	static volatile int32_t x156 = 398244;
	static uint32_t t36 = UINT32_MAX;

	t36 = (x153^((x154^x155)%x156));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = -1;
	int16_t x160 = INT16_MAX;
	volatile int32_t t37 = 597664;

	t37 = (x157^((x158^x159)%x160));

	if (t37 != -2147483482) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x164 = 1;
	uint64_t t38 = 9614563300432712LLU;

	t38 = (x161^((x162^x163)%x164));

	if (t38 != 11342320LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x165 = UINT32_MAX;
	static int32_t x166 = -103;
	int16_t x167 = -85;
	static volatile int8_t x168 = 38;

	t39 = (x165^((x166^x167)%x168));

	if (t39 != 4294967283U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x170 = 2034;
	int64_t x171 = INT64_MAX;
	int8_t x172 = -53;

	t40 = (x169^((x170^x171)%x172));

	if (t40 != -14LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = 2680199780176LL;
	int32_t x175 = INT32_MIN;
	int64_t x176 = -142833560480753405LL;
	int64_t t41 = 4431LL;

	t41 = (x173^((x174^x175)%x176));

	if (t41 != 9223369354787886928LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = -1LL;
	uint64_t x178 = 730619836523LLU;
	int8_t x180 = INT8_MIN;

	t42 = (x177^((x178^x179)%x180));

	if (t42 != 9223371306234939284LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x182 = 3U;
	volatile int32_t x183 = INT32_MIN;
	int32_t t43 = 3603828;

	t43 = (x181^((x182^x183)%x184));

	if (t43 != 2147450883) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MAX;
	uint8_t x187 = 125U;
	int32_t x188 = 997283;
	int64_t t44 = 18310694LL;

	t44 = (x185^((x186^x187)%x188));

	if (t44 != 524619LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x189 = 6218230U;
	int32_t x192 = -1;
	uint32_t t45 = 11U;

	t45 = (x189^((x190^x191)%x192));

	if (t45 != 6218230U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -1;
	int8_t x194 = 0;
	uint8_t x195 = 0U;
	volatile int64_t t46 = -7223LL;

	t46 = (x193^((x194^x195)%x196));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x198 = -24753324340862110LL;
	int64_t x199 = -740427534109087417LL;
	uint8_t x200 = UINT8_MAX;
	volatile int64_t t47 = -14088LL;

	t47 = (x197^((x198^x199)%x200));

	if (t47 != -35LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x201 = 1U;
	volatile uint8_t x202 = 17U;
	uint64_t x203 = UINT64_MAX;
	int32_t x204 = INT32_MAX;
	static volatile uint64_t t48 = 2642359286273954292LLU;

	t48 = (x201^((x202^x203)%x204));

	if (t48 != 2147483632LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = UINT64_MAX;
	static int32_t x206 = 1467140;
	int16_t x207 = -1;
	static int8_t x208 = -19;
	static volatile uint64_t t49 = 425578LLU;

	t49 = (x205^((x206^x207)%x208));

	if (t49 != 17LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -1LL;
	int32_t x210 = -7483713;
	int64_t x211 = -115561635281LL;
	int64_t t50 = 336677557583040980LL;

	t50 = (x209^((x210^x211)%x212));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 7LLU;
	uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MAX;

	t51 = (x213^((x214^x215)%x216));

	if (t51 != 32760LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = 3437;
	uint8_t x220 = UINT8_MAX;

	t52 = (x217^((x218^x219)%x220));

	if (t52 != -3347) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MAX;
	int16_t x222 = -7;
	int32_t x223 = -44089;
	int64_t x224 = INT64_MIN;
	int64_t t53 = 1524555LL;

	t53 = (x221^((x222^x223)%x224));

	if (t53 != 9223372036854731713LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 3503U;
	volatile int8_t x226 = -1;
	int64_t x228 = 312390663401LL;
	static volatile uint64_t t54 = 9357433756129LLU;

	t54 = (x225^((x226^x227)%x228));

	if (t54 != 171076047810LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x229 = 3;
	uint64_t x230 = 12874LLU;
	volatile uint32_t x231 = 8340428U;
	int16_t x232 = -55;
	static volatile uint64_t t55 = 1936358921LLU;

	t55 = (x229^((x230^x231)%x232));

	if (t55 != 8352133LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MIN;
	static volatile int64_t x234 = INT64_MAX;
	volatile int8_t x235 = 22;
	int16_t x236 = -81;
	static int64_t t56 = -44585653652823756LL;

	t56 = (x233^((x234^x235)%x236));

	if (t56 != -125LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MAX;
	static int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t57 = -1964090LL;

	t57 = (x237^((x238^x239)%x240));

	if (t57 != -2147451008LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x241 = 1;
	int8_t x242 = INT8_MIN;
	int64_t x243 = -7509245574555376LL;
	int8_t x244 = 19;

	t58 = (x241^((x242^x243)%x244));

	if (t58 != 2LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MAX;
	static volatile uint64_t x246 = 1LLU;
	static int32_t x248 = -213618636;
	uint64_t t59 = 4426432381026687216LLU;

	t59 = (x245^((x246^x247)%x248));

	if (t59 != 213618613LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	static uint32_t x251 = 216926U;
	uint64_t x252 = 3253140846524573LLU;
	uint64_t t60 = 124LLU;

	t60 = (x249^((x250^x251)%x252));

	if (t60 != 18446744071561851041LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x253 = INT16_MIN;
	int64_t x254 = -1011611596475782472LL;
	uint64_t x255 = UINT64_MAX;
	volatile int64_t x256 = INT64_MAX;
	volatile uint64_t t61 = 1891LLU;

	t61 = (x253^((x254^x255)%x256));

	if (t61 != 17435132477233780039LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 602168376U;
	static int16_t x258 = -1;
	uint16_t x259 = 3U;
	uint32_t t62 = 0U;

	t62 = (x257^((x258^x259)%x260));

	if (t62 != 3692798916U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	int32_t x262 = INT32_MIN;
	int16_t x263 = 823;
	uint8_t x264 = UINT8_MAX;
	int32_t t63 = -1;

	t63 = (x261^((x262^x263)%x264));

	if (t63 != 32698) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x265 = -1;
	volatile int16_t x266 = INT16_MIN;
	static int32_t x268 = -1641977;

	t64 = (x265^((x266^x267)%x268));

	if (t64 != 111663908367991LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = 22;
	volatile int64_t x270 = INT64_MIN;
	static int32_t x271 = INT32_MAX;
	int8_t x272 = 11;
	volatile int64_t t65 = 4LL;

	t65 = (x269^((x270^x271)%x272));

	if (t65 != -17LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1;
	uint8_t x274 = UINT8_MAX;
	static int64_t x275 = INT64_MAX;
	int64_t x276 = -1175311010LL;
	int64_t t66 = -125361873691439LL;

	t66 = (x273^((x274^x275)%x276));

	if (t66 != -820492033LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = -1;
	volatile uint64_t x279 = UINT64_MAX;

	t67 = (x277^((x278^x279)%x280));

	if (t67 != 65535LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -1;
	uint8_t x282 = UINT8_MAX;
	static uint64_t x283 = 1147298673303470476LLU;
	int16_t x284 = INT16_MAX;

	t68 = (x281^((x282^x283)%x284));

	if (t68 != 18446744073709519834LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = 18070U;
	int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MIN;
	volatile int32_t t69 = -52;

	t69 = (x285^((x286^x287)%x288));

	if (t69 != 18070) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = -1;
	int32_t x290 = INT32_MIN;
	static int64_t t70 = -427415828760LL;

	t70 = (x289^((x290^x291)%x292));

	if (t70 != -28677LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = -27;
	int32_t x295 = INT32_MIN;
	volatile uint64_t x296 = 965LLU;
	uint64_t t71 = 200LLU;

	t71 = (x293^((x294^x295)%x296));

	if (t71 != 18446744073709519454LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = 107U;
	int32_t x298 = -1;
	int64_t x299 = INT64_MIN;
	int16_t x300 = -1;
	int64_t t72 = 3086742886LL;

	t72 = (x297^((x298^x299)%x300));

	if (t72 != 107LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	uint16_t x302 = 12U;
	int8_t x303 = -1;
	volatile int64_t x304 = INT64_MIN;

	t73 = (x301^((x302^x303)%x304));

	if (t73 != 115LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = INT64_MIN;
	int32_t x307 = -58;
	int64_t t74 = 69208222681188020LL;

	t74 = (x305^((x306^x307)%x308));

	if (t74 != 9223372036854775737LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x310 = INT8_MAX;
	static uint8_t x311 = 9U;
	int64_t t75 = -7354890618123367LL;

	t75 = (x309^((x310^x311)%x312));

	if (t75 != -32650LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = INT64_MIN;
	int8_t x314 = -1;
	uint16_t x316 = 1429U;
	int64_t t76 = 4180416809847066387LL;

	t76 = (x313^((x314^x315)%x316));

	if (t76 != 9223372036854774478LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 4U;
	uint8_t x318 = 13U;
	volatile int8_t x319 = INT8_MAX;

	t77 = (x317^((x318^x319)%x320));

	if (t77 != 118) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x322 = 9255900881908105LLU;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t78 = 2186920643785LLU;

	t78 = (x321^((x322^x323)%x324));

	if (t78 != 9232627937737940458LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x325 = INT64_MIN;
	int64_t x327 = 456376950LL;
	int32_t x328 = INT32_MIN;

	t79 = (x325^((x326^x327)%x328));

	if (t79 != -9223372036398430660LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = 77837165990571LL;
	int16_t x331 = INT16_MIN;

	t80 = (x329^((x330^x331)%x332));

	if (t80 != 77837165990571LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1246433161172LL;
	int64_t x334 = -1LL;
	static int8_t x336 = INT8_MIN;
	static int64_t t81 = 0LL;

	t81 = (x333^((x334^x335)%x336));

	if (t81 != 1246433161215LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = UINT8_MAX;
	static int16_t x339 = INT16_MIN;
	uint8_t x340 = 1U;
	int32_t t82 = -12297;

	t82 = (x337^((x338^x339)%x340));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = 3LL;
	static uint32_t x342 = 89U;
	static volatile int8_t x343 = 34;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t83 = 332741167445LLU;

	t83 = (x341^((x342^x343)%x344));

	if (t83 != 120LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x346 = 7571LLU;
	uint16_t x348 = 11U;

	t84 = (x345^((x346^x347)%x348));

	if (t84 != 125LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MAX;
	uint16_t x351 = 6805U;
	int64_t x352 = -19LL;
	int64_t t85 = -3883967438LL;

	t85 = (x349^((x350^x351)%x352));

	if (t85 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x353 = INT64_MIN;
	int16_t x354 = 0;
	int16_t x356 = INT16_MAX;
	static volatile int64_t t86 = 3997845695LL;

	t86 = (x353^((x354^x355)%x356));

	if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x357 = INT16_MIN;
	uint32_t x358 = 1105U;
	uint16_t x359 = 1U;
	int64_t x360 = INT64_MIN;
	static int64_t t87 = 46678348129LL;

	t87 = (x357^((x358^x359)%x360));

	if (t87 != -31664LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	volatile uint8_t x362 = 1U;
	int32_t x363 = INT32_MIN;
	static volatile int16_t x364 = INT16_MIN;
	volatile int32_t t88 = 103531756;

	t88 = (x361^((x362^x363)%x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 76106277217777094LLU;
	int32_t x368 = INT32_MIN;
	uint64_t t89 = 2644493470LLU;

	t89 = (x365^((x366^x367)%x368));

	if (t89 != 18370637794436330970LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x369 = UINT32_MAX;
	int32_t x370 = -1;
	static int8_t x371 = INT8_MAX;

	t90 = (x369^((x370^x371)%x372));

	if (t90 != -4294967169LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = UINT64_MAX;
	int8_t x374 = 59;
	int32_t x375 = -27101055;
	int32_t x376 = INT32_MIN;
	static uint64_t t91 = 1145LLU;

	t91 = (x373^((x374^x375)%x376));

	if (t91 != 27100997LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x377 = -41;
	int16_t x378 = INT16_MIN;
	static uint8_t x379 = 28U;
	int16_t x380 = -1;

	t92 = (x377^((x378^x379)%x380));

	if (t92 != -41) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x382 = -1;
	uint8_t x383 = 14U;
	int16_t x384 = -1;

	t93 = (x381^((x382^x383)%x384));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x385 = -107694947;
	static int8_t x388 = -9;
	static volatile int32_t t94 = -41956417;

	t94 = (x385^((x386^x387)%x388));

	if (t94 != 107694944) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x390 = 50;
	int8_t x391 = -20;
	static volatile int32_t t95 = -1434999;

	t95 = (x389^((x390^x391)%x392));

	if (t95 != -2147483615) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = 3LL;
	uint32_t x395 = UINT32_MAX;
	int64_t t96 = -425183LL;

	t96 = (x393^((x394^x395)%x396));

	if (t96 != -31382LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = INT8_MAX;
	int64_t x399 = INT64_MAX;
	int16_t x400 = -50;
	volatile int64_t t97 = -202651890879113LL;

	t97 = (x397^((x398^x399)%x400));

	if (t97 != 579LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x401 = UINT64_MAX;
	int16_t x402 = -149;
	volatile uint64_t x403 = 14515893LLU;
	int16_t x404 = -1;
	uint64_t t98 = 6023462136LLU;

	t98 = (x401^((x402^x403)%x404));

	if (t98 != 14515745LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MIN;
	static uint32_t x407 = 270299820U;
	int64_t x408 = -1000373528323LL;
	volatile int64_t t99 = 24608331661873391LL;

	t99 = (x405^((x406^x407)%x408));

	if (t99 != -1877182591LL) { NG(); } else { ; }
	
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

