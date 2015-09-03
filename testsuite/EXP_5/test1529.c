#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 829;
int8_t x5 = INT8_MIN;
int8_t x9 = INT8_MAX;
int16_t x10 = INT16_MIN;
uint32_t x18 = 141034678U;
uint16_t x21 = 0U;
static int8_t x22 = INT8_MAX;
uint8_t x29 = 0U;
static int8_t x34 = INT8_MIN;
int32_t t8 = 653323903;
uint8_t x46 = 14U;
static uint16_t x47 = 4384U;
uint64_t x54 = UINT64_MAX;
int8_t x57 = -5;
static int32_t t15 = -1;
int32_t t16 = -293;
volatile uint16_t x75 = 31423U;
int64_t x76 = -1LL;
static uint32_t x85 = 2U;
int8_t x96 = 0;
static int8_t x102 = -1;
uint64_t x107 = 189203781LLU;
volatile uint8_t x118 = 35U;
int32_t x121 = INT32_MIN;
uint16_t x124 = 82U;
static int16_t x126 = INT16_MIN;
volatile int16_t x130 = -1;
static int16_t x131 = -3;
volatile uint32_t x133 = 84713U;
static uint8_t x134 = 3U;
int32_t x135 = -21969;
int32_t t33 = -197728917;
volatile int16_t x141 = INT16_MAX;
int8_t x145 = INT8_MIN;
int64_t x150 = INT64_MAX;
volatile uint8_t x153 = UINT8_MAX;
static uint8_t x154 = 9U;
int64_t x155 = 20LL;
int64_t x159 = -1LL;
int64_t x160 = -1LL;
int8_t x163 = 0;
volatile int32_t x164 = INT32_MAX;
uint64_t x166 = UINT64_MAX;
volatile uint8_t x175 = UINT8_MAX;
int64_t x176 = INT64_MIN;
int32_t x177 = INT32_MIN;
int16_t x180 = 5877;
int32_t t43 = -515785;
int32_t x184 = 173;
int16_t x186 = -1;
int32_t x193 = INT32_MIN;
static int32_t x201 = INT32_MIN;
volatile int64_t x202 = -1LL;
int64_t x205 = -1LL;
int32_t t50 = -5;
uint64_t x210 = 11LLU;
uint64_t x213 = 3984235474LLU;
uint32_t x214 = 637U;
static int32_t x216 = -1;
volatile int32_t t52 = 1;
uint8_t x217 = UINT8_MAX;
uint16_t x219 = 0U;
int32_t t53 = -29546;
volatile int32_t x222 = -189;
int8_t x223 = -1;
int64_t x224 = 59523205405868LL;
int8_t x225 = INT8_MIN;
static int8_t x228 = -1;
volatile int32_t t57 = -259167;
static int8_t x239 = INT8_MIN;
uint8_t x243 = 88U;
volatile int32_t t60 = 52998;
static volatile int16_t x254 = INT16_MIN;
int16_t x256 = INT16_MIN;
int16_t x259 = INT16_MIN;
int32_t t62 = -3173;
uint64_t x261 = 3LLU;
static int8_t x262 = -1;
int8_t x264 = INT8_MIN;
static volatile uint8_t x271 = UINT8_MAX;
int16_t x272 = 1;
int32_t x281 = INT32_MAX;
int32_t x284 = -1;
int32_t x288 = -958317;
uint8_t x289 = 32U;
int32_t x292 = INT32_MIN;
static uint64_t x294 = UINT64_MAX;
int32_t t71 = -1745283;
uint8_t x303 = UINT8_MAX;
uint64_t x304 = UINT64_MAX;
static volatile int8_t x305 = INT8_MAX;
static int64_t x312 = -97007LL;
int8_t x315 = INT8_MIN;
volatile int8_t x323 = 1;
int32_t t77 = -62080739;
int32_t x328 = -1;
int64_t x333 = -1LL;
int64_t x345 = -3977223900130287LL;
volatile int32_t x346 = 4336;
volatile int32_t t83 = 0;
uint8_t x351 = UINT8_MAX;
static int16_t x353 = INT16_MIN;
static int8_t x357 = INT8_MIN;
uint16_t x359 = UINT16_MAX;
int8_t x360 = 0;
static int32_t t86 = -202622264;
uint64_t x361 = UINT64_MAX;
uint16_t x363 = 26588U;
static uint16_t x374 = 16942U;
int16_t x383 = -683;
int32_t t94 = -514758568;
uint8_t x393 = 12U;
int64_t x394 = INT64_MIN;
static int16_t x405 = INT16_MIN;
int32_t x407 = INT32_MAX;


void f0(void) {
	int16_t x1 = -236;
	int8_t x2 = 3;
	volatile int32_t x3 = -1;
	int32_t t0 = 1;

	t0 = (x1==((x2<=x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x6 = UINT16_MAX;
	int16_t x7 = INT16_MIN;
	static volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 1;

	t1 = (x5==((x6<=x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x11 = INT32_MIN;
	int16_t x12 = 8957;
	int32_t t2 = 5012041;

	t2 = (x9==((x10<=x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -197168327193702484LL;
	volatile int16_t x14 = 1233;
	static int64_t x15 = INT64_MIN;
	int16_t x16 = 404;
	static volatile int32_t t3 = 263;

	t3 = (x13==((x14<=x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -3411113319104807LL;
	uint16_t x19 = 401U;
	volatile int64_t x20 = 972298716735LL;
	volatile int32_t t4 = 143;

	t4 = (x17==((x18<=x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x23 = UINT8_MAX;
	uint8_t x24 = 65U;
	volatile int32_t t5 = -1005130246;

	t5 = (x21==((x22<=x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 1709289U;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = 5179LLU;
	uint16_t x28 = 3605U;
	static volatile int32_t t6 = -920265596;

	t6 = (x25==((x26<=x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 14U;
	static uint16_t x31 = UINT16_MAX;
	volatile int8_t x32 = -1;
	volatile int32_t t7 = -58;

	t7 = (x29==((x30<=x31)+x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 0;
	int32_t x35 = 96824750;
	static uint64_t x36 = UINT64_MAX;

	t8 = (x33==((x34<=x35)+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int64_t x38 = -1LL;
	static uint64_t x39 = UINT64_MAX;
	static int64_t x40 = INT64_MIN;
	static int32_t t9 = -6352;

	t9 = (x37==((x38<=x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MAX;
	int16_t x43 = -2228;
	uint8_t x44 = 6U;
	volatile int32_t t10 = -130000;

	t10 = (x41==((x42<=x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint32_t x48 = 198343894U;
	volatile int32_t t11 = 1;

	t11 = (x45==((x46<=x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	static uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = 5342076;

	t12 = (x49==((x50<=x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	static int16_t x55 = INT16_MAX;
	int64_t x56 = -1LL;
	int32_t t13 = -12;

	t13 = (x53==((x54<=x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x58 = -1;
	uint64_t x59 = UINT64_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -221;

	t14 = (x57==((x58<=x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int16_t x62 = -1;
	int16_t x63 = INT16_MIN;
	int8_t x64 = INT8_MIN;

	t15 = (x61==((x62<=x63)+x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 2U;
	static uint64_t x66 = 15779258495323084LLU;
	static uint16_t x67 = 11U;
	volatile int64_t x68 = INT64_MIN;

	t16 = (x65==((x66<=x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static volatile uint32_t x70 = 60U;
	uint64_t x71 = UINT64_MAX;
	static volatile uint64_t x72 = 209264592355057741LLU;
	int32_t t17 = 0;

	t17 = (x69==((x70<=x71)+x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MIN;
	static int32_t t18 = -15692;

	t18 = (x73==((x74<=x75)+x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 47;
	int64_t x82 = INT64_MIN;
	static int32_t x83 = -928869;
	static uint16_t x84 = UINT16_MAX;
	volatile int32_t t19 = -634;

	t19 = (x81==((x82<=x83)+x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = -45701917;
	uint8_t x88 = 42U;
	int32_t t20 = -351;

	t20 = (x85==((x86<=x87)+x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = 1441;
	int64_t x90 = 24355692014LL;
	volatile uint8_t x91 = 6U;
	static int32_t x92 = -5;
	volatile int32_t t21 = -66632308;

	t21 = (x89==((x90<=x91)+x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = -1;
	int32_t x94 = INT32_MIN;
	static volatile uint32_t x95 = UINT32_MAX;
	int32_t t22 = 21;

	t22 = (x93==((x94<=x95)+x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x97 = 5U;
	int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MAX;
	volatile int8_t x100 = -1;
	volatile int32_t t23 = 1728;

	t23 = (x97==((x98<=x99)+x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	int64_t x103 = INT64_MAX;
	static uint32_t x104 = UINT32_MAX;
	int32_t t24 = 13;

	t24 = (x101==((x102<=x103)+x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	volatile uint32_t x106 = 248U;
	volatile int8_t x108 = INT8_MIN;
	volatile int32_t t25 = 1771207;

	t25 = (x105==((x106<=x107)+x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = 68;
	uint16_t x110 = UINT16_MAX;
	uint32_t x111 = 553470709U;
	int64_t x112 = INT64_MIN;
	volatile int32_t t26 = -1058;

	t26 = (x109==((x110<=x111)+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	int64_t x114 = -1LL;
	volatile int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;
	volatile int32_t t27 = 0;

	t27 = (x113==((x114<=x115)+x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -307;
	int32_t x119 = INT32_MIN;
	int32_t x120 = -6;
	volatile int32_t t28 = -116;

	t28 = (x117==((x118<=x119)+x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x122 = UINT8_MAX;
	int8_t x123 = INT8_MIN;
	volatile int32_t t29 = 0;

	t29 = (x121==((x122<=x123)+x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	static volatile uint64_t x127 = 43LLU;
	uint64_t x128 = 240788863022LLU;
	int32_t t30 = -25958;

	t30 = (x125==((x126<=x127)+x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -3963535977824837253LL;
	volatile int8_t x132 = -1;
	volatile int32_t t31 = -497374;

	t31 = (x129==((x130<=x131)+x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x136 = UINT16_MAX;
	int32_t t32 = 1382;

	t32 = (x133==((x134<=x135)+x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = INT8_MIN;
	static int64_t x138 = -1LL;
	static int8_t x139 = INT8_MIN;
	volatile int8_t x140 = INT8_MAX;

	t33 = (x137==((x138<=x139)+x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x142 = 10U;
	int16_t x143 = -1;
	int32_t x144 = -1;
	int32_t t34 = 1;

	t34 = (x141==((x142<=x143)+x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x146 = 1U;
	uint32_t x147 = 5U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t35 = 192320050;

	t35 = (x145==((x146<=x147)+x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int32_t x151 = 1;
	int16_t x152 = INT16_MIN;
	static int32_t t36 = -885;

	t36 = (x149==((x150<=x151)+x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x156 = 1140636;
	volatile int32_t t37 = 408094674;

	t37 = (x153==((x154<=x155)+x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 16U;
	static volatile int16_t x158 = INT16_MAX;
	volatile int32_t t38 = 7;

	t38 = (x157==((x158<=x159)+x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = 19;
	int8_t x162 = INT8_MAX;
	volatile int32_t t39 = 1;

	t39 = (x161==((x162<=x163)+x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 344009336830LLU;
	int8_t x167 = INT8_MAX;
	volatile uint8_t x168 = 11U;
	volatile int32_t t40 = 3627401;

	t40 = (x165==((x166<=x167)+x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x169 = INT64_MIN;
	uint64_t x170 = UINT64_MAX;
	uint64_t x171 = 715LLU;
	static int8_t x172 = INT8_MAX;
	int32_t t41 = -118261525;

	t41 = (x169==((x170<=x171)+x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 3U;
	int8_t x174 = 3;
	volatile int32_t t42 = 1419955;

	t42 = (x173==((x174<=x175)+x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x178 = UINT8_MAX;
	int8_t x179 = 2;

	t43 = (x177==((x178<=x179)+x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = -1;
	static volatile uint64_t x182 = UINT64_MAX;
	volatile int64_t x183 = 5LL;
	volatile int32_t t44 = 32;

	t44 = (x181==((x182<=x183)+x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x185 = -1;
	static volatile int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t45 = 83733;

	t45 = (x185==((x186<=x187)+x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x189 = 355587560;
	uint8_t x190 = 8U;
	uint32_t x191 = 12490U;
	uint32_t x192 = 55285U;
	volatile int32_t t46 = 13;

	t46 = (x189==((x190<=x191)+x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x194 = INT8_MAX;
	uint32_t x195 = 88U;
	int64_t x196 = -3LL;
	int32_t t47 = -161;

	t47 = (x193==((x194<=x195)+x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MAX;
	uint64_t x199 = 970929743LLU;
	int64_t x200 = -1LL;
	static volatile int32_t t48 = -415507231;

	t48 = (x197==((x198<=x199)+x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x203 = 6163U;
	uint64_t x204 = 25088539078045216LLU;
	int32_t t49 = 244;

	t49 = (x201==((x202<=x203)+x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x206 = 29035161;
	static uint32_t x207 = 1398685U;
	volatile int64_t x208 = -1LL;

	t50 = (x205==((x206<=x207)+x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = 1;
	int64_t x211 = INT64_MIN;
	uint16_t x212 = UINT16_MAX;
	int32_t t51 = -7893;

	t51 = (x209==((x210<=x211)+x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x215 = 112U;

	t52 = (x213==((x214<=x215)+x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x218 = INT8_MAX;
	int8_t x220 = -1;

	t53 = (x217==((x218<=x219)+x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -1;
	int32_t t54 = 71;

	t54 = (x221==((x222<=x223)+x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x226 = 8U;
	static int8_t x227 = INT8_MIN;
	int32_t t55 = -11790;

	t55 = (x225==((x226<=x227)+x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = 13;
	volatile int32_t x230 = 1618321;
	static int64_t x231 = -1LL;
	int64_t x232 = INT64_MIN;
	volatile int32_t t56 = 519438980;

	t56 = (x229==((x230<=x231)+x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	static int16_t x234 = -2199;
	volatile uint16_t x235 = UINT16_MAX;
	uint64_t x236 = 335168024810357595LLU;

	t57 = (x233==((x234<=x235)+x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 31931LLU;
	int64_t x238 = -1LL;
	uint8_t x240 = 0U;
	volatile int32_t t58 = 128;

	t58 = (x237==((x238<=x239)+x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	volatile uint16_t x244 = 54U;
	volatile int32_t t59 = -829;

	t59 = (x241==((x242<=x243)+x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x249 = 3U;
	volatile uint32_t x250 = 574019U;
	static int16_t x251 = -1;
	static volatile int32_t x252 = INT32_MIN;

	t60 = (x249==((x250<=x251)+x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x253 = -2215260283789613LL;
	int16_t x255 = -1;
	volatile int32_t t61 = 106765404;

	t61 = (x253==((x254<=x255)+x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -6;
	volatile int8_t x258 = INT8_MAX;
	static int16_t x260 = INT16_MAX;

	t62 = (x257==((x258<=x259)+x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x263 = INT64_MAX;
	int32_t t63 = -66180804;

	t63 = (x261==((x262<=x263)+x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = -1;
	static volatile int16_t x266 = INT16_MAX;
	int32_t x267 = INT32_MIN;
	static volatile int64_t x268 = 38053954LL;
	static volatile int32_t t64 = 34;

	t64 = (x265==((x266<=x267)+x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x269 = INT32_MIN;
	static int16_t x270 = INT16_MAX;
	int32_t t65 = 23879168;

	t65 = (x269==((x270<=x271)+x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x273 = -1LL;
	volatile int8_t x274 = -1;
	int64_t x275 = INT64_MAX;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t66 = -69947;

	t66 = (x273==((x274<=x275)+x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x282 = 28175U;
	volatile int32_t x283 = 38;
	volatile int32_t t67 = -870962878;

	t67 = (x281==((x282<=x283)+x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = -1;
	uint64_t x286 = 347227190249629099LLU;
	int8_t x287 = 23;
	volatile int32_t t68 = 18059924;

	t68 = (x285==((x286<=x287)+x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x290 = -1;
	static uint8_t x291 = 2U;
	int32_t t69 = -805486;

	t69 = (x289==((x290<=x291)+x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = UINT16_MAX;
	volatile uint32_t x295 = 574786U;
	static int8_t x296 = INT8_MIN;
	volatile int32_t t70 = -208274;

	t70 = (x293==((x294<=x295)+x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = 16272U;
	volatile int16_t x298 = -36;
	uint32_t x299 = 12069U;
	static volatile uint8_t x300 = UINT8_MAX;

	t71 = (x297==((x298<=x299)+x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x301 = -15161;
	static int32_t x302 = INT32_MAX;
	static volatile int32_t t72 = 28;

	t72 = (x301==((x302<=x303)+x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x306 = 420U;
	static int8_t x307 = 6;
	int8_t x308 = -1;
	int32_t t73 = -22101;

	t73 = (x305==((x306<=x307)+x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x309 = 1478815217888LLU;
	uint16_t x310 = 3U;
	uint16_t x311 = 0U;
	volatile int32_t t74 = -7;

	t74 = (x309==((x310<=x311)+x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x313 = 1014318704LL;
	volatile int16_t x314 = INT16_MAX;
	int64_t x316 = INT64_MAX;
	int32_t t75 = -1524743;

	t75 = (x313==((x314<=x315)+x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = 1U;
	int32_t x318 = -5870;
	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	int32_t t76 = 182818;

	t76 = (x317==((x318<=x319)+x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x321 = 1194751014781916916LL;
	volatile int8_t x322 = INT8_MAX;
	int64_t x324 = INT64_MIN;

	t77 = (x321==((x322<=x323)+x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = 1;
	int64_t x326 = INT64_MAX;
	uint16_t x327 = 20056U;
	volatile int32_t t78 = 3162061;

	t78 = (x325==((x326<=x327)+x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 13872U;
	static int64_t x330 = INT64_MIN;
	static uint64_t x331 = 19LLU;
	int8_t x332 = INT8_MAX;
	volatile int32_t t79 = -587;

	t79 = (x329==((x330<=x331)+x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x334 = 9;
	int8_t x335 = INT8_MIN;
	volatile int64_t x336 = INT64_MIN;
	static volatile int32_t t80 = 13851;

	t80 = (x333==((x334<=x335)+x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x337 = INT64_MAX;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = -314339;
	int32_t x340 = -111;
	static int32_t t81 = -629496769;

	t81 = (x337==((x338<=x339)+x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x341 = -19433;
	static volatile int16_t x342 = -1;
	int16_t x343 = INT16_MAX;
	uint16_t x344 = UINT16_MAX;
	int32_t t82 = -30746;

	t82 = (x341==((x342<=x343)+x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x347 = INT8_MAX;
	volatile int8_t x348 = INT8_MAX;

	t83 = (x345==((x346<=x347)+x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MIN;
	static int8_t x350 = 52;
	uint64_t x352 = 30474604101LLU;
	volatile int32_t t84 = -15;

	t84 = (x349==((x350<=x351)+x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x354 = INT64_MIN;
	int8_t x355 = -1;
	static volatile int64_t x356 = INT64_MIN;
	int32_t t85 = -87186;

	t85 = (x353==((x354<=x355)+x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x358 = INT8_MIN;

	t86 = (x357==((x358<=x359)+x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x362 = INT8_MAX;
	static uint64_t x364 = 100308LLU;
	int32_t t87 = 1708;

	t87 = (x361==((x362<=x363)+x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x365 = UINT32_MAX;
	static volatile uint8_t x366 = UINT8_MAX;
	int16_t x367 = -10;
	static int8_t x368 = -1;
	volatile int32_t t88 = -75;

	t88 = (x365==((x366<=x367)+x368));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MAX;
	static int16_t x370 = INT16_MAX;
	uint8_t x371 = 11U;
	volatile uint32_t x372 = UINT32_MAX;
	int32_t t89 = -5665325;

	t89 = (x369==((x370<=x371)+x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = 783480031704588LLU;
	uint8_t x375 = 90U;
	uint32_t x376 = 3871844U;
	static volatile int32_t t90 = 327;

	t90 = (x373==((x374<=x375)+x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = -3506;
	static uint8_t x378 = UINT8_MAX;
	static volatile uint8_t x379 = UINT8_MAX;
	int64_t x380 = -1505735246367319964LL;
	int32_t t91 = -2140;

	t91 = (x377==((x378<=x379)+x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int8_t x382 = -1;
	volatile int32_t x384 = -7;
	int32_t t92 = -1;

	t92 = (x381==((x382<=x383)+x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	static int32_t x386 = INT32_MIN;
	uint64_t x387 = 688LLU;
	int8_t x388 = INT8_MIN;
	volatile int32_t t93 = 25123;

	t93 = (x385==((x386<=x387)+x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x389 = 1738013279870525LLU;
	uint32_t x390 = 0U;
	int16_t x391 = -9582;
	int8_t x392 = INT8_MAX;

	t94 = (x389==((x390<=x391)+x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x395 = 31U;
	static uint32_t x396 = 4970U;
	volatile int32_t t95 = -367799;

	t95 = (x393==((x394<=x395)+x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x397 = UINT16_MAX;
	int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MIN;
	static int8_t x400 = 47;
	volatile int32_t t96 = -234040;

	t96 = (x397==((x398<=x399)+x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x401 = INT16_MIN;
	int8_t x402 = INT8_MIN;
	int64_t x403 = 4157415495394LL;
	static uint8_t x404 = 57U;
	volatile int32_t t97 = 0;

	t97 = (x401==((x402<=x403)+x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x406 = INT64_MIN;
	static uint8_t x408 = UINT8_MAX;
	int32_t t98 = -564174;

	t98 = (x405==((x406<=x407)+x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x409 = 231;
	uint16_t x410 = 81U;
	int8_t x411 = -1;
	static volatile uint64_t x412 = UINT64_MAX;
	static int32_t t99 = 120;

	t99 = (x409==((x410<=x411)+x412));

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

