#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = -62;
volatile int32_t t1 = 2661;
int32_t x15 = 3201;
static int64_t x17 = INT64_MAX;
uint16_t x29 = UINT16_MAX;
int16_t x33 = -1;
int64_t x35 = -1LL;
uint64_t x36 = UINT64_MAX;
static uint32_t x39 = 48U;
int16_t x40 = -1;
int64_t x50 = INT64_MIN;
volatile uint64_t x55 = UINT64_MAX;
int16_t x60 = INT16_MAX;
uint16_t x61 = UINT16_MAX;
int8_t x67 = 1;
volatile int8_t x71 = INT8_MIN;
static int32_t x74 = 25176;
uint64_t x75 = UINT64_MAX;
int32_t x77 = 4375;
int32_t x80 = INT32_MIN;
int32_t t19 = -40;
static int64_t x86 = INT64_MIN;
volatile int8_t x91 = 11;
static volatile int32_t t22 = 2226657;
int64_t x95 = 11LL;
int8_t x97 = -1;
int8_t x102 = 7;
volatile uint64_t x105 = 507010LLU;
static uint8_t x106 = UINT8_MAX;
volatile int32_t x112 = INT32_MIN;
int32_t t28 = -429;
volatile int32_t t29 = -42014806;
int8_t x121 = 0;
int32_t t32 = -8252827;
int8_t x133 = INT8_MIN;
static uint64_t x136 = 60845LLU;
static int32_t x139 = -1;
int8_t x141 = INT8_MAX;
volatile uint64_t x143 = UINT64_MAX;
int32_t t36 = -864;
int32_t x153 = INT32_MIN;
int16_t x159 = 8;
static int32_t t39 = -17514553;
int32_t t40 = -1690;
volatile int8_t x177 = INT8_MIN;
uint32_t x182 = UINT32_MAX;
static volatile int32_t t46 = 42;
static volatile uint8_t x193 = 80U;
volatile int64_t x194 = INT64_MIN;
uint64_t x196 = UINT64_MAX;
int32_t t47 = -19;
uint32_t x210 = UINT32_MAX;
int32_t x216 = -1;
volatile int32_t t54 = -338663949;
int64_t x229 = -1LL;
int32_t x232 = -1;
static uint8_t x234 = 36U;
uint64_t x260 = 11981408353LLU;
int32_t t62 = -169625;
static int32_t x263 = 180;
int32_t x278 = 2924009;
int64_t x280 = -1LL;
int8_t x285 = INT8_MAX;
int32_t t69 = -15;
int8_t x289 = 9;
int16_t x299 = -29;
int16_t x305 = 3;
uint16_t x307 = 32754U;
static uint32_t x308 = 44683334U;
int16_t x310 = 667;
volatile int64_t x311 = INT64_MAX;
int8_t x313 = INT8_MIN;
volatile int16_t x315 = INT16_MIN;
static int16_t x317 = -707;
int64_t x324 = -1LL;
static volatile int32_t t78 = 41902;
int64_t x327 = INT64_MIN;
int32_t t79 = -334490327;
int32_t x335 = INT32_MAX;
volatile int32_t x337 = 3;
volatile int32_t t83 = 33888695;
int64_t x353 = INT64_MAX;
uint16_t x355 = 2184U;
int16_t x356 = INT16_MAX;
int32_t x364 = 62426606;
int16_t x366 = 29;
uint32_t x368 = UINT32_MAX;
int32_t t89 = 8342688;
int8_t x369 = INT8_MIN;
int32_t x370 = 229521207;
int32_t x373 = INT32_MIN;
volatile uint8_t x374 = UINT8_MAX;
static volatile int32_t t91 = -489051;
int8_t x381 = INT8_MIN;
int16_t x386 = -1;
int32_t t94 = 406805677;
static int32_t x396 = INT32_MAX;
volatile int32_t t95 = -36355134;
int32_t t96 = -898;
static uint64_t x401 = UINT64_MAX;
volatile uint8_t x402 = UINT8_MAX;
volatile uint64_t x406 = 3LLU;
int8_t x408 = INT8_MIN;
volatile int32_t t99 = 2;


void f0(void) {
	int16_t x1 = -13907;
	int64_t x2 = -1LL;
	int32_t x3 = INT32_MAX;
	volatile int64_t x4 = INT64_MAX;
	volatile int32_t t0 = -986877581;

	t0 = ((x1/x2)<=(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint16_t x6 = 470U;
	int8_t x7 = -1;

	t1 = ((x5/x6)<=(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	uint32_t x10 = 338275226U;
	int8_t x11 = -1;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 1;

	t2 = ((x9/x10)<=(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 126U;
	volatile int32_t x14 = INT32_MIN;
	uint16_t x16 = 29536U;
	static int32_t t3 = 2421;

	t3 = ((x13/x14)<=(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = 14796U;
	int64_t x19 = 5034134LL;
	volatile int16_t x20 = INT16_MIN;
	int32_t t4 = -96;

	t4 = ((x17/x18)<=(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 79;
	volatile int8_t x22 = -1;
	int16_t x23 = 171;
	uint32_t x24 = 0U;
	static int32_t t5 = 760663;

	t5 = ((x21/x22)<=(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static volatile int16_t x26 = INT16_MAX;
	static int32_t x27 = -2701;
	static uint32_t x28 = 46218798U;
	volatile int32_t t6 = -9427;

	t6 = ((x25/x26)<=(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 14U;
	static uint8_t x31 = 14U;
	static volatile int16_t x32 = INT16_MIN;
	int32_t t7 = -589999539;

	t7 = ((x29/x30)<=(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	volatile int32_t t8 = -6;

	t8 = ((x33/x34)<=(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = -77;
	volatile int8_t x38 = -1;
	volatile int32_t t9 = -2;

	t9 = ((x37/x38)<=(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 24219733U;
	int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MAX;
	static volatile int8_t x44 = -1;
	volatile int32_t t10 = -21;

	t10 = ((x41/x42)<=(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int64_t x46 = -604406882036082522LL;
	int64_t x47 = INT64_MAX;
	int8_t x48 = -1;
	int32_t t11 = 15142654;

	t11 = ((x45/x46)<=(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 47284198LLU;
	static uint64_t x51 = 157LLU;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -73135408;

	t12 = ((x49/x50)<=(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	static int64_t x54 = INT64_MAX;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 22131;

	t13 = ((x53/x54)<=(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	uint64_t x58 = 591LLU;
	static int8_t x59 = -1;
	volatile int32_t t14 = 4503510;

	t14 = ((x57/x58)<=(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x62 = 175LLU;
	static int8_t x63 = -19;
	int32_t x64 = 794641;
	volatile int32_t t15 = -42100;

	t15 = ((x61/x62)<=(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = INT16_MIN;
	volatile uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 214;

	t16 = ((x65/x66)<=(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 7899U;
	int64_t x70 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 11160194;

	t17 = ((x69/x70)<=(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	volatile int16_t x76 = 14565;
	static int32_t t18 = -37948;

	t18 = ((x73/x74)<=(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 9212U;
	static uint8_t x79 = 0U;

	t19 = ((x77/x78)<=(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint32_t x82 = 122U;
	static int64_t x83 = INT64_MIN;
	int16_t x84 = 7577;
	static volatile int32_t t20 = 1;

	t20 = ((x81/x82)<=(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int64_t x87 = 7791435LL;
	int8_t x88 = 9;
	volatile int32_t t21 = -152551;

	t21 = ((x85/x86)<=(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = -2;
	uint8_t x92 = UINT8_MAX;

	t22 = ((x89/x90)<=(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	static int64_t x94 = 947LL;
	uint64_t x96 = 148805965632307130LLU;
	int32_t t23 = 1886;

	t23 = ((x93/x94)<=(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x98 = 27U;
	volatile int8_t x99 = 0;
	volatile int64_t x100 = -1LL;
	static int32_t t24 = -4103;

	t24 = ((x97/x98)<=(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 1;
	static uint32_t x103 = 1880181348U;
	volatile int32_t x104 = -10521;
	static volatile int32_t t25 = -4;

	t25 = ((x101/x102)<=(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x107 = -1LL;
	int8_t x108 = INT8_MIN;
	static int32_t t26 = -55;

	t26 = ((x105/x106)<=(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int64_t x110 = 2963909695011757033LL;
	int8_t x111 = -1;
	static volatile int32_t t27 = 424070930;

	t27 = ((x109/x110)<=(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -34;
	volatile int8_t x114 = -1;
	volatile int64_t x115 = -168998524LL;
	int16_t x116 = INT16_MAX;

	t28 = ((x113/x114)<=(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = 2;
	int8_t x118 = -60;
	int16_t x119 = INT16_MIN;
	static uint16_t x120 = UINT16_MAX;

	t29 = ((x117/x118)<=(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x122 = 1;
	static uint64_t x123 = 190598040459757LLU;
	int64_t x124 = 3447234027976387533LL;
	volatile int32_t t30 = -42;

	t30 = ((x121/x122)<=(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile uint8_t x126 = 8U;
	volatile int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MAX;
	static int32_t t31 = 7216;

	t31 = ((x125/x126)<=(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int64_t x130 = INT64_MIN;
	uint64_t x131 = UINT64_MAX;
	volatile uint32_t x132 = 1870374U;

	t32 = ((x129/x130)<=(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MIN;
	volatile int16_t x135 = INT16_MIN;
	volatile int32_t t33 = 155000;

	t33 = ((x133/x134)<=(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 11;

	t34 = ((x137/x138)<=(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -1LL;
	static int8_t x144 = INT8_MIN;
	int32_t t35 = 58499760;

	t35 = ((x141/x142)<=(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MAX;
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	int16_t x148 = 11;

	t36 = ((x145/x146)<=(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	uint32_t x150 = UINT32_MAX;
	static int32_t x151 = INT32_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -239443900;

	t37 = ((x149/x150)<=(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MIN;
	int16_t x155 = -16365;
	int8_t x156 = 0;
	int32_t t38 = -430843;

	t38 = ((x153/x154)<=(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = -3;
	int64_t x158 = INT64_MIN;
	int64_t x160 = 5023433792LL;

	t39 = ((x157/x158)<=(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 57;
	static volatile int16_t x162 = -1;
	int64_t x163 = -2945449320LL;
	int16_t x164 = INT16_MIN;

	t40 = ((x161/x162)<=(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	static int64_t x166 = INT64_MIN;
	uint16_t x167 = UINT16_MAX;
	static int8_t x168 = -1;
	int32_t t41 = 1;

	t41 = ((x165/x166)<=(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 19U;
	static int8_t x170 = INT8_MIN;
	static uint8_t x171 = 4U;
	int64_t x172 = INT64_MAX;
	volatile int32_t t42 = -14;

	t42 = ((x169/x170)<=(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = -4251925547228408646LL;
	int16_t x174 = -401;
	uint64_t x175 = 708645840212LLU;
	volatile int32_t x176 = INT32_MAX;
	int32_t t43 = 26649;

	t43 = ((x173/x174)<=(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = 1U;
	int8_t x179 = INT8_MAX;
	volatile int64_t x180 = INT64_MAX;
	volatile int32_t t44 = -380;

	t44 = ((x177/x178)<=(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 62;
	int8_t x183 = INT8_MAX;
	volatile int32_t x184 = INT32_MIN;
	int32_t t45 = 1760093;

	t45 = ((x181/x182)<=(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = 45;
	static volatile int64_t x190 = INT64_MIN;
	volatile uint64_t x191 = UINT64_MAX;
	uint16_t x192 = UINT16_MAX;

	t46 = ((x189/x190)<=(x191<=x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x195 = UINT32_MAX;

	t47 = ((x193/x194)<=(x195<=x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	static volatile uint8_t x198 = UINT8_MAX;
	volatile int64_t x199 = INT64_MIN;
	int64_t x200 = INT64_MIN;
	volatile int32_t t48 = 7;

	t48 = ((x197/x198)<=(x199<=x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = 4;
	int8_t x202 = INT8_MIN;
	uint8_t x203 = 0U;
	static int32_t x204 = -1;
	int32_t t49 = 2186;

	t49 = ((x201/x202)<=(x203<=x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 8693270510216LLU;
	static int16_t x206 = INT16_MIN;
	int16_t x207 = -1;
	uint32_t x208 = 186291U;
	volatile int32_t t50 = 1;

	t50 = ((x205/x206)<=(x207<=x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 85U;
	volatile uint32_t x211 = 251U;
	volatile int8_t x212 = INT8_MIN;
	int32_t t51 = 813;

	t51 = ((x209/x210)<=(x211<=x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = 2;
	uint32_t x215 = UINT32_MAX;
	volatile int32_t t52 = 26139;

	t52 = ((x213/x214)<=(x215<=x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x217 = 2687950U;
	uint16_t x218 = 305U;
	uint32_t x219 = 1064924633U;
	uint8_t x220 = UINT8_MAX;
	static volatile int32_t t53 = -2;

	t53 = ((x217/x218)<=(x219<=x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = -3560LL;
	int32_t x223 = -1;
	static volatile int8_t x224 = INT8_MAX;

	t54 = ((x221/x222)<=(x223<=x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = -1LL;
	volatile int16_t x226 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = UINT8_MAX;
	static int32_t t55 = 1484948;

	t55 = ((x225/x226)<=(x227<=x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x230 = -1;
	volatile uint16_t x231 = 15541U;
	int32_t t56 = -1852;

	t56 = ((x229/x230)<=(x231<=x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x233 = INT16_MIN;
	int64_t x235 = INT64_MAX;
	static int16_t x236 = -1;
	int32_t t57 = 5;

	t57 = ((x233/x234)<=(x235<=x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = UINT64_MAX;
	int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MIN;
	volatile int32_t x244 = -1;
	volatile int32_t t58 = -4;

	t58 = ((x241/x242)<=(x243<=x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	volatile int64_t x246 = INT64_MAX;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 38991U;
	static int32_t t59 = -3;

	t59 = ((x245/x246)<=(x247<=x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 1U;
	static uint8_t x250 = 13U;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = -1;
	int32_t t60 = 0;

	t60 = ((x249/x250)<=(x251<=x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 7U;
	uint8_t x254 = 1U;
	int8_t x255 = INT8_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t61 = -1019844257;

	t61 = ((x253/x254)<=(x255<=x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -1;
	static int32_t x258 = INT32_MIN;
	int32_t x259 = INT32_MAX;

	t62 = ((x257/x258)<=(x259<=x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = 2U;
	volatile int32_t x262 = -1031962111;
	volatile uint8_t x264 = UINT8_MAX;
	int32_t t63 = 1593;

	t63 = ((x261/x262)<=(x263<=x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MIN;
	static int64_t x266 = INT64_MIN;
	static int8_t x267 = INT8_MIN;
	volatile int16_t x268 = -833;
	volatile int32_t t64 = -677;

	t64 = ((x265/x266)<=(x267<=x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -1LL;
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	static int32_t x272 = INT32_MIN;
	volatile int32_t t65 = -1;

	t65 = ((x269/x270)<=(x271<=x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MIN;
	static int64_t x274 = -1LL;
	int64_t x275 = INT64_MIN;
	static uint64_t x276 = UINT64_MAX;
	static volatile int32_t t66 = 70;

	t66 = ((x273/x274)<=(x275<=x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MIN;
	volatile int64_t x279 = INT64_MIN;
	volatile int32_t t67 = 0;

	t67 = ((x277/x278)<=(x279<=x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -258635066968LL;
	int8_t x282 = INT8_MIN;
	uint8_t x283 = UINT8_MAX;
	static int64_t x284 = -1LL;
	int32_t t68 = 7;

	t68 = ((x281/x282)<=(x283<=x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x286 = 10285082771LLU;
	int16_t x287 = INT16_MIN;
	int32_t x288 = 901713780;

	t69 = ((x285/x286)<=(x287<=x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x290 = 3U;
	int32_t x291 = -1;
	static int8_t x292 = -40;
	volatile int32_t t70 = -810;

	t70 = ((x289/x290)<=(x291<=x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = -1;
	int32_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t71 = -46853;

	t71 = ((x293/x294)<=(x295<=x296));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x297 = 3467U;
	uint64_t x298 = UINT64_MAX;
	int8_t x300 = -1;
	volatile int32_t t72 = -7391686;

	t72 = ((x297/x298)<=(x299<=x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 2LLU;
	int8_t x302 = INT8_MIN;
	volatile int32_t x303 = -477688;
	int8_t x304 = 1;
	volatile int32_t t73 = -329818573;

	t73 = ((x301/x302)<=(x303<=x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x306 = INT16_MIN;
	int32_t t74 = -953;

	t74 = ((x305/x306)<=(x307<=x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MAX;
	volatile uint32_t x312 = 217932585U;
	volatile int32_t t75 = -7074385;

	t75 = ((x309/x310)<=(x311<=x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x314 = INT8_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t76 = -541782;

	t76 = ((x313/x314)<=(x315<=x316));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x318 = UINT64_MAX;
	int16_t x319 = 2;
	static int64_t x320 = -1LL;
	volatile int32_t t77 = -29;

	t77 = ((x317/x318)<=(x319<=x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x321 = -1LL;
	volatile int16_t x322 = INT16_MIN;
	uint32_t x323 = UINT32_MAX;

	t78 = ((x321/x322)<=(x323<=x324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MAX;
	int64_t x326 = -1LL;
	int64_t x328 = 214508082556980LL;

	t79 = ((x325/x326)<=(x327<=x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 36405553429LLU;
	int8_t x330 = 12;
	uint32_t x331 = 251846U;
	int8_t x332 = -1;
	int32_t t80 = -13152;

	t80 = ((x329/x330)<=(x331<=x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x333 = INT8_MIN;
	static int16_t x334 = INT16_MAX;
	int16_t x336 = -390;
	int32_t t81 = 296332;

	t81 = ((x333/x334)<=(x335<=x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x338 = 14U;
	int64_t x339 = INT64_MAX;
	int32_t x340 = INT32_MIN;
	static int32_t t82 = -4349;

	t82 = ((x337/x338)<=(x339<=x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x341 = UINT64_MAX;
	volatile int32_t x342 = INT32_MIN;
	int64_t x343 = -427LL;
	uint16_t x344 = 1774U;

	t83 = ((x341/x342)<=(x343<=x344));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x345 = 223U;
	volatile int32_t x346 = INT32_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t84 = 2354;

	t84 = ((x345/x346)<=(x347<=x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MIN;
	uint16_t x350 = 3U;
	volatile int8_t x351 = INT8_MIN;
	static int16_t x352 = INT16_MAX;
	static int32_t t85 = -54234518;

	t85 = ((x349/x350)<=(x351<=x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x354 = INT16_MAX;
	int32_t t86 = -10595;

	t86 = ((x353/x354)<=(x355<=x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = INT8_MAX;
	volatile uint16_t x358 = UINT16_MAX;
	uint8_t x359 = 1U;
	int8_t x360 = -29;
	int32_t t87 = -98853;

	t87 = ((x357/x358)<=(x359<=x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = 7;
	int8_t x362 = -1;
	uint32_t x363 = 85U;
	volatile int32_t t88 = -13703238;

	t88 = ((x361/x362)<=(x363<=x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = UINT64_MAX;
	volatile uint32_t x367 = UINT32_MAX;

	t89 = ((x365/x366)<=(x367<=x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x371 = 29623;
	volatile int8_t x372 = 56;
	int32_t t90 = -1;

	t90 = ((x369/x370)<=(x371<=x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x375 = -189581103160830604LL;
	volatile int8_t x376 = 14;

	t91 = ((x373/x374)<=(x375<=x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	static int16_t x378 = -5;
	int64_t x379 = -1LL;
	uint32_t x380 = 229463U;
	int32_t t92 = 4057396;

	t92 = ((x377/x378)<=(x379<=x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x382 = -1;
	static int64_t x383 = INT64_MIN;
	int16_t x384 = 1;
	static volatile int32_t t93 = -30238593;

	t93 = ((x381/x382)<=(x383<=x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = INT16_MIN;
	int32_t x387 = INT32_MAX;
	uint64_t x388 = 112196LLU;

	t94 = ((x385/x386)<=(x387<=x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = INT32_MIN;
	static uint32_t x394 = 692U;
	volatile int32_t x395 = INT32_MIN;

	t95 = ((x393/x394)<=(x395<=x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = UINT16_MAX;
	volatile int8_t x398 = -7;
	int64_t x399 = 1952LL;
	int16_t x400 = -1;

	t96 = ((x397/x398)<=(x399<=x400));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x403 = 1122LLU;
	static uint64_t x404 = 6415226593LLU;
	int32_t t97 = 9;

	t97 = ((x401/x402)<=(x403<=x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	int64_t x407 = -1LL;
	volatile int32_t t98 = -819072707;

	t98 = ((x405/x406)<=(x407<=x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -299525858952316LL;
	static uint32_t x410 = UINT32_MAX;
	int64_t x411 = -1LL;
	int16_t x412 = -1;

	t99 = ((x409/x410)<=(x411<=x412));

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

