#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 1U;
uint64_t x8 = UINT64_MAX;
int32_t x10 = INT32_MIN;
int8_t x13 = INT8_MIN;
int32_t x14 = -1;
static int64_t t3 = 1074959041703594LL;
static uint64_t t5 = 1647817162276521612LLU;
uint16_t x25 = 14404U;
int16_t x28 = INT16_MIN;
uint32_t x32 = UINT32_MAX;
int32_t x39 = 160;
volatile int8_t x41 = -1;
static volatile int64_t t10 = 10648599LL;
static int16_t x49 = INT16_MIN;
volatile uint8_t x58 = 23U;
int64_t x63 = -1LL;
int32_t x68 = INT32_MAX;
volatile int64_t x70 = -1LL;
volatile int64_t t15 = -524241LL;
volatile int64_t t16 = 4673053150018037LL;
uint8_t x79 = UINT8_MAX;
int8_t x83 = -1;
int8_t x84 = 3;
int32_t x90 = 5574595;
uint32_t x95 = 465U;
uint32_t t20 = 14029429U;
uint64_t x98 = 0LLU;
static uint32_t x101 = 8037U;
uint32_t x102 = 1594653U;
int64_t x104 = -1LL;
uint8_t x117 = 0U;
static uint64_t x120 = UINT64_MAX;
uint64_t x124 = 172LLU;
int16_t x128 = -1533;
int8_t x131 = -1;
int64_t x133 = INT64_MAX;
int64_t x135 = -10785414086LL;
volatile uint64_t x138 = 53176153446153277LLU;
volatile int16_t x145 = -1;
static int8_t x150 = 61;
volatile int64_t t32 = -120442LL;
int16_t x159 = -1822;
int32_t t34 = -14200;
int16_t x172 = INT16_MIN;
uint8_t x176 = 1U;
int64_t t38 = -2438571586992455LL;
uint64_t x183 = 407LLU;
int16_t x188 = 12052;
uint64_t t40 = 492435434889LLU;
static int16_t x189 = -5793;
int8_t x197 = INT8_MIN;
int64_t x199 = INT64_MIN;
uint8_t x200 = 1U;
int32_t x201 = INT32_MIN;
int64_t x203 = -259944961105448LL;
int32_t x207 = 1425550;
uint64_t t46 = 154763017223849612LLU;
int16_t x216 = INT16_MIN;
int8_t x218 = INT8_MAX;
int64_t x221 = INT64_MAX;
static volatile uint64_t x227 = 21LLU;
int8_t x233 = -1;
volatile int64_t x235 = -1LL;
int16_t x248 = 2;
int64_t x256 = -7125966985LL;
int32_t x260 = -117728341;
static int64_t x261 = 142586483454996321LL;
int16_t x262 = INT16_MIN;
volatile uint16_t x264 = UINT16_MAX;
volatile int16_t x268 = INT16_MAX;
int64_t t57 = INT64_MAX;
volatile int32_t t58 = 1;
uint64_t t59 = 27LLU;
int8_t x282 = INT8_MIN;
uint16_t x283 = 337U;
volatile uint32_t x297 = 6555209U;
int8_t x303 = -1;
int8_t x304 = -52;
static volatile int64_t t66 = 1206027853LL;
volatile int8_t x311 = INT8_MIN;
uint64_t x318 = 21026696811580374LLU;
int32_t x323 = INT32_MIN;
volatile int32_t t70 = 2842;
int32_t x328 = -1;
uint64_t x334 = 257418455662281LLU;
static volatile uint64_t x339 = 228114397514361LLU;
static int32_t x351 = -14;
volatile int64_t t76 = -5693603966557063LL;
int8_t x361 = 32;
uint32_t x362 = 459U;
int64_t t79 = 176070LL;
uint32_t x365 = 316323776U;
volatile int8_t x371 = 13;
int8_t x376 = 40;
uint64_t t83 = 411LLU;
static int16_t x386 = -1;
int64_t t86 = 198LL;
volatile int16_t x406 = -427;
static uint8_t x409 = UINT8_MAX;
int8_t x425 = 4;
static int64_t x426 = 58322598828660104LL;
int64_t x428 = INT64_MIN;
int64_t x430 = -167027537LL;
uint8_t x432 = 20U;
static int16_t x433 = -1;
static volatile int16_t x436 = INT16_MAX;
int64_t x441 = -1455LL;
volatile uint64_t t97 = 169920358LLU;
int8_t x446 = 0;
int64_t t98 = -223644640580LL;
int8_t x450 = INT8_MIN;
int16_t x452 = -4;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	volatile int32_t x3 = INT32_MIN;
	volatile int64_t x4 = INT64_MAX;
	int64_t t0 = -522481LL;

	t0 = ((x1^x2)|(x3+x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 5706U;
	uint32_t x6 = UINT32_MAX;
	static int8_t x7 = -1;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = ((x5^x6)|(x7+x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 81U;
	volatile uint8_t x11 = UINT8_MAX;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 3280;

	t2 = ((x9^x10)|(x11+x12));

	if (t2 != -32513) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x15 = 10066;
	static int64_t x16 = INT64_MIN;

	t3 = ((x13^x14)|(x15+x16));

	if (t3 != -9223372036854765697LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 76909;
	int8_t x18 = INT8_MAX;
	int32_t x19 = INT32_MIN;
	int64_t x20 = -1LL;
	int64_t t4 = -1842368039LL;

	t4 = ((x17^x18)|(x19+x20));

	if (t4 != -2147483649LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -29;
	static volatile int32_t x22 = -2;
	int32_t x23 = 215779;
	static uint64_t x24 = 19804428224138LLU;

	t5 = ((x21^x22)|(x23+x24));

	if (t5 != 19804428439933LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	int8_t x27 = INT8_MAX;
	volatile int64_t t6 = 20144428105LL;

	t6 = ((x25^x26)|(x27+x28));

	if (t6 != -14337LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1531LL;
	volatile uint32_t x30 = UINT32_MAX;
	static int32_t x31 = INT32_MAX;
	volatile int64_t t7 = 0LL;

	t7 = ((x29^x30)|(x31+x32));

	if (t7 != -2147483650LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -54;
	uint64_t x38 = UINT64_MAX;
	uint8_t x40 = 32U;
	uint64_t t8 = 1779383471490848207LLU;

	t8 = ((x37^x38)|(x39+x40));

	if (t8 != 245LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = -3050;
	int64_t x43 = -356980335LL;
	int16_t x44 = -3;
	volatile int64_t t9 = -25374856534526LL;

	t9 = ((x41^x42)|(x43+x44));

	if (t9 != -356979729LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 1;
	uint32_t x46 = 93061U;
	volatile int64_t x47 = 108243586LL;
	int64_t x48 = -3704628757286384LL;

	t10 = ((x45^x46)|(x47+x48));

	if (t10 != -3704628649033834LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = -28832;
	int32_t x51 = INT32_MIN;
	volatile uint32_t x52 = 12280U;
	uint32_t t11 = 824644U;

	t11 = ((x49^x50)|(x51+x52));

	if (t11 != 2147495928U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MAX;
	uint8_t x59 = 13U;
	uint8_t x60 = 3U;
	int32_t t12 = 6025;

	t12 = ((x57^x58)|(x59+x60));

	if (t12 != 120) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = 3;
	volatile uint16_t x62 = UINT16_MAX;
	uint16_t x64 = 948U;
	int64_t t13 = 506036844414232279LL;

	t13 = ((x61^x62)|(x63+x64));

	if (t13 != 65535LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1;
	int32_t x66 = -1;
	int32_t x67 = INT32_MIN;
	int32_t t14 = -28402;

	t14 = ((x65^x66)|(x67+x68));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	int64_t x71 = 0LL;
	uint8_t x72 = 2U;

	t15 = ((x69^x70)|(x71+x72));

	if (t15 != -32766LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = INT64_MIN;
	uint16_t x74 = 173U;
	volatile uint32_t x75 = UINT32_MAX;
	int8_t x76 = 62;

	t16 = ((x73^x74)|(x75+x76));

	if (t16 != -9223372036854775619LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 5;
	static int16_t x78 = -84;
	int16_t x80 = INT16_MAX;
	int32_t t17 = 40423;

	t17 = ((x77^x78)|(x79+x80));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	int32_t t18 = -6412;

	t18 = ((x81^x82)|(x83+x84));

	if (t18 != -129) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x89 = INT32_MAX;
	static uint8_t x91 = UINT8_MAX;
	volatile uint8_t x92 = UINT8_MAX;
	volatile int32_t t19 = -605;

	t19 = ((x89^x90)|(x91+x92));

	if (t19 != 2141909502) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	volatile int16_t x94 = INT16_MAX;
	uint8_t x96 = 3U;

	t20 = ((x93^x94)|(x95+x96));

	if (t20 != 4294935039U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = INT8_MIN;
	uint8_t x99 = UINT8_MAX;
	static volatile uint16_t x100 = 4U;
	volatile uint64_t t21 = 1774693652097357306LLU;

	t21 = ((x97^x98)|(x99+x100));

	if (t21 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x103 = 10434U;
	volatile int64_t t22 = -245769358245327317LL;

	t22 = ((x101^x102)|(x103+x104));

	if (t22 != 1600249LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = 74;
	uint32_t x107 = 1U;
	int32_t x108 = -126130;
	volatile int64_t t23 = 196LL;

	t23 = ((x105^x106)|(x107+x108));

	if (t23 != -9223372032559934641LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = -2359639LL;
	volatile int32_t x114 = -1;
	int8_t x115 = INT8_MIN;
	uint8_t x116 = 86U;
	int64_t t24 = 3771036537LL;

	t24 = ((x113^x114)|(x115+x116));

	if (t24 != -42LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MIN;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = ((x117^x118)|(x119+x120));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 72636555282LLU;
	int32_t x122 = INT32_MAX;
	int8_t x123 = -1;
	uint64_t t26 = 282LLU;

	t26 = ((x121^x122)|(x123+x124));

	if (t26 != 71244849135LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 3540614LL;
	static uint16_t x126 = UINT16_MAX;
	int16_t x127 = INT16_MAX;
	volatile int64_t t27 = -410651637467618146LL;

	t27 = ((x125^x126)|(x127+x128));

	if (t27 != 3603323LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -1;
	int32_t x130 = -1;
	volatile uint64_t x132 = 74800LLU;
	uint64_t t28 = 5667855LLU;

	t28 = ((x129^x130)|(x131+x132));

	if (t28 != 74799LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x134 = UINT8_MAX;
	int32_t x136 = INT32_MIN;
	int64_t t29 = 76366800488975417LL;

	t29 = ((x133^x134)|(x135+x136));

	if (t29 != -198LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x137 = 962U;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 37U;
	static uint64_t t30 = 5368LLU;

	t30 = ((x137^x138)|(x139+x140));

	if (t30 != 53176157595500543LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x146 = UINT16_MAX;
	int16_t x147 = INT16_MIN;
	uint64_t x148 = 650LLU;
	volatile uint64_t t31 = 3019728494LLU;

	t31 = ((x145^x146)|(x147+x148));

	if (t31 != 18446744073709519498LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x149 = INT64_MIN;
	uint8_t x151 = 1U;
	uint16_t x152 = 11U;

	t32 = ((x149^x150)|(x151+x152));

	if (t32 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = UINT8_MAX;
	uint32_t x154 = UINT32_MAX;
	static int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MAX;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = ((x153^x154)|(x155+x156));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = INT16_MAX;
	static int16_t x158 = -1;
	int32_t x160 = -1;

	t34 = ((x157^x158)|(x159+x160));

	if (t34 != -1823) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x161 = 74U;
	uint8_t x162 = 5U;
	static int16_t x163 = -1;
	int32_t x164 = INT32_MAX;
	volatile int32_t t35 = INT32_MAX;

	t35 = ((x161^x162)|(x163+x164));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x169 = -1;
	static uint64_t x170 = 383545183723865LLU;
	uint16_t x171 = 6687U;
	uint64_t t36 = 271LLU;

	t36 = ((x169^x170)|(x171+x172));

	if (t36 != 18446744073709526719LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = 14341U;
	int64_t x174 = INT64_MIN;
	int16_t x175 = -1;
	volatile int64_t t37 = 10022156717958LL;

	t37 = ((x173^x174)|(x175+x176));

	if (t37 != -9223372036854761467LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = -1;
	uint8_t x178 = 3U;
	volatile int64_t x179 = 1385LL;
	int8_t x180 = INT8_MIN;

	t38 = ((x177^x178)|(x179+x180));

	if (t38 != -3LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x181 = INT16_MIN;
	uint32_t x182 = UINT32_MAX;
	int64_t x184 = INT64_MIN;
	uint64_t t39 = 9365380171175970LLU;

	t39 = ((x181^x182)|(x183+x184));

	if (t39 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x185 = 7LLU;
	int16_t x186 = INT16_MIN;
	int8_t x187 = -1;

	t40 = ((x185^x186)|(x187+x188));

	if (t40 != 18446744073709530903LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x190 = INT16_MAX;
	int32_t x191 = INT32_MIN;
	static int32_t x192 = 189702655;
	volatile int32_t t41 = 0;

	t41 = ((x189^x190)|(x191+x192));

	if (t41 != -18433) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x193 = INT64_MIN;
	uint8_t x194 = 1U;
	int16_t x195 = INT16_MAX;
	volatile int8_t x196 = INT8_MIN;
	int64_t t42 = 350LL;

	t42 = ((x193^x194)|(x195+x196));

	if (t42 != -9223372036854743169LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x198 = UINT32_MAX;
	volatile int64_t t43 = -1LL;

	t43 = ((x197^x198)|(x199+x200));

	if (t43 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x202 = -11418871351806032LL;
	volatile int32_t x204 = -1;
	int64_t t44 = 30521749622LL;

	t44 = ((x201^x202)|(x203+x204));

	if (t44 != -118782186031113LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = -1LL;
	static int64_t x206 = INT64_MIN;
	int32_t x208 = 3440;
	volatile int64_t t45 = INT64_MAX;

	t45 = ((x205^x206)|(x207+x208));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = 9686996188690LLU;
	int8_t x210 = INT8_MIN;
	volatile int16_t x211 = INT16_MIN;
	int32_t x212 = -9255900;

	t46 = ((x209^x210)|(x211+x212));

	if (t46 != 18446744073700820406LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = -1;
	static int64_t x214 = -1LL;
	int16_t x215 = INT16_MAX;
	volatile int64_t t47 = 135545LL;

	t47 = ((x213^x214)|(x215+x216));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x217 = 6;
	uint64_t x219 = 157394768309153222LLU;
	static int16_t x220 = -1;
	volatile uint64_t t48 = 8564250994LLU;

	t48 = ((x217^x218)|(x219+x220));

	if (t48 != 157394768309153277LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x222 = 18;
	static volatile int8_t x223 = INT8_MIN;
	static int8_t x224 = INT8_MIN;
	int64_t t49 = -2879130223925877LL;

	t49 = ((x221^x222)|(x223+x224));

	if (t49 != -19LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MAX;
	static int16_t x226 = INT16_MAX;
	int8_t x228 = -1;
	uint64_t t50 = 187364LLU;

	t50 = ((x225^x226)|(x227+x228));

	if (t50 != 32660LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = UINT8_MAX;
	int32_t x230 = 134702;
	int8_t x231 = INT8_MIN;
	volatile int16_t x232 = -1;
	volatile int32_t t51 = 1;

	t51 = ((x229^x230)|(x231+x232));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x234 = UINT16_MAX;
	int16_t x236 = INT16_MAX;
	volatile int64_t t52 = -572380533592LL;

	t52 = ((x233^x234)|(x235+x236));

	if (t52 != -32770LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x245 = UINT16_MAX;
	volatile uint32_t x246 = 1591134823U;
	volatile int64_t x247 = INT64_MIN;
	static volatile int64_t t53 = -73LL;

	t53 = ((x245^x246)|(x247+x248));

	if (t53 != -9223372035263679078LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x253 = UINT8_MAX;
	volatile uint32_t x254 = 1018U;
	int16_t x255 = INT16_MAX;
	volatile int64_t t54 = 62LL;

	t54 = ((x253^x254)|(x255+x256));

	if (t54 != -7125934217LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = 5;
	volatile int8_t x259 = 61;
	volatile int64_t t55 = -2982LL;

	t55 = ((x257^x258)|(x259+x260));

	if (t55 != -117728275LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x263 = INT64_MIN;
	int64_t t56 = 7396754261012LL;

	t56 = ((x261^x262)|(x263+x264));

	if (t56 != -142586483454967809LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x265 = INT64_MIN;
	volatile int32_t x266 = -1;
	volatile int8_t x267 = -18;

	t57 = ((x265^x266)|(x267+x268));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = INT16_MIN;
	uint8_t x274 = 36U;
	int16_t x275 = -1162;
	int32_t x276 = -13886;

	t58 = ((x273^x274)|(x275+x276));

	if (t58 != -15044) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = -12648500;
	volatile uint64_t x278 = 681317103497LLU;
	uint8_t x279 = UINT8_MAX;
	volatile uint16_t x280 = 151U;

	t59 = ((x277^x278)|(x279+x280));

	if (t59 != 18446743392396708311LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x281 = 789670LLU;
	static uint8_t x284 = 32U;
	static volatile uint64_t t60 = 47182109485092LLU;

	t60 = ((x281^x282)|(x283+x284));

	if (t60 != 18446744073708761975LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x285 = INT64_MIN;
	int16_t x286 = -1;
	uint64_t x287 = 1009940135565695LLU;
	int32_t x288 = INT32_MIN;
	volatile uint64_t t61 = 60274841906174656LLU;

	t61 = ((x285^x286)|(x287+x288));

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x289 = -1529;
	int64_t x290 = 138502717LL;
	static int8_t x291 = 6;
	uint32_t x292 = 7800U;
	int64_t t62 = -50487313LL;

	t62 = ((x289^x290)|(x291+x292));

	if (t62 != -138502530LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x293 = UINT64_MAX;
	volatile uint32_t x294 = 13504476U;
	int64_t x295 = -105365648944422LL;
	uint32_t x296 = UINT32_MAX;
	uint64_t t63 = 1635LLU;

	t63 = ((x293^x294)|(x295+x296));

	if (t63 != 18446744073709417211LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x298 = 28;
	int32_t x299 = -9903;
	int32_t x300 = -1;
	volatile uint32_t t64 = 8U;

	t64 = ((x297^x298)|(x299+x300));

	if (t64 != 4294958933U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MAX;
	volatile int64_t t65 = -31913LL;

	t65 = ((x301^x302)|(x303+x304));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x305 = INT8_MIN;
	int64_t x306 = 15076226298LL;
	static int64_t x307 = -11910LL;
	uint8_t x308 = UINT8_MAX;

	t66 = ((x305^x306)|(x307+x308));

	if (t66 != -9349LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x309 = 39528017753078LLU;
	int16_t x310 = INT16_MIN;
	int64_t x312 = -7717294591860668LL;
	volatile uint64_t t67 = 6370967168387LLU;

	t67 = ((x309^x310)|(x311+x312));

	if (t67 != 18446705788366618614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x313 = 913660LLU;
	int16_t x314 = INT16_MIN;
	volatile uint8_t x315 = 56U;
	int8_t x316 = 59;
	volatile uint64_t t68 = 3390026045248074LLU;

	t68 = ((x313^x314)|(x315+x316));

	if (t68 != 18446744073708663039LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x317 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = 35U;
	uint64_t t69 = 180996LLU;

	t69 = ((x317^x318)|(x319+x320));

	if (t69 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = -1;
	int8_t x322 = -6;
	uint8_t x324 = 25U;

	t70 = ((x321^x322)|(x323+x324));

	if (t70 != -2147483619) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x325 = INT8_MIN;
	uint32_t x326 = 6554475U;
	uint8_t x327 = 0U;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x325^x326)|(x327+x328));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = -1;
	uint32_t x330 = 239477U;
	int8_t x331 = -1;
	static int64_t x332 = 427679LL;
	int64_t t72 = 550LL;

	t72 = ((x329^x330)|(x331+x332));

	if (t72 != 4294893214LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = 815;
	int16_t x335 = -1;
	uint64_t x336 = 130231953LLU;
	volatile uint64_t t73 = 1023916013922964894LLU;

	t73 = ((x333^x334)|(x335+x336));

	if (t73 != 257418459856886LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x337 = 54U;
	volatile int64_t x338 = INT64_MIN;
	int64_t x340 = 41303672499572LL;
	static uint64_t t74 = 8725219LLU;

	t74 = ((x337^x338)|(x339+x340));

	if (t74 != 9223641454924789759LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = INT32_MAX;
	static int64_t x346 = -1LL;
	uint64_t x347 = 1037359063322753696LLU;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t75 = 12314187372373327LLU;

	t75 = ((x345^x346)|(x347+x348));

	if (t75 != 18446744073338485408LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x349 = INT64_MAX;
	static volatile uint32_t x350 = 2646565U;
	static volatile uint16_t x352 = UINT16_MAX;

	t76 = ((x349^x350)|(x351+x352));

	if (t76 != 9223372036852154363LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x353 = INT64_MIN;
	int32_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int8_t x356 = -1;
	int64_t t77 = -167113598659487LL;

	t77 = ((x353^x354)|(x355+x356));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x357 = -1;
	static volatile int64_t x358 = -669462LL;
	volatile int32_t x359 = 59887626;
	int32_t x360 = -1;
	int64_t t78 = -42470978LL;

	t78 = ((x357^x358)|(x359+x360));

	if (t78 != 60552989LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x363 = 3519U;
	int64_t x364 = -1784286852367117625LL;

	t79 = ((x361^x362)|(x363+x364));

	if (t79 != -1784286852367113745LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x366 = 85U;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = -1;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x365^x366)|(x367+x368));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = -3;
	int16_t x372 = 31;
	int32_t t81 = -6;

	t81 = ((x369^x370)|(x371+x372));

	if (t81 != 125) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x373 = INT16_MAX;
	static uint16_t x374 = 38U;
	int8_t x375 = -15;
	int32_t t82 = 8797;

	t82 = ((x373^x374)|(x375+x376));

	if (t82 != 32729) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = 20367604LLU;
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MAX;
	static int64_t x380 = -1LL;

	t83 = ((x377^x378)|(x379+x380));

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = 26;
	int32_t x387 = 247;
	int8_t x388 = INT8_MAX;
	int32_t t84 = 1972;

	t84 = ((x385^x386)|(x387+x388));

	if (t84 != -9) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x389 = 0U;
	int16_t x390 = 1;
	static uint32_t x391 = 7745U;
	int32_t x392 = 3285;
	uint32_t t85 = 55U;

	t85 = ((x389^x390)|(x391+x392));

	if (t85 != 11031U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x393 = 210747;
	int16_t x394 = INT16_MIN;
	static int64_t x395 = INT64_MAX;
	int64_t x396 = -168LL;

	t86 = ((x393^x394)|(x395+x396));

	if (t86 != -129LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x397 = UINT32_MAX;
	static int8_t x398 = -30;
	int8_t x399 = -1;
	static int32_t x400 = -1;
	uint32_t t87 = UINT32_MAX;

	t87 = ((x397^x398)|(x399+x400));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = 0U;
	int16_t x402 = -1;
	int8_t x403 = -1;
	int16_t x404 = 0;
	volatile int32_t t88 = -2598;

	t88 = ((x401^x402)|(x403+x404));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x405 = 157U;
	volatile int32_t x407 = INT32_MAX;
	int32_t x408 = INT32_MIN;
	volatile int32_t t89 = -123824;

	t89 = ((x405^x406)|(x407+x408));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x410 = 5;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	volatile int32_t t90 = 11;

	t90 = ((x409^x410)|(x411+x412));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = INT64_MAX;
	static int32_t x414 = INT32_MIN;
	int16_t x415 = -1;
	static uint32_t x416 = 2U;
	volatile int64_t t91 = -115LL;

	t91 = ((x413^x414)|(x415+x416));

	if (t91 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = INT64_MIN;
	volatile uint16_t x418 = 386U;
	volatile int16_t x419 = -213;
	static uint16_t x420 = 449U;
	volatile int64_t t92 = -505840748LL;

	t92 = ((x417^x418)|(x419+x420));

	if (t92 != -9223372036854775314LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x427 = INT32_MAX;
	static int64_t t93 = 56681LL;

	t93 = ((x425^x426)|(x427+x428));

	if (t93 != -9165049436844326913LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = -1;
	uint8_t x431 = UINT8_MAX;
	int64_t t94 = 36729435LL;

	t94 = ((x429^x430)|(x431+x432));

	if (t94 != 167027539LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x434 = UINT16_MAX;
	uint32_t x435 = 101941138U;
	uint32_t t95 = 508U;

	t95 = ((x433^x434)|(x435+x436));

	if (t95 != 4294967185U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x437 = 1161544741LLU;
	int16_t x438 = INT16_MAX;
	uint16_t x439 = 1U;
	static int8_t x440 = 2;
	volatile uint64_t t96 = 1012570760222LLU;

	t96 = ((x437^x438)|(x439+x440));

	if (t96 != 1161542619LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x442 = -1;
	static volatile uint64_t x443 = UINT64_MAX;
	uint16_t x444 = 236U;

	t97 = ((x441^x442)|(x443+x444));

	if (t97 != 1519LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x445 = -1LL;
	int8_t x447 = INT8_MAX;
	int64_t x448 = 374870566604886LL;

	t98 = ((x445^x446)|(x447+x448));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = 15;
	int16_t x451 = 1;
	static int32_t t99 = 10;

	t99 = ((x449^x450)|(x451+x452));

	if (t99 != -1) { NG(); } else { ; }
	
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

