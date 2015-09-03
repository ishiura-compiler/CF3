#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = 18262;
uint8_t x6 = UINT8_MAX;
volatile uint64_t x18 = 205LLU;
volatile int32_t x19 = 2;
volatile uint64_t t4 = 29743721908LLU;
int32_t x27 = -1;
int64_t t6 = 360281375922177LL;
int32_t x35 = -335;
uint8_t x36 = UINT8_MAX;
volatile uint8_t x41 = 29U;
uint32_t x44 = UINT32_MAX;
int64_t t11 = 524874456182240805LL;
int64_t x61 = -143349331360978341LL;
int8_t x62 = -1;
static int32_t x64 = INT32_MIN;
int8_t x72 = INT8_MIN;
int8_t x73 = INT8_MIN;
static int8_t x74 = INT8_MIN;
int64_t t17 = 91644LL;
static volatile uint64_t x80 = 6LLU;
uint64_t t18 = 62982984522LLU;
static int32_t x85 = -1;
static volatile int16_t x88 = 23;
volatile int32_t t20 = -30;
int32_t x89 = -1;
volatile uint8_t x96 = 22U;
int64_t x97 = INT64_MIN;
static int64_t x101 = INT64_MIN;
volatile int64_t x107 = INT64_MAX;
int16_t x109 = INT16_MAX;
static volatile uint64_t t26 = 3183112160288LLU;
int16_t x122 = -61;
int64_t t27 = 64603995376361734LL;
uint32_t x125 = 2901136U;
uint32_t x126 = 0U;
static int8_t x130 = INT8_MIN;
uint32_t t29 = 63U;
int64_t x136 = -1LL;
volatile uint64_t x142 = 2689176387136073102LLU;
int32_t x144 = INT32_MAX;
int32_t x145 = -543312567;
static uint32_t x149 = 119537U;
static uint16_t x151 = UINT16_MAX;
static uint8_t x154 = UINT8_MAX;
uint32_t x163 = UINT32_MAX;
static int16_t x170 = -6508;
int8_t x178 = INT8_MIN;
static int16_t x179 = INT16_MIN;
static int32_t t40 = -1845183;
uint64_t x181 = 53050137LLU;
uint64_t x186 = UINT64_MAX;
uint8_t x188 = 10U;
int64_t x190 = -5990715348133LL;
int16_t x196 = INT16_MIN;
volatile int8_t x202 = INT8_MIN;
uint32_t t45 = 247602502U;
int32_t t46 = 466;
int16_t x209 = -1;
int32_t x214 = -72838;
volatile int32_t t48 = 1;
uint16_t x221 = 129U;
int32_t x224 = INT32_MIN;
int32_t x234 = -1;
uint32_t x235 = 634U;
uint16_t x236 = 1U;
uint8_t x237 = 0U;
int8_t x238 = -25;
static int8_t x240 = INT8_MIN;
uint32_t x259 = 1572974865U;
int16_t x270 = INT16_MAX;
static int32_t x279 = -1;
uint64_t x286 = 6749562326117LLU;
uint64_t t58 = 42LLU;
int32_t x293 = 1;
uint8_t x294 = UINT8_MAX;
uint32_t x295 = UINT32_MAX;
int64_t x297 = INT64_MIN;
int8_t x302 = -1;
static volatile int16_t x311 = -1;
volatile uint64_t t65 = 64623169LLU;
uint32_t x323 = 30932697U;
int32_t x325 = INT32_MAX;
uint64_t t69 = 342LLU;
static uint32_t x351 = 5014U;
static volatile int64_t t73 = -778237LL;
int8_t x367 = -1;
uint32_t x377 = 5U;
static int16_t x379 = -9752;
static uint64_t x380 = UINT64_MAX;
int8_t x382 = INT8_MIN;
uint64_t x394 = 435766289630LLU;
int16_t x396 = -6;
int16_t x401 = INT16_MIN;
static uint32_t x404 = UINT32_MAX;
static uint64_t x421 = 568492653575LLU;
static uint64_t t85 = 3050758784LLU;
int32_t x425 = INT32_MAX;
uint64_t t87 = 780LLU;
int16_t x438 = INT16_MAX;
volatile uint64_t t89 = 125907608781715LLU;
int64_t x447 = 211428755123073LL;
int64_t t91 = -447367848LL;
int16_t x451 = INT16_MIN;
int16_t x452 = 29;
volatile int64_t x460 = 15457940916264622LL;
int32_t x463 = -1;
static uint32_t x465 = UINT32_MAX;
int8_t x475 = 3;
int32_t x477 = INT32_MAX;
int32_t x478 = -593;
int16_t x493 = INT16_MIN;
static volatile int8_t x495 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int8_t x2 = INT8_MIN;
	uint16_t x4 = 58U;
	int32_t t0 = -7;

	t0 = (x1%((x2*x3)|x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 13786LL;
	int32_t x7 = -1;
	volatile int32_t x8 = INT32_MIN;
	static volatile int64_t t1 = -12599109196199LL;

	t1 = (x5%((x6*x7)|x8));

	if (t1 != 16LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int32_t x10 = 0;
	static int16_t x11 = -1;
	int16_t x12 = 6;
	int32_t t2 = 102;

	t2 = (x9%((x10*x11)|x12));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	volatile int64_t x14 = 63586313018LL;
	static int64_t x15 = 176272LL;
	static uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 156483LLU;

	t3 = (x13%((x14*x15)|x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 13464055;
	int64_t x20 = -1LL;

	t4 = (x17%((x18*x19)|x20));

	if (t4 != 13464055LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MIN;
	uint64_t x23 = UINT64_MAX;
	static int16_t x24 = INT16_MIN;
	volatile uint64_t t5 = 3271272702670155053LLU;

	t5 = (x21%((x22*x23)|x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 5284853886LL;
	volatile int16_t x26 = INT16_MAX;
	volatile int64_t x28 = INT64_MIN;

	t6 = (x25%((x26*x27)|x28));

	if (t6 != 28291LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = UINT32_MAX;
	volatile int32_t x30 = -1;
	volatile int32_t x31 = INT32_MAX;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 1931957579LL;

	t7 = (x29%((x30*x31)|x32));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	uint8_t x34 = 19U;
	volatile int32_t t8 = -542168841;

	t8 = (x33%((x34*x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 12170052U;
	int64_t x38 = 0LL;
	int64_t x39 = 1865458LL;
	volatile int8_t x40 = INT8_MIN;
	volatile int64_t t9 = -1767925LL;

	t9 = (x37%((x38*x39)|x40));

	if (t9 != 68LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = INT16_MAX;
	int32_t x43 = 44;
	static volatile uint32_t t10 = 1864U;

	t10 = (x41%((x42*x43)|x44));

	if (t10 != 29U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	static volatile int16_t x50 = -1;
	int32_t x51 = INT32_MAX;
	static int64_t x52 = -1LL;

	t11 = (x49%((x50*x51)|x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	int8_t x54 = -1;
	static int16_t x55 = 1;
	uint32_t x56 = 771620419U;
	volatile uint32_t t12 = 146U;

	t12 = (x53%((x54*x55)|x56));

	if (t12 != 127U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = 1;
	uint32_t x58 = UINT32_MAX;
	volatile uint16_t x59 = 54U;
	uint64_t x60 = 3604953538LLU;
	uint64_t t13 = 131LLU;

	t13 = (x57%((x58*x59)|x60));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x63 = INT8_MIN;
	static volatile int64_t t14 = -117918649849189LL;

	t14 = (x61%((x62*x63)|x64));

	if (t14 != -332860581LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	static int32_t x66 = INT32_MIN;
	static uint64_t x67 = UINT64_MAX;
	volatile int64_t x68 = -1LL;
	uint64_t t15 = 1286432232LLU;

	t15 = (x65%((x66*x67)|x68));

	if (t15 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	int32_t x70 = -1834901;
	uint16_t x71 = 0U;
	static volatile int32_t t16 = -2095208;

	t16 = (x69%((x70*x71)|x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x75 = 14;
	static int64_t x76 = 3816LL;

	t17 = (x73%((x74*x75)|x76));

	if (t17 != -8LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MAX;
	int64_t x78 = -23075973445745LL;
	uint8_t x79 = 117U;

	t18 = (x77%((x78*x79)|x80));

	if (t18 != 127LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	volatile int16_t x82 = -159;
	int16_t x83 = -1;
	int32_t x84 = 1553185;
	int32_t t19 = -399532;

	t19 = (x81%((x82*x83)|x84));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MAX;

	t20 = (x85%((x86*x87)|x88));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = 1136U;
	uint8_t x91 = 0U;
	static int64_t x92 = -6602707466649045LL;
	int64_t t21 = 52019LL;

	t21 = (x89%((x90*x91)|x92));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MAX;
	volatile uint8_t x94 = 62U;
	int8_t x95 = INT8_MAX;
	int32_t t22 = 4;

	t22 = (x93%((x94*x95)|x96));

	if (t22 != 7781) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x98 = UINT64_MAX;
	volatile int64_t x99 = INT64_MIN;
	int8_t x100 = -1;
	uint64_t t23 = 1518522441584582LLU;

	t23 = (x97%((x98*x99)|x100));

	if (t23 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x102 = 21U;
	int16_t x103 = INT16_MAX;
	int64_t x104 = INT64_MIN;
	volatile int64_t t24 = 28163362LL;

	t24 = (x101%((x102*x103)|x104));

	if (t24 != -688107LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = 7;
	static volatile uint64_t x106 = 13970708377438105LLU;
	static uint32_t x108 = UINT32_MAX;
	volatile uint64_t t25 = 123679389454076LLU;

	t25 = (x105%((x106*x107)|x108));

	if (t25 != 7LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x110 = UINT64_MAX;
	volatile int8_t x111 = 0;
	static volatile int32_t x112 = INT32_MAX;

	t26 = (x109%((x110*x111)|x112));

	if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x121 = INT64_MIN;
	int16_t x123 = -1;
	int64_t x124 = 249043LL;

	t27 = (x121%((x122*x123)|x124));

	if (t27 != -96287LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x127 = -205;
	static int16_t x128 = INT16_MIN;
	volatile uint32_t t28 = 1484U;

	t28 = (x125%((x126*x127)|x128));

	if (t28 != 2901136U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	int32_t x131 = -1;
	static uint32_t x132 = 6629U;

	t29 = (x129%((x130*x131)|x132));

	if (t29 != 4923U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = INT64_MIN;
	int16_t x134 = -1;
	static volatile int8_t x135 = INT8_MIN;
	static int64_t t30 = -36286195998442696LL;

	t30 = (x133%((x134*x135)|x136));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = 9506LL;
	volatile uint8_t x138 = 0U;
	int8_t x139 = INT8_MIN;
	static uint32_t x140 = 3U;
	int64_t t31 = -3278174335535LL;

	t31 = (x137%((x138*x139)|x140));

	if (t31 != 2LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x141 = UINT64_MAX;
	int64_t x143 = 4700619102323540LL;
	volatile uint64_t t32 = 334702356028375LLU;

	t32 = (x141%((x142*x143)|x144));

	if (t32 != 1382964739721658374LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x146 = INT8_MIN;
	int32_t x147 = -1;
	uint8_t x148 = 0U;
	int32_t t33 = -88899010;

	t33 = (x145%((x146*x147)|x148));

	if (t33 != -55) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x150 = UINT8_MAX;
	int32_t x152 = INT32_MIN;
	volatile uint32_t t34 = 2320062U;

	t34 = (x149%((x150*x151)|x152));

	if (t34 != 119537U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = INT32_MIN;
	int64_t x155 = -197826295008613LL;
	int32_t x156 = INT32_MIN;
	int64_t t35 = 224418LL;

	t35 = (x153%((x154*x155)|x156));

	if (t35 != -28338956LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = INT8_MIN;
	uint16_t x158 = 202U;
	int64_t x159 = 5609140538134LL;
	volatile int32_t x160 = INT32_MIN;
	int64_t t36 = 1442816682LL;

	t36 = (x157%((x158*x159)|x160));

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x161 = INT64_MAX;
	int8_t x162 = -50;
	int8_t x164 = -2;
	static volatile int64_t t37 = 15141581463LL;

	t37 = (x161%((x162*x163)|x164));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	static uint64_t x171 = 11128414822LLU;
	static volatile int64_t x172 = 405424235369439LL;
	static uint64_t t38 = 110LLU;

	t38 = (x169%((x170*x171)|x172));

	if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x173 = -1;
	static uint16_t x174 = UINT16_MAX;
	int16_t x175 = -1;
	int32_t x176 = 2747;
	volatile int32_t t39 = 238657;

	t39 = (x173%((x174*x175)|x176));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = 3U;
	static int16_t x180 = -1;

	t40 = (x177%((x178*x179)|x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x182 = INT32_MIN;
	int64_t x183 = -1LL;
	int16_t x184 = INT16_MAX;
	uint64_t t41 = 2967228LLU;

	t41 = (x181%((x182*x183)|x184));

	if (t41 != 53050137LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x185 = 18LLU;
	volatile int32_t x187 = -1;
	volatile uint64_t t42 = 102797LLU;

	t42 = (x185%((x186*x187)|x188));

	if (t42 != 7LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MAX;
	int16_t x191 = 102;
	uint8_t x192 = UINT8_MAX;
	static int64_t t43 = 1974LL;

	t43 = (x189%((x190*x191)|x192));

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MAX;
	int64_t x194 = -1LL;
	int16_t x195 = 0;
	int64_t t44 = -16762117LL;

	t44 = (x193%((x194*x195)|x196));

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x201 = 183369677;
	uint32_t x203 = 2U;
	int8_t x204 = -1;

	t45 = (x201%((x202*x203)|x204));

	if (t45 != 183369677U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x205 = 961U;
	int32_t x206 = -885724807;
	volatile int8_t x207 = -1;
	uint8_t x208 = 29U;

	t46 = (x205%((x206*x207)|x208));

	if (t46 != 961) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x210 = -61;
	static int8_t x211 = 5;
	uint32_t x212 = 35U;
	uint32_t t47 = 0U;

	t47 = (x209%((x210*x211)|x212));

	if (t47 != 272U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MIN;
	uint8_t x215 = 1U;
	int8_t x216 = -1;

	t48 = (x213%((x214*x215)|x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = INT64_MAX;
	static int32_t x218 = INT32_MAX;
	static int8_t x219 = -1;
	int8_t x220 = 18;
	static volatile int64_t t49 = 322451479973LL;

	t49 = (x217%((x218*x219)|x220));

	if (t49 != 721LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x222 = UINT16_MAX;
	static int64_t x223 = -1LL;
	int64_t t50 = 7523030036LL;

	t50 = (x221%((x222*x223)|x224));

	if (t50 != 129LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x233 = UINT8_MAX;
	uint32_t t51 = 1136760413U;

	t51 = (x233%((x234*x235)|x236));

	if (t51 != 255U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x239 = 4121;
	volatile int32_t t52 = 11046056;

	t52 = (x237%((x238*x239)|x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x253 = UINT8_MAX;
	volatile uint8_t x254 = 0U;
	int64_t x255 = -1LL;
	uint16_t x256 = UINT16_MAX;
	volatile int64_t t53 = -50417004707LL;

	t53 = (x253%((x254*x255)|x256));

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x257 = 9;
	uint8_t x258 = UINT8_MAX;
	int8_t x260 = -1;
	uint32_t t54 = 216U;

	t54 = (x257%((x258*x259)|x260));

	if (t54 != 9U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = -18;
	uint64_t x271 = UINT64_MAX;
	volatile uint16_t x272 = UINT16_MAX;
	uint64_t t55 = 464610LLU;

	t55 = (x269%((x270*x271)|x272));

	if (t55 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x277 = 108U;
	static int16_t x278 = INT16_MIN;
	int64_t x280 = -12250627158410LL;
	int64_t t56 = 55464LL;

	t56 = (x277%((x278*x279)|x280));

	if (t56 != 108LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x281 = INT16_MAX;
	volatile uint8_t x282 = UINT8_MAX;
	uint8_t x283 = 0U;
	int16_t x284 = -1;
	int32_t t57 = -598272;

	t57 = (x281%((x282*x283)|x284));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x285 = UINT32_MAX;
	int32_t x287 = INT32_MIN;
	int16_t x288 = 103;

	t58 = (x285%((x286*x287)|x288));

	if (t58 != 4294967295LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x289 = 715124616514121LLU;
	int8_t x290 = 0;
	int8_t x291 = 3;
	volatile int32_t x292 = INT32_MIN;
	static uint64_t t59 = 152083245119110483LLU;

	t59 = (x289%((x290*x291)|x292));

	if (t59 != 715124616514121LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x296 = INT8_MIN;
	uint32_t t60 = 251U;

	t60 = (x293%((x294*x295)|x296));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x298 = -1;
	static int16_t x299 = -9753;
	uint8_t x300 = 7U;
	volatile int64_t t61 = 235878184893LL;

	t61 = (x297%((x298*x299)|x300));

	if (t61 != -5390LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x301 = 0U;
	uint16_t x303 = 1828U;
	static int8_t x304 = INT8_MAX;
	static volatile int32_t t62 = -28158839;

	t62 = (x301%((x302*x303)|x304));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x309 = 46U;
	static volatile int16_t x310 = INT16_MAX;
	static uint64_t x312 = 477LLU;
	static uint64_t t63 = 1047183241385209924LLU;

	t63 = (x309%((x310*x311)|x312));

	if (t63 != 46LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x313 = INT32_MIN;
	static volatile uint32_t x314 = 6U;
	static volatile int64_t x315 = -104419LL;
	static int16_t x316 = -1;
	volatile int64_t t64 = 69409769LL;

	t64 = (x313%((x314*x315)|x316));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x317 = 23LLU;
	int16_t x318 = 1923;
	int16_t x319 = INT16_MIN;
	uint32_t x320 = 6570935U;

	t65 = (x317%((x318*x319)|x320));

	if (t65 != 23LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x321 = -1;
	static volatile int8_t x322 = -7;
	int64_t x324 = -58531228244035715LL;
	int64_t t66 = 5494870LL;

	t66 = (x321%((x322*x323)|x324));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x326 = UINT8_MAX;
	int8_t x327 = -1;
	int8_t x328 = INT8_MIN;
	int32_t t67 = -14690;

	t67 = (x325%((x326*x327)|x328));

	if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	volatile uint32_t x331 = 506003333U;
	uint64_t x332 = 1433104365396LLU;
	uint64_t t68 = 678097971885LLU;

	t68 = (x329%((x330*x331)|x332));

	if (t68 != 335595648LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x333 = 47LLU;
	int8_t x334 = INT8_MAX;
	uint64_t x335 = 9LLU;
	int64_t x336 = -1LL;

	t69 = (x333%((x334*x335)|x336));

	if (t69 != 47LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = 0;
	static volatile int8_t x350 = INT8_MIN;
	uint64_t x352 = UINT64_MAX;
	static uint64_t t70 = 2519LLU;

	t70 = (x349%((x350*x351)|x352));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x353 = 2567965015LLU;
	volatile int16_t x354 = 12;
	volatile uint32_t x355 = 391U;
	static uint8_t x356 = 7U;
	volatile uint64_t t71 = 108339LLU;

	t71 = (x353%((x354*x355)|x356));

	if (t71 != 1900LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x357 = -1LL;
	int8_t x358 = INT8_MIN;
	uint8_t x359 = 2U;
	uint32_t x360 = 22U;
	static volatile int64_t t72 = -8796353676072LL;

	t72 = (x357%((x358*x359)|x360));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = -1;
	uint8_t x362 = 30U;
	static int16_t x363 = INT16_MIN;
	static int64_t x364 = 14938LL;

	t73 = (x361%((x362*x363)|x364));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x365 = INT32_MAX;
	uint16_t x366 = UINT16_MAX;
	int32_t x368 = -1;
	volatile int32_t t74 = 2;

	t74 = (x365%((x366*x367)|x368));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x369 = INT8_MIN;
	static int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MAX;
	int8_t x372 = -49;
	int32_t t75 = 253639482;

	t75 = (x369%((x370*x371)|x372));

	if (t75 != -30) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x373 = -1;
	int16_t x374 = INT16_MAX;
	static uint32_t x375 = UINT32_MAX;
	uint32_t x376 = UINT32_MAX;
	uint32_t t76 = 1792U;

	t76 = (x373%((x374*x375)|x376));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x378 = 3U;
	volatile uint64_t t77 = 429934973182936LLU;

	t77 = (x377%((x378*x379)|x380));

	if (t77 != 5LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x381 = INT32_MIN;
	int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t78 = 6745;

	t78 = (x381%((x382*x383)|x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MIN;
	uint32_t x387 = UINT32_MAX;
	uint32_t x388 = 106U;
	static volatile uint32_t t79 = 0U;

	t79 = (x385%((x386*x387)|x388));

	if (t79 != 32767U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x393 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	volatile uint64_t t80 = 92337313LLU;

	t80 = (x393%((x394*x395)|x396));

	if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x402 = 18;
	int16_t x403 = INT16_MIN;
	volatile uint32_t t81 = 1991135U;

	t81 = (x401%((x402*x403)|x404));

	if (t81 != 4294934528U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x405 = 332032U;
	static int32_t x406 = INT32_MIN;
	static int8_t x407 = 0;
	uint32_t x408 = UINT32_MAX;
	volatile uint32_t t82 = 88U;

	t82 = (x405%((x406*x407)|x408));

	if (t82 != 332032U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x409 = 153U;
	volatile int64_t x410 = -363300841LL;
	volatile uint32_t x411 = 7U;
	volatile int8_t x412 = 0;
	volatile int64_t t83 = 1008486475141204LL;

	t83 = (x409%((x410*x411)|x412));

	if (t83 != 153LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x413 = 7U;
	static int16_t x414 = INT16_MIN;
	int16_t x415 = -6;
	int32_t x416 = -1;
	volatile int32_t t84 = 250371;

	t84 = (x413%((x414*x415)|x416));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x422 = 88U;
	uint8_t x423 = 13U;
	int64_t x424 = INT64_MAX;

	t85 = (x421%((x422*x423)|x424));

	if (t85 != 568492653575LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x426 = INT8_MIN;
	int8_t x427 = 2;
	static volatile uint8_t x428 = UINT8_MAX;
	int32_t t86 = -14;

	t86 = (x425%((x426*x427)|x428));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x429 = 0;
	uint64_t x430 = 1100389469LLU;
	int32_t x431 = INT32_MIN;
	int64_t x432 = -13529472642765LL;

	t87 = (x429%((x430*x431)|x432));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x433 = UINT16_MAX;
	uint8_t x434 = UINT8_MAX;
	volatile uint8_t x435 = 18U;
	int64_t x436 = -1LL;
	int64_t t88 = -583072732247694LL;

	t88 = (x433%((x434*x435)|x436));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = INT16_MIN;
	uint64_t x439 = 678LLU;
	int32_t x440 = INT32_MAX;

	t89 = (x437%((x438*x439)|x440));

	if (t89 != 2147450883LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x441 = 5U;
	int64_t x442 = -1LL;
	volatile uint64_t x443 = 13443408043857092LLU;
	int64_t x444 = INT64_MIN;
	volatile uint64_t t90 = 5730711068346LLU;

	t90 = (x441%((x442*x443)|x444));

	if (t90 != 5LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x445 = 54U;
	uint16_t x446 = 7U;
	static int64_t x448 = -1LL;

	t91 = (x445%((x446*x447)|x448));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x449 = 1342317955846574LLU;
	volatile int16_t x450 = -203;
	volatile uint64_t t92 = 193122722675226748LLU;

	t92 = (x449%((x450*x451)|x452));

	if (t92 != 3138263LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x453 = INT16_MIN;
	int8_t x454 = 1;
	uint16_t x455 = 11702U;
	uint16_t x456 = 25418U;
	volatile int32_t t93 = 144483901;

	t93 = (x453%((x454*x455)|x456));

	if (t93 != -4098) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x457 = -113152845165009963LL;
	static int32_t x458 = INT32_MAX;
	int8_t x459 = -1;
	volatile int64_t t94 = -552678728601160323LL;

	t94 = (x457%((x458*x459)|x460));

	if (t94 != -551882544LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x461 = INT8_MIN;
	volatile uint32_t x462 = UINT32_MAX;
	uint16_t x464 = UINT16_MAX;
	static volatile uint32_t t95 = 169115758U;

	t95 = (x461%((x462*x463)|x464));

	if (t95 != 65408U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x466 = 840U;
	int16_t x467 = -2288;
	int8_t x468 = -1;
	uint32_t t96 = 1493510995U;

	t96 = (x465%((x466*x467)|x468));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x473 = 257533920U;
	int8_t x474 = INT8_MAX;
	uint32_t x476 = UINT32_MAX;
	uint32_t t97 = 3U;

	t97 = (x473%((x474*x475)|x476));

	if (t97 != 257533920U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x479 = -4;
	int32_t x480 = INT32_MIN;
	int32_t t98 = 321563;

	t98 = (x477%((x478*x479)|x480));

	if (t98 != 2371) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x494 = -1;
	uint64_t x496 = 8059LLU;
	uint64_t t99 = 8180LLU;

	t99 = (x493%((x494*x495)|x496));

	if (t99 != 5636LLU) { NG(); } else { ; }
	
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

