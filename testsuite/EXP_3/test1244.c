#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -40;
int32_t x8 = INT32_MAX;
static volatile int32_t t1 = -4224780;
uint16_t x9 = 372U;
uint16_t x10 = 1856U;
int32_t t2 = 0;
static int64_t x13 = INT64_MIN;
int64_t x18 = INT64_MAX;
int64_t x23 = -3675934053LL;
static volatile int32_t t5 = -1854714;
uint32_t x28 = 244892427U;
uint32_t x29 = 6U;
int16_t x31 = INT16_MAX;
int8_t x40 = INT8_MIN;
volatile uint8_t x44 = 98U;
volatile int8_t x48 = 9;
int32_t t12 = 1;
static int16_t x66 = INT16_MIN;
int8_t x69 = INT8_MAX;
int64_t x71 = 34025100411197LL;
volatile int8_t x73 = -50;
uint8_t x95 = 106U;
uint16_t x99 = 79U;
int16_t x104 = INT16_MIN;
int8_t x112 = INT8_MAX;
volatile int32_t t26 = -53393656;
volatile int32_t t27 = -53;
uint8_t x121 = 41U;
int16_t x129 = 1590;
int32_t x143 = INT32_MIN;
int8_t x144 = -1;
int16_t x154 = 22;
uint64_t x161 = 1730304015878598598LLU;
static int32_t x165 = INT32_MIN;
uint32_t x168 = 20760302U;
int8_t x172 = -2;
uint16_t x173 = UINT16_MAX;
int32_t x175 = INT32_MIN;
static volatile int32_t t42 = 1;
int64_t x179 = INT64_MIN;
uint16_t x180 = UINT16_MAX;
static uint32_t x189 = 2103156U;
uint64_t x190 = 34570786LLU;
int8_t x191 = INT8_MIN;
static uint16_t x196 = UINT16_MAX;
int16_t x202 = INT16_MAX;
int8_t x206 = 7;
volatile int32_t t49 = -25;
int8_t x215 = INT8_MIN;
uint64_t x216 = UINT64_MAX;
volatile int32_t x217 = INT32_MIN;
volatile int8_t x218 = -1;
int64_t x220 = -1247295811970757308LL;
volatile uint16_t x222 = 367U;
volatile int32_t t54 = 955;
int16_t x233 = INT16_MAX;
volatile int64_t x238 = INT64_MIN;
volatile int32_t t58 = -1395102;
volatile int8_t x245 = 18;
volatile int64_t x246 = INT64_MIN;
int8_t x252 = INT8_MIN;
int32_t t60 = 0;
static volatile int32_t t61 = 1593290;
int32_t t62 = -4181;
volatile int32_t t63 = 32908284;
uint16_t x267 = 735U;
volatile uint64_t x270 = UINT64_MAX;
static int64_t x273 = -109423721434486603LL;
int32_t x281 = INT32_MIN;
int32_t t68 = -1;
volatile int32_t t71 = -48440004;
int32_t t72 = 2;
static int16_t x307 = 6330;
uint8_t x308 = 31U;
volatile int8_t x310 = INT8_MIN;
int32_t x313 = -129961;
uint16_t x320 = UINT16_MAX;
volatile int32_t t77 = -101;
int8_t x324 = -1;
int16_t x325 = INT16_MIN;
uint64_t x335 = UINT64_MAX;
int8_t x337 = INT8_MAX;
uint16_t x339 = 136U;
uint32_t x344 = 93520311U;
int32_t x346 = -38487751;
uint64_t x347 = UINT64_MAX;
static int64_t x353 = INT64_MIN;
volatile uint8_t x355 = 9U;
uint64_t x356 = 81044821804851LLU;
int16_t x370 = INT16_MIN;
int64_t x373 = 596800004665856LL;
volatile int8_t x375 = 7;
int32_t t91 = -856;
int64_t x380 = INT64_MIN;
volatile int64_t x383 = -3669943264889483LL;
volatile int32_t t95 = -1;
int32_t x394 = -1;
static int32_t x395 = INT32_MAX;
uint32_t x396 = UINT32_MAX;
uint8_t x398 = UINT8_MAX;
int16_t x407 = 514;


void f0(void) {
	volatile uint32_t x2 = UINT32_MAX;
	static int64_t x3 = INT64_MIN;
	static int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -31;

	t0 = ((x1%x2)<(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static int64_t x6 = 1971877101047691LL;
	int16_t x7 = -900;

	t1 = ((x5%x6)<(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = -28;
	static int8_t x12 = 1;

	t2 = ((x9%x10)<(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	int16_t x15 = -82;
	int16_t x16 = -1008;
	int32_t t3 = 0;

	t3 = ((x13%x14)<(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -3408186LL;
	int8_t x19 = INT8_MAX;
	int16_t x20 = 28;
	int32_t t4 = -876;

	t4 = ((x17%x18)<(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -16;
	int32_t x22 = 20;
	static int32_t x24 = INT32_MAX;

	t5 = ((x21%x22)<(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	static int32_t x26 = 15299;
	volatile int32_t x27 = -1;
	int32_t t6 = -1;

	t6 = ((x25%x26)<(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 1476505598U;
	int32_t x32 = INT32_MIN;
	int32_t t7 = -3744;

	t7 = ((x29%x30)<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile int16_t x34 = INT16_MIN;
	uint8_t x35 = 48U;
	uint32_t x36 = 165757208U;
	int32_t t8 = 1;

	t8 = ((x33%x34)<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	uint32_t x38 = 3836U;
	volatile int16_t x39 = -479;
	volatile int32_t t9 = -23208672;

	t9 = ((x37%x38)<(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int64_t x42 = INT64_MAX;
	int16_t x43 = INT16_MIN;
	int32_t t10 = -172391899;

	t10 = ((x41%x42)<(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	uint16_t x46 = 13339U;
	static int8_t x47 = -3;
	static int32_t t11 = -385098;

	t11 = ((x45%x46)<(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 1751824722108334384LLU;
	uint8_t x50 = UINT8_MAX;
	int64_t x51 = -1LL;
	int64_t x52 = INT64_MIN;

	t12 = ((x49%x50)<(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 3488U;
	uint32_t x54 = 132U;
	static int16_t x55 = -1;
	int8_t x56 = -39;
	volatile int32_t t13 = 14902468;

	t13 = ((x53%x54)<(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 1;
	static volatile uint64_t x58 = UINT64_MAX;
	static int16_t x59 = INT16_MIN;
	volatile int16_t x60 = INT16_MIN;
	int32_t t14 = -8;

	t14 = ((x57%x58)<(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = -15956493064769835LL;
	int16_t x64 = -1;
	static int32_t t15 = -376665770;

	t15 = ((x61%x62)<(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int16_t x67 = INT16_MIN;
	uint8_t x68 = 1U;
	int32_t t16 = -176494;

	t16 = ((x65%x66)<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	uint16_t x72 = 53U;
	int32_t t17 = -1978;

	t17 = ((x69%x70)<(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 112187U;
	int32_t x75 = -220174;
	int16_t x76 = -1;
	int32_t t18 = 167523556;

	t18 = ((x73%x74)<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 643LLU;
	int64_t x78 = -1LL;
	int16_t x79 = INT16_MIN;
	int32_t x80 = -1;
	static volatile int32_t t19 = 11;

	t19 = ((x77%x78)<(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = -42972662;
	int8_t x83 = -2;
	uint16_t x84 = 1080U;
	volatile int32_t t20 = 1332559;

	t20 = ((x81%x82)<(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	static uint8_t x87 = 124U;
	static int8_t x88 = -25;
	volatile int32_t t21 = 11619;

	t21 = ((x85%x86)<(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MAX;
	volatile int64_t x94 = INT64_MIN;
	volatile uint16_t x96 = 863U;
	static int32_t t22 = -29365285;

	t22 = ((x93%x94)<(x95==x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	uint32_t x98 = 35989697U;
	volatile int64_t x100 = -2014235LL;
	int32_t t23 = -6;

	t23 = ((x97%x98)<(x99==x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x101 = 2998134422175344340LLU;
	int64_t x102 = -1LL;
	uint64_t x103 = 79305853LLU;
	static int32_t t24 = 3;

	t24 = ((x101%x102)<(x103==x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 0U;
	uint16_t x106 = 9630U;
	static int32_t x107 = -543;
	int64_t x108 = -1LL;
	static volatile int32_t t25 = -5507730;

	t25 = ((x105%x106)<(x107==x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	static uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MAX;

	t26 = ((x109%x110)<(x111==x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -15;
	uint8_t x114 = UINT8_MAX;
	uint8_t x115 = UINT8_MAX;
	int64_t x116 = 1054382256LL;

	t27 = ((x113%x114)<(x115==x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = INT8_MAX;
	int16_t x118 = 11740;
	static int16_t x119 = INT16_MIN;
	int32_t x120 = -459059361;
	int32_t t28 = 0;

	t28 = ((x117%x118)<(x119==x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x122 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t29 = -202;

	t29 = ((x121%x122)<(x123==x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x125 = 1U;
	int32_t x126 = -11535517;
	uint64_t x127 = UINT64_MAX;
	static volatile int16_t x128 = -1;
	volatile int32_t t30 = 112;

	t30 = ((x125%x126)<(x127==x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	volatile int64_t x131 = -2940693181543199809LL;
	int8_t x132 = INT8_MIN;
	int32_t t31 = 6394199;

	t31 = ((x129%x130)<(x131==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x133 = 2U;
	uint16_t x134 = 3839U;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = -13558564;

	t32 = ((x133%x134)<(x135==x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	int64_t x139 = -21557LL;
	uint32_t x140 = UINT32_MAX;
	static int32_t t33 = -4233804;

	t33 = ((x137%x138)<(x139==x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = INT64_MAX;
	int64_t x142 = INT64_MIN;
	static int32_t t34 = 990;

	t34 = ((x141%x142)<(x143==x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 13573U;
	int64_t x146 = INT64_MIN;
	int64_t x147 = INT64_MIN;
	volatile uint32_t x148 = 627U;
	volatile int32_t t35 = -111178;

	t35 = ((x145%x146)<(x147==x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = UINT16_MAX;
	int16_t x150 = INT16_MIN;
	int64_t x151 = -1LL;
	static uint8_t x152 = UINT8_MAX;
	int32_t t36 = 0;

	t36 = ((x149%x150)<(x151==x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 923U;
	int16_t x155 = -1;
	uint8_t x156 = 0U;
	int32_t t37 = 2;

	t37 = ((x153%x154)<(x155==x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -1;
	static uint64_t x158 = UINT64_MAX;
	int16_t x159 = -1;
	int16_t x160 = -1;
	int32_t t38 = 23581;

	t38 = ((x157%x158)<(x159==x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x162 = INT32_MAX;
	static int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	int32_t t39 = -2;

	t39 = ((x161%x162)<(x163==x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = 1604U;
	int32_t t40 = 1285245;

	t40 = ((x165%x166)<(x167==x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x169 = INT8_MIN;
	volatile int8_t x170 = INT8_MAX;
	int32_t x171 = -3110;
	int32_t t41 = 63;

	t41 = ((x169%x170)<(x171==x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x174 = UINT32_MAX;
	int8_t x176 = -1;

	t42 = ((x173%x174)<(x175==x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x177 = UINT16_MAX;
	static int8_t x178 = INT8_MIN;
	int32_t t43 = 224623339;

	t43 = ((x177%x178)<(x179==x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = 4;
	int32_t x182 = 287978058;
	static uint16_t x183 = 8U;
	static uint32_t x184 = 1055366U;
	volatile int32_t t44 = 187034181;

	t44 = ((x181%x182)<(x183==x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x192 = 16436LLU;
	int32_t t45 = 8764438;

	t45 = ((x189%x190)<(x191==x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = 30115110;
	volatile int16_t x194 = INT16_MIN;
	int16_t x195 = -1;
	volatile int32_t t46 = 101238;

	t46 = ((x193%x194)<(x195==x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x197 = 0;
	volatile uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MAX;
	static int32_t x200 = INT32_MIN;
	int32_t t47 = 378582;

	t47 = ((x197%x198)<(x199==x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 530U;
	int64_t x203 = 221812809LL;
	int64_t x204 = -1LL;
	int32_t t48 = -931;

	t48 = ((x201%x202)<(x203==x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x205 = 2U;
	int8_t x207 = INT8_MAX;
	int16_t x208 = INT16_MAX;

	t49 = ((x205%x206)<(x207==x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 17489U;
	static int8_t x210 = INT8_MIN;
	volatile int32_t x211 = INT32_MIN;
	int32_t x212 = -1;
	volatile int32_t t50 = 31;

	t50 = ((x209%x210)<(x211==x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = -15585751;
	int16_t x214 = INT16_MIN;
	int32_t t51 = -5715223;

	t51 = ((x213%x214)<(x215==x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x219 = 5;
	volatile int32_t t52 = 1;

	t52 = ((x217%x218)<(x219==x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MAX;
	volatile int32_t x223 = INT32_MIN;
	uint8_t x224 = 1U;
	int32_t t53 = 113061872;

	t53 = ((x221%x222)<(x223==x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = 29;
	static int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MAX;
	int16_t x228 = INT16_MIN;

	t54 = ((x225%x226)<(x227==x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x229 = 1710370099249566LL;
	volatile int16_t x230 = -19;
	static int16_t x231 = -1;
	uint64_t x232 = 19257933LLU;
	volatile int32_t t55 = -6225;

	t55 = ((x229%x230)<(x231==x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x234 = -1;
	static int8_t x235 = INT8_MAX;
	int64_t x236 = 4983230LL;
	static volatile int32_t t56 = -121;

	t56 = ((x233%x234)<(x235==x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = 7;
	int16_t x239 = INT16_MIN;
	static uint16_t x240 = UINT16_MAX;
	volatile int32_t t57 = -850824745;

	t57 = ((x237%x238)<(x239==x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x241 = 40472886271056434LL;
	int32_t x242 = -1;
	int64_t x243 = INT64_MIN;
	int32_t x244 = INT32_MAX;

	t58 = ((x241%x242)<(x243==x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x247 = INT16_MAX;
	static uint8_t x248 = UINT8_MAX;
	static int32_t t59 = 208;

	t59 = ((x245%x246)<(x247==x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = 81064;
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = INT8_MIN;

	t60 = ((x249%x250)<(x251==x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x253 = 103781U;
	int32_t x254 = -3982669;
	int64_t x255 = INT64_MIN;
	static int8_t x256 = 0;

	t61 = ((x253%x254)<(x255==x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = 2043;
	static uint64_t x258 = 74859547876LLU;
	uint64_t x259 = 1675381183088567LLU;
	int32_t x260 = INT32_MIN;

	t62 = ((x257%x258)<(x259==x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = 105U;
	static int64_t x262 = -1LL;
	uint64_t x263 = UINT64_MAX;
	static uint64_t x264 = 7162716LLU;

	t63 = ((x261%x262)<(x263==x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = 0;
	int64_t x266 = -1LL;
	int64_t x268 = INT64_MIN;
	volatile int32_t t64 = 1;

	t64 = ((x265%x266)<(x267==x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -1LL;
	int8_t x271 = INT8_MIN;
	static volatile int8_t x272 = -1;
	volatile int32_t t65 = -97973097;

	t65 = ((x269%x270)<(x271==x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = INT16_MAX;
	int32_t x275 = INT32_MIN;
	volatile int64_t x276 = INT64_MIN;
	volatile int32_t t66 = -6;

	t66 = ((x273%x274)<(x275==x276));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = -1;
	uint8_t x278 = 6U;
	volatile int8_t x279 = 4;
	uint16_t x280 = 5781U;
	int32_t t67 = 86;

	t67 = ((x277%x278)<(x279==x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x282 = INT64_MIN;
	uint64_t x283 = 1013063LLU;
	static volatile uint64_t x284 = 6843498781452LLU;

	t68 = ((x281%x282)<(x283==x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x285 = 915U;
	int8_t x286 = INT8_MIN;
	uint32_t x287 = 3089U;
	int64_t x288 = INT64_MIN;
	volatile int32_t t69 = 56981758;

	t69 = ((x285%x286)<(x287==x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 10;
	uint64_t x290 = 32601024100LLU;
	volatile int8_t x291 = INT8_MAX;
	int64_t x292 = 94540LL;
	int32_t t70 = 694857847;

	t70 = ((x289%x290)<(x291==x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = 479U;
	volatile int8_t x294 = -1;
	int16_t x295 = INT16_MIN;
	static int32_t x296 = -1;

	t71 = ((x293%x294)<(x295==x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x297 = INT32_MAX;
	int64_t x298 = 13086807701967304LL;
	int64_t x299 = -1LL;
	static int64_t x300 = INT64_MIN;

	t72 = ((x297%x298)<(x299==x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	volatile uint64_t x302 = 82021LLU;
	volatile int16_t x303 = INT16_MIN;
	static int16_t x304 = -1;
	volatile int32_t t73 = -12008;

	t73 = ((x301%x302)<(x303==x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x305 = -4;
	volatile int16_t x306 = INT16_MIN;
	int32_t t74 = 75;

	t74 = ((x305%x306)<(x307==x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x309 = 8787973887790804LL;
	static int32_t x311 = -1;
	int32_t x312 = INT32_MAX;
	static volatile int32_t t75 = 27125;

	t75 = ((x309%x310)<(x311==x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x314 = -1;
	uint8_t x315 = 33U;
	uint64_t x316 = 1054050LLU;
	int32_t t76 = -118581;

	t76 = ((x313%x314)<(x315==x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x317 = UINT32_MAX;
	volatile int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MIN;

	t77 = ((x317%x318)<(x319==x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x321 = UINT16_MAX;
	volatile uint64_t x322 = UINT64_MAX;
	volatile uint16_t x323 = 3U;
	int32_t t78 = 216079571;

	t78 = ((x321%x322)<(x323==x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x326 = UINT32_MAX;
	uint16_t x327 = 80U;
	int32_t x328 = -1;
	int32_t t79 = 161652;

	t79 = ((x325%x326)<(x327==x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x329 = -1;
	uint64_t x330 = 2729386LLU;
	uint64_t x331 = 2340940314LLU;
	static uint32_t x332 = 25U;
	volatile int32_t t80 = 97014;

	t80 = ((x329%x330)<(x331==x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MIN;
	int64_t x334 = 4467784307054146LL;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t81 = 80321;

	t81 = ((x333%x334)<(x335==x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x338 = UINT16_MAX;
	static volatile uint16_t x340 = UINT16_MAX;
	int32_t t82 = 0;

	t82 = ((x337%x338)<(x339==x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = -1;
	int16_t x342 = 1235;
	static int16_t x343 = INT16_MIN;
	int32_t t83 = 25;

	t83 = ((x341%x342)<(x343==x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x345 = 57;
	int16_t x348 = INT16_MIN;
	volatile int32_t t84 = 7055898;

	t84 = ((x345%x346)<(x347==x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x349 = INT8_MAX;
	uint64_t x350 = 2738LLU;
	uint8_t x351 = UINT8_MAX;
	static int32_t x352 = INT32_MAX;
	volatile int32_t t85 = -1596;

	t85 = ((x349%x350)<(x351==x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x354 = 51U;
	static volatile int32_t t86 = -45;

	t86 = ((x353%x354)<(x355==x356));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = INT8_MAX;
	volatile int32_t x358 = -3;
	int16_t x359 = INT16_MAX;
	uint64_t x360 = UINT64_MAX;
	int32_t t87 = 214163;

	t87 = ((x357%x358)<(x359==x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MIN;
	int64_t x363 = INT64_MIN;
	volatile int64_t x364 = INT64_MIN;
	volatile int32_t t88 = -2789;

	t88 = ((x361%x362)<(x363==x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MAX;
	int32_t x366 = INT32_MIN;
	static int16_t x367 = INT16_MAX;
	volatile int32_t x368 = INT32_MAX;
	int32_t t89 = 7283917;

	t89 = ((x365%x366)<(x367==x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x369 = UINT32_MAX;
	int64_t x371 = 6LL;
	int16_t x372 = INT16_MAX;
	static int32_t t90 = -1575855;

	t90 = ((x369%x370)<(x371==x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x374 = -1;
	int32_t x376 = INT32_MIN;

	t91 = ((x373%x374)<(x375==x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MAX;
	int32_t x378 = -522939788;
	int16_t x379 = -5947;
	static int32_t t92 = 129;

	t92 = ((x377%x378)<(x379==x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = UINT16_MAX;
	volatile int16_t x384 = INT16_MIN;
	int32_t t93 = -93496721;

	t93 = ((x381%x382)<(x383==x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x385 = INT64_MAX;
	uint32_t x386 = 21U;
	int64_t x387 = 4281756973881143LL;
	int32_t x388 = -1;
	volatile int32_t t94 = -2;

	t94 = ((x385%x386)<(x387==x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x389 = UINT32_MAX;
	volatile uint16_t x390 = 7024U;
	uint8_t x391 = 89U;
	int8_t x392 = -1;

	t95 = ((x389%x390)<(x391==x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = INT64_MIN;
	int32_t t96 = 394534;

	t96 = ((x393%x394)<(x395==x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x397 = 5LLU;
	volatile int16_t x399 = 1;
	int64_t x400 = INT64_MIN;
	int32_t t97 = -51;

	t97 = ((x397%x398)<(x399==x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = -1022111879146LL;
	volatile int32_t x402 = INT32_MIN;
	uint16_t x403 = UINT16_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t98 = 293;

	t98 = ((x401%x402)<(x403==x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x405 = INT64_MIN;
	int32_t x406 = -1;
	static int64_t x408 = INT64_MIN;
	volatile int32_t t99 = 471259995;

	t99 = ((x405%x406)<(x407==x408));

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

