#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t t0 = 17675141616LLU;
uint64_t x10 = 3083873433565698LLU;
int8_t x11 = INT8_MIN;
volatile int16_t x12 = -1;
static volatile uint64_t t1 = 206521717432LLU;
volatile uint64_t t2 = 101745956LLU;
int8_t x18 = 0;
int16_t x25 = INT16_MAX;
uint64_t x27 = 229030710778LLU;
int8_t x29 = INT8_MAX;
int16_t x32 = -1;
uint64_t x34 = 28741817849255311LLU;
static uint32_t x35 = 1U;
volatile uint64_t t6 = 20132863702837LLU;
int32_t x47 = 0;
int8_t x48 = INT8_MIN;
static int8_t x62 = INT8_MAX;
int64_t t12 = -202753959586152797LL;
int32_t x68 = INT32_MIN;
volatile uint64_t t13 = 656148937LLU;
int8_t x69 = INT8_MIN;
int32_t x73 = INT32_MAX;
int64_t x80 = -62LL;
int16_t x82 = -1;
volatile uint64_t t21 = 340404641665932LLU;
int8_t x104 = -1;
int8_t x122 = -1;
uint32_t x124 = 191U;
uint8_t x143 = 1U;
uint8_t x151 = 14U;
int64_t x153 = INT64_MAX;
int64_t t32 = -12LL;
int8_t x175 = 2;
static uint32_t x176 = 393777U;
static int8_t x182 = -46;
static uint8_t x187 = 26U;
static int16_t x193 = INT16_MAX;
uint64_t x202 = UINT64_MAX;
uint64_t x211 = UINT64_MAX;
uint64_t t43 = 1952143077139025148LLU;
static uint32_t t44 = 18U;
int64_t x237 = INT64_MIN;
uint8_t x238 = 1U;
uint64_t t47 = 20431LLU;
static int64_t x241 = INT64_MIN;
uint64_t x242 = 421LLU;
int32_t x243 = -10;
volatile int64_t x248 = -122095LL;
int64_t t52 = -301905317LL;
static uint8_t x273 = 4U;
volatile int32_t x277 = -1;
volatile int32_t x294 = -29306711;
uint64_t x299 = UINT64_MAX;
static int32_t x300 = -13;
volatile uint64_t t59 = 1521067LLU;
uint64_t x303 = 317472816673LLU;
volatile int64_t x304 = 1214492LL;
int64_t x307 = 2216LL;
int16_t x308 = -239;
int64_t x309 = INT64_MIN;
volatile uint8_t x321 = 50U;
static int32_t t65 = -2;
int32_t x335 = 16133420;
uint64_t x336 = 1697367LLU;
uint8_t x340 = 1U;
int16_t x348 = INT16_MIN;
int64_t x353 = INT64_MAX;
uint32_t x355 = 3706739U;
int64_t x367 = 751399LL;
static uint32_t x373 = 71U;
int32_t x374 = 141;
static volatile int64_t t75 = -35920391893737LL;
uint16_t x379 = 3U;
uint64_t x383 = UINT64_MAX;
volatile uint64_t t78 = 6114865895620071099LLU;
volatile uint8_t x395 = UINT8_MAX;
volatile uint32_t t80 = 20839U;
static int8_t x398 = 10;
int32_t x403 = INT32_MAX;
volatile uint16_t x404 = 14U;
int32_t x408 = -351;
volatile int64_t t83 = 38061883409LL;
volatile uint64_t x411 = 6157414701LLU;
uint64_t t84 = 1909899224LLU;
uint8_t x417 = UINT8_MAX;
uint8_t x421 = UINT8_MAX;
static volatile uint32_t x422 = 0U;
volatile uint64_t t87 = 0LLU;
int8_t x439 = INT8_MIN;
int16_t x444 = -6317;
static volatile uint32_t x447 = 30992U;
static int32_t x456 = INT32_MIN;
volatile int32_t t92 = 14386;
int32_t x467 = 540;
int64_t x470 = 272685111575347135LL;
static int8_t x479 = -1;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MAX;
	uint64_t x4 = 34897566809537719LLU;

	t0 = (x1-((x2+x3)|x4));

	if (t0 != 4294967296LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = -2705;

	t1 = (x9-((x10+x11)|x12));

	if (t1 != 18446744073709548912LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = UINT16_MAX;
	uint16_t x14 = UINT16_MAX;
	static volatile uint64_t x15 = 20582017LLU;
	int32_t x16 = INT32_MAX;

	t2 = (x13-((x14+x15)|x16));

	if (t2 != 18446744071562133504LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = UINT32_MAX;
	uint32_t t3 = 160U;

	t3 = (x17-((x18+x19)|x20));

	if (t3 != 4294967169U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x26 = -1;
	int32_t x28 = INT32_MIN;
	uint64_t t4 = 861915213LLU;

	t4 = (x25-((x26+x27)|x28));

	if (t4 != 750072326LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x30 = INT8_MIN;
	int64_t x31 = -96LL;
	volatile int64_t t5 = -457167613393294LL;

	t5 = (x29-((x30+x31)|x32));

	if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = INT64_MIN;
	static int16_t x36 = INT16_MAX;

	t6 = (x33-((x34+x35)|x36));

	if (t6 != 9194630219005493249LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x37 = INT8_MAX;
	static int64_t x38 = INT64_MAX;
	int32_t x39 = -777194565;
	uint64_t x40 = UINT64_MAX;
	uint64_t t7 = 76704LLU;

	t7 = (x37-((x38+x39)|x40));

	if (t7 != 128LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MAX;
	volatile int64_t x42 = 49344050481431403LL;
	static volatile uint16_t x43 = UINT16_MAX;
	uint64_t x44 = 31604265725642051LLU;
	uint64_t t8 = 1908LLU;

	t8 = (x41-((x42+x43)|x44));

	if (t8 != 9151508027461941396LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 24U;
	static uint32_t x46 = 23860727U;
	uint32_t t9 = 0U;

	t9 = (x45-((x46+x47)|x48));

	if (t9 != 33U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = -1;
	int16_t x50 = -11;
	int64_t x51 = -130980LL;
	uint32_t x52 = 8426344U;
	int64_t t10 = 0LL;

	t10 = (x49-((x50+x51)|x52));

	if (t10 != 93318LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = INT32_MAX;
	uint32_t x54 = 1366422U;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;
	volatile uint32_t t11 = 6752073U;

	t11 = (x53-((x54+x55)|x56));

	if (t11 != 4293633641U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -1;
	uint16_t x63 = 3U;
	int64_t x64 = INT64_MIN;

	t12 = (x61-((x62+x63)|x64));

	if (t12 != 9223372036854775677LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x65 = -1;
	int16_t x66 = INT16_MAX;
	uint64_t x67 = UINT64_MAX;

	t13 = (x65-((x66+x67)|x68));

	if (t13 != 2147450881LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x70 = 1U;
	static volatile int64_t x71 = -452478LL;
	static int64_t x72 = -1LL;
	int64_t t14 = 1LL;

	t14 = (x69-((x70+x71)|x72));

	if (t14 != -127LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x74 = INT16_MAX;
	uint8_t x75 = 6U;
	static volatile uint8_t x76 = 61U;
	volatile int32_t t15 = -539469198;

	t15 = (x73-((x74+x75)|x76));

	if (t15 != 2147450818) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -1;
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = 230903;
	volatile uint64_t t16 = 463LLU;

	t16 = (x77-((x78+x79)|x80));

	if (t16 != 9LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x81 = UINT32_MAX;
	uint64_t x83 = 1397933077631LLU;
	int8_t x84 = 0;
	volatile uint64_t t17 = 344399799LLU;

	t17 = (x81-((x82+x83)|x84));

	if (t17 != 18446742680071441281LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = 107;
	static volatile int64_t t18 = 702753LL;

	t18 = (x85-((x86+x87)|x88));

	if (t18 != 32512LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x90 = 394870LLU;
	int32_t x91 = -1;
	static volatile int16_t x92 = INT16_MIN;
	uint64_t t19 = 2111894938389017932LLU;

	t19 = (x89-((x90+x91)|x92));

	if (t19 != 18446744073709549963LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x93 = -49;
	int32_t x94 = -71197;
	int32_t x95 = INT32_MAX;
	static volatile int32_t x96 = INT32_MIN;
	int32_t t20 = 331351471;

	t20 = (x93-((x94+x95)|x96));

	if (t20 != 71149) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MAX;
	volatile uint8_t x98 = 8U;
	uint64_t x99 = 1550956949830LLU;
	static int16_t x100 = -4;

	t21 = (x97-((x98+x99)|x100));

	if (t21 != 32769LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 82U;
	volatile uint16_t x102 = 271U;
	uint64_t x103 = UINT64_MAX;
	static uint64_t t22 = 4260613710LLU;

	t22 = (x101-((x102+x103)|x104));

	if (t22 != 83LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -55;
	int64_t x106 = INT64_MIN;
	volatile uint8_t x107 = UINT8_MAX;
	int16_t x108 = INT16_MIN;
	int64_t t23 = -52331072311795LL;

	t23 = (x105-((x106+x107)|x108));

	if (t23 != 32458LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x109 = INT32_MAX;
	int64_t x110 = 1004764096LL;
	volatile int64_t x111 = INT64_MIN;
	uint64_t x112 = 1742303014142LLU;
	uint64_t t24 = 644957683LLU;

	t24 = (x109-((x110+x111)|x112));

	if (t24 != 9223370296386682881LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 3U;
	static volatile uint8_t x114 = UINT8_MAX;
	static int32_t x115 = -1;
	static int32_t x116 = 2628;
	int32_t t25 = 1;

	t25 = (x113-((x114+x115)|x116));

	if (t25 != -2811) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x121 = -1LL;
	int64_t x123 = -68666LL;
	volatile int64_t t26 = 7922LL;

	t26 = (x121-((x122+x123)|x124));

	if (t26 != 68608LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MIN;
	static volatile int16_t x126 = 252;
	int16_t x127 = -3933;
	int32_t x128 = INT32_MAX;
	volatile int64_t t27 = 21LL;

	t27 = (x125-((x126+x127)|x128));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x141 = 39U;
	int32_t x142 = -1;
	int32_t x144 = -1;
	volatile int32_t t28 = 82921;

	t28 = (x141-((x142+x143)|x144));

	if (t28 != 40) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = INT8_MIN;
	uint8_t x152 = 35U;
	int32_t t29 = -158;

	t29 = (x149-((x150+x151)|x152));

	if (t29 != -2147483567) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x154 = 102;
	uint32_t x155 = 3107986U;
	int32_t x156 = -1;
	int64_t t30 = -652LL;

	t30 = (x153-((x154+x155)|x156));

	if (t30 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x157 = 3U;
	int32_t x158 = INT32_MIN;
	static int8_t x159 = 63;
	int32_t x160 = -25530662;
	uint32_t t31 = 0U;

	t31 = (x157-((x158+x159)|x160));

	if (t31 != 25530628U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = -4066875;
	volatile int64_t x162 = -1LL;
	static uint8_t x163 = 2U;
	volatile int32_t x164 = -1447;

	t32 = (x161-((x162+x163)|x164));

	if (t32 != -4065428LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x165 = 26352576;
	int64_t x166 = 734760578LL;
	int64_t x167 = 29LL;
	int64_t x168 = -1LL;
	volatile int64_t t33 = 3367LL;

	t33 = (x165-((x166+x167)|x168));

	if (t33 != 26352577LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x169 = INT16_MAX;
	volatile int64_t x170 = INT64_MIN;
	volatile int8_t x171 = INT8_MAX;
	uint32_t x172 = UINT32_MAX;
	static volatile int64_t t34 = 36571LL;

	t34 = (x169-((x170+x171)|x172));

	if (t34 != 9223372032559841280LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x173 = 957176501446855109LL;
	uint64_t x174 = 80499602114LLU;
	uint64_t t35 = 285580768507252468LLU;

	t35 = (x173-((x174+x175)|x176));

	if (t35 != 957176420947252944LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x177 = UINT8_MAX;
	static uint64_t x178 = 7867LLU;
	static volatile uint8_t x179 = UINT8_MAX;
	static uint16_t x180 = 2472U;
	volatile uint64_t t36 = 49810929730701LLU;

	t36 = (x177-((x178+x179)|x180));

	if (t36 != 18446744073709543749LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x181 = 7;
	int16_t x183 = 424;
	int64_t x184 = INT64_MIN;
	static int64_t t37 = 64804502047461772LL;

	t37 = (x181-((x182+x183)|x184));

	if (t37 != 9223372036854775437LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = 2703883651570959LL;
	volatile int32_t x186 = INT32_MIN;
	static int32_t x188 = INT32_MIN;
	int64_t t38 = -1039564411LL;

	t38 = (x185-((x186+x187)|x188));

	if (t38 != 2703885799054581LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = INT64_MAX;
	uint32_t x190 = 3036U;
	volatile int32_t x191 = INT32_MIN;
	uint16_t x192 = 15072U;
	volatile int64_t t39 = -6649281273305LL;

	t39 = (x189-((x190+x191)|x192));

	if (t39 != 9223372034707276803LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x194 = -21443719614625LL;
	uint8_t x195 = 22U;
	static int32_t x196 = 9968263;
	int64_t t40 = 6702LL;

	t40 = (x193-((x194+x195)|x196));

	if (t40 != 21443719118856LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = INT64_MAX;
	int64_t x203 = -1126267088821797621LL;
	int8_t x204 = -1;
	volatile uint64_t t41 = 178544353LLU;

	t41 = (x201-((x202+x203)|x204));

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x205 = -13;
	uint16_t x206 = UINT16_MAX;
	static volatile uint64_t x207 = UINT64_MAX;
	int32_t x208 = INT32_MIN;
	uint64_t t42 = 7LLU;

	t42 = (x205-((x206+x207)|x208));

	if (t42 != 2147418101LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x209 = 1422076933275130LLU;
	int64_t x210 = INT64_MIN;
	int64_t x212 = INT64_MAX;

	t43 = (x209-((x210+x211)|x212));

	if (t43 != 9224794113788050939LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = -1;
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MAX;
	volatile uint32_t x216 = UINT32_MAX;

	t44 = (x213-((x214+x215)|x216));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = -1;
	int32_t x222 = -55590243;
	volatile int16_t x223 = -1;
	volatile int64_t x224 = INT64_MAX;
	static int64_t t45 = 101335858749900LL;

	t45 = (x221-((x222+x223)|x224));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = INT8_MAX;
	static int8_t x234 = INT8_MIN;
	volatile int8_t x235 = INT8_MIN;
	uint32_t x236 = 0U;
	volatile uint32_t t46 = 227U;

	t46 = (x233-((x234+x235)|x236));

	if (t46 != 383U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x239 = INT32_MIN;
	uint64_t x240 = UINT64_MAX;

	t47 = (x237-((x238+x239)|x240));

	if (t47 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x244 = UINT16_MAX;
	uint64_t t48 = 366668318659LLU;

	t48 = (x241-((x242+x243)|x244));

	if (t48 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x245 = -1;
	int32_t x246 = INT32_MAX;
	int64_t x247 = -1LL;
	int64_t t49 = -4320193626085049LL;

	t49 = (x245-((x246+x247)|x248));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x249 = -1;
	static int16_t x250 = -1;
	int8_t x251 = INT8_MIN;
	uint32_t x252 = 206750U;
	volatile uint32_t t50 = 22373U;

	t50 = (x249-((x250+x251)|x252));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x253 = 10U;
	int16_t x254 = INT16_MIN;
	static volatile int64_t x255 = -1LL;
	static int64_t x256 = INT64_MIN;
	volatile int64_t t51 = -1338319LL;

	t51 = (x253-((x254+x255)|x256));

	if (t51 != 32779LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x257 = INT32_MIN;
	int32_t x258 = -1;
	int64_t x259 = -1LL;
	int16_t x260 = INT16_MIN;

	t52 = (x257-((x258+x259)|x260));

	if (t52 != -2147483646LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x265 = -1;
	int32_t x266 = 0;
	static volatile int16_t x267 = INT16_MAX;
	uint16_t x268 = 16U;
	int32_t t53 = 663080928;

	t53 = (x265-((x266+x267)|x268));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x274 = 715715U;
	int64_t x275 = INT64_MIN;
	int32_t x276 = -456801365;
	int64_t t54 = 6360043348659LL;

	t54 = (x273-((x274+x275)|x276));

	if (t54 != 456135705LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x278 = 82U;
	int16_t x279 = INT16_MIN;
	uint64_t x280 = 2466023LLU;
	volatile uint64_t t55 = 316850207LLU;

	t55 = (x277-((x278+x279)|x280));

	if (t55 != 24328LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x281 = UINT32_MAX;
	volatile int64_t x282 = -1LL;
	int16_t x283 = 3;
	volatile int16_t x284 = INT16_MIN;
	volatile int64_t t56 = 395223LL;

	t56 = (x281-((x282+x283)|x284));

	if (t56 != 4295000061LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x285 = -1;
	int32_t x286 = -1;
	static uint64_t x287 = 59222846167646858LLU;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t57 = 1026818792855LLU;

	t57 = (x285-((x286+x287)|x288));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x293 = 228181U;
	int8_t x295 = -6;
	static int8_t x296 = INT8_MAX;
	uint32_t t58 = 754493035U;

	t58 = (x293-((x294+x295)|x296));

	if (t58 != 29534806U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x297 = -576LL;
	int8_t x298 = 8;

	t59 = (x297-((x298+x299)|x300));

	if (t59 != 18446744073709551049LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x301 = -1;
	int16_t x302 = INT16_MAX;
	uint64_t t60 = 1LLU;

	t60 = (x301-((x302+x303)|x304));

	if (t60 != 18446743756236669379LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = -1;
	int16_t x306 = INT16_MIN;
	int64_t t61 = -344512384660LL;

	t61 = (x305-((x306+x307)|x308));

	if (t61 != 70LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x310 = INT8_MIN;
	static volatile int16_t x311 = 0;
	static uint16_t x312 = 109U;
	int64_t t62 = -3LL;

	t62 = (x309-((x310+x311)|x312));

	if (t62 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MAX;
	int32_t x315 = -944;
	static int64_t x316 = -109607853LL;
	static int64_t t63 = 55765240466573598LL;

	t63 = (x313-((x314+x315)|x316));

	if (t63 != 801LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x317 = 1789292U;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = -154707830LL;
	volatile int64_t t64 = -641656129086178LL;

	t64 = (x317-((x318+x319)|x320));

	if (t64 != 156487021LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MAX;
	volatile int16_t x324 = -1;

	t65 = (x321-((x322+x323)|x324));

	if (t65 != 51) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = -1LL;
	int16_t x330 = INT16_MIN;
	static int16_t x331 = 1979;
	int8_t x332 = -16;
	int64_t t66 = -3638970684556LL;

	t66 = (x329-((x330+x331)|x332));

	if (t66 != 4LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x333 = -1;
	int8_t x334 = -1;
	static uint64_t t67 = 6293506LLU;

	t67 = (x333-((x334+x335)|x336));

	if (t67 != 18446744073692778624LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = INT16_MIN;
	uint16_t x338 = UINT16_MAX;
	uint32_t x339 = UINT32_MAX;
	uint32_t t68 = 1018U;

	t68 = (x337-((x338+x339)|x340));

	if (t68 != 4294868993U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x341 = 1U;
	static uint64_t x342 = 0LLU;
	static volatile uint32_t x343 = 1394U;
	volatile int64_t x344 = INT64_MIN;
	uint64_t t69 = 424LLU;

	t69 = (x341-((x342+x343)|x344));

	if (t69 != 9223372036854774415LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = 52452;
	static int8_t x346 = INT8_MIN;
	int8_t x347 = 1;
	volatile int32_t t70 = -133147551;

	t70 = (x345-((x346+x347)|x348));

	if (t70 != 52579) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x354 = UINT8_MAX;
	uint16_t x356 = 1U;
	static volatile int64_t t71 = 462364542287LL;

	t71 = (x353-((x354+x355)|x356));

	if (t71 != 9223372036851068812LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x357 = 5738U;
	int8_t x358 = -1;
	static int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;
	int64_t t72 = -843682385558539LL;

	t72 = (x357-((x358+x359)|x360));

	if (t72 != 5867LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x365 = UINT32_MAX;
	static volatile int16_t x366 = 1;
	int64_t x368 = -560198215LL;
	static int64_t t73 = -488712407487063195LL;

	t73 = (x365-((x366+x367)|x368));

	if (t73 != 4854939718LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x369 = 925;
	int16_t x370 = INT16_MIN;
	volatile int8_t x371 = -1;
	static uint64_t x372 = 685533458995996295LLU;
	uint64_t t74 = 3399875355473934206LLU;

	t74 = (x369-((x370+x371)|x372));

	if (t74 != 926LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x375 = INT64_MIN;
	uint16_t x376 = 7500U;

	t75 = (x373-((x374+x375)|x376));

	if (t75 != 9223372036854768250LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x377 = INT8_MIN;
	static int32_t x378 = 3;
	int8_t x380 = INT8_MIN;
	int32_t t76 = -9677;

	t76 = (x377-((x378+x379)|x380));

	if (t76 != -6) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x381 = INT64_MIN;
	uint16_t x382 = 10015U;
	uint32_t x384 = 1U;
	uint64_t t77 = 522476086375028LLU;

	t77 = (x381-((x382+x383)|x384));

	if (t77 != 9223372036854765793LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x385 = 1706223324831LLU;
	volatile uint16_t x386 = 6563U;
	uint8_t x387 = 0U;
	static volatile int32_t x388 = INT32_MIN;

	t78 = (x385-((x386+x387)|x388));

	if (t78 != 1708370801916LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x389 = 2204LL;
	uint8_t x390 = 77U;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MIN;
	volatile int64_t t79 = 150851150847286763LL;

	t79 = (x389-((x390+x391)|x392));

	if (t79 != 2255LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x393 = 1890658U;
	volatile int16_t x394 = -1;
	uint8_t x396 = 123U;

	t80 = (x393-((x394+x395)|x396));

	if (t80 != 1890403U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x397 = 46952339793908LL;
	int32_t x399 = -1;
	static int32_t x400 = INT32_MAX;
	volatile int64_t t81 = -18039514206LL;

	t81 = (x397-((x398+x399)|x400));

	if (t81 != 46950192310261LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x401 = 110241U;
	int8_t x402 = INT8_MIN;
	uint32_t t82 = 1456U;

	t82 = (x401-((x402+x403)|x404));

	if (t82 != 2147594018U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MAX;
	int64_t x407 = 2619929LL;

	t83 = (x405-((x406+x407)|x408));

	if (t83 != 199LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x409 = 2U;
	int32_t x410 = 168332250;
	volatile int16_t x412 = INT16_MIN;

	t84 = (x409-((x410+x411)|x412));

	if (t84 != 17147LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x413 = 13186667290LL;
	static int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MIN;
	int32_t x416 = -68;
	static int64_t t85 = 94893797483LL;

	t85 = (x413-((x414+x415)|x416));

	if (t85 != 13186667358LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x418 = UINT64_MAX;
	int16_t x419 = 0;
	static uint64_t x420 = 129LLU;
	uint64_t t86 = 29547LLU;

	t86 = (x417-((x418+x419)|x420));

	if (t86 != 256LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x423 = 605327702889750332LLU;
	int16_t x424 = 2390;

	t87 = (x421-((x422+x423)|x424));

	if (t87 != 17841416370819801473LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x437 = 1U;
	static int64_t x438 = -344223234720056LL;
	uint32_t x440 = 12U;
	volatile int64_t t88 = -129748287339LL;

	t88 = (x437-((x438+x439)|x440));

	if (t88 != 344223234720181LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x441 = UINT16_MAX;
	int32_t x442 = 75;
	uint32_t x443 = 747415250U;
	uint32_t t89 = 28U;

	t89 = (x441-((x442+x443)|x444));

	if (t89 != 71840U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MIN;
	volatile int8_t x448 = -1;
	int64_t t90 = -932LL;

	t90 = (x445-((x446+x447)|x448));

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x449 = -13;
	volatile uint64_t x450 = 57624916LLU;
	static int16_t x451 = 6;
	int16_t x452 = INT16_MIN;
	static uint64_t t91 = 8520339601413LLU;

	t91 = (x449-((x450+x451)|x452));

	if (t91 != 13977LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x453 = 11;
	static int16_t x454 = -1;
	int8_t x455 = INT8_MIN;

	t92 = (x453-((x454+x455)|x456));

	if (t92 != 140) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x457 = UINT16_MAX;
	volatile int16_t x458 = INT16_MIN;
	volatile uint16_t x459 = 5U;
	uint32_t x460 = 596019771U;
	static volatile uint32_t t93 = 3617897U;

	t93 = (x457-((x458+x459)|x460));

	if (t93 != 95680U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x461 = -1LL;
	int16_t x462 = -1;
	int32_t x463 = -1;
	static int8_t x464 = -7;
	volatile int64_t t94 = 37012745725333LL;

	t94 = (x461-((x462+x463)|x464));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x465 = INT8_MAX;
	int8_t x466 = INT8_MAX;
	volatile uint8_t x468 = 50U;
	volatile int32_t t95 = -315075;

	t95 = (x465-((x466+x467)|x468));

	if (t95 != -572) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x469 = -1LL;
	int16_t x471 = 95;
	int16_t x472 = INT16_MAX;
	volatile int64_t t96 = -87202912434LL;

	t96 = (x469-((x470+x471)|x472));

	if (t96 != -272685111575379968LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x473 = 5LLU;
	static volatile int32_t x474 = 14;
	int16_t x475 = INT16_MAX;
	int64_t x476 = 7670075735LL;
	uint64_t t97 = 981505LLU;

	t97 = (x473-((x474+x475)|x476));

	if (t97 != 18446744066039443110LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x477 = INT64_MAX;
	static int32_t x478 = INT32_MAX;
	int64_t x480 = INT64_MAX;
	int64_t t98 = 1041999LL;

	t98 = (x477-((x478+x479)|x480));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x481 = UINT64_MAX;
	uint32_t x482 = 22970499U;
	static uint64_t x483 = 165555421676LLU;
	static int16_t x484 = INT16_MAX;
	static volatile uint64_t t99 = 253LLU;

	t99 = (x481-((x482+x483)|x484));

	if (t99 != 18446743908131143680LLU) { NG(); } else { ; }
	
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

