#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x10 = UINT64_MAX;
volatile int64_t x18 = -1LL;
static volatile int32_t t3 = -204339596;
static uint16_t x24 = 839U;
volatile int32_t x29 = INT32_MIN;
static int32_t t8 = 14526094;
int32_t t9 = 29;
int32_t x48 = INT32_MAX;
static int64_t x54 = -2615306095125LL;
static volatile uint16_t x58 = 12U;
volatile int32_t x73 = INT32_MIN;
int64_t x77 = INT64_MAX;
uint32_t x83 = 83437294U;
int8_t x91 = -1;
static uint16_t x103 = 297U;
int8_t x107 = INT8_MIN;
uint64_t x117 = 21590768301LLU;
static uint32_t x129 = 3U;
volatile uint32_t x144 = 24U;
int32_t x149 = INT32_MIN;
int16_t x157 = 92;
int16_t x159 = -5;
int32_t x161 = -1;
static int32_t t37 = -1;
uint64_t x165 = 805174LLU;
int16_t x168 = INT16_MAX;
volatile int8_t x171 = INT8_MIN;
static uint16_t x177 = 11U;
uint16_t x190 = 3U;
int8_t x193 = INT8_MIN;
volatile int16_t x196 = -1;
volatile int64_t x199 = INT64_MAX;
static volatile int8_t x211 = -1;
volatile int32_t t49 = -192004953;
uint16_t x220 = UINT16_MAX;
volatile int32_t t50 = 400385425;
volatile int16_t x228 = INT16_MIN;
int32_t t51 = -6;
uint16_t x230 = UINT16_MAX;
int32_t x231 = INT32_MIN;
uint64_t x240 = 10210812076252672LLU;
int32_t t54 = 208;
uint64_t x241 = UINT64_MAX;
uint8_t x244 = 22U;
uint8_t x247 = 12U;
volatile uint16_t x248 = 185U;
volatile int32_t t56 = -619311617;
volatile uint64_t x249 = 96255LLU;
int32_t t57 = 3874657;
static int64_t x256 = -4008650LL;
volatile int32_t t58 = -1;
int8_t x257 = INT8_MIN;
int64_t x258 = INT64_MIN;
int64_t x260 = -1LL;
int32_t t59 = 62;
uint8_t x262 = 4U;
int16_t x265 = INT16_MAX;
uint8_t x267 = 60U;
int64_t x270 = INT64_MAX;
int32_t x283 = INT32_MIN;
int16_t x286 = 265;
int8_t x292 = INT8_MAX;
int64_t x301 = INT64_MAX;
volatile int32_t t71 = 10079006;
volatile int32_t t72 = -310300;
int64_t x323 = 13641351740LL;
static volatile int32_t x332 = INT32_MAX;
int32_t t75 = 6115389;
uint32_t x336 = 1U;
volatile int32_t x339 = INT32_MIN;
int8_t x341 = INT8_MIN;
uint32_t x348 = UINT32_MAX;
int32_t t79 = 2861226;
int8_t x349 = INT8_MIN;
int32_t x353 = -110054873;
static int64_t x357 = INT64_MIN;
static volatile uint64_t x365 = 1000LLU;
static int8_t x370 = -1;
int32_t x373 = INT32_MIN;
uint8_t x375 = UINT8_MAX;
int64_t x379 = INT64_MIN;
volatile int32_t t87 = 474;
int16_t x382 = -2;
static volatile uint8_t x384 = UINT8_MAX;
volatile int8_t x388 = -1;
int32_t t89 = 1068039;
int64_t x397 = 29930276866890539LL;
uint16_t x400 = 235U;
int8_t x414 = INT8_MIN;
static int64_t x418 = 9372972946295994LL;
int64_t x430 = INT64_MIN;
static uint8_t x432 = 0U;
static int32_t t98 = 89903137;
static int8_t x436 = 0;


void f0(void) {
	static volatile int8_t x1 = -3;
	int32_t x2 = INT32_MIN;
	int64_t x3 = 58550507285243LL;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -6;

	t0 = ((x1<=x2)<=(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint16_t x6 = 6U;
	static volatile int16_t x7 = 39;
	uint32_t x8 = 492U;
	static volatile int32_t t1 = -10144;

	t1 = ((x5<=x6)<=(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static uint16_t x11 = 6363U;
	uint16_t x12 = 16520U;
	int32_t t2 = 254457017;

	t2 = ((x9<=x10)<=(x11+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x17 = UINT32_MAX;
	volatile uint32_t x19 = 1551U;
	uint16_t x20 = 3744U;

	t3 = ((x17<=x18)<=(x19+x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x21 = 1881554181LLU;
	int64_t x22 = INT64_MAX;
	int64_t x23 = INT64_MIN;
	int32_t t4 = 658693;

	t4 = ((x21<=x22)<=(x23+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 39223444264LLU;
	int64_t x26 = INT64_MAX;
	int64_t x27 = INT64_MIN;
	int8_t x28 = 19;
	int32_t t5 = -306555019;

	t5 = ((x25<=x26)<=(x27+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = INT32_MIN;
	volatile int16_t x31 = INT16_MAX;
	int32_t x32 = 31363506;
	int32_t t6 = -46;

	t6 = ((x29<=x30)<=(x31+x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = -264;
	volatile int8_t x35 = INT8_MAX;
	volatile uint64_t x36 = 7LLU;
	volatile int32_t t7 = -27;

	t7 = ((x33<=x34)<=(x35+x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = UINT64_MAX;
	static int32_t x38 = INT32_MIN;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 1619U;

	t8 = ((x37<=x38)<=(x39+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x42 = 14334088LLU;
	int64_t x43 = 2298054765837037629LL;
	static uint16_t x44 = 17U;

	t9 = ((x41<=x42)<=(x43+x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	int32_t x46 = 0;
	int16_t x47 = INT16_MIN;
	int32_t t10 = 1;

	t10 = ((x45<=x46)<=(x47+x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	uint32_t x51 = 1091890U;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t11 = -115746;

	t11 = ((x49<=x50)<=(x51+x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 1U;
	int32_t x55 = 1335;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t12 = 133;

	t12 = ((x53<=x54)<=(x55+x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 20246483;
	int16_t x59 = INT16_MIN;
	int8_t x60 = 9;
	int32_t t13 = -9;

	t13 = ((x57<=x58)<=(x59+x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	uint32_t x62 = 181979U;
	int8_t x63 = 0;
	static uint32_t x64 = 90U;
	int32_t t14 = 8;

	t14 = ((x61<=x62)<=(x63+x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -1;
	int8_t x70 = 2;
	static int64_t x71 = 67963LL;
	volatile uint8_t x72 = UINT8_MAX;
	static volatile int32_t t15 = 768684;

	t15 = ((x69<=x70)<=(x71+x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x74 = 15U;
	static volatile int64_t x75 = -205385092950317518LL;
	static uint64_t x76 = UINT64_MAX;
	int32_t t16 = -1204290;

	t16 = ((x73<=x74)<=(x75+x76));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x78 = UINT8_MAX;
	uint32_t x79 = 25636054U;
	static uint16_t x80 = UINT16_MAX;
	volatile int32_t t17 = -1421322;

	t17 = ((x77<=x78)<=(x79+x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -12;
	static uint64_t x82 = 24493293758015477LLU;
	volatile int64_t x84 = -5061483713108312LL;
	int32_t t18 = 0;

	t18 = ((x81<=x82)<=(x83+x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x85 = 1U;
	static int64_t x86 = INT64_MIN;
	uint16_t x87 = 0U;
	int32_t x88 = 987636;
	volatile int32_t t19 = -146571891;

	t19 = ((x85<=x86)<=(x87+x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 20102U;
	uint8_t x90 = UINT8_MAX;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t20 = 67;

	t20 = ((x89<=x90)<=(x91+x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x93 = 40U;
	int64_t x94 = -6815961394905355LL;
	int8_t x95 = INT8_MIN;
	int16_t x96 = INT16_MAX;
	volatile int32_t t21 = 132294778;

	t21 = ((x93<=x94)<=(x95+x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	static int64_t x98 = INT64_MAX;
	static uint64_t x99 = 3363LLU;
	int32_t x100 = -1;
	volatile int32_t t22 = 14586352;

	t22 = ((x97<=x98)<=(x99+x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x101 = UINT16_MAX;
	volatile int16_t x102 = -18;
	int64_t x104 = INT64_MIN;
	static int32_t t23 = 2995692;

	t23 = ((x101<=x102)<=(x103+x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x105 = 4U;
	int32_t x106 = INT32_MIN;
	uint8_t x108 = 5U;
	static volatile int32_t t24 = -1;

	t24 = ((x105<=x106)<=(x107+x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 256101U;
	static int64_t x110 = -8705701130939LL;
	int8_t x111 = INT8_MIN;
	volatile uint64_t x112 = 26518LLU;
	static volatile int32_t t25 = 18165672;

	t25 = ((x109<=x110)<=(x111+x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = 1;
	uint32_t x114 = 5394675U;
	uint8_t x115 = 3U;
	int32_t x116 = INT32_MIN;
	static volatile int32_t t26 = 3830989;

	t26 = ((x113<=x114)<=(x115+x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = -1;
	static int16_t x119 = -1;
	uint8_t x120 = 51U;
	volatile int32_t t27 = 52;

	t27 = ((x117<=x118)<=(x119+x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	volatile int8_t x122 = INT8_MAX;
	static uint8_t x123 = UINT8_MAX;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t28 = 101;

	t28 = ((x121<=x122)<=(x123+x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x130 = INT8_MAX;
	uint8_t x131 = 4U;
	uint64_t x132 = UINT64_MAX;
	int32_t t29 = -102114;

	t29 = ((x129<=x130)<=(x131+x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MAX;
	uint32_t x134 = 96107U;
	int32_t x135 = INT32_MIN;
	volatile int64_t x136 = INT64_MAX;
	int32_t t30 = -22337314;

	t30 = ((x133<=x134)<=(x135+x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = -1;
	static volatile uint32_t x139 = UINT32_MAX;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t31 = 164;

	t31 = ((x137<=x138)<=(x139+x140));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = UINT64_MAX;
	volatile int16_t x142 = -1;
	volatile int64_t x143 = 7181257375868892LL;
	int32_t t32 = 9;

	t32 = ((x141<=x142)<=(x143+x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MAX;
	int8_t x146 = -3;
	uint64_t x147 = UINT64_MAX;
	static int16_t x148 = INT16_MAX;
	volatile int32_t t33 = -13415075;

	t33 = ((x145<=x146)<=(x147+x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x150 = -1LL;
	uint8_t x151 = 1U;
	volatile uint16_t x152 = 0U;
	volatile int32_t t34 = 3252;

	t34 = ((x149<=x150)<=(x151+x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 3U;
	int16_t x154 = INT16_MAX;
	uint8_t x155 = 97U;
	int16_t x156 = INT16_MIN;
	volatile int32_t t35 = -50294;

	t35 = ((x153<=x154)<=(x155+x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x158 = 16U;
	int8_t x160 = INT8_MIN;
	int32_t t36 = -185258006;

	t36 = ((x157<=x158)<=(x159+x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x162 = 5804;
	int16_t x163 = -1;
	static int16_t x164 = INT16_MAX;

	t37 = ((x161<=x162)<=(x163+x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x166 = 57;
	volatile int16_t x167 = -2;
	static volatile int32_t t38 = -1954;

	t38 = ((x165<=x166)<=(x167+x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = 63;
	uint32_t x170 = 31016U;
	static volatile int32_t x172 = -1;
	volatile int32_t t39 = -148;

	t39 = ((x169<=x170)<=(x171+x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 791645821U;
	uint64_t x174 = UINT64_MAX;
	int8_t x175 = -3;
	int8_t x176 = INT8_MAX;
	volatile int32_t t40 = -3850;

	t40 = ((x173<=x174)<=(x175+x176));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x178 = -162150145;
	int8_t x179 = -15;
	int64_t x180 = -1LL;
	int32_t t41 = 458196954;

	t41 = ((x177<=x178)<=(x179+x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = UINT8_MAX;
	volatile uint64_t x183 = 3225883241739845LLU;
	static int8_t x184 = 0;
	int32_t t42 = 28783209;

	t42 = ((x181<=x182)<=(x183+x184));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = UINT16_MAX;
	static uint64_t x186 = 9LLU;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = 2674398707LLU;
	int32_t t43 = 7942;

	t43 = ((x185<=x186)<=(x187+x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = -101777317LL;
	static uint8_t x191 = 72U;
	static volatile int16_t x192 = 1;
	static int32_t t44 = 24;

	t44 = ((x189<=x190)<=(x191+x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x194 = INT8_MIN;
	int16_t x195 = 8700;
	volatile int32_t t45 = 994998;

	t45 = ((x193<=x194)<=(x195+x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x197 = INT16_MIN;
	volatile uint8_t x198 = 1U;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t46 = 578685;

	t46 = ((x197<=x198)<=(x199+x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = -896;
	volatile uint64_t x206 = 279723132562LLU;
	volatile int32_t x207 = -52;
	int32_t x208 = -364;
	int32_t t47 = 173892059;

	t47 = ((x205<=x206)<=(x207+x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = -62;
	int64_t x210 = INT64_MIN;
	uint8_t x212 = 2U;
	static int32_t t48 = 113;

	t48 = ((x209<=x210)<=(x211+x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = -62;
	static uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MIN;
	volatile uint8_t x216 = 1U;

	t49 = ((x213<=x214)<=(x215+x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MIN;
	static volatile uint8_t x218 = 17U;
	int16_t x219 = 3736;

	t50 = ((x217<=x218)<=(x219+x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = -241445816LL;
	static int32_t x226 = INT32_MIN;
	uint16_t x227 = UINT16_MAX;

	t51 = ((x225<=x226)<=(x227+x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x229 = 55U;
	static uint16_t x232 = UINT16_MAX;
	static volatile int32_t t52 = 118089;

	t52 = ((x229<=x230)<=(x231+x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 34483222286113054LLU;
	static int32_t x234 = INT32_MIN;
	volatile int64_t x235 = -1LL;
	int8_t x236 = INT8_MAX;
	int32_t t53 = 24;

	t53 = ((x233<=x234)<=(x235+x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MIN;
	int64_t x238 = -25LL;
	int8_t x239 = INT8_MIN;

	t54 = ((x237<=x238)<=(x239+x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MIN;
	volatile int32_t t55 = 2656;

	t55 = ((x241<=x242)<=(x243+x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x245 = UINT64_MAX;
	static volatile uint8_t x246 = UINT8_MAX;

	t56 = ((x245<=x246)<=(x247+x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x250 = INT64_MIN;
	uint16_t x251 = UINT16_MAX;
	volatile uint16_t x252 = 7448U;

	t57 = ((x249<=x250)<=(x251+x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = -1;
	uint16_t x254 = 4337U;
	int64_t x255 = 2613039347780908134LL;

	t58 = ((x253<=x254)<=(x255+x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x259 = -1;

	t59 = ((x257<=x258)<=(x259+x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = -37130630;
	int64_t x263 = 52432672LL;
	int8_t x264 = -1;
	volatile int32_t t60 = -921;

	t60 = ((x261<=x262)<=(x263+x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x266 = 0;
	static uint64_t x268 = 2184217690LLU;
	volatile int32_t t61 = 3402;

	t61 = ((x265<=x266)<=(x267+x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x269 = 11745U;
	int8_t x271 = -23;
	uint8_t x272 = 1U;
	static int32_t t62 = -50;

	t62 = ((x269<=x270)<=(x271+x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MIN;
	static int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = UINT64_MAX;
	int32_t t63 = -1;

	t63 = ((x273<=x274)<=(x275+x276));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	volatile int8_t x279 = INT8_MIN;
	static int16_t x280 = 21;
	volatile int32_t t64 = -48005937;

	t64 = ((x277<=x278)<=(x279+x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MAX;
	static uint16_t x282 = 18594U;
	uint16_t x284 = 12120U;
	int32_t t65 = 13;

	t65 = ((x281<=x282)<=(x283+x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = UINT64_MAX;
	static uint16_t x287 = 10U;
	int16_t x288 = 0;
	int32_t t66 = 17;

	t66 = ((x285<=x286)<=(x287+x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x289 = -8;
	uint32_t x290 = 211727237U;
	uint64_t x291 = 1149450176567LLU;
	volatile int32_t t67 = 1;

	t67 = ((x289<=x290)<=(x291+x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = -1LL;
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = 5;
	int16_t x300 = INT16_MIN;
	static int32_t t68 = 10214;

	t68 = ((x297<=x298)<=(x299+x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x302 = 0LLU;
	volatile int32_t x303 = 168934;
	int32_t x304 = INT32_MIN;
	int32_t t69 = -14;

	t69 = ((x301<=x302)<=(x303+x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x305 = 7U;
	int64_t x306 = 123615LL;
	int8_t x307 = 0;
	int8_t x308 = 0;
	volatile int32_t t70 = -1;

	t70 = ((x305<=x306)<=(x307+x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MAX;
	static uint16_t x311 = 18128U;
	static int16_t x312 = 461;

	t71 = ((x309<=x310)<=(x311+x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x317 = INT8_MAX;
	uint32_t x318 = UINT32_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	int16_t x320 = 109;

	t72 = ((x317<=x318)<=(x319+x320));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = INT32_MIN;
	static uint32_t x322 = 74308U;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t73 = 355495202;

	t73 = ((x321<=x322)<=(x323+x324));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = UINT16_MAX;
	static uint8_t x326 = 24U;
	uint64_t x327 = 1LLU;
	int64_t x328 = INT64_MIN;
	volatile int32_t t74 = -13689372;

	t74 = ((x325<=x326)<=(x327+x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x329 = -1;
	int8_t x330 = -1;
	static volatile int8_t x331 = -1;

	t75 = ((x329<=x330)<=(x331+x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = -1;
	int32_t x334 = -1;
	uint16_t x335 = 3U;
	volatile int32_t t76 = 0;

	t76 = ((x333<=x334)<=(x335+x336));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	volatile int64_t x338 = -31724056718577771LL;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t77 = 69061027;

	t77 = ((x337<=x338)<=(x339+x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x342 = 23495578567LL;
	static int16_t x343 = -1;
	int64_t x344 = 33996576274939942LL;
	int32_t t78 = 103;

	t78 = ((x341<=x342)<=(x343+x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x345 = 36;
	int32_t x346 = INT32_MAX;
	int32_t x347 = INT32_MIN;

	t79 = ((x345<=x346)<=(x347+x348));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x350 = 1968LLU;
	uint16_t x351 = UINT16_MAX;
	volatile int32_t x352 = 1;
	volatile int32_t t80 = -102;

	t80 = ((x349<=x350)<=(x351+x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x354 = -1LL;
	static int64_t x355 = -656691620186420LL;
	uint8_t x356 = 13U;
	static volatile int32_t t81 = -3560399;

	t81 = ((x353<=x354)<=(x355+x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x358 = 15221U;
	static uint32_t x359 = 409U;
	uint64_t x360 = 126390LLU;
	static volatile int32_t t82 = 342328283;

	t82 = ((x357<=x358)<=(x359+x360));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x361 = 20U;
	uint32_t x362 = 214U;
	int32_t x363 = -1;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t83 = 8819790;

	t83 = ((x361<=x362)<=(x363+x364));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x366 = UINT8_MAX;
	int64_t x367 = INT64_MAX;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t84 = 46;

	t84 = ((x365<=x366)<=(x367+x368));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x369 = 22361U;
	static volatile uint8_t x371 = UINT8_MAX;
	static uint32_t x372 = 251U;
	volatile int32_t t85 = 32376;

	t85 = ((x369<=x370)<=(x371+x372));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x374 = 134216610937LLU;
	int64_t x376 = INT64_MIN;
	int32_t t86 = -32525;

	t86 = ((x373<=x374)<=(x375+x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = -25;
	uint8_t x378 = 7U;
	static int32_t x380 = 5131860;

	t87 = ((x377<=x378)<=(x379+x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x383 = INT64_MIN;
	volatile int32_t t88 = -4823551;

	t88 = ((x381<=x382)<=(x383+x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x385 = 805812531LLU;
	int16_t x386 = -1;
	int64_t x387 = INT64_MAX;

	t89 = ((x385<=x386)<=(x387+x388));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x389 = 2U;
	uint32_t x390 = 7204587U;
	uint32_t x391 = UINT32_MAX;
	int64_t x392 = 440247595126708408LL;
	int32_t t90 = 1793025;

	t90 = ((x389<=x390)<=(x391+x392));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x398 = -1;
	uint64_t x399 = 6715908382LLU;
	volatile int32_t t91 = 16958210;

	t91 = ((x397<=x398)<=(x399+x400));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = 2945019542825347084LL;
	uint64_t x402 = 82273629LLU;
	uint8_t x403 = 0U;
	int8_t x404 = INT8_MAX;
	int32_t t92 = 0;

	t92 = ((x401<=x402)<=(x403+x404));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x409 = UINT8_MAX;
	volatile uint64_t x410 = UINT64_MAX;
	uint8_t x411 = 5U;
	int16_t x412 = INT16_MAX;
	int32_t t93 = -53722739;

	t93 = ((x409<=x410)<=(x411+x412));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = INT8_MIN;
	int64_t x415 = INT64_MIN;
	uint16_t x416 = UINT16_MAX;
	int32_t t94 = 39;

	t94 = ((x413<=x414)<=(x415+x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MIN;
	uint8_t x419 = 1U;
	int16_t x420 = INT16_MAX;
	static int32_t t95 = 446676;

	t95 = ((x417<=x418)<=(x419+x420));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = INT8_MIN;
	static uint64_t x422 = 179838845468029LLU;
	volatile uint8_t x423 = 118U;
	volatile uint8_t x424 = 80U;
	int32_t t96 = 748;

	t96 = ((x421<=x422)<=(x423+x424));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x425 = 816232295259296214LLU;
	int64_t x426 = INT64_MIN;
	static volatile int64_t x427 = -1LL;
	int32_t x428 = -1;
	int32_t t97 = -2149230;

	t97 = ((x425<=x426)<=(x427+x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x429 = INT16_MIN;
	volatile int16_t x431 = INT16_MIN;

	t98 = ((x429<=x430)<=(x431+x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x433 = -67760;
	int16_t x434 = -2641;
	int8_t x435 = -1;
	static int32_t t99 = -6530120;

	t99 = ((x433<=x434)<=(x435+x436));

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

