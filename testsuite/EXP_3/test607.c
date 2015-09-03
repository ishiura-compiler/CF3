#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
uint16_t x4 = 25U;
static int32_t x8 = INT32_MIN;
uint16_t x9 = 6U;
int32_t t2 = -896631792;
static int32_t t3 = 261323;
uint32_t x17 = UINT32_MAX;
static volatile int32_t x22 = -1;
uint16_t x24 = UINT16_MAX;
volatile int16_t x27 = -17;
int32_t x34 = INT32_MIN;
uint16_t x40 = UINT16_MAX;
static volatile int32_t t10 = 20381;
uint64_t x55 = UINT64_MAX;
int32_t t13 = -247;
int8_t x80 = INT8_MAX;
uint16_t x83 = UINT16_MAX;
volatile int32_t x86 = INT32_MIN;
static int16_t x90 = -1;
uint8_t x92 = UINT8_MAX;
volatile int8_t x94 = -15;
static volatile int32_t t23 = 141661;
int16_t x97 = INT16_MIN;
int16_t x98 = INT16_MIN;
volatile int32_t x106 = INT32_MIN;
int64_t x109 = 3605085793174LL;
volatile int16_t x128 = INT16_MAX;
volatile int32_t t32 = -11169644;
static int16_t x141 = INT16_MAX;
static int32_t t33 = 0;
static int64_t x149 = -1LL;
volatile int32_t t36 = 2912074;
static int16_t x164 = -1;
volatile int8_t x167 = INT8_MAX;
int8_t x169 = INT8_MAX;
static int8_t x171 = 0;
uint16_t x176 = UINT16_MAX;
int8_t x181 = 26;
static int64_t x187 = 332371LL;
int32_t x189 = 13458235;
static uint64_t x196 = 180LLU;
static int64_t x197 = -22556836830LL;
static int32_t t45 = 40;
static volatile uint16_t x215 = 2U;
volatile int32_t t49 = -208744024;
static uint64_t x224 = 6065272443884143LLU;
int16_t x225 = 2567;
int8_t x228 = -57;
volatile int32_t t52 = 3885;
volatile int32_t t53 = -3393802;
volatile int64_t x233 = -1LL;
static uint32_t x237 = 483249559U;
int16_t x239 = INT16_MAX;
uint32_t x243 = UINT32_MAX;
volatile uint16_t x251 = UINT16_MAX;
int32_t t59 = 1434;
static int16_t x257 = INT16_MIN;
static uint16_t x263 = 223U;
uint32_t x267 = 7949U;
volatile uint32_t x270 = 10U;
int32_t x273 = -43;
static int32_t x277 = -6;
int64_t x283 = INT64_MIN;
uint64_t x287 = 153031309471LLU;
static int32_t t67 = 33;
static int32_t x290 = INT32_MAX;
uint32_t x291 = UINT32_MAX;
static int64_t x298 = -1LL;
volatile int32_t t70 = 727;
uint16_t x304 = UINT16_MAX;
uint64_t x305 = 961365508LLU;
volatile uint8_t x316 = 19U;
int8_t x318 = INT8_MIN;
int8_t x320 = -48;
int16_t x323 = -1;
static volatile int16_t x329 = 1;
volatile int32_t x331 = INT32_MAX;
volatile int64_t x341 = INT64_MIN;
volatile int8_t x348 = INT8_MIN;
static volatile int32_t t83 = 246279;
int32_t x353 = -1;
static uint64_t x358 = 16588302661LLU;
static uint64_t x362 = 122LLU;
uint32_t x376 = UINT32_MAX;
volatile int32_t t89 = 248125;
int64_t x379 = -22401027153LL;
volatile int32_t t92 = -49977;
volatile int32_t t93 = -383;
uint16_t x400 = 11314U;
int16_t x409 = INT16_MIN;
uint8_t x410 = UINT8_MAX;
uint32_t x419 = 1483U;


void f0(void) {
	static volatile int16_t x1 = INT16_MIN;
	volatile int8_t x3 = 3;
	static int32_t t0 = -2;

	t0 = ((x1==x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile int16_t x6 = INT16_MIN;
	static int16_t x7 = 3;
	volatile int32_t t1 = 957321;

	t1 = ((x5==x6)<(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 89U;
	static uint8_t x11 = 7U;
	int16_t x12 = 465;

	t2 = ((x9==x10)<(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static uint8_t x14 = 95U;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = UINT64_MAX;

	t3 = ((x13==x14)<(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MAX;
	uint32_t x20 = UINT32_MAX;
	static int32_t t4 = -277766256;

	t4 = ((x17==x18)<(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -348362;
	int8_t x23 = -12;
	static volatile int32_t t5 = 32903020;

	t5 = ((x21==x22)<(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	uint32_t x26 = UINT32_MAX;
	volatile int8_t x28 = -1;
	volatile int32_t t6 = -73;

	t6 = ((x25==x26)<(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 3;
	int32_t x30 = 987836;
	uint16_t x31 = 5460U;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -19;

	t7 = ((x29==x30)<(x31/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int32_t x35 = INT32_MIN;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = 0;

	t8 = ((x33==x34)<(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -6;
	int32_t x38 = 0;
	volatile int16_t x39 = 0;
	int32_t t9 = 183;

	t9 = ((x37==x38)<(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	static uint32_t x42 = 2U;
	volatile uint64_t x43 = 57528432756354370LLU;
	int64_t x44 = INT64_MAX;

	t10 = ((x41==x42)<(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint32_t x46 = UINT32_MAX;
	int64_t x47 = INT64_MAX;
	int64_t x48 = INT64_MAX;
	volatile int32_t t11 = 138984;

	t11 = ((x45==x46)<(x47/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 1864U;
	int32_t x50 = INT32_MIN;
	int64_t x51 = -70500LL;
	int16_t x52 = INT16_MIN;
	static int32_t t12 = -327985641;

	t12 = ((x49==x50)<(x51/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	static uint64_t x54 = 220420785262LLU;
	uint64_t x56 = UINT64_MAX;

	t13 = ((x53==x54)<(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	uint32_t x58 = UINT32_MAX;
	static int16_t x59 = INT16_MIN;
	static int64_t x60 = INT64_MIN;
	int32_t t14 = -239;

	t14 = ((x57==x58)<(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	uint64_t x62 = 923998650346LLU;
	int16_t x63 = -1;
	int8_t x64 = INT8_MAX;
	static volatile int32_t t15 = 71367687;

	t15 = ((x61==x62)<(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 15700U;
	static int32_t x66 = INT32_MAX;
	int32_t x67 = -12389914;
	int64_t x68 = -1LL;
	volatile int32_t t16 = 880522;

	t16 = ((x65==x66)<(x67/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 456199;
	int32_t x70 = INT32_MAX;
	uint32_t x71 = 743057U;
	volatile int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -52111;

	t17 = ((x69==x70)<(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 2176231LLU;
	int8_t x74 = 0;
	int8_t x75 = INT8_MIN;
	uint8_t x76 = 49U;
	static int32_t t18 = -50868988;

	t18 = ((x73==x74)<(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = 1;
	int32_t x78 = INT32_MAX;
	static int16_t x79 = -1;
	volatile int32_t t19 = -153562476;

	t19 = ((x77==x78)<(x79/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	int32_t x82 = INT32_MIN;
	static uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = 218249164;

	t20 = ((x81==x82)<(x83/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MAX;
	volatile int16_t x87 = -39;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -44;

	t21 = ((x85==x86)<(x87/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 13U;
	static int16_t x91 = -1;
	int32_t t22 = -66093;

	t22 = ((x89==x90)<(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	volatile int64_t x95 = 3607551999LL;
	volatile int16_t x96 = INT16_MAX;

	t23 = ((x93==x94)<(x95/x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x99 = 407U;
	int32_t x100 = 761928;
	volatile int32_t t24 = 243;

	t24 = ((x97==x98)<(x99/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 9U;
	int16_t x102 = -3;
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MAX;
	static int32_t t25 = -78840119;

	t25 = ((x101==x102)<(x103/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	int16_t x107 = 106;
	int16_t x108 = INT16_MIN;
	int32_t t26 = -73044;

	t26 = ((x105==x106)<(x107/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -151211LL;
	static volatile int32_t x111 = 928090;
	volatile int8_t x112 = -1;
	int32_t t27 = 12627147;

	t27 = ((x109==x110)<(x111/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	static uint16_t x114 = UINT16_MAX;
	int16_t x115 = 247;
	int32_t x116 = -698653368;
	int32_t t28 = -14;

	t28 = ((x113==x114)<(x115/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x117 = -20102218122LL;
	int8_t x118 = 35;
	volatile int64_t x119 = -1LL;
	static uint16_t x120 = 6U;
	volatile int32_t t29 = 1;

	t29 = ((x117==x118)<(x119/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	uint64_t x122 = UINT64_MAX;
	static volatile int32_t x123 = -1;
	volatile uint8_t x124 = 4U;
	volatile int32_t t30 = 19497661;

	t30 = ((x121==x122)<(x123/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x125 = 0LLU;
	uint8_t x126 = 11U;
	int8_t x127 = INT8_MAX;
	volatile int32_t t31 = -199588;

	t31 = ((x125==x126)<(x127/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int64_t x130 = -1LL;
	uint8_t x131 = UINT8_MAX;
	uint32_t x132 = 86008578U;

	t32 = ((x129==x130)<(x131/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	static volatile uint8_t x144 = UINT8_MAX;

	t33 = ((x141==x142)<(x143/x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	volatile int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MAX;
	int8_t x148 = -1;
	int32_t t34 = -19299507;

	t34 = ((x145==x146)<(x147/x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = 10;
	volatile int64_t x151 = -13LL;
	static volatile int64_t x152 = -1LL;
	static int32_t t35 = 4869098;

	t35 = ((x149==x150)<(x151/x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x153 = INT8_MIN;
	static int64_t x154 = 224LL;
	volatile uint8_t x155 = UINT8_MAX;
	uint32_t x156 = UINT32_MAX;

	t36 = ((x153==x154)<(x155/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x161 = INT8_MIN;
	int64_t x162 = -1LL;
	uint32_t x163 = 2044U;
	int32_t t37 = 12466230;

	t37 = ((x161==x162)<(x163/x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = 10432;
	int16_t x166 = -2532;
	volatile int16_t x168 = INT16_MIN;
	int32_t t38 = 510501;

	t38 = ((x165==x166)<(x167/x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x170 = INT64_MAX;
	int8_t x172 = 17;
	volatile int32_t t39 = 2;

	t39 = ((x169==x170)<(x171/x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x173 = 0U;
	volatile int16_t x174 = INT16_MIN;
	uint16_t x175 = 10U;
	int32_t t40 = 43367;

	t40 = ((x173==x174)<(x175/x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x182 = 54381729;
	volatile int16_t x183 = 0;
	int32_t x184 = -1;
	int32_t t41 = -1063775;

	t41 = ((x181==x182)<(x183/x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = -1LL;
	volatile int16_t x188 = INT16_MAX;
	int32_t t42 = -1;

	t42 = ((x185==x186)<(x187/x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x190 = INT32_MIN;
	uint32_t x191 = UINT32_MAX;
	static uint64_t x192 = 20LLU;
	int32_t t43 = -101;

	t43 = ((x189==x190)<(x191/x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -1;
	int64_t x194 = -1LL;
	volatile int16_t x195 = INT16_MIN;
	volatile int32_t t44 = 14;

	t44 = ((x193==x194)<(x195/x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x198 = -1;
	uint8_t x199 = UINT8_MAX;
	uint16_t x200 = 4U;

	t45 = ((x197==x198)<(x199/x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x201 = 8439797696LL;
	uint64_t x202 = UINT64_MAX;
	volatile uint8_t x203 = 32U;
	int32_t x204 = INT32_MIN;
	int32_t t46 = 43;

	t46 = ((x201==x202)<(x203/x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = 3;
	uint8_t x206 = 41U;
	uint32_t x207 = 9U;
	static uint32_t x208 = 77U;
	static int32_t t47 = -649418;

	t47 = ((x205==x206)<(x207/x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x209 = UINT64_MAX;
	uint16_t x210 = UINT16_MAX;
	uint32_t x211 = 142359205U;
	int32_t x212 = -1;
	volatile int32_t t48 = 4572;

	t48 = ((x209==x210)<(x211/x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x213 = -1;
	static volatile uint8_t x214 = UINT8_MAX;
	int8_t x216 = INT8_MAX;

	t49 = ((x213==x214)<(x215/x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = 4236908797873LL;
	uint16_t x218 = 21U;
	int8_t x219 = INT8_MAX;
	uint64_t x220 = 4017895LLU;
	int32_t t50 = 4646;

	t50 = ((x217==x218)<(x219/x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	int64_t x222 = -142389135763LL;
	uint64_t x223 = UINT64_MAX;
	int32_t t51 = -50269;

	t51 = ((x221==x222)<(x223/x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x226 = 154016622;
	int16_t x227 = INT16_MIN;

	t52 = ((x225==x226)<(x227/x228));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MAX;
	volatile int16_t x231 = 427;
	int16_t x232 = INT16_MAX;

	t53 = ((x229==x230)<(x231/x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x234 = INT64_MAX;
	int64_t x235 = -2169984LL;
	static int64_t x236 = INT64_MIN;
	int32_t t54 = -2;

	t54 = ((x233==x234)<(x235/x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x238 = -114296851516LL;
	int64_t x240 = INT64_MAX;
	volatile int32_t t55 = -60385;

	t55 = ((x237==x238)<(x239/x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MAX;
	int64_t x242 = INT64_MIN;
	int32_t x244 = INT32_MIN;
	volatile int32_t t56 = -130673;

	t56 = ((x241==x242)<(x243/x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x245 = INT32_MIN;
	volatile int16_t x246 = INT16_MAX;
	int32_t x247 = INT32_MIN;
	static uint8_t x248 = 118U;
	volatile int32_t t57 = 31;

	t57 = ((x245==x246)<(x247/x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x249 = 2604374440496LLU;
	uint8_t x250 = 29U;
	volatile int32_t x252 = -1;
	volatile int32_t t58 = 94217;

	t58 = ((x249==x250)<(x251/x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x254 = INT32_MIN;
	int32_t x255 = 951651044;
	uint8_t x256 = 2U;

	t59 = ((x253==x254)<(x255/x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x258 = 5;
	int64_t x259 = INT64_MIN;
	static uint8_t x260 = 44U;
	int32_t t60 = 5290973;

	t60 = ((x257==x258)<(x259/x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x261 = -160;
	volatile int16_t x262 = INT16_MIN;
	static int8_t x264 = -6;
	volatile int32_t t61 = -75296;

	t61 = ((x261==x262)<(x263/x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -1LL;
	static int8_t x266 = -1;
	uint32_t x268 = 51049849U;
	volatile int32_t t62 = 0;

	t62 = ((x265==x266)<(x267/x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	static int32_t x271 = INT32_MAX;
	uint16_t x272 = 3010U;
	static volatile int32_t t63 = -18910;

	t63 = ((x269==x270)<(x271/x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x274 = 0;
	static volatile int32_t x275 = 1;
	int64_t x276 = INT64_MIN;
	volatile int32_t t64 = 3220130;

	t64 = ((x273==x274)<(x275/x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x278 = -1;
	int8_t x279 = -1;
	uint8_t x280 = 4U;
	volatile int32_t t65 = -1096;

	t65 = ((x277==x278)<(x279/x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MIN;
	uint64_t x282 = UINT64_MAX;
	static uint16_t x284 = UINT16_MAX;
	int32_t t66 = 40831370;

	t66 = ((x281==x282)<(x283/x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	uint16_t x286 = UINT16_MAX;
	uint16_t x288 = 91U;

	t67 = ((x285==x286)<(x287/x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MAX;
	static uint64_t x292 = 1250280816205898116LLU;
	int32_t t68 = 94320981;

	t68 = ((x289==x290)<(x291/x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = -32435LL;
	int64_t x294 = INT64_MIN;
	uint32_t x295 = 484U;
	static uint8_t x296 = 44U;
	static int32_t t69 = 1;

	t69 = ((x293==x294)<(x295/x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = 193U;
	int16_t x299 = INT16_MIN;
	volatile int32_t x300 = INT32_MIN;

	t70 = ((x297==x298)<(x299/x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	volatile int16_t x302 = INT16_MAX;
	int32_t x303 = INT32_MIN;
	int32_t t71 = -26;

	t71 = ((x301==x302)<(x303/x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x306 = INT64_MAX;
	static int16_t x307 = -1;
	uint32_t x308 = 220U;
	volatile int32_t t72 = -895973;

	t72 = ((x305==x306)<(x307/x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x309 = INT32_MAX;
	uint64_t x310 = 336053456131LLU;
	int16_t x311 = -1;
	uint8_t x312 = UINT8_MAX;
	static volatile int32_t t73 = -3379;

	t73 = ((x309==x310)<(x311/x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = 1U;
	uint64_t x314 = 5349449975897LLU;
	static int64_t x315 = 15537464202256945LL;
	static volatile int32_t t74 = 99025256;

	t74 = ((x313==x314)<(x315/x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x319 = UINT32_MAX;
	volatile int32_t t75 = -124190;

	t75 = ((x317==x318)<(x319/x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = INT64_MIN;
	uint32_t x322 = 24758U;
	int8_t x324 = -53;
	volatile int32_t t76 = -41059;

	t76 = ((x321==x322)<(x323/x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MIN;
	uint64_t x326 = UINT64_MAX;
	uint64_t x327 = UINT64_MAX;
	int64_t x328 = INT64_MIN;
	volatile int32_t t77 = -763082723;

	t77 = ((x325==x326)<(x327/x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x330 = -805067144257414LL;
	int64_t x332 = -1LL;
	volatile int32_t t78 = 188069;

	t78 = ((x329==x330)<(x331/x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MAX;
	volatile uint32_t x334 = UINT32_MAX;
	static int16_t x335 = INT16_MAX;
	int16_t x336 = -1;
	volatile int32_t t79 = -215205321;

	t79 = ((x333==x334)<(x335/x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -430;
	static volatile int8_t x338 = 0;
	uint8_t x339 = 1U;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t80 = -473033;

	t80 = ((x337==x338)<(x339/x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x342 = -30529LL;
	uint32_t x343 = 254071690U;
	uint8_t x344 = 5U;
	static volatile int32_t t81 = 583;

	t81 = ((x341==x342)<(x343/x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = 260659117794478LL;
	volatile uint8_t x346 = 15U;
	volatile uint64_t x347 = UINT64_MAX;
	int32_t t82 = -9572;

	t82 = ((x345==x346)<(x347/x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x349 = 3U;
	volatile uint32_t x350 = 102544U;
	int64_t x351 = INT64_MAX;
	int16_t x352 = INT16_MIN;

	t83 = ((x349==x350)<(x351/x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x354 = 1053U;
	int8_t x355 = 0;
	static int8_t x356 = 1;
	static volatile int32_t t84 = 220;

	t84 = ((x353==x354)<(x355/x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = -1;
	int32_t x359 = INT32_MAX;
	int8_t x360 = -1;
	volatile int32_t t85 = -124;

	t85 = ((x357==x358)<(x359/x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = -6LL;
	int64_t x363 = 121584696883LL;
	uint8_t x364 = 7U;
	volatile int32_t t86 = 425438;

	t86 = ((x361==x362)<(x363/x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = 65U;
	static uint8_t x366 = UINT8_MAX;
	uint64_t x367 = 2451LLU;
	int16_t x368 = -895;
	volatile int32_t t87 = -3263;

	t87 = ((x365==x366)<(x367/x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x369 = 5;
	int8_t x370 = 0;
	int16_t x371 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t88 = -423;

	t88 = ((x369==x370)<(x371/x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MAX;
	volatile int32_t x374 = INT32_MIN;
	static int64_t x375 = INT64_MIN;

	t89 = ((x373==x374)<(x375/x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -1;
	static volatile int64_t x378 = INT64_MIN;
	int32_t x380 = INT32_MAX;
	int32_t t90 = -31;

	t90 = ((x377==x378)<(x379/x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x381 = -18;
	volatile uint32_t x382 = UINT32_MAX;
	uint8_t x383 = 122U;
	int16_t x384 = INT16_MAX;
	static int32_t t91 = 6432;

	t91 = ((x381==x382)<(x383/x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MAX;
	int8_t x386 = 1;
	static uint32_t x387 = 569537U;
	uint16_t x388 = UINT16_MAX;

	t92 = ((x385==x386)<(x387/x388));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = -440;
	int32_t x391 = INT32_MAX;
	volatile uint8_t x392 = 11U;

	t93 = ((x389==x390)<(x391/x392));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int32_t x398 = INT32_MIN;
	int64_t x399 = -1LL;
	int32_t t94 = -15;

	t94 = ((x397==x398)<(x399/x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x401 = 27021U;
	int32_t x402 = INT32_MIN;
	int32_t x403 = -15149;
	int64_t x404 = INT64_MAX;
	static int32_t t95 = -58;

	t95 = ((x401==x402)<(x403/x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = -39;
	int8_t x406 = INT8_MAX;
	int16_t x407 = INT16_MAX;
	uint16_t x408 = 1548U;
	int32_t t96 = 365497;

	t96 = ((x405==x406)<(x407/x408));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = 6720;
	int32_t t97 = -193539;

	t97 = ((x409==x410)<(x411/x412));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x413 = INT8_MAX;
	int32_t x414 = -115;
	static int8_t x415 = INT8_MAX;
	volatile int8_t x416 = -1;
	static volatile int32_t t98 = 15;

	t98 = ((x413==x414)<(x415/x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = UINT64_MAX;
	int16_t x418 = -1;
	int64_t x420 = INT64_MAX;
	static int32_t t99 = 215448079;

	t99 = ((x417==x418)<(x419/x420));

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

