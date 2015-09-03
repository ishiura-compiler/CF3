#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = UINT64_MAX;
int8_t x5 = INT8_MAX;
static uint32_t x22 = 23296U;
int32_t x27 = 24315617;
int64_t x29 = -2011863621LL;
volatile int16_t x33 = 1;
uint16_t x53 = 18U;
static volatile int16_t x56 = -52;
volatile int64_t t14 = -10802002207435LL;
static uint8_t x63 = UINT8_MAX;
int8_t x68 = -2;
volatile int32_t t16 = -74709;
uint64_t x74 = 1121596LLU;
int64_t x77 = INT64_MAX;
int16_t x88 = 183;
int64_t x92 = INT64_MIN;
int8_t x98 = 1;
volatile int32_t t24 = -493;
static int64_t x102 = 2LL;
int64_t x103 = -1LL;
volatile int16_t x104 = 508;
volatile uint8_t x107 = 0U;
int64_t t26 = 638039252371782LL;
static uint8_t x112 = 45U;
static int32_t x117 = INT32_MIN;
int64_t x120 = INT64_MIN;
static volatile int32_t t30 = 2248;
int64_t t32 = INT64_MIN;
volatile int16_t x137 = INT16_MAX;
int8_t x140 = 7;
int16_t x143 = INT16_MIN;
volatile uint16_t x159 = 0U;
int16_t x164 = -1;
int64_t x174 = 4025LL;
int32_t x180 = INT32_MAX;
volatile int8_t x181 = INT8_MAX;
int8_t x183 = 15;
int32_t x189 = INT32_MIN;
volatile int64_t t48 = 465448076075154965LL;
uint32_t x199 = 14240U;
static int8_t x201 = -1;
static int32_t x204 = -100906676;
volatile uint64_t t52 = UINT64_MAX;
int64_t x213 = -1LL;
int64_t x219 = INT64_MIN;
volatile int32_t x221 = INT32_MAX;
int8_t x226 = -1;
int64_t x228 = INT64_MIN;
volatile uint64_t x233 = 1240320490920253068LLU;
uint8_t x235 = 69U;
volatile int8_t x236 = INT8_MIN;
int64_t x241 = INT64_MAX;
uint8_t x248 = 80U;
int8_t x252 = -1;
static int8_t x259 = INT8_MIN;
int32_t x260 = INT32_MAX;
int16_t x261 = INT16_MAX;
static int32_t t65 = -44439;
int64_t x268 = INT64_MAX;
int8_t x270 = 1;
uint64_t x277 = 467LLU;
volatile int16_t x278 = INT16_MIN;
volatile int8_t x282 = -1;
uint64_t x283 = UINT64_MAX;
int32_t x287 = -1;
int16_t x289 = INT16_MIN;
int16_t x290 = INT16_MIN;
volatile uint32_t x291 = 28427U;
uint16_t x307 = UINT16_MAX;
uint16_t x308 = 2U;
int32_t t76 = -353602;
int64_t x310 = -1LL;
uint8_t x314 = UINT8_MAX;
static int32_t x319 = -1;
volatile int64_t t81 = 674529333LL;
volatile int8_t x329 = -1;
static int16_t x333 = -1;
static int64_t x337 = -1LL;
volatile int64_t t84 = 64718873928005LL;
volatile int64_t x343 = INT64_MIN;
int32_t x347 = -531755;
static int64_t x348 = -24893233028270374LL;
static volatile uint32_t x365 = 63551636U;
uint32_t x371 = UINT32_MAX;
static int32_t x375 = INT32_MIN;
int32_t x376 = 998358871;
uint32_t x378 = UINT32_MAX;
int8_t x383 = -55;
int32_t t96 = -3;
uint16_t x391 = 0U;
int64_t x393 = INT64_MIN;
volatile int32_t x398 = 78928843;
uint64_t x400 = 1444LLU;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	uint8_t x2 = 3U;
	uint64_t x3 = 28455549043LLU;
	int16_t x4 = INT16_MIN;

	t0 = (x1|(x2*(x3==x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x6 = 8479085289658950LLU;
	int64_t x7 = INT64_MIN;
	volatile int64_t x8 = -1LL;
	uint64_t t1 = 733351813LLU;

	t1 = (x5|(x6*(x7==x8)));

	if (t1 != 127LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 511098U;
	int16_t x10 = INT16_MAX;
	volatile uint8_t x11 = UINT8_MAX;
	static uint32_t x12 = 187565393U;
	volatile uint32_t t2 = 18990149U;

	t2 = (x9|(x10*(x11==x12)));

	if (t2 != 511098U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int16_t x14 = -1;
	static uint32_t x15 = 22603284U;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = INT32_MIN;

	t3 = (x13|(x14*(x15==x16)));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int16_t x18 = -11860;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 4;

	t4 = (x17|(x18*(x19==x20)));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -6LL;
	static uint16_t x23 = 1078U;
	static uint16_t x24 = 7U;
	int64_t t5 = -3910649612136995319LL;

	t5 = (x21|(x22*(x23==x24)));

	if (t5 != -6LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 117U;
	static volatile int16_t x26 = -1;
	int32_t x28 = -231807;
	volatile int32_t t6 = 909;

	t6 = (x25|(x26*(x27==x28)));

	if (t6 != 117) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	uint16_t x31 = 6U;
	int32_t x32 = INT32_MAX;
	int64_t t7 = 62LL;

	t7 = (x29|(x30*(x31==x32)));

	if (t7 != -2011863621LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MAX;
	int64_t x35 = 147LL;
	volatile int8_t x36 = 0;
	volatile int32_t t8 = -36380853;

	t8 = (x33|(x34*(x35==x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1008;
	static uint64_t x38 = UINT64_MAX;
	int32_t x39 = INT32_MIN;
	volatile int16_t x40 = INT16_MIN;
	uint64_t t9 = 25LLU;

	t9 = (x37|(x38*(x39==x40)));

	if (t9 != 18446744073709550608LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MAX;
	int64_t x43 = INT64_MIN;
	int64_t x44 = 7LL;
	static volatile int64_t t10 = INT64_MIN;

	t10 = (x41|(x42*(x43==x44)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -33;
	static int16_t x46 = INT16_MAX;
	static int8_t x47 = INT8_MIN;
	static uint32_t x48 = 593U;
	volatile int32_t t11 = 3;

	t11 = (x45|(x46*(x47==x48)));

	if (t11 != -33) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 11U;
	int8_t x50 = INT8_MIN;
	uint8_t x51 = 11U;
	static int8_t x52 = INT8_MIN;
	int32_t t12 = -501;

	t12 = (x49|(x50*(x51==x52)));

	if (t12 != 11) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x54 = 198U;
	volatile uint32_t x55 = UINT32_MAX;
	int32_t t13 = 685;

	t13 = (x53|(x54*(x55==x56)));

	if (t13 != 18) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 0;
	int64_t x58 = INT64_MAX;
	int64_t x59 = INT64_MAX;
	static uint64_t x60 = 978774633474338166LLU;

	t14 = (x57|(x58*(x59==x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = -1;
	int16_t x62 = -1;
	uint32_t x64 = 90097198U;
	int32_t t15 = 0;

	t15 = (x61|(x62*(x63==x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = -1;
	static int32_t x67 = INT32_MIN;

	t16 = (x65|(x66*(x67==x68)));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1322123610LLU;
	int8_t x70 = INT8_MIN;
	int8_t x71 = -1;
	int32_t x72 = -9066;
	volatile uint64_t t17 = 170133LLU;

	t17 = (x69|(x70*(x71==x72)));

	if (t17 != 1322123610LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	volatile uint32_t x75 = UINT32_MAX;
	int64_t x76 = INT64_MAX;
	volatile uint64_t t18 = 409055779281LLU;

	t18 = (x73|(x74*(x75==x76)));

	if (t18 != 32767LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	int8_t x79 = -1;
	uint32_t x80 = 965U;
	int64_t t19 = INT64_MAX;

	t19 = (x77|(x78*(x79==x80)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 62U;
	static uint32_t x82 = 53U;
	volatile uint8_t x83 = 107U;
	int16_t x84 = 4719;
	uint32_t t20 = 75148917U;

	t20 = (x81|(x82*(x83==x84)));

	if (t20 != 62U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = INT16_MIN;
	int32_t t21 = -65;

	t21 = (x85|(x86*(x87==x88)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MAX;
	static uint8_t x91 = 5U;
	volatile int32_t t22 = -28652303;

	t22 = (x89|(x90*(x91==x92)));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int64_t x94 = -375459731897420LL;
	int64_t x95 = 879993LL;
	int32_t x96 = -1;
	int64_t t23 = 1445652LL;

	t23 = (x93|(x94*(x95==x96)));

	if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -60;
	int8_t x99 = INT8_MAX;
	int64_t x100 = 484321500597519LL;

	t24 = (x97|(x98*(x99==x100)));

	if (t24 != -60) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x101 = 98236189524LLU;
	volatile uint64_t t25 = 622LLU;

	t25 = (x101|(x102*(x103==x104)));

	if (t25 != 98236189524LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int64_t x106 = INT64_MIN;
	volatile uint8_t x108 = UINT8_MAX;

	t26 = (x105|(x106*(x107==x108)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	uint64_t x110 = UINT64_MAX;
	volatile int16_t x111 = -1;
	uint64_t t27 = 1509200508LLU;

	t27 = (x109|(x110*(x111==x112)));

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 1275563U;
	int32_t x114 = INT32_MAX;
	int8_t x115 = -3;
	int64_t x116 = INT64_MAX;
	uint32_t t28 = 0U;

	t28 = (x113|(x114*(x115==x116)));

	if (t28 != 1275563U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x118 = INT64_MIN;
	static uint32_t x119 = 236U;
	static int64_t t29 = -686353899368148LL;

	t29 = (x117|(x118*(x119==x120)));

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 106U;
	int16_t x122 = 13205;
	uint64_t x123 = 2828LLU;
	int8_t x124 = INT8_MIN;

	t30 = (x121|(x122*(x123==x124)));

	if (t30 != 106) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = 0;
	uint16_t x126 = 92U;
	int8_t x127 = 1;
	static int64_t x128 = INT64_MAX;
	int32_t t31 = 423048481;

	t31 = (x125|(x126*(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static volatile int64_t x130 = -1LL;
	volatile uint8_t x131 = 3U;
	int32_t x132 = INT32_MIN;

	t32 = (x129|(x130*(x131==x132)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static volatile int8_t x134 = -1;
	int8_t x135 = INT8_MIN;
	int64_t x136 = 15034874606523LL;
	int32_t t33 = 8550603;

	t33 = (x133|(x134*(x135==x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x138 = INT16_MIN;
	int8_t x139 = -1;
	int32_t t34 = -8;

	t34 = (x137|(x138*(x139==x140)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MAX;
	uint64_t x142 = UINT64_MAX;
	int16_t x144 = -1;
	volatile uint64_t t35 = 596357699165054056LLU;

	t35 = (x141|(x142*(x143==x144)));

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	static int8_t x146 = INT8_MAX;
	int16_t x147 = INT16_MIN;
	static int8_t x148 = -4;
	uint32_t t36 = UINT32_MAX;

	t36 = (x145|(x146*(x147==x148)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x149 = 1664LL;
	int32_t x150 = INT32_MIN;
	int32_t x151 = INT32_MIN;
	int16_t x152 = -1;
	int64_t t37 = 237642416657LL;

	t37 = (x149|(x150*(x151==x152)));

	if (t37 != 1664LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int32_t x154 = INT32_MAX;
	volatile uint64_t x155 = 3457809524222LLU;
	int16_t x156 = 36;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = (x153|(x154*(x155==x156)));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 24062876059851042LL;
	volatile uint16_t x158 = UINT16_MAX;
	static uint16_t x160 = UINT16_MAX;
	int64_t t39 = 3LL;

	t39 = (x157|(x158*(x159==x160)));

	if (t39 != 24062876059851042LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int8_t x162 = 6;
	static volatile uint32_t x163 = 993978U;
	volatile int32_t t40 = 30;

	t40 = (x161|(x162*(x163==x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MAX;
	volatile uint32_t x166 = 167U;
	static uint32_t x167 = 1660U;
	int16_t x168 = INT16_MIN;
	volatile uint32_t t41 = 102346133U;

	t41 = (x165|(x166*(x167==x168)));

	if (t41 != 32767U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	uint16_t x170 = 4714U;
	uint16_t x171 = 31441U;
	volatile uint32_t x172 = UINT32_MAX;
	static int32_t t42 = -1685883;

	t42 = (x169|(x170*(x171==x172)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x173 = 4U;
	uint8_t x175 = 0U;
	uint32_t x176 = 617652U;
	int64_t t43 = -245LL;

	t43 = (x173|(x174*(x175==x176)));

	if (t43 != 4LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 25;
	static volatile int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MIN;
	int32_t t44 = -5407;

	t44 = (x177|(x178*(x179==x180)));

	if (t44 != 25) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x182 = INT64_MIN;
	int64_t x184 = 1LL;
	volatile int64_t t45 = -147289137313LL;

	t45 = (x181|(x182*(x183==x184)));

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 22U;
	int32_t x186 = 2231324;
	int16_t x187 = INT16_MAX;
	volatile int64_t x188 = 27LL;
	static volatile int32_t t46 = 5892;

	t46 = (x185|(x186*(x187==x188)));

	if (t46 != 22) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x190 = 14676957U;
	int16_t x191 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t47 = 19449245U;

	t47 = (x189|(x190*(x191==x192)));

	if (t47 != 2147483648U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 24188U;
	int64_t x194 = INT64_MAX;
	int64_t x195 = INT64_MIN;
	int16_t x196 = INT16_MIN;

	t48 = (x193|(x194*(x195==x196)));

	if (t48 != 24188LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 1604U;
	uint8_t x198 = UINT8_MAX;
	int8_t x200 = 0;
	static volatile int32_t t49 = 25573434;

	t49 = (x197|(x198*(x199==x200)));

	if (t49 != 1604) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 40U;
	static int16_t x203 = -2038;
	static volatile int32_t t50 = 968;

	t50 = (x201|(x202*(x203==x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	uint8_t x206 = 10U;
	static volatile int16_t x207 = -2232;
	uint16_t x208 = 148U;
	int32_t t51 = -81717607;

	t51 = (x205|(x206*(x207==x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	static int32_t x210 = INT32_MIN;
	int16_t x211 = -1;
	uint32_t x212 = 1942U;

	t52 = (x209|(x210*(x211==x212)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = -236;
	volatile uint16_t x215 = 38U;
	volatile uint8_t x216 = 111U;
	int64_t t53 = -17108643477991337LL;

	t53 = (x213|(x214*(x215==x216)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	volatile int32_t x218 = -1;
	volatile uint16_t x220 = UINT16_MAX;
	int32_t t54 = INT32_MIN;

	t54 = (x217|(x218*(x219==x220)));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = INT8_MIN;
	static int16_t x223 = 5821;
	uint16_t x224 = 432U;
	static volatile int32_t t55 = INT32_MAX;

	t55 = (x221|(x222*(x223==x224)));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	volatile int32_t x227 = 3844;
	volatile int32_t t56 = 10063319;

	t56 = (x225|(x226*(x227==x228)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = UINT16_MAX;
	int16_t x230 = -1;
	int32_t x231 = INT32_MAX;
	uint32_t x232 = 71507219U;
	volatile int32_t t57 = 1;

	t57 = (x229|(x230*(x231==x232)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MIN;
	volatile uint64_t t58 = 420367414877717LLU;

	t58 = (x233|(x234*(x235==x236)));

	if (t58 != 1240320490920253068LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MAX;
	int64_t x238 = INT64_MIN;
	static int8_t x239 = 45;
	int64_t x240 = -12LL;
	volatile int64_t t59 = INT64_MAX;

	t59 = (x237|(x238*(x239==x240)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x242 = INT64_MIN;
	uint8_t x243 = 1U;
	volatile uint32_t x244 = 3U;
	int64_t t60 = INT64_MAX;

	t60 = (x241|(x242*(x243==x244)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = 19839947U;
	int32_t x246 = INT32_MIN;
	uint16_t x247 = 18272U;
	static volatile uint32_t t61 = 377U;

	t61 = (x245|(x246*(x247==x248)));

	if (t61 != 19839947U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	static uint16_t x250 = 28U;
	uint8_t x251 = UINT8_MAX;
	volatile int32_t t62 = 3;

	t62 = (x249|(x250*(x251==x252)));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = UINT8_MAX;
	volatile int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MAX;
	volatile int64_t x256 = INT64_MIN;
	static volatile int32_t t63 = -632;

	t63 = (x253|(x254*(x255==x256)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 637U;
	static int32_t x258 = -1;
	int32_t t64 = 22481483;

	t64 = (x257|(x258*(x259==x260)));

	if (t64 != 637) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x262 = 0;
	int32_t x263 = INT32_MIN;
	uint32_t x264 = 1U;

	t65 = (x261|(x262*(x263==x264)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x265 = INT64_MAX;
	volatile int32_t x266 = INT32_MIN;
	volatile uint8_t x267 = UINT8_MAX;
	volatile int64_t t66 = INT64_MAX;

	t66 = (x265|(x266*(x267==x268)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 3946LL;
	static volatile int8_t x271 = -25;
	uint32_t x272 = 1U;
	int64_t t67 = -91425851970LL;

	t67 = (x269|(x270*(x271==x272)));

	if (t67 != 3946LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -153567LL;
	int32_t x274 = -7;
	volatile int8_t x275 = INT8_MIN;
	int8_t x276 = -1;
	int64_t t68 = 12LL;

	t68 = (x273|(x274*(x275==x276)));

	if (t68 != -153567LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x279 = INT32_MIN;
	uint16_t x280 = 20523U;
	volatile uint64_t t69 = 138053434349018LLU;

	t69 = (x277|(x278*(x279==x280)));

	if (t69 != 467LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = 183615;

	t70 = (x281|(x282*(x283==x284)));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	uint32_t x286 = 7U;
	uint8_t x288 = UINT8_MAX;
	uint32_t t71 = 62U;

	t71 = (x285|(x286*(x287==x288)));

	if (t71 != 255U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x292 = -1;
	int32_t t72 = 23;

	t72 = (x289|(x290*(x291==x292)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	int8_t x294 = 1;
	volatile int32_t x295 = -1;
	static int8_t x296 = 1;
	volatile int32_t t73 = -120;

	t73 = (x293|(x294*(x295==x296)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	int32_t x298 = -1;
	int8_t x299 = -2;
	int64_t x300 = -1LL;
	int32_t t74 = -97063;

	t74 = (x297|(x298*(x299==x300)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	uint64_t x302 = UINT64_MAX;
	static volatile uint32_t x303 = 1849688242U;
	int16_t x304 = -1;
	static uint64_t t75 = 8560966150LLU;

	t75 = (x301|(x302*(x303==x304)));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 6U;
	static volatile int32_t x306 = INT32_MIN;

	t76 = (x305|(x306*(x307==x308)));

	if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 2319329U;
	volatile int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	volatile int64_t t77 = -236883929LL;

	t77 = (x309|(x310*(x311==x312)));

	if (t77 != 2319329LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	uint32_t x315 = 2U;
	int16_t x316 = -3;
	volatile int32_t t78 = 32530136;

	t78 = (x313|(x314*(x315==x316)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	static volatile int64_t x318 = -1LL;
	static int16_t x320 = 2069;
	int64_t t79 = -878019088LL;

	t79 = (x317|(x318*(x319==x320)));

	if (t79 != -128LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 0;
	int64_t x322 = -1LL;
	int32_t x323 = -607;
	int16_t x324 = INT16_MIN;
	int64_t t80 = 0LL;

	t80 = (x321|(x322*(x323==x324)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int64_t x326 = INT64_MAX;
	int64_t x327 = -69396944513729LL;
	static int64_t x328 = INT64_MIN;

	t81 = (x325|(x326*(x327==x328)));

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x330 = UINT32_MAX;
	int8_t x331 = -1;
	uint16_t x332 = 1U;
	static uint32_t t82 = UINT32_MAX;

	t82 = (x329|(x330*(x331==x332)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x334 = 101LLU;
	volatile uint64_t x335 = 15LLU;
	volatile uint16_t x336 = UINT16_MAX;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x333|(x334*(x335==x336)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MIN;
	uint64_t x339 = 62448589998021LLU;
	static int16_t x340 = INT16_MAX;

	t84 = (x337|(x338*(x339==x340)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x341 = INT16_MIN;
	int16_t x342 = 31;
	volatile int32_t x344 = INT32_MAX;
	volatile int32_t t85 = -5;

	t85 = (x341|(x342*(x343==x344)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	volatile int32_t x346 = INT32_MIN;
	volatile int32_t t86 = -75320141;

	t86 = (x345|(x346*(x347==x348)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 51612057U;
	int16_t x350 = INT16_MIN;
	volatile uint16_t x351 = 4306U;
	int16_t x352 = 247;
	volatile uint32_t t87 = 217513U;

	t87 = (x349|(x350*(x351==x352)));

	if (t87 != 51612057U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	uint32_t x354 = 44504U;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MAX;
	static uint32_t t88 = 6369U;

	t88 = (x353|(x354*(x355==x356)));

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	static uint32_t x358 = 1446562343U;
	int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MIN;
	int64_t t89 = INT64_MAX;

	t89 = (x357|(x358*(x359==x360)));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	volatile uint64_t x362 = 4782802LLU;
	int64_t x363 = INT64_MAX;
	uint64_t x364 = 1083292996741LLU;
	static uint64_t t90 = 4LLU;

	t90 = (x361|(x362*(x363==x364)));

	if (t90 != 127LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = -1;
	int64_t x367 = 1572127475LL;
	static uint32_t x368 = 24U;
	uint32_t t91 = 498304U;

	t91 = (x365|(x366*(x367==x368)));

	if (t91 != 63551636U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = 1195U;
	static volatile uint64_t x370 = UINT64_MAX;
	uint8_t x372 = 48U;
	volatile uint64_t t92 = 87011LLU;

	t92 = (x369|(x370*(x371==x372)));

	if (t92 != 1195LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 15U;
	volatile int32_t x374 = INT32_MIN;
	volatile uint32_t t93 = 100877240U;

	t93 = (x373|(x374*(x375==x376)));

	if (t93 != 15U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x379 = 3U;
	int64_t x380 = -1LL;
	volatile uint32_t t94 = 482742524U;

	t94 = (x377|(x378*(x379==x380)));

	if (t94 != 4294934528U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 5;
	int64_t x382 = INT64_MIN;
	static int8_t x384 = 18;
	static volatile int64_t t95 = 0LL;

	t95 = (x381|(x382*(x383==x384)));

	if (t95 != 5LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int8_t x386 = INT8_MIN;
	volatile int8_t x387 = INT8_MIN;
	volatile int8_t x388 = INT8_MAX;

	t96 = (x385|(x386*(x387==x388)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x389 = -1;
	uint16_t x390 = 98U;
	volatile int64_t x392 = INT64_MIN;
	int32_t t97 = -1788;

	t97 = (x389|(x390*(x391==x392)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 88525647230LLU;
	int16_t x395 = INT16_MIN;
	volatile uint8_t x396 = 12U;
	uint64_t t98 = 22828503782504LLU;

	t98 = (x393|(x394*(x395==x396)));

	if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	uint32_t x399 = 3507U;
	static volatile int32_t t99 = -1;

	t99 = (x397|(x398*(x399==x400)));

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

