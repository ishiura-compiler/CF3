#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 5476;
uint16_t x9 = 628U;
int32_t t2 = 297237729;
static int8_t x15 = 7;
volatile int32_t t3 = 86690;
int16_t x18 = INT16_MIN;
uint16_t x22 = 3U;
volatile int16_t x40 = -230;
volatile int16_t x43 = INT16_MAX;
int8_t x51 = 31;
volatile int32_t t10 = 14503538;
int64_t x54 = -1LL;
uint32_t x63 = 75U;
uint32_t x64 = 254608648U;
uint64_t x68 = 171384974LLU;
int8_t x72 = INT8_MIN;
int8_t x75 = 0;
int8_t x97 = INT8_MIN;
int8_t x99 = INT8_MAX;
int32_t t19 = -1810474;
static int8_t x103 = INT8_MAX;
volatile int32_t x108 = -5;
int8_t x109 = -12;
static int64_t x114 = 3767LL;
static volatile int32_t x121 = -683;
static int16_t x123 = -185;
static volatile uint8_t x126 = 8U;
int32_t x141 = INT32_MIN;
volatile uint16_t x143 = 6U;
volatile int8_t x148 = -35;
volatile int8_t x150 = -7;
int32_t t30 = -867071;
int16_t x156 = 3;
static volatile uint8_t x165 = 0U;
int16_t x166 = 1114;
volatile uint8_t x176 = 18U;
uint32_t x177 = 276157U;
static int32_t t36 = 29268;
volatile int32_t t37 = -30427570;
static volatile int32_t t39 = 1465068;
volatile int32_t t41 = -32;
int64_t x205 = INT64_MIN;
int16_t x227 = INT16_MIN;
static volatile uint8_t x232 = 1U;
uint8_t x238 = UINT8_MAX;
int16_t x239 = INT16_MIN;
int8_t x241 = -1;
int16_t x244 = 763;
int8_t x250 = INT8_MIN;
static volatile int32_t t51 = -42723391;
int64_t x254 = INT64_MIN;
volatile uint64_t x255 = 446789LLU;
int16_t x258 = INT16_MAX;
volatile int8_t x265 = -2;
volatile uint32_t x269 = 29332U;
volatile int32_t x281 = -4;
static volatile int16_t x288 = -1;
volatile int32_t t61 = -33547;
volatile int8_t x297 = INT8_MIN;
int32_t x302 = INT32_MAX;
static uint64_t x307 = 22108328474LLU;
int64_t x309 = 7344LL;
uint32_t x321 = UINT32_MAX;
uint64_t x322 = 4209988501220626LLU;
volatile int32_t t70 = 1;
static volatile int8_t x331 = INT8_MIN;
int32_t x335 = INT32_MIN;
volatile uint8_t x337 = 1U;
int32_t x346 = -171820598;
int8_t x347 = -1;
static volatile int64_t x352 = -1LL;
int8_t x358 = -1;
uint8_t x362 = 3U;
static uint32_t x367 = 320928540U;
volatile uint32_t x375 = 453U;
uint8_t x380 = 68U;
static volatile int32_t t83 = 52186;
volatile int8_t x383 = INT8_MIN;
static uint8_t x384 = 53U;
int8_t x387 = -28;
volatile int32_t t87 = 444551;
int8_t x400 = INT8_MIN;
static uint8_t x404 = 114U;
static int32_t x405 = INT32_MIN;
volatile int64_t x407 = INT64_MAX;
volatile int16_t x409 = INT16_MAX;
int8_t x414 = -13;
volatile int16_t x425 = -1;
uint8_t x429 = UINT8_MAX;
volatile uint8_t x430 = 38U;
int16_t x433 = INT16_MIN;
uint8_t x439 = UINT8_MAX;
int32_t x441 = -2829;
volatile int8_t x444 = 1;


void f0(void) {
	int32_t x1 = 60139415;
	int8_t x2 = -1;
	volatile uint64_t x4 = 10LLU;
	int32_t t0 = 107;

	t0 = ((x1<x2)<=(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 0U;
	int64_t x6 = 7675LL;
	int8_t x7 = INT8_MAX;
	uint16_t x8 = 2270U;
	volatile int32_t t1 = -150258;

	t1 = ((x5<x6)<=(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -5256;
	int64_t x11 = -1LL;
	int8_t x12 = -1;

	t2 = ((x9<x10)<=(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	static int16_t x14 = -921;
	uint32_t x16 = 184469771U;

	t3 = ((x13<x14)<=(x15+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 160396;
	volatile uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 81027060U;
	volatile int32_t t4 = 14;

	t4 = ((x17<x18)<=(x19+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 40U;
	volatile int8_t x23 = INT8_MIN;
	uint32_t x24 = 1789U;
	int32_t t5 = -31833613;

	t5 = ((x21<x22)<=(x23+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 84207707654483806LL;
	volatile uint32_t x30 = UINT32_MAX;
	static int64_t x31 = -1LL;
	static int8_t x32 = INT8_MAX;
	int32_t t6 = -8;

	t6 = ((x29<x30)<=(x31+x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 0;
	int32_t x38 = -2012;
	uint64_t x39 = UINT64_MAX;
	int32_t t7 = -862;

	t7 = ((x37<x38)<=(x39+x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = 0;
	static int32_t x42 = INT32_MIN;
	int32_t x44 = INT32_MIN;
	int32_t t8 = -1;

	t8 = ((x41<x42)<=(x43+x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = UINT8_MAX;
	volatile int64_t x46 = INT64_MIN;
	volatile int32_t x47 = -1;
	uint16_t x48 = UINT16_MAX;
	int32_t t9 = 28422;

	t9 = ((x45<x46)<=(x47+x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	static int32_t x50 = -269487;
	int8_t x52 = INT8_MAX;

	t10 = ((x49<x50)<=(x51+x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MIN;
	int8_t x55 = 51;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t11 = 0;

	t11 = ((x53<x54)<=(x55+x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 581LLU;
	uint16_t x62 = UINT16_MAX;
	int32_t t12 = -1;

	t12 = ((x61<x62)<=(x63+x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x65 = -1;
	uint8_t x66 = 70U;
	int8_t x67 = INT8_MIN;
	int32_t t13 = -22603;

	t13 = ((x65<x66)<=(x67+x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = -50;
	static uint64_t x70 = 2676687672112638LLU;
	volatile int64_t x71 = INT64_MAX;
	int32_t t14 = 96889;

	t14 = ((x69<x70)<=(x71+x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 0U;
	int32_t x74 = INT32_MIN;
	int8_t x76 = INT8_MAX;
	volatile int32_t t15 = -214348;

	t15 = ((x73<x74)<=(x75+x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x77 = UINT64_MAX;
	int32_t x78 = INT32_MIN;
	static uint32_t x79 = UINT32_MAX;
	static uint8_t x80 = UINT8_MAX;
	int32_t t16 = 11497;

	t16 = ((x77<x78)<=(x79+x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = -1;
	static int16_t x86 = -1;
	uint32_t x87 = 27376U;
	static int8_t x88 = INT8_MIN;
	int32_t t17 = -98384023;

	t17 = ((x85<x86)<=(x87+x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -116738023;
	int64_t x94 = -1LL;
	static int16_t x95 = INT16_MAX;
	static int8_t x96 = -1;
	static int32_t t18 = -377090629;

	t18 = ((x93<x94)<=(x95+x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x98 = 117U;
	uint16_t x100 = UINT16_MAX;

	t19 = ((x97<x98)<=(x99+x100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	static int64_t x102 = INT64_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t20 = -973252735;

	t20 = ((x101<x102)<=(x103+x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x105 = 1580U;
	static int8_t x106 = 1;
	volatile int8_t x107 = INT8_MIN;
	int32_t t21 = 13917;

	t21 = ((x105<x106)<=(x107+x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x110 = 235;
	volatile uint32_t x111 = 2332135U;
	static uint16_t x112 = 115U;
	int32_t t22 = -393518565;

	t22 = ((x109<x110)<=(x111+x112));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = 10583U;
	int32_t x115 = -11;
	int8_t x116 = INT8_MIN;
	int32_t t23 = -20;

	t23 = ((x113<x114)<=(x115+x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x122 = INT64_MIN;
	int32_t x124 = -1;
	int32_t t24 = -60;

	t24 = ((x121<x122)<=(x123+x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x127 = 16978U;
	static uint16_t x128 = 1U;
	volatile int32_t t25 = 27;

	t25 = ((x125<x126)<=(x127+x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = 447067200623368513LLU;
	static int8_t x130 = INT8_MAX;
	static int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MIN;
	static int32_t t26 = 496559;

	t26 = ((x129<x130)<=(x131+x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = UINT8_MAX;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = 2U;
	static uint16_t x136 = 7043U;
	int32_t t27 = -7856543;

	t27 = ((x133<x134)<=(x135+x136));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x142 = UINT32_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t28 = 7128;

	t28 = ((x141<x142)<=(x143+x144));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MIN;
	static int32_t x146 = 43846601;
	volatile int16_t x147 = 13210;
	static int32_t t29 = 48083;

	t29 = ((x145<x146)<=(x147+x148));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x149 = 111412658LLU;
	volatile int8_t x151 = -1;
	int8_t x152 = INT8_MIN;

	t30 = ((x149<x150)<=(x151+x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x153 = 0U;
	uint32_t x154 = 371U;
	static int16_t x155 = -1;
	int32_t t31 = 2180504;

	t31 = ((x153<x154)<=(x155+x156));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MIN;
	static int32_t x159 = 891;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t32 = -313561506;

	t32 = ((x157<x158)<=(x159+x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x167 = 51062U;
	volatile uint16_t x168 = 18305U;
	int32_t t33 = -47701347;

	t33 = ((x165<x166)<=(x167+x168));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x169 = 56434182509LLU;
	uint8_t x170 = 1U;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t34 = -1962563;

	t34 = ((x169<x170)<=(x171+x172));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = UINT16_MAX;
	int32_t x174 = -1;
	static volatile int32_t x175 = INT32_MIN;
	int32_t t35 = -36;

	t35 = ((x173<x174)<=(x175+x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x178 = INT16_MIN;
	volatile uint64_t x179 = UINT64_MAX;
	uint32_t x180 = UINT32_MAX;

	t36 = ((x177<x178)<=(x179+x180));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x181 = -23;
	int16_t x182 = -3;
	volatile int8_t x183 = 8;
	volatile int16_t x184 = 1;

	t37 = ((x181<x182)<=(x183+x184));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x185 = 24247U;
	volatile int32_t x186 = INT32_MIN;
	int32_t x187 = -87784112;
	int16_t x188 = INT16_MIN;
	volatile int32_t t38 = 2;

	t38 = ((x185<x186)<=(x187+x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x189 = INT64_MAX;
	int16_t x190 = -123;
	static uint8_t x191 = 3U;
	uint32_t x192 = 106942658U;

	t39 = ((x189<x190)<=(x191+x192));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x193 = 31950U;
	static int16_t x194 = INT16_MIN;
	int64_t x195 = 1240LL;
	volatile uint64_t x196 = 113302332921397LLU;
	volatile int32_t t40 = 0;

	t40 = ((x193<x194)<=(x195+x196));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x197 = 1420082347U;
	volatile int64_t x198 = -1LL;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MIN;

	t41 = ((x197<x198)<=(x199+x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 32LLU;
	int32_t x202 = 330;
	static int16_t x203 = INT16_MAX;
	int8_t x204 = INT8_MIN;
	volatile int32_t t42 = 15690804;

	t42 = ((x201<x202)<=(x203+x204));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x206 = -6;
	static int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;
	volatile int32_t t43 = -470656;

	t43 = ((x205<x206)<=(x207+x208));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = 863;
	volatile uint8_t x214 = 0U;
	int16_t x215 = -10;
	static volatile int8_t x216 = -1;
	volatile int32_t t44 = -2;

	t44 = ((x213<x214)<=(x215+x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x217 = INT32_MIN;
	static int8_t x218 = -3;
	static int32_t x219 = 133274169;
	static uint32_t x220 = UINT32_MAX;
	static volatile int32_t t45 = 0;

	t45 = ((x217<x218)<=(x219+x220));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MIN;
	static volatile int64_t x222 = INT64_MIN;
	volatile int16_t x223 = 0;
	static volatile int32_t x224 = -1;
	int32_t t46 = -5156;

	t46 = ((x221<x222)<=(x223+x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x225 = 4134U;
	volatile int8_t x226 = 20;
	static int16_t x228 = 12559;
	volatile int32_t t47 = -664705;

	t47 = ((x225<x226)<=(x227+x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MIN;
	uint16_t x230 = UINT16_MAX;
	volatile uint64_t x231 = 25526829531761013LLU;
	int32_t t48 = 658247517;

	t48 = ((x229<x230)<=(x231+x232));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MIN;
	static int64_t x240 = 6670244302838LL;
	int32_t t49 = -87390;

	t49 = ((x237<x238)<=(x239+x240));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x242 = UINT16_MAX;
	uint32_t x243 = UINT32_MAX;
	volatile int32_t t50 = 11;

	t50 = ((x241<x242)<=(x243+x244));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x249 = 13;
	static int16_t x251 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;

	t51 = ((x249<x250)<=(x251+x252));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MIN;
	int64_t x256 = 13781337LL;
	int32_t t52 = 0;

	t52 = ((x253<x254)<=(x255+x256));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = INT64_MIN;
	static uint32_t x259 = 33U;
	volatile int16_t x260 = INT16_MIN;
	static volatile int32_t t53 = -3;

	t53 = ((x257<x258)<=(x259+x260));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = INT8_MAX;
	int8_t x262 = 12;
	int8_t x263 = -1;
	int64_t x264 = -6872942851172995LL;
	int32_t t54 = 45688995;

	t54 = ((x261<x262)<=(x263+x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MAX;
	volatile int8_t x268 = 0;
	static int32_t t55 = 122561158;

	t55 = ((x265<x266)<=(x267+x268));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x270 = INT64_MIN;
	int32_t x271 = 1;
	int64_t x272 = -122180861501971390LL;
	static int32_t t56 = -4549;

	t56 = ((x269<x270)<=(x271+x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x273 = 14;
	volatile int64_t x274 = -1LL;
	static int64_t x275 = -255057346078400796LL;
	volatile uint16_t x276 = 21U;
	volatile int32_t t57 = 60145;

	t57 = ((x273<x274)<=(x275+x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = -69583293997868652LL;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	volatile int32_t x280 = INT32_MAX;
	int32_t t58 = 72;

	t58 = ((x277<x278)<=(x279+x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x282 = 1U;
	int16_t x283 = -150;
	int8_t x284 = INT8_MAX;
	volatile int32_t t59 = -6507;

	t59 = ((x281<x282)<=(x283+x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x285 = -1;
	int32_t x286 = INT32_MAX;
	uint16_t x287 = 1U;
	volatile int32_t t60 = -1382;

	t60 = ((x285<x286)<=(x287+x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x289 = INT16_MIN;
	uint64_t x290 = 619395LLU;
	int8_t x291 = -1;
	int64_t x292 = 7264423748118123LL;

	t61 = ((x289<x290)<=(x291+x292));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = -1;
	int16_t x294 = INT16_MAX;
	volatile uint32_t x295 = 120448U;
	static volatile int16_t x296 = INT16_MAX;
	int32_t t62 = 5783;

	t62 = ((x293<x294)<=(x295+x296));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x298 = -47;
	volatile uint16_t x299 = UINT16_MAX;
	int8_t x300 = 2;
	volatile int32_t t63 = 9;

	t63 = ((x297<x298)<=(x299+x300));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x301 = 122U;
	static int16_t x303 = INT16_MIN;
	int8_t x304 = 57;
	volatile int32_t t64 = -22986;

	t64 = ((x301<x302)<=(x303+x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = INT64_MIN;
	int16_t x306 = INT16_MAX;
	uint64_t x308 = 4390224658045LLU;
	volatile int32_t t65 = -3;

	t65 = ((x305<x306)<=(x307+x308));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x310 = 14;
	int32_t x311 = INT32_MIN;
	volatile uint32_t x312 = 816620U;
	int32_t t66 = 110409;

	t66 = ((x309<x310)<=(x311+x312));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = INT16_MIN;
	int8_t x314 = 1;
	int16_t x315 = 0;
	static int64_t x316 = 3306995661LL;
	int32_t t67 = 3878719;

	t67 = ((x313<x314)<=(x315+x316));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = -8493489349375LL;
	int32_t x318 = INT32_MAX;
	static int32_t x319 = -1;
	static int16_t x320 = INT16_MIN;
	volatile int32_t t68 = -695515;

	t68 = ((x317<x318)<=(x319+x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = 34;
	volatile int32_t t69 = 16;

	t69 = ((x321<x322)<=(x323+x324));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x325 = 27274854951405LL;
	int64_t x326 = -1LL;
	volatile uint16_t x327 = 26614U;
	int8_t x328 = INT8_MAX;

	t70 = ((x325<x326)<=(x327+x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -1;
	uint64_t x330 = 1654689874470992LLU;
	volatile uint8_t x332 = 3U;
	int32_t t71 = 1;

	t71 = ((x329<x330)<=(x331+x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = 118730765525232338LL;
	int16_t x334 = INT16_MIN;
	volatile uint64_t x336 = 258821476691113LLU;
	static int32_t t72 = 1;

	t72 = ((x333<x334)<=(x335+x336));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x338 = 7659U;
	static int64_t x339 = 13312996872420LL;
	int16_t x340 = -22;
	volatile int32_t t73 = -351689;

	t73 = ((x337<x338)<=(x339+x340));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = -1LL;
	static int8_t x342 = 0;
	int8_t x343 = INT8_MIN;
	static int8_t x344 = -1;
	volatile int32_t t74 = -1459856;

	t74 = ((x341<x342)<=(x343+x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = -1;
	int16_t x348 = -3;
	volatile int32_t t75 = -1256;

	t75 = ((x345<x346)<=(x347+x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x349 = -1;
	static int32_t x350 = -1057185;
	int64_t x351 = -1LL;
	int32_t t76 = 87;

	t76 = ((x349<x350)<=(x351+x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x353 = 845;
	int64_t x354 = INT64_MAX;
	uint64_t x355 = 19243636LLU;
	static int16_t x356 = INT16_MAX;
	int32_t t77 = 31398;

	t77 = ((x353<x354)<=(x355+x356));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x357 = 424917U;
	static int8_t x359 = INT8_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t78 = -48;

	t78 = ((x357<x358)<=(x359+x360));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x361 = 2U;
	uint64_t x363 = 0LLU;
	int32_t x364 = INT32_MAX;
	volatile int32_t t79 = 94337;

	t79 = ((x361<x362)<=(x363+x364));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x365 = 93060759U;
	int32_t x366 = 0;
	int64_t x368 = INT64_MIN;
	int32_t t80 = -142733956;

	t80 = ((x365<x366)<=(x367+x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = -1;
	volatile int32_t x370 = 270;
	int16_t x371 = INT16_MAX;
	int32_t x372 = -1;
	int32_t t81 = 111;

	t81 = ((x369<x370)<=(x371+x372));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x373 = INT16_MAX;
	static int64_t x374 = -32027573447094LL;
	uint64_t x376 = 91720449801LLU;
	static int32_t t82 = 0;

	t82 = ((x373<x374)<=(x375+x376));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x377 = INT64_MAX;
	static int32_t x378 = 17946;
	static int32_t x379 = INT32_MIN;

	t83 = ((x377<x378)<=(x379+x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = INT64_MIN;
	volatile int8_t x382 = INT8_MIN;
	int32_t t84 = -223130;

	t84 = ((x381<x382)<=(x383+x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = -151789301029531LL;
	uint64_t x386 = 30373886742734LLU;
	int32_t x388 = -1;
	static int32_t t85 = -338924;

	t85 = ((x385<x386)<=(x387+x388));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = INT16_MIN;
	volatile uint32_t x390 = 1U;
	volatile int8_t x391 = INT8_MAX;
	static volatile int32_t x392 = -11270;
	int32_t t86 = -44;

	t86 = ((x389<x390)<=(x391+x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x393 = 39044LLU;
	int32_t x394 = -27502;
	int64_t x395 = INT64_MIN;
	static volatile int32_t x396 = 170325279;

	t87 = ((x393<x394)<=(x395+x396));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x397 = -647487648;
	static int16_t x398 = 1168;
	volatile int8_t x399 = INT8_MIN;
	static volatile int32_t t88 = 3;

	t88 = ((x397<x398)<=(x399+x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = 440498510139660LL;
	volatile uint64_t x402 = 539LLU;
	int64_t x403 = 247289LL;
	volatile int32_t t89 = -194901720;

	t89 = ((x401<x402)<=(x403+x404));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x406 = UINT64_MAX;
	int64_t x408 = -196572LL;
	static int32_t t90 = -15592082;

	t90 = ((x405<x406)<=(x407+x408));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x410 = 23U;
	volatile int8_t x411 = -1;
	int64_t x412 = -1LL;
	volatile int32_t t91 = 3301202;

	t91 = ((x409<x410)<=(x411+x412));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = -1LL;
	uint32_t x415 = UINT32_MAX;
	int64_t x416 = 6011602954256LL;
	int32_t t92 = -1457;

	t92 = ((x413<x414)<=(x415+x416));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = -710125649;
	int16_t x418 = -166;
	volatile uint8_t x419 = UINT8_MAX;
	volatile int8_t x420 = -1;
	volatile int32_t t93 = -102;

	t93 = ((x417<x418)<=(x419+x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x421 = UINT32_MAX;
	int64_t x422 = -1LL;
	int8_t x423 = INT8_MIN;
	uint8_t x424 = 87U;
	int32_t t94 = -238;

	t94 = ((x421<x422)<=(x423+x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x426 = UINT16_MAX;
	volatile uint32_t x427 = 13042U;
	volatile int8_t x428 = -4;
	volatile int32_t t95 = 0;

	t95 = ((x425<x426)<=(x427+x428));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x431 = INT16_MIN;
	uint64_t x432 = 2169LLU;
	int32_t t96 = -49075759;

	t96 = ((x429<x430)<=(x431+x432));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x434 = 41420614LLU;
	static uint32_t x435 = 3892927U;
	uint16_t x436 = UINT16_MAX;
	static int32_t t97 = 3938;

	t97 = ((x433<x434)<=(x435+x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = -1;
	int16_t x438 = -1;
	int32_t x440 = INT32_MIN;
	int32_t t98 = 0;

	t98 = ((x437<x438)<=(x439+x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x442 = UINT16_MAX;
	int8_t x443 = INT8_MIN;
	volatile int32_t t99 = 16350;

	t99 = ((x441<x442)<=(x443+x444));

	if (t99 != 0) { NG(); } else { ; }
	
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

