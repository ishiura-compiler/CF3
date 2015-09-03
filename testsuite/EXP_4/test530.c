#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -1;
uint8_t x6 = 5U;
static uint16_t x11 = 226U;
int8_t x16 = INT8_MIN;
volatile int16_t x31 = -12790;
int16_t x32 = INT16_MAX;
volatile int32_t t6 = -15069071;
uint64_t x33 = 1LLU;
static volatile int32_t x35 = INT32_MAX;
uint16_t x38 = 0U;
uint8_t x40 = 30U;
int32_t t8 = -122323;
uint16_t x42 = UINT16_MAX;
static int16_t x54 = -13817;
volatile int64_t x60 = INT64_MIN;
int32_t x73 = INT32_MIN;
int32_t x78 = INT32_MIN;
int8_t x86 = INT8_MIN;
int16_t x89 = INT16_MAX;
static int32_t x92 = 1135389;
int32_t t19 = -3993045;
volatile uint32_t x95 = 8166242U;
static volatile int64_t x96 = -1LL;
int32_t t20 = -1970;
static volatile uint32_t x97 = UINT32_MAX;
int32_t t21 = -12983;
int16_t x102 = INT16_MAX;
volatile int32_t t22 = -2;
static int64_t x115 = INT64_MIN;
uint16_t x137 = 1U;
volatile uint16_t x146 = 9870U;
int16_t x147 = 2215;
int64_t x153 = INT64_MAX;
uint16_t x154 = 28U;
int32_t t34 = 763180;
uint64_t x157 = 59026LLU;
static int64_t x158 = INT64_MIN;
int16_t x161 = INT16_MIN;
uint16_t x165 = 4057U;
static volatile int64_t x174 = INT64_MIN;
volatile int32_t t39 = -4589993;
static volatile uint8_t x177 = 4U;
uint64_t x181 = 833897897742LLU;
static int32_t x184 = INT32_MIN;
volatile int32_t t43 = -16004;
int32_t t44 = 598;
volatile int32_t t45 = 0;
volatile uint64_t x202 = 16436LLU;
volatile int32_t t46 = 203;
volatile int8_t x212 = INT8_MIN;
volatile uint64_t x213 = 3438623104LLU;
uint32_t x217 = 207430U;
static int32_t t49 = 83;
static int64_t x233 = -1LL;
static int32_t t53 = 699;
static uint8_t x239 = UINT8_MAX;
int8_t x240 = -28;
static int32_t t54 = 16325;
uint64_t x241 = 49302LLU;
volatile int32_t t55 = 65072;
int8_t x248 = 1;
static int8_t x249 = INT8_MIN;
int32_t t59 = -18;
uint8_t x265 = 21U;
int64_t x266 = -938194LL;
volatile int64_t x270 = INT64_MIN;
uint64_t x273 = 18385LLU;
static int8_t x276 = INT8_MIN;
int16_t x280 = 310;
int32_t t63 = 0;
uint8_t x287 = 3U;
int32_t x289 = -1;
int8_t x290 = INT8_MIN;
static int16_t x294 = INT16_MIN;
uint8_t x306 = 0U;
uint16_t x311 = 744U;
int32_t x313 = 2326;
int32_t t75 = 259899;
uint8_t x329 = UINT8_MAX;
volatile int16_t x341 = INT16_MIN;
volatile int32_t t79 = -81563;
int64_t x345 = -1LL;
static volatile int32_t t80 = 0;
static int16_t x368 = -1;
int16_t x376 = 6;
int8_t x382 = -1;
int32_t x383 = 845959192;
int16_t x389 = INT16_MAX;
int16_t x396 = -84;
static int32_t x399 = INT32_MIN;
volatile int32_t x402 = 691286086;
int64_t x410 = -10343257454LL;
int32_t t99 = 812560;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int16_t x2 = -1;
	uint16_t x3 = 0U;
	uint32_t x4 = 16U;

	t0 = (x1<=(x2-(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x7 = 50950310387778607LLU;
	int32_t x8 = -247632600;
	volatile int32_t t1 = 5;

	t1 = (x5<=(x6-(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 348791408LL;
	int64_t x10 = 10254040394871LL;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 46428;

	t2 = (x9<=(x10-(x11/x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	int32_t t3 = 0;

	t3 = (x13<=(x14-(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 505787593;
	uint16_t x18 = UINT16_MAX;
	int64_t x19 = -945088354LL;
	int32_t x20 = -1;
	int32_t t4 = 37;

	t4 = (x17<=(x18-(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint64_t x22 = 149964695354LLU;
	int16_t x23 = INT16_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 244206079;

	t5 = (x21<=(x22-(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = 251845299;
	uint8_t x30 = UINT8_MAX;

	t6 = (x29<=(x30-(x31/x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MIN;
	uint32_t x36 = UINT32_MAX;
	int32_t t7 = -6781;

	t7 = (x33<=(x34-(x35/x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 34411147991848LL;
	volatile uint16_t x39 = UINT16_MAX;

	t8 = (x37<=(x38-(x39/x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 552U;
	int16_t x43 = INT16_MAX;
	uint32_t x44 = 46U;
	int32_t t9 = -213;

	t9 = (x41<=(x42-(x43/x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = 57;
	volatile int8_t x46 = -1;
	volatile uint32_t x47 = 15U;
	int8_t x48 = INT8_MIN;
	int32_t t10 = 93521907;

	t10 = (x45<=(x46-(x47/x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = -1;
	uint8_t x51 = UINT8_MAX;
	static uint64_t x52 = 42985636070135203LLU;
	volatile int32_t t11 = -3198;

	t11 = (x49<=(x50-(x51/x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 7798816779LL;
	uint32_t x55 = 55262377U;
	int8_t x56 = -1;
	volatile int32_t t12 = -3897292;

	t12 = (x53<=(x54-(x55/x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 3U;
	uint32_t x58 = UINT32_MAX;
	static int64_t x59 = 18752887499540LL;
	volatile int32_t t13 = -670653;

	t13 = (x57<=(x58-(x59/x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 2;
	volatile uint16_t x62 = 15U;
	uint8_t x63 = UINT8_MAX;
	uint32_t x64 = 22265U;
	volatile int32_t t14 = -307915393;

	t14 = (x61<=(x62-(x63/x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -84897;
	uint64_t x70 = 12950575122596LLU;
	int8_t x71 = INT8_MIN;
	static int16_t x72 = INT16_MAX;
	static int32_t t15 = 48;

	t15 = (x69<=(x70-(x71/x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x74 = 181998114234132LLU;
	uint8_t x75 = UINT8_MAX;
	volatile uint16_t x76 = 31308U;
	static int32_t t16 = 3721337;

	t16 = (x73<=(x74-(x75/x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = INT64_MIN;
	static int64_t x79 = INT64_MIN;
	static uint32_t x80 = 368U;
	int32_t t17 = 8;

	t17 = (x77<=(x78-(x79/x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 38;
	volatile int32_t x87 = INT32_MAX;
	uint32_t x88 = 3971U;
	int32_t t18 = 1;

	t18 = (x85<=(x86-(x87/x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x90 = 1;
	uint8_t x91 = UINT8_MAX;

	t19 = (x89<=(x90-(x91/x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = UINT8_MAX;
	static int8_t x94 = -1;

	t20 = (x93<=(x94-(x95/x96)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x98 = INT16_MAX;
	static volatile int8_t x99 = INT8_MAX;
	volatile int8_t x100 = INT8_MAX;

	t21 = (x97<=(x98-(x99/x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MAX;
	uint16_t x103 = UINT16_MAX;
	int64_t x104 = INT64_MIN;

	t22 = (x101<=(x102-(x103/x104)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = INT64_MAX;
	uint8_t x106 = 14U;
	uint16_t x107 = 10761U;
	static int64_t x108 = INT64_MAX;
	volatile int32_t t23 = -1;

	t23 = (x105<=(x106-(x107/x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x109 = UINT8_MAX;
	int16_t x110 = INT16_MIN;
	uint8_t x111 = 3U;
	uint8_t x112 = UINT8_MAX;
	int32_t t24 = -3120;

	t24 = (x109<=(x110-(x111/x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x113 = INT8_MIN;
	volatile uint64_t x114 = 1113079723006182701LLU;
	uint16_t x116 = 5U;
	int32_t t25 = 50;

	t25 = (x113<=(x114-(x115/x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = UINT16_MAX;
	int16_t x118 = INT16_MAX;
	volatile int8_t x119 = INT8_MIN;
	static int8_t x120 = -8;
	volatile int32_t t26 = 72663029;

	t26 = (x117<=(x118-(x119/x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -47467;
	static int8_t x122 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	uint64_t x124 = UINT64_MAX;
	static int32_t t27 = 46696;

	t27 = (x121<=(x122-(x123/x124)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x125 = UINT32_MAX;
	int8_t x126 = 13;
	uint32_t x127 = UINT32_MAX;
	int32_t x128 = 3;
	static int32_t t28 = -12742;

	t28 = (x125<=(x126-(x127/x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = -1;
	static int8_t x130 = -4;
	int32_t x131 = -2522116;
	int8_t x132 = INT8_MIN;
	volatile int32_t t29 = 334117;

	t29 = (x129<=(x130-(x131/x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x138 = INT32_MAX;
	uint32_t x139 = UINT32_MAX;
	int16_t x140 = -3394;
	int32_t t30 = 412;

	t30 = (x137<=(x138-(x139/x140)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x141 = -1;
	volatile int16_t x142 = INT16_MAX;
	uint32_t x143 = 104U;
	static int8_t x144 = -1;
	static volatile int32_t t31 = 0;

	t31 = (x141<=(x142-(x143/x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x145 = INT32_MIN;
	int8_t x148 = -1;
	volatile int32_t t32 = -118;

	t32 = (x145<=(x146-(x147/x148)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x149 = -3940LL;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = UINT64_MAX;
	static volatile int32_t x152 = -8152535;
	int32_t t33 = 208;

	t33 = (x149<=(x150-(x151/x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x155 = UINT8_MAX;
	volatile int8_t x156 = INT8_MIN;

	t34 = (x153<=(x154-(x155/x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x159 = -3416;
	int16_t x160 = INT16_MAX;
	volatile int32_t t35 = -444206;

	t35 = (x157<=(x158-(x159/x160)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x162 = 3026991840337LL;
	int8_t x163 = INT8_MIN;
	volatile uint32_t x164 = 6U;
	int32_t t36 = 125;

	t36 = (x161<=(x162-(x163/x164)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = INT16_MIN;
	uint64_t x167 = 0LLU;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t37 = -430311444;

	t37 = (x165<=(x166-(x167/x168)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x169 = UINT16_MAX;
	uint64_t x170 = UINT64_MAX;
	int16_t x171 = -41;
	int8_t x172 = INT8_MAX;
	volatile int32_t t38 = 40;

	t38 = (x169<=(x170-(x171/x172)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = 353;
	uint32_t x175 = 30128U;
	int32_t x176 = INT32_MIN;

	t39 = (x173<=(x174-(x175/x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x178 = INT16_MIN;
	volatile uint32_t x179 = 1240465205U;
	uint64_t x180 = 882646053124130LLU;
	int32_t t40 = -7;

	t40 = (x177<=(x178-(x179/x180)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x182 = 202U;
	int8_t x183 = -1;
	int32_t t41 = -2950460;

	t41 = (x181<=(x182-(x183/x184)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	static uint8_t x186 = UINT8_MAX;
	uint64_t x187 = 3677849LLU;
	int32_t x188 = 1875;
	volatile int32_t t42 = 15;

	t42 = (x185<=(x186-(x187/x188)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 10810U;
	uint64_t x190 = 8525LLU;
	int64_t x191 = -342251793844067391LL;
	int8_t x192 = INT8_MAX;

	t43 = (x189<=(x190-(x191/x192)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	uint8_t x195 = 48U;
	static int16_t x196 = -1;

	t44 = (x193<=(x194-(x195/x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x197 = INT32_MAX;
	int32_t x198 = 57657;
	uint64_t x199 = UINT64_MAX;
	static int64_t x200 = INT64_MIN;

	t45 = (x197<=(x198-(x199/x200)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = 262;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = 255030U;

	t46 = (x201<=(x202-(x203/x204)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = -1;
	static int8_t x211 = -1;
	static int32_t t47 = -1;

	t47 = (x209<=(x210-(x211/x212)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 7405166848774969LLU;
	static int16_t x216 = INT16_MIN;
	static volatile int32_t t48 = -265595;

	t48 = (x213<=(x214-(x215/x216)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x218 = 27LLU;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = INT8_MIN;

	t49 = (x217<=(x218-(x219/x220)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 2U;
	volatile int32_t x222 = -37993863;
	int8_t x223 = -7;
	volatile int64_t x224 = -1297907154463841LL;
	volatile int32_t t50 = 35;

	t50 = (x221<=(x222-(x223/x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x225 = -1;
	static uint32_t x226 = UINT32_MAX;
	int32_t x227 = -1;
	volatile int8_t x228 = -1;
	volatile int32_t t51 = -76;

	t51 = (x225<=(x226-(x227/x228)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -4898;
	volatile int32_t x230 = -492;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t52 = -51993;

	t52 = (x229<=(x230-(x231/x232)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x234 = 2052196LLU;
	uint8_t x235 = 1U;
	volatile int32_t x236 = INT32_MAX;

	t53 = (x233<=(x234-(x235/x236)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x237 = -1LL;
	volatile int8_t x238 = INT8_MIN;

	t54 = (x237<=(x238-(x239/x240)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x242 = 831832139434LLU;
	volatile uint64_t x243 = UINT64_MAX;
	int16_t x244 = -1;

	t55 = (x241<=(x242-(x243/x244)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = INT16_MIN;
	volatile int64_t x247 = -1LL;
	static volatile int32_t t56 = -380379484;

	t56 = (x245<=(x246-(x247/x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x250 = 9U;
	int8_t x251 = -1;
	volatile uint32_t x252 = 1276054842U;
	volatile int32_t t57 = -1441;

	t57 = (x249<=(x250-(x251/x252)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = 20U;
	volatile uint8_t x258 = 15U;
	int8_t x259 = INT8_MIN;
	int64_t x260 = -262150894LL;
	volatile int32_t t58 = -407;

	t58 = (x257<=(x258-(x259/x260)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = UINT16_MAX;
	int8_t x262 = -1;
	uint16_t x263 = 112U;
	int8_t x264 = INT8_MIN;

	t59 = (x261<=(x262-(x263/x264)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x267 = UINT8_MAX;
	static volatile uint16_t x268 = 1U;
	volatile int32_t t60 = -1257;

	t60 = (x265<=(x266-(x267/x268)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x269 = INT64_MIN;
	uint64_t x271 = 201434630523LLU;
	static int8_t x272 = -5;
	volatile int32_t t61 = 307009058;

	t61 = (x269<=(x270-(x271/x272)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	int32_t t62 = 256240;

	t62 = (x273<=(x274-(x275/x276)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x277 = INT16_MAX;
	int32_t x278 = -402712315;
	int16_t x279 = INT16_MAX;

	t63 = (x277<=(x278-(x279/x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = INT8_MAX;
	int64_t x282 = -1LL;
	static uint16_t x283 = 43U;
	static uint32_t x284 = 309718696U;
	volatile int32_t t64 = 57499;

	t64 = (x281<=(x282-(x283/x284)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x285 = INT64_MIN;
	static uint8_t x286 = UINT8_MAX;
	uint32_t x288 = 988U;
	static volatile int32_t t65 = 104915706;

	t65 = (x285<=(x286-(x287/x288)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t66 = -94967;

	t66 = (x289<=(x290-(x291/x292)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x293 = UINT32_MAX;
	uint8_t x295 = 65U;
	int8_t x296 = INT8_MIN;
	volatile int32_t t67 = -36327497;

	t67 = (x293<=(x294-(x295/x296)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = -1LL;
	int8_t x298 = INT8_MIN;
	static int32_t x299 = INT32_MAX;
	int32_t x300 = 8;
	int32_t t68 = -1481;

	t68 = (x297<=(x298-(x299/x300)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = INT64_MIN;
	static int8_t x302 = 11;
	int8_t x303 = INT8_MAX;
	static int64_t x304 = -1LL;
	volatile int32_t t69 = 983499;

	t69 = (x301<=(x302-(x303/x304)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = UINT64_MAX;
	int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MAX;
	int32_t t70 = 241139571;

	t70 = (x305<=(x306-(x307/x308)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x309 = 0U;
	volatile int16_t x310 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t71 = 1949160;

	t71 = (x309<=(x310-(x311/x312)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x314 = INT8_MAX;
	int64_t x315 = -215613LL;
	int32_t x316 = INT32_MIN;
	volatile int32_t t72 = 197148;

	t72 = (x313<=(x314-(x315/x316)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = -1;
	int32_t x318 = -1;
	uint8_t x319 = 5U;
	volatile uint64_t x320 = 1568349LLU;
	int32_t t73 = 1;

	t73 = (x317<=(x318-(x319/x320)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = UINT64_MAX;
	static int32_t x322 = -513262576;
	volatile int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MAX;
	int32_t t74 = 15503;

	t74 = (x321<=(x322-(x323/x324)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x325 = INT8_MIN;
	volatile uint64_t x326 = UINT64_MAX;
	static int32_t x327 = 3770726;
	static int8_t x328 = INT8_MIN;

	t75 = (x325<=(x326-(x327/x328)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x330 = 237892;
	int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	volatile int32_t t76 = -1;

	t76 = (x329<=(x330-(x331/x332)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = INT16_MAX;
	int8_t x334 = 59;
	static int8_t x335 = INT8_MAX;
	uint16_t x336 = 3U;
	volatile int32_t t77 = -9445;

	t77 = (x333<=(x334-(x335/x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x337 = UINT16_MAX;
	static volatile uint8_t x338 = UINT8_MAX;
	volatile int8_t x339 = -20;
	volatile uint8_t x340 = 7U;
	int32_t t78 = -300;

	t78 = (x337<=(x338-(x339/x340)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x342 = INT64_MIN;
	volatile int64_t x343 = INT64_MAX;
	static int8_t x344 = -1;

	t79 = (x341<=(x342-(x343/x344)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x346 = 487U;
	volatile int64_t x347 = -1LL;
	int64_t x348 = INT64_MAX;

	t80 = (x345<=(x346-(x347/x348)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x349 = 20222701413LLU;
	int8_t x350 = -1;
	int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MAX;
	int32_t t81 = -226724111;

	t81 = (x349<=(x350-(x351/x352)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = INT16_MIN;
	uint32_t x354 = 61U;
	static int8_t x355 = -1;
	int16_t x356 = INT16_MAX;
	int32_t t82 = -1;

	t82 = (x353<=(x354-(x355/x356)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x357 = INT32_MAX;
	volatile int64_t x358 = -65007LL;
	static int32_t x359 = INT32_MIN;
	int32_t x360 = 98750153;
	volatile int32_t t83 = -38;

	t83 = (x357<=(x358-(x359/x360)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = INT8_MIN;
	volatile uint8_t x362 = 11U;
	volatile int64_t x363 = 3654886717057LL;
	static volatile uint32_t x364 = 10261U;
	int32_t t84 = -1161033;

	t84 = (x361<=(x362-(x363/x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x365 = INT8_MIN;
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = UINT8_MAX;
	int32_t t85 = -659;

	t85 = (x365<=(x366-(x367/x368)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = 16;
	int16_t x371 = INT16_MIN;
	int64_t x372 = 41721314075621481LL;
	volatile int32_t t86 = -2092080;

	t86 = (x369<=(x370-(x371/x372)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x373 = UINT16_MAX;
	uint16_t x374 = 5U;
	int64_t x375 = -1LL;
	int32_t t87 = 5;

	t87 = (x373<=(x374-(x375/x376)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = -1;
	int8_t x379 = -1;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t88 = 381906;

	t88 = (x377<=(x378-(x379/x380)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = 16;
	volatile int64_t x384 = INT64_MAX;
	static int32_t t89 = -1641992;

	t89 = (x381<=(x382-(x383/x384)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x390 = 1;
	static int64_t x391 = 30LL;
	int64_t x392 = -841984LL;
	volatile int32_t t90 = -321976;

	t90 = (x389<=(x390-(x391/x392)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x393 = 102U;
	uint32_t x394 = 22556771U;
	volatile int32_t x395 = -1;
	volatile int32_t t91 = 2719559;

	t91 = (x393<=(x394-(x395/x396)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x397 = 3728U;
	volatile int64_t x398 = INT64_MAX;
	volatile int64_t x400 = -731058370117LL;
	int32_t t92 = -2;

	t92 = (x397<=(x398-(x399/x400)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MIN;
	volatile uint64_t x403 = 48LLU;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t93 = -452171;

	t93 = (x401<=(x402-(x403/x404)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = 3;
	static uint64_t x406 = 15427463772187LLU;
	volatile int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;
	volatile int32_t t94 = -6;

	t94 = (x405<=(x406-(x407/x408)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = -1;
	int16_t x411 = INT16_MAX;
	uint8_t x412 = 25U;
	int32_t t95 = 3;

	t95 = (x409<=(x410-(x411/x412)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = 5081LLU;
	int16_t x414 = -609;
	uint64_t x415 = 6578933920262488631LLU;
	uint32_t x416 = UINT32_MAX;
	static int32_t t96 = 1039153015;

	t96 = (x413<=(x414-(x415/x416)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = INT16_MIN;
	int64_t x418 = 7LL;
	int64_t x419 = INT64_MIN;
	int16_t x420 = INT16_MIN;
	volatile int32_t t97 = -3091;

	t97 = (x417<=(x418-(x419/x420)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x425 = 11665333LL;
	static volatile int64_t x426 = INT64_MIN;
	uint32_t x427 = 128443052U;
	int16_t x428 = INT16_MIN;
	int32_t t98 = -5;

	t98 = (x425<=(x426-(x427/x428)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x429 = -6228393192991LL;
	uint8_t x430 = 11U;
	int32_t x431 = -1;
	int8_t x432 = 1;

	t99 = (x429<=(x430-(x431/x432)));

	if (t99 != 1) { NG(); } else { ; }
	
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

