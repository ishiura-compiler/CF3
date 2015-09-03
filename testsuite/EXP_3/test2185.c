#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MAX;
uint32_t x12 = UINT32_MAX;
static int8_t x13 = INT8_MAX;
static int64_t x14 = INT64_MAX;
uint16_t x15 = 31898U;
static volatile int64_t t2 = 1192671928LL;
int64_t x19 = 39315844752LL;
int32_t x31 = INT32_MAX;
static int64_t x32 = -1LL;
volatile uint64_t x36 = 0LLU;
static uint64_t t6 = 3846259903954373LLU;
static int32_t x37 = INT32_MIN;
int32_t x38 = INT32_MIN;
static uint64_t x39 = 3408687749152113335LLU;
uint64_t t7 = 173845232LLU;
static int64_t t10 = 0LL;
int8_t x58 = 0;
volatile int32_t t12 = 8039;
int64_t x67 = INT64_MIN;
uint64_t x68 = UINT64_MAX;
volatile uint64_t t14 = 1299244553769305LLU;
int64_t x72 = INT64_MAX;
int64_t x75 = -1LL;
int8_t x76 = INT8_MIN;
static volatile int64_t t16 = 96379552LL;
int16_t x80 = INT16_MIN;
static volatile uint32_t t17 = 904166U;
int16_t x85 = INT16_MIN;
int16_t x88 = -1;
static uint64_t t20 = 681666293972453658LLU;
static volatile int64_t t21 = 1331933LL;
uint32_t x106 = 909652330U;
static int8_t x120 = INT8_MIN;
static volatile uint8_t x122 = 8U;
int32_t t29 = 1151;
int8_t x136 = INT8_MIN;
int8_t x139 = INT8_MIN;
uint32_t x146 = 4U;
static uint64_t t34 = 28272332LLU;
int8_t x155 = 41;
int64_t t36 = -88513816LL;
volatile int8_t x164 = INT8_MAX;
static int16_t x167 = INT16_MAX;
int64_t t38 = 32LL;
int16_t x195 = INT16_MAX;
int32_t x204 = -1;
volatile uint64_t x206 = 40010161LLU;
int16_t x210 = -1;
volatile uint64_t t48 = 123284688622863LLU;
int64_t x222 = -1LL;
int64_t x224 = INT64_MIN;
int8_t x226 = -2;
uint32_t t51 = 7U;
int64_t t53 = -37405267821147470LL;
int8_t x241 = 1;
volatile int8_t x242 = -1;
volatile int32_t t55 = 2;
static int8_t x248 = 24;
volatile int32_t t57 = 3140966;
volatile int64_t x254 = -51303865758264907LL;
static int32_t x258 = INT32_MIN;
static uint64_t x272 = 608048LLU;
volatile uint64_t t62 = 1095293478865608LLU;
volatile uint16_t x285 = UINT16_MAX;
int8_t x296 = INT8_MAX;
int8_t x300 = -1;
int64_t x307 = 654377388LL;
volatile int64_t t69 = -525804847520672LL;
int16_t x310 = -1;
volatile uint64_t x313 = 1LLU;
static uint8_t x314 = 3U;
uint64_t x317 = UINT64_MAX;
uint8_t x323 = UINT8_MAX;
volatile int32_t x324 = -1;
volatile int32_t t73 = 347;
int8_t x325 = -61;
int32_t x327 = INT32_MAX;
int16_t x328 = -1882;
int32_t t75 = 94305;
uint16_t x333 = 0U;
int16_t x342 = INT16_MIN;
uint8_t x350 = 22U;
static volatile uint16_t x351 = 6595U;
volatile int64_t t80 = -11172844490131LL;
static uint32_t t81 = 4016U;
volatile int16_t x364 = INT16_MAX;
static volatile uint32_t t83 = 453U;
int16_t x368 = INT16_MIN;
static volatile uint64_t x370 = 2971309109112195185LLU;
uint32_t x376 = 4546953U;
int8_t x380 = INT8_MAX;
static uint16_t x382 = UINT16_MAX;
volatile uint64_t t88 = 119990817677218LLU;
int16_t x388 = 4460;
volatile uint8_t x390 = 3U;
uint16_t x395 = 8U;
uint64_t x400 = 689723663139972LLU;
int8_t x401 = -1;
int64_t x411 = -1LL;
int64_t x416 = -1LL;
volatile int64_t t95 = -65547760LL;
volatile uint64_t t96 = 488118210538LLU;
int8_t x429 = INT8_MIN;
int16_t x431 = INT16_MIN;
int16_t x434 = -1;


void f0(void) {
	volatile int32_t x1 = 0;
	uint64_t x2 = 1022371LLU;
	uint16_t x3 = 370U;
	volatile uint64_t t0 = 78060375946742LLU;

	t0 = ((x1^x2)+(x3^x4));

	if (t0 != 9223372036855797808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x9 = UINT8_MAX;
	int64_t x10 = INT64_MIN;
	int16_t x11 = -1;
	int64_t t1 = 32137LL;

	t1 = ((x9^x10)+(x11^x12));

	if (t1 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x16 = -1455504959LL;

	t2 = ((x13^x14)+(x15^x16));

	if (t2 != 9223372035399269595LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	static int16_t x18 = -6;
	uint16_t x20 = 0U;
	int64_t t3 = 45763LL;

	t3 = ((x17^x18)+(x19^x20));

	if (t3 != 39315844629LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	static int8_t x22 = -1;
	static int64_t x23 = 692362LL;
	volatile uint64_t x24 = 6LLU;
	volatile uint64_t t4 = 7467LLU;

	t4 = ((x21^x22)+(x23^x24));

	if (t4 != 692236LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = 147595752LL;
	int64_t x30 = INT64_MAX;
	volatile int64_t t5 = -1926LL;

	t5 = ((x29^x30)+(x31^x32));

	if (t5 != 9223372034559696407LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	int32_t x34 = INT32_MIN;
	static volatile int64_t x35 = 92582852154407LL;

	t6 = ((x33^x34)+(x35^x36));

	if (t6 != 92584999638054LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x40 = UINT64_MAX;

	t7 = ((x37^x38)+(x39^x40));

	if (t7 != 15038056324557438280LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 716370U;
	uint32_t x42 = UINT32_MAX;
	uint32_t x43 = 1338146434U;
	uint16_t x44 = UINT16_MAX;
	volatile uint32_t t8 = 68797U;

	t8 = ((x41^x42)+(x43^x44));

	if (t8 != 1337430826U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = 41;
	int16_t x46 = INT16_MAX;
	static int8_t x47 = -6;
	volatile int8_t x48 = INT8_MAX;
	int32_t t9 = -3039535;

	t9 = ((x45^x46)+(x47^x48));

	if (t9 != 32603) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 1U;
	int32_t x50 = -1;
	int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MIN;

	t10 = ((x49^x50)+(x51^x52));

	if (t10 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	int64_t x54 = -1LL;
	int8_t x55 = -1;
	uint32_t x56 = UINT32_MAX;
	uint64_t t11 = 8664302LLU;

	t11 = ((x53^x54)+(x55^x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 167U;
	volatile uint8_t x59 = UINT8_MAX;
	static int8_t x60 = -52;

	t12 = ((x57^x58)+(x59^x60));

	if (t12 != -38) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 141575LLU;
	int8_t x62 = -1;
	volatile int32_t x63 = -35848;
	int8_t x64 = INT8_MIN;
	static volatile uint64_t t13 = 6LLU;

	t13 = ((x61^x62)+(x63^x64));

	if (t13 != 18446744073709446000LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x65 = 113218U;
	static volatile int64_t x66 = INT64_MIN;

	t14 = ((x65^x66)+(x67^x68));

	if (t14 != 113217LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 1;
	int32_t x70 = INT32_MIN;
	int64_t x71 = -1798286076400LL;
	volatile int64_t t15 = 1LL;

	t15 = ((x69^x70)+(x71^x72));

	if (t15 != -9223370240716183056LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MAX;
	int16_t x74 = INT16_MAX;

	t16 = ((x73^x74)+(x75^x76));

	if (t16 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -597;
	static uint32_t x78 = UINT32_MAX;
	int16_t x79 = -2255;

	t17 = ((x77^x78)+(x79^x80));

	if (t17 != 31109U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x86 = 42;
	int8_t x87 = 8;
	static volatile int32_t t18 = 4800157;

	t18 = ((x85^x86)+(x87^x88));

	if (t18 != -32735) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x90 = 179;
	static uint32_t x91 = 1689371589U;
	static int8_t x92 = -1;
	volatile uint32_t t19 = 215833U;

	t19 = ((x89^x90)+(x91^x92));

	if (t19 != 2605595782U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = UINT8_MAX;
	volatile uint64_t x94 = 10300LLU;
	static uint16_t x95 = 1526U;
	uint16_t x96 = 41U;

	t20 = ((x93^x94)+(x95^x96));

	if (t20 != 11938LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MAX;
	static int64_t x98 = INT64_MIN;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;

	t21 = ((x97^x98)+(x99^x100));

	if (t21 != -9223372034707292290LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = 6;
	uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MIN;
	static int16_t x104 = 22;
	volatile uint32_t t22 = 4089202U;

	t22 = ((x101^x102)+(x103^x104));

	if (t22 != 4294967183U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x105 = -1;
	uint8_t x107 = UINT8_MAX;
	int32_t x108 = INT32_MIN;
	static uint32_t t23 = 2237981U;

	t23 = ((x105^x106)+(x107^x108));

	if (t23 != 1237831572U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MAX;
	int8_t x110 = 1;
	int32_t x111 = -550917;
	static int32_t x112 = -768358;
	volatile int32_t t24 = 37745198;

	t24 = ((x109^x110)+(x111^x112));

	if (t24 != 250335) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -1;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = UINT32_MAX;
	static volatile int64_t x116 = -10211LL;
	static int64_t t25 = 34758889LL;

	t25 = ((x113^x114)+(x115^x116));

	if (t25 != -4294957086LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x117 = INT8_MIN;
	uint32_t x118 = 27680U;
	int8_t x119 = INT8_MIN;
	volatile uint32_t t26 = 563349308U;

	t26 = ((x117^x118)+(x119^x120));

	if (t26 != 4294939552U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = 3;
	uint64_t x123 = 166223LLU;
	int32_t x124 = INT32_MAX;
	static volatile uint64_t t27 = 196LLU;

	t27 = ((x121^x122)+(x123^x124));

	if (t27 != 2147317435LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x125 = INT8_MAX;
	int64_t x126 = 243LL;
	static uint64_t x127 = 4235051384LLU;
	int16_t x128 = INT16_MAX;
	volatile uint64_t t28 = 3LLU;

	t28 = ((x125^x126)+(x127^x128));

	if (t28 != 4235050771LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 18003U;
	int8_t x130 = -15;
	volatile int32_t x131 = INT32_MIN;
	static int16_t x132 = INT16_MAX;

	t29 = ((x129^x130)+(x131^x132));

	if (t29 != -2147468895) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MAX;
	int64_t x135 = -930018937470544LL;
	int64_t t30 = 2927634LL;

	t30 = ((x133^x134)+(x135^x136));

	if (t30 != -9222442015769821649LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 0U;
	int64_t x138 = -17LL;
	uint8_t x140 = UINT8_MAX;
	volatile int64_t t31 = 14LL;

	t31 = ((x137^x138)+(x139^x140));

	if (t31 != -146LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 2225U;
	static int32_t x142 = INT32_MIN;
	uint16_t x143 = UINT16_MAX;
	uint64_t x144 = 1013060LLU;
	volatile uint64_t t32 = 415473LLU;

	t32 = ((x141^x142)+(x143^x144));

	if (t32 != 18446744071563088748LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -1;
	int16_t x147 = INT16_MIN;
	int64_t x148 = 7843008191LL;
	static volatile int64_t t33 = -9781879527219LL;

	t33 = ((x145^x146)+(x147^x148));

	if (t33 != -3548033350LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = -39;
	uint64_t x150 = 240167900LLU;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = 141241913;

	t34 = ((x149^x150)+(x151^x152));

	if (t34 != 18446744073610625739LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x153 = INT8_MIN;
	static int16_t x154 = INT16_MIN;
	int64_t x156 = -81631742865336LL;
	volatile int64_t t35 = 42LL;

	t35 = ((x153^x154)+(x155^x156));

	if (t35 != -81631742832671LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = UINT32_MAX;
	volatile int32_t x158 = INT32_MIN;
	int16_t x159 = INT16_MIN;
	static int64_t x160 = 2309747881LL;

	t36 = ((x157^x158)+(x159^x160));

	if (t36 != -162237272LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -2;
	int8_t x162 = -19;
	int64_t x163 = INT64_MIN;
	volatile int64_t t37 = 329LL;

	t37 = ((x161^x162)+(x163^x164));

	if (t37 != -9223372036854775662LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = -28086983112LL;
	int64_t x168 = -1LL;

	t38 = ((x165^x166)+(x167^x168));

	if (t38 != 29895042616LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = UINT32_MAX;
	uint16_t x170 = UINT16_MAX;
	int16_t x171 = INT16_MIN;
	int8_t x172 = -1;
	uint32_t t39 = 1796U;

	t39 = ((x169^x170)+(x171^x172));

	if (t39 != 4294934527U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -1;
	uint64_t x174 = 2323103LLU;
	volatile int16_t x175 = -1;
	volatile int32_t x176 = 188148;
	volatile uint64_t t40 = 3LLU;

	t40 = ((x173^x174)+(x175^x176));

	if (t40 != 18446744073707040363LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 399U;
	int64_t x178 = INT64_MAX;
	int8_t x179 = INT8_MIN;
	static uint8_t x180 = UINT8_MAX;
	volatile int64_t t41 = 0LL;

	t41 = ((x177^x178)+(x179^x180));

	if (t41 != 9223372036854775279LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = -1LL;
	uint64_t x186 = 7433988LLU;
	int16_t x187 = 1238;
	uint32_t x188 = 761U;
	uint64_t t42 = 2261252408568302978LLU;

	t42 = ((x185^x186)+(x187^x188));

	if (t42 != 18446744073702119210LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = -6;
	static int64_t x190 = -40284074LL;
	int32_t x191 = INT32_MAX;
	int16_t x192 = 1;
	int64_t t43 = 0LL;

	t43 = ((x189^x190)+(x191^x192));

	if (t43 != 2187767722LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x193 = 2695U;
	static int8_t x194 = -1;
	int16_t x196 = 3492;
	static int32_t t44 = -7035447;

	t44 = ((x193^x194)+(x195^x196));

	if (t44 != 26579) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = -4;
	int32_t x198 = -1;
	int8_t x199 = -1;
	int64_t x200 = 1937968542LL;
	volatile int64_t t45 = -29LL;

	t45 = ((x197^x198)+(x199^x200));

	if (t45 != -1937968540LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MIN;
	volatile uint32_t x202 = 1068016U;
	static uint32_t x203 = 232326U;
	uint32_t t46 = 7679U;

	t46 = ((x201^x202)+(x203^x204));

	if (t46 != 2148319337U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	static volatile uint8_t x208 = 1U;
	volatile uint64_t t47 = 4310279853852653087LLU;

	t47 = ((x205^x206)+(x207^x208));

	if (t47 != 18446744073669541298LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x209 = UINT32_MAX;
	int64_t x211 = INT64_MIN;
	static uint64_t x212 = 3415236LLU;

	t48 = ((x209^x210)+(x211^x212));

	if (t48 != 9223372036858191044LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = -2;
	int32_t x218 = 12;
	static int8_t x219 = INT8_MIN;
	uint8_t x220 = 57U;
	volatile int32_t t49 = 1;

	t49 = ((x217^x218)+(x219^x220));

	if (t49 != -85) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = 9403052367LL;
	int64_t x223 = INT64_MIN;
	volatile int64_t t50 = -2426983570909168867LL;

	t50 = ((x221^x222)+(x223^x224));

	if (t50 != -9403052368LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MIN;
	volatile uint32_t x227 = 627714153U;
	int16_t x228 = -1;

	t51 = ((x225^x226)+(x227^x228));

	if (t51 != 3667253268U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -1;
	static int8_t x230 = -4;
	static int32_t x231 = -1;
	int16_t x232 = 3886;
	volatile int32_t t52 = -33;

	t52 = ((x229^x230)+(x231^x232));

	if (t52 != -3884) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x233 = -1LL;
	uint8_t x234 = 55U;
	int8_t x235 = INT8_MIN;
	int32_t x236 = -1;

	t53 = ((x233^x234)+(x235^x236));

	if (t53 != 71LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = -1LL;
	uint8_t x239 = 90U;
	int64_t x240 = 3315LL;
	static int64_t t54 = -2535035512085172775LL;

	t54 = ((x237^x238)+(x239^x240));

	if (t54 != 2147486888LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x243 = INT32_MIN;
	uint8_t x244 = 5U;

	t55 = ((x241^x242)+(x243^x244));

	if (t55 != -2147483645) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	volatile int8_t x246 = 4;
	uint16_t x247 = UINT16_MAX;
	volatile int32_t t56 = -6;

	t56 = ((x245^x246)+(x247^x248));

	if (t56 != 32747) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x249 = 0;
	int16_t x250 = INT16_MIN;
	volatile int8_t x251 = -1;
	int16_t x252 = -43;

	t57 = ((x249^x250)+(x251^x252));

	if (t57 != -32726) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x253 = 0U;
	volatile int8_t x255 = -1;
	static volatile int8_t x256 = -1;
	volatile int64_t t58 = -42LL;

	t58 = ((x253^x254)+(x255^x256));

	if (t58 != -51303865758264907LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x257 = UINT32_MAX;
	static uint64_t x259 = UINT64_MAX;
	volatile int8_t x260 = 15;
	volatile uint64_t t59 = 26LLU;

	t59 = ((x257^x258)+(x259^x260));

	if (t59 != 2147483631LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = -1;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	static uint32_t x264 = 8989U;
	volatile uint32_t t60 = 39372460U;

	t60 = ((x261^x262)+(x263^x264));

	if (t60 != 4294958364U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MAX;
	volatile int16_t x271 = INT16_MAX;
	static uint64_t t61 = 1066430192892760703LLU;

	t61 = ((x269^x270)+(x271^x272));

	if (t61 != 9223372036855380302LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x273 = -3720769548904LL;
	int32_t x274 = 470720049;
	uint32_t x275 = UINT32_MAX;
	uint64_t x276 = 15808191LLU;

	t62 = ((x273^x274)+(x275^x276));

	if (t62 != 18446740357151694057LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x277 = UINT64_MAX;
	volatile uint16_t x278 = 1870U;
	uint16_t x279 = 4628U;
	int32_t x280 = INT32_MAX;
	uint64_t t63 = 4771622323462020964LLU;

	t63 = ((x277^x278)+(x279^x280));

	if (t63 != 2147477148LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MAX;
	static volatile int64_t x283 = INT64_MAX;
	static uint32_t x284 = 18128U;
	int64_t t64 = 291LL;

	t64 = ((x281^x282)+(x283^x284));

	if (t64 != -18002LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x286 = INT64_MAX;
	int32_t x287 = -1485092;
	uint16_t x288 = 1067U;
	int64_t t65 = 3797LL;

	t65 = ((x285^x286)+(x287^x288));

	if (t65 != 9223372036853224183LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x293 = 0U;
	int8_t x294 = INT8_MIN;
	int64_t x295 = -1LL;
	volatile int64_t t66 = 4163LL;

	t66 = ((x293^x294)+(x295^x296));

	if (t66 != -256LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x297 = INT16_MIN;
	int32_t x298 = INT32_MAX;
	uint64_t x299 = UINT64_MAX;
	uint64_t t67 = 6LLU;

	t67 = ((x297^x298)+(x299^x300));

	if (t67 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x301 = 5U;
	int16_t x302 = INT16_MIN;
	uint64_t x303 = 2154LLU;
	uint32_t x304 = UINT32_MAX;
	uint64_t t68 = 396500567448894LLU;

	t68 = ((x301^x302)+(x303^x304));

	if (t68 != 8589899674LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x305 = INT8_MIN;
	volatile int16_t x306 = 1;
	int8_t x308 = INT8_MAX;

	t69 = ((x305^x306)+(x307^x308));

	if (t69 != 654377300LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x309 = 1U;
	uint32_t x311 = 27U;
	int16_t x312 = INT16_MIN;
	uint32_t t70 = 379U;

	t70 = ((x309^x310)+(x311^x312));

	if (t70 != 4294934553U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x315 = UINT32_MAX;
	int16_t x316 = -2;
	uint64_t t71 = 271336070819061360LLU;

	t71 = ((x313^x314)+(x315^x316));

	if (t71 != 3LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x318 = 5U;
	volatile int8_t x319 = 1;
	uint32_t x320 = 43894293U;
	uint64_t t72 = 1056642152121641LLU;

	t72 = ((x317^x318)+(x319^x320));

	if (t72 != 43894286LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x321 = 295186272;
	volatile int32_t x322 = 188;

	t73 = ((x321^x322)+(x323^x324));

	if (t73 != 295186140) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x326 = INT16_MIN;
	int32_t t74 = -1;

	t74 = ((x325^x326)+(x327^x328));

	if (t74 != -2147449060) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x329 = 57;
	static int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	uint8_t x332 = 2U;

	t75 = ((x329^x330)+(x331^x332));

	if (t75 != -65477) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x334 = -4;
	static volatile int32_t x335 = INT32_MAX;
	volatile int8_t x336 = INT8_MIN;
	int32_t t76 = -2;

	t76 = ((x333^x334)+(x335^x336));

	if (t76 != -2147483525) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x337 = INT8_MAX;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = -1LL;
	static uint8_t x340 = 11U;
	int64_t t77 = -860104LL;

	t77 = ((x337^x338)+(x339^x340));

	if (t77 != 116LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x341 = -15117268;
	volatile uint32_t x343 = 1432U;
	int8_t x344 = INT8_MIN;
	volatile uint32_t t78 = 5676580U;

	t78 = ((x341^x342)+(x343^x344));

	if (t78 != 15126084U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = -5813312;
	uint64_t x346 = 13436780397LLU;
	static volatile int64_t x347 = INT64_MIN;
	volatile uint32_t x348 = 86058927U;
	volatile uint64_t t79 = 1288367479582226LLU;

	t79 = ((x345^x346)+(x347^x348));

	if (t79 != 9223372023506721884LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = -1LL;
	uint32_t x352 = UINT32_MAX;

	t80 = ((x349^x350)+(x351^x352));

	if (t80 != 4294960677LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x353 = 31165400U;
	static uint8_t x354 = 2U;
	int16_t x355 = -1;
	int8_t x356 = INT8_MIN;

	t81 = ((x353^x354)+(x355^x356));

	if (t81 != 31165529U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x357 = 65U;
	static int16_t x358 = -1;
	static uint16_t x359 = UINT16_MAX;
	static int8_t x360 = -1;
	volatile int32_t t82 = -6;

	t82 = ((x357^x358)+(x359^x360));

	if (t82 != -65602) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = INT32_MIN;
	uint32_t x362 = UINT32_MAX;
	volatile int32_t x363 = 284269399;

	t83 = ((x361^x362)+(x363^x364));

	if (t83 != 2431771815U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x365 = 10LLU;
	uint16_t x366 = 0U;
	int16_t x367 = INT16_MIN;
	volatile uint64_t t84 = 2875239894481LLU;

	t84 = ((x365^x366)+(x367^x368));

	if (t84 != 10LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x369 = INT64_MAX;
	int32_t x371 = INT32_MIN;
	uint16_t x372 = 228U;
	uint64_t t85 = 36538124572LLU;

	t85 = ((x369^x370)+(x371^x372));

	if (t85 != 6252062925595097202LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x373 = UINT32_MAX;
	static volatile int16_t x374 = INT16_MAX;
	int64_t x375 = -1LL;
	static int64_t t86 = 12920LL;

	t86 = ((x373^x374)+(x375^x376));

	if (t86 != 4290387574LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = 971352;
	int16_t x378 = 3;
	static volatile int64_t x379 = -26855583275306LL;
	static volatile int64_t t87 = 245315LL;

	t87 = ((x377^x378)+(x379^x380));

	if (t87 != -26855582303996LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = -1LL;
	volatile int64_t x383 = 41LL;
	uint64_t x384 = 31687963LLU;

	t88 = ((x381^x382)+(x383^x384));

	if (t88 != 31622450LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x385 = -668;
	static volatile uint16_t x386 = 85U;
	uint64_t x387 = 69894372843019338LLU;
	static volatile uint64_t t89 = 7808LLU;

	t89 = ((x385^x386)+(x387^x388));

	if (t89 != 69894372843014743LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x389 = UINT8_MAX;
	static int64_t x391 = INT64_MAX;
	static int32_t x392 = INT32_MAX;
	int64_t t90 = 27624745LL;

	t90 = ((x389^x390)+(x391^x392));

	if (t90 != 9223372034707292412LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x393 = UINT8_MAX;
	uint64_t x394 = 3540967502722634LLU;
	static volatile int32_t x396 = -1;
	volatile uint64_t t91 = 885001826206LLU;

	t91 = ((x393^x394)+(x395^x396));

	if (t91 != 3540967502722732LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	static int8_t x399 = INT8_MIN;
	uint64_t t92 = 400814209LLU;

	t92 = ((x397^x398)+(x399^x400));

	if (t92 != 18446054350046411524LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x402 = INT16_MAX;
	static volatile int8_t x403 = INT8_MIN;
	int16_t x404 = -1;
	volatile int32_t t93 = -941;

	t93 = ((x401^x402)+(x403^x404));

	if (t93 != -32641) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x409 = UINT32_MAX;
	static volatile uint64_t x410 = 479310LLU;
	static int32_t x412 = -1;
	volatile uint64_t t94 = 42160392LLU;

	t94 = ((x409^x410)+(x411^x412));

	if (t94 != 4294487985LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x413 = INT32_MAX;
	uint16_t x414 = 41U;
	static uint32_t x415 = 264357849U;

	t95 = ((x413^x414)+(x415^x416));

	if (t95 != 1883125756LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x417 = INT32_MAX;
	int32_t x418 = 1;
	int16_t x419 = INT16_MIN;
	static uint64_t x420 = 139LLU;

	t96 = ((x417^x418)+(x419^x420));

	if (t96 != 2147451017LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = INT8_MAX;
	int32_t x422 = INT32_MIN;
	int8_t x423 = -1;
	uint64_t x424 = 90769178298172LLU;
	volatile uint64_t t97 = 25LLU;

	t97 = ((x421^x422)+(x423^x424));

	if (t97 != 18446653302383769922LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x430 = -1LL;
	int16_t x432 = -1;
	static int64_t t98 = -2444590161848LL;

	t98 = ((x429^x430)+(x431^x432));

	if (t98 != 32894LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x433 = UINT64_MAX;
	uint8_t x435 = 98U;
	int64_t x436 = INT64_MIN;
	static uint64_t t99 = 3623775687LLU;

	t99 = ((x433^x434)+(x435^x436));

	if (t99 != 9223372036854775906LLU) { NG(); } else { ; }
	
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

