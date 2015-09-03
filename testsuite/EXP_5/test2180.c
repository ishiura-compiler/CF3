#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x11 = -28LL;
int64_t x21 = INT64_MIN;
int16_t x22 = INT16_MIN;
uint16_t x23 = 6912U;
static volatile uint8_t x26 = 6U;
static volatile int64_t x27 = -1LL;
static volatile int32_t t6 = 1570;
int32_t x33 = 57;
int32_t x34 = INT32_MIN;
int64_t x42 = INT64_MAX;
int8_t x45 = INT8_MAX;
int32_t t14 = -5489712;
int64_t x63 = INT64_MAX;
int32_t t15 = 2;
int32_t x65 = -1;
volatile int32_t x67 = 123;
int16_t x70 = INT16_MIN;
volatile int8_t x83 = 0;
static int64_t x84 = -1LL;
static volatile int32_t t20 = -556589910;
uint32_t x90 = 8530387U;
volatile uint64_t x91 = 1895162LLU;
volatile int32_t t23 = 810311;
int16_t x103 = -1;
int32_t t25 = 0;
int32_t x109 = -1;
uint16_t x111 = 23U;
int64_t x113 = 124702LL;
volatile int32_t x116 = INT32_MIN;
uint8_t x122 = 92U;
volatile int32_t t32 = 175243342;
volatile int32_t t35 = 3;
uint8_t x152 = 16U;
volatile uint16_t x153 = 198U;
static int8_t x157 = INT8_MAX;
uint16_t x166 = 1473U;
uint16_t x173 = 60U;
int64_t x175 = INT64_MAX;
int8_t x181 = INT8_MIN;
volatile int32_t x184 = INT32_MIN;
volatile uint64_t x186 = UINT64_MAX;
volatile int32_t x191 = 18859401;
uint64_t x192 = 67560450421129LLU;
int32_t t47 = 2911004;
int64_t x195 = INT64_MIN;
static int32_t t48 = -1;
int64_t x197 = INT64_MIN;
static volatile int32_t t49 = 1041;
uint32_t x208 = UINT32_MAX;
uint64_t x210 = 765956891LLU;
static uint64_t x217 = UINT64_MAX;
static int64_t x218 = 843072LL;
static volatile int32_t t55 = 12;
uint16_t x228 = 3U;
static int8_t x233 = 1;
volatile int8_t x244 = INT8_MAX;
int32_t t60 = -2;
static volatile int16_t x246 = INT16_MAX;
int8_t x249 = -1;
int32_t x252 = 237000399;
int32_t t62 = 30451;
static int64_t x257 = -14LL;
static int8_t x258 = INT8_MIN;
volatile int32_t t64 = 0;
int8_t x266 = 6;
int16_t x273 = -1;
uint8_t x278 = 15U;
static volatile int32_t t69 = 19859283;
volatile int32_t t70 = 8703;
int32_t x285 = INT32_MAX;
int8_t x286 = INT8_MAX;
int64_t x302 = -1LL;
volatile int64_t x307 = -177799667LL;
static int32_t t76 = 219;
static int32_t x309 = INT32_MIN;
uint32_t x316 = 136549U;
volatile int32_t t78 = 1689040;
volatile int32_t x317 = INT32_MIN;
int8_t x323 = INT8_MAX;
static int32_t t82 = 3;
int16_t x340 = INT16_MIN;
static uint16_t x343 = UINT16_MAX;
uint32_t x345 = 3223290U;
int16_t x351 = INT16_MIN;
static int16_t x355 = INT16_MIN;
uint16_t x357 = 0U;
volatile int32_t x361 = -1;
volatile int32_t t92 = 410635607;
volatile int32_t t95 = -17;
int32_t x387 = -11381274;
volatile uint32_t x388 = 14982815U;
int32_t t96 = -2691486;
int16_t x390 = -3;
uint8_t x391 = 18U;
volatile int64_t x393 = INT64_MAX;
int32_t t98 = -255;
uint8_t x398 = 0U;
volatile int32_t x399 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int32_t x2 = -1;
	int16_t x3 = INT16_MAX;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -31126357;

	t0 = (x1<((x2^x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 47223456370306LL;
	static int16_t x6 = INT16_MAX;
	int8_t x7 = INT8_MIN;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 494425954;

	t1 = (x5<((x6^x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 2113879848215LLU;
	static volatile int32_t x10 = -15104028;
	int16_t x12 = -1;
	int32_t t2 = 58;

	t2 = (x9<((x10^x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x14 = 15292019284332LL;
	int16_t x15 = -4;
	int32_t x16 = -1;
	int32_t t3 = 586137692;

	t3 = (x13<((x14^x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static uint16_t x18 = 99U;
	int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -90933;

	t4 = (x17<((x18^x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x24 = UINT32_MAX;
	static int32_t t5 = 41970505;

	t5 = (x21<((x22^x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 8U;
	static uint64_t x28 = 49LLU;

	t6 = (x25<((x26^x27)|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x30 = 20941U;
	volatile uint16_t x31 = UINT16_MAX;
	int32_t x32 = 3778346;
	int32_t t7 = 16408;

	t7 = (x29<((x30^x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 106338516;

	t8 = (x33<((x34^x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int8_t x38 = 1;
	uint16_t x39 = 391U;
	static uint64_t x40 = 3LLU;
	int32_t t9 = 1930;

	t9 = (x37<((x38^x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	static volatile int64_t x43 = -80701835657LL;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = -1457595;

	t10 = (x41<((x42^x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 124484U;
	static int8_t x47 = INT8_MIN;
	uint64_t x48 = 3031206976050497LLU;
	volatile int32_t t11 = -1465;

	t11 = (x45<((x46^x47)|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = -1;
	volatile uint16_t x50 = UINT16_MAX;
	volatile int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -91027;

	t12 = (x49<((x50^x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 125U;
	volatile uint16_t x54 = 1862U;
	int16_t x55 = -1;
	int8_t x56 = -1;
	static int32_t t13 = -21440;

	t13 = (x53<((x54^x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 46U;
	int16_t x58 = INT16_MIN;
	static volatile int16_t x59 = INT16_MIN;
	int16_t x60 = -69;

	t14 = (x57<((x58^x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	int16_t x64 = INT16_MIN;

	t15 = (x61<((x62^x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x66 = 56247817261778LLU;
	uint64_t x68 = 3995762134LLU;
	static int32_t t16 = 15;

	t16 = (x65<((x66^x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	int32_t x71 = -1;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = 0;

	t17 = (x69<((x70^x71)|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	int64_t x74 = INT64_MIN;
	int16_t x75 = -65;
	static volatile int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -1046;

	t18 = (x73<((x74^x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	static volatile int32_t x78 = -11497;
	int16_t x79 = INT16_MIN;
	static uint16_t x80 = 14U;
	int32_t t19 = 32;

	t19 = (x77<((x78^x79)|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 6U;
	int8_t x82 = -1;

	t20 = (x81<((x82^x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -17863;
	uint16_t x86 = UINT16_MAX;
	volatile int16_t x87 = -8;
	static volatile uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = -1779418;

	t21 = (x85<((x86^x87)|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 3U;
	int8_t x92 = INT8_MIN;
	int32_t t22 = -1518878;

	t22 = (x89<((x90^x91)|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static int16_t x94 = -46;
	volatile int64_t x95 = INT64_MAX;
	volatile int16_t x96 = -1;

	t23 = (x93<((x94^x95)|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	uint32_t x98 = 456881U;
	int32_t x99 = INT32_MAX;
	uint64_t x100 = 10876581556862LLU;
	volatile int32_t t24 = 0;

	t24 = (x97<((x98^x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int8_t x102 = -1;
	int16_t x104 = -1;

	t25 = (x101<((x102^x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -6;
	uint8_t x106 = UINT8_MAX;
	uint16_t x107 = 3U;
	uint64_t x108 = 1244862331LLU;
	volatile int32_t t26 = -17580810;

	t26 = (x105<((x106^x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x110 = -115;
	volatile uint8_t x112 = 5U;
	int32_t t27 = 183009;

	t27 = (x109<((x110^x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MAX;
	volatile uint64_t x115 = 554121263545404LLU;
	volatile int32_t t28 = -2;

	t28 = (x113<((x114^x115)|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	static uint16_t x118 = 1U;
	uint32_t x119 = 15U;
	int32_t x120 = 921;
	volatile int32_t t29 = 1011003;

	t29 = (x117<((x118^x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = 2LL;
	int32_t x123 = INT32_MIN;
	volatile uint32_t x124 = 2464003U;
	volatile int32_t t30 = 128;

	t30 = (x121<((x122^x123)|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 5U;
	volatile uint32_t x126 = 6446U;
	volatile uint64_t x127 = 5574LLU;
	volatile int16_t x128 = INT16_MAX;
	int32_t t31 = -78;

	t31 = (x125<((x126^x127)|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	uint16_t x130 = 29U;
	int16_t x131 = INT16_MIN;
	uint64_t x132 = UINT64_MAX;

	t32 = (x129<((x130^x131)|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	static uint8_t x134 = UINT8_MAX;
	int16_t x135 = INT16_MAX;
	int32_t x136 = 1;
	volatile int32_t t33 = -44692415;

	t33 = (x133<((x134^x135)|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = -1189;
	uint64_t x139 = 4045080973LLU;
	uint8_t x140 = 28U;
	volatile int32_t t34 = -1906984;

	t34 = (x137<((x138^x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint32_t x142 = 0U;
	uint8_t x143 = UINT8_MAX;
	uint16_t x144 = UINT16_MAX;

	t35 = (x141<((x142^x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint16_t x146 = UINT16_MAX;
	volatile uint8_t x147 = 40U;
	int8_t x148 = INT8_MAX;
	volatile int32_t t36 = 885939;

	t36 = (x145<((x146^x147)|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	volatile uint16_t x150 = UINT16_MAX;
	static int16_t x151 = -3222;
	volatile int32_t t37 = -281;

	t37 = (x149<((x150^x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MIN;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t38 = -3959820;

	t38 = (x153<((x154^x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = INT16_MIN;
	volatile uint16_t x159 = UINT16_MAX;
	uint8_t x160 = 93U;
	int32_t t39 = -638255;

	t39 = (x157<((x158^x159)|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MAX;
	uint16_t x162 = UINT16_MAX;
	uint32_t x163 = 464379303U;
	static volatile uint64_t x164 = 1040712899LLU;
	volatile int32_t t40 = 38;

	t40 = (x161<((x162^x163)|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 16;
	uint32_t x167 = 503U;
	int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = -460078881;

	t41 = (x165<((x166^x167)|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	static int8_t x170 = -1;
	static volatile uint8_t x171 = 47U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -16;

	t42 = (x169<((x170^x171)|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = 51471LL;
	static int16_t x176 = 2891;
	volatile int32_t t43 = 165856;

	t43 = (x173<((x174^x175)|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 5687U;
	uint8_t x178 = 3U;
	volatile int32_t x179 = -1;
	static int64_t x180 = INT64_MAX;
	int32_t t44 = -757;

	t44 = (x177<((x178^x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x182 = 44117U;
	int8_t x183 = -1;
	volatile int32_t t45 = 179503;

	t45 = (x181<((x182^x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	uint32_t x187 = UINT32_MAX;
	int64_t x188 = INT64_MAX;
	int32_t t46 = -10;

	t46 = (x185<((x186^x187)|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = -9;

	t47 = (x189<((x190^x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	static uint32_t x196 = 597288762U;

	t48 = (x193<((x194^x195)|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 35U;
	int16_t x199 = INT16_MIN;
	uint16_t x200 = UINT16_MAX;

	t49 = (x197<((x198^x199)|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = 178656;

	t50 = (x201<((x202^x203)|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = -1;
	static volatile uint8_t x206 = 67U;
	volatile int64_t x207 = 809652067602LL;
	int32_t t51 = -3876;

	t51 = (x205<((x206^x207)|x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	uint64_t x211 = 1267609538LLU;
	volatile int64_t x212 = 14643848276LL;
	volatile int32_t t52 = 247935;

	t52 = (x209<((x210^x211)|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x213 = INT64_MIN;
	static uint8_t x214 = UINT8_MAX;
	static int16_t x215 = -1;
	uint8_t x216 = 5U;
	volatile int32_t t53 = 2669258;

	t53 = (x213<((x214^x215)|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x219 = 15162U;
	uint32_t x220 = UINT32_MAX;
	static int32_t t54 = -261440878;

	t54 = (x217<((x218^x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	uint16_t x222 = 3U;
	int32_t x223 = -1;
	uint8_t x224 = 12U;

	t55 = (x221<((x222^x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 7523205294699528637LLU;
	static volatile int8_t x226 = INT8_MAX;
	uint16_t x227 = 23856U;
	int32_t t56 = -1051149735;

	t56 = (x225<((x226^x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int16_t x230 = INT16_MIN;
	volatile int64_t x231 = -13LL;
	static int8_t x232 = -61;
	static volatile int32_t t57 = -83805668;

	t57 = (x229<((x230^x231)|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x234 = INT32_MAX;
	uint8_t x235 = 11U;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t58 = 92;

	t58 = (x233<((x234^x235)|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MAX;
	static volatile int32_t x238 = -1;
	int64_t x239 = -1LL;
	static int16_t x240 = INT16_MIN;
	int32_t t59 = -356;

	t59 = (x237<((x238^x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	volatile int8_t x242 = INT8_MIN;
	static volatile int64_t x243 = -1LL;

	t60 = (x241<((x242^x243)|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 35U;
	static uint16_t x247 = 13380U;
	uint32_t x248 = 85U;
	volatile int32_t t61 = 82;

	t61 = (x245<((x246^x247)|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x250 = 24840U;
	int8_t x251 = -1;

	t62 = (x249<((x250^x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	static int8_t x254 = INT8_MIN;
	static uint32_t x255 = UINT32_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 118871;

	t63 = (x253<((x254^x255)|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x259 = INT16_MAX;
	int16_t x260 = INT16_MIN;

	t64 = (x257<((x258^x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 48650765112825LLU;
	static int32_t x262 = -1;
	static uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -214203;

	t65 = (x261<((x262^x263)|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = UINT32_MAX;
	static int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t66 = 235786830;

	t66 = (x265<((x266^x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	volatile int8_t x270 = 1;
	static int64_t x271 = INT64_MIN;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t67 = 109;

	t67 = (x269<((x270^x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = 61379588857775481LLU;
	uint64_t x275 = UINT64_MAX;
	int64_t x276 = -747511LL;
	volatile int32_t t68 = -1882923;

	t68 = (x273<((x274^x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	static int8_t x279 = INT8_MIN;
	int64_t x280 = -25LL;

	t69 = (x277<((x278^x279)|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int64_t x282 = INT64_MIN;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MIN;

	t70 = (x281<((x282^x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x287 = 458519594LL;
	int64_t x288 = INT64_MAX;
	int32_t t71 = 1005573793;

	t71 = (x285<((x286^x287)|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	int8_t x290 = 51;
	int32_t x291 = INT32_MIN;
	static volatile int8_t x292 = 0;
	volatile int32_t t72 = 1054656;

	t72 = (x289<((x290^x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1625226LL;
	int16_t x294 = INT16_MAX;
	static int16_t x295 = -1980;
	uint32_t x296 = 58514864U;
	int32_t t73 = 280133054;

	t73 = (x293<((x294^x295)|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = UINT64_MAX;
	uint16_t x298 = 4U;
	uint8_t x299 = 0U;
	static int16_t x300 = 0;
	volatile int32_t t74 = 1;

	t74 = (x297<((x298^x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	uint32_t x303 = UINT32_MAX;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 15874946;

	t75 = (x301<((x302^x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 30LL;
	static volatile int64_t x306 = -1LL;
	static volatile int8_t x308 = -2;

	t76 = (x305<((x306^x307)|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = -1;
	int64_t x311 = -1LL;
	int16_t x312 = -1;
	volatile int32_t t77 = -48403;

	t77 = (x309<((x310^x311)|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 501853528U;
	int64_t x314 = INT64_MIN;
	static volatile int32_t x315 = INT32_MAX;

	t78 = (x313<((x314^x315)|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = -1;
	int8_t x320 = 0;
	static volatile int32_t t79 = 3516758;

	t79 = (x317<((x318^x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t80 = 7178;

	t80 = (x321<((x322^x323)|x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x326 = -1;
	int32_t x327 = INT32_MIN;
	uint16_t x328 = 6U;
	volatile int32_t t81 = -10208503;

	t81 = (x325<((x326^x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = -1;
	int64_t x330 = -1LL;
	uint64_t x331 = 966304322LLU;
	uint16_t x332 = 0U;

	t82 = (x329<((x330^x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	static int16_t x334 = -1;
	static int64_t x335 = -174236LL;
	static int32_t x336 = -1055756401;
	static volatile int32_t t83 = 11041;

	t83 = (x333<((x334^x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 56;
	uint64_t x338 = 12263718172580LLU;
	int64_t x339 = INT64_MIN;
	volatile int32_t t84 = 35;

	t84 = (x337<((x338^x339)|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -2;
	uint8_t x342 = 0U;
	int32_t x344 = 2086648;
	volatile int32_t t85 = 202026;

	t85 = (x341<((x342^x343)|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = UINT64_MAX;
	uint64_t x347 = 149003156236LLU;
	int8_t x348 = -1;
	int32_t t86 = 50;

	t86 = (x345<((x346^x347)|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x349 = -1;
	int8_t x350 = -1;
	static volatile int16_t x352 = -1709;
	volatile int32_t t87 = -106174862;

	t87 = (x349<((x350^x351)|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -1203277;
	uint16_t x354 = 553U;
	static int16_t x356 = INT16_MAX;
	volatile int32_t t88 = 46182;

	t88 = (x353<((x354^x355)|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x358 = UINT64_MAX;
	static int16_t x359 = 3;
	int8_t x360 = -1;
	int32_t t89 = 3050245;

	t89 = (x357<((x358^x359)|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = 457106857;
	int64_t x363 = INT64_MIN;
	uint64_t x364 = 49297643LLU;
	int32_t t90 = 816597389;

	t90 = (x361<((x362^x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = 1LL;
	volatile uint32_t x366 = 119U;
	volatile int64_t x367 = INT64_MAX;
	static int32_t x368 = -44;
	volatile int32_t t91 = 1808629;

	t91 = (x365<((x366^x367)|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MIN;
	int64_t x370 = 78LL;
	static uint8_t x371 = 74U;
	static volatile int32_t x372 = INT32_MAX;

	t92 = (x369<((x370^x371)|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 65373641LL;
	volatile int64_t x374 = -1LL;
	int64_t x375 = 25705135959LL;
	int32_t x376 = -17340;
	int32_t t93 = -1;

	t93 = (x373<((x374^x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = -3;
	int64_t x379 = -56LL;
	int8_t x380 = -1;
	int32_t t94 = -554020;

	t94 = (x377<((x378^x379)|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 6U;
	int8_t x382 = INT8_MIN;
	int8_t x383 = 28;
	int16_t x384 = INT16_MAX;

	t95 = (x381<((x382^x383)|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	int8_t x386 = -1;

	t96 = (x385<((x386^x387)|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 120U;
	volatile int32_t x392 = INT32_MIN;
	int32_t t97 = -87;

	t97 = (x389<((x390^x391)|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = -1;
	volatile uint32_t x395 = 2107U;
	int16_t x396 = 0;

	t98 = (x393<((x394^x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	static uint16_t x400 = 78U;
	volatile int32_t t99 = -45356;

	t99 = (x397<((x398^x399)|x400));

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

