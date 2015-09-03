#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 513515314587LLU;
int8_t x11 = INT8_MIN;
volatile int32_t t2 = -306102;
volatile int32_t t3 = -21643;
volatile int8_t x17 = 29;
static uint8_t x23 = UINT8_MAX;
static int32_t x26 = -3;
int32_t t8 = 157;
int32_t x37 = INT32_MIN;
uint32_t x38 = 0U;
static volatile int8_t x44 = 6;
int64_t x48 = 7228LL;
static uint8_t x51 = UINT8_MAX;
int32_t x55 = INT32_MIN;
int8_t x78 = INT8_MAX;
static int32_t x80 = INT32_MIN;
volatile int32_t t19 = 11;
uint16_t x86 = 63U;
static volatile int32_t t22 = -90782;
int64_t x93 = -1LL;
uint16_t x94 = 17703U;
static volatile int8_t x106 = -4;
int64_t x107 = -419LL;
static int8_t x113 = -1;
volatile int32_t t30 = -16;
int64_t x126 = 110619466026115496LL;
static volatile int32_t t32 = 1367;
volatile uint32_t x138 = 971323555U;
volatile int16_t x141 = -1659;
static volatile int32_t t35 = -30;
int8_t x148 = INT8_MIN;
int64_t x151 = INT64_MAX;
uint32_t x153 = 460U;
uint16_t x156 = 2U;
int16_t x157 = -1;
int16_t x161 = INT16_MAX;
volatile uint64_t x162 = UINT64_MAX;
int16_t x164 = INT16_MIN;
volatile uint8_t x166 = UINT8_MAX;
static int64_t x167 = -1LL;
static uint8_t x168 = 12U;
uint8_t x171 = UINT8_MAX;
int32_t x173 = -1;
int64_t x198 = INT64_MIN;
int16_t x206 = INT16_MAX;
static int8_t x210 = -63;
volatile int8_t x216 = 2;
volatile int64_t x217 = INT64_MAX;
uint64_t x229 = UINT64_MAX;
volatile int32_t t57 = 0;
volatile uint64_t x239 = 1683270666013027LLU;
int32_t t61 = -7;
uint8_t x252 = 64U;
static int32_t x258 = INT32_MAX;
uint32_t x259 = UINT32_MAX;
volatile int64_t x260 = -918009903139LL;
int32_t t64 = -135912917;
int64_t x262 = -1LL;
int16_t x264 = INT16_MIN;
int64_t x267 = -246627LL;
static uint64_t x269 = 8978742455103LLU;
int32_t x284 = INT32_MAX;
uint32_t x286 = 41U;
static int16_t x288 = -1;
volatile int32_t t71 = -772422;
volatile int64_t x291 = -56526807LL;
volatile int16_t x293 = -1;
int64_t x297 = INT64_MIN;
int32_t x298 = INT32_MAX;
volatile int32_t t74 = 229707;
volatile int32_t t75 = 56;
int64_t x305 = INT64_MAX;
int64_t x307 = INT64_MIN;
int8_t x312 = -6;
int8_t x314 = INT8_MIN;
static int8_t x316 = -1;
int8_t x320 = -2;
volatile int64_t x324 = 2148LL;
static int32_t x325 = -1;
uint8_t x333 = 5U;
int8_t x340 = INT8_MIN;
static volatile int32_t t84 = -226;
static uint8_t x341 = 17U;
volatile int16_t x346 = 2607;
volatile uint16_t x347 = 2965U;
int32_t x348 = -328838;
volatile int32_t t86 = -7;
int64_t x351 = INT64_MAX;
int16_t x360 = INT16_MIN;
int32_t t89 = -10;
static int64_t x368 = INT64_MIN;
int32_t t91 = -2;
uint64_t x370 = 95182820186LLU;
int32_t t93 = 10098;
static volatile uint8_t x378 = 43U;
uint8_t x393 = UINT8_MAX;
int32_t t99 = 7860097;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	volatile int64_t x2 = -3LL;
	int8_t x3 = 5;
	static int32_t x4 = INT32_MAX;
	int32_t t0 = -553690;

	t0 = (x1<((x2<x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile uint16_t x7 = 17258U;
	int32_t x8 = -1;
	volatile int32_t t1 = -110245;

	t1 = (x5<((x6<x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int32_t x10 = 9;
	int8_t x12 = INT8_MIN;

	t2 = (x9<((x10<x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 0U;
	volatile uint8_t x14 = 8U;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;

	t3 = (x13<((x14<x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = -2037;
	uint16_t x19 = 6809U;
	int64_t x20 = INT64_MIN;
	int32_t t4 = 1;

	t4 = (x17<((x18<x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int32_t x22 = INT32_MAX;
	uint64_t x24 = 0LLU;
	int32_t t5 = 220174;

	t5 = (x21<((x22<x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 28648U;
	uint16_t x27 = UINT16_MAX;
	uint64_t x28 = 12LLU;
	volatile int32_t t6 = -12820440;

	t6 = (x25<((x26<x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	int16_t x30 = INT16_MIN;
	volatile int8_t x31 = INT8_MIN;
	int64_t x32 = 64618879LL;
	volatile int32_t t7 = -37212845;

	t7 = (x29<((x30<x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	volatile int32_t x34 = INT32_MIN;
	static volatile int8_t x35 = INT8_MIN;
	uint16_t x36 = 699U;

	t8 = (x33<((x34<x35)<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x39 = UINT32_MAX;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = -326093;

	t9 = (x37<((x38<x39)<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint64_t x42 = 5477674842193LLU;
	int32_t x43 = INT32_MAX;
	volatile int32_t t10 = -21;

	t10 = (x41<((x42<x43)<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = 107;
	static int64_t x46 = -1LL;
	volatile uint64_t x47 = UINT64_MAX;
	volatile int32_t t11 = -1335;

	t11 = (x45<((x46<x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 19212U;
	static int64_t x50 = -1617LL;
	int64_t x52 = INT64_MAX;
	int32_t t12 = -1;

	t12 = (x49<((x50<x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	uint16_t x54 = 0U;
	static volatile uint8_t x56 = UINT8_MAX;
	static int32_t t13 = 1;

	t13 = (x53<((x54<x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static int64_t x58 = 32557LL;
	int16_t x59 = -1;
	static int64_t x60 = -790631842924264333LL;
	volatile int32_t t14 = -1;

	t14 = (x57<((x58<x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	static volatile int16_t x62 = 167;
	uint8_t x63 = 0U;
	volatile int16_t x64 = INT16_MIN;
	int32_t t15 = 1;

	t15 = (x61<((x62<x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MAX;
	static int16_t x67 = INT16_MAX;
	volatile uint16_t x68 = 5723U;
	int32_t t16 = -29;

	t16 = (x65<((x66<x67)<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 14U;
	int32_t x70 = 98842;
	uint16_t x71 = UINT16_MAX;
	volatile int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = -1066473806;

	t17 = (x69<((x70<x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 53441U;
	int16_t x74 = 11926;
	static int8_t x75 = 1;
	int16_t x76 = 0;
	static int32_t t18 = 321373661;

	t18 = (x73<((x74<x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int64_t x79 = INT64_MAX;

	t19 = (x77<((x78<x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -96494105005LL;
	int16_t x82 = -4;
	static volatile int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MIN;
	volatile int32_t t20 = -132453928;

	t20 = (x81<((x82<x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -455705055317112835LL;
	static int64_t x87 = 2142594478913713370LL;
	volatile int8_t x88 = INT8_MAX;
	int32_t t21 = 716509645;

	t21 = (x85<((x86<x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -2723828;
	int32_t x90 = INT32_MAX;
	static uint64_t x91 = 418906LLU;
	int32_t x92 = -1;

	t22 = (x89<((x90<x91)<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x95 = 118;
	int16_t x96 = INT16_MAX;
	static int32_t t23 = 1;

	t23 = (x93<((x94<x95)<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -169304650268169738LL;
	int8_t x98 = -11;
	uint64_t x99 = 2763616685LLU;
	uint8_t x100 = UINT8_MAX;
	static int32_t t24 = 10829355;

	t24 = (x97<((x98<x99)<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	volatile uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MAX;
	volatile int8_t x104 = -1;
	volatile int32_t t25 = 1785558;

	t25 = (x101<((x102<x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -989;
	volatile int8_t x108 = -1;
	volatile int32_t t26 = 2027;

	t26 = (x105<((x106<x107)<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 6502LLU;
	int16_t x110 = INT16_MIN;
	uint16_t x111 = UINT16_MAX;
	static uint8_t x112 = 9U;
	volatile int32_t t27 = 40;

	t27 = (x109<((x110<x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x114 = -1;
	int32_t x115 = INT32_MAX;
	int8_t x116 = -1;
	volatile int32_t t28 = -3765363;

	t28 = (x113<((x114<x115)<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = 112674LLU;
	volatile int16_t x118 = -1;
	static volatile uint32_t x119 = UINT32_MAX;
	static uint16_t x120 = 122U;
	int32_t t29 = 15215308;

	t29 = (x117<((x118<x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 7681064765LL;
	int16_t x122 = -1;
	int32_t x123 = INT32_MIN;
	uint64_t x124 = 8203482049828LLU;

	t30 = (x121<((x122<x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -203;
	int32_t x127 = INT32_MIN;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 58100131;

	t31 = (x125<((x126<x127)<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = -13LL;
	int8_t x130 = INT8_MAX;
	uint8_t x131 = 3U;
	static int8_t x132 = INT8_MAX;

	t32 = (x129<((x130<x131)<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 1972833807231533LLU;
	volatile int8_t x134 = -1;
	static uint64_t x135 = 2689LLU;
	volatile uint8_t x136 = 25U;
	int32_t t33 = 82988;

	t33 = (x133<((x134<x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int8_t x139 = INT8_MAX;
	static int64_t x140 = 315993539LL;
	static int32_t t34 = -45852238;

	t34 = (x137<((x138<x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -1;
	int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;

	t35 = (x141<((x142<x143)<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -1LL;
	volatile uint8_t x146 = 17U;
	static int64_t x147 = -91702760LL;
	int32_t t36 = -231;

	t36 = (x145<((x146<x147)<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	static int64_t x150 = -305026125988194LL;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 331510166;

	t37 = (x149<((x150<x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 437U;
	static uint8_t x155 = 118U;
	volatile int32_t t38 = 13487;

	t38 = (x153<((x154<x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 8U;
	uint8_t x159 = 57U;
	uint64_t x160 = 14124LLU;
	static volatile int32_t t39 = -28;

	t39 = (x157<((x158<x159)<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x163 = 1U;
	int32_t t40 = -208;

	t40 = (x161<((x162<x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int32_t t41 = -19349;

	t41 = (x165<((x166<x167)<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x170 = INT64_MAX;
	static int8_t x172 = -1;
	int32_t t42 = -3;

	t42 = (x169<((x170<x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = 46;
	int64_t x175 = -32924679987999512LL;
	static uint8_t x176 = 49U;
	volatile int32_t t43 = -14;

	t43 = (x173<((x174<x175)<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -1;
	static int8_t x178 = -1;
	uint16_t x179 = 12132U;
	volatile uint16_t x180 = UINT16_MAX;
	static volatile int32_t t44 = 53543580;

	t44 = (x177<((x178<x179)<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MIN;
	static int32_t x183 = -42;
	uint8_t x184 = 31U;
	volatile int32_t t45 = 27679836;

	t45 = (x181<((x182<x183)<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	uint16_t x186 = 2U;
	volatile uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 6868U;
	volatile int32_t t46 = 9884;

	t46 = (x185<((x186<x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	static volatile uint16_t x190 = 2U;
	static int64_t x191 = INT64_MAX;
	int8_t x192 = -3;
	volatile int32_t t47 = 1021;

	t47 = (x189<((x190<x191)<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	static uint64_t x194 = 821419LLU;
	volatile uint16_t x195 = 75U;
	int16_t x196 = INT16_MIN;
	volatile int32_t t48 = -19710;

	t48 = (x193<((x194<x195)<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 11776900482LLU;
	static int16_t x199 = -1;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 535492;

	t49 = (x197<((x198<x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -2;
	uint8_t x202 = UINT8_MAX;
	int32_t x203 = -1;
	uint16_t x204 = 10U;
	volatile int32_t t50 = 912746;

	t50 = (x201<((x202<x203)<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = -2468494;

	t51 = (x205<((x206<x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int16_t x211 = -1;
	volatile int16_t x212 = INT16_MAX;
	volatile int32_t t52 = -11121946;

	t52 = (x209<((x210<x211)<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = 195726896077LLU;
	volatile uint32_t x214 = UINT32_MAX;
	int64_t x215 = INT64_MIN;
	volatile int32_t t53 = -1;

	t53 = (x213<((x214<x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MIN;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t54 = -264470886;

	t54 = (x217<((x218<x219)<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = -338330450LL;
	static int16_t x222 = INT16_MIN;
	uint32_t x223 = 297789404U;
	int64_t x224 = INT64_MAX;
	int32_t t55 = 16;

	t55 = (x221<((x222<x223)<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = INT32_MIN;
	uint16_t x226 = 938U;
	int32_t x227 = INT32_MAX;
	int64_t x228 = INT64_MAX;
	int32_t t56 = 698619978;

	t56 = (x225<((x226<x227)<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	int32_t x232 = -574750;

	t57 = (x229<((x230<x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 196309207;
	int64_t x234 = -1383273793012543LL;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = INT8_MIN;
	static int32_t t58 = -32;

	t58 = (x233<((x234<x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 1;
	int64_t x238 = INT64_MAX;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 389996;

	t59 = (x237<((x238<x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 13U;
	uint64_t x242 = 3585808008908LLU;
	volatile int16_t x243 = INT16_MIN;
	static volatile int32_t x244 = INT32_MIN;
	int32_t t60 = 3;

	t60 = (x241<((x242<x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MIN;
	int16_t x247 = -1;
	int8_t x248 = -1;

	t61 = (x245<((x246<x247)<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -8;
	volatile int16_t x250 = INT16_MIN;
	int32_t x251 = -1;
	int32_t t62 = 52;

	t62 = (x249<((x250<x251)<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	int8_t x254 = -1;
	int64_t x255 = INT64_MIN;
	static volatile int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 10470484;

	t63 = (x253<((x254<x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;

	t64 = (x257<((x258<x259)<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 100870048U;
	static volatile int64_t x263 = 20363LL;
	static int32_t t65 = 127;

	t65 = (x261<((x262<x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MIN;
	static int16_t x268 = -77;
	int32_t t66 = -801894570;

	t66 = (x265<((x266<x267)<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = 0U;
	int16_t x271 = 144;
	uint64_t x272 = 851148995735577687LLU;
	int32_t t67 = -19057;

	t67 = (x269<((x270<x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 43893127U;
	volatile int32_t x274 = INT32_MIN;
	volatile uint8_t x275 = 2U;
	int8_t x276 = -57;
	int32_t t68 = 167;

	t68 = (x273<((x274<x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 9307U;
	int64_t x278 = -1LL;
	int64_t x279 = INT64_MIN;
	uint8_t x280 = UINT8_MAX;
	static int32_t t69 = 923;

	t69 = (x277<((x278<x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static int32_t x282 = INT32_MIN;
	static int32_t x283 = -2;
	int32_t t70 = 959138431;

	t70 = (x281<((x282<x283)<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int32_t x287 = 54973283;

	t71 = (x285<((x286<x287)<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	static int32_t x290 = INT32_MAX;
	uint8_t x292 = 0U;
	static int32_t t72 = -7596471;

	t72 = (x289<((x290<x291)<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x294 = 2027U;
	static volatile uint64_t x295 = 3558LLU;
	static int64_t x296 = 2LL;
	volatile int32_t t73 = -10504;

	t73 = (x293<((x294<x295)<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x299 = 3652599;
	int64_t x300 = INT64_MIN;

	t74 = (x297<((x298<x299)<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MAX;
	uint32_t x302 = 180U;
	volatile uint64_t x303 = 1171LLU;
	uint8_t x304 = UINT8_MAX;

	t75 = (x301<((x302<x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t76 = -32;

	t76 = (x305<((x306<x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -147;
	uint16_t x310 = UINT16_MAX;
	volatile int16_t x311 = INT16_MIN;
	int32_t t77 = -968314;

	t77 = (x309<((x310<x311)<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	int32_t x315 = 49657;
	static int32_t t78 = 239;

	t78 = (x313<((x314<x315)<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = UINT32_MAX;
	int64_t x318 = INT64_MAX;
	volatile int16_t x319 = -6059;
	static int32_t t79 = 1;

	t79 = (x317<((x318<x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	int32_t t80 = 23090753;

	t80 = (x321<((x322<x323)<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = 2741U;
	int64_t x327 = 1680018915077982523LL;
	int64_t x328 = -1LL;
	volatile int32_t t81 = -5091;

	t81 = (x325<((x326<x327)<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 13U;
	static uint32_t x330 = UINT32_MAX;
	uint8_t x331 = 5U;
	uint64_t x332 = 98440LLU;
	static int32_t t82 = 105030;

	t82 = (x329<((x330<x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x334 = INT16_MAX;
	uint16_t x335 = 21U;
	uint32_t x336 = UINT32_MAX;
	static volatile int32_t t83 = 19;

	t83 = (x333<((x334<x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = 60066427331887662LL;
	int8_t x338 = INT8_MIN;
	volatile int8_t x339 = INT8_MAX;

	t84 = (x337<((x338<x339)<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MIN;
	volatile int32_t x343 = -31089;
	int16_t x344 = 17;
	volatile int32_t t85 = 18;

	t85 = (x341<((x342<x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x345 = 531737;

	t86 = (x345<((x346<x347)<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	int8_t x350 = INT8_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t87 = -6310458;

	t87 = (x349<((x350<x351)<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -6615623LL;
	static volatile int32_t x354 = -1;
	volatile uint64_t x355 = UINT64_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t88 = -11626338;

	t88 = (x353<((x354<x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	uint32_t x358 = 88U;
	uint8_t x359 = UINT8_MAX;

	t89 = (x357<((x358<x359)<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 14545LLU;
	static int32_t x362 = -37559419;
	int32_t x363 = 41831797;
	int32_t x364 = INT32_MIN;
	volatile int32_t t90 = -18487;

	t90 = (x361<((x362<x363)<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = 47U;
	int32_t x366 = INT32_MIN;
	int16_t x367 = 709;

	t91 = (x365<((x366<x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int16_t x371 = 5717;
	uint8_t x372 = 4U;
	static volatile int32_t t92 = -4;

	t92 = (x369<((x370<x371)<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	int16_t x374 = INT16_MAX;
	static int32_t x375 = 4;
	static int8_t x376 = INT8_MAX;

	t93 = (x373<((x374<x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x379 = INT64_MIN;
	volatile int32_t x380 = INT32_MAX;
	static int32_t t94 = -53184582;

	t94 = (x377<((x378<x379)<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = INT64_MIN;
	int16_t x382 = -1;
	volatile int64_t x383 = INT64_MIN;
	uint32_t x384 = 2269U;
	volatile int32_t t95 = -2;

	t95 = (x381<((x382<x383)<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MIN;
	uint32_t x386 = 12789U;
	volatile int64_t x387 = -402LL;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = 30;

	t96 = (x385<((x386<x387)<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 0;
	int8_t x390 = -19;
	int32_t x391 = -1;
	int32_t x392 = INT32_MAX;
	int32_t t97 = 1691;

	t97 = (x389<((x390<x391)<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 739442293735LLU;
	uint64_t x395 = 5630080210857215LLU;
	static int32_t x396 = -544497;
	int32_t t98 = 637154;

	t98 = (x393<((x394<x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int64_t x398 = -1LL;
	static int32_t x399 = 264;
	int16_t x400 = 132;

	t99 = (x397<((x398<x399)<=x400));

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

