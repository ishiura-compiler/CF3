#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x19 = INT64_MIN;
int32_t x21 = INT32_MAX;
static int8_t x23 = INT8_MIN;
int64_t x27 = INT64_MIN;
static int32_t x30 = INT32_MAX;
uint32_t x32 = 27244U;
int8_t x36 = INT8_MAX;
static int32_t t8 = -8;
volatile int16_t x49 = INT16_MIN;
int8_t x52 = INT8_MIN;
int64_t x56 = 1542889186LL;
static volatile int8_t x57 = 1;
static int16_t x59 = INT16_MIN;
uint64_t x60 = 1628997932203634953LLU;
int32_t x67 = -1;
volatile uint32_t x77 = 720798U;
int8_t x81 = INT8_MIN;
volatile int64_t x82 = -8491455369105LL;
static int16_t x86 = -1;
int16_t x95 = INT16_MIN;
int8_t x96 = INT8_MIN;
uint8_t x98 = UINT8_MAX;
static int32_t x115 = INT32_MIN;
volatile uint64_t x116 = UINT64_MAX;
int8_t x119 = INT8_MIN;
volatile int8_t x127 = 3;
int32_t x128 = 30;
int32_t t29 = -351296;
uint8_t x138 = 39U;
volatile int32_t t33 = 15;
volatile int8_t x155 = INT8_MIN;
static int32_t t34 = 202304;
volatile int16_t x160 = 0;
static int16_t x167 = -1486;
volatile int32_t t36 = -47348;
static uint64_t x173 = UINT64_MAX;
int32_t x179 = 869;
static int64_t x184 = INT64_MIN;
int8_t x189 = 28;
int32_t x193 = 0;
int8_t x195 = -1;
static int64_t x217 = INT64_MIN;
int16_t x223 = INT16_MIN;
volatile int32_t t48 = 88;
int32_t x243 = INT32_MIN;
volatile int16_t x245 = -1;
static int8_t x247 = INT8_MIN;
static volatile uint8_t x251 = 0U;
int8_t x252 = 13;
uint8_t x253 = 104U;
int8_t x255 = 9;
int32_t t55 = -336051627;
int64_t x267 = INT64_MIN;
static uint16_t x271 = 4U;
int8_t x276 = 1;
volatile int32_t t60 = -929177923;
uint8_t x292 = UINT8_MAX;
int32_t t63 = 16941;
int8_t x299 = 0;
int8_t x300 = INT8_MAX;
int16_t x304 = -1;
static volatile int16_t x307 = INT16_MIN;
int16_t x310 = INT16_MAX;
int32_t t67 = -2;
uint16_t x314 = 1U;
uint16_t x317 = 12817U;
int8_t x318 = INT8_MIN;
int32_t x320 = INT32_MIN;
int32_t t70 = -3491;
int8_t x326 = -1;
int8_t x327 = 1;
uint8_t x338 = 58U;
volatile int32_t x350 = INT32_MIN;
int16_t x366 = 490;
uint32_t x367 = UINT32_MAX;
uint32_t x371 = UINT32_MAX;
volatile int32_t t81 = 325850;
static int32_t x374 = 1;
uint64_t x386 = UINT64_MAX;
volatile int32_t t83 = 267339742;
static volatile int16_t x391 = INT16_MIN;
int64_t x394 = INT64_MIN;
uint32_t x395 = 3U;
int16_t x397 = INT16_MIN;
int32_t t86 = 1104344;
int32_t t88 = -15189;
int64_t x414 = INT64_MIN;
int32_t x429 = INT32_MIN;
uint64_t x430 = 12872356766LLU;
volatile int32_t t93 = 0;
uint64_t x433 = 1057907100942LLU;
int8_t x445 = INT8_MIN;
static uint32_t x451 = 5846U;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = UINT16_MAX;
	volatile int16_t x3 = 1548;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 1;

	t0 = (x1==(x2<=(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	volatile int16_t x6 = -1;
	volatile int16_t x7 = INT16_MIN;
	static int64_t x8 = INT64_MIN;
	int32_t t1 = 1;

	t1 = (x5==(x6<=(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 62U;
	static int8_t x10 = INT8_MIN;
	uint16_t x11 = 4U;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = -43435;

	t2 = (x9==(x10<=(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 1U;
	int8_t x14 = INT8_MAX;
	uint64_t x15 = 7355973326985857LLU;
	static int64_t x16 = 3965738517587018513LL;
	int32_t t3 = 24752;

	t3 = (x13==(x14<=(x15-x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = 4109236095731914LL;
	uint64_t x20 = UINT64_MAX;
	static volatile int32_t t4 = -11180784;

	t4 = (x17==(x18<=(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -1LL;
	uint16_t x24 = 23U;
	static int32_t t5 = -1472;

	t5 = (x21==(x22<=(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	uint32_t x26 = 2605134U;
	int64_t x28 = -174032907LL;
	int32_t t6 = 865;

	t6 = (x25==(x26<=(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1268U;
	int8_t x31 = INT8_MIN;
	volatile int32_t t7 = 83362;

	t7 = (x29==(x30<=(x31-x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 41U;
	volatile uint16_t x34 = 9U;
	uint8_t x35 = 2U;

	t8 = (x33==(x34<=(x35-x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -1LL;
	static int32_t x38 = 286;
	volatile int8_t x39 = INT8_MAX;
	int64_t x40 = -1LL;
	volatile int32_t t9 = 980779;

	t9 = (x37==(x38<=(x39-x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -5158718403185871LL;
	int16_t x46 = INT16_MIN;
	int32_t x47 = -15685335;
	uint8_t x48 = 11U;
	static volatile int32_t t10 = 4087;

	t10 = (x45==(x46<=(x47-x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MIN;
	volatile int32_t t11 = 370221;

	t11 = (x49==(x50<=(x51-x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = 15;
	int16_t x54 = INT16_MIN;
	volatile uint16_t x55 = 1403U;
	volatile int32_t t12 = -357358987;

	t12 = (x53==(x54<=(x55-x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x58 = INT16_MIN;
	static volatile int32_t t13 = 1111;

	t13 = (x57==(x58<=(x59-x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1LL;
	static uint8_t x62 = UINT8_MAX;
	static int32_t x63 = INT32_MIN;
	uint64_t x64 = 583LLU;
	volatile int32_t t14 = 46;

	t14 = (x61==(x62<=(x63-x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 1672;
	static int32_t x66 = INT32_MAX;
	int8_t x68 = -1;
	int32_t t15 = 482;

	t15 = (x65==(x66<=(x67-x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x70 = 81U;
	uint16_t x71 = UINT16_MAX;
	int16_t x72 = -3099;
	int32_t t16 = 0;

	t16 = (x69==(x70<=(x71-x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	volatile uint16_t x74 = 1U;
	int16_t x75 = INT16_MIN;
	int32_t x76 = -1;
	int32_t t17 = -454;

	t17 = (x73==(x74<=(x75-x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x78 = -7LL;
	uint8_t x79 = 1U;
	uint16_t x80 = 29387U;
	int32_t t18 = 43;

	t18 = (x77==(x78<=(x79-x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x83 = -1;
	static uint8_t x84 = 11U;
	volatile int32_t t19 = -232;

	t19 = (x81==(x82<=(x83-x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	static uint64_t x88 = 3LLU;
	volatile int32_t t20 = 18;

	t20 = (x85==(x86<=(x87-x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	volatile int16_t x90 = 7903;
	uint32_t x91 = 2490192U;
	volatile uint32_t x92 = 30U;
	volatile int32_t t21 = 8910720;

	t21 = (x89==(x90<=(x91-x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 20615315067825LLU;
	uint16_t x94 = 1U;
	static volatile int32_t t22 = -8207;

	t22 = (x93==(x94<=(x95-x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = 3906;
	int16_t x99 = -1;
	volatile uint64_t x100 = 1013860225271030LLU;
	int32_t t23 = 49;

	t23 = (x97==(x98<=(x99-x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x101 = 17017;
	int8_t x102 = -1;
	int16_t x103 = -1;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t24 = -282;

	t24 = (x101==(x102<=(x103-x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = 7021U;
	volatile uint8_t x106 = 61U;
	uint16_t x107 = UINT16_MAX;
	volatile uint16_t x108 = UINT16_MAX;
	volatile int32_t t25 = 148;

	t25 = (x105==(x106<=(x107-x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	uint32_t x110 = UINT32_MAX;
	uint16_t x111 = UINT16_MAX;
	static uint16_t x112 = 535U;
	volatile int32_t t26 = -111532305;

	t26 = (x109==(x110<=(x111-x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -174623741306LL;
	static uint64_t x114 = 107988483229LLU;
	int32_t t27 = 367901;

	t27 = (x113==(x114<=(x115-x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	static int32_t x118 = INT32_MIN;
	uint8_t x120 = 53U;
	volatile int32_t t28 = 6295912;

	t28 = (x117==(x118<=(x119-x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = -1;
	uint8_t x126 = 54U;

	t29 = (x125==(x126<=(x127-x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x133 = 3335LLU;
	uint64_t x134 = UINT64_MAX;
	int32_t x135 = -14767300;
	static int16_t x136 = INT16_MAX;
	volatile int32_t t30 = 2452;

	t30 = (x133==(x134<=(x135-x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	static int64_t x140 = -1LL;
	static volatile int32_t t31 = -76;

	t31 = (x137==(x138<=(x139-x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x145 = 1U;
	int32_t x146 = -8178706;
	volatile int8_t x147 = INT8_MAX;
	int32_t x148 = INT32_MAX;
	int32_t t32 = 139;

	t32 = (x145==(x146<=(x147-x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = UINT64_MAX;
	static int8_t x150 = -1;
	volatile uint8_t x151 = UINT8_MAX;
	int16_t x152 = INT16_MIN;

	t33 = (x149==(x150<=(x151-x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = 115;
	int64_t x154 = INT64_MIN;
	uint64_t x156 = UINT64_MAX;

	t34 = (x153==(x154<=(x155-x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x157 = UINT8_MAX;
	uint64_t x158 = 5086113558LLU;
	int16_t x159 = INT16_MAX;
	volatile int32_t t35 = -4068498;

	t35 = (x157==(x158<=(x159-x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x165 = 10444U;
	static volatile int32_t x166 = 324286;
	static int16_t x168 = -1;

	t36 = (x165==(x166<=(x167-x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = -27947343LL;
	volatile int8_t x170 = -30;
	uint64_t x171 = 146108687180175832LLU;
	static volatile int8_t x172 = INT8_MIN;
	static volatile int32_t t37 = 1;

	t37 = (x169==(x170<=(x171-x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x174 = UINT64_MAX;
	static uint32_t x175 = UINT32_MAX;
	int16_t x176 = -1;
	volatile int32_t t38 = -28260060;

	t38 = (x173==(x174<=(x175-x176)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	static uint32_t x178 = UINT32_MAX;
	int32_t x180 = -1794577;
	volatile int32_t t39 = -37;

	t39 = (x177==(x178<=(x179-x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = INT32_MIN;
	int16_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	static volatile int32_t t40 = 1227738;

	t40 = (x181==(x182<=(x183-x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x190 = -1;
	static uint16_t x191 = UINT16_MAX;
	uint64_t x192 = 182LLU;
	int32_t t41 = 356;

	t41 = (x189==(x190<=(x191-x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x194 = INT32_MIN;
	int64_t x196 = INT64_MIN;
	static int32_t t42 = -170710275;

	t42 = (x193==(x194<=(x195-x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = INT8_MIN;
	volatile int32_t x198 = INT32_MAX;
	uint16_t x199 = 0U;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t43 = -29278;

	t43 = (x197==(x198<=(x199-x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = 0;
	static int8_t x202 = INT8_MIN;
	static int16_t x203 = 6460;
	int32_t x204 = INT32_MAX;
	int32_t t44 = 1900735;

	t44 = (x201==(x202<=(x203-x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = INT64_MIN;
	uint8_t x206 = UINT8_MAX;
	volatile int64_t x207 = -1LL;
	int8_t x208 = INT8_MIN;
	int32_t t45 = 16303;

	t45 = (x205==(x206<=(x207-x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = 451;
	int32_t x210 = -1;
	int64_t x211 = -1LL;
	static uint64_t x212 = UINT64_MAX;
	int32_t t46 = -1;

	t46 = (x209==(x210<=(x211-x212)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x218 = INT8_MIN;
	static int16_t x219 = -1;
	static int8_t x220 = INT8_MAX;
	volatile int32_t t47 = 27950;

	t47 = (x217==(x218<=(x219-x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x221 = -1LL;
	int64_t x222 = 1LL;
	int8_t x224 = -1;

	t48 = (x221==(x222<=(x223-x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x229 = 52U;
	uint16_t x230 = 7151U;
	uint64_t x231 = 3LLU;
	int16_t x232 = -1;
	volatile int32_t t49 = -66;

	t49 = (x229==(x230<=(x231-x232)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int8_t x234 = INT8_MIN;
	volatile uint32_t x235 = 11389U;
	int32_t x236 = -12;
	volatile int32_t t50 = 1;

	t50 = (x233==(x234<=(x235-x236)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = INT32_MAX;
	int64_t x238 = -1LL;
	int16_t x239 = -1;
	volatile uint32_t x240 = UINT32_MAX;
	int32_t t51 = -42894669;

	t51 = (x237==(x238<=(x239-x240)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = -6;
	int64_t x242 = 24460LL;
	int8_t x244 = -1;
	volatile int32_t t52 = 51887770;

	t52 = (x241==(x242<=(x243-x244)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x246 = INT64_MIN;
	int32_t x248 = INT32_MIN;
	static volatile int32_t t53 = -508865057;

	t53 = (x245==(x246<=(x247-x248)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 1U;
	uint16_t x250 = UINT16_MAX;
	volatile int32_t t54 = -921443054;

	t54 = (x249==(x250<=(x251-x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x254 = -1;
	int16_t x256 = INT16_MAX;

	t55 = (x253==(x254<=(x255-x256)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x257 = -17724210302LL;
	static volatile int16_t x258 = INT16_MAX;
	volatile int32_t x259 = -1;
	uint64_t x260 = 208LLU;
	volatile int32_t t56 = -55336616;

	t56 = (x257==(x258<=(x259-x260)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x265 = 105U;
	static volatile int64_t x266 = INT64_MIN;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t57 = -111;

	t57 = (x265==(x266<=(x267-x268)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x269 = -1;
	int32_t x270 = INT32_MIN;
	int64_t x272 = -1938LL;
	volatile int32_t t58 = -60078;

	t58 = (x269==(x270<=(x271-x272)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = 1;
	static int32_t x274 = -1;
	uint16_t x275 = 28043U;
	int32_t t59 = -2039;

	t59 = (x273==(x274<=(x275-x276)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = UINT16_MAX;
	uint32_t x278 = 95U;
	uint8_t x279 = UINT8_MAX;
	int8_t x280 = INT8_MIN;

	t60 = (x277==(x278<=(x279-x280)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = -1;
	static uint32_t x286 = UINT32_MAX;
	int16_t x287 = -1;
	int8_t x288 = INT8_MAX;
	static int32_t t61 = 3163597;

	t61 = (x285==(x286<=(x287-x288)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = -1LL;
	int32_t x290 = -632;
	int32_t x291 = 656053132;
	int32_t t62 = 111831;

	t62 = (x289==(x290<=(x291-x292)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = 0;
	int32_t x294 = INT32_MIN;
	static volatile int32_t x295 = 1;
	int8_t x296 = 0;

	t63 = (x293==(x294<=(x295-x296)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = 3;
	uint32_t x298 = 105430835U;
	volatile int32_t t64 = -4;

	t64 = (x297==(x298<=(x299-x300)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = -25;
	int16_t x302 = -1;
	volatile int32_t x303 = -1;
	int32_t t65 = -11597;

	t65 = (x301==(x302<=(x303-x304)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = -4921;
	int32_t x308 = 120;
	int32_t t66 = -5659715;

	t66 = (x305==(x306<=(x307-x308)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x309 = INT16_MIN;
	int8_t x311 = -1;
	int16_t x312 = -1;

	t67 = (x309==(x310<=(x311-x312)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = INT8_MIN;
	int64_t x315 = -46931LL;
	int8_t x316 = -3;
	int32_t t68 = -271;

	t68 = (x313==(x314<=(x315-x316)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x319 = INT32_MIN;
	volatile int32_t t69 = -50808277;

	t69 = (x317==(x318<=(x319-x320)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = INT16_MAX;
	uint16_t x322 = UINT16_MAX;
	uint16_t x323 = UINT16_MAX;
	uint8_t x324 = 10U;

	t70 = (x321==(x322<=(x323-x324)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = 9882U;
	int32_t x328 = INT32_MAX;
	int32_t t71 = -19996;

	t71 = (x325==(x326<=(x327-x328)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x329 = -1;
	volatile int8_t x330 = INT8_MIN;
	int32_t x331 = -45;
	static int64_t x332 = -1LL;
	volatile int32_t t72 = -22185;

	t72 = (x329==(x330<=(x331-x332)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	static int32_t x336 = -1;
	int32_t t73 = 7;

	t73 = (x333==(x334<=(x335-x336)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x337 = UINT64_MAX;
	int8_t x339 = -1;
	int8_t x340 = 23;
	int32_t t74 = -346241627;

	t74 = (x337==(x338<=(x339-x340)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x341 = INT16_MIN;
	int64_t x342 = 7LL;
	int8_t x343 = -1;
	uint64_t x344 = UINT64_MAX;
	static volatile int32_t t75 = 18022619;

	t75 = (x341==(x342<=(x343-x344)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = 4U;
	int8_t x346 = -7;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t76 = -3588;

	t76 = (x345==(x346<=(x347-x348)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = 59;
	volatile int16_t x351 = INT16_MAX;
	uint32_t x352 = 704291U;
	static int32_t t77 = -7404726;

	t77 = (x349==(x350<=(x351-x352)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MAX;
	int16_t x355 = INT16_MIN;
	int64_t x356 = -1LL;
	volatile int32_t t78 = -967;

	t78 = (x353==(x354<=(x355-x356)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x357 = INT32_MIN;
	int16_t x358 = 0;
	int8_t x359 = INT8_MIN;
	int8_t x360 = -1;
	volatile int32_t t79 = -49666181;

	t79 = (x357==(x358<=(x359-x360)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x365 = 119U;
	int32_t x368 = -1;
	volatile int32_t t80 = -2441;

	t80 = (x365==(x366<=(x367-x368)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x369 = 73U;
	int8_t x370 = INT8_MIN;
	int16_t x372 = 28;

	t81 = (x369==(x370<=(x371-x372)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = INT8_MIN;
	int64_t x375 = INT64_MAX;
	static int64_t x376 = INT64_MAX;
	static int32_t t82 = -652286;

	t82 = (x373==(x374<=(x375-x376)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x385 = 59U;
	int8_t x387 = INT8_MAX;
	static int32_t x388 = -59596676;

	t83 = (x385==(x386<=(x387-x388)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x389 = -23;
	int16_t x390 = INT16_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t84 = 1;

	t84 = (x389==(x390<=(x391-x392)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = INT32_MAX;
	int64_t x396 = -1LL;
	static volatile int32_t t85 = -73;

	t85 = (x393==(x394<=(x395-x396)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x398 = 91;
	int64_t x399 = -1LL;
	volatile uint16_t x400 = UINT16_MAX;

	t86 = (x397==(x398<=(x399-x400)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x401 = 2U;
	int16_t x402 = -463;
	int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t87 = 489187683;

	t87 = (x401==(x402<=(x403-x404)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MIN;
	static uint16_t x406 = 7U;
	uint16_t x407 = 3549U;
	int8_t x408 = -1;

	t88 = (x405==(x406<=(x407-x408)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = 15510;
	int64_t x410 = INT64_MAX;
	int16_t x411 = INT16_MIN;
	int32_t x412 = 43;
	static int32_t t89 = 695304782;

	t89 = (x409==(x410<=(x411-x412)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = INT64_MAX;
	uint32_t x415 = 6U;
	int32_t x416 = INT32_MIN;
	volatile int32_t t90 = 1;

	t90 = (x413==(x414<=(x415-x416)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x417 = INT8_MAX;
	uint64_t x418 = UINT64_MAX;
	static uint16_t x419 = 372U;
	uint32_t x420 = 142U;
	int32_t t91 = 29;

	t91 = (x417==(x418<=(x419-x420)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x421 = -310;
	uint64_t x422 = 8503278494335223120LLU;
	static volatile int16_t x423 = INT16_MIN;
	int32_t x424 = INT32_MIN;
	volatile int32_t t92 = 99626;

	t92 = (x421==(x422<=(x423-x424)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x431 = UINT32_MAX;
	int8_t x432 = 0;

	t93 = (x429==(x430<=(x431-x432)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x434 = 6803543;
	uint32_t x435 = 43430U;
	volatile int16_t x436 = -35;
	int32_t t94 = -11;

	t94 = (x433==(x434<=(x435-x436)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x437 = INT8_MAX;
	volatile int32_t x438 = INT32_MIN;
	uint16_t x439 = 30283U;
	static uint8_t x440 = UINT8_MAX;
	volatile int32_t t95 = 3835920;

	t95 = (x437==(x438<=(x439-x440)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x441 = 2637LLU;
	int16_t x442 = INT16_MIN;
	uint32_t x443 = 947710U;
	int16_t x444 = -26;
	volatile int32_t t96 = -357;

	t96 = (x441==(x442<=(x443-x444)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x446 = 7U;
	static volatile uint8_t x447 = 3U;
	uint64_t x448 = 6720523485021388LLU;
	static int32_t t97 = -4765;

	t97 = (x445==(x446<=(x447-x448)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x449 = 6319654407LL;
	int32_t x450 = INT32_MIN;
	int32_t x452 = INT32_MIN;
	int32_t t98 = 17;

	t98 = (x449==(x450<=(x451-x452)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = -6375;
	static int64_t x454 = 63546LL;
	volatile uint16_t x455 = UINT16_MAX;
	uint64_t x456 = UINT64_MAX;
	static int32_t t99 = -204932;

	t99 = (x453==(x454<=(x455-x456)));

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

