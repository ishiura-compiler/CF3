#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 0;
int16_t x10 = -1;
int32_t x11 = -236;
uint8_t x12 = UINT8_MAX;
volatile uint16_t x31 = UINT16_MAX;
static volatile int64_t t7 = 54479252558423952LL;
int8_t x34 = -17;
uint64_t x37 = 3119773LLU;
uint64_t x38 = 1318298588394LLU;
volatile uint8_t x39 = 2U;
int16_t x40 = -1;
uint8_t x43 = 58U;
int8_t x44 = INT8_MIN;
int64_t x49 = INT64_MIN;
volatile int64_t t12 = INT64_MIN;
int32_t t14 = 903;
int32_t t15 = 11027;
volatile int32_t t16 = -3253259;
int64_t x71 = -1LL;
volatile int32_t t17 = 26;
int32_t t18 = 3920720;
volatile uint16_t x77 = 392U;
int16_t x79 = INT16_MIN;
static int32_t x83 = INT32_MAX;
volatile uint32_t x87 = 2121545U;
int64_t x88 = -1LL;
uint8_t x93 = 2U;
int32_t x95 = INT32_MAX;
volatile int32_t t23 = -62;
static int32_t x103 = 46581712;
int8_t x104 = 8;
int32_t t24 = INT32_MIN;
static uint64_t x106 = 32802558966919LLU;
int64_t x109 = -1LL;
static volatile int8_t x111 = 7;
int64_t t28 = -31854969191553190LL;
int8_t x121 = INT8_MAX;
volatile uint32_t x124 = 10515U;
uint8_t x126 = 2U;
int32_t x132 = INT32_MIN;
static int32_t x134 = 18547794;
static volatile uint64_t x145 = UINT64_MAX;
uint64_t x150 = UINT64_MAX;
int8_t x153 = INT8_MIN;
int32_t x160 = -1;
static volatile int32_t x163 = INT32_MIN;
int32_t x180 = 853513;
int32_t t43 = -9;
int64_t x183 = -1LL;
int64_t x184 = -5LL;
int8_t x189 = -1;
int32_t x190 = INT32_MIN;
int8_t x191 = -1;
volatile uint32_t x211 = UINT32_MAX;
int32_t x218 = 63882324;
volatile int16_t x219 = INT16_MIN;
int16_t x222 = -3693;
int64_t x240 = 1112599388730LL;
int8_t x241 = INT8_MIN;
uint16_t x252 = 1761U;
uint32_t x253 = 104U;
int8_t x254 = INT8_MIN;
volatile uint32_t t61 = 15U;
static int16_t x267 = -1;
int8_t x272 = -26;
uint64_t x275 = 11202851241988LLU;
int32_t x278 = -371;
int8_t x283 = INT8_MIN;
volatile int32_t t68 = 341789458;
static int32_t t69 = -13382612;
static volatile uint64_t x292 = UINT64_MAX;
volatile int32_t t71 = -2;
int8_t x297 = INT8_MAX;
int16_t x300 = INT16_MIN;
volatile int32_t t72 = 514257;
uint64_t x302 = 49830534LLU;
int64_t x303 = INT64_MAX;
uint32_t x304 = 1U;
volatile int64_t t73 = INT64_MAX;
int8_t x305 = INT8_MIN;
int64_t x306 = INT64_MIN;
uint16_t x307 = 118U;
uint32_t x311 = 936645U;
static volatile int64_t x314 = INT64_MIN;
int32_t x316 = INT32_MIN;
volatile int32_t x320 = 20;
volatile uint64_t t77 = UINT64_MAX;
int8_t x322 = INT8_MIN;
static volatile int16_t x327 = 86;
uint16_t x334 = 47U;
volatile int32_t t81 = 0;
static int8_t x338 = INT8_MIN;
int32_t t82 = 778135312;
static uint8_t x357 = UINT8_MAX;
int16_t x368 = INT16_MIN;
static uint8_t x369 = UINT8_MAX;
int16_t x370 = -1;
int8_t x381 = INT8_MIN;
int64_t x388 = 32332344246LL;
int64_t x396 = INT64_MAX;
uint64_t t96 = UINT64_MAX;
int64_t x398 = 406923169219188614LL;


void f0(void) {
	int32_t x1 = 10;
	uint64_t x3 = UINT64_MAX;
	static int32_t x4 = 10556304;
	int32_t t0 = -10;

	t0 = (x1|((x2%x3)==x4));

	if (t0 != 10) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile uint64_t x6 = 2173122LLU;
	volatile int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = -125680947;

	t1 = (x5|((x6%x7)==x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint32_t t2 = UINT32_MAX;

	t2 = (x9|((x10%x11)==x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 2U;
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = 112694866;

	t3 = (x13|((x14%x15)==x16));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	static uint64_t x18 = 393144955144LLU;
	volatile uint64_t x19 = UINT64_MAX;
	volatile uint8_t x20 = UINT8_MAX;
	uint64_t t4 = UINT64_MAX;

	t4 = (x17|((x18%x19)==x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	volatile uint16_t x22 = 1U;
	int32_t x23 = -1;
	uint64_t x24 = UINT64_MAX;
	uint32_t t5 = UINT32_MAX;

	t5 = (x21|((x22%x23)==x24));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	int32_t x26 = -42208840;
	uint16_t x27 = 742U;
	int16_t x28 = -1;
	volatile int32_t t6 = 1126;

	t6 = (x25|((x26%x27)==x28));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = -154210436LL;
	int8_t x30 = INT8_MIN;
	static int32_t x32 = -1;

	t7 = (x29|((x30%x31)==x32));

	if (t7 != -154210436LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 56U;
	int32_t x35 = INT32_MAX;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -1;

	t8 = (x33|((x34%x35)==x36));

	if (t8 != 56) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t t9 = 2770LLU;

	t9 = (x37|((x38%x39)==x40));

	if (t9 != 3119773LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 239U;
	int8_t x42 = 1;
	static uint32_t t10 = 68637U;

	t10 = (x41|((x42%x43)==x44));

	if (t10 != 239U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	static int8_t x46 = -1;
	uint8_t x47 = 79U;
	uint8_t x48 = UINT8_MAX;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (x45|((x46%x47)==x48));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = 0;
	int16_t x51 = -1215;
	int32_t x52 = INT32_MIN;

	t12 = (x49|((x50%x51)==x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	static int32_t x54 = 139289;
	uint32_t x55 = UINT32_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 351;

	t13 = (x53|((x54%x55)==x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MAX;
	uint32_t x58 = 111827999U;
	int32_t x59 = INT32_MIN;
	int64_t x60 = -121380547LL;

	t14 = (x57|((x58%x59)==x60));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int32_t x62 = INT32_MIN;
	uint64_t x63 = 19851LLU;
	int32_t x64 = -1;

	t15 = (x61|((x62%x63)==x64));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	volatile int64_t x66 = 7263520465567459LL;
	int16_t x67 = 225;
	int8_t x68 = -3;

	t16 = (x65|((x66%x67)==x68));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static int16_t x70 = 1;
	static uint16_t x72 = 1593U;

	t17 = (x69|((x70%x71)==x72));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int16_t x74 = INT16_MIN;
	static uint64_t x75 = 134615116409062214LLU;
	int64_t x76 = INT64_MIN;

	t18 = (x73|((x74%x75)==x76));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x78 = -1;
	uint32_t x80 = 7U;
	int32_t t19 = -72;

	t19 = (x77|((x78%x79)==x80));

	if (t19 != 392) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MIN;
	static uint16_t x84 = 6U;
	static volatile int32_t t20 = -21031;

	t20 = (x81|((x82%x83)==x84));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int8_t x86 = 0;
	volatile int64_t t21 = INT64_MIN;

	t21 = (x85|((x86%x87)==x88));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = INT16_MAX;
	uint8_t x96 = 53U;
	volatile int32_t t22 = -834;

	t22 = (x93|((x94%x95)==x96));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MIN;
	static volatile uint8_t x98 = 0U;
	int64_t x99 = -1LL;
	int8_t x100 = -7;

	t23 = (x97|((x98%x99)==x100));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MIN;
	volatile uint32_t x102 = 255934U;

	t24 = (x101|((x102%x103)==x104));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = -1LL;
	int8_t x107 = INT8_MIN;
	uint32_t x108 = UINT32_MAX;
	static volatile int64_t t25 = 6832226105315LL;

	t25 = (x105|((x106%x107)==x108));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x110 = INT64_MIN;
	int16_t x112 = -8754;
	volatile int64_t t26 = -1152049390378197LL;

	t26 = (x109|((x110%x111)==x112));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = -1;
	uint32_t x115 = 37U;
	uint32_t x116 = 54472658U;
	int32_t t27 = 10;

	t27 = (x113|((x114%x115)==x116));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 538017735926LL;
	int64_t x118 = 3701922LL;
	volatile uint8_t x119 = 46U;
	int8_t x120 = 2;

	t28 = (x117|((x118%x119)==x120));

	if (t28 != 538017735926LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x122 = UINT32_MAX;
	static int8_t x123 = 32;
	int32_t t29 = -31035692;

	t29 = (x121|((x122%x123)==x124));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = UINT64_MAX;
	int8_t x127 = INT8_MIN;
	static volatile uint64_t x128 = 446632592462750845LLU;
	uint64_t t30 = UINT64_MAX;

	t30 = (x125|((x126%x127)==x128));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x129 = UINT32_MAX;
	volatile uint8_t x130 = 0U;
	volatile int8_t x131 = INT8_MIN;
	uint32_t t31 = UINT32_MAX;

	t31 = (x129|((x130%x131)==x132));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 70978344LLU;
	static int8_t x135 = INT8_MIN;
	int8_t x136 = -2;
	uint64_t t32 = 735LLU;

	t32 = (x133|((x134%x135)==x136));

	if (t32 != 70978344LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x137 = 1045934U;
	volatile int8_t x138 = INT8_MAX;
	static int32_t x139 = -2682710;
	volatile int32_t x140 = 59861;
	volatile uint32_t t33 = 3U;

	t33 = (x137|((x138%x139)==x140));

	if (t33 != 1045934U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x141 = -4;
	volatile int32_t x142 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	static uint8_t x144 = UINT8_MAX;
	volatile int32_t t34 = 16382;

	t34 = (x141|((x142%x143)==x144));

	if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x146 = INT64_MAX;
	volatile int8_t x147 = INT8_MIN;
	int64_t x148 = INT64_MIN;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (x145|((x146%x147)==x148));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	uint16_t x151 = 8U;
	int32_t x152 = INT32_MIN;
	int32_t t36 = 230113902;

	t36 = (x149|((x150%x151)==x152));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = -1;
	volatile int8_t x155 = -1;
	int16_t x156 = INT16_MIN;
	volatile int32_t t37 = -15;

	t37 = (x153|((x154%x155)==x156));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MIN;
	int32_t x159 = 989932529;
	int32_t t38 = -48862;

	t38 = (x157|((x158%x159)==x160));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = 120LL;
	uint8_t x162 = UINT8_MAX;
	int32_t x164 = INT32_MAX;
	volatile int64_t t39 = -550608875686502556LL;

	t39 = (x161|((x162%x163)==x164));

	if (t39 != 120LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = -1;
	int32_t x166 = -1;
	int16_t x167 = -1;
	uint64_t x168 = 415488439989LLU;
	static int32_t t40 = -709494101;

	t40 = (x165|((x166%x167)==x168));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = INT64_MAX;
	int64_t x170 = INT64_MAX;
	volatile int8_t x171 = -1;
	uint64_t x172 = UINT64_MAX;
	volatile int64_t t41 = INT64_MAX;

	t41 = (x169|((x170%x171)==x172));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x173 = 1376722461LLU;
	volatile int64_t x174 = -1LL;
	static int16_t x175 = -867;
	int32_t x176 = INT32_MAX;
	uint64_t t42 = 90273093741488306LLU;

	t42 = (x173|((x174%x175)==x176));

	if (t42 != 1376722461LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x178 = -1;
	int32_t x179 = 1;

	t43 = (x177|((x178%x179)==x180));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x181 = 1;
	uint32_t x182 = UINT32_MAX;
	int32_t t44 = 850081;

	t44 = (x181|((x182%x183)==x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x185 = INT32_MAX;
	volatile int16_t x186 = 204;
	static int16_t x187 = INT16_MIN;
	static int8_t x188 = INT8_MAX;
	static int32_t t45 = INT32_MAX;

	t45 = (x185|((x186%x187)==x188));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x192 = INT8_MIN;
	volatile int32_t t46 = -223312599;

	t46 = (x189|((x190%x191)==x192));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x193 = INT32_MIN;
	volatile int32_t x194 = 565;
	volatile int16_t x195 = INT16_MAX;
	uint8_t x196 = 1U;
	int32_t t47 = INT32_MIN;

	t47 = (x193|((x194%x195)==x196));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x198 = -1;
	int32_t x199 = INT32_MAX;
	int16_t x200 = INT16_MAX;
	static volatile uint64_t t48 = UINT64_MAX;

	t48 = (x197|((x198%x199)==x200));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -1LL;
	static uint64_t x202 = 49081978LLU;
	uint8_t x203 = 9U;
	int8_t x204 = 0;
	int64_t t49 = -569LL;

	t49 = (x201|((x202%x203)==x204));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x209 = INT64_MIN;
	volatile int64_t x210 = -1LL;
	static uint8_t x212 = 3U;
	volatile int64_t t50 = INT64_MIN;

	t50 = (x209|((x210%x211)==x212));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 6692297LLU;
	int32_t x214 = INT32_MAX;
	uint64_t x215 = 36403134LLU;
	uint64_t x216 = 250LLU;
	uint64_t t51 = 486726151269140861LLU;

	t51 = (x213|((x214%x215)==x216));

	if (t51 != 6692297LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x217 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	volatile int32_t t52 = -223;

	t52 = (x217|((x218%x219)==x220));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x221 = 29U;
	int8_t x223 = INT8_MIN;
	int16_t x224 = -1;
	int32_t t53 = -2057605;

	t53 = (x221|((x222%x223)==x224));

	if (t53 != 29) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x225 = 100103U;
	uint16_t x226 = 0U;
	static volatile int16_t x227 = INT16_MIN;
	uint16_t x228 = 13506U;
	uint32_t t54 = 8965U;

	t54 = (x225|((x226%x227)==x228));

	if (t54 != 100103U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -1;
	int32_t x230 = INT32_MIN;
	uint64_t x231 = 73710140315LLU;
	static uint8_t x232 = UINT8_MAX;
	volatile int32_t t55 = 323467719;

	t55 = (x229|((x230%x231)==x232));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = -1LL;
	volatile uint64_t x234 = 9LLU;
	uint16_t x235 = 9U;
	uint32_t x236 = 54666776U;
	int64_t t56 = 55638826LL;

	t56 = (x233|((x234%x235)==x236));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = 6;
	int64_t x238 = 69039527450972LL;
	uint8_t x239 = UINT8_MAX;
	int32_t t57 = 98;

	t57 = (x237|((x238%x239)==x240));

	if (t57 != 6) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x242 = -1;
	volatile int16_t x243 = INT16_MIN;
	volatile uint32_t x244 = 180713U;
	static volatile int32_t t58 = -17292259;

	t58 = (x241|((x242%x243)==x244));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	volatile int8_t x246 = INT8_MIN;
	uint32_t x247 = 2358U;
	static int64_t x248 = INT64_MIN;
	int32_t t59 = -1916325;

	t59 = (x245|((x246%x247)==x248));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 88611LLU;
	int32_t x250 = INT32_MIN;
	static volatile uint64_t x251 = 59881427232LLU;
	uint64_t t60 = 11LLU;

	t60 = (x249|((x250%x251)==x252));

	if (t60 != 88611LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x255 = 899745359U;
	volatile int8_t x256 = INT8_MIN;

	t61 = (x253|((x254%x255)==x256));

	if (t61 != 104U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x257 = INT32_MAX;
	int16_t x258 = INT16_MAX;
	uint16_t x259 = 39U;
	volatile int16_t x260 = 315;
	int32_t t62 = INT32_MAX;

	t62 = (x257|((x258%x259)==x260));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = 87U;
	volatile int16_t x262 = -17;
	int32_t x263 = -8464;
	uint16_t x264 = 100U;
	static volatile uint32_t t63 = 2010675U;

	t63 = (x261|((x262%x263)==x264));

	if (t63 != 87U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MAX;
	volatile int8_t x268 = INT8_MAX;
	int32_t t64 = INT32_MIN;

	t64 = (x265|((x266%x267)==x268));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = 4LL;
	uint64_t x270 = 1LLU;
	uint32_t x271 = UINT32_MAX;
	int64_t t65 = 1706LL;

	t65 = (x269|((x270%x271)==x272));

	if (t65 != 4LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = 10904;
	uint8_t x274 = 3U;
	volatile int32_t x276 = INT32_MIN;
	int32_t t66 = 3229623;

	t66 = (x273|((x274%x275)==x276));

	if (t66 != 10904) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	int64_t x279 = -101242851139LL;
	static int32_t x280 = INT32_MIN;
	int32_t t67 = -1;

	t67 = (x277|((x278%x279)==x280));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x281 = 2751U;
	int64_t x282 = INT64_MIN;
	int64_t x284 = 6536862LL;

	t68 = (x281|((x282%x283)==x284));

	if (t68 != 2751) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -3;
	int16_t x286 = 1995;
	int32_t x287 = INT32_MIN;
	int32_t x288 = -1;

	t69 = (x285|((x286%x287)==x288));

	if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x289 = 1982U;
	volatile int64_t x290 = INT64_MIN;
	int8_t x291 = 1;
	volatile uint32_t t70 = 2394U;

	t70 = (x289|((x290%x291)==x292));

	if (t70 != 1982U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x293 = INT16_MIN;
	static volatile int64_t x294 = 239LL;
	static uint16_t x295 = 5U;
	uint32_t x296 = 14616617U;

	t71 = (x293|((x294%x295)==x296));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x298 = 1U;
	volatile int8_t x299 = INT8_MIN;

	t72 = (x297|((x298%x299)==x300));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MAX;

	t73 = (x301|((x302%x303)==x304));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x308 = -29;
	volatile int32_t t74 = 45720529;

	t74 = (x305|((x306%x307)==x308));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = INT64_MIN;
	static volatile uint8_t x310 = 0U;
	int16_t x312 = INT16_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (x309|((x310%x311)==x312));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x313 = -1757;
	uint64_t x315 = 85551598040LLU;
	int32_t t76 = -28740941;

	t76 = (x313|((x314%x315)==x316));

	if (t76 != -1757) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x317 = UINT64_MAX;
	int8_t x318 = -1;
	uint8_t x319 = UINT8_MAX;

	t77 = (x317|((x318%x319)==x320));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MIN;
	uint32_t x323 = 148882046U;
	uint32_t x324 = 48U;
	static int32_t t78 = INT32_MIN;

	t78 = (x321|((x322%x323)==x324));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = 19431U;
	uint32_t x326 = 12323U;
	int64_t x328 = INT64_MIN;
	uint32_t t79 = 829900440U;

	t79 = (x325|((x326%x327)==x328));

	if (t79 != 19431U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = UINT16_MAX;
	static uint32_t x330 = 13U;
	uint32_t x331 = UINT32_MAX;
	volatile int8_t x332 = INT8_MIN;
	static int32_t t80 = -806982196;

	t80 = (x329|((x330%x331)==x332));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x333 = UINT16_MAX;
	static uint64_t x335 = 226790575LLU;
	uint32_t x336 = UINT32_MAX;

	t81 = (x333|((x334%x335)==x336));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = UINT8_MAX;
	int64_t x339 = -553469201856815131LL;
	int64_t x340 = INT64_MAX;

	t82 = (x337|((x338%x339)==x340));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x341 = 113U;
	static int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	static int8_t x344 = INT8_MIN;
	int32_t t83 = -1;

	t83 = (x341|((x342%x343)==x344));

	if (t83 != 113) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = -5974347993064098LL;
	static int16_t x346 = -445;
	volatile int32_t x347 = 104;
	int16_t x348 = INT16_MAX;
	static volatile int64_t t84 = -128149479LL;

	t84 = (x345|((x346%x347)==x348));

	if (t84 != -5974347993064098LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MIN;
	static int8_t x350 = INT8_MAX;
	int32_t x351 = INT32_MIN;
	volatile uint32_t x352 = UINT32_MAX;
	volatile int32_t t85 = 1;

	t85 = (x349|((x350%x351)==x352));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x353 = INT16_MIN;
	int32_t x354 = -19890;
	int64_t x355 = INT64_MAX;
	volatile uint64_t x356 = 1830372LLU;
	int32_t t86 = -937;

	t86 = (x353|((x354%x355)==x356));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x358 = 5U;
	volatile int8_t x359 = -4;
	volatile int32_t x360 = -277;
	int32_t t87 = 59;

	t87 = (x357|((x358%x359)==x360));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = 7592124U;
	int16_t x362 = INT16_MIN;
	static int32_t x363 = -124696660;
	uint64_t x364 = 58774284735371709LLU;
	volatile uint32_t t88 = 24921U;

	t88 = (x361|((x362%x363)==x364));

	if (t88 != 7592124U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x365 = -1;
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = -1;
	volatile int32_t t89 = -624429161;

	t89 = (x365|((x366%x367)==x368));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x371 = INT16_MIN;
	int64_t x372 = -59034552LL;
	volatile int32_t t90 = -1742;

	t90 = (x369|((x370%x371)==x372));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MAX;
	int32_t x374 = INT32_MIN;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = 24;
	volatile int32_t t91 = -1838;

	t91 = (x373|((x374%x375)==x376));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = 1474;
	volatile uint16_t x379 = 1561U;
	uint8_t x380 = UINT8_MAX;
	int32_t t92 = 64792;

	t92 = (x377|((x378%x379)==x380));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x382 = 3480LLU;
	int64_t x383 = -1LL;
	int64_t x384 = -5341213280093LL;
	volatile int32_t t93 = 29;

	t93 = (x381|((x382%x383)==x384));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x385 = INT8_MAX;
	uint64_t x386 = 59604514LLU;
	int16_t x387 = -14564;
	volatile int32_t t94 = 91454;

	t94 = (x385|((x386%x387)==x388));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x389 = 3761U;
	uint8_t x390 = UINT8_MAX;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = INT32_MAX;
	volatile int32_t t95 = 258594;

	t95 = (x389|((x390%x391)==x392));

	if (t95 != 3761) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = INT16_MIN;
	static int64_t x395 = INT64_MIN;

	t96 = (x393|((x394%x395)==x396));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = 27819890838LL;
	uint16_t x399 = 1U;
	volatile int16_t x400 = INT16_MAX;
	int64_t t97 = 11465879LL;

	t97 = (x397|((x398%x399)==x400));

	if (t97 != 27819890838LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = -1;
	uint32_t x403 = 1148520U;
	int16_t x404 = INT16_MIN;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x401|((x402%x403)==x404));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = -1LL;
	int16_t x406 = -1;
	int64_t x407 = INT64_MIN;
	int16_t x408 = -1;
	volatile int64_t t99 = -7187967604LL;

	t99 = (x405|((x406%x407)==x408));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

