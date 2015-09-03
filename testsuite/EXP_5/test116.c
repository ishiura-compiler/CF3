#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
volatile uint32_t x4 = 5U;
int32_t x13 = INT32_MAX;
int32_t x35 = INT32_MAX;
volatile int64_t t6 = INT64_MIN;
static int8_t x38 = 17;
volatile int64_t t7 = -746431LL;
uint16_t x54 = UINT16_MAX;
uint32_t x66 = 15U;
volatile int64_t x72 = 414173198LL;
static int32_t t17 = -1;
int16_t x86 = INT16_MIN;
volatile int16_t x88 = INT16_MIN;
static int32_t t19 = -606027;
volatile int64_t x99 = 1275420590703830079LL;
uint32_t x101 = 522182U;
static volatile int64_t t23 = -75095924LL;
uint16_t x111 = 21180U;
int64_t x120 = INT64_MIN;
static int32_t x121 = -1;
uint64_t x124 = UINT64_MAX;
int8_t x129 = 1;
uint64_t x133 = 58968209LLU;
volatile int8_t x145 = -1;
int16_t x150 = INT16_MAX;
static int16_t x152 = INT16_MAX;
int64_t x155 = 197905377832747LL;
int64_t x168 = 371LL;
int64_t t36 = -85LL;
int32_t x174 = -191;
int16_t x177 = -878;
static uint8_t x178 = UINT8_MAX;
int32_t t39 = -249828980;
int64_t t41 = -11151LL;
int16_t x201 = INT16_MIN;
uint16_t x202 = 31U;
int32_t t47 = -918;
uint32_t x218 = UINT32_MAX;
static volatile int32_t t48 = 408;
uint64_t x235 = 17LLU;
uint64_t t51 = 2LLU;
static int16_t x237 = INT16_MAX;
int64_t x238 = INT64_MAX;
volatile int8_t x242 = -1;
uint8_t x257 = 3U;
int8_t x258 = -1;
int64_t x264 = INT64_MIN;
uint32_t x276 = 678259U;
static int32_t t58 = -329;
static uint32_t x278 = 108487729U;
int32_t t59 = -1;
uint64_t x284 = 89LLU;
uint64_t x292 = UINT64_MAX;
int16_t x295 = INT16_MIN;
uint32_t x299 = UINT32_MAX;
uint16_t x301 = 2002U;
int8_t x302 = -1;
int8_t x304 = INT8_MAX;
int8_t x305 = 0;
uint16_t x307 = 378U;
volatile int32_t x308 = -1;
volatile int32_t x321 = -1;
int64_t x323 = INT64_MIN;
int16_t x325 = -1;
uint64_t x326 = 45224482566465LLU;
int32_t t72 = 1718284;
static uint32_t t73 = UINT32_MAX;
int32_t t74 = -209119231;
int16_t x353 = -1;
int8_t x356 = 0;
uint8_t x360 = UINT8_MAX;
int64_t t77 = INT64_MAX;
volatile int32_t x361 = -9;
volatile int32_t t78 = -2;
int8_t x370 = -1;
int8_t x379 = -1;
int64_t t82 = INT64_MAX;
int16_t x381 = -13;
volatile int32_t t84 = -35546041;
uint32_t t85 = 97647U;
static int16_t x395 = -127;
int32_t x397 = -377;
volatile int32_t x408 = INT32_MIN;
volatile int64_t t89 = INT64_MIN;
int16_t x409 = 12378;
int32_t x414 = INT32_MIN;
volatile int32_t t91 = 515542;
uint32_t x438 = 119550U;
static uint16_t x447 = 15686U;
uint32_t t98 = 13390331U;


void f0(void) {
	int8_t x1 = -48;
	int64_t x2 = 183083052883671189LL;
	static int32_t t0 = 0;

	t0 = (x1|((x2+x3)<x4));

	if (t0 != -48) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = 3;
	uint64_t x11 = 1252883607302260LLU;
	uint16_t x12 = 1U;
	volatile int32_t t1 = 1;

	t1 = (x9|((x10+x11)<x12));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 340292U;
	static int16_t x15 = INT16_MAX;
	volatile int32_t x16 = 1926871;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x13|((x14+x15)<x16));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 1544U;
	static int16_t x18 = INT16_MIN;
	uint16_t x19 = 1U;
	static int16_t x20 = 1;
	static int32_t t3 = 6;

	t3 = (x17|((x18+x19)<x20));

	if (t3 != 1545) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	uint32_t x22 = UINT32_MAX;
	uint8_t x23 = 0U;
	uint32_t x24 = UINT32_MAX;
	uint32_t t4 = UINT32_MAX;

	t4 = (x21|((x22+x23)<x24));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	uint8_t x26 = 0U;
	int8_t x27 = INT8_MIN;
	volatile int8_t x28 = 1;
	int32_t t5 = -858607684;

	t5 = (x25|((x26+x27)<x28));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	static int16_t x34 = -75;
	int32_t x36 = -18257;

	t6 = (x33|((x34+x35)<x36));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = -6534592171LL;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = INT16_MIN;

	t7 = (x37|((x38+x39)<x40));

	if (t7 != -6534592171LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 788U;
	uint16_t x42 = 6354U;
	int16_t x43 = -1;
	int16_t x44 = INT16_MAX;
	volatile int32_t t8 = 1;

	t8 = (x41|((x42+x43)<x44));

	if (t8 != 789) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = UINT16_MAX;
	static int8_t x46 = -56;
	uint8_t x47 = 1U;
	int8_t x48 = -1;
	volatile int32_t t9 = 484;

	t9 = (x45|((x46+x47)<x48));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 0U;
	int64_t x50 = INT64_MIN;
	volatile uint8_t x51 = 0U;
	uint16_t x52 = 1771U;
	volatile int32_t t10 = -467436;

	t10 = (x49|((x50+x51)<x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x53 = 31133U;
	int32_t x55 = -1;
	int64_t x56 = INT64_MAX;
	volatile int32_t t11 = 1;

	t11 = (x53|((x54+x55)<x56));

	if (t11 != 31133) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = 47;
	int64_t x62 = -1LL;
	int64_t x63 = 1944796LL;
	static int8_t x64 = INT8_MAX;
	int32_t t12 = -1756;

	t12 = (x61|((x62+x63)<x64));

	if (t12 != 47) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int32_t x67 = INT32_MIN;
	static int16_t x68 = INT16_MAX;
	volatile int32_t t13 = -7;

	t13 = (x65|((x66+x67)<x68));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MAX;
	static int16_t x71 = INT16_MIN;
	volatile int32_t t14 = -942;

	t14 = (x69|((x70+x71)<x72));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MAX;
	int8_t x74 = -1;
	int16_t x75 = INT16_MIN;
	int32_t x76 = INT32_MIN;
	int32_t t15 = -11698023;

	t15 = (x73|((x74+x75)<x76));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x77 = 0U;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 38618U;
	volatile uint8_t x80 = 3U;
	volatile int32_t t16 = -230607;

	t16 = (x77|((x78+x79)<x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 32079U;
	static int8_t x82 = 0;
	int32_t x83 = 430076992;
	volatile int8_t x84 = -15;

	t17 = (x81|((x82+x83)<x84));

	if (t17 != 32079) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x85 = UINT64_MAX;
	volatile uint64_t x87 = 760429595LLU;
	static uint64_t t18 = UINT64_MAX;

	t18 = (x85|((x86+x87)<x88));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = 56U;
	static int32_t x92 = INT32_MIN;

	t19 = (x89|((x90+x91)<x92));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	uint32_t x94 = 9217U;
	int8_t x95 = -25;
	uint64_t x96 = 18LLU;
	int64_t t20 = 10281LL;

	t20 = (x93|((x94+x95)<x96));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 14U;
	int8_t x98 = 0;
	volatile uint64_t x100 = 5629081057LLU;
	volatile int32_t t21 = -682;

	t21 = (x97|((x98+x99)<x100));

	if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x102 = 47U;
	static int32_t x103 = -20;
	uint64_t x104 = UINT64_MAX;
	uint32_t t22 = 30316288U;

	t22 = (x101|((x102+x103)<x104));

	if (t22 != 522183U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = 42977LL;
	uint64_t x106 = 5144LLU;
	int32_t x107 = -4;
	int64_t x108 = -58575553927822LL;

	t23 = (x105|((x106+x107)<x108));

	if (t23 != 42977LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x109 = 2U;
	int64_t x110 = INT64_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t24 = -1;

	t24 = (x109|((x110+x111)<x112));

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = 441460847LLU;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -1LL;
	volatile uint64_t t25 = 16694LLU;

	t25 = (x117|((x118+x119)<x120));

	if (t25 != 441460847LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x122 = INT16_MAX;
	int16_t x123 = INT16_MIN;
	int32_t t26 = -1148242;

	t26 = (x121|((x122+x123)<x124));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 2U;
	int32_t x126 = -1;
	uint8_t x127 = 5U;
	int8_t x128 = INT8_MAX;
	volatile uint32_t t27 = 1791227U;

	t27 = (x125|((x126+x127)<x128));

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x130 = INT16_MAX;
	uint64_t x131 = 115121532755547LLU;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t28 = 2;

	t28 = (x129|((x130+x131)<x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MAX;
	volatile int64_t x136 = -1LL;
	volatile uint64_t t29 = 3805LLU;

	t29 = (x133|((x134+x135)<x136));

	if (t29 != 58968209LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 0LLU;
	int8_t x139 = INT8_MIN;
	static int32_t x140 = -1;
	uint32_t t30 = UINT32_MAX;

	t30 = (x137|((x138+x139)<x140));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = -1;
	uint32_t x142 = 79227484U;
	volatile uint32_t x143 = 1444971209U;
	uint16_t x144 = 99U;
	int32_t t31 = -1588;

	t31 = (x141|((x142+x143)<x144));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x146 = -1;
	int16_t x147 = -7760;
	int8_t x148 = INT8_MIN;
	int32_t t32 = 329334706;

	t32 = (x145|((x146+x147)<x148));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x149 = 28;
	int16_t x151 = INT16_MIN;
	int32_t t33 = -46;

	t33 = (x149|((x150+x151)<x152));

	if (t33 != 29) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -1;
	uint8_t x154 = 7U;
	int16_t x156 = INT16_MAX;
	int32_t t34 = -780;

	t34 = (x153|((x154+x155)<x156));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x157 = -1;
	uint32_t x158 = 0U;
	volatile int32_t x159 = -957451150;
	static int8_t x160 = INT8_MIN;
	static int32_t t35 = 30773712;

	t35 = (x157|((x158+x159)<x160));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x165 = 246198001782LL;
	uint16_t x166 = 1U;
	uint8_t x167 = 2U;

	t36 = (x165|((x166+x167)<x168));

	if (t36 != 246198001783LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = UINT32_MAX;
	volatile uint16_t x170 = 28868U;
	int32_t x171 = INT32_MIN;
	int32_t x172 = -1;
	static volatile uint32_t t37 = UINT32_MAX;

	t37 = (x169|((x170+x171)<x172));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x175 = -1;
	int16_t x176 = INT16_MIN;
	static volatile uint32_t t38 = UINT32_MAX;

	t38 = (x173|((x174+x175)<x176));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x179 = -1;
	uint64_t x180 = UINT64_MAX;

	t39 = (x177|((x178+x179)<x180));

	if (t39 != -877) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 380072U;
	volatile uint64_t x182 = 131270LLU;
	uint8_t x183 = 39U;
	int16_t x184 = -1;
	volatile uint32_t t40 = 174842U;

	t40 = (x181|((x182+x183)<x184));

	if (t40 != 380073U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MIN;
	volatile uint64_t x186 = 118LLU;
	int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MIN;

	t41 = (x185|((x186+x187)<x188));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x193 = 81U;
	volatile int32_t x194 = INT32_MAX;
	static int64_t x195 = INT64_MIN;
	int8_t x196 = 0;
	int32_t t42 = -193636;

	t42 = (x193|((x194+x195)<x196));

	if (t42 != 81) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MAX;
	static volatile int16_t x198 = -14;
	uint64_t x199 = 8773716405242LLU;
	int64_t x200 = -1LL;
	static int64_t t43 = INT64_MAX;

	t43 = (x197|((x198+x199)<x200));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x203 = 751086LLU;
	int16_t x204 = INT16_MAX;
	int32_t t44 = -7;

	t44 = (x201|((x202+x203)<x204));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = INT16_MIN;
	static int32_t x206 = INT32_MIN;
	int64_t x207 = INT64_MAX;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t45 = -6;

	t45 = (x205|((x206+x207)<x208));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = 1;
	int32_t x210 = 168062;
	volatile int64_t x211 = -618LL;
	int64_t x212 = INT64_MIN;
	static int32_t t46 = 24;

	t46 = (x209|((x210+x211)<x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = 2;
	volatile int8_t x214 = INT8_MAX;
	uint64_t x215 = 6613417548227473LLU;
	int16_t x216 = INT16_MIN;

	t47 = (x213|((x214+x215)<x216));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MAX;
	uint32_t x219 = 6U;
	int16_t x220 = INT16_MAX;

	t48 = (x217|((x218+x219)<x220));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = -68513191;
	uint64_t x222 = UINT64_MAX;
	static int32_t x223 = INT32_MIN;
	static uint8_t x224 = 3U;
	volatile int32_t t49 = 171868053;

	t49 = (x221|((x222+x223)<x224));

	if (t49 != -68513191) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x229 = 23U;
	int8_t x230 = INT8_MAX;
	volatile int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MAX;
	int32_t t50 = 325;

	t50 = (x229|((x230+x231)<x232));

	if (t50 != 23) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x233 = 200229LLU;
	volatile uint16_t x234 = 267U;
	int8_t x236 = -1;

	t51 = (x233|((x234+x235)<x236));

	if (t51 != 200229LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x239 = INT32_MIN;
	int64_t x240 = -15472480487LL;
	static int32_t t52 = 454248240;

	t52 = (x237|((x238+x239)<x240));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = INT64_MIN;
	static uint64_t x243 = 13851LLU;
	uint16_t x244 = 8197U;
	int64_t t53 = INT64_MIN;

	t53 = (x241|((x242+x243)<x244));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x249 = -21;
	uint64_t x250 = UINT64_MAX;
	volatile int64_t x251 = 8219877618247LL;
	int32_t x252 = INT32_MIN;
	int32_t t54 = -57;

	t54 = (x249|((x250+x251)<x252));

	if (t54 != -21) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x259 = -8;
	static int64_t x260 = -854746965410LL;
	static volatile int32_t t55 = 7525949;

	t55 = (x257|((x258+x259)<x260));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = 6748830U;
	uint16_t x262 = UINT16_MAX;
	static uint32_t x263 = 1118U;
	uint32_t t56 = 0U;

	t56 = (x261|((x262+x263)<x264));

	if (t56 != 6748830U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x265 = INT16_MIN;
	int32_t x266 = -1;
	volatile uint8_t x267 = 88U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t57 = -425307;

	t57 = (x265|((x266+x267)<x268));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = INT8_MAX;
	int32_t x274 = 11;
	static volatile int32_t x275 = -1;

	t58 = (x273|((x274+x275)<x276));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = 34;
	int8_t x279 = 1;
	uint64_t x280 = 4227456326398LLU;

	t59 = (x277|((x278+x279)<x280));

	if (t59 != 35) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x281 = 16270U;
	static int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	uint32_t t60 = 6644U;

	t60 = (x281|((x282+x283)<x284));

	if (t60 != 16270U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x285 = 70575LL;
	uint64_t x286 = 4643328618030954760LLU;
	uint32_t x287 = 122U;
	volatile int32_t x288 = INT32_MAX;
	int64_t t61 = -12660053813477LL;

	t61 = (x285|((x286+x287)<x288));

	if (t61 != 70575LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x289 = 20LLU;
	uint16_t x290 = 29850U;
	static int16_t x291 = 182;
	uint64_t t62 = 264653796323LLU;

	t62 = (x289|((x290+x291)<x292));

	if (t62 != 21LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = INT64_MAX;
	int32_t x294 = -1;
	int32_t x296 = 7083105;
	int64_t t63 = INT64_MAX;

	t63 = (x293|((x294+x295)<x296));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x297 = 8436517U;
	int16_t x298 = -1;
	uint8_t x300 = UINT8_MAX;
	uint32_t t64 = 78177932U;

	t64 = (x297|((x298+x299)<x300));

	if (t64 != 8436517U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x303 = INT16_MIN;
	int32_t t65 = -454;

	t65 = (x301|((x302+x303)<x304));

	if (t65 != 2003) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x306 = 38LLU;
	volatile int32_t t66 = 939071;

	t66 = (x305|((x306+x307)<x308));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x313 = UINT64_MAX;
	int8_t x314 = -1;
	uint32_t x315 = 503396687U;
	volatile int16_t x316 = -1;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x313|((x314+x315)<x316));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x317 = UINT32_MAX;
	uint8_t x318 = 0U;
	int32_t x319 = INT32_MIN;
	volatile int16_t x320 = -4;
	uint32_t t68 = UINT32_MAX;

	t68 = (x317|((x318+x319)<x320));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x322 = UINT16_MAX;
	int64_t x324 = -1LL;
	volatile int32_t t69 = 296565870;

	t69 = (x321|((x322+x323)<x324));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x327 = INT16_MIN;
	static volatile int16_t x328 = -1;
	static int32_t t70 = 1334;

	t70 = (x325|((x326+x327)<x328));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x329 = 1259181U;
	volatile uint16_t x330 = 30U;
	uint32_t x331 = 819U;
	uint8_t x332 = 5U;
	static volatile uint32_t t71 = 7955085U;

	t71 = (x329|((x330+x331)<x332));

	if (t71 != 1259181U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	int32_t x338 = INT32_MAX;
	volatile int16_t x339 = INT16_MIN;
	static int8_t x340 = -1;

	t72 = (x337|((x338+x339)<x340));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x341 = UINT32_MAX;
	int8_t x342 = -1;
	int32_t x343 = -2840718;
	static int64_t x344 = 557LL;

	t73 = (x341|((x342+x343)<x344));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x345 = UINT16_MAX;
	int16_t x346 = INT16_MIN;
	volatile int16_t x347 = 137;
	uint64_t x348 = 0LLU;

	t74 = (x345|((x346+x347)<x348));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 9U;
	uint64_t x350 = 60LLU;
	int32_t x351 = 532743708;
	uint16_t x352 = UINT16_MAX;
	int32_t t75 = 6743;

	t75 = (x349|((x350+x351)<x352));

	if (t75 != 9) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x354 = 1U;
	int8_t x355 = 58;
	static int32_t t76 = -3015;

	t76 = (x353|((x354+x355)<x356));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = INT64_MAX;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MAX;

	t77 = (x357|((x358+x359)<x360));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x362 = -1041948778;
	volatile uint16_t x363 = 19332U;
	static volatile int16_t x364 = -1;

	t78 = (x361|((x362+x363)<x364));

	if (t78 != -9) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MIN;
	int64_t x367 = -1LL;
	int16_t x368 = INT16_MIN;
	volatile int32_t t79 = -77369294;

	t79 = (x365|((x366+x367)<x368));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = INT32_MAX;
	uint64_t x371 = 940382031618409LLU;
	int16_t x372 = INT16_MIN;
	volatile int32_t t80 = INT32_MAX;

	t80 = (x369|((x370+x371)<x372));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x373 = 14U;
	uint64_t x374 = 219887894664LLU;
	int8_t x375 = INT8_MIN;
	uint32_t x376 = UINT32_MAX;
	int32_t t81 = 764073522;

	t81 = (x373|((x374+x375)<x376));

	if (t81 != 14) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = INT64_MAX;
	uint8_t x378 = UINT8_MAX;
	int64_t x380 = -1LL;

	t82 = (x377|((x378+x379)<x380));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x382 = 0;
	volatile uint8_t x383 = 4U;
	volatile int64_t x384 = INT64_MIN;
	int32_t t83 = 7553215;

	t83 = (x381|((x382+x383)<x384));

	if (t83 != -13) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = 2;
	int8_t x386 = INT8_MIN;
	uint64_t x387 = 7318954LLU;
	int32_t x388 = 280;

	t84 = (x385|((x386+x387)<x388));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x389 = 0U;
	uint16_t x390 = UINT16_MAX;
	int32_t x391 = INT32_MIN;
	static volatile int16_t x392 = 2568;

	t85 = (x389|((x390+x391)<x392));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x393 = UINT16_MAX;
	uint64_t x394 = UINT64_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t86 = -532;

	t86 = (x393|((x394+x395)<x396));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = 182;
	uint16_t x400 = 7U;
	int32_t t87 = -20431;

	t87 = (x397|((x398+x399)<x400));

	if (t87 != -377) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x401 = 5U;
	int8_t x402 = INT8_MIN;
	volatile uint16_t x403 = 455U;
	volatile uint8_t x404 = 1U;
	static volatile int32_t t88 = -62058;

	t88 = (x401|((x402+x403)<x404));

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = INT64_MIN;
	uint64_t x406 = UINT64_MAX;
	static volatile int8_t x407 = -1;

	t89 = (x405|((x406+x407)<x408));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x410 = 315787205497946LLU;
	static int16_t x411 = 332;
	int8_t x412 = -1;
	volatile int32_t t90 = 920;

	t90 = (x409|((x410+x411)<x412));

	if (t90 != 12379) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x413 = INT16_MAX;
	uint8_t x415 = UINT8_MAX;
	uint32_t x416 = 330390U;

	t91 = (x413|((x414+x415)<x416));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = INT16_MIN;
	static volatile int8_t x418 = -47;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = 12141915090LLU;
	int32_t t92 = 3;

	t92 = (x417|((x418+x419)<x420));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x421 = 24851349020068LLU;
	int8_t x422 = 1;
	volatile int8_t x423 = INT8_MIN;
	volatile uint8_t x424 = 2U;
	uint64_t t93 = 819917LLU;

	t93 = (x421|((x422+x423)<x424));

	if (t93 != 24851349020069LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = -314602052698212898LL;
	uint16_t x426 = 6U;
	uint32_t x427 = 10U;
	volatile int8_t x428 = INT8_MIN;
	int64_t t94 = -10401977681468LL;

	t94 = (x425|((x426+x427)<x428));

	if (t94 != -314602052698212897LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = INT64_MIN;
	int32_t x439 = -73153;
	volatile int32_t x440 = -1;
	volatile int64_t t95 = -1081536947947184LL;

	t95 = (x437|((x438+x439)<x440));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = 230810742690875146LL;
	int8_t x442 = -1;
	int8_t x443 = 0;
	int32_t x444 = INT32_MAX;
	static volatile int64_t t96 = -573625900LL;

	t96 = (x441|((x442+x443)<x444));

	if (t96 != 230810742690875147LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x445 = 0U;
	int16_t x446 = INT16_MIN;
	static volatile uint16_t x448 = 18U;
	static int32_t t97 = -699474;

	t97 = (x445|((x446+x447)<x448));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x449 = 7022584U;
	int64_t x450 = -1LL;
	uint64_t x451 = 2LLU;
	volatile uint64_t x452 = 9083554937962256LLU;

	t98 = (x449|((x450+x451)<x452));

	if (t98 != 7022585U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = -1;
	static int8_t x454 = -6;
	static int16_t x455 = INT16_MIN;
	int32_t x456 = 533472455;
	volatile int32_t t99 = 9601;

	t99 = (x453|((x454+x455)<x456));

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

