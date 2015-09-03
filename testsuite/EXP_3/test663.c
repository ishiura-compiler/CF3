#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x13 = 1U;
int16_t x17 = INT16_MAX;
int32_t t4 = 60145;
int16_t x22 = 644;
int8_t x39 = 25;
volatile int32_t t10 = -21;
volatile int16_t x46 = INT16_MAX;
static volatile int64_t x47 = 130656753181695LL;
volatile int64_t t11 = -75059674762289LL;
static int16_t x55 = INT16_MAX;
int16_t x60 = -1;
int16_t x64 = -1;
volatile int32_t x66 = INT32_MIN;
uint16_t x76 = 10U;
int64_t x82 = INT64_MIN;
uint32_t t20 = 1583656U;
static uint8_t x90 = UINT8_MAX;
volatile uint64_t t21 = 47890810482012LLU;
int16_t x95 = -120;
volatile int16_t x98 = -210;
uint64_t t23 = 1216376LLU;
uint64_t x101 = UINT64_MAX;
volatile int64_t x108 = -1LL;
int64_t t25 = 3518823987LL;
uint32_t t27 = UINT32_MAX;
int64_t x119 = -242646663LL;
volatile int64_t t28 = 8052163LL;
int64_t t29 = 2636066908634LL;
uint8_t x127 = 117U;
static volatile int8_t x130 = INT8_MIN;
volatile int8_t x132 = INT8_MIN;
volatile int64_t t36 = 2655894LL;
int16_t x154 = INT16_MIN;
static int64_t x160 = 55833312698820472LL;
uint64_t x164 = 431050917698LLU;
static volatile int32_t x170 = -98529;
int32_t x171 = 16844;
int32_t t41 = 43951;
uint32_t x189 = UINT32_MAX;
int32_t t45 = 240;
static int8_t x198 = INT8_MIN;
int64_t x200 = 1873726277LL;
uint32_t t47 = UINT32_MAX;
static int8_t x205 = INT8_MIN;
int64_t x206 = INT64_MIN;
volatile uint64_t t51 = 89LLU;
int16_t x224 = -1;
static volatile int32_t x226 = 2;
int32_t x228 = INT32_MAX;
static int64_t x231 = -6410495131220LL;
int64_t t54 = -113921512763841LL;
int32_t t55 = 5545064;
int64_t t56 = -3048LL;
int8_t x241 = INT8_MAX;
int8_t x248 = -1;
uint32_t t60 = UINT32_MAX;
uint64_t x258 = 525737718049LLU;
volatile uint64_t t61 = 68252326158LLU;
volatile uint16_t x262 = 2U;
uint16_t x265 = UINT16_MAX;
static int8_t x273 = 1;
static int8_t x275 = INT8_MIN;
volatile uint32_t t66 = 313U;
volatile int32_t x281 = INT32_MIN;
int16_t x286 = -1;
static int64_t x288 = 7LL;
uint16_t x290 = 211U;
volatile uint32_t t71 = UINT32_MAX;
uint32_t x306 = 1596U;
uint32_t t75 = UINT32_MAX;
int32_t x317 = INT32_MIN;
static uint16_t x320 = UINT16_MAX;
int8_t x322 = -1;
int64_t t81 = 3734LL;
static int32_t x346 = INT32_MIN;
uint32_t t84 = 152025U;
int16_t x356 = INT16_MAX;
static uint64_t x357 = UINT64_MAX;
uint16_t x358 = UINT16_MAX;
int8_t x359 = INT8_MAX;
int16_t x364 = -54;
volatile int16_t x367 = INT16_MIN;
int8_t x369 = INT8_MIN;
static int16_t x370 = INT16_MIN;
volatile uint8_t x372 = 41U;
volatile int32_t t89 = -72009;
int64_t x383 = -3643517395744LL;
volatile int16_t x392 = -1;
int32_t x394 = INT32_MAX;
volatile int32_t t95 = INT32_MAX;
int8_t x397 = INT8_MIN;
static uint32_t t97 = 157U;
int8_t x405 = -1;
int64_t x411 = -12317045319071LL;


void f0(void) {
	uint16_t x1 = 1010U;
	int8_t x2 = 15;
	uint16_t x3 = 124U;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 53678469LLU;

	t0 = ((x1|x2)^(x3/x4));

	if (t0 != 1023LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	uint8_t x6 = 14U;
	static volatile uint16_t x7 = 15U;
	static int8_t x8 = INT8_MIN;
	volatile int64_t t1 = INT64_MAX;

	t1 = ((x5|x6)^(x7/x8));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int64_t x10 = INT64_MIN;
	static int8_t x11 = -1;
	int32_t x12 = -192547982;
	volatile int64_t t2 = 176285080011027LL;

	t2 = ((x9|x10)^(x11/x12));

	if (t2 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MAX;
	static int8_t x15 = -1;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 980559;

	t3 = ((x13|x14)^(x15/x16));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;

	t4 = ((x17|x18)^(x19/x20));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 61;
	int32_t x23 = INT32_MIN;
	volatile int32_t x24 = INT32_MIN;
	int32_t t5 = -88103961;

	t5 = ((x21|x22)^(x23/x24));

	if (t5 != 700) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int32_t x26 = -1;
	int64_t x27 = INT64_MIN;
	uint16_t x28 = 16U;
	volatile int64_t t6 = -11141205303LL;

	t6 = ((x25|x26)^(x27/x28));

	if (t6 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int64_t x30 = INT64_MIN;
	uint16_t x31 = 234U;
	int8_t x32 = INT8_MAX;
	static int64_t t7 = -146919297LL;

	t7 = ((x29|x30)^(x31/x32));

	if (t7 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = 3;
	volatile uint16_t x34 = UINT16_MAX;
	static int8_t x35 = INT8_MIN;
	int8_t x36 = 1;
	int32_t t8 = -4079629;

	t8 = ((x33|x34)^(x35/x36));

	if (t8 != -65409) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 3U;
	volatile uint8_t x38 = UINT8_MAX;
	uint8_t x40 = 13U;
	static volatile int32_t t9 = 5;

	t9 = ((x37|x38)^(x39/x40));

	if (t9 != 254) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	static int16_t x42 = -1;
	int32_t x43 = 33;
	int32_t x44 = -1;

	t10 = ((x41|x42)^(x43/x44));

	if (t10 != 32) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int64_t x48 = 739579922685278LL;

	t11 = ((x45|x46)^(x47/x48));

	if (t11 != 2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	volatile uint16_t x54 = 2223U;
	uint32_t x56 = UINT32_MAX;
	static uint32_t t12 = 219729U;

	t12 = ((x53|x54)^(x55/x56));

	if (t12 != 4294967215U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -817;
	int16_t x58 = -1;
	uint16_t x59 = 9931U;
	int32_t t13 = -5686780;

	t13 = ((x57|x58)^(x59/x60));

	if (t13 != 9930) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MIN;
	uint16_t x62 = 204U;
	int64_t x63 = -807503943708030386LL;
	int64_t t14 = -433603473891LL;

	t14 = ((x61|x62)^(x63/x64));

	if (t14 != -807503943708035714LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 13U;
	int32_t x67 = INT32_MIN;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 56;

	t15 = ((x65|x66)^(x67/x68));

	if (t15 != -2130706419) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = UINT32_MAX;
	int32_t x70 = 77;
	static int32_t x71 = INT32_MIN;
	int64_t x72 = -2202666376097266293LL;
	volatile int64_t t16 = 3208474589636252037LL;

	t16 = ((x69|x70)^(x71/x72));

	if (t16 != 4294967295LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x73 = INT8_MAX;
	static int64_t x74 = INT64_MIN;
	int16_t x75 = -7;
	volatile int64_t t17 = -13949388278990LL;

	t17 = ((x73|x74)^(x75/x76));

	if (t17 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = -1LL;
	int64_t x79 = INT64_MAX;
	int32_t x80 = INT32_MAX;
	static volatile int64_t t18 = -2355702LL;

	t18 = ((x77|x78)^(x79/x80));

	if (t18 != -4294967299LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -313LL;
	uint32_t x83 = 64844859U;
	int64_t x84 = -1LL;
	volatile int64_t t19 = 190765880489312LL;

	t19 = ((x81|x82)^(x83/x84));

	if (t19 != 64845058LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 55U;
	int32_t x86 = 2782554;
	int32_t x87 = 30480517;
	int16_t x88 = -28;

	t20 = ((x85|x86)^(x87/x88));

	if (t20 != 4291106508U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = UINT16_MAX;
	int64_t x91 = INT64_MIN;
	static volatile uint64_t x92 = UINT64_MAX;

	t21 = ((x89|x90)^(x91/x92));

	if (t21 != 65535LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 58U;
	int32_t x94 = INT32_MIN;
	int8_t x96 = INT8_MAX;
	volatile uint32_t t22 = 1359560U;

	t22 = ((x93|x94)^(x95/x96));

	if (t22 != 2147483706U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	uint8_t x99 = 0U;
	uint64_t x100 = UINT64_MAX;

	t23 = ((x97|x98)^(x99/x100));

	if (t23 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x102 = 1068U;
	static int8_t x103 = INT8_MIN;
	uint16_t x104 = 2260U;
	uint64_t t24 = UINT64_MAX;

	t24 = ((x101|x102)^(x103/x104));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = INT32_MIN;
	int8_t x106 = 0;
	uint16_t x107 = 1U;

	t25 = ((x105|x106)^(x107/x108));

	if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 0;
	int64_t x110 = -1LL;
	int64_t x111 = 78863035416719LL;
	int32_t x112 = -580766286;
	int64_t t26 = 7232456455134LL;

	t26 = ((x109|x110)^(x111/x112));

	if (t26 != 135790LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 173U;
	uint32_t x114 = UINT32_MAX;
	volatile uint8_t x115 = UINT8_MAX;
	int16_t x116 = INT16_MIN;

	t27 = ((x113|x114)^(x115/x116));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 4U;
	int16_t x118 = -1;
	int32_t x120 = -8026;

	t28 = ((x117|x118)^(x119/x120));

	if (t28 != 4294937063LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	uint8_t x122 = 26U;
	int64_t x123 = -1LL;
	static int64_t x124 = INT64_MAX;

	t29 = ((x121|x122)^(x123/x124));

	if (t29 != -2147483622LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -14892753;
	volatile int16_t x126 = INT16_MIN;
	uint8_t x128 = UINT8_MAX;
	int32_t t30 = 24;

	t30 = ((x125|x126)^(x127/x128));

	if (t30 != -16081) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x129 = 4U;
	int32_t x131 = -1;
	volatile int32_t t31 = -22538024;

	t31 = ((x129|x130)^(x131/x132));

	if (t31 != -124) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 15U;
	static int32_t x134 = -1;
	volatile int64_t x135 = -8505555LL;
	int64_t x136 = 42877LL;
	static int64_t t32 = -1443719LL;

	t32 = ((x133|x134)^(x135/x136));

	if (t32 != 197LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = 98899LL;
	int16_t x138 = INT16_MAX;
	uint16_t x139 = 202U;
	int32_t x140 = -1;
	volatile int64_t t33 = 7982102263LL;

	t33 = ((x137|x138)^(x139/x140));

	if (t33 != -130871LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x141 = 10213U;
	uint8_t x142 = UINT8_MAX;
	static int8_t x143 = -7;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t34 = 1;

	t34 = ((x141|x142)^(x143/x144));

	if (t34 != 10239) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 65168938LLU;
	int16_t x146 = INT16_MAX;
	int16_t x147 = -1;
	int64_t x148 = -1LL;
	volatile uint64_t t35 = 227428893013948954LLU;

	t35 = ((x145|x146)^(x147/x148));

	if (t35 != 65175550LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x149 = INT16_MAX;
	volatile int16_t x150 = 7;
	int16_t x151 = -1;
	volatile int64_t x152 = -5731095651698133LL;

	t36 = ((x149|x150)^(x151/x152));

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x153 = 262U;
	uint64_t x155 = 1963784761619675LLU;
	static int64_t x156 = -1LL;
	static volatile uint64_t t37 = 179LLU;

	t37 = ((x153|x154)^(x155/x156));

	if (t37 != 18446744073709519110LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x157 = 61U;
	static int8_t x158 = INT8_MIN;
	uint32_t x159 = 50U;
	int64_t t38 = 221LL;

	t38 = ((x157|x158)^(x159/x160));

	if (t38 != -67LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 5457221U;
	uint16_t x162 = 55U;
	volatile int64_t x163 = -20570660476LL;
	static uint64_t t39 = 495575LLU;

	t39 = ((x161|x162)^(x163/x164));

	if (t39 != 48216649LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 4U;
	static int16_t x172 = INT16_MAX;
	uint32_t t40 = 431U;

	t40 = ((x169|x170)^(x171/x172));

	if (t40 != 4294868767U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x173 = INT32_MIN;
	int8_t x174 = -4;
	int32_t x175 = 200;
	volatile uint8_t x176 = 1U;

	t41 = ((x173|x174)^(x175/x176));

	if (t41 != -204) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MAX;
	volatile int16_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	uint64_t t42 = 3690243298819124LLU;

	t42 = ((x177|x178)^(x179/x180));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 92U;
	int64_t x184 = INT64_MIN;
	int64_t t43 = -10639534121978LL;

	t43 = ((x181|x182)^(x183/x184));

	if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x190 = -45;
	uint64_t x191 = 158418526LLU;
	uint32_t x192 = 15U;
	static uint64_t t44 = 289887970769018896LLU;

	t44 = ((x189|x190)^(x191/x192));

	if (t44 != 4284406060LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 16U;

	t45 = ((x193|x194)^(x195/x196));

	if (t45 != 134217600) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = -1;
	volatile uint64_t x199 = 7LLU;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x197|x198)^(x199/x200));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 5U;
	uint32_t x202 = UINT32_MAX;
	static int16_t x203 = -1;
	uint16_t x204 = 5U;

	t47 = ((x201|x202)^(x203/x204));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x207 = INT64_MIN;
	uint32_t x208 = 6U;
	int64_t t48 = -2363035710LL;

	t48 = ((x205|x206)^(x207/x208));

	if (t48 != 1537228672809129259LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = INT16_MAX;
	static int64_t x210 = INT64_MAX;
	int64_t x211 = 202590861570296830LL;
	int16_t x212 = INT16_MAX;
	volatile int64_t t49 = 5LL;

	t49 = ((x209|x210)^(x211/x212));

	if (t49 != 9223365854083647224LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x214 = UINT64_MAX;
	volatile uint16_t x215 = 3U;
	static int16_t x216 = INT16_MIN;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x213|x214)^(x215/x216));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x217 = 217764065570LLU;
	uint8_t x218 = 3U;
	int16_t x219 = -1;
	uint8_t x220 = 1U;

	t51 = ((x217|x218)^(x219/x220));

	if (t51 != 18446743855945486044LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x221 = UINT64_MAX;
	static volatile int32_t x222 = 384;
	int32_t x223 = -55057793;
	uint64_t t52 = 13LLU;

	t52 = ((x221|x222)^(x223/x224));

	if (t52 != 18446744073654493822LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -1LL;
	static int16_t x227 = -417;
	static volatile int64_t t53 = 345653440815780714LL;

	t53 = ((x225|x226)^(x227/x228));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = 1;
	static int64_t x232 = INT64_MAX;

	t54 = ((x229|x230)^(x231/x232));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = 6U;
	static uint16_t x234 = 0U;
	uint8_t x235 = UINT8_MAX;
	int16_t x236 = INT16_MIN;

	t55 = ((x233|x234)^(x235/x236));

	if (t55 != 6) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	uint32_t x238 = UINT32_MAX;
	uint32_t x239 = 1U;
	int8_t x240 = 26;

	t56 = ((x237|x238)^(x239/x240));

	if (t56 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x242 = INT8_MIN;
	uint16_t x243 = UINT16_MAX;
	static uint32_t x244 = 63248971U;
	volatile uint32_t t57 = UINT32_MAX;

	t57 = ((x241|x242)^(x243/x244));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = 4436;
	uint16_t x246 = UINT16_MAX;
	int8_t x247 = INT8_MIN;
	volatile int32_t t58 = 506;

	t58 = ((x245|x246)^(x247/x248));

	if (t58 != 65407) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -1;
	uint8_t x250 = 5U;
	volatile int8_t x251 = INT8_MIN;
	int16_t x252 = -1;
	int32_t t59 = 8108;

	t59 = ((x249|x250)^(x251/x252));

	if (t59 != -129) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -1;
	volatile int32_t x254 = INT32_MIN;
	volatile int32_t x255 = INT32_MAX;
	uint32_t x256 = UINT32_MAX;

	t60 = ((x253|x254)^(x255/x256));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x257 = INT16_MAX;
	volatile int16_t x259 = INT16_MIN;
	int8_t x260 = 43;

	t61 = ((x257|x258)^(x259/x260));

	if (t61 != 18446743547971830521LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = -2019;
	int16_t x263 = -1295;
	int32_t x264 = -4;
	static int32_t t62 = 65;

	t62 = ((x261|x262)^(x263/x264));

	if (t62 != -1700) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x266 = -149;
	uint32_t x267 = 506611863U;
	int32_t x268 = INT32_MIN;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x265|x266)^(x267/x268));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x270 = -1;
	int64_t x271 = INT64_MAX;
	uint8_t x272 = 2U;
	int64_t t64 = 8628480842LL;

	t64 = ((x269|x270)^(x271/x272));

	if (t64 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x274 = INT16_MIN;
	static uint32_t x276 = 28831U;
	volatile uint32_t t65 = 127944U;

	t65 = ((x273|x274)^(x275/x276));

	if (t65 != 4294821355U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	volatile uint32_t x278 = 54U;
	uint8_t x279 = 0U;
	static volatile int8_t x280 = INT8_MAX;

	t66 = ((x277|x278)^(x279/x280));

	if (t66 != 4294967222U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x282 = 0U;
	volatile int8_t x283 = INT8_MAX;
	int8_t x284 = -15;
	volatile int32_t t67 = 336866;

	t67 = ((x281|x282)^(x283/x284));

	if (t67 != 2147483640) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MAX;
	int8_t x287 = 1;
	volatile int64_t t68 = -724630252LL;

	t68 = ((x285|x286)^(x287/x288));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x289 = UINT32_MAX;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t69 = 140LLU;

	t69 = ((x289|x290)^(x291/x292));

	if (t69 != 4294967295LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = -1133;
	volatile uint64_t t70 = 0LLU;

	t70 = ((x293|x294)^(x295/x296));

	if (t70 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	volatile int16_t x298 = INT16_MAX;
	static volatile int32_t x299 = INT32_MIN;
	uint32_t x300 = UINT32_MAX;

	t71 = ((x297|x298)^(x299/x300));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x301 = 32113U;
	static int32_t x302 = 42040;
	int8_t x303 = -23;
	uint64_t x304 = 103935451127313LLU;
	static uint64_t t72 = 1790573LLU;

	t72 = ((x301|x302)^(x303/x304));

	if (t72 != 149555LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x305 = INT8_MIN;
	volatile uint64_t x307 = 1320907069501195LLU;
	uint64_t x308 = 8654LLU;
	static uint64_t t73 = 7969812LLU;

	t73 = ((x305|x306)^(x307/x308));

	if (t73 != 152307241218LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x309 = 43615004103651LLU;
	volatile int8_t x310 = INT8_MAX;
	uint16_t x311 = 9U;
	int8_t x312 = 38;
	volatile uint64_t t74 = 58057609116LLU;

	t74 = ((x309|x310)^(x311/x312));

	if (t74 != 43615004103679LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x313 = UINT32_MAX;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MIN;

	t75 = ((x313|x314)^(x315/x316));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x318 = 750592534333585LLU;
	uint16_t x319 = 1575U;
	uint64_t t76 = 14901595114955336LLU;

	t76 = ((x317|x318)^(x319/x320));

	if (t76 != 18446744073464268945LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x321 = INT16_MIN;
	static int16_t x323 = 5141;
	int32_t x324 = 397682;
	volatile int32_t t77 = 91021;

	t77 = ((x321|x322)^(x323/x324));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = 7411907LLU;
	uint64_t x326 = UINT64_MAX;
	static int8_t x327 = INT8_MIN;
	static int32_t x328 = -1;
	volatile uint64_t t78 = 1135249596240087LLU;

	t78 = ((x325|x326)^(x327/x328));

	if (t78 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = 3;
	uint16_t x330 = 148U;
	static volatile uint8_t x331 = 82U;
	int64_t x332 = -16199865811758LL;
	volatile int64_t t79 = -9LL;

	t79 = ((x329|x330)^(x331/x332));

	if (t79 != 151LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 3U;
	int32_t x334 = INT32_MIN;
	int8_t x335 = -1;
	uint32_t x336 = 32918923U;
	volatile uint32_t t80 = 186351660U;

	t80 = ((x333|x334)^(x335/x336));

	if (t80 != 2147483777U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = -1;
	int64_t x338 = INT64_MIN;
	static int16_t x339 = INT16_MIN;
	volatile int8_t x340 = 3;

	t81 = ((x337|x338)^(x339/x340));

	if (t81 != 10921LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x341 = 117U;
	uint8_t x342 = 10U;
	uint32_t x343 = UINT32_MAX;
	int64_t x344 = -68847994536LL;
	volatile int64_t t82 = 0LL;

	t82 = ((x341|x342)^(x343/x344));

	if (t82 != 127LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x345 = -7;
	uint16_t x347 = UINT16_MAX;
	static volatile int8_t x348 = 5;
	int32_t t83 = 24733;

	t83 = ((x345|x346)^(x347/x348));

	if (t83 != -13110) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = 0U;
	uint16_t x350 = 295U;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = 209465;

	t84 = ((x349|x350)^(x351/x352));

	if (t84 != 20799U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x353 = 721376776U;
	int8_t x354 = INT8_MAX;
	static uint16_t x355 = 23681U;
	volatile uint32_t t85 = 3425U;

	t85 = ((x353|x354)^(x355/x356));

	if (t85 != 721376895U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x360 = 3205;
	uint64_t t86 = UINT64_MAX;

	t86 = ((x357|x358)^(x359/x360));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x361 = 18U;
	uint16_t x362 = UINT16_MAX;
	int16_t x363 = -1;
	volatile int32_t t87 = -9489;

	t87 = ((x361|x362)^(x363/x364));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x365 = 4U;
	int8_t x366 = INT8_MAX;
	static uint64_t x368 = 259839LLU;
	volatile uint64_t t88 = 293574919360669893LLU;

	t88 = ((x365|x366)^(x367/x368));

	if (t88 != 70992976703672LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x371 = UINT8_MAX;

	t89 = ((x369|x370)^(x371/x372));

	if (t89 != -122) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x373 = INT8_MAX;
	int16_t x374 = 1559;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = 34771545LLU;
	uint64_t t90 = 4261LLU;

	t90 = ((x373|x374)^(x375/x376));

	if (t90 != 530512639643LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x377 = -1;
	uint8_t x378 = UINT8_MAX;
	uint64_t x379 = 2924LLU;
	int32_t x380 = -74;
	uint64_t t91 = UINT64_MAX;

	t91 = ((x377|x378)^(x379/x380));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = -3391941848269LL;
	uint8_t x382 = 0U;
	int8_t x384 = INT8_MIN;
	int64_t t92 = -54060096880103LL;

	t92 = ((x381|x382)^(x383/x384));

	if (t92 != -3380673524235LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x386 = UINT8_MAX;
	int16_t x387 = INT16_MIN;
	static volatile int64_t x388 = INT64_MIN;
	int64_t t93 = 21949476LL;

	t93 = ((x385|x386)^(x387/x388));

	if (t93 != -2147483393LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = INT32_MIN;
	volatile int16_t x390 = INT16_MAX;
	int8_t x391 = INT8_MIN;
	static int32_t t94 = -8;

	t94 = ((x389|x390)^(x391/x392));

	if (t94 != -2147451009) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = INT16_MAX;
	int32_t x395 = -1;
	int8_t x396 = -13;

	t95 = ((x393|x394)^(x395/x396));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x398 = -1LL;
	uint64_t x399 = 51419766721155844LLU;
	int8_t x400 = -20;
	uint64_t t96 = UINT64_MAX;

	t96 = ((x397|x398)^(x399/x400));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x401 = UINT8_MAX;
	uint32_t x402 = 4U;
	int8_t x403 = -1;
	volatile uint32_t x404 = 35352U;

	t97 = ((x401|x402)^(x403/x404));

	if (t97 != 121452U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x406 = 129U;
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MAX;
	int32_t t98 = 0;

	t98 = ((x405|x406)^(x407/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x409 = -4267597931158566LL;
	uint8_t x410 = 98U;
	uint8_t x412 = 7U;
	static int64_t t99 = -109766313909LL;

	t99 = ((x409|x410)^(x411/x412));

	if (t99 != 4266939375358598LL) { NG(); } else { ; }
	
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

