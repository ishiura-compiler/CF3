#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x4 = 6U;
volatile int32_t t0 = -69991264;
uint8_t x8 = 1U;
static volatile int32_t t1 = -66273555;
static int32_t t3 = 15;
int16_t x18 = INT16_MIN;
volatile int8_t x19 = 1;
static int16_t x20 = INT16_MIN;
uint16_t x23 = 21U;
int32_t t5 = -184730;
uint64_t x27 = 76799955LLU;
volatile int8_t x28 = INT8_MAX;
int32_t x34 = INT32_MIN;
uint32_t x38 = UINT32_MAX;
volatile int32_t t9 = -89327929;
int32_t t10 = 8231689;
volatile int64_t x50 = INT64_MAX;
static int32_t t12 = -31631523;
int32_t t13 = 252046;
int32_t t14 = 6;
int64_t x62 = INT64_MIN;
int32_t x73 = INT32_MIN;
int8_t x75 = -1;
int8_t x80 = INT8_MIN;
uint64_t x82 = 8LLU;
int64_t x83 = 0LL;
int64_t x84 = -1LL;
uint32_t x90 = UINT32_MAX;
volatile uint16_t x93 = 13086U;
volatile uint8_t x97 = UINT8_MAX;
int32_t x102 = INT32_MIN;
uint8_t x103 = 0U;
int8_t x105 = INT8_MIN;
volatile int32_t t26 = -10107;
volatile uint32_t x110 = 1U;
int32_t x114 = -2201595;
volatile int32_t x117 = -3886;
int64_t x120 = 265300176476564205LL;
int16_t x124 = -3975;
static int16_t x125 = INT16_MIN;
int16_t x130 = INT16_MAX;
int32_t x133 = 38592168;
volatile int32_t t33 = 183428;
int16_t x139 = INT16_MIN;
static int8_t x140 = -1;
int64_t x142 = INT64_MIN;
volatile int32_t t35 = 170182407;
int16_t x151 = -1;
uint64_t x152 = UINT64_MAX;
int32_t t37 = 149547;
int32_t t38 = -10;
int8_t x159 = 18;
volatile int32_t t39 = -6641917;
int32_t t41 = -127692;
int8_t x171 = -1;
int16_t x173 = INT16_MIN;
int32_t x175 = INT32_MIN;
volatile uint32_t x176 = 1700428532U;
int32_t t43 = -38842212;
int32_t t45 = 1133;
int16_t x189 = -5249;
static uint32_t x190 = UINT32_MAX;
static int32_t x195 = 10102561;
uint32_t x199 = 5578018U;
int32_t x200 = INT32_MAX;
int32_t x201 = -1;
uint32_t x202 = 2559905U;
uint16_t x205 = 3132U;
int8_t x211 = INT8_MIN;
static volatile int32_t x220 = -1;
int16_t x227 = INT16_MIN;
int16_t x228 = INT16_MAX;
static uint8_t x231 = 77U;
int32_t t58 = -7524632;
uint64_t x238 = 2544298585846662656LLU;
int32_t t61 = 627191945;
static int64_t x252 = INT64_MIN;
uint32_t x253 = 214688191U;
static int32_t x255 = 760;
int32_t t66 = 329;
int64_t x279 = INT64_MIN;
volatile int32_t t69 = 63511350;
int8_t x285 = -1;
static volatile int64_t x289 = -25592129330LL;
int32_t x290 = -30;
volatile int32_t t73 = -348120357;
int64_t x298 = -1LL;
volatile int32_t t74 = -9800261;
int64_t x310 = INT64_MIN;
int32_t t77 = 29;
int64_t x329 = INT64_MIN;
int64_t x332 = -7183207147126452LL;
volatile int32_t t82 = 12;
int32_t x333 = -1;
uint32_t x335 = 661336U;
int8_t x336 = 38;
int16_t x340 = INT16_MIN;
volatile int32_t t84 = 57;
uint32_t x349 = 21U;
volatile int8_t x356 = INT8_MAX;
volatile int32_t t89 = -4;
uint16_t x361 = UINT16_MAX;
volatile uint16_t x362 = 22U;
uint16_t x368 = 55U;
int8_t x369 = -1;
static uint64_t x371 = 380558338385337LLU;
int8_t x384 = -1;
volatile int32_t t95 = -30374812;
uint64_t x385 = UINT64_MAX;
int16_t x389 = 76;
int8_t x396 = INT8_MAX;
uint16_t x398 = 15967U;
int16_t x399 = INT16_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MIN;

	t0 = ((x1==x2)-(x3<=x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int8_t x6 = -1;
	uint16_t x7 = 1180U;

	t1 = ((x5==x6)-(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint64_t x10 = 105019890757LLU;
	uint32_t x11 = 992923U;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = -696105;

	t2 = ((x9==x10)-(x11<=x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = 7356069LL;
	volatile int64_t x15 = INT64_MIN;
	volatile int16_t x16 = 29;

	t3 = ((x13==x14)-(x15<=x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int32_t t4 = -2112704;

	t4 = ((x17==x18)-(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -826;
	int8_t x22 = INT8_MAX;
	int8_t x24 = 1;

	t5 = ((x21==x22)-(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	int32_t x26 = -295;
	int32_t t6 = 3;

	t6 = ((x25==x26)-(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 2U;
	volatile int32_t x30 = INT32_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = -3332;

	t7 = ((x29==x30)-(x31<=x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 1;
	static int8_t x35 = INT8_MIN;
	volatile int8_t x36 = INT8_MIN;
	int32_t t8 = 944;

	t8 = ((x33==x34)-(x35<=x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int64_t x39 = INT64_MAX;
	int32_t x40 = INT32_MIN;

	t9 = ((x37==x38)-(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	static int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MAX;
	uint16_t x44 = 0U;

	t10 = ((x41==x42)-(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MAX;
	int32_t x46 = INT32_MAX;
	volatile int16_t x47 = -1;
	int64_t x48 = INT64_MIN;
	volatile int32_t t11 = -311185;

	t11 = ((x45==x46)-(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int16_t x51 = INT16_MIN;
	uint64_t x52 = 623155559247LLU;

	t12 = ((x49==x50)-(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -108;
	static volatile int8_t x54 = -1;
	volatile int32_t x55 = -1;
	int32_t x56 = -7098;

	t13 = ((x53==x54)-(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int32_t x58 = 1;
	volatile int32_t x59 = 54982974;
	volatile uint16_t x60 = 9219U;

	t14 = ((x57==x58)-(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -1LL;
	uint8_t x63 = 0U;
	int16_t x64 = 34;
	int32_t t15 = -27042;

	t15 = ((x61==x62)-(x63<=x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int32_t x66 = -5826011;
	volatile int16_t x67 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = -19221350;

	t16 = ((x65==x66)-(x67<=x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 675U;
	uint16_t x70 = UINT16_MAX;
	static uint32_t x71 = UINT32_MAX;
	int64_t x72 = INT64_MAX;
	int32_t t17 = -976309266;

	t17 = ((x69==x70)-(x71<=x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	int16_t x76 = -190;
	int32_t t18 = 499280276;

	t18 = ((x73==x74)-(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	volatile uint8_t x78 = UINT8_MAX;
	int64_t x79 = -1LL;
	int32_t t19 = -279096772;

	t19 = ((x77==x78)-(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	static int32_t t20 = 21374858;

	t20 = ((x81==x82)-(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 7U;
	int8_t x86 = 22;
	volatile int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MAX;
	int32_t t21 = -210157317;

	t21 = ((x85==x86)-(x87<=x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile int64_t x91 = -1LL;
	volatile int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -13497;

	t22 = ((x89==x90)-(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = -1;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -1;
	volatile int32_t t23 = 1946;

	t23 = ((x93==x94)-(x95<=x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = 0;
	volatile int64_t x99 = INT64_MIN;
	static uint32_t x100 = 82390U;
	static volatile int32_t t24 = -424694;

	t24 = ((x97==x98)-(x99<=x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 58U;
	uint8_t x104 = 1U;
	int32_t t25 = 32575592;

	t25 = ((x101==x102)-(x103<=x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1;
	volatile uint8_t x107 = UINT8_MAX;
	int16_t x108 = INT16_MAX;

	t26 = ((x105==x106)-(x107<=x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 2LL;
	int8_t x111 = -1;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t27 = -628911;

	t27 = ((x109==x110)-(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int8_t x115 = -32;
	int8_t x116 = -5;
	int32_t t28 = 2602;

	t28 = ((x113==x114)-(x115<=x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = -11058726LL;
	int32_t x119 = INT32_MAX;
	volatile int32_t t29 = 30;

	t29 = ((x117==x118)-(x119<=x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = 12;
	static int32_t x123 = 865291;
	int32_t t30 = 5562;

	t30 = ((x121==x122)-(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x126 = INT8_MIN;
	volatile int8_t x127 = INT8_MIN;
	volatile int16_t x128 = -1;
	volatile int32_t t31 = 36;

	t31 = ((x125==x126)-(x127<=x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	uint32_t x131 = 32164831U;
	int64_t x132 = -736453947LL;
	int32_t t32 = -11;

	t32 = ((x129==x130)-(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MAX;
	uint32_t x135 = 192755108U;
	static volatile uint64_t x136 = 1681LLU;

	t33 = ((x133==x134)-(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 23LL;
	volatile uint32_t x138 = 1175139074U;
	int32_t t34 = 3748;

	t34 = ((x137==x138)-(x139<=x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	int64_t x143 = INT64_MIN;
	int64_t x144 = 705757142356LL;

	t35 = ((x141==x142)-(x143<=x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint64_t x146 = 3761428226LLU;
	int64_t x147 = INT64_MIN;
	static volatile int64_t x148 = -875087886080797397LL;
	static int32_t t36 = 8839557;

	t36 = ((x145==x146)-(x147<=x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -10;
	int64_t x150 = INT64_MIN;

	t37 = ((x149==x150)-(x151<=x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	static int64_t x154 = INT64_MIN;
	volatile int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;

	t38 = ((x153==x154)-(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -38;
	int16_t x158 = INT16_MIN;
	uint8_t x160 = 5U;

	t39 = ((x157==x158)-(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 56719137938LL;
	uint32_t x162 = 909U;
	volatile uint16_t x163 = 8U;
	static int32_t x164 = INT32_MAX;
	volatile int32_t t40 = -978295467;

	t40 = ((x161==x162)-(x163<=x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 174575;
	int64_t x166 = INT64_MIN;
	uint8_t x167 = 45U;
	int32_t x168 = INT32_MIN;

	t41 = ((x165==x166)-(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 85721917U;
	uint64_t x172 = 3794LLU;
	static int32_t t42 = -138;

	t42 = ((x169==x170)-(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -1;

	t43 = ((x173==x174)-(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 0;
	uint32_t x178 = 6741281U;
	static volatile int32_t x179 = -1;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t44 = 757387;

	t44 = ((x177==x178)-(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	uint16_t x182 = 11U;
	uint16_t x183 = 16921U;
	volatile int16_t x184 = 4;

	t45 = ((x181==x182)-(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	static int32_t x186 = -37542310;
	int8_t x187 = INT8_MIN;
	static uint8_t x188 = 109U;
	int32_t t46 = -2;

	t46 = ((x185==x186)-(x187<=x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x191 = UINT8_MAX;
	volatile int16_t x192 = -1;
	int32_t t47 = -958;

	t47 = ((x189==x190)-(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 1359U;
	int8_t x194 = 1;
	uint32_t x196 = 1988946139U;
	int32_t t48 = 1;

	t48 = ((x193==x194)-(x195<=x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 699U;
	uint8_t x198 = 4U;
	volatile int32_t t49 = -1259;

	t49 = ((x197==x198)-(x199<=x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x203 = INT64_MAX;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 2;

	t50 = ((x201==x202)-(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MAX;
	uint32_t x207 = 3U;
	static volatile int64_t x208 = INT64_MIN;
	volatile int32_t t51 = 1;

	t51 = ((x205==x206)-(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MAX;
	int32_t x212 = INT32_MIN;
	static int32_t t52 = 331263;

	t52 = ((x209==x210)-(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	uint16_t x214 = UINT16_MAX;
	uint16_t x215 = 20U;
	uint32_t x216 = 1109482534U;
	volatile int32_t t53 = 0;

	t53 = ((x213==x214)-(x215<=x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 12U;
	int8_t x218 = 57;
	int8_t x219 = 0;
	static volatile int32_t t54 = -3552958;

	t54 = ((x217==x218)-(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	int16_t x222 = INT16_MAX;
	uint16_t x223 = 1508U;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t55 = 6893121;

	t55 = ((x221==x222)-(x223<=x224));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint8_t x226 = 27U;
	static volatile int32_t t56 = 11191;

	t56 = ((x225==x226)-(x227<=x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 2700962149785629097LLU;
	volatile int16_t x230 = 994;
	static int32_t x232 = INT32_MIN;
	static int32_t t57 = -209;

	t57 = ((x229==x230)-(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int32_t x234 = -1;
	int16_t x235 = INT16_MAX;
	uint8_t x236 = 121U;

	t58 = ((x233==x234)-(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	volatile int64_t x239 = -1LL;
	uint8_t x240 = 1U;
	int32_t t59 = 2044915;

	t59 = ((x237==x238)-(x239<=x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 239100412LLU;
	int8_t x242 = -13;
	uint8_t x243 = UINT8_MAX;
	volatile int32_t x244 = -1;
	static int32_t t60 = 0;

	t60 = ((x241==x242)-(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 3399U;
	int8_t x246 = -1;
	int64_t x247 = 3462126222572097LL;
	int32_t x248 = INT32_MIN;

	t61 = ((x245==x246)-(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 77204404LL;
	int8_t x250 = -1;
	uint16_t x251 = 276U;
	int32_t t62 = -955;

	t62 = ((x249==x250)-(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x254 = 0;
	static uint16_t x256 = 2U;
	int32_t t63 = -29358566;

	t63 = ((x253==x254)-(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint16_t x258 = 12360U;
	volatile uint8_t x259 = 10U;
	uint8_t x260 = 3U;
	static volatile int32_t t64 = 23;

	t64 = ((x257==x258)-(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = 1743;
	int32_t x262 = INT32_MAX;
	volatile int8_t x263 = 1;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -34244786;

	t65 = ((x261==x262)-(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 123181U;
	int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MAX;
	uint32_t x268 = 661712U;

	t66 = ((x265==x266)-(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	static int64_t x270 = -1LL;
	volatile int8_t x271 = INT8_MAX;
	uint32_t x272 = 265234U;
	volatile int32_t t67 = -769915;

	t67 = ((x269==x270)-(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = 6;
	int16_t x275 = 687;
	static int16_t x276 = -10;
	volatile int32_t t68 = 58;

	t68 = ((x273==x274)-(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 22938LLU;
	int8_t x278 = -1;
	int16_t x280 = -1;

	t69 = ((x277==x278)-(x279<=x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 533;
	static int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MAX;
	int32_t x284 = -1;
	volatile int32_t t70 = -40322595;

	t70 = ((x281==x282)-(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = 165104LLU;
	static int64_t x287 = 1264989679395LL;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t71 = -58;

	t71 = ((x285==x286)-(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x291 = INT32_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = 6;

	t72 = ((x289==x290)-(x291<=x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 208015445U;
	static int8_t x294 = INT8_MIN;
	volatile uint8_t x295 = 95U;
	volatile int32_t x296 = 57871081;

	t73 = ((x293==x294)-(x295<=x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x297 = 306412LLU;
	static uint8_t x299 = 52U;
	static int64_t x300 = INT64_MIN;

	t74 = ((x297==x298)-(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	volatile uint8_t x302 = 5U;
	int64_t x303 = INT64_MAX;
	volatile uint64_t x304 = 28LLU;
	volatile int32_t t75 = -293;

	t75 = ((x301==x302)-(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	volatile uint64_t x306 = 1428404LLU;
	uint16_t x307 = 613U;
	static uint8_t x308 = 30U;
	volatile int32_t t76 = 62777165;

	t76 = ((x305==x306)-(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = UINT32_MAX;
	volatile int8_t x311 = -29;
	uint64_t x312 = UINT64_MAX;

	t77 = ((x309==x310)-(x311<=x312));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 209321587LLU;
	static int8_t x314 = -9;
	uint64_t x315 = UINT64_MAX;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t78 = -29406871;

	t78 = ((x313==x314)-(x315<=x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -9129272LL;
	int16_t x318 = INT16_MAX;
	volatile int32_t x319 = -3;
	static int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 11538;

	t79 = ((x317==x318)-(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -130;
	static int64_t x322 = -5247926862560LL;
	static int64_t x323 = -1LL;
	static volatile int8_t x324 = INT8_MIN;
	volatile int32_t t80 = 13;

	t80 = ((x321==x322)-(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = 62;
	int16_t x326 = INT16_MIN;
	static int16_t x327 = INT16_MIN;
	uint64_t x328 = 1LLU;
	volatile int32_t t81 = -1;

	t81 = ((x325==x326)-(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x330 = -1;
	volatile uint32_t x331 = 5837U;

	t82 = ((x329==x330)-(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = 52U;
	int32_t t83 = 279794;

	t83 = ((x333==x334)-(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 1;
	uint8_t x338 = 62U;
	static int8_t x339 = -52;

	t84 = ((x337==x338)-(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 175903432361048LLU;
	uint16_t x342 = 30618U;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = 3U;
	static volatile int32_t t85 = 0;

	t85 = ((x341==x342)-(x343<=x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = UINT64_MAX;
	int32_t x346 = -46577349;
	int16_t x347 = 854;
	static uint32_t x348 = 615U;
	static volatile int32_t t86 = -2095;

	t86 = ((x345==x346)-(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x350 = INT64_MIN;
	volatile int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = 14837;

	t87 = ((x349==x350)-(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = 170241707446LL;
	volatile int16_t x354 = 5;
	int16_t x355 = -116;
	static volatile int32_t t88 = 56702333;

	t88 = ((x353==x354)-(x355<=x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	static int32_t x358 = INT32_MIN;
	static uint8_t x359 = UINT8_MAX;
	static int16_t x360 = 12245;

	t89 = ((x357==x358)-(x359<=x360));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t90 = 0;

	t90 = ((x361==x362)-(x363<=x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 15LLU;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = 2U;
	static int32_t t91 = -8909870;

	t91 = ((x365==x366)-(x367<=x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x370 = UINT32_MAX;
	static int8_t x372 = INT8_MIN;
	volatile int32_t t92 = -39438;

	t92 = ((x369==x370)-(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 32537U;
	uint16_t x374 = 1U;
	static uint64_t x375 = 1051974707LLU;
	int8_t x376 = INT8_MAX;
	static int32_t t93 = -62;

	t93 = ((x373==x374)-(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 15;
	int16_t x378 = INT16_MIN;
	volatile uint16_t x379 = UINT16_MAX;
	uint64_t x380 = 6926941740761LLU;
	int32_t t94 = 5092;

	t94 = ((x377==x378)-(x379<=x380));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = -12011;
	uint32_t x382 = UINT32_MAX;
	int8_t x383 = -1;

	t95 = ((x381==x382)-(x383<=x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = 87617U;
	int64_t x387 = INT64_MIN;
	static volatile uint8_t x388 = 5U;
	static int32_t t96 = 1369;

	t96 = ((x385==x386)-(x387<=x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x390 = 1603260;
	uint16_t x391 = UINT16_MAX;
	static int16_t x392 = INT16_MIN;
	int32_t t97 = 2896;

	t97 = ((x389==x390)-(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 1U;
	int64_t x394 = -1LL;
	int16_t x395 = -136;
	int32_t t98 = -11;

	t98 = ((x393==x394)-(x395<=x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MIN;
	int8_t x400 = 3;
	static volatile int32_t t99 = -58389;

	t99 = ((x397==x398)-(x399<=x400));

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

