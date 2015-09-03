#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
static int8_t x3 = INT8_MIN;
int32_t t0 = 5042;
static int32_t x12 = -1;
volatile int16_t x16 = 2562;
uint8_t x23 = UINT8_MAX;
static int32_t x27 = -1;
uint64_t x29 = 24706LLU;
volatile int16_t x32 = -1;
uint32_t t8 = 361241329U;
static volatile int64_t t9 = 31320LL;
int32_t x43 = 5;
volatile int8_t x47 = INT8_MIN;
volatile uint16_t x56 = 1425U;
int16_t x61 = -41;
static int16_t x65 = INT16_MAX;
int32_t x69 = -1;
volatile int8_t x70 = INT8_MIN;
int32_t x72 = -237883;
volatile uint8_t x73 = UINT8_MAX;
volatile int32_t t16 = 1094;
volatile uint8_t x85 = 86U;
static int8_t x89 = INT8_MAX;
int8_t x91 = INT8_MAX;
volatile uint64_t t20 = 104302879LLU;
static volatile int32_t x98 = -221858;
int8_t x102 = -1;
int16_t x110 = 486;
static int32_t x116 = INT32_MAX;
volatile int32_t t25 = 7;
uint8_t x125 = 23U;
int64_t x135 = -1LL;
volatile int8_t x137 = INT8_MAX;
volatile int64_t x152 = INT64_MIN;
volatile int8_t x153 = INT8_MIN;
uint8_t x154 = UINT8_MAX;
int16_t x155 = INT16_MIN;
int8_t x160 = -3;
static uint16_t x161 = 1884U;
int8_t x162 = INT8_MAX;
int16_t x163 = 0;
int16_t x170 = INT16_MIN;
volatile int32_t t39 = -701;
uint16_t x176 = 2U;
int16_t x183 = INT16_MIN;
int64_t t42 = -173683LL;
volatile uint64_t x188 = 5500519314LLU;
volatile int64_t t43 = 131673728450LL;
static uint32_t x190 = 43U;
volatile int32_t t45 = 706;
int8_t x197 = INT8_MIN;
int32_t x204 = 30019;
uint16_t x205 = 338U;
volatile int32_t t48 = 18137022;
static int8_t x209 = INT8_MIN;
int8_t x214 = INT8_MIN;
int32_t x215 = INT32_MAX;
uint16_t x223 = UINT16_MAX;
volatile int16_t x230 = -21;
int32_t t54 = -5;
int32_t x242 = INT32_MAX;
int8_t x245 = 30;
uint8_t x246 = 0U;
uint8_t x247 = 78U;
volatile int8_t x250 = -1;
volatile int32_t t59 = -871583368;
uint32_t x259 = UINT32_MAX;
volatile uint16_t x260 = UINT16_MAX;
int8_t x263 = 13;
int64_t x270 = INT64_MIN;
uint64_t t63 = 16561162531656LLU;
int32_t x273 = -4141531;
volatile int32_t t65 = 928;
uint8_t x281 = UINT8_MAX;
int16_t x283 = -1;
static int16_t x286 = 7;
uint64_t t69 = UINT64_MAX;
int8_t x299 = INT8_MIN;
uint32_t x320 = 128U;
int64_t x322 = 54188527508992LL;
uint8_t x324 = 5U;
int32_t t74 = 114;
volatile int16_t x325 = -1;
volatile int8_t x326 = INT8_MIN;
int16_t x329 = INT16_MIN;
static int8_t x343 = INT8_MIN;
int32_t t78 = 215;
volatile int32_t x352 = -1;
volatile uint32_t t79 = 5U;
static int32_t x354 = -1;
int64_t x356 = 14028590706531545LL;
volatile int8_t x357 = INT8_MIN;
int32_t x360 = INT32_MIN;
int32_t t81 = 409342154;
volatile int16_t x363 = -3;
static int64_t t82 = -146033682405LL;
int8_t x375 = -2;
int16_t x376 = INT16_MAX;
static uint64_t x378 = UINT64_MAX;
int64_t x380 = -64LL;
int32_t x382 = -1;
static int32_t x383 = INT32_MIN;
volatile int64_t t87 = -112LL;
volatile int64_t x386 = 3701412LL;
static volatile int64_t x392 = INT64_MIN;
volatile int64_t t89 = INT64_MIN;
static int32_t x393 = INT32_MAX;
int32_t x396 = -2191910;
int32_t t93 = -2748;
uint8_t x411 = 24U;
int64_t x417 = INT64_MAX;
uint16_t x423 = 14660U;
uint16_t x425 = UINT16_MAX;
int64_t x426 = INT64_MIN;
volatile int64_t x428 = 1LL;
static int8_t x434 = -28;


void f0(void) {
	uint16_t x2 = 2054U;
	volatile uint16_t x4 = 907U;

	t0 = (x1-(x2<(x3/x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 21U;
	static uint16_t x8 = 1861U;
	volatile int32_t t1 = 27269;

	t1 = (x5-(x6<(x7/x8)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 960LLU;
	int8_t x10 = -1;
	static uint64_t x11 = 2587836935LLU;
	uint64_t t2 = 64003901207LLU;

	t2 = (x9-(x10<(x11/x12)));

	if (t2 != 960LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -1;
	int8_t x14 = 1;
	volatile uint8_t x15 = 11U;
	int32_t t3 = 355616849;

	t3 = (x13-(x14<(x15/x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static uint8_t x18 = 66U;
	uint32_t x19 = 28U;
	uint64_t x20 = 629166789927672755LLU;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x17-(x18<(x19/x20)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -5553606LL;
	int64_t x22 = 1003268141762067LL;
	static uint64_t x24 = 896431LLU;
	static int64_t t5 = 0LL;

	t5 = (x21-(x22<(x23/x24)));

	if (t5 != -5553606LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	int8_t x26 = INT8_MIN;
	static int64_t x28 = INT64_MIN;
	int64_t t6 = -21424124943551219LL;

	t6 = (x25-(x26<(x27/x28)));

	if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	int64_t x31 = 4852307755LL;
	uint64_t t7 = 120338215LLU;

	t7 = (x29-(x30<(x31/x32)));

	if (t7 != 24706LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int8_t x34 = -6;
	static int64_t x35 = INT64_MAX;
	uint8_t x36 = 18U;

	t8 = (x33-(x34<(x35/x36)));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int8_t x38 = INT8_MIN;
	static int8_t x39 = INT8_MAX;
	int8_t x40 = -1;

	t9 = (x37-(x38<(x39/x40)));

	if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = -56543;

	t10 = (x41-(x42<(x43/x44)));

	if (t10 != -32769) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int16_t x46 = 13411;
	volatile uint32_t x48 = UINT32_MAX;
	int32_t t11 = INT32_MIN;

	t11 = (x45-(x46<(x47/x48)));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = -583149038LL;
	int64_t x54 = -1LL;
	static int8_t x55 = -1;
	volatile int64_t t12 = -94136742707LL;

	t12 = (x53-(x54<(x55/x56)));

	if (t12 != -583149039LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x62 = 0U;
	uint32_t x63 = 184U;
	volatile uint64_t x64 = UINT64_MAX;
	int32_t t13 = 19886;

	t13 = (x61-(x62<(x63/x64)));

	if (t13 != -41) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = UINT8_MAX;
	int32_t t14 = 54805884;

	t14 = (x65-(x66<(x67/x68)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x71 = -964639LL;
	volatile int32_t t15 = 197831006;

	t15 = (x69-(x70<(x71/x72)));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x74 = INT64_MAX;
	int32_t x75 = INT32_MAX;
	int64_t x76 = INT64_MIN;

	t16 = (x73-(x74<(x75/x76)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;
	int64_t x83 = -33821537540LL;
	uint8_t x84 = 11U;
	volatile int64_t t17 = INT64_MIN;

	t17 = (x81-(x82<(x83/x84)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x86 = INT16_MIN;
	static volatile int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;
	static int32_t t18 = 110352;

	t18 = (x85-(x86<(x87/x88)));

	if (t18 != 85) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x90 = 16248584U;
	static volatile uint8_t x92 = UINT8_MAX;
	int32_t t19 = -10;

	t19 = (x89-(x90<(x91/x92)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 9327760257LLU;
	int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MAX;
	static uint64_t x96 = 8869951LLU;

	t20 = (x93-(x94<(x95/x96)));

	if (t20 != 9327760257LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	int16_t x99 = INT16_MIN;
	int16_t x100 = -1;
	volatile int32_t t21 = -1;

	t21 = (x97-(x98<(x99/x100)));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 71938054260971LLU;
	uint64_t x103 = 27963102717507545LLU;
	uint8_t x104 = UINT8_MAX;
	volatile uint64_t t22 = 13366953375LLU;

	t22 = (x101-(x102<(x103/x104)));

	if (t22 != 71938054260971LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x105 = 1038893U;
	int8_t x106 = -1;
	uint32_t x107 = 37457267U;
	uint16_t x108 = UINT16_MAX;
	volatile uint32_t t23 = 499260494U;

	t23 = (x105-(x106<(x107/x108)));

	if (t23 != 1038893U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x109 = 15972945;
	static volatile int16_t x111 = 82;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t24 = -207248475;

	t24 = (x109-(x110<(x111/x112)));

	if (t24 != 15972945) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MIN;
	uint32_t x114 = 777U;
	int32_t x115 = INT32_MIN;

	t25 = (x113-(x114<(x115/x116)));

	if (t25 != -32769) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x117 = -13;
	int64_t x118 = -1LL;
	volatile int8_t x119 = 13;
	int64_t x120 = INT64_MIN;
	int32_t t26 = 28681362;

	t26 = (x117-(x118<(x119/x120)));

	if (t26 != -14) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	volatile int16_t x122 = 12;
	volatile int16_t x123 = INT16_MIN;
	int32_t x124 = 4;
	int64_t t27 = INT64_MIN;

	t27 = (x121-(x122<(x123/x124)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x126 = 27U;
	volatile int32_t x127 = INT32_MIN;
	uint32_t x128 = 308U;
	static volatile int32_t t28 = 3993;

	t28 = (x125-(x126<(x127/x128)));

	if (t28 != 22) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = 1201;
	volatile uint16_t x130 = UINT16_MAX;
	volatile int64_t x131 = 51LL;
	int32_t x132 = INT32_MAX;
	volatile int32_t t29 = -17;

	t29 = (x129-(x130<(x131/x132)));

	if (t29 != 1201) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = UINT64_MAX;
	int16_t x134 = -10897;
	int8_t x136 = INT8_MIN;
	static volatile uint64_t t30 = 91022793LLU;

	t30 = (x133-(x134<(x135/x136)));

	if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x138 = INT8_MAX;
	int16_t x139 = 0;
	int16_t x140 = INT16_MAX;
	int32_t t31 = 25689;

	t31 = (x137-(x138<(x139/x140)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x141 = 49LLU;
	int64_t x142 = INT64_MIN;
	static uint64_t x143 = 3006114LLU;
	uint64_t x144 = 197LLU;
	volatile uint64_t t32 = 365243742600025569LLU;

	t32 = (x141-(x142<(x143/x144)));

	if (t32 != 49LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = 428584U;
	int64_t x146 = INT64_MIN;
	static int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;
	static volatile uint32_t t33 = 31970922U;

	t33 = (x145-(x146<(x147/x148)));

	if (t33 != 428583U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 84104955LLU;
	int16_t x150 = INT16_MAX;
	static int64_t x151 = 4445LL;
	uint64_t t34 = 27718703354116049LLU;

	t34 = (x149-(x150<(x151/x152)));

	if (t34 != 84104955LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x156 = 143483587121207740LLU;
	int32_t t35 = 9270874;

	t35 = (x153-(x154<(x155/x156)));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = 6455;
	int16_t x158 = INT16_MIN;
	volatile uint8_t x159 = 30U;
	static volatile int32_t t36 = -32;

	t36 = (x157-(x158<(x159/x160)));

	if (t36 != 6454) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x164 = 15639;
	volatile int32_t t37 = -3389;

	t37 = (x161-(x162<(x163/x164)));

	if (t37 != 1884) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = 194;
	uint32_t x166 = 521287373U;
	int64_t x167 = INT64_MAX;
	volatile int16_t x168 = INT16_MIN;
	int32_t t38 = 32584865;

	t38 = (x165-(x166<(x167/x168)));

	if (t38 != 194) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = -120;
	int64_t x171 = INT64_MIN;
	static int8_t x172 = 7;

	t39 = (x169-(x170<(x171/x172)));

	if (t39 != -120) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x173 = 819U;
	int8_t x174 = -1;
	int64_t x175 = -2902861774048633269LL;
	int32_t t40 = 528;

	t40 = (x173-(x174<(x175/x176)));

	if (t40 != 819) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x177 = 3734U;
	uint64_t x178 = 1124751327469585337LLU;
	uint32_t x179 = UINT32_MAX;
	static volatile int8_t x180 = INT8_MIN;
	static volatile int32_t t41 = -288;

	t41 = (x177-(x178<(x179/x180)));

	if (t41 != 3734) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = -1034237191LL;
	static uint8_t x182 = 5U;
	int8_t x184 = INT8_MIN;

	t42 = (x181-(x182<(x183/x184)));

	if (t42 != -1034237192LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -1LL;
	int32_t x186 = -1;
	int8_t x187 = -4;

	t43 = (x185-(x186<(x187/x188)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x189 = 92U;
	volatile int32_t x191 = INT32_MIN;
	int64_t x192 = 110100LL;
	volatile uint32_t t44 = 52099U;

	t44 = (x189-(x190<(x191/x192)));

	if (t44 != 92U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x193 = -1;
	uint32_t x194 = 2270396U;
	int64_t x195 = INT64_MAX;
	uint8_t x196 = 6U;

	t45 = (x193-(x194<(x195/x196)));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x198 = 61U;
	volatile int16_t x199 = INT16_MAX;
	uint16_t x200 = UINT16_MAX;
	int32_t t46 = 82573;

	t46 = (x197-(x198<(x199/x200)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = UINT8_MAX;
	uint16_t x202 = 7U;
	int8_t x203 = -6;
	static volatile int32_t t47 = -6;

	t47 = (x201-(x202<(x203/x204)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x206 = INT32_MAX;
	static volatile int32_t x207 = 538005758;
	int32_t x208 = INT32_MIN;

	t48 = (x205-(x206<(x207/x208)));

	if (t48 != 338) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x210 = -1;
	int32_t x211 = INT32_MAX;
	uint16_t x212 = 6U;
	int32_t t49 = -3041;

	t49 = (x209-(x210<(x211/x212)));

	if (t49 != -129) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MAX;
	uint32_t x216 = UINT32_MAX;
	static volatile int32_t t50 = -3;

	t50 = (x213-(x214<(x215/x216)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x217 = 2603;
	volatile int32_t x218 = INT32_MIN;
	volatile int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;
	volatile int32_t t51 = 4738295;

	t51 = (x217-(x218<(x219/x220)));

	if (t51 != 2602) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = 1555766773333LLU;
	uint8_t x222 = 1U;
	int64_t x224 = -1LL;
	uint64_t t52 = 5547LLU;

	t52 = (x221-(x222<(x223/x224)));

	if (t52 != 1555766773333LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = -3;
	int8_t x226 = INT8_MIN;
	static uint8_t x227 = 43U;
	volatile int32_t x228 = -1157;
	int32_t t53 = -14487;

	t53 = (x225-(x226<(x227/x228)));

	if (t53 != -4) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x229 = 3U;
	static int64_t x231 = -1LL;
	uint16_t x232 = UINT16_MAX;

	t54 = (x229-(x230<(x231/x232)));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = INT8_MAX;
	int8_t x234 = -1;
	int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	static int32_t t55 = -108;

	t55 = (x233-(x234<(x235/x236)));

	if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 815527U;
	uint64_t x243 = 15383943LLU;
	int8_t x244 = INT8_MAX;
	volatile uint32_t t56 = 484489U;

	t56 = (x241-(x242<(x243/x244)));

	if (t56 != 815527U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x248 = 43372456891235798LLU;
	static int32_t t57 = 9;

	t57 = (x245-(x246<(x247/x248)));

	if (t57 != 30) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 7U;
	int8_t x251 = -1;
	int64_t x252 = -1LL;
	static volatile int32_t t58 = -108;

	t58 = (x249-(x250<(x251/x252)));

	if (t58 != 6) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = 1;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;

	t59 = (x253-(x254<(x255/x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	volatile int32_t t60 = INT32_MIN;

	t60 = (x257-(x258<(x259/x260)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MAX;
	int16_t x264 = 117;
	volatile int32_t t61 = INT32_MAX;

	t61 = (x261-(x262<(x263/x264)));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MIN;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = 3;
	volatile int64_t x268 = -18LL;
	int64_t t62 = INT64_MIN;

	t62 = (x265-(x266<(x267/x268)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = 903458175LLU;
	int32_t x271 = -23694258;
	int16_t x272 = -346;

	t63 = (x269-(x270<(x271/x272)));

	if (t63 != 903458174LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x274 = 5U;
	static volatile int8_t x275 = 0;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t64 = 1;

	t64 = (x273-(x274<(x275/x276)));

	if (t64 != -4141531) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 0U;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MIN;

	t65 = (x277-(x278<(x279/x280)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x282 = UINT64_MAX;
	int16_t x284 = INT16_MIN;
	int32_t t66 = 55053704;

	t66 = (x281-(x282<(x283/x284)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x285 = INT8_MAX;
	static uint32_t x287 = 1422162502U;
	static uint64_t x288 = UINT64_MAX;
	int32_t t67 = 0;

	t67 = (x285-(x286<(x287/x288)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1LL;
	uint8_t x290 = 1U;
	int32_t x291 = -1;
	int8_t x292 = INT8_MIN;
	volatile int64_t t68 = -455940237153986LL;

	t68 = (x289-(x290<(x291/x292)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x293 = UINT64_MAX;
	volatile uint8_t x294 = 8U;
	int32_t x295 = INT32_MIN;
	uint8_t x296 = 1U;

	t69 = (x293-(x294<(x295/x296)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -4469;
	static uint64_t x298 = 1LLU;
	static volatile int64_t x300 = INT64_MIN;
	volatile int32_t t70 = 108645;

	t70 = (x297-(x298<(x299/x300)));

	if (t70 != -4469) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = UINT64_MAX;
	volatile int32_t x302 = 6312112;
	volatile int8_t x303 = -1;
	uint64_t x304 = 667238196555LLU;
	uint64_t t71 = 44106LLU;

	t71 = (x301-(x302<(x303/x304)));

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -1;
	uint32_t x306 = 235693832U;
	int8_t x307 = -4;
	int32_t x308 = INT32_MIN;
	volatile int32_t t72 = -15219;

	t72 = (x305-(x306<(x307/x308)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = -1;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	int32_t t73 = -28199832;

	t73 = (x317-(x318<(x319/x320)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = 24;
	static int16_t x323 = 1;

	t74 = (x321-(x322<(x323/x324)));

	if (t74 != 24) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x327 = -18;
	static int16_t x328 = INT16_MIN;
	volatile int32_t t75 = 3266348;

	t75 = (x325-(x326<(x327/x328)));

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x330 = INT8_MAX;
	uint64_t x331 = 2896LLU;
	int32_t x332 = -1;
	int32_t t76 = 45283;

	t76 = (x329-(x330<(x331/x332)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MAX;
	static volatile int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	volatile int16_t x340 = INT16_MAX;
	int32_t t77 = 200;

	t77 = (x337-(x338<(x339/x340)));

	if (t77 != 32766) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = INT16_MIN;
	uint32_t x342 = 124U;
	static int8_t x344 = -1;

	t78 = (x341-(x342<(x343/x344)));

	if (t78 != -32769) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x349 = 4U;
	int16_t x350 = INT16_MIN;
	uint64_t x351 = UINT64_MAX;

	t79 = (x349-(x350<(x351/x352)));

	if (t79 != 4U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x353 = 8U;
	volatile int8_t x355 = -26;
	static volatile int32_t t80 = -1584091;

	t80 = (x353-(x354<(x355/x356)));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x358 = INT64_MAX;
	volatile int16_t x359 = INT16_MAX;

	t81 = (x357-(x358<(x359/x360)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x361 = -1LL;
	uint32_t x362 = 950527U;
	int16_t x364 = INT16_MAX;

	t82 = (x361-(x362<(x363/x364)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = -1;
	static uint16_t x366 = UINT16_MAX;
	uint64_t x367 = 1005822536021LLU;
	int64_t x368 = INT64_MAX;
	int32_t t83 = -51996644;

	t83 = (x365-(x366<(x367/x368)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = -1LL;
	int64_t x370 = INT64_MAX;
	static int8_t x371 = INT8_MIN;
	volatile int16_t x372 = 111;
	static volatile int64_t t84 = -94LL;

	t84 = (x369-(x370<(x371/x372)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x373 = INT64_MAX;
	uint8_t x374 = 13U;
	int64_t t85 = INT64_MAX;

	t85 = (x373-(x374<(x375/x376)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x377 = UINT64_MAX;
	static int8_t x379 = -57;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x377-(x378<(x379/x380)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = INT64_MAX;
	int32_t x384 = INT32_MIN;

	t87 = (x381-(x382<(x383/x384)));

	if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x385 = 0U;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = 49524U;
	int32_t t88 = -1;

	t88 = (x385-(x386<(x387/x388)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x389 = INT64_MIN;
	uint16_t x390 = 178U;
	uint8_t x391 = UINT8_MAX;

	t89 = (x389-(x390<(x391/x392)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x394 = 43;
	int64_t x395 = -1LL;
	volatile int32_t t90 = INT32_MAX;

	t90 = (x393-(x394<(x395/x396)));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x397 = 1U;
	int16_t x398 = INT16_MAX;
	int64_t x399 = -5917751997589LL;
	int32_t x400 = -1;
	volatile int32_t t91 = 7600;

	t91 = (x397-(x398<(x399/x400)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x401 = 161943U;
	int32_t x402 = INT32_MIN;
	static volatile int64_t x403 = INT64_MIN;
	static int32_t x404 = INT32_MAX;
	static volatile uint32_t t92 = 125822248U;

	t92 = (x401-(x402<(x403/x404)));

	if (t92 != 161943U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x405 = 506;
	int64_t x406 = -1LL;
	uint64_t x407 = 1945LLU;
	volatile int16_t x408 = INT16_MIN;

	t93 = (x405-(x406<(x407/x408)));

	if (t93 != 506) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x409 = -37;
	uint8_t x410 = 1U;
	int32_t x412 = -1;
	int32_t t94 = 1985694;

	t94 = (x409-(x410<(x411/x412)));

	if (t94 != -37) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x413 = 1;
	volatile int32_t x414 = -19096331;
	static int8_t x415 = 1;
	int8_t x416 = -1;
	volatile int32_t t95 = 58339;

	t95 = (x413-(x414<(x415/x416)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x418 = 1;
	int16_t x419 = INT16_MIN;
	int16_t x420 = -1;
	int64_t t96 = 3LL;

	t96 = (x417-(x418<(x419/x420)));

	if (t96 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = INT64_MIN;
	static uint8_t x422 = UINT8_MAX;
	int64_t x424 = -1LL;
	int64_t t97 = INT64_MIN;

	t97 = (x421-(x422<(x423/x424)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x427 = -26;
	int32_t t98 = 1854109;

	t98 = (x425-(x426<(x427/x428)));

	if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = -1LL;
	int32_t x435 = INT32_MAX;
	static int64_t x436 = 14043704LL;
	int64_t t99 = -17573779323987517LL;

	t99 = (x433-(x434<(x435/x436)));

	if (t99 != -2LL) { NG(); } else { ; }
	
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

