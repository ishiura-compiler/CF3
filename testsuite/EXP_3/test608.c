#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
int16_t x10 = 278;
volatile int32_t t2 = -145410;
volatile int32_t x16 = INT32_MAX;
int16_t x18 = -1;
volatile uint64_t x24 = UINT64_MAX;
volatile uint32_t x29 = 550564700U;
volatile uint8_t x43 = 5U;
int16_t x44 = INT16_MIN;
static int32_t t10 = -111;
volatile int32_t x49 = INT32_MIN;
uint64_t x71 = 124063LLU;
uint8_t x73 = 0U;
volatile int32_t t18 = -299288502;
static uint64_t x84 = UINT64_MAX;
static volatile uint8_t x85 = UINT8_MAX;
volatile int32_t t20 = 3864;
static int8_t x89 = INT8_MIN;
volatile int32_t t22 = 0;
int64_t x98 = -1LL;
int64_t x100 = 1LL;
int64_t x101 = -1LL;
uint32_t x105 = UINT32_MAX;
int8_t x111 = INT8_MIN;
volatile int32_t t28 = -57452660;
volatile uint16_t x123 = 4U;
int64_t x125 = INT64_MAX;
volatile uint32_t x127 = 1144U;
int32_t x130 = -1;
volatile int32_t t31 = 3;
static int8_t x135 = INT8_MAX;
uint16_t x140 = UINT16_MAX;
static volatile int32_t t33 = 8222;
volatile uint8_t x141 = 3U;
uint16_t x148 = 154U;
static int16_t x154 = INT16_MAX;
static int32_t t38 = -12859609;
volatile int32_t x162 = INT32_MIN;
static int8_t x164 = INT8_MIN;
volatile int32_t t39 = -43989597;
int32_t x166 = INT32_MAX;
volatile uint16_t x173 = UINT16_MAX;
uint16_t x175 = 71U;
int64_t x176 = 513032516LL;
volatile int64_t x178 = 133421981537808045LL;
int32_t x179 = 995;
int8_t x182 = -1;
volatile int16_t x187 = 108;
static int64_t x199 = -1LL;
uint16_t x208 = UINT16_MAX;
static int64_t x209 = -802593556834LL;
static uint16_t x216 = UINT16_MAX;
static uint16_t x219 = 57U;
int16_t x220 = 21;
volatile int64_t x226 = INT64_MIN;
static volatile int8_t x246 = INT8_MAX;
uint16_t x247 = 1U;
int32_t x256 = -2145;
uint8_t x257 = 123U;
volatile int32_t t61 = -11625;
uint8_t x263 = UINT8_MAX;
uint64_t x265 = 87624899429LLU;
uint32_t x274 = UINT32_MAX;
int8_t x282 = -2;
uint64_t x283 = UINT64_MAX;
int32_t x291 = INT32_MIN;
int8_t x298 = -49;
uint16_t x301 = UINT16_MAX;
int8_t x311 = INT8_MIN;
static int16_t x322 = INT16_MAX;
int64_t x326 = INT64_MAX;
uint32_t x331 = UINT32_MAX;
int32_t x340 = -1;
int64_t x344 = INT64_MIN;
int32_t t82 = -43634;
int16_t x357 = 232;
static uint32_t x359 = 1797538283U;
uint32_t x362 = 15U;
uint16_t x364 = UINT16_MAX;
uint16_t x366 = 2822U;
int64_t x371 = -218778789845993692LL;
uint16_t x375 = 444U;
volatile int32_t t91 = -44810417;
static uint8_t x391 = 2U;
int32_t x401 = INT32_MIN;
int32_t x408 = INT32_MAX;
static int64_t x413 = INT64_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile int16_t x2 = INT16_MAX;
	int32_t x3 = -49950;
	volatile int32_t t0 = -164;

	t0 = ((x1==x2)<=(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static uint16_t x6 = 1534U;
	static int8_t x7 = INT8_MAX;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = 464331536;

	t1 = ((x5==x6)<=(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MAX;
	volatile int32_t x11 = INT32_MAX;
	static int64_t x12 = -1LL;

	t2 = ((x9==x10)<=(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 4U;
	int32_t x14 = -1213;
	uint16_t x15 = 231U;
	static volatile int32_t t3 = 0;

	t3 = ((x13==x14)<=(x15/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	static int8_t x19 = INT8_MIN;
	static volatile int16_t x20 = -1;
	volatile int32_t t4 = -72232;

	t4 = ((x17==x18)<=(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -2784;
	int8_t x22 = INT8_MAX;
	static int16_t x23 = -1;
	int32_t t5 = -378869;

	t5 = ((x21==x22)<=(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -91;
	uint8_t x26 = 2U;
	int32_t x27 = -1;
	int32_t x28 = INT32_MAX;
	int32_t t6 = 3492;

	t6 = ((x25==x26)<=(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -29232243902089LL;
	uint64_t x31 = UINT64_MAX;
	int8_t x32 = 15;
	volatile int32_t t7 = 1;

	t7 = ((x29==x30)<=(x31/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 520;
	int32_t x34 = INT32_MIN;
	int8_t x35 = -1;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = -4055;

	t8 = ((x33==x34)<=(x35/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 0LLU;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MAX;
	int32_t t9 = -19336238;

	t9 = ((x37==x38)<=(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 1895U;
	static uint64_t x42 = 2718961860LLU;

	t10 = ((x41==x42)<=(x43/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x45 = 611015U;
	static uint8_t x46 = 12U;
	static int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MAX;
	int32_t t11 = -3456240;

	t11 = ((x45==x46)<=(x47/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 194176U;
	int8_t x51 = INT8_MAX;
	static uint64_t x52 = UINT64_MAX;
	int32_t t12 = 91;

	t12 = ((x49==x50)<=(x51/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = INT32_MIN;
	int16_t x54 = INT16_MIN;
	int16_t x55 = INT16_MIN;
	volatile uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = 1901;

	t13 = ((x53==x54)<=(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 108;
	volatile uint32_t x58 = 25413U;
	int8_t x59 = -1;
	int16_t x60 = -12;
	volatile int32_t t14 = 699;

	t14 = ((x57==x58)<=(x59/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static int64_t x62 = -27460015LL;
	static int8_t x63 = INT8_MIN;
	int32_t x64 = -6193;
	volatile int32_t t15 = -236;

	t15 = ((x61==x62)<=(x63/x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int64_t x66 = -807341834870130704LL;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = -54;
	volatile int32_t t16 = -1302632;

	t16 = ((x65==x66)<=(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int64_t x70 = -63LL;
	int64_t x72 = INT64_MAX;
	volatile int32_t t17 = 854608651;

	t17 = ((x69==x70)<=(x71/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MIN;
	uint8_t x76 = 55U;

	t18 = ((x73==x74)<=(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = UINT16_MAX;
	int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	volatile int32_t t19 = -2;

	t19 = ((x81==x82)<=(x83/x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = INT32_MAX;
	uint64_t x87 = UINT64_MAX;
	static int32_t x88 = INT32_MAX;

	t20 = ((x85==x86)<=(x87/x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x90 = 2454031423LLU;
	static volatile int64_t x91 = INT64_MIN;
	static volatile int16_t x92 = -5136;
	int32_t t21 = 227371;

	t21 = ((x89==x90)<=(x91/x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = -8439508;
	uint64_t x95 = UINT64_MAX;
	volatile int16_t x96 = INT16_MIN;

	t22 = ((x93==x94)<=(x95/x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = UINT8_MAX;
	volatile int16_t x99 = INT16_MIN;
	volatile int32_t t23 = 0;

	t23 = ((x97==x98)<=(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x102 = INT32_MIN;
	int8_t x103 = 0;
	int32_t x104 = INT32_MIN;
	volatile int32_t t24 = -15637;

	t24 = ((x101==x102)<=(x103/x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = 0;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t25 = 1367115;

	t25 = ((x105==x106)<=(x107/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = -1;
	static int8_t x110 = -1;
	int64_t x112 = INT64_MIN;
	volatile int32_t t26 = 260848625;

	t26 = ((x109==x110)<=(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x113 = 8710807355991LLU;
	int16_t x114 = 0;
	static volatile int16_t x115 = -1;
	static uint8_t x116 = UINT8_MAX;
	int32_t t27 = -66369;

	t27 = ((x113==x114)<=(x115/x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = INT8_MAX;
	int8_t x118 = INT8_MIN;
	int64_t x119 = -257593591584197LL;
	int32_t x120 = -893;

	t28 = ((x117==x118)<=(x119/x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MAX;
	uint64_t x124 = 126544LLU;
	int32_t t29 = -1286;

	t29 = ((x121==x122)<=(x123/x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x126 = 13U;
	static int32_t x128 = -1;
	volatile int32_t t30 = 488234110;

	t30 = ((x125==x126)<=(x127/x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = INT16_MIN;
	uint64_t x131 = 28188662695362638LLU;
	int16_t x132 = INT16_MIN;

	t31 = ((x129==x130)<=(x131/x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	uint16_t x134 = 14349U;
	uint16_t x136 = UINT16_MAX;
	static int32_t t32 = -17349051;

	t32 = ((x133==x134)<=(x135/x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = -1;
	int8_t x138 = -51;
	volatile int64_t x139 = -1LL;

	t33 = ((x137==x138)<=(x139/x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x142 = -1;
	volatile uint32_t x143 = 0U;
	volatile int8_t x144 = INT8_MAX;
	int32_t t34 = 0;

	t34 = ((x141==x142)<=(x143/x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x145 = -3086535204795205LL;
	uint16_t x146 = 2U;
	volatile int32_t x147 = -1;
	static volatile int32_t t35 = -8825036;

	t35 = ((x145==x146)<=(x147/x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = 7683U;
	static int8_t x150 = -29;
	int32_t x151 = INT32_MIN;
	int16_t x152 = -584;
	volatile int32_t t36 = 1;

	t36 = ((x149==x150)<=(x151/x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x153 = 6050080U;
	uint64_t x155 = 851977428875LLU;
	volatile uint32_t x156 = 1U;
	static volatile int32_t t37 = 8;

	t37 = ((x153==x154)<=(x155/x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x157 = UINT32_MAX;
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MAX;
	int64_t x160 = INT64_MAX;

	t38 = ((x157==x158)<=(x159/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -534;
	static int32_t x163 = INT32_MIN;

	t39 = ((x161==x162)<=(x163/x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = 4;
	int16_t x167 = INT16_MIN;
	volatile int8_t x168 = INT8_MIN;
	volatile int32_t t40 = 708897589;

	t40 = ((x165==x166)<=(x167/x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 11U;
	static int16_t x170 = INT16_MIN;
	uint8_t x171 = 13U;
	int16_t x172 = -1;
	int32_t t41 = 2;

	t41 = ((x169==x170)<=(x171/x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x174 = INT8_MIN;
	static int32_t t42 = -19610;

	t42 = ((x173==x174)<=(x175/x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = UINT64_MAX;
	static volatile int8_t x180 = INT8_MAX;
	int32_t t43 = -61;

	t43 = ((x177==x178)<=(x179/x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 58U;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t44 = 188736828;

	t44 = ((x181==x182)<=(x183/x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = 26667U;
	uint32_t x186 = 1U;
	uint32_t x188 = UINT32_MAX;
	int32_t t45 = -171353;

	t45 = ((x185==x186)<=(x187/x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = -69;
	volatile int32_t x190 = -218560161;
	uint64_t x191 = 25647LLU;
	int8_t x192 = -26;
	volatile int32_t t46 = 28076440;

	t46 = ((x189==x190)<=(x191/x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = 4351;
	int32_t x194 = 46;
	volatile int16_t x195 = -10;
	int32_t x196 = -1;
	volatile int32_t t47 = 3421789;

	t47 = ((x193==x194)<=(x195/x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = 133135824LL;
	volatile int32_t x198 = -1;
	int64_t x200 = INT64_MIN;
	volatile int32_t t48 = 28006628;

	t48 = ((x197==x198)<=(x199/x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = 46645;
	static int32_t x206 = INT32_MAX;
	int64_t x207 = INT64_MIN;
	volatile int32_t t49 = -39221;

	t49 = ((x205==x206)<=(x207/x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x210 = 13517U;
	int32_t x211 = INT32_MAX;
	static uint16_t x212 = 34U;
	int32_t t50 = -889788;

	t50 = ((x209==x210)<=(x211/x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = 20;
	int8_t x214 = INT8_MIN;
	int32_t x215 = -1;
	int32_t t51 = -28869030;

	t51 = ((x213==x214)<=(x215/x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -1;
	int32_t x218 = -1;
	volatile int32_t t52 = -2501;

	t52 = ((x217==x218)<=(x219/x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = -1;
	int16_t x222 = -892;
	int16_t x223 = INT16_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t53 = -2426476;

	t53 = ((x221==x222)<=(x223/x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	volatile int32_t x227 = INT32_MIN;
	uint64_t x228 = 31LLU;
	int32_t t54 = -41590634;

	t54 = ((x225==x226)<=(x227/x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -1;
	int8_t x230 = -21;
	int64_t x231 = 1420LL;
	int32_t x232 = -1;
	volatile int32_t t55 = 67678189;

	t55 = ((x229==x230)<=(x231/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = 1052;
	int16_t x234 = INT16_MIN;
	int64_t x235 = -450846202676LL;
	int16_t x236 = 120;
	int32_t t56 = -488;

	t56 = ((x233==x234)<=(x235/x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = 16475LLU;
	int16_t x238 = INT16_MAX;
	uint32_t x239 = 4805264U;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t57 = -1;

	t57 = ((x237==x238)<=(x239/x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x245 = 35U;
	int8_t x248 = INT8_MIN;
	volatile int32_t t58 = -305592;

	t58 = ((x245==x246)<=(x247/x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MIN;
	volatile int16_t x251 = 1;
	volatile int32_t x252 = -1;
	int32_t t59 = 86711;

	t59 = ((x249==x250)<=(x251/x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	static uint64_t x254 = UINT64_MAX;
	volatile uint8_t x255 = 1U;
	volatile int32_t t60 = 34220414;

	t60 = ((x253==x254)<=(x255/x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x258 = -1;
	int32_t x259 = INT32_MIN;
	static uint16_t x260 = UINT16_MAX;

	t61 = ((x257==x258)<=(x259/x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MIN;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t62 = 8604;

	t62 = ((x261==x262)<=(x263/x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x266 = INT64_MIN;
	uint64_t x267 = 299381989LLU;
	static uint64_t x268 = UINT64_MAX;
	volatile int32_t t63 = 37;

	t63 = ((x265==x266)<=(x267/x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = INT16_MAX;
	int8_t x270 = -3;
	uint64_t x271 = 29LLU;
	int32_t x272 = INT32_MIN;
	static int32_t t64 = -27;

	t64 = ((x269==x270)<=(x271/x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MIN;
	int64_t x275 = INT64_MAX;
	int32_t x276 = INT32_MIN;
	int32_t t65 = 1;

	t65 = ((x273==x274)<=(x275/x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	int16_t x279 = -7379;
	volatile int8_t x280 = INT8_MAX;
	int32_t t66 = 624385;

	t66 = ((x277==x278)<=(x279/x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	volatile int64_t x284 = INT64_MIN;
	static volatile int32_t t67 = -4613;

	t67 = ((x281==x282)<=(x283/x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x285 = 1844347U;
	volatile int32_t x286 = -5093;
	uint32_t x287 = 18563981U;
	int8_t x288 = -1;
	int32_t t68 = 537;

	t68 = ((x285==x286)<=(x287/x288));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x289 = -1;
	int64_t x290 = INT64_MAX;
	static volatile uint16_t x292 = 7431U;
	volatile int32_t t69 = -99280;

	t69 = ((x289==x290)<=(x291/x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -3;
	uint16_t x299 = 0U;
	uint32_t x300 = 2148803U;
	volatile int32_t t70 = 410;

	t70 = ((x297==x298)<=(x299/x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x302 = INT8_MAX;
	uint64_t x303 = 3240529800LLU;
	volatile int16_t x304 = -2;
	int32_t t71 = -5513;

	t71 = ((x301==x302)<=(x303/x304));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = 519903LL;
	uint64_t x306 = 348913LLU;
	int8_t x307 = INT8_MAX;
	volatile uint32_t x308 = UINT32_MAX;
	volatile int32_t t72 = 5;

	t72 = ((x305==x306)<=(x307/x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = 194U;
	int16_t x310 = INT16_MIN;
	int16_t x312 = -1;
	static int32_t t73 = -192734748;

	t73 = ((x309==x310)<=(x311/x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x313 = 1;
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MAX;
	volatile int64_t x316 = 24529372301798174LL;
	static volatile int32_t t74 = 67837507;

	t74 = ((x313==x314)<=(x315/x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x317 = 14147U;
	volatile int8_t x318 = INT8_MAX;
	int32_t x319 = 24;
	int64_t x320 = INT64_MIN;
	volatile int32_t t75 = -2246023;

	t75 = ((x317==x318)<=(x319/x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MAX;
	int32_t t76 = 54966099;

	t76 = ((x321==x322)<=(x323/x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x325 = INT8_MIN;
	uint8_t x327 = 0U;
	uint32_t x328 = 9953U;
	volatile int32_t t77 = 1;

	t77 = ((x325==x326)<=(x327/x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int32_t x330 = INT32_MIN;
	uint16_t x332 = 12658U;
	volatile int32_t t78 = 31;

	t78 = ((x329==x330)<=(x331/x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MIN;
	uint64_t x334 = 50894456121LLU;
	uint32_t x335 = 10467U;
	int64_t x336 = INT64_MIN;
	volatile int32_t t79 = 4748812;

	t79 = ((x333==x334)<=(x335/x336));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x337 = 0U;
	uint16_t x338 = 3661U;
	uint32_t x339 = 299258151U;
	int32_t t80 = -169028;

	t80 = ((x337==x338)<=(x339/x340));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x341 = -13435684398728736LL;
	volatile uint16_t x342 = 0U;
	static int32_t x343 = INT32_MIN;
	volatile int32_t t81 = -667858;

	t81 = ((x341==x342)<=(x343/x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x345 = INT16_MIN;
	int32_t x346 = 653595207;
	uint8_t x347 = UINT8_MAX;
	static uint64_t x348 = 1664030617170029593LLU;

	t82 = ((x345==x346)<=(x347/x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = -59;
	uint32_t x350 = 240U;
	uint32_t x351 = 3723591U;
	static uint32_t x352 = 28023U;
	volatile int32_t t83 = 98673;

	t83 = ((x349==x350)<=(x351/x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	static int16_t x354 = INT16_MAX;
	int32_t x355 = -1;
	volatile uint16_t x356 = 20905U;
	static volatile int32_t t84 = -995367945;

	t84 = ((x353==x354)<=(x355/x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x358 = -1;
	int8_t x360 = INT8_MIN;
	volatile int32_t t85 = 242;

	t85 = ((x357==x358)<=(x359/x360));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x361 = 668U;
	int8_t x363 = INT8_MIN;
	int32_t t86 = 3;

	t86 = ((x361==x362)<=(x363/x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x365 = INT8_MIN;
	static int8_t x367 = -1;
	static int8_t x368 = -1;
	volatile int32_t t87 = 86421;

	t87 = ((x365==x366)<=(x367/x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = -13736044566LL;
	uint16_t x372 = UINT16_MAX;
	int32_t t88 = 21949;

	t88 = ((x369==x370)<=(x371/x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = -318;
	volatile int8_t x374 = -6;
	uint64_t x376 = 350422358335280LLU;
	static int32_t t89 = 490226997;

	t89 = ((x373==x374)<=(x375/x376));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MIN;
	static int64_t x379 = INT64_MIN;
	int32_t x380 = -4517;
	int32_t t90 = -662221;

	t90 = ((x377==x378)<=(x379/x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -1;
	uint16_t x382 = 1225U;
	volatile int8_t x383 = 4;
	int8_t x384 = INT8_MAX;

	t91 = ((x381==x382)<=(x383/x384));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 3552LLU;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MIN;
	static uint32_t x388 = 5U;
	static volatile int32_t t92 = -178;

	t92 = ((x385==x386)<=(x387/x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = INT8_MIN;
	static int64_t x390 = -1LL;
	int64_t x392 = 6387276475937LL;
	static int32_t t93 = -14933414;

	t93 = ((x389==x390)<=(x391/x392));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = -1;
	int32_t x394 = INT32_MIN;
	static int8_t x395 = -1;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t94 = -196146;

	t94 = ((x393==x394)<=(x395/x396));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x397 = 491583595LLU;
	static int32_t x398 = 0;
	uint32_t x399 = 3472188U;
	int16_t x400 = INT16_MIN;
	int32_t t95 = -36;

	t95 = ((x397==x398)<=(x399/x400));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x402 = INT64_MIN;
	static int64_t x403 = INT64_MAX;
	int64_t x404 = INT64_MAX;
	volatile int32_t t96 = 827;

	t96 = ((x401==x402)<=(x403/x404));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = 12;
	volatile uint16_t x407 = 5U;
	int32_t t97 = 0;

	t97 = ((x405==x406)<=(x407/x408));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MAX;
	int32_t x410 = INT32_MIN;
	volatile int64_t x411 = -1LL;
	int16_t x412 = -1;
	int32_t t98 = 0;

	t98 = ((x409==x410)<=(x411/x412));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x414 = 2416880975910LLU;
	int64_t x415 = INT64_MAX;
	static uint32_t x416 = UINT32_MAX;
	volatile int32_t t99 = -311206;

	t99 = ((x413==x414)<=(x415/x416));

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

