#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1;
int16_t x7 = -327;
static int32_t t1 = 82482752;
static volatile int64_t t2 = -1989344401833098104LL;
static int64_t x13 = -1LL;
int8_t x14 = -40;
int16_t x20 = INT16_MAX;
int16_t x24 = INT16_MIN;
int64_t x28 = INT64_MAX;
static int64_t t6 = 32112LL;
uint64_t x30 = 221332LLU;
static volatile uint32_t x31 = 2686891U;
int32_t x32 = INT32_MIN;
int16_t x45 = -1;
int64_t x49 = -690024LL;
uint16_t x50 = 96U;
static uint64_t x52 = 15654058884205LLU;
int16_t x58 = -1;
int64_t x60 = INT64_MIN;
uint16_t x69 = 2U;
int64_t x85 = -2043521LL;
int64_t x96 = INT64_MIN;
uint32_t x98 = 11U;
int8_t x99 = INT8_MIN;
int32_t t24 = -487111;
volatile int64_t t27 = 1584582LL;
volatile int32_t x119 = -202965541;
int8_t x128 = -29;
int16_t x134 = INT16_MIN;
int8_t x136 = INT8_MIN;
uint64_t x137 = UINT64_MAX;
int32_t t34 = 1294;
int64_t t35 = 966540LL;
int32_t x155 = INT32_MIN;
uint64_t t38 = 2686847189134LLU;
int16_t x161 = INT16_MIN;
uint64_t t41 = 39400497441400LLU;
uint32_t x179 = UINT32_MAX;
int64_t x182 = -1LL;
volatile int8_t x192 = -1;
uint8_t x195 = 3U;
volatile int32_t t48 = -527315554;
int8_t x201 = 6;
int64_t x202 = INT64_MAX;
volatile int32_t t51 = -159;
uint64_t x215 = 77449336108LLU;
volatile uint32_t x216 = UINT32_MAX;
int8_t x218 = INT8_MAX;
static volatile int32_t t56 = 1;
volatile int32_t t59 = INT32_MAX;
static uint64_t x246 = 501194399295LLU;
int16_t x252 = INT16_MIN;
uint64_t x257 = 59846796485LLU;
volatile int8_t x261 = INT8_MIN;
volatile int32_t t65 = 319731;
static int16_t x265 = -1972;
uint64_t x267 = 283635942LLU;
int8_t x270 = INT8_MAX;
int16_t x271 = -11006;
int32_t x272 = 557578;
volatile int32_t t67 = -208;
int32_t t70 = -142103563;
volatile int32_t x290 = -1;
volatile uint32_t x292 = 2708U;
static uint16_t x294 = 66U;
int64_t x296 = -1LL;
volatile int8_t x300 = -1;
volatile int8_t x304 = INT8_MAX;
static uint64_t t78 = 54167984198LLU;
int16_t x317 = INT16_MIN;
int32_t x319 = -1;
static uint8_t x322 = UINT8_MAX;
int8_t x323 = 1;
int32_t x331 = INT32_MIN;
uint16_t x333 = UINT16_MAX;
int16_t x335 = INT16_MAX;
volatile int32_t t83 = -866408;
uint8_t x337 = 6U;
static int64_t x339 = INT64_MAX;
int32_t t85 = -44099;
volatile int64_t x347 = INT64_MIN;
static uint32_t x353 = 1161098U;
volatile int8_t x354 = -1;
int64_t x359 = INT64_MIN;
int32_t x365 = INT32_MIN;
uint16_t x367 = 494U;
uint32_t x368 = 10197U;
volatile uint32_t t91 = 18882899U;
static int32_t x369 = -3631;
static uint32_t x371 = UINT32_MAX;
volatile uint64_t t92 = 416617918LLU;
uint8_t x375 = UINT8_MAX;
static int32_t x376 = -1737;
int32_t t93 = 0;
int32_t t94 = 27465;
static int64_t x384 = -1LL;
static int64_t x386 = -1LL;
volatile int32_t t96 = 2;
int8_t x394 = 6;
uint64_t x395 = UINT64_MAX;
volatile uint64_t x397 = 1620LLU;


void f0(void) {
	static uint32_t x2 = 2880133U;
	int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 83;

	t0 = ((x1==x2)+(x3^x4));

	if (t0 != 2147450880) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int16_t x6 = -8180;
	int8_t x8 = 2;

	t1 = ((x5==x6)+(x7^x8));

	if (t1 != -325) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int8_t x10 = -1;
	int64_t x11 = -99LL;
	static volatile int16_t x12 = INT16_MIN;

	t2 = ((x9==x10)+(x11^x12));

	if (t2 != 32669LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = 3015;

	t3 = ((x13==x14)+(x15^x16));

	if (t3 != -256) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 5175;
	int64_t x18 = -108599116LL;
	static int8_t x19 = -51;
	static int32_t t4 = 52100935;

	t4 = ((x17==x18)+(x19^x20));

	if (t4 != -32718) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 4;
	uint32_t x22 = 2U;
	static int8_t x23 = INT8_MAX;
	volatile int32_t t5 = 2;

	t5 = ((x21==x22)+(x23^x24));

	if (t5 != -32641) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -21571454513011018LL;
	volatile int8_t x26 = -3;
	int8_t x27 = 8;

	t6 = ((x25==x26)+(x27^x28));

	if (t6 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static volatile uint32_t t7 = 91U;

	t7 = ((x29==x30)+(x31^x32));

	if (t7 != 2150170539U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 25U;
	volatile int8_t x34 = INT8_MIN;
	int16_t x35 = -1;
	uint32_t x36 = 830116U;
	volatile uint32_t t8 = 3U;

	t8 = ((x33==x34)+(x35^x36));

	if (t8 != 4294137179U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 46U;
	int8_t x38 = INT8_MIN;
	volatile int8_t x39 = -1;
	volatile int64_t x40 = INT64_MIN;
	volatile int64_t t9 = INT64_MAX;

	t9 = ((x37==x38)+(x39^x40));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -3;
	int8_t x42 = -13;
	uint64_t x43 = 1315844263699LLU;
	uint64_t x44 = 368677LLU;
	volatile uint64_t t10 = 4812881LLU;

	t10 = ((x41==x42)+(x43^x44));

	if (t10 != 1315844108086LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = 17U;
	int16_t x47 = 4;
	volatile int16_t x48 = INT16_MIN;
	int32_t t11 = -187821639;

	t11 = ((x45==x46)+(x47^x48));

	if (t11 != -32764) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x51 = INT64_MIN;
	static uint64_t t12 = 1533112891193815573LLU;

	t12 = ((x49==x50)+(x51^x52));

	if (t12 != 9223387690913660013LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MAX;
	static int16_t x54 = -1;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MAX;
	int64_t t13 = 69663018700713LL;

	t13 = ((x53==x54)+(x55^x56));

	if (t13 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 15U;
	uint32_t x59 = 99722U;
	volatile int64_t t14 = -296198LL;

	t14 = ((x57==x58)+(x59^x60));

	if (t14 != -9223372036854676086LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = -1;
	int64_t x62 = INT64_MAX;
	volatile int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 13;

	t15 = ((x61==x62)+(x63^x64));

	if (t15 != 2147483520) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	volatile uint16_t x66 = 17U;
	uint16_t x67 = 3U;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 0;

	t16 = ((x65==x66)+(x67^x68));

	if (t16 != -125) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 561U;
	int64_t x71 = 56768LL;
	int64_t x72 = -22LL;
	volatile int64_t t17 = 16976858401LL;

	t17 = ((x69==x70)+(x71^x72));

	if (t17 != -56790LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int32_t x74 = -9;
	int32_t x75 = -11632164;
	volatile uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = 554U;

	t18 = ((x73==x74)+(x75^x76));

	if (t18 != 11632163U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 0U;
	static int64_t x78 = 15314409382035LL;
	volatile uint16_t x79 = UINT16_MAX;
	static uint16_t x80 = 9U;
	int32_t t19 = -1994;

	t19 = ((x77==x78)+(x79^x80));

	if (t19 != 65526) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	int8_t x82 = INT8_MAX;
	int64_t x83 = INT64_MIN;
	int32_t x84 = -1;
	volatile int64_t t20 = INT64_MAX;

	t20 = ((x81==x82)+(x83^x84));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x86 = 23;
	uint8_t x87 = 1U;
	int32_t x88 = 5709;
	volatile int32_t t21 = 312704646;

	t21 = ((x85==x86)+(x87^x88));

	if (t21 != 5708) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 219976444396LLU;
	volatile uint8_t x90 = 11U;
	uint16_t x91 = 2839U;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t22 = 494U;

	t22 = ((x89==x90)+(x91^x92));

	if (t22 != 4294964456U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -13;
	int8_t x94 = -1;
	uint8_t x95 = 29U;
	int64_t t23 = -1920224447LL;

	t23 = ((x93==x94)+(x95^x96));

	if (t23 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MAX;
	int8_t x100 = -1;

	t24 = ((x97==x98)+(x99^x100));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = 3;
	int64_t x102 = INT64_MIN;
	static int16_t x103 = INT16_MAX;
	int8_t x104 = -1;
	int32_t t25 = 3415447;

	t25 = ((x101==x102)+(x103^x104));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static volatile int8_t x106 = 58;
	int64_t x107 = -1LL;
	uint32_t x108 = 3U;
	volatile int64_t t26 = -14837190738332LL;

	t26 = ((x105==x106)+(x107^x108));

	if (t26 != -4LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	volatile int8_t x110 = -1;
	int16_t x111 = -3158;
	int64_t x112 = 96978298127535LL;

	t27 = ((x109==x110)+(x111^x112));

	if (t27 != -96978298128634LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 69569606576367957LLU;
	int64_t x114 = INT64_MIN;
	int32_t x115 = 2832;
	int8_t x116 = -1;
	static int32_t t28 = 0;

	t28 = ((x113==x114)+(x115^x116));

	if (t28 != -2833) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -3022;
	int64_t x118 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -21;

	t29 = ((x117==x118)+(x119^x120));

	if (t29 != 202965595) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 0U;
	static uint16_t x122 = 1388U;
	int32_t x123 = INT32_MAX;
	int16_t x124 = -1;
	int32_t t30 = INT32_MIN;

	t30 = ((x121==x122)+(x123^x124));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 12LLU;
	int16_t x126 = INT16_MIN;
	volatile uint16_t x127 = UINT16_MAX;
	int32_t t31 = -14;

	t31 = ((x125==x126)+(x127^x128));

	if (t31 != -65508) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static volatile int64_t x130 = INT64_MIN;
	volatile uint8_t x131 = 50U;
	int64_t x132 = INT64_MIN;
	int64_t t32 = -107668351579277LL;

	t32 = ((x129==x130)+(x131^x132));

	if (t32 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x135 = 146U;
	uint32_t t33 = 14368U;

	t33 = ((x133==x134)+(x135^x136));

	if (t33 != 4294967058U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = UINT32_MAX;
	volatile int16_t x139 = 10719;
	int32_t x140 = -124745513;

	t34 = ((x137==x138)+(x139^x140));

	if (t34 != -124739320) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	static volatile uint64_t x142 = 4528LLU;
	int32_t x143 = INT32_MAX;
	volatile int64_t x144 = -27005LL;

	t35 = ((x141==x142)+(x143^x144));

	if (t35 != -2147456644LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	int32_t x146 = -102398857;
	int64_t x147 = INT64_MIN;
	static int16_t x148 = INT16_MIN;
	int64_t t36 = 80581800670563386LL;

	t36 = ((x145==x146)+(x147^x148));

	if (t36 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static int8_t x150 = INT8_MIN;
	volatile int32_t x151 = -1;
	int8_t x152 = INT8_MAX;
	static volatile int32_t t37 = -612;

	t37 = ((x149==x150)+(x151^x152));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = -16;
	static uint64_t x156 = 151451601859802LLU;

	t38 = ((x153==x154)+(x155^x156));

	if (t38 != 18446592620595377370LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 45102;
	int32_t x158 = -250497;
	volatile int32_t x159 = INT32_MIN;
	volatile uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -14761;

	t39 = ((x157==x158)+(x159^x160));

	if (t39 != -2147418113) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x162 = INT8_MAX;
	static uint8_t x163 = 17U;
	int32_t x164 = INT32_MAX;
	int32_t t40 = -14646821;

	t40 = ((x161==x162)+(x163^x164));

	if (t40 != 2147483630) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -6106;
	int8_t x166 = -1;
	uint64_t x167 = 1840848LLU;
	uint16_t x168 = UINT16_MAX;

	t41 = ((x165==x166)+(x167^x168));

	if (t41 != 1894703LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = -15;
	uint64_t x170 = 52856212685LLU;
	volatile int16_t x171 = -10348;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = -3;

	t42 = ((x169==x170)+(x171^x172));

	if (t42 != -10389) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = 6U;
	int64_t x174 = INT64_MAX;
	static volatile uint8_t x175 = UINT8_MAX;
	uint16_t x176 = 433U;
	int32_t t43 = 1;

	t43 = ((x173==x174)+(x175^x176));

	if (t43 != 334) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MAX;
	volatile int64_t x180 = -1LL;
	volatile int64_t t44 = 0LL;

	t44 = ((x177==x178)+(x179^x180));

	if (t44 != -4294967296LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	int32_t x183 = INT32_MIN;
	uint32_t x184 = 2803U;
	uint32_t t45 = 544U;

	t45 = ((x181==x182)+(x183^x184));

	if (t45 != 2147486452U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 1110963216786453LLU;
	static volatile int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	volatile int16_t x188 = 165;
	volatile int64_t t46 = 21057012468026962LL;

	t46 = ((x185==x186)+(x187^x188));

	if (t46 != 9223372036854775642LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x189 = UINT8_MAX;
	int64_t x190 = INT64_MIN;
	int32_t x191 = 8;
	int32_t t47 = 16189620;

	t47 = ((x189==x190)+(x191^x192));

	if (t47 != -9) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 0U;
	static volatile uint16_t x194 = UINT16_MAX;
	int32_t x196 = -1;

	t48 = ((x193==x194)+(x195^x196));

	if (t48 != -4) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = -1LL;
	static int32_t x198 = 64;
	static int32_t x199 = -3035;
	int8_t x200 = -1;
	static int32_t t49 = 79265;

	t49 = ((x197==x198)+(x199^x200));

	if (t49 != 3034) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x203 = 8348U;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 120146;

	t50 = ((x201==x202)+(x203^x204));

	if (t50 != -8420) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = 7U;
	int8_t x208 = -1;

	t51 = ((x205==x206)+(x207^x208));

	if (t51 != -8) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = 0;
	static int32_t x210 = INT32_MIN;
	int8_t x211 = -6;
	uint16_t x212 = 14U;
	int32_t t52 = 629097746;

	t52 = ((x209==x210)+(x211^x212));

	if (t52 != -12) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 2;
	uint16_t x214 = UINT16_MAX;
	static uint64_t t53 = 1904657LLU;

	t53 = ((x213==x214)+(x215^x216));

	if (t53 != 81464453843LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MIN;
	volatile uint32_t x219 = 335113889U;
	int32_t x220 = -4698123;
	uint32_t t54 = 74512084U;

	t54 = ((x217==x218)+(x219^x220));

	if (t54 != 3963691348U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	volatile int64_t x222 = -1LL;
	int32_t x223 = -53;
	int64_t x224 = -27958LL;
	int64_t t55 = 421106236326138LL;

	t55 = ((x221==x222)+(x223^x224));

	if (t55 != 27905LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MAX;
	volatile int16_t x226 = -208;
	volatile int32_t x227 = 8922;
	volatile int32_t x228 = INT32_MIN;

	t56 = ((x225==x226)+(x227^x228));

	if (t56 != -2147474726) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x230 = -1;
	int16_t x231 = -2960;
	int16_t x232 = -1;
	int32_t t57 = 2370;

	t57 = ((x229==x230)+(x231^x232));

	if (t57 != 2960) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 3;
	uint16_t x234 = UINT16_MAX;
	int16_t x235 = 1;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t58 = -229438;

	t58 = ((x233==x234)+(x235^x236));

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -2;
	int32_t x238 = INT32_MAX;
	volatile uint8_t x239 = 0U;
	volatile int32_t x240 = INT32_MAX;

	t59 = ((x237==x238)+(x239^x240));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	volatile int32_t x242 = INT32_MIN;
	uint16_t x243 = 18185U;
	int16_t x244 = INT16_MAX;
	volatile int32_t t60 = 29943;

	t60 = ((x241==x242)+(x243^x244));

	if (t60 != 14582) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 1U;
	uint16_t x247 = 5298U;
	static uint16_t x248 = 2256U;
	static volatile int32_t t61 = -28763415;

	t61 = ((x245==x246)+(x247^x248));

	if (t61 != 7266) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = -1939082861654152LL;
	static int64_t x250 = INT64_MIN;
	int16_t x251 = -845;
	volatile int32_t t62 = 4093489;

	t62 = ((x249==x250)+(x251^x252));

	if (t62 != 31923) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = 0;
	volatile int64_t x254 = -1LL;
	int16_t x255 = INT16_MAX;
	int16_t x256 = -1;
	volatile int32_t t63 = -637551939;

	t63 = ((x253==x254)+(x255^x256));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x258 = 4U;
	uint8_t x259 = 1U;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t64 = 215LLU;

	t64 = ((x257==x258)+(x259^x260));

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MIN;
	int16_t x263 = 43;
	volatile uint8_t x264 = 0U;

	t65 = ((x261==x262)+(x263^x264));

	if (t65 != 43) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = -17626422378386991LL;
	int32_t x268 = INT32_MAX;
	uint64_t t66 = 2571LLU;

	t66 = ((x265==x266)+(x267^x268));

	if (t66 != 1863847705LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 7U;

	t67 = ((x269==x270)+(x271^x272));

	if (t67 != -567544) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MAX;
	int64_t x274 = 3132344LL;
	int16_t x275 = INT16_MAX;
	int8_t x276 = -5;
	volatile int32_t t68 = 0;

	t68 = ((x273==x274)+(x275^x276));

	if (t68 != -32764) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 172355770925559922LLU;
	volatile int8_t x278 = 1;
	static volatile int32_t x279 = -1;
	uint32_t x280 = 5U;
	static uint32_t t69 = 3316U;

	t69 = ((x277==x278)+(x279^x280));

	if (t69 != 4294967290U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MIN;
	uint16_t x282 = UINT16_MAX;
	int16_t x283 = -1;
	uint16_t x284 = 3855U;

	t70 = ((x281==x282)+(x283^x284));

	if (t70 != -3856) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 31U;
	volatile uint32_t x286 = UINT32_MAX;
	int64_t x287 = INT64_MIN;
	static int32_t x288 = -128543;
	volatile int64_t t71 = -162508554LL;

	t71 = ((x285==x286)+(x287^x288));

	if (t71 != 9223372036854647265LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -7124278;
	int8_t x291 = 3;
	static volatile uint32_t t72 = 101U;

	t72 = ((x289==x290)+(x291^x292));

	if (t72 != 2711U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = UINT8_MAX;
	int64_t x295 = 102054383LL;
	int64_t t73 = 20212LL;

	t73 = ((x293==x294)+(x295^x296));

	if (t73 != -102054384LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = -1;
	volatile uint32_t x298 = 4416U;
	int8_t x299 = INT8_MIN;
	int32_t t74 = -59;

	t74 = ((x297==x298)+(x299^x300));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x302 = 11U;
	static uint32_t x303 = UINT32_MAX;
	volatile uint32_t t75 = 14U;

	t75 = ((x301==x302)+(x303^x304));

	if (t75 != 4294967168U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 0U;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	int8_t x308 = 5;
	volatile int32_t t76 = -118;

	t76 = ((x305==x306)+(x307^x308));

	if (t76 != -32763) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	uint16_t x310 = 3U;
	uint8_t x311 = UINT8_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t77 = 400U;

	t77 = ((x309==x310)+(x311^x312));

	if (t77 != 4294967040U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -978368;
	volatile int32_t x314 = -1;
	static uint64_t x315 = 16298404130723LLU;
	static int16_t x316 = INT16_MIN;

	t78 = ((x313==x314)+(x315^x316));

	if (t78 != 18446727775305412515LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x318 = 6913891LLU;
	static volatile int32_t x320 = INT32_MAX;
	static int32_t t79 = INT32_MIN;

	t79 = ((x317==x318)+(x319^x320));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 10U;
	volatile uint8_t x324 = UINT8_MAX;
	static volatile int32_t t80 = 25693519;

	t80 = ((x321==x322)+(x323^x324));

	if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	static int16_t x327 = INT16_MIN;
	uint8_t x328 = UINT8_MAX;
	int32_t t81 = -698;

	t81 = ((x325==x326)+(x327^x328));

	if (t81 != -32512) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int16_t x330 = 32;
	volatile uint64_t x332 = 5332503457259027822LLU;
	volatile uint64_t t82 = 66016719951LLU;

	t82 = ((x329==x330)+(x331^x332));

	if (t82 != 13114240616365522286LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = -1LL;
	static int16_t x336 = INT16_MIN;

	t83 = ((x333==x334)+(x335^x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x338 = UINT64_MAX;
	uint32_t x340 = 52127986U;
	int64_t t84 = -876216494984LL;

	t84 = ((x337==x338)+(x339^x340));

	if (t84 != 9223372036802647821LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 3398748603368052LLU;
	int64_t x342 = INT64_MAX;
	volatile int32_t x343 = INT32_MIN;
	uint8_t x344 = 4U;

	t85 = ((x341==x342)+(x343^x344));

	if (t85 != -2147483644) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -346;
	uint64_t x346 = UINT64_MAX;
	int16_t x348 = -1;
	int64_t t86 = INT64_MAX;

	t86 = ((x345==x346)+(x347^x348));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 1U;
	int64_t x350 = -3757097096969LL;
	int16_t x351 = INT16_MAX;
	static volatile uint8_t x352 = UINT8_MAX;
	static volatile int32_t t87 = 529104131;

	t87 = ((x349==x350)+(x351^x352));

	if (t87 != 32512) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 4;

	t88 = ((x353==x354)+(x355^x356));

	if (t88 != 2147450880) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	volatile int16_t x358 = -839;
	static uint64_t x360 = 13529LLU;
	volatile uint64_t t89 = 269266019307LLU;

	t89 = ((x357==x358)+(x359^x360));

	if (t89 != 9223372036854789337LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 174361360911181082LLU;
	int32_t x362 = 83976;
	uint8_t x363 = 10U;
	int64_t x364 = INT64_MIN;
	static int64_t t90 = 62LL;

	t90 = ((x361==x362)+(x363^x364));

	if (t90 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x366 = 34;

	t91 = ((x365==x366)+(x367^x368));

	if (t91 != 9787U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x370 = 3U;
	uint64_t x372 = 1858LLU;

	t92 = ((x369==x370)+(x371^x372));

	if (t92 != 4294965437LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 2741694562110045LL;
	int8_t x374 = INT8_MIN;

	t93 = ((x373==x374)+(x375^x376));

	if (t93 != -1592) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	static int32_t x378 = -1;
	volatile uint16_t x379 = 3U;
	static volatile int32_t x380 = -1;

	t94 = ((x377==x378)+(x379^x380));

	if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 1580U;
	static int64_t t95 = 244275LL;

	t95 = ((x381==x382)+(x383^x384));

	if (t95 != -1581LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 1U;
	int16_t x387 = -842;
	int8_t x388 = 2;

	t96 = ((x385==x386)+(x387^x388));

	if (t96 != -844) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MAX;
	uint8_t x391 = UINT8_MAX;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = -5111;

	t97 = ((x389==x390)+(x391^x392));

	if (t97 != 65280) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 20U;
	uint64_t x396 = 18106170972014236LLU;
	uint64_t t98 = 5918658LLU;

	t98 = ((x393==x394)+(x395^x396));

	if (t98 != 18428637902737537379LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = 8;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = 208030690242423950LLU;
	static volatile uint64_t t99 = 5LLU;

	t99 = ((x397==x398)+(x399^x400));

	if (t99 != 18238713381396114574LLU) { NG(); } else { ; }
	
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

