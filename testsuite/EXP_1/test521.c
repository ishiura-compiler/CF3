#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
int64_t x10 = -1LL;
int8_t x12 = 0;
int64_t x22 = INT64_MAX;
int8_t x41 = 1;
int64_t x50 = INT64_MIN;
static int64_t t11 = 510LL;
uint64_t x61 = UINT64_MAX;
int16_t x64 = -455;
uint64_t x66 = 554462457890416LLU;
static volatile int64_t x69 = -1LL;
static int16_t x71 = INT16_MAX;
int64_t x81 = INT64_MIN;
volatile int64_t t19 = -1076022390630985363LL;
uint16_t x95 = 1U;
volatile int32_t t21 = 12;
static volatile int32_t x108 = INT32_MIN;
uint64_t t23 = 6449419194536606917LLU;
uint64_t x112 = 389218842714130144LLU;
uint64_t t24 = 2883233753922911459LLU;
uint8_t x116 = 0U;
int32_t x118 = -42655;
static int32_t x119 = INT32_MAX;
static int8_t x125 = -12;
volatile uint64_t t28 = 7LLU;
volatile int32_t x129 = 4;
static uint64_t x131 = 7LLU;
static uint64_t t29 = 1LLU;
int32_t x135 = -1650;
int32_t t30 = -3;
uint8_t x139 = 19U;
volatile int8_t x140 = -19;
volatile uint32_t x144 = 56674U;
uint8_t x146 = 26U;
volatile int32_t x160 = -1416431;
int32_t x165 = INT32_MIN;
uint32_t x169 = 474360U;
volatile int64_t x177 = INT64_MIN;
int32_t x179 = -1;
int8_t x193 = 2;
static volatile uint64_t t42 = 73271979019LLU;
uint8_t x220 = 31U;
uint32_t t45 = 84446U;
int16_t x225 = INT16_MAX;
static int32_t x236 = -68074;
volatile uint16_t x239 = 1089U;
int16_t x240 = -1;
volatile int32_t t49 = -15602;
int32_t x242 = 585;
int16_t x244 = INT16_MIN;
int64_t x246 = INT64_MIN;
int8_t x248 = INT8_MIN;
int64_t x249 = INT64_MAX;
int64_t x252 = -165294429LL;
volatile int64_t t52 = -14LL;
static int32_t x256 = INT32_MIN;
uint32_t x268 = UINT32_MAX;
static volatile uint32_t x273 = 8U;
volatile int64_t t58 = -367387924750247LL;
int8_t x287 = -1;
static int64_t x293 = 255068227241927707LL;
uint16_t x296 = UINT16_MAX;
int32_t x302 = INT32_MIN;
static volatile int64_t t62 = 1010060637LL;
int8_t x314 = INT8_MAX;
uint32_t x318 = 2299621U;
static int8_t x320 = -1;
static int64_t x322 = INT64_MIN;
int64_t x331 = -1LL;
int16_t x332 = INT16_MIN;
int8_t x336 = INT8_MIN;
volatile int64_t x343 = -1LL;
static int64_t x348 = -1LL;
volatile int32_t t75 = 203943727;
uint32_t x366 = 1066025U;
int8_t x374 = 1;
volatile uint64_t x386 = 1623574840856LLU;
volatile uint64_t t80 = 314555465LLU;
int32_t x398 = INT32_MIN;
uint32_t x400 = UINT32_MAX;
volatile int64_t x402 = INT64_MIN;
uint8_t x411 = 127U;
volatile int64_t t85 = -225452648461444LL;
static int32_t x413 = INT32_MAX;
int8_t x418 = -1;
volatile int8_t x419 = -1;
uint32_t x435 = UINT32_MAX;
volatile int8_t x444 = 27;
int8_t x446 = INT8_MAX;
int32_t x447 = -1;
static uint32_t x449 = 180667U;
int64_t x457 = INT64_MAX;
uint64_t x459 = UINT64_MAX;
uint8_t x464 = UINT8_MAX;
int64_t t96 = 1202326057041871101LL;
volatile int64_t x465 = INT64_MAX;
static volatile uint32_t t98 = 18391135U;
volatile int64_t x473 = -1LL;
volatile int64_t t99 = 9355585005672LL;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	uint32_t x2 = 2150U;
	int16_t x4 = -6;
	volatile uint32_t t0 = 49784U;

	t0 = (((x1/x2)-x3)+x4);

	if (t0 != 2148482472U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	int64_t x11 = -3009830355757544LL;
	int64_t t1 = -162034753385406LL;

	t1 = (((x9/x10)-x11)+x12);

	if (t1 != 3009830355692009LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -1;
	int32_t x14 = -1;
	int16_t x15 = 891;
	uint8_t x16 = 15U;
	int32_t t2 = -11312139;

	t2 = (((x13/x14)-x15)+x16);

	if (t2 != -875) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	static int16_t x23 = -19;
	volatile int32_t x24 = -2;
	int64_t t3 = 153519887491LL;

	t3 = (((x21/x22)-x23)+x24);

	if (t3 != 17LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	uint32_t x26 = UINT32_MAX;
	static int8_t x27 = INT8_MIN;
	int64_t x28 = -62869910542117650LL;
	int64_t t4 = 3710025128188798LL;

	t4 = (((x25/x26)-x27)+x28);

	if (t4 != -62869910542117521LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -62;
	static uint8_t x30 = UINT8_MAX;
	static uint8_t x31 = 3U;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t5 = 88;

	t5 = (((x29/x30)-x31)+x32);

	if (t5 != 252) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = -160;
	volatile int16_t x34 = INT16_MAX;
	int16_t x35 = INT16_MAX;
	volatile uint16_t x36 = UINT16_MAX;
	volatile int32_t t6 = 878301;

	t6 = (((x33/x34)-x35)+x36);

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = -2716389LL;
	static int32_t x38 = -13651;
	uint32_t x39 = UINT32_MAX;
	volatile int64_t x40 = 278361382LL;
	int64_t t7 = -3492626167799LL;

	t7 = (((x37/x38)-x39)+x40);

	if (t7 != -4016605715LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x42 = 680U;
	static uint64_t x43 = 648286552345612482LLU;
	uint64_t x44 = 2692632834858272LLU;
	volatile uint64_t t8 = 1848777LLU;

	t8 = (((x41/x42)-x43)+x44);

	if (t8 != 17801150154198797406LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = -1LL;
	int8_t x46 = INT8_MAX;
	volatile int8_t x47 = INT8_MIN;
	int16_t x48 = 269;
	static int64_t t9 = -27085094508LL;

	t9 = (((x45/x46)-x47)+x48);

	if (t9 != 397LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -3685225919LL;
	int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MAX;
	int64_t t10 = -566698680930LL;

	t10 = (((x49/x50)-x51)+x52);

	if (t10 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = -1;
	int64_t x55 = INT64_MIN;
	int8_t x56 = -1;

	t11 = (((x53/x54)-x55)+x56);

	if (t11 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 717U;
	int64_t x58 = INT64_MIN;
	uint8_t x59 = UINT8_MAX;
	int8_t x60 = 7;
	static int64_t t12 = 195377LL;

	t12 = (((x57/x58)-x59)+x60);

	if (t12 != -248LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x62 = UINT8_MAX;
	int64_t x63 = 509200LL;
	volatile uint64_t t13 = 117112460088LLU;

	t13 = (((x61/x62)-x63)+x64);

	if (t13 != 72340172837567018LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	int32_t x67 = -537607;
	volatile int32_t x68 = 522320;
	volatile uint64_t t14 = 4131462314LLU;

	t14 = (((x65/x66)-x67)+x68);

	if (t14 != 1059927LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = INT64_MIN;
	int16_t x72 = INT16_MAX;
	volatile int64_t t15 = -2737411896110LL;

	t15 = (((x69/x70)-x71)+x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = UINT64_MAX;
	static volatile uint64_t x74 = 1423LLU;
	int8_t x75 = 7;
	static int32_t x76 = INT32_MAX;
	volatile uint64_t t16 = 1LLU;

	t16 = (((x73/x74)-x75)+x76);

	if (t16 != 12963279781854371LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 2833743U;
	volatile uint16_t x78 = UINT16_MAX;
	static volatile int16_t x79 = -6;
	volatile int64_t x80 = -1LL;
	static volatile int64_t t17 = -17800164518989804LL;

	t17 = (((x77/x78)-x79)+x80);

	if (t17 != 48LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	uint16_t x84 = 21U;
	volatile int64_t t18 = -12496LL;

	t18 = (((x81/x82)-x83)+x84);

	if (t18 != 9223090553287868429LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x89 = -1LL;
	uint8_t x90 = 25U;
	uint32_t x91 = UINT32_MAX;
	uint32_t x92 = UINT32_MAX;

	t19 = (((x89/x90)-x91)+x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = -1;
	static int32_t x94 = INT32_MIN;
	int64_t x96 = 206488345935959LL;
	volatile int64_t t20 = 2364LL;

	t20 = (((x93/x94)-x95)+x96);

	if (t20 != 206488345935958LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x97 = INT32_MAX;
	int8_t x98 = INT8_MAX;
	int16_t x99 = INT16_MIN;
	uint16_t x100 = 0U;

	t21 = (((x97/x98)-x99)+x100);

	if (t21 != 16942088) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = UINT64_MAX;
	int64_t x104 = INT64_MIN;
	volatile uint64_t t22 = 1197025904378496LLU;

	t22 = (((x101/x102)-x103)+x104);

	if (t22 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = -1578846987822403LL;
	volatile int16_t x106 = INT16_MIN;
	uint64_t x107 = 2670LLU;

	t23 = (((x105/x106)-x107)+x108);

	if (t23 != 46035099980LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MAX;
	static volatile int16_t x111 = -6965;

	t24 = (((x109/x110)-x111)+x112);

	if (t24 != 389218842714137108LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	uint32_t x114 = 61326883U;
	int32_t x115 = -1;
	int64_t t25 = 1269LL;

	t25 = (((x113/x114)-x115)+x116);

	if (t25 != -150396882828LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = INT16_MIN;
	uint64_t x120 = 9109879363122336062LLU;
	volatile uint64_t t26 = 12473LLU;

	t26 = (((x117/x118)-x119)+x120);

	if (t26 != 9109879360974852415LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = -1;
	uint64_t x122 = UINT64_MAX;
	int64_t x123 = INT64_MIN;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t27 = 3314472094681910LLU;

	t27 = (((x121/x122)-x123)+x124);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x126 = 17290736251471269LLU;
	int64_t x127 = INT64_MIN;
	uint8_t x128 = 0U;

	t28 = (((x125/x126)-x127)+x128);

	if (t28 != 9223372036854776874LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x130 = -33;
	int8_t x132 = INT8_MIN;

	t29 = (((x129/x130)-x131)+x132);

	if (t29 != 18446744073709551481LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = UINT16_MAX;
	int32_t x134 = INT32_MIN;
	uint8_t x136 = UINT8_MAX;

	t30 = (((x133/x134)-x135)+x136);

	if (t30 != 1905) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = -3;
	uint32_t x138 = 48998U;
	static volatile uint32_t t31 = 217531311U;

	t31 = (((x137/x138)-x139)+x140);

	if (t31 != 87617U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MAX;
	int64_t x142 = -250LL;
	int64_t x143 = 0LL;
	int64_t t32 = 469834475237510288LL;

	t32 = (((x141/x142)-x143)+x144);

	if (t32 != 56674LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x145 = 1U;
	int32_t x147 = INT32_MAX;
	volatile uint8_t x148 = UINT8_MAX;
	int32_t t33 = -2492;

	t33 = (((x145/x146)-x147)+x148);

	if (t33 != -2147483392) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x149 = 1377908388U;
	volatile int64_t x150 = INT64_MIN;
	int32_t x151 = 133098878;
	volatile int64_t x152 = -1LL;
	volatile int64_t t34 = 61994797013LL;

	t34 = (((x149/x150)-x151)+x152);

	if (t34 != -133098879LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MAX;
	int8_t x158 = 57;
	int16_t x159 = INT16_MAX;
	volatile int32_t t35 = -202441;

	t35 = (((x157/x158)-x159)+x160);

	if (t35 != -1449196) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x161 = 1792;
	static volatile uint8_t x162 = 90U;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;
	int32_t t36 = -778638561;

	t36 = (((x161/x162)-x163)+x164);

	if (t36 != -65517) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x166 = INT8_MIN;
	volatile uint32_t x167 = 10151U;
	static int64_t x168 = INT64_MIN;
	static int64_t t37 = -817606186307947270LL;

	t37 = (((x165/x166)-x167)+x168);

	if (t37 != -9223372036838008743LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x170 = -1LL;
	volatile uint64_t x171 = UINT64_MAX;
	volatile int8_t x172 = 3;
	volatile uint64_t t38 = 391638359312774341LLU;

	t38 = (((x169/x170)-x171)+x172);

	if (t38 != 18446744073709077260LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x173 = INT64_MIN;
	static int32_t x174 = INT32_MIN;
	uint16_t x175 = 1395U;
	uint64_t x176 = 34427689099LLU;
	volatile uint64_t t39 = 102LLU;

	t39 = (((x173/x174)-x175)+x176);

	if (t39 != 38722655000LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x178 = INT64_MAX;
	static int8_t x180 = -1;
	int64_t t40 = 7809LL;

	t40 = (((x177/x178)-x179)+x180);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x194 = INT16_MAX;
	int8_t x195 = -1;
	int32_t x196 = -60797;
	int32_t t41 = -415183;

	t41 = (((x193/x194)-x195)+x196);

	if (t41 != -60796) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x205 = 190LLU;
	volatile int16_t x206 = INT16_MIN;
	volatile int64_t x207 = -1LL;
	static int8_t x208 = 28;

	t42 = (((x205/x206)-x207)+x208);

	if (t42 != 29LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 3U;
	static int32_t x210 = -1;
	static int16_t x211 = INT16_MIN;
	volatile uint8_t x212 = UINT8_MAX;
	volatile uint32_t t43 = 14974352U;

	t43 = (((x209/x210)-x211)+x212);

	if (t43 != 33023U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x213 = 2173U;
	static uint8_t x214 = 9U;
	int64_t x215 = -208LL;
	uint32_t x216 = 74822U;
	int64_t t44 = -203413794741137LL;

	t44 = (((x213/x214)-x215)+x216);

	if (t44 != 75271LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x217 = INT16_MIN;
	uint32_t x218 = UINT32_MAX;
	uint32_t x219 = 412560U;

	t45 = (((x217/x218)-x219)+x220);

	if (t45 != 4294554767U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x221 = 2991LL;
	volatile int32_t x222 = 2026821;
	volatile int16_t x223 = -79;
	uint64_t x224 = UINT64_MAX;
	uint64_t t46 = 0LLU;

	t46 = (((x221/x222)-x223)+x224);

	if (t46 != 78LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x226 = UINT64_MAX;
	volatile uint32_t x227 = 2U;
	int16_t x228 = -2589;
	uint64_t t47 = 6LLU;

	t47 = (((x225/x226)-x227)+x228);

	if (t47 != 18446744073709549025LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = INT16_MAX;
	volatile int16_t x234 = INT16_MIN;
	volatile uint8_t x235 = 5U;
	int32_t t48 = 5844;

	t48 = (((x233/x234)-x235)+x236);

	if (t48 != -68079) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = INT32_MAX;
	int16_t x238 = INT16_MIN;

	t49 = (((x237/x238)-x239)+x240);

	if (t49 != -66625) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x241 = UINT8_MAX;
	static uint8_t x243 = 1U;
	volatile int32_t t50 = -36333;

	t50 = (((x241/x242)-x243)+x244);

	if (t50 != -32769) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = INT16_MIN;
	uint32_t x247 = 1257873U;
	int64_t t51 = 32LL;

	t51 = (((x245/x246)-x247)+x248);

	if (t51 != -1258001LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x250 = INT8_MIN;
	volatile int8_t x251 = -24;

	t52 = (((x249/x250)-x251)+x252);

	if (t52 != -72057594203222340LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = -18846099;
	static volatile int16_t x254 = -1;
	static volatile uint64_t x255 = 208015919799522603LLU;
	volatile uint64_t t53 = 39571831LLU;

	t53 = (((x253/x254)-x255)+x256);

	if (t53 != 18238728151781391464LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = INT16_MAX;
	static int32_t x258 = INT32_MIN;
	static uint32_t x259 = UINT32_MAX;
	static int16_t x260 = INT16_MIN;
	uint32_t t54 = 60424772U;

	t54 = (((x257/x258)-x259)+x260);

	if (t54 != 4294934529U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x265 = 62U;
	static int32_t x266 = INT32_MIN;
	uint8_t x267 = UINT8_MAX;
	volatile uint32_t t55 = 161U;

	t55 = (((x265/x266)-x267)+x268);

	if (t55 != 4294967040U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x269 = UINT32_MAX;
	static volatile int64_t x270 = INT64_MAX;
	int32_t x271 = -1;
	int64_t x272 = INT64_MIN;
	static int64_t t56 = -60539LL;

	t56 = (((x269/x270)-x271)+x272);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x274 = -1LL;
	uint32_t x275 = UINT32_MAX;
	volatile int32_t x276 = INT32_MAX;
	volatile int64_t t57 = 6737474LL;

	t57 = (((x273/x274)-x275)+x276);

	if (t57 != -2147483656LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = -1LL;
	int64_t x278 = INT64_MIN;
	static int8_t x279 = INT8_MIN;
	int64_t x280 = 2368970870LL;

	t58 = (((x277/x278)-x279)+x280);

	if (t58 != 2368970998LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = INT32_MAX;
	uint8_t x282 = UINT8_MAX;
	volatile int8_t x283 = INT8_MAX;
	int32_t x284 = -4859;
	int32_t t59 = -151004;

	t59 = (((x281/x282)-x283)+x284);

	if (t59 != 8416518) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = -1;
	uint64_t x286 = 2583758LLU;
	int64_t x288 = INT64_MAX;
	uint64_t t60 = 92915LLU;

	t60 = (((x285/x286)-x287)+x288);

	if (t60 != 9223379176356259193LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x294 = -26;
	int16_t x295 = INT16_MIN;
	static int64_t t61 = 4305133638599LL;

	t61 = (((x293/x294)-x295)+x296);

	if (t61 != -9810316432283531LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = INT16_MIN;
	int64_t x303 = -1LL;
	int16_t x304 = INT16_MAX;

	t62 = (((x301/x302)-x303)+x304);

	if (t62 != 32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x305 = -1;
	volatile int64_t x306 = -96LL;
	int16_t x307 = -1;
	volatile uint32_t x308 = 12918073U;
	volatile int64_t t63 = 1726900459526297333LL;

	t63 = (((x305/x306)-x307)+x308);

	if (t63 != 12918074LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x309 = UINT8_MAX;
	volatile uint64_t x310 = 1LLU;
	int32_t x311 = -1;
	static uint8_t x312 = 0U;
	volatile uint64_t t64 = 1188544858103371609LLU;

	t64 = (((x309/x310)-x311)+x312);

	if (t64 != 256LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = INT8_MAX;
	volatile int64_t x315 = 11458882211239LL;
	static int64_t x316 = 1641099744745LL;
	volatile int64_t t65 = -49500586LL;

	t65 = (((x313/x314)-x315)+x316);

	if (t65 != -9817782466493LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = INT32_MAX;
	int32_t x319 = -1;
	static uint32_t t66 = 1275962282U;

	t66 = (((x317/x318)-x319)+x320);

	if (t66 != 933U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x321 = 0U;
	volatile uint16_t x323 = UINT16_MAX;
	static uint64_t x324 = UINT64_MAX;
	uint64_t t67 = 2260430LLU;

	t67 = (((x321/x322)-x323)+x324);

	if (t67 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MAX;
	int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	int32_t x328 = -376259512;
	volatile int32_t t68 = -12513396;

	t68 = (((x325/x326)-x327)+x328);

	if (t68 != -376259384) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x330 = 3U;
	int64_t t69 = -42044900562290LL;

	t69 = (((x329/x330)-x331)+x332);

	if (t69 != 715795115LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x333 = 969679008906185LLU;
	static int64_t x334 = -1LL;
	static uint64_t x335 = 3333203515LLU;
	volatile uint64_t t70 = 1160581394358393426LLU;

	t70 = (((x333/x334)-x335)+x336);

	if (t70 != 18446744070376347973LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x337 = 14U;
	uint16_t x338 = UINT16_MAX;
	volatile int64_t x339 = INT64_MAX;
	int64_t x340 = -1LL;
	int64_t t71 = INT64_MIN;

	t71 = (((x337/x338)-x339)+x340);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x341 = 711U;
	int16_t x342 = -1;
	int8_t x344 = INT8_MIN;
	int64_t t72 = -65LL;

	t72 = (((x341/x342)-x343)+x344);

	if (t72 != -838LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x345 = 4;
	static int32_t x346 = -1;
	uint16_t x347 = UINT16_MAX;
	volatile int64_t t73 = -7540243907680LL;

	t73 = (((x345/x346)-x347)+x348);

	if (t73 != -65540LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x349 = 1667U;
	uint32_t x350 = 302002642U;
	static uint32_t x351 = 148487252U;
	int32_t x352 = 225887;
	uint32_t t74 = 743086U;

	t74 = (((x349/x350)-x351)+x352);

	if (t74 != 4146705931U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MIN;
	static volatile int16_t x363 = -1;
	int8_t x364 = INT8_MIN;

	t75 = (((x361/x362)-x363)+x364);

	if (t75 != -126) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x365 = -1;
	int64_t x367 = -93LL;
	uint16_t x368 = 10267U;
	volatile int64_t t76 = 75739554703LL;

	t76 = (((x365/x366)-x367)+x368);

	if (t76 != 14388LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x373 = INT32_MIN;
	static int64_t x375 = INT64_MIN;
	volatile uint16_t x376 = UINT16_MAX;
	int64_t t77 = 60702387787112108LL;

	t77 = (((x373/x374)-x375)+x376);

	if (t77 != 9223372034707357695LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = 1;
	int32_t x379 = -1;
	int32_t x380 = -51;
	int32_t t78 = -3696352;

	t78 = (((x377/x378)-x379)+x380);

	if (t78 != 77) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x381 = -45939118;
	int32_t x382 = INT32_MIN;
	int32_t x383 = -1;
	volatile uint16_t x384 = UINT16_MAX;
	int32_t t79 = -53462;

	t79 = (((x381/x382)-x383)+x384);

	if (t79 != 65536) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x385 = INT16_MAX;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;

	t80 = (((x385/x386)-x387)+x388);

	if (t80 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x389 = UINT32_MAX;
	static int32_t x390 = INT32_MAX;
	volatile int64_t x391 = -223379LL;
	int16_t x392 = INT16_MIN;
	int64_t t81 = 2551LL;

	t81 = (((x389/x390)-x391)+x392);

	if (t81 != 190613LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x397 = 1063558495296938224LLU;
	int32_t x399 = 0;
	static uint64_t t82 = 1LLU;

	t82 = (((x397/x398)-x399)+x400);

	if (t82 != 4294967295LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x401 = INT16_MIN;
	int32_t x403 = INT32_MIN;
	static uint64_t x404 = 8118LLU;
	uint64_t t83 = 7LLU;

	t83 = (((x401/x402)-x403)+x404);

	if (t83 != 2147491766LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x405 = INT64_MIN;
	int32_t x406 = -14811387;
	static uint16_t x407 = 3475U;
	volatile int16_t x408 = INT16_MAX;
	volatile int64_t t84 = -141633878308703846LL;

	t84 = (((x405/x406)-x407)+x408);

	if (t84 != 622721725568LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x409 = -1LL;
	static volatile int16_t x410 = -1;
	uint32_t x412 = 2768229U;

	t85 = (((x409/x410)-x411)+x412);

	if (t85 != 2768103LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x414 = UINT8_MAX;
	uint64_t x415 = 11454516224LLU;
	static int16_t x416 = -529;
	static volatile uint64_t t86 = 1915457799225LLU;

	t86 = (((x413/x414)-x415)+x416);

	if (t86 != 18446744062263456367LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x417 = INT64_MAX;
	int64_t x420 = -1LL;
	volatile int64_t t87 = -2292983432372LL;

	t87 = (((x417/x418)-x419)+x420);

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = -8;
	int8_t x430 = -1;
	uint32_t x431 = 135U;
	int64_t x432 = INT64_MIN;
	volatile int64_t t88 = 15986695636LL;

	t88 = (((x429/x430)-x431)+x432);

	if (t88 != -9223372032559808639LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x433 = INT32_MAX;
	uint16_t x434 = 2124U;
	static volatile int8_t x436 = 2;
	uint32_t t89 = 138698U;

	t89 = (((x433/x434)-x435)+x436);

	if (t89 != 1011059U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x437 = -119965410LL;
	int16_t x438 = INT16_MAX;
	int64_t x439 = 10416741545492085LL;
	int16_t x440 = INT16_MAX;
	int64_t t90 = 28698910645291LL;

	t90 = (((x437/x438)-x439)+x440);

	if (t90 != -10416741545462979LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x441 = 132663828594294LLU;
	int32_t x442 = 395843;
	uint64_t x443 = 282586699655988LLU;
	static volatile uint64_t t91 = 5LLU;

	t91 = (((x441/x442)-x443)+x444);

	if (t91 != 18446461487345038195LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x445 = INT32_MAX;
	volatile int64_t x448 = -1LL;
	volatile int64_t t92 = -1184LL;

	t92 = (((x445/x446)-x447)+x448);

	if (t92 != 16909320LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x450 = UINT16_MAX;
	int8_t x451 = INT8_MIN;
	uint8_t x452 = 59U;
	uint32_t t93 = 3U;

	t93 = (((x449/x450)-x451)+x452);

	if (t93 != 189U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x453 = UINT8_MAX;
	int64_t x454 = INT64_MAX;
	volatile int16_t x455 = INT16_MIN;
	int64_t x456 = 4479995038962877133LL;
	volatile int64_t t94 = 131519491138LL;

	t94 = (((x453/x454)-x455)+x456);

	if (t94 != 4479995038962909901LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x458 = UINT16_MAX;
	volatile int64_t x460 = INT64_MAX;
	volatile uint64_t t95 = 10969506136690394LLU;

	t95 = (((x457/x458)-x459)+x460);

	if (t95 != 9223512776490647552LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x461 = 63753008330LL;
	static int64_t x462 = 4LL;
	int16_t x463 = INT16_MAX;

	t96 = (((x461/x462)-x463)+x464);

	if (t96 != 15938219570LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x466 = -4863201LL;
	volatile int64_t x467 = -1LL;
	static volatile int8_t x468 = INT8_MIN;
	int64_t t97 = 42962023084LL;

	t97 = (((x465/x466)-x467)+x468);

	if (t97 != -1896564019762LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x469 = UINT16_MAX;
	int8_t x470 = -43;
	uint32_t x471 = 749U;
	volatile int32_t x472 = INT32_MIN;

	t98 = (((x469/x470)-x471)+x472);

	if (t98 != 2147481375U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x474 = INT64_MAX;
	int8_t x475 = 10;
	volatile int8_t x476 = INT8_MIN;

	t99 = (((x473/x474)-x475)+x476);

	if (t99 != -138LL) { NG(); } else { ; }
	
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

