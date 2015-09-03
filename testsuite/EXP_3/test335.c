#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = INT8_MIN;
volatile int16_t x21 = 3;
int32_t t4 = 102;
uint16_t x26 = 919U;
int8_t x29 = -1;
int32_t t8 = 48;
uint16_t x41 = 675U;
int32_t t9 = 915;
static volatile int8_t x47 = -6;
volatile int16_t x55 = -1;
int16_t x59 = 725;
volatile int32_t t15 = -43582;
uint16_t x76 = 3U;
int32_t t17 = -1;
int32_t t18 = 20;
int16_t x89 = -1;
int32_t x90 = INT32_MIN;
volatile int32_t t20 = 1850561;
uint64_t x94 = 2621760987803942LLU;
uint8_t x96 = UINT8_MAX;
int8_t x98 = -1;
uint8_t x100 = UINT8_MAX;
static int16_t x104 = -4;
int8_t x107 = 62;
uint16_t x112 = UINT16_MAX;
int16_t x120 = 90;
uint64_t x126 = UINT64_MAX;
int16_t x127 = -11;
static volatile uint32_t x129 = UINT32_MAX;
uint32_t x131 = 51U;
volatile int32_t t30 = -8;
int16_t x135 = 5977;
int64_t x138 = -1LL;
uint32_t x143 = 26U;
volatile int32_t t33 = 0;
int32_t t34 = -7965730;
int8_t x167 = -1;
uint16_t x171 = 2U;
volatile int8_t x173 = INT8_MIN;
uint32_t x176 = UINT32_MAX;
int32_t t41 = 0;
int16_t x184 = -13718;
uint64_t x185 = 185LLU;
static int64_t x187 = -16108580666255707LL;
static volatile int16_t x201 = INT16_MIN;
int32_t x209 = -1;
static int8_t x211 = -1;
int32_t x223 = INT32_MAX;
uint32_t x224 = UINT32_MAX;
static volatile int16_t x226 = INT16_MAX;
int16_t x237 = -245;
int32_t t55 = -362;
static uint16_t x246 = UINT16_MAX;
int32_t t56 = 1063215715;
uint8_t x251 = 7U;
static volatile uint64_t x254 = 54210586307042LLU;
uint32_t x255 = 106U;
int16_t x263 = INT16_MIN;
uint64_t x271 = UINT64_MAX;
volatile int32_t t62 = 1;
volatile int8_t x281 = 9;
uint32_t x282 = UINT32_MAX;
int32_t t64 = -23;
static volatile int16_t x288 = -1;
volatile int32_t t65 = 617338;
volatile uint32_t x290 = UINT32_MAX;
int8_t x293 = 3;
int64_t x294 = INT64_MAX;
uint8_t x299 = 47U;
volatile int32_t t68 = -231153;
int64_t x302 = -1942540783757LL;
int32_t x310 = 3310;
static volatile int64_t x311 = -1LL;
static volatile int32_t x313 = INT32_MAX;
int64_t x315 = INT64_MIN;
volatile int64_t x321 = INT64_MAX;
uint32_t x322 = UINT32_MAX;
int16_t x323 = -1;
volatile int32_t t74 = -2786;
int32_t x333 = INT32_MAX;
int32_t x336 = INT32_MIN;
volatile int32_t t77 = -93418066;
int32_t x340 = -1;
int8_t x353 = -1;
int32_t t82 = -122;
volatile int32_t t83 = 572;
static int8_t x365 = -1;
volatile int8_t x366 = -6;
volatile int64_t x372 = -12518658205961LL;
volatile int32_t t85 = -480;
int32_t x376 = -1;
uint8_t x377 = UINT8_MAX;
uint16_t x378 = 11351U;
volatile int32_t t87 = -606069647;
int32_t x396 = 1163;
int32_t t90 = -171764570;
uint8_t x397 = 60U;
volatile int64_t x399 = -51078596817517LL;
int32_t t91 = 11;
volatile uint64_t x405 = 47907919557219LLU;
static int32_t t93 = -1319;
volatile int64_t x417 = 25LL;
int32_t x418 = INT32_MIN;
int64_t x422 = -7752491LL;
static int64_t x427 = -212586028850743121LL;
volatile int32_t t97 = 173158;
int64_t x431 = INT64_MIN;
static int32_t t98 = 701622;
int16_t x434 = -87;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x2 = INT8_MAX;
	int64_t x3 = -16864995439474LL;
	uint64_t x4 = 13097384507342LLU;
	int32_t t0 = -3;

	t0 = ((x1^x2)<=(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	uint32_t x7 = 212594U;
	static int16_t x8 = INT16_MAX;
	int32_t t1 = 1;

	t1 = ((x5^x6)<=(x7-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 418674886094010296LLU;
	int32_t x10 = 533392;
	static int64_t x12 = INT64_MIN;
	static volatile int32_t t2 = 1;

	t2 = ((x9^x10)<=(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -239;
	static uint8_t x14 = 36U;
	int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 6;

	t3 = ((x13^x14)<=(x15-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x22 = 71;
	volatile int16_t x23 = INT16_MIN;
	volatile int8_t x24 = INT8_MIN;

	t4 = ((x21^x22)<=(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = -1875246;
	int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t5 = 3302;

	t5 = ((x25^x26)<=(x27-x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = -4278268412LL;
	int16_t x31 = INT16_MIN;
	int64_t x32 = -164LL;
	static int32_t t6 = -1012;

	t6 = ((x29^x30)<=(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 8550124978851039LLU;
	int32_t x34 = INT32_MIN;
	static volatile int8_t x35 = INT8_MIN;
	volatile int8_t x36 = -1;
	int32_t t7 = 210;

	t7 = ((x33^x34)<=(x35-x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = 44U;
	uint16_t x38 = 175U;
	volatile int64_t x39 = 10789943637376LL;
	uint8_t x40 = 49U;

	t8 = ((x37^x38)<=(x39-x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x42 = INT16_MAX;
	int64_t x43 = -1LL;
	volatile uint8_t x44 = UINT8_MAX;

	t9 = ((x41^x42)<=(x43-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = 252177099;
	int64_t x46 = 7724328356694292LL;
	int16_t x48 = INT16_MAX;
	static volatile int32_t t10 = -6008;

	t10 = ((x45^x46)<=(x47-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 12U;
	int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MAX;
	int16_t x52 = INT16_MAX;
	int32_t t11 = -53029892;

	t11 = ((x49^x50)<=(x51-x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -11203;
	uint8_t x54 = UINT8_MAX;
	int64_t x56 = 21355352LL;
	int32_t t12 = 8288;

	t12 = ((x53^x54)<=(x55-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 196U;
	int32_t x58 = 182296492;
	static uint8_t x60 = 0U;
	volatile int32_t t13 = -119;

	t13 = ((x57^x58)<=(x59-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = -1;
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MIN;
	int64_t x64 = 1409172645862237LL;
	int32_t t14 = -1683;

	t14 = ((x61^x62)<=(x63-x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MAX;
	static int64_t x66 = 1LL;
	uint16_t x67 = 28615U;
	uint64_t x68 = 18745LLU;

	t15 = ((x65^x66)<=(x67-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = INT32_MIN;
	int64_t x75 = -127LL;
	volatile int32_t t16 = -1181;

	t16 = ((x73^x74)<=(x75-x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	int64_t x78 = -179009911379LL;
	static int8_t x79 = INT8_MIN;
	int8_t x80 = -1;

	t17 = ((x77^x78)<=(x79-x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = 0;
	int64_t x82 = -1LL;
	uint64_t x83 = 133386541379410622LLU;
	int64_t x84 = -1LL;

	t18 = ((x81^x82)<=(x83-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x85 = 0LL;
	int16_t x86 = -1;
	int64_t x87 = -6176862022118LL;
	int64_t x88 = INT64_MIN;
	static volatile int32_t t19 = -482;

	t19 = ((x85^x86)<=(x87-x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = INT16_MIN;

	t20 = ((x89^x90)<=(x91-x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x95 = UINT32_MAX;
	int32_t t21 = -1036;

	t21 = ((x93^x94)<=(x95-x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 2801U;
	volatile uint16_t x99 = 7U;
	volatile int32_t t22 = -913451;

	t22 = ((x97^x98)<=(x99-x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = 0;
	int64_t x102 = INT64_MAX;
	volatile uint16_t x103 = UINT16_MAX;
	static volatile int32_t t23 = -32428;

	t23 = ((x101^x102)<=(x103-x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	volatile int8_t x106 = 0;
	int8_t x108 = 8;
	volatile int32_t t24 = -334;

	t24 = ((x105^x106)<=(x107-x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x110 = INT64_MAX;
	int8_t x111 = -5;
	volatile int32_t t25 = 13588;

	t25 = ((x109^x110)<=(x111-x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = 1;
	int8_t x114 = -1;
	int16_t x115 = -1;
	volatile int16_t x116 = -2215;
	volatile int32_t t26 = 2884574;

	t26 = ((x113^x114)<=(x115-x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	static uint8_t x118 = 1U;
	static volatile int64_t x119 = INT64_MAX;
	volatile int32_t t27 = -74;

	t27 = ((x117^x118)<=(x119-x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -1;
	int64_t x122 = 935816LL;
	uint8_t x123 = 1U;
	int64_t x124 = 27521879915829486LL;
	volatile int32_t t28 = 56641;

	t28 = ((x121^x122)<=(x123-x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = UINT16_MAX;
	int64_t x128 = INT64_MIN;
	static int32_t t29 = -31243;

	t29 = ((x125^x126)<=(x127-x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x130 = INT16_MIN;
	int64_t x132 = -1LL;

	t30 = ((x129^x130)<=(x131-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = 6;
	static int8_t x134 = -1;
	int8_t x136 = INT8_MIN;
	volatile int32_t t31 = 333934194;

	t31 = ((x133^x134)<=(x135-x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -444;
	int64_t x139 = INT64_MIN;
	static int32_t x140 = -681578725;
	int32_t t32 = 1;

	t32 = ((x137^x138)<=(x139-x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x141 = -1;
	int32_t x142 = 9;
	int8_t x144 = INT8_MIN;

	t33 = ((x141^x142)<=(x143-x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = INT16_MAX;
	volatile uint64_t x146 = 53710653811LLU;
	uint64_t x147 = 0LLU;
	static volatile int8_t x148 = INT8_MAX;

	t34 = ((x145^x146)<=(x147-x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	int16_t x150 = INT16_MAX;
	uint32_t x151 = 1911028009U;
	uint32_t x152 = UINT32_MAX;
	int32_t t35 = 70664862;

	t35 = ((x149^x150)<=(x151-x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x157 = -8486LL;
	volatile int16_t x158 = -1;
	uint64_t x159 = 214294LLU;
	int32_t x160 = INT32_MIN;
	static int32_t t36 = -1094;

	t36 = ((x157^x158)<=(x159-x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	static int32_t x162 = INT32_MIN;
	uint64_t x163 = UINT64_MAX;
	int16_t x164 = INT16_MIN;
	volatile int32_t t37 = 31375092;

	t37 = ((x161^x162)<=(x163-x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x165 = 0U;
	int32_t x166 = INT32_MIN;
	int32_t x168 = -1;
	volatile int32_t t38 = -225;

	t38 = ((x165^x166)<=(x167-x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = -28077748416LL;
	int8_t x172 = 16;
	int32_t t39 = 1;

	t39 = ((x169^x170)<=(x171-x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x174 = 251136064U;
	uint16_t x175 = UINT16_MAX;
	int32_t t40 = 3514417;

	t40 = ((x173^x174)<=(x175-x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	static int16_t x178 = INT16_MAX;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;

	t41 = ((x177^x178)<=(x179-x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	static int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	volatile int32_t t42 = -67258;

	t42 = ((x181^x182)<=(x183-x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x186 = UINT32_MAX;
	static uint32_t x188 = 100679U;
	volatile int32_t t43 = 4;

	t43 = ((x185^x186)<=(x187-x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x189 = UINT32_MAX;
	static int16_t x190 = INT16_MIN;
	int64_t x191 = INT64_MAX;
	static uint8_t x192 = 96U;
	volatile int32_t t44 = 2;

	t44 = ((x189^x190)<=(x191-x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -1;
	static int64_t x194 = INT64_MIN;
	int32_t x195 = -1;
	int8_t x196 = -1;
	int32_t t45 = 56662845;

	t45 = ((x193^x194)<=(x195-x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MAX;
	static uint16_t x198 = UINT16_MAX;
	static volatile uint32_t x199 = UINT32_MAX;
	int64_t x200 = INT64_MAX;
	static volatile int32_t t46 = -7566;

	t46 = ((x197^x198)<=(x199-x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x202 = -4;
	uint32_t x203 = 756213029U;
	int8_t x204 = 0;
	volatile int32_t t47 = -3097037;

	t47 = ((x201^x202)<=(x203-x204));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x210 = INT16_MIN;
	volatile int8_t x212 = INT8_MIN;
	static volatile int32_t t48 = -1;

	t48 = ((x209^x210)<=(x211-x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = INT32_MIN;
	uint16_t x214 = UINT16_MAX;
	static uint64_t x215 = 20194933116035LLU;
	volatile uint16_t x216 = 3018U;
	int32_t t49 = 734840827;

	t49 = ((x213^x214)<=(x215-x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = -1;
	static int8_t x222 = INT8_MIN;
	volatile int32_t t50 = 1;

	t50 = ((x221^x222)<=(x223-x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x225 = 224;
	int16_t x227 = INT16_MAX;
	static int32_t x228 = 91106601;
	volatile int32_t t51 = -90542440;

	t51 = ((x225^x226)<=(x227-x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x229 = INT64_MAX;
	volatile int32_t x230 = INT32_MAX;
	int64_t x231 = -218333644LL;
	volatile int16_t x232 = INT16_MAX;
	static volatile int32_t t52 = -30;

	t52 = ((x229^x230)<=(x231-x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 46U;
	volatile int64_t x234 = INT64_MIN;
	static int16_t x235 = -14;
	static uint8_t x236 = 1U;
	volatile int32_t t53 = 3240878;

	t53 = ((x233^x234)<=(x235-x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x238 = 2U;
	static int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MAX;
	int32_t t54 = 30033546;

	t54 = ((x237^x238)<=(x239-x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x241 = -25LL;
	int16_t x242 = INT16_MIN;
	volatile int32_t x243 = INT32_MAX;
	uint8_t x244 = 3U;

	t55 = ((x241^x242)<=(x243-x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = 65207939LLU;
	uint8_t x247 = UINT8_MAX;
	volatile int64_t x248 = 123LL;

	t56 = ((x245^x246)<=(x247-x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x249 = 0U;
	int16_t x250 = -1;
	int8_t x252 = -1;
	volatile int32_t t57 = -78;

	t57 = ((x249^x250)<=(x251-x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = INT8_MIN;
	int16_t x256 = INT16_MAX;
	volatile int32_t t58 = 136;

	t58 = ((x253^x254)<=(x255-x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x257 = -1LL;
	uint8_t x258 = 6U;
	int8_t x259 = 2;
	uint16_t x260 = UINT16_MAX;
	static int32_t t59 = -3894;

	t59 = ((x257^x258)<=(x259-x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = 28758U;
	static volatile int64_t x264 = -1LL;
	static volatile int32_t t60 = -9458;

	t60 = ((x261^x262)<=(x263-x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = INT16_MAX;
	static uint64_t x266 = 46LLU;
	uint32_t x267 = 469993529U;
	static uint32_t x268 = 9838U;
	int32_t t61 = -1401867;

	t61 = ((x265^x266)<=(x267-x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 9LLU;
	int64_t x270 = -1LL;
	static volatile int8_t x272 = INT8_MIN;

	t62 = ((x269^x270)<=(x271-x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x277 = UINT16_MAX;
	static int32_t x278 = -1;
	int16_t x279 = -1;
	int16_t x280 = INT16_MAX;
	int32_t t63 = 1008479;

	t63 = ((x277^x278)<=(x279-x280));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x283 = INT16_MAX;
	int64_t x284 = -1LL;

	t64 = ((x281^x282)<=(x283-x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MIN;

	t65 = ((x285^x286)<=(x287-x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x289 = INT8_MIN;
	uint16_t x291 = 21U;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t66 = 0;

	t66 = ((x289^x290)<=(x291-x292));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x295 = 4665;
	int8_t x296 = -5;
	int32_t t67 = 355801188;

	t67 = ((x293^x294)<=(x295-x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x297 = 13U;
	int32_t x298 = 54;
	static int64_t x300 = INT64_MAX;

	t68 = ((x297^x298)<=(x299-x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x301 = 70294LLU;
	int32_t x303 = INT32_MAX;
	uint32_t x304 = 1222U;
	int32_t t69 = 756152644;

	t69 = ((x301^x302)<=(x303-x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MIN;
	uint32_t x306 = 7403993U;
	int16_t x307 = INT16_MAX;
	volatile int32_t x308 = -1;
	int32_t t70 = -384838589;

	t70 = ((x305^x306)<=(x307-x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x309 = UINT32_MAX;
	static int64_t x312 = INT64_MIN;
	volatile int32_t t71 = -88196906;

	t71 = ((x309^x310)<=(x311-x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x314 = INT8_MIN;
	int16_t x316 = -1;
	static volatile int32_t t72 = 6260;

	t72 = ((x313^x314)<=(x315-x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = INT32_MAX;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = 5312;
	int32_t x320 = -1;
	static int32_t t73 = 0;

	t73 = ((x317^x318)<=(x319-x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x324 = 396LL;

	t74 = ((x321^x322)<=(x323-x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = -1;
	static int64_t x326 = INT64_MAX;
	static int8_t x327 = INT8_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t75 = 1022206;

	t75 = ((x325^x326)<=(x327-x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x329 = INT64_MIN;
	int64_t x330 = -1LL;
	static uint64_t x331 = 61356LLU;
	int32_t x332 = INT32_MAX;
	volatile int32_t t76 = -461;

	t76 = ((x329^x330)<=(x331-x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x334 = -1;
	uint64_t x335 = 5LLU;

	t77 = ((x333^x334)<=(x335-x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int32_t x339 = -1;
	volatile int32_t t78 = 1;

	t78 = ((x337^x338)<=(x339-x340));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MAX;
	int64_t x347 = -173072LL;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t79 = -57069;

	t79 = ((x345^x346)<=(x347-x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MAX;
	int64_t x350 = -19358LL;
	uint8_t x351 = 82U;
	static uint32_t x352 = 884404113U;
	volatile int32_t t80 = -6835659;

	t80 = ((x349^x350)<=(x351-x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x354 = INT16_MIN;
	int16_t x355 = 300;
	int64_t x356 = INT64_MAX;
	volatile int32_t t81 = 227;

	t81 = ((x353^x354)<=(x355-x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = 2U;
	int64_t x358 = INT64_MIN;
	static int32_t x359 = 9071822;
	int16_t x360 = INT16_MIN;

	t82 = ((x357^x358)<=(x359-x360));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x361 = UINT16_MAX;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 914277922LLU;
	static volatile uint64_t x364 = 97LLU;

	t83 = ((x361^x362)<=(x363-x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x367 = INT64_MAX;
	volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t84 = -37363771;

	t84 = ((x365^x366)<=(x367-x368));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = INT64_MIN;
	static volatile int8_t x370 = INT8_MIN;
	int16_t x371 = INT16_MIN;

	t85 = ((x369^x370)<=(x371-x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x373 = INT64_MAX;
	uint32_t x374 = 94537200U;
	static volatile uint32_t x375 = 229992400U;
	int32_t t86 = -39506;

	t86 = ((x373^x374)<=(x375-x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x379 = -1;
	int64_t x380 = INT64_MAX;

	t87 = ((x377^x378)<=(x379-x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = -1;
	uint8_t x386 = 24U;
	int32_t x387 = INT32_MIN;
	int32_t x388 = -73639;
	int32_t t88 = 0;

	t88 = ((x385^x386)<=(x387-x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x389 = INT32_MIN;
	int32_t x390 = -412633;
	int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;
	volatile int32_t t89 = -184;

	t89 = ((x389^x390)<=(x391-x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x393 = -277;
	static volatile uint8_t x394 = 60U;
	int64_t x395 = -1LL;

	t90 = ((x393^x394)<=(x395-x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x398 = UINT8_MAX;
	static int8_t x400 = INT8_MAX;

	t91 = ((x397^x398)<=(x399-x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x406 = INT64_MIN;
	volatile int16_t x407 = INT16_MIN;
	int16_t x408 = 3;
	volatile int32_t t92 = -159959209;

	t92 = ((x405^x406)<=(x407-x408));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x409 = 52289174LLU;
	int8_t x410 = INT8_MIN;
	volatile int16_t x411 = INT16_MIN;
	uint8_t x412 = UINT8_MAX;

	t93 = ((x409^x410)<=(x411-x412));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = 29174598U;
	uint16_t x415 = 959U;
	int32_t x416 = INT32_MAX;
	volatile int32_t t94 = 1;

	t94 = ((x413^x414)<=(x415-x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MIN;
	int32_t t95 = -331094;

	t95 = ((x417^x418)<=(x419-x420));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x421 = INT64_MIN;
	static uint32_t x423 = 4U;
	static int8_t x424 = 3;
	volatile int32_t t96 = -3708344;

	t96 = ((x421^x422)<=(x423-x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x425 = 0;
	int64_t x426 = INT64_MAX;
	uint8_t x428 = 0U;

	t97 = ((x425^x426)<=(x427-x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = -1LL;
	static int64_t x430 = INT64_MAX;
	int32_t x432 = -1;

	t98 = ((x429^x430)<=(x431-x432));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x433 = -1;
	volatile int64_t x435 = INT64_MAX;
	static uint8_t x436 = 16U;
	volatile int32_t t99 = 0;

	t99 = ((x433^x434)<=(x435-x436));

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

