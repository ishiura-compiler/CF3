#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MAX;
static volatile int64_t t1 = 25LL;
int64_t x11 = -1LL;
volatile uint64_t x12 = UINT64_MAX;
uint64_t t2 = UINT64_MAX;
volatile uint32_t t4 = 110726U;
static int32_t x23 = INT32_MIN;
int16_t x24 = -26;
static int8_t x28 = INT8_MAX;
int64_t x34 = INT64_MAX;
uint8_t x40 = UINT8_MAX;
volatile uint64_t t10 = 26LLU;
int64_t t11 = 7783693117415LL;
static volatile uint32_t t13 = 217122U;
volatile int8_t x66 = INT8_MAX;
int64_t t17 = 6627567LL;
static uint64_t x78 = 178850LLU;
static uint32_t x87 = 384951U;
static uint16_t x91 = UINT16_MAX;
static volatile uint64_t x92 = UINT64_MAX;
int16_t x94 = INT16_MAX;
static volatile uint32_t t22 = 15992470U;
volatile uint32_t t24 = 8587U;
uint64_t x106 = 62577449926LLU;
int16_t x112 = INT16_MIN;
uint64_t t26 = 862LLU;
static int64_t x113 = INT64_MIN;
int8_t x114 = 0;
volatile int64_t x118 = 448173424217826466LL;
static int64_t x125 = 217945LL;
int8_t x129 = INT8_MIN;
int16_t x130 = -1;
volatile int32_t t32 = -198380790;
int64_t x138 = 1LL;
volatile uint64_t x142 = UINT64_MAX;
int16_t x144 = -3;
uint64_t t34 = 0LLU;
int32_t x148 = INT32_MIN;
static volatile uint64_t t35 = 2098859892292880367LLU;
static int32_t x151 = -1;
volatile int64_t t39 = -347269LL;
uint32_t t40 = 86669927U;
uint32_t x173 = 6336U;
int16_t x178 = 21;
volatile int16_t x181 = INT16_MIN;
int8_t x183 = INT8_MIN;
volatile int32_t x190 = INT32_MIN;
static volatile int16_t x197 = INT16_MIN;
uint32_t x213 = 457385903U;
volatile int64_t x216 = 39615396280372LL;
uint32_t x220 = 199692U;
static volatile int64_t t52 = 1033971599961049977LL;
int8_t x225 = INT8_MIN;
static int16_t x228 = -78;
int32_t t54 = -11;
static int8_t x236 = INT8_MAX;
volatile int8_t x245 = 0;
uint64_t t58 = 1876426493538LLU;
volatile int64_t x258 = -1LL;
int16_t x260 = -499;
volatile int16_t x261 = -1;
int16_t x262 = INT16_MAX;
int32_t x263 = -23;
int8_t x266 = INT8_MIN;
int32_t x271 = INT32_MIN;
uint8_t x272 = 30U;
int16_t x279 = -9;
static uint64_t t66 = 38097783745125514LLU;
int16_t x285 = -1;
static volatile int64_t x288 = -1LL;
int64_t x290 = -3920354437590357LL;
int64_t x292 = INT64_MAX;
int32_t x295 = INT32_MAX;
volatile int32_t t70 = 6;
uint8_t x308 = UINT8_MAX;
volatile int16_t x309 = -232;
int8_t x312 = -1;
static uint32_t x316 = UINT32_MAX;
int8_t x327 = -1;
volatile uint16_t x332 = 27867U;
int64_t t78 = -5LL;
uint64_t x333 = 2460704616591LLU;
int32_t x340 = INT32_MIN;
static int16_t x345 = 5445;
static int32_t x346 = 26;
static volatile int64_t x350 = 569940671821574LL;
int8_t x357 = INT8_MIN;
volatile int32_t x363 = 155544;
static int32_t x364 = INT32_MIN;
int64_t x368 = 15762514LL;
uint16_t x373 = 243U;
static uint8_t x377 = 1U;
int64_t x379 = -1LL;
int32_t x381 = INT32_MAX;
volatile int16_t x392 = -1;
volatile uint64_t t94 = 131020319LLU;
static int64_t x397 = INT64_MAX;
uint8_t x402 = 17U;
static int8_t x408 = INT8_MAX;
volatile uint16_t x414 = 2U;
static uint16_t x415 = UINT16_MAX;
uint16_t x416 = UINT16_MAX;
uint8_t x421 = 3U;


void f0(void) {
	static int32_t x1 = 11933211;
	static int8_t x2 = INT8_MIN;
	static uint8_t x4 = 114U;
	volatile int32_t t0 = 316461533;

	t0 = ((x1-(x2%x3))^x4);

	if (t0 != 11933294) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile int8_t x6 = -1;
	volatile int32_t x7 = -1;
	int64_t x8 = INT64_MIN;

	t1 = ((x5-(x6%x7))^x8);

	if (t1 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 0;
	uint16_t x10 = UINT16_MAX;

	t2 = ((x9-(x10%x11))^x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	static volatile int64_t x14 = INT64_MIN;
	int32_t x15 = -5423;
	uint32_t x16 = 48714512U;
	int64_t t3 = 0LL;

	t3 = ((x13-(x14%x15))^x16);

	if (t3 != 48716208LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static int32_t x18 = INT32_MAX;
	static int16_t x19 = -1;
	uint32_t x20 = 125261U;

	t4 = ((x17-(x18%x19))^x20);

	if (t4 != 4294842061U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 4U;
	static int8_t x22 = INT8_MAX;
	volatile int32_t t5 = 0;

	t5 = ((x21-(x22%x23))^x24);

	if (t5 != 99) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 87U;
	uint16_t x26 = 5U;
	int8_t x27 = INT8_MIN;
	int32_t t6 = 24;

	t6 = ((x25-(x26%x27))^x28);

	if (t6 != 45) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MIN;
	volatile uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 65208LLU;

	t7 = ((x29-(x30%x31))^x32);

	if (t7 != 4294967294LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile uint64_t x35 = UINT64_MAX;
	int8_t x36 = INT8_MIN;
	uint64_t t8 = 46346225571093746LLU;

	t8 = ((x33-(x34%x35))^x36);

	if (t8 != 9223372036854808449LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 168315215433857393LLU;
	volatile uint16_t x38 = 5246U;
	int16_t x39 = -1;
	uint64_t t9 = 6603LLU;

	t9 = ((x37-(x38%x39))^x40);

	if (t9 != 168315215433857422LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 38U;
	volatile int8_t x42 = -1;
	uint64_t x43 = UINT64_MAX;
	static int64_t x44 = -12757041653164728LL;

	t10 = ((x41-(x42%x43))^x44);

	if (t10 != 18433987032056386926LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 1992;
	int16_t x46 = 526;
	int16_t x47 = 30;
	volatile int64_t x48 = 1122268LL;

	t11 = ((x45-(x46%x47))^x48);

	if (t11 != 1120356LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 70U;
	static volatile int32_t x54 = INT32_MIN;
	static int32_t x55 = INT32_MIN;
	static volatile int8_t x56 = 0;
	int32_t t12 = 154;

	t12 = ((x53-(x54%x55))^x56);

	if (t12 != 70) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x57 = 2348U;
	int32_t x58 = -1;
	static int8_t x59 = INT8_MAX;
	static int16_t x60 = INT16_MIN;

	t13 = ((x57-(x58%x59))^x60);

	if (t13 != 4294936877U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = INT8_MIN;
	int8_t x62 = -1;
	static int8_t x63 = INT8_MAX;
	volatile int64_t x64 = -1LL;
	volatile int64_t t14 = -60596LL;

	t14 = ((x61-(x62%x63))^x64);

	if (t14 != 126LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	int64_t x67 = INT64_MIN;
	volatile uint8_t x68 = UINT8_MAX;
	int64_t t15 = 406324946376841127LL;

	t15 = ((x65-(x66%x67))^x68);

	if (t15 != 255LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x69 = 11U;
	static volatile uint64_t x70 = 107584734489LLU;
	static uint8_t x71 = 2U;
	int32_t x72 = 176;
	volatile uint64_t t16 = 24100LLU;

	t16 = ((x69-(x70%x71))^x72);

	if (t16 != 186LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MAX;
	volatile int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MIN;
	volatile int8_t x76 = 13;

	t17 = ((x73-(x74%x75))^x76);

	if (t17 != 9223372036854775693LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 361154LL;
	volatile int32_t x79 = INT32_MAX;
	int16_t x80 = INT16_MIN;
	static volatile uint64_t t18 = 11540340437843607LLU;

	t18 = ((x77-(x78%x79))^x80);

	if (t18 != 18446744073709373472LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MAX;
	uint8_t x82 = 21U;
	volatile int32_t x83 = INT32_MIN;
	int8_t x84 = -1;
	volatile int64_t t19 = -2898876786028139321LL;

	t19 = ((x81-(x82%x83))^x84);

	if (t19 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	int32_t x86 = -1;
	int32_t x88 = -3;
	static volatile int64_t t20 = -5291117476922069LL;

	t20 = ((x85-(x86%x87))^x88);

	if (t20 != -9223372036854706818LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 15045053LLU;
	int8_t x90 = INT8_MAX;
	uint64_t t21 = 5619953387086LLU;

	t21 = ((x89-(x90%x91))^x92);

	if (t21 != 18446744073694506689LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = -8;
	int8_t x95 = -1;
	uint32_t x96 = UINT32_MAX;

	t22 = ((x93-(x94%x95))^x96);

	if (t22 != 7U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x97 = INT8_MAX;
	int8_t x98 = -1;
	static uint16_t x99 = 167U;
	int8_t x100 = -3;
	volatile int32_t t23 = 44833753;

	t23 = ((x97-(x98%x99))^x100);

	if (t23 != -131) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x101 = 7U;
	volatile uint32_t x102 = 2099355U;
	static volatile uint16_t x103 = UINT16_MAX;
	int16_t x104 = INT16_MAX;

	t24 = ((x101-(x102%x103))^x104);

	if (t24 != 4294936755U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int8_t x107 = INT8_MIN;
	int16_t x108 = -13;
	static volatile uint64_t t25 = 15331972LLU;

	t25 = ((x105-(x106%x107))^x108);

	if (t25 != 64724933577LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MAX;
	uint64_t x111 = UINT64_MAX;

	t26 = ((x109-(x110%x111))^x112);

	if (t26 != 2147483649LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x115 = 29U;
	int8_t x116 = INT8_MIN;
	static int64_t t27 = 1LL;

	t27 = ((x113-(x114%x115))^x116);

	if (t27 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x117 = 8211LLU;
	static int16_t x119 = INT16_MAX;
	int16_t x120 = INT16_MIN;
	volatile uint64_t t28 = 4144672LLU;

	t28 = ((x117-(x118%x119))^x120);

	if (t28 != 13240LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	static uint64_t x122 = 441019503LLU;
	int32_t x123 = INT32_MAX;
	int32_t x124 = INT32_MIN;
	static volatile uint64_t t29 = 31798713859321LLU;

	t29 = ((x121-(x122%x123))^x124);

	if (t29 != 1706431377LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x126 = 61802233U;
	volatile uint16_t x127 = 310U;
	volatile uint8_t x128 = 3U;
	volatile int64_t t30 = 11LL;

	t30 = ((x125-(x126%x127))^x128);

	if (t30 != 217935LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x131 = 7078U;
	int64_t x132 = -19603270367079508LL;
	volatile int64_t t31 = 1628LL;

	t31 = ((x129-(x130%x131))^x132);

	if (t31 != -19603274169947597LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -1;
	int16_t x134 = INT16_MIN;
	int16_t x135 = -1;
	uint16_t x136 = UINT16_MAX;

	t32 = ((x133-(x134%x135))^x136);

	if (t32 != -65536) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -1;
	int16_t x139 = INT16_MIN;
	static int8_t x140 = INT8_MIN;
	volatile int64_t t33 = -265219338LL;

	t33 = ((x137-(x138%x139))^x140);

	if (t33 != 126LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	uint64_t x143 = UINT64_MAX;

	t34 = ((x141-(x142%x143))^x144);

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 23834LLU;
	int16_t x146 = INT16_MIN;
	static int32_t x147 = INT32_MIN;

	t35 = ((x145-(x146%x147))^x148);

	if (t35 != 18446744071562124570LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = -217783LL;
	volatile int8_t x150 = -3;
	uint16_t x152 = 1U;
	int64_t t36 = 6124432368LL;

	t36 = ((x149-(x150%x151))^x152);

	if (t36 != -217784LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 1;
	uint32_t x154 = UINT32_MAX;
	static uint64_t x155 = 883294LLU;
	int8_t x156 = INT8_MAX;
	uint64_t t37 = 2528786505LLU;

	t37 = ((x153-(x154%x155))^x156);

	if (t37 != 18446744073709159737LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -3574;
	uint64_t x158 = 14355352LLU;
	int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	uint64_t t38 = 4418105018246660141LLU;

	t38 = ((x157-(x158%x159))^x160);

	if (t38 != 9223372036840416882LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = UINT32_MAX;
	int64_t x163 = 3LL;
	volatile uint16_t x164 = UINT16_MAX;

	t39 = ((x161-(x162%x163))^x164);

	if (t39 != -32769LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 23;
	uint32_t x170 = 3226U;
	int16_t x171 = -244;
	uint32_t x172 = 132017393U;

	t40 = ((x169-(x170%x171))^x172);

	if (t40 != 4162953100U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x174 = INT16_MAX;
	uint32_t x175 = 17175U;
	int8_t x176 = INT8_MAX;
	static volatile uint32_t t41 = 85U;

	t41 = ((x173-(x174%x175))^x176);

	if (t41 != 4294957991U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 218671893U;
	static volatile int16_t x179 = 4;
	int64_t x180 = 716407LL;
	volatile int64_t t42 = -223514359655832LL;

	t42 = ((x177-(x178%x179))^x180);

	if (t42 != 218252643LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x182 = 9U;
	int16_t x184 = INT16_MAX;
	static int32_t t43 = -6;

	t43 = ((x181-(x182%x183))^x184);

	if (t43 != -65528) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	int16_t x186 = 5307;
	int32_t x187 = -1;
	volatile uint64_t x188 = 12253497LLU;
	volatile uint64_t t44 = 55921699851939232LLU;

	t44 = ((x185-(x186%x187))^x188);

	if (t44 != 18446744071574321465LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 325U;
	static int16_t x191 = -658;
	static int8_t x192 = -9;
	volatile int32_t t45 = -1;

	t45 = ((x189-(x190%x191))^x192);

	if (t45 != -950) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 264213725199370LLU;
	volatile int8_t x194 = -1;
	static volatile uint64_t x195 = 15193001186165LLU;
	uint32_t x196 = UINT32_MAX;
	uint64_t t46 = 2511098196123730LLU;

	t46 = ((x193-(x194%x195))^x196);

	if (t46 != 254463350060772LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x198 = -3684;
	uint8_t x199 = 14U;
	uint64_t x200 = 27526LLU;
	volatile uint64_t t47 = 1243LLU;

	t47 = ((x197-(x198%x199))^x200);

	if (t47 != 18446744073709546372LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x201 = INT32_MIN;
	int32_t x202 = -40031;
	uint32_t x203 = 1126U;
	uint8_t x204 = 18U;
	uint32_t t48 = 1U;

	t48 = ((x201-(x202%x203))^x204);

	if (t48 != 2147482969U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = -1079356;
	uint32_t x210 = 43U;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MIN;
	volatile int64_t t49 = -74148LL;

	t49 = ((x209-(x210%x211))^x212);

	if (t49 != -9223372032560887911LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x214 = 26U;
	volatile uint8_t x215 = 119U;
	volatile int64_t t50 = -208957155506LL;

	t50 = ((x213-(x214%x215))^x216);

	if (t50 != 39615551266721LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = 1019552908U;
	int32_t x218 = -1;
	uint32_t x219 = 33580U;
	uint32_t t51 = 7U;

	t51 = ((x217-(x218%x219))^x220);

	if (t51 != 1019728313U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x221 = -1LL;
	int8_t x222 = INT8_MAX;
	uint32_t x223 = UINT32_MAX;
	static int16_t x224 = 231;

	t52 = ((x221-(x222%x223))^x224);

	if (t52 != -153LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x226 = -1;
	uint64_t x227 = 727423125207427183LLU;
	uint64_t t53 = 2963291896649184LLU;

	t53 = ((x225-(x226%x227))^x228);

	if (t53 != 261165943523872234LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MIN;
	int32_t x230 = -951216;
	int16_t x231 = -1;
	volatile int8_t x232 = -1;

	t54 = ((x229-(x230%x231))^x232);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = 505;
	uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	volatile uint32_t t55 = 19U;

	t55 = ((x233-(x234%x235))^x236);

	if (t55 != 261U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x237 = INT16_MIN;
	uint64_t x238 = 3317138612501172LLU;
	int32_t x239 = -448594;
	uint32_t x240 = 39063U;
	uint64_t t56 = 60290669LLU;

	t56 = ((x237-(x238%x239))^x240);

	if (t56 != 18443426935097056731LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = UINT16_MAX;
	int64_t x242 = -1830027568LL;
	int64_t x243 = INT64_MIN;
	int16_t x244 = 15323;
	static volatile int64_t t57 = 98602832265LL;

	t57 = ((x241-(x242%x243))^x244);

	if (t57 != 1830107892LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x246 = INT32_MAX;
	uint64_t x247 = 607LLU;
	volatile uint16_t x248 = 0U;

	t58 = ((x245-(x246%x247))^x248);

	if (t58 != 18446744073709551417LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = INT16_MIN;
	int16_t x251 = -1;
	volatile int8_t x252 = -1;
	int32_t t59 = -3839488;

	t59 = ((x249-(x250%x251))^x252);

	if (t59 != -256) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = 383LLU;
	volatile int32_t x254 = INT32_MIN;
	int64_t x255 = INT64_MAX;
	int64_t x256 = 10568091LL;
	static volatile uint64_t t60 = 0LLU;

	t60 = ((x253-(x254%x255))^x256);

	if (t60 != 2158051556LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = -1363258122LL;
	static int8_t x259 = INT8_MIN;
	int64_t t61 = -82762682777LL;

	t61 = ((x257-(x258%x259))^x260);

	if (t61 != 1363258106LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x264 = INT64_MIN;
	volatile int64_t t62 = 34790175232670LL;

	t62 = ((x261-(x262%x263))^x264);

	if (t62 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x265 = 0;
	static volatile int16_t x267 = INT16_MIN;
	volatile uint32_t x268 = 67680696U;
	volatile uint32_t t63 = 254U;

	t63 = ((x265-(x266%x267))^x268);

	if (t63 != 67680568U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x269 = 0U;
	int32_t x270 = INT32_MAX;
	int32_t t64 = 786;

	t64 = ((x269-(x270%x271))^x272);

	if (t64 != -2147483617) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x273 = 1U;
	volatile uint64_t x274 = 6329652491LLU;
	static int32_t x275 = -1;
	static int8_t x276 = INT8_MAX;
	uint64_t t65 = 5350568927102989LLU;

	t65 = ((x273-(x274%x275))^x276);

	if (t65 != 18446744067379899017LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = UINT64_MAX;
	int64_t x278 = INT64_MAX;
	int32_t x280 = 10;

	t66 = ((x277-(x278%x279))^x280);

	if (t66 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x281 = INT32_MIN;
	static uint32_t x282 = 91U;
	static volatile int64_t x283 = INT64_MIN;
	uint32_t x284 = 1U;
	int64_t t67 = 52210892248641LL;

	t67 = ((x281-(x282%x283))^x284);

	if (t67 != -2147483740LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x286 = INT64_MIN;
	uint16_t x287 = UINT16_MAX;
	volatile int64_t t68 = -156488210LL;

	t68 = ((x285-(x286%x287))^x288);

	if (t68 != -32768LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MAX;
	volatile int32_t x291 = -1;
	volatile int64_t t69 = -67373LL;

	t69 = ((x289-(x290%x291))^x292);

	if (t69 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = -1;
	static int32_t x294 = -1;
	volatile int16_t x296 = INT16_MIN;

	t70 = ((x293-(x294%x295))^x296);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = INT64_MAX;
	int8_t x299 = 2;
	static uint8_t x300 = UINT8_MAX;
	static volatile int64_t t71 = -7322717LL;

	t71 = ((x297-(x298%x299))^x300);

	if (t71 != -2147483904LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x305 = INT8_MIN;
	volatile int8_t x306 = 0;
	uint8_t x307 = 3U;
	int32_t t72 = 29604342;

	t72 = ((x305-(x306%x307))^x308);

	if (t72 != -129) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x310 = UINT32_MAX;
	uint16_t x311 = 26U;
	volatile uint32_t t73 = 66506U;

	t73 = ((x309-(x310%x311))^x312);

	if (t73 != 252U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = 614431416;
	int32_t x314 = INT32_MIN;
	volatile int32_t x315 = INT32_MAX;
	uint32_t t74 = 15825U;

	t74 = ((x313-(x314%x315))^x316);

	if (t74 != 3680535878U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x317 = UINT16_MAX;
	int32_t x318 = INT32_MAX;
	uint64_t x319 = 315128233LLU;
	static uint16_t x320 = UINT16_MAX;
	volatile uint64_t t75 = 0LLU;

	t75 = ((x317-(x318%x319))^x320);

	if (t75 != 18446744073452856841LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x321 = UINT8_MAX;
	int32_t x322 = 4163;
	volatile int16_t x323 = INT16_MAX;
	int8_t x324 = INT8_MAX;
	int32_t t76 = -1047051;

	t76 = ((x321-(x322%x323))^x324);

	if (t76 != -3901) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = INT16_MIN;
	int32_t x326 = -4386;
	int16_t x328 = INT16_MIN;
	static int32_t t77 = 67609526;

	t77 = ((x325-(x326%x327))^x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MAX;
	static int64_t x330 = 17LL;
	static int16_t x331 = INT16_MIN;

	t78 = ((x329-(x330%x331))^x332);

	if (t78 != 4917LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x334 = INT64_MIN;
	int64_t x335 = 14472LL;
	uint16_t x336 = 14U;
	volatile uint64_t t79 = 15462299LLU;

	t79 = ((x333-(x334%x335))^x336);

	if (t79 != 2460704629617LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 2251U;
	uint16_t x338 = 1U;
	uint8_t x339 = 46U;
	volatile uint32_t t80 = 33817472U;

	t80 = ((x337-(x338%x339))^x340);

	if (t80 != 2147485898U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = UINT8_MAX;
	uint64_t x342 = 41332622007LLU;
	static int16_t x343 = 1;
	static volatile int16_t x344 = INT16_MIN;
	volatile uint64_t t81 = 288081LLU;

	t81 = ((x341-(x342%x343))^x344);

	if (t81 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x347 = 858338U;
	volatile int16_t x348 = -758;
	volatile uint32_t t82 = 46371U;

	t82 = ((x345-(x346%x347))^x348);

	if (t82 != 4294961185U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x349 = 3LL;
	static uint8_t x351 = UINT8_MAX;
	uint32_t x352 = 9553372U;
	volatile int64_t t83 = 1183319330LL;

	t83 = ((x349-(x350%x351))^x352);

	if (t83 != -9553170LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x353 = 13944532;
	uint8_t x354 = 7U;
	int64_t x355 = INT64_MIN;
	volatile int64_t x356 = INT64_MIN;
	volatile int64_t t84 = -7552168447363LL;

	t84 = ((x353-(x354%x355))^x356);

	if (t84 != -9223372036840831283LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 33U;
	static uint64_t x360 = 140468118717051LLU;
	uint64_t t85 = 616673369LLU;

	t85 = ((x357-(x358%x359))^x360);

	if (t85 != 18446603605590834442LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x361 = INT64_MAX;
	volatile int32_t x362 = INT32_MAX;
	int64_t t86 = -263350LL;

	t86 = ((x361-(x362%x363))^x364);

	if (t86 != -9223372034707335344LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = -1;
	int32_t x366 = INT32_MIN;
	int64_t x367 = -1LL;
	volatile int64_t t87 = 281764933560401811LL;

	t87 = ((x365-(x366%x367))^x368);

	if (t87 != -15762515LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x369 = 1U;
	uint16_t x370 = 157U;
	uint16_t x371 = UINT16_MAX;
	uint8_t x372 = 3U;
	int32_t t88 = 5416291;

	t88 = ((x369-(x370%x371))^x372);

	if (t88 != -153) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x374 = INT16_MAX;
	static volatile int32_t x375 = INT32_MAX;
	static uint32_t x376 = 10U;
	static uint32_t t89 = 1173851U;

	t89 = ((x373-(x374%x375))^x376);

	if (t89 != 4294934782U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x378 = INT8_MIN;
	int16_t x380 = -1;
	int64_t t90 = -525679003932644877LL;

	t90 = ((x377-(x378%x379))^x380);

	if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x382 = INT64_MAX;
	int8_t x383 = INT8_MAX;
	static volatile uint32_t x384 = UINT32_MAX;
	static int64_t t91 = 0LL;

	t91 = ((x381-(x382%x383))^x384);

	if (t91 != 2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x386 = 3836836615903192183LLU;
	int8_t x387 = -1;
	volatile int64_t x388 = INT64_MAX;
	volatile uint64_t t92 = 1487499451374LLU;

	t92 = ((x385-(x386%x387))^x388);

	if (t92 != 13060208652758000758LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = 147541055;
	static volatile uint64_t x390 = 6311536785831LLU;
	static int64_t x391 = INT64_MIN;
	static volatile uint64_t t93 = 1802571300911692442LLU;

	t93 = ((x389-(x390%x391))^x392);

	if (t93 != 6311389244775LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x393 = UINT16_MAX;
	int16_t x394 = 2;
	static uint64_t x395 = 61385508LLU;
	int32_t x396 = INT32_MAX;

	t94 = ((x393-(x394%x395))^x396);

	if (t94 != 2147418114LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MIN;
	static int64_t x400 = INT64_MAX;
	int64_t t95 = -467585065979468159LL;

	t95 = ((x397-(x398%x399))^x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x401 = UINT16_MAX;
	uint8_t x403 = UINT8_MAX;
	static int64_t x404 = INT64_MIN;
	int64_t t96 = 31720809LL;

	t96 = ((x401-(x402%x403))^x404);

	if (t96 != -9223372036854710290LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = -1;
	int16_t x406 = INT16_MIN;
	static volatile uint8_t x407 = 5U;
	int32_t t97 = 11;

	t97 = ((x405-(x406%x407))^x408);

	if (t97 != 125) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -195;
	static int32_t t98 = -154316111;

	t98 = ((x413-(x414%x415))^x416);

	if (t98 != -65340) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x422 = INT64_MAX;
	int32_t x423 = INT32_MIN;
	static uint32_t x424 = UINT32_MAX;
	volatile int64_t t99 = 128220651661410107LL;

	t99 = ((x421-(x422%x423))^x424);

	if (t99 != -2147483653LL) { NG(); } else { ; }
	
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

