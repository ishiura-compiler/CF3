#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = 380492LL;
volatile int32_t t1 = 0;
int8_t x10 = -1;
volatile uint32_t x17 = UINT32_MAX;
int32_t t4 = 61;
int32_t x26 = -1;
int32_t x30 = INT32_MAX;
int32_t t7 = 999443516;
uint64_t x39 = UINT64_MAX;
int32_t x42 = INT32_MIN;
int32_t x43 = INT32_MIN;
uint8_t x47 = 90U;
int32_t t11 = 988;
int32_t t12 = 757;
int32_t t17 = 623867;
int32_t x83 = -5;
int32_t t22 = 15870993;
volatile int16_t x93 = -1;
static volatile int8_t x100 = INT8_MAX;
static int32_t x103 = INT32_MIN;
static int16_t x104 = INT16_MIN;
volatile int32_t t28 = -3382;
volatile int8_t x121 = INT8_MAX;
static int32_t t30 = -21;
static int64_t x126 = -1LL;
int16_t x128 = INT16_MIN;
int64_t x130 = INT64_MIN;
static uint16_t x143 = 3097U;
volatile int32_t t35 = 4;
static int8_t x148 = INT8_MIN;
static int32_t t36 = -171365259;
volatile uint32_t x157 = 34124U;
int64_t x162 = -1LL;
int64_t x165 = INT64_MAX;
volatile int32_t t41 = 170981;
static volatile int16_t x169 = -1;
int16_t x193 = INT16_MIN;
uint64_t x196 = 10261027994980136LLU;
volatile int16_t x206 = -3885;
int32_t t51 = 0;
static uint64_t x210 = 131520605768LLU;
uint16_t x211 = UINT16_MAX;
static uint32_t x212 = 216U;
static uint32_t x225 = 7245U;
int64_t x226 = INT64_MIN;
static int32_t x230 = INT32_MIN;
int32_t x236 = INT32_MIN;
volatile int8_t x244 = INT8_MAX;
static int64_t x252 = INT64_MIN;
volatile int32_t x255 = INT32_MAX;
static int16_t x264 = 0;
int32_t x271 = INT32_MIN;
uint64_t x272 = 54180599LLU;
int32_t x281 = INT32_MAX;
volatile int32_t t70 = -6914163;
int32_t x290 = -104985;
volatile int16_t x291 = -812;
int64_t x308 = INT64_MAX;
int8_t x311 = -25;
int8_t x316 = -1;
volatile int32_t t78 = -4090;
int16_t x327 = INT16_MIN;
int64_t x328 = INT64_MIN;
volatile int32_t t81 = 19;
uint64_t x332 = 828LLU;
int32_t t84 = -2401190;
volatile int16_t x343 = -1;
uint16_t x344 = UINT16_MAX;
volatile int32_t t86 = 428;
int32_t x358 = INT32_MIN;
volatile int32_t t91 = -107622659;
int32_t x371 = INT32_MIN;
uint32_t x380 = 747U;
int32_t t94 = 33;
volatile int32_t t95 = -74660170;
uint8_t x387 = UINT8_MAX;
uint8_t x390 = 73U;
static uint16_t x391 = 1U;
int64_t x395 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile uint8_t x2 = UINT8_MAX;
	uint64_t x3 = 30969861LLU;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 390;

	t0 = ((x1|x2)<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = INT64_MIN;
	uint64_t x7 = UINT64_MAX;
	volatile uint8_t x8 = 116U;

	t1 = ((x5|x6)<(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 20756310472LLU;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -1;

	t2 = ((x9|x10)<(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -89447090LL;
	int8_t x14 = -1;
	int32_t x15 = INT32_MIN;
	volatile uint64_t x16 = 64314273758LLU;
	volatile int32_t t3 = 15;

	t3 = ((x13|x14)<(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	int64_t x19 = -1LL;
	int8_t x20 = INT8_MIN;

	t4 = ((x17|x18)<(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 5U;
	volatile int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = 15399330;

	t5 = ((x21|x22)<(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 2105985056LL;
	volatile int32_t x27 = -146929844;
	uint32_t x28 = 421446U;
	int32_t t6 = 982946;

	t6 = ((x25|x26)<(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 25U;
	int32_t x31 = INT32_MAX;
	uint32_t x32 = 0U;

	t7 = ((x29|x30)<(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int64_t x34 = INT64_MIN;
	static uint16_t x35 = 83U;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 121;

	t8 = ((x33|x34)<(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = 6649U;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = 9271007;

	t9 = ((x37|x38)<(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 756724279376LLU;
	uint16_t x44 = UINT16_MAX;
	int32_t t10 = 55;

	t10 = ((x41|x42)<(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static int16_t x46 = 22;
	int64_t x48 = 7335111169146343LL;

	t11 = ((x45|x46)<(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = -1;
	int32_t x51 = INT32_MAX;
	uint8_t x52 = UINT8_MAX;

	t12 = ((x49|x50)<(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int64_t x54 = INT64_MIN;
	static uint16_t x55 = UINT16_MAX;
	int8_t x56 = 15;
	volatile int32_t t13 = 14737;

	t13 = ((x53|x54)<(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = 0;
	volatile int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	volatile int16_t x60 = 1;
	int32_t t14 = 3909479;

	t14 = ((x57|x58)<(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	static int64_t x62 = 6149450LL;
	volatile uint64_t x63 = UINT64_MAX;
	int64_t x64 = -21410656LL;
	int32_t t15 = 3143131;

	t15 = ((x61|x62)<(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	volatile int32_t x66 = INT32_MIN;
	uint16_t x67 = UINT16_MAX;
	uint8_t x68 = 2U;
	static volatile int32_t t16 = 12228393;

	t16 = ((x65|x66)<(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	static int64_t x70 = -1LL;
	uint16_t x71 = 11U;
	uint64_t x72 = 1412077069163LLU;

	t17 = ((x69|x70)<(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 287566;

	t18 = ((x73|x74)<(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 5888U;
	volatile int8_t x78 = INT8_MIN;
	volatile uint16_t x79 = 8U;
	int16_t x80 = INT16_MAX;
	volatile int32_t t19 = 0;

	t19 = ((x77|x78)<(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = -1;
	volatile int32_t x84 = INT32_MIN;
	static volatile int32_t t20 = 117;

	t20 = ((x81|x82)<(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x85 = UINT8_MAX;
	static uint8_t x86 = 38U;
	uint32_t x87 = 28814U;
	volatile int16_t x88 = INT16_MAX;
	volatile int32_t t21 = 1;

	t21 = ((x85|x86)<(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	volatile int16_t x90 = 1;
	int32_t x91 = INT32_MAX;
	volatile uint32_t x92 = 152183U;

	t22 = ((x89|x90)<(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = 705286LLU;
	int16_t x95 = 0;
	uint32_t x96 = 74311070U;
	int32_t t23 = -433;

	t23 = ((x93|x94)<(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 4306226852830LLU;
	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = UINT32_MAX;
	volatile int32_t t24 = -1405;

	t24 = ((x97|x98)<(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	int32_t x102 = 9;
	volatile int32_t t25 = -8318697;

	t25 = ((x101|x102)<(x103<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	volatile int64_t x106 = INT64_MAX;
	int8_t x107 = INT8_MIN;
	int64_t x108 = -4076613739LL;
	static int32_t t26 = -104574;

	t26 = ((x105|x106)<(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	volatile int16_t x110 = INT16_MIN;
	int32_t x111 = -1;
	static int16_t x112 = -2;
	volatile int32_t t27 = 192779;

	t27 = ((x109|x110)<(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MAX;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = 22389816;

	t28 = ((x113|x114)<(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	uint16_t x118 = UINT16_MAX;
	int8_t x119 = 6;
	int16_t x120 = -1;
	int32_t t29 = 42634029;

	t29 = ((x117|x118)<(x119<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = 241U;
	static int32_t x123 = -1;
	volatile int32_t x124 = INT32_MAX;

	t30 = ((x121|x122)<(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 3U;
	int32_t x127 = -6703;
	int32_t t31 = 228767612;

	t31 = ((x125|x126)<(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	static volatile int64_t x131 = -1LL;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -55442312;

	t32 = ((x129|x130)<(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 3;
	int64_t x134 = -1LL;
	static uint32_t x135 = 2805U;
	static volatile int16_t x136 = -1;
	int32_t t33 = 81694061;

	t33 = ((x133|x134)<(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 0;
	uint16_t x138 = 10121U;
	int16_t x139 = INT16_MIN;
	volatile int16_t x140 = -1;
	volatile int32_t t34 = 94;

	t34 = ((x137|x138)<(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 16U;
	int16_t x142 = INT16_MIN;
	int64_t x144 = INT64_MAX;

	t35 = ((x141|x142)<(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint16_t x146 = 31U;
	uint8_t x147 = 14U;

	t36 = ((x145|x146)<(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x149 = -1;
	uint64_t x150 = 22283914433334LLU;
	static int64_t x151 = 288714202610147409LL;
	volatile int64_t x152 = -1LL;
	volatile int32_t t37 = -10607156;

	t37 = ((x149|x150)<(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int8_t x154 = INT8_MIN;
	static uint16_t x155 = 168U;
	volatile int64_t x156 = INT64_MIN;
	static int32_t t38 = -47797158;

	t38 = ((x153|x154)<(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = INT8_MIN;
	int32_t x159 = -1;
	int8_t x160 = 1;
	static int32_t t39 = 494543;

	t39 = ((x157|x158)<(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 13838016;
	uint64_t x163 = 11680954484482LLU;
	static int8_t x164 = INT8_MIN;
	int32_t t40 = 3817844;

	t40 = ((x161|x162)<(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = -11782501LL;
	static uint16_t x167 = 3U;
	uint8_t x168 = 0U;

	t41 = ((x165|x166)<(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x170 = INT8_MIN;
	int16_t x171 = 0;
	uint32_t x172 = 761U;
	volatile int32_t t42 = 1911406;

	t42 = ((x169|x170)<(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	static volatile uint64_t x174 = 31822LLU;
	volatile uint8_t x175 = 74U;
	uint32_t x176 = UINT32_MAX;
	static int32_t t43 = 9051;

	t43 = ((x173|x174)<(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static int32_t x178 = INT32_MIN;
	static volatile uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -7;

	t44 = ((x177|x178)<(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = -1;
	volatile uint8_t x182 = 45U;
	int8_t x183 = -1;
	int8_t x184 = INT8_MIN;
	static int32_t t45 = -670235;

	t45 = ((x181|x182)<(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 4845402286LL;
	uint16_t x186 = 12U;
	uint16_t x187 = UINT16_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 7116;

	t46 = ((x185|x186)<(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MAX;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = 102;
	int8_t x192 = INT8_MIN;
	int32_t t47 = -1603;

	t47 = ((x189|x190)<(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MIN;
	volatile uint32_t x195 = 0U;
	volatile int32_t t48 = -7;

	t48 = ((x193|x194)<(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	uint64_t x198 = UINT64_MAX;
	uint32_t x199 = 3362U;
	int16_t x200 = 99;
	int32_t t49 = -180865948;

	t49 = ((x197|x198)<(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 3285U;
	uint64_t x202 = 124653925167524LLU;
	static int32_t x203 = INT32_MAX;
	static volatile int32_t x204 = INT32_MIN;
	int32_t t50 = -1;

	t50 = ((x201|x202)<(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	static uint8_t x207 = UINT8_MAX;
	int8_t x208 = -26;

	t51 = ((x205|x206)<(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = 1770737008U;
	static int32_t t52 = -1386;

	t52 = ((x209|x210)<(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 0U;
	uint8_t x214 = 15U;
	int64_t x215 = INT64_MAX;
	uint64_t x216 = UINT64_MAX;
	int32_t t53 = -32881;

	t53 = ((x213|x214)<(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	volatile int32_t x218 = 983363980;
	uint16_t x219 = UINT16_MAX;
	volatile uint16_t x220 = 49U;
	int32_t t54 = -168592657;

	t54 = ((x217|x218)<(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	static volatile int8_t x222 = INT8_MAX;
	int16_t x223 = INT16_MAX;
	volatile int16_t x224 = -51;
	volatile int32_t t55 = -78361441;

	t55 = ((x221|x222)<(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x227 = INT32_MIN;
	uint8_t x228 = 0U;
	int32_t t56 = 11555;

	t56 = ((x225|x226)<(x227<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 212LLU;
	uint16_t x231 = 24U;
	uint8_t x232 = 2U;
	int32_t t57 = 6019;

	t57 = ((x229|x230)<(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int16_t x234 = 0;
	static int16_t x235 = INT16_MIN;
	volatile int32_t t58 = -15226192;

	t58 = ((x233|x234)<(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 177647606208712LLU;
	int32_t x238 = -393949;
	volatile int32_t x239 = -1;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t59 = -1512690;

	t59 = ((x237|x238)<(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 1911U;
	int8_t x242 = -1;
	uint64_t x243 = 1040007544232889255LLU;
	volatile int32_t t60 = 7;

	t60 = ((x241|x242)<(x243<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = -1;
	uint32_t x246 = 17087815U;
	uint32_t x247 = 1U;
	static uint16_t x248 = 1990U;
	int32_t t61 = -20818;

	t61 = ((x245|x246)<(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	static int16_t x250 = INT16_MIN;
	static int8_t x251 = 63;
	int32_t t62 = 60;

	t62 = ((x249|x250)<(x251<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = 0;
	int8_t x254 = INT8_MIN;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t63 = -1202;

	t63 = ((x253|x254)<(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	static int64_t x258 = -1LL;
	int32_t x259 = 795;
	int8_t x260 = INT8_MAX;
	int32_t t64 = -236542581;

	t64 = ((x257|x258)<(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = 58;
	volatile uint64_t x262 = 9LLU;
	uint32_t x263 = 29868239U;
	static int32_t t65 = 3883;

	t65 = ((x261|x262)<(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 21998U;
	int8_t x266 = 1;
	static uint16_t x267 = 7U;
	static int64_t x268 = INT64_MIN;
	int32_t t66 = 57605;

	t66 = ((x265|x266)<(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = -3620;
	int16_t x270 = INT16_MAX;
	static int32_t t67 = 63340;

	t67 = ((x269|x270)<(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MAX;
	int16_t x274 = INT16_MAX;
	int8_t x275 = -1;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = 37;

	t68 = ((x273|x274)<(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	static int32_t x278 = -1;
	int64_t x279 = -1LL;
	uint32_t x280 = 7487044U;
	int32_t t69 = -227583;

	t69 = ((x277|x278)<(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = UINT8_MAX;
	uint64_t x283 = UINT64_MAX;
	uint32_t x284 = UINT32_MAX;

	t70 = ((x281|x282)<(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = 1LL;
	uint64_t x286 = 568153LLU;
	int32_t x287 = -1;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t71 = 29548;

	t71 = ((x285|x286)<(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = 13417724;
	int32_t x292 = INT32_MAX;
	int32_t t72 = -3207505;

	t72 = ((x289|x290)<(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 850257769432LLU;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = INT64_MAX;
	volatile int8_t x296 = -1;
	volatile int32_t t73 = -31536145;

	t73 = ((x293|x294)<(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 49467410373273LL;
	int16_t x298 = INT16_MAX;
	int16_t x299 = INT16_MIN;
	int16_t x300 = 637;
	int32_t t74 = -87324033;

	t74 = ((x297|x298)<(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 69U;
	int8_t x302 = 1;
	static int8_t x303 = -3;
	int64_t x304 = INT64_MIN;
	int32_t t75 = 249;

	t75 = ((x301|x302)<(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -11;
	static int32_t x306 = INT32_MAX;
	static int8_t x307 = -1;
	volatile int32_t t76 = 259851903;

	t76 = ((x305|x306)<(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x309 = INT64_MIN;
	int8_t x310 = -2;
	volatile uint16_t x312 = 298U;
	int32_t t77 = 318945;

	t77 = ((x309|x310)<(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -2538;
	int16_t x314 = -796;
	int64_t x315 = -1LL;

	t78 = ((x313|x314)<(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	int32_t x318 = -1;
	int16_t x319 = INT16_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = 61238620;

	t79 = ((x317|x318)<(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	volatile int64_t x322 = -7239171335249LL;
	int16_t x323 = INT16_MIN;
	volatile int16_t x324 = -1;
	int32_t t80 = 2588097;

	t80 = ((x321|x322)<(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = -2;
	int32_t x326 = -1;

	t81 = ((x325|x326)<(x327<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 25;
	int8_t x330 = -1;
	int16_t x331 = -1;
	volatile int32_t t82 = -2;

	t82 = ((x329|x330)<(x331<x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	static int64_t x334 = INT64_MAX;
	static volatile int8_t x335 = -1;
	int16_t x336 = -1;
	static int32_t t83 = -7204;

	t83 = ((x333|x334)<(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	uint32_t x338 = 335743U;
	static int8_t x339 = -57;
	int8_t x340 = INT8_MIN;

	t84 = ((x337|x338)<(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = -1;
	uint64_t x342 = 7270224055723978LLU;
	volatile int32_t t85 = -1490;

	t85 = ((x341|x342)<(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 6056816201LLU;
	volatile int32_t x346 = INT32_MIN;
	static volatile int8_t x347 = 2;
	int64_t x348 = INT64_MIN;

	t86 = ((x345|x346)<(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = -4731;
	uint16_t x350 = 1560U;
	static volatile int64_t x351 = -9108827946449478LL;
	int16_t x352 = 87;
	int32_t t87 = -663390284;

	t87 = ((x349|x350)<(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = -1;
	static volatile int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = 7113U;
	int32_t t88 = -1711;

	t88 = ((x353|x354)<(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 5698U;
	static int8_t x359 = INT8_MIN;
	uint8_t x360 = 0U;
	volatile int32_t t89 = 4;

	t89 = ((x357|x358)<(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 96506521090LL;
	static int16_t x362 = -1;
	int32_t x363 = -247542210;
	volatile int32_t x364 = -1;
	static volatile int32_t t90 = -10;

	t90 = ((x361|x362)<(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 92798905U;
	int32_t x366 = -104005;
	static int16_t x367 = INT16_MIN;
	int32_t x368 = -1;

	t91 = ((x365|x366)<(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 32471;

	t92 = ((x369|x370)<(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	int16_t x375 = -1;
	static int64_t x376 = -3670297LL;
	int32_t t93 = 107;

	t93 = ((x373|x374)<(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -63;
	uint16_t x378 = UINT16_MAX;
	static int8_t x379 = INT8_MIN;

	t94 = ((x377|x378)<(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 168543114297947196LLU;
	volatile uint8_t x382 = UINT8_MAX;
	int64_t x383 = -1LL;
	int64_t x384 = INT64_MIN;

	t95 = ((x381|x382)<(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = -1;
	static uint8_t x386 = 65U;
	int64_t x388 = -35598002095732952LL;
	volatile int32_t t96 = 0;

	t96 = ((x385|x386)<(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = 7584861093077218530LLU;
	int16_t x392 = 7;
	static volatile int32_t t97 = 0;

	t97 = ((x389|x390)<(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 16U;
	int8_t x394 = -1;
	int32_t x396 = -1;
	volatile int32_t t98 = 182623399;

	t98 = ((x393|x394)<(x395<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint64_t x398 = 4LLU;
	uint64_t x399 = UINT64_MAX;
	volatile int8_t x400 = -1;
	int32_t t99 = 115034704;

	t99 = ((x397|x398)<(x399<x400));

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
