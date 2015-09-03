#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
uint64_t x6 = 1045916LLU;
static volatile uint64_t t1 = 2LLU;
static int8_t x12 = 16;
uint16_t x14 = UINT16_MAX;
uint32_t x16 = 1001884098U;
static int32_t t3 = -70747;
volatile uint64_t x18 = 18025015LLU;
static int8_t x24 = 25;
int16_t x26 = INT16_MIN;
int32_t x27 = INT32_MIN;
int32_t x30 = INT32_MIN;
uint8_t x34 = 6U;
int8_t x56 = INT8_MAX;
volatile int32_t t14 = INT32_MAX;
volatile int8_t x61 = INT8_MAX;
volatile int8_t x71 = -1;
int32_t x75 = -1;
static int16_t x76 = -28;
int64_t t18 = 4375037971621LL;
int8_t x80 = 40;
uint64_t x94 = 37647980913628059LLU;
int64_t x95 = INT64_MIN;
volatile uint64_t x98 = UINT64_MAX;
volatile int8_t x101 = 31;
int32_t x103 = -1;
static int32_t x105 = 1;
uint8_t x107 = 120U;
static volatile int64_t t26 = 1123977894LL;
uint32_t x119 = 1928878U;
int8_t x122 = -6;
int32_t x127 = -6;
volatile uint64_t t31 = 2315002142119510LLU;
int32_t x132 = INT32_MIN;
int32_t x135 = -1;
uint64_t t34 = 215152091LLU;
int64_t x150 = 47LL;
static int32_t x151 = 0;
volatile int64_t t38 = 1385672LL;
volatile int64_t x160 = -1LL;
int32_t t39 = 2;
int32_t x162 = -1153;
volatile int16_t x172 = INT16_MIN;
uint64_t x173 = 5098161328LLU;
int8_t x178 = 0;
static int64_t x180 = INT64_MIN;
static volatile int32_t t44 = 4;
static int64_t x182 = -5412LL;
int32_t x186 = INT32_MIN;
static volatile uint32_t x188 = 9U;
static uint32_t x189 = 266U;
volatile uint32_t x191 = 292U;
uint8_t x192 = UINT8_MAX;
volatile int64_t x198 = 9546656450692765LL;
static volatile int64_t t49 = -4LL;
volatile int16_t x203 = INT16_MAX;
uint16_t x205 = 716U;
int32_t x209 = -33556;
static uint64_t x210 = 3149511LLU;
static int64_t x221 = -1LL;
int16_t x224 = INT16_MIN;
uint64_t t57 = 109866739047LLU;
uint32_t x234 = 9U;
volatile int64_t t58 = 119687455139281LL;
uint16_t x237 = 13U;
volatile uint64_t x238 = UINT64_MAX;
int64_t x245 = INT64_MIN;
int64_t x248 = -2082232373089042LL;
volatile int32_t t62 = -3;
static int16_t x258 = INT16_MAX;
volatile int32_t x260 = 11316178;
int32_t x262 = -130839355;
int32_t t65 = -28929;
int16_t x270 = INT16_MIN;
uint64_t x281 = UINT64_MAX;
int16_t x287 = -256;
int16_t x290 = -1;
uint32_t x295 = UINT32_MAX;
static volatile int32_t t74 = 935207645;
static uint8_t x311 = 2U;
uint16_t x321 = 3364U;
int64_t x322 = -1LL;
int8_t x323 = INT8_MAX;
int32_t t81 = 10;
volatile int16_t x329 = -186;
int64_t x333 = 151926LL;
volatile int16_t x344 = INT16_MIN;
int32_t t86 = -410;
int64_t x349 = 18314LL;
int64_t t87 = -2176878192692423022LL;
volatile uint64_t t88 = 5855494276434693397LLU;
int64_t x360 = INT64_MIN;
volatile uint32_t x361 = 7063U;
static int32_t x362 = INT32_MAX;
uint8_t x367 = UINT8_MAX;
uint32_t x377 = UINT32_MAX;
int64_t x382 = INT64_MAX;
volatile int64_t x384 = -1LL;
int8_t x385 = INT8_MIN;
volatile uint16_t x387 = 23U;
int32_t x388 = INT32_MAX;
static int32_t x392 = -1;
int8_t x396 = INT8_MIN;
static int32_t x398 = INT32_MIN;


void f0(void) {
	int32_t x1 = -3225252;
	int8_t x2 = -1;
	volatile uint64_t x3 = 45LLU;
	volatile int32_t t0 = -286266;

	t0 = (x1^(x2+(x3==x4)));

	if (t0 != 3225251) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x7 = INT32_MAX;
	int32_t x8 = INT32_MIN;

	t1 = (x5^(x6+(x7==x8)));

	if (t1 != 18446744073708505699LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -983815531570634842LL;
	uint16_t x10 = 391U;
	volatile int64_t x11 = INT64_MAX;
	int64_t t2 = 797882238891789LL;

	t2 = (x9^(x10+(x11==x12)));

	if (t2 != -983815531570635231LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	int16_t x15 = -185;

	t3 = (x13^(x14+(x15==x16)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static int32_t x19 = 1162;
	int32_t x20 = INT32_MIN;
	static uint64_t t4 = 20568822358010596LLU;

	t4 = (x17^(x18+(x19==x20)));

	if (t4 != 18446744071580092983LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 1;
	int32_t x22 = -1;
	int16_t x23 = INT16_MIN;
	int32_t t5 = -359;

	t5 = (x21^(x22+(x23==x24)));

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	uint64_t x28 = 1LLU;
	volatile int32_t t6 = 5;

	t6 = (x25^(x26+(x27==x28)));

	if (t6 != -32769) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -51;
	int8_t x31 = 1;
	int16_t x32 = -3;
	int32_t t7 = 0;

	t7 = (x29^(x30+(x31==x32)));

	if (t7 != 2147483597) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -26;
	uint32_t x35 = 16862U;
	int8_t x36 = INT8_MAX;
	int32_t t8 = 2576;

	t8 = (x33^(x34+(x35==x36)));

	if (t8 != -32) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	static uint8_t x38 = UINT8_MAX;
	int32_t x39 = 47069020;
	int8_t x40 = INT8_MIN;
	int32_t t9 = -84;

	t9 = (x37^(x38+(x39==x40)));

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MAX;
	volatile int8_t x43 = -26;
	uint16_t x44 = UINT16_MAX;
	int32_t t10 = 342324148;

	t10 = (x41^(x42+(x43==x44)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 206U;
	uint64_t x46 = 96783LLU;
	int16_t x47 = INT16_MAX;
	int64_t x48 = 13122384LL;
	volatile uint64_t t11 = 329967835834481LLU;

	t11 = (x45^(x46+(x47==x48)));

	if (t11 != 96961LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile uint32_t x50 = 3986U;
	int32_t x51 = INT32_MIN;
	uint16_t x52 = UINT16_MAX;
	static uint32_t t12 = 3U;

	t12 = (x49^(x50+(x51==x52)));

	if (t12 != 4294938514U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	static int32_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	volatile int32_t t13 = -113;

	t13 = (x53^(x54+(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	volatile int32_t x58 = INT32_MIN;
	uint64_t x59 = 38091290342376851LLU;
	int32_t x60 = INT32_MIN;

	t14 = (x57^(x58+(x59==x60)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x62 = 10U;
	uint16_t x63 = 8594U;
	int64_t x64 = INT64_MIN;
	int32_t t15 = 0;

	t15 = (x61^(x62+(x63==x64)));

	if (t15 != 117) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 0LLU;
	int16_t x66 = 139;
	int8_t x67 = INT8_MAX;
	int16_t x68 = INT16_MAX;
	volatile uint64_t t16 = 602084653046LLU;

	t16 = (x65^(x66+(x67==x68)));

	if (t16 != 139LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 31357494U;
	uint64_t x70 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	uint64_t t17 = 7131091999180040425LLU;

	t17 = (x69^(x70+(x71==x72)));

	if (t17 != 18446744073678194121LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 195LL;
	int16_t x74 = -4126;

	t18 = (x73^(x74+(x75==x76)));

	if (t18 != -4319LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 244U;
	volatile int8_t x78 = 34;
	uint16_t x79 = 1U;
	volatile int32_t t19 = 0;

	t19 = (x77^(x78+(x79==x80)));

	if (t19 != 214) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	static int64_t x82 = INT64_MAX;
	int64_t x83 = -123672993512168LL;
	int64_t x84 = -1LL;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x81^(x82+(x83==x84)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = UINT64_MAX;
	uint32_t x86 = 39U;
	volatile int16_t x87 = INT16_MAX;
	int8_t x88 = -30;
	volatile uint64_t t21 = 1030757809LLU;

	t21 = (x85^(x86+(x87==x88)));

	if (t21 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int64_t x90 = 1303LL;
	uint32_t x91 = UINT32_MAX;
	uint32_t x92 = 245533U;
	volatile int64_t t22 = -3739845226492LL;

	t22 = (x89^(x90+(x91==x92)));

	if (t22 != -1385LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = INT16_MIN;
	static volatile int16_t x96 = INT16_MAX;
	uint64_t t23 = 976002LLU;

	t23 = (x93^(x94+(x95==x96)));

	if (t23 != 18409096092795900827LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 3087;
	static int16_t x99 = 59;
	int64_t x100 = -293642913077243LL;
	volatile uint64_t t24 = 66184700031360LLU;

	t24 = (x97^(x98+(x99==x100)));

	if (t24 != 18446744073709548528LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = 11869;
	int64_t x104 = -869488535386LL;
	volatile int32_t t25 = -353023;

	t25 = (x101^(x102+(x103==x104)));

	if (t25 != 11842) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MIN;
	int64_t x108 = INT64_MIN;

	t26 = (x105^(x106+(x107==x108)));

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = 1640U;
	uint8_t x110 = 6U;
	int32_t x111 = 8826;
	int32_t x112 = -275;
	int32_t t27 = -592193;

	t27 = (x109^(x110+(x111==x112)));

	if (t27 != 1646) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -989;
	uint8_t x114 = UINT8_MAX;
	volatile int32_t x115 = -56581856;
	static volatile int8_t x116 = INT8_MIN;
	int32_t t28 = 1846766;

	t28 = (x113^(x114+(x115==x116)));

	if (t28 != -804) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = UINT64_MAX;
	int16_t x118 = 161;
	static int32_t x120 = INT32_MIN;
	static uint64_t t29 = 3LLU;

	t29 = (x117^(x118+(x119==x120)));

	if (t29 != 18446744073709551454LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	volatile uint8_t x123 = UINT8_MAX;
	volatile uint32_t x124 = UINT32_MAX;
	volatile int32_t t30 = -230408;

	t30 = (x121^(x122+(x123==x124)));

	if (t30 != 2147483642) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 4840182LLU;
	int8_t x126 = INT8_MIN;
	volatile uint8_t x128 = UINT8_MAX;

	t31 = (x125^(x126+(x127==x128)));

	if (t31 != 18446744073704711542LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	static int16_t x130 = -1;
	uint8_t x131 = UINT8_MAX;
	static volatile int64_t t32 = INT64_MAX;

	t32 = (x129^(x130+(x131==x132)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MAX;
	uint64_t x134 = UINT64_MAX;
	int32_t x136 = -1;
	static volatile uint64_t t33 = 22574113589936LLU;

	t33 = (x133^(x134+(x135==x136)));

	if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -15;
	uint64_t x138 = 47858381888LLU;
	uint64_t x139 = 550591111584800LLU;
	uint32_t x140 = 23U;

	t34 = (x137^(x138+(x139==x140)));

	if (t34 != 18446744025851169713LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 3;
	volatile uint8_t x142 = 3U;
	static int16_t x143 = INT16_MAX;
	uint32_t x144 = 0U;
	volatile int32_t t35 = -484420973;

	t35 = (x141^(x142+(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	volatile int32_t x146 = INT32_MAX;
	int8_t x147 = 1;
	uint64_t x148 = 275111806026639493LLU;
	static volatile int32_t t36 = 1;

	t36 = (x145^(x146+(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 2U;
	int64_t x152 = INT64_MIN;
	int64_t t37 = 375345687591LL;

	t37 = (x149^(x150+(x151==x152)));

	if (t37 != 45LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -129397405995037LL;
	uint8_t x154 = 23U;
	volatile int16_t x155 = -1;
	volatile int8_t x156 = 0;

	t38 = (x153^(x154+(x155==x156)));

	if (t38 != -129397405995020LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 244U;
	int16_t x158 = INT16_MIN;
	int8_t x159 = -1;

	t39 = (x157^(x158+(x159==x160)));

	if (t39 != -32523) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	uint8_t x163 = 1U;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t40 = -51460;

	t40 = (x161^(x162+(x163==x164)));

	if (t40 != 1152) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	volatile uint32_t x166 = 166248015U;
	int64_t x167 = 130901759703164194LL;
	int8_t x168 = INT8_MIN;
	uint32_t t41 = 912237U;

	t41 = (x165^(x166+(x167==x168)));

	if (t41 != 166248880U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 56317878012303372LL;
	static uint64_t x170 = UINT64_MAX;
	volatile int64_t x171 = INT64_MAX;
	volatile uint64_t t42 = 3LLU;

	t42 = (x169^(x170+(x171==x172)));

	if (t42 != 18390426195697248243LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = INT8_MAX;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = -1LL;
	uint64_t t43 = 1249989920LLU;

	t43 = (x173^(x174+(x175==x176)));

	if (t43 != 5098161200LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 1U;
	volatile int32_t x179 = INT32_MAX;

	t44 = (x177^(x178+(x179==x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MAX;
	int64_t x183 = INT64_MIN;
	static int8_t x184 = INT8_MIN;
	static volatile int64_t t45 = 1201360282LL;

	t45 = (x181^(x182+(x183==x184)));

	if (t45 != -2147478237LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = UINT32_MAX;
	static uint32_t x187 = UINT32_MAX;
	volatile uint32_t t46 = 13U;

	t46 = (x185^(x186+(x187==x188)));

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = 2;
	uint32_t t47 = 3U;

	t47 = (x189^(x190+(x191==x192)));

	if (t47 != 264U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	uint32_t x194 = 257U;
	int16_t x195 = INT16_MIN;
	int8_t x196 = -1;
	uint64_t t48 = 0LLU;

	t48 = (x193^(x194+(x195==x196)));

	if (t48 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MAX;

	t49 = (x197^(x198+(x199==x200)));

	if (t49 != -9546657170897251LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = 0;
	static volatile int16_t x202 = -1;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = 286553817;

	t50 = (x201^(x202+(x203==x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = 1U;
	volatile int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 6815;

	t51 = (x205^(x206+(x207==x208)));

	if (t51 != 717) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x211 = -1;
	int16_t x212 = 0;
	uint64_t t52 = 248LLU;

	t52 = (x209^(x210+(x211==x212)));

	if (t52 != 18446744073706369579LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 1;
	static int16_t x214 = -1;
	int32_t x215 = INT32_MIN;
	static int16_t x216 = INT16_MIN;
	int32_t t53 = 947594;

	t53 = (x213^(x214+(x215==x216)));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 12U;
	int16_t x218 = 8;
	int32_t x219 = 14354;
	volatile int16_t x220 = INT16_MIN;
	int32_t t54 = 5599658;

	t54 = (x217^(x218+(x219==x220)));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x222 = INT8_MIN;
	uint64_t x223 = UINT64_MAX;
	int64_t t55 = 8LL;

	t55 = (x221^(x222+(x223==x224)));

	if (t55 != 127LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 18U;
	int8_t x226 = -1;
	static uint8_t x227 = 2U;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -71;

	t56 = (x225^(x226+(x227==x228)));

	if (t56 != -19) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x230 = 24162;
	uint16_t x231 = UINT16_MAX;
	volatile uint64_t x232 = 50899962LLU;

	t57 = (x229^(x230+(x231==x232)));

	if (t57 != 18446744073709527453LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -7284LL;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 36LLU;

	t58 = (x233^(x234+(x235==x236)));

	if (t58 != -7291LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x239 = 1223010357LLU;
	uint32_t x240 = 185907871U;
	uint64_t t59 = 2828404495346LLU;

	t59 = (x237^(x238+(x239==x240)));

	if (t59 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	static int8_t x242 = -1;
	volatile int64_t x243 = -4168858220701993LL;
	static int16_t x244 = INT16_MAX;
	int32_t t60 = 0;

	t60 = (x241^(x242+(x243==x244)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MIN;
	static int32_t x247 = -134660990;
	volatile int64_t t61 = -38835801LL;

	t61 = (x245^(x246+(x247==x248)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	int16_t x250 = INT16_MAX;
	uint64_t x251 = 1LLU;
	uint8_t x252 = 1U;

	t62 = (x249^(x250+(x251==x252)));

	if (t62 != -32769) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	uint32_t x254 = 1709292794U;
	uint8_t x255 = 3U;
	int64_t x256 = INT64_MIN;
	static volatile uint32_t t63 = 2U;

	t63 = (x253^(x254+(x255==x256)));

	if (t63 != 438190853U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -4503405;
	int16_t x259 = INT16_MIN;
	int32_t t64 = 1;

	t64 = (x257^(x258+(x259==x260)));

	if (t64 != -4507796) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = INT32_MIN;
	int16_t x263 = 27;
	int16_t x264 = -1;

	t65 = (x261^(x262+(x263==x264)));

	if (t65 != 2016644293) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 43897934;
	int64_t x266 = INT64_MIN;
	static int32_t x267 = INT32_MIN;
	volatile uint8_t x268 = UINT8_MAX;
	volatile int64_t t66 = -2333LL;

	t66 = (x265^(x266+(x267==x268)));

	if (t66 != -9223372036810877874LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -35;
	uint16_t x271 = 6U;
	int64_t x272 = -1LL;
	int32_t t67 = 65524706;

	t67 = (x269^(x270+(x271==x272)));

	if (t67 != 32733) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -19;
	int16_t x274 = 226;
	int8_t x275 = INT8_MIN;
	uint8_t x276 = 1U;
	volatile int32_t t68 = 4977;

	t68 = (x273^(x274+(x275==x276)));

	if (t68 != -241) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MAX;
	int8_t x278 = 13;
	uint32_t x279 = 8U;
	static int8_t x280 = INT8_MIN;
	int32_t t69 = -174235;

	t69 = (x277^(x278+(x279==x280)));

	if (t69 != 2147483634) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x282 = UINT64_MAX;
	static volatile uint16_t x283 = 41U;
	int16_t x284 = INT16_MAX;
	uint64_t t70 = 779782631186352LLU;

	t70 = (x281^(x282+(x283==x284)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 258147LLU;
	int16_t x286 = INT16_MAX;
	int32_t x288 = 1;
	uint64_t t71 = 27853LLU;

	t71 = (x285^(x286+(x287==x288)));

	if (t71 != 233372LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 80629087;
	volatile int8_t x291 = INT8_MIN;
	static int32_t x292 = -1;
	static int32_t t72 = -4;

	t72 = (x289^(x290+(x291==x292)));

	if (t72 != -80629088) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 2354755918510LL;
	uint16_t x294 = UINT16_MAX;
	uint32_t x296 = 839U;
	int64_t t73 = 62168438982777LL;

	t73 = (x293^(x294+(x295==x296)));

	if (t73 != 2354755872081LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	volatile uint16_t x298 = 2U;
	int16_t x299 = INT16_MAX;
	int64_t x300 = 24LL;

	t74 = (x297^(x298+(x299==x300)));

	if (t74 != 32765) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x302 = 2U;
	volatile uint8_t x303 = 8U;
	int8_t x304 = -1;
	volatile int32_t t75 = -303022;

	t75 = (x301^(x302+(x303==x304)));

	if (t75 != -126) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 31;
	volatile uint32_t x306 = 1073439581U;
	uint16_t x307 = 0U;
	static int16_t x308 = INT16_MIN;
	uint32_t t76 = 0U;

	t76 = (x305^(x306+(x307==x308)));

	if (t76 != 1073439554U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	int32_t x310 = -23645027;
	uint64_t x312 = UINT64_MAX;
	static volatile int64_t t77 = 4002960025246699LL;

	t77 = (x309^(x310+(x311==x312)));

	if (t77 != 23645026LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MAX;
	int64_t x314 = -1LL;
	static int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	static volatile int64_t t78 = INT64_MIN;

	t78 = (x313^(x314+(x315==x316)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 2791336723475215LL;
	static uint32_t x318 = 222875073U;
	int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MIN;
	volatile int64_t t79 = 42043LL;

	t79 = (x317^(x318+(x319==x320)));

	if (t79 != 2791336634820302LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x324 = INT32_MAX;
	volatile int64_t t80 = -2218220LL;

	t80 = (x321^(x322+(x323==x324)));

	if (t80 != -3365LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = -1;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MAX;

	t81 = (x325^(x326+(x327==x328)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x330 = 8944U;
	int16_t x331 = 497;
	uint32_t x332 = 778066U;
	volatile int32_t t82 = 83166;

	t82 = (x329^(x330+(x331==x332)));

	if (t82 != -8778) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MIN;
	static uint64_t x335 = 42LLU;
	uint16_t x336 = UINT16_MAX;
	static int64_t t83 = -5816543184153216LL;

	t83 = (x333^(x334+(x335==x336)));

	if (t83 != -142986LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 11U;
	static uint8_t x338 = 40U;
	int16_t x339 = -104;
	static int8_t x340 = -1;
	volatile int32_t t84 = 221195;

	t84 = (x337^(x338+(x339==x340)));

	if (t84 != 35) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x341 = INT16_MAX;
	int16_t x342 = 809;
	uint16_t x343 = 567U;
	int32_t t85 = 145;

	t85 = (x341^(x342+(x343==x344)));

	if (t85 != 31958) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	int8_t x346 = 0;
	int8_t x347 = 26;
	int8_t x348 = INT8_MAX;

	t86 = (x345^(x346+(x347==x348)));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x350 = UINT16_MAX;
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;

	t87 = (x349^(x350+(x351==x352)));

	if (t87 != 47221LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 45LLU;
	volatile int32_t x354 = -2002;
	static uint64_t x355 = 13840112537549361LLU;
	uint8_t x356 = 65U;

	t88 = (x353^(x354+(x355==x356)));

	if (t88 != 18446744073709549571LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	static int32_t x358 = INT32_MAX;
	volatile int64_t x359 = -1LL;
	volatile uint64_t t89 = 114948742LLU;

	t89 = (x357^(x358+(x359==x360)));

	if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x363 = INT16_MAX;
	int64_t x364 = -2758LL;
	uint32_t t90 = 20U;

	t90 = (x361^(x362+(x363==x364)));

	if (t90 != 2147476584U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	static volatile uint16_t x366 = 995U;
	volatile int8_t x368 = INT8_MIN;
	int32_t t91 = -1;

	t91 = (x365^(x366+(x367==x368)));

	if (t91 != -31773) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = 1;
	volatile uint8_t x371 = UINT8_MAX;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t92 = -4041;

	t92 = (x369^(x370+(x371==x372)));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MIN;
	int8_t x375 = -49;
	int8_t x376 = INT8_MAX;
	volatile int32_t t93 = 79738;

	t93 = (x373^(x374+(x375==x376)));

	if (t93 != 32640) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x378 = 4;
	int64_t x379 = INT64_MAX;
	int16_t x380 = INT16_MIN;
	uint32_t t94 = 427886388U;

	t94 = (x377^(x378+(x379==x380)));

	if (t94 != 4294967291U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MIN;
	uint16_t x383 = 24803U;
	static int64_t t95 = -16923912LL;

	t95 = (x381^(x382+(x383==x384)));

	if (t95 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MIN;
	volatile int32_t t96 = 52824713;

	t96 = (x385^(x386+(x387==x388)));

	if (t96 != 2147483520) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 1783109U;
	uint64_t x390 = 3923916652513548LLU;
	static uint16_t x391 = 95U;
	static volatile uint64_t t97 = 497LLU;

	t97 = (x389^(x390+(x391==x392)));

	if (t97 != 3923916651805769LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -21;
	int32_t x394 = -1;
	uint16_t x395 = 4U;
	volatile int32_t t98 = -1989;

	t98 = (x393^(x394+(x395==x396)));

	if (t98 != 20) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 3484405377872571572LLU;
	uint16_t x399 = 3552U;
	uint64_t x400 = 507LLU;
	volatile uint64_t t99 = 5557678751397593LLU;

	t99 = (x397^(x398+(x399==x400)));

	if (t99 != 14962338696962911412LLU) { NG(); } else { ; }
	
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

