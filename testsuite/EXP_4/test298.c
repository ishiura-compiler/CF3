#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 1;
static uint64_t x7 = 18344LLU;
static int8_t x8 = INT8_MIN;
static int32_t t1 = 43;
uint64_t t2 = UINT64_MAX;
static uint64_t t4 = 377321497LLU;
static int16_t x30 = -1;
volatile uint32_t x34 = 186U;
static int8_t x53 = -4;
int8_t x64 = -1;
int16_t x67 = 5;
int64_t x73 = INT64_MIN;
volatile int8_t x76 = 0;
static int32_t x79 = -1;
uint16_t x81 = 10466U;
uint64_t x88 = 736LLU;
int8_t x95 = INT8_MAX;
int8_t x101 = INT8_MIN;
int64_t x109 = -20LL;
int32_t x116 = -1;
static int64_t x122 = INT64_MAX;
int64_t x133 = INT64_MAX;
uint8_t x134 = UINT8_MAX;
uint32_t x135 = 490717U;
static int16_t x139 = INT16_MAX;
static volatile int32_t t34 = 8646;
uint16_t x141 = 970U;
volatile int32_t x150 = INT32_MIN;
uint32_t x156 = 8U;
int32_t x159 = 224133;
static int8_t x169 = INT8_MIN;
int8_t x172 = -1;
volatile int32_t t42 = 235511;
static int64_t x178 = -2474202LL;
volatile uint8_t x180 = 0U;
int32_t t45 = 49440843;
volatile int32_t x189 = -1;
int16_t x198 = -859;
static int16_t x200 = 1733;
volatile int16_t x202 = INT16_MAX;
int32_t x204 = -1;
int32_t t49 = -51572905;
volatile uint64_t x212 = UINT64_MAX;
volatile int64_t t50 = INT64_MAX;
int8_t x214 = -1;
uint64_t x218 = 6539LLU;
static int8_t x219 = INT8_MIN;
volatile int64_t x226 = -1LL;
static int32_t x229 = -1;
uint8_t x232 = UINT8_MAX;
static volatile uint16_t x244 = 9661U;
int8_t x251 = INT8_MAX;
int8_t x254 = 61;
int64_t x264 = -2550759503LL;
volatile int32_t t63 = -152;
int8_t x275 = -1;
int32_t x278 = -8287;
uint8_t x288 = 1U;
int8_t x290 = 2;
static int64_t x293 = INT64_MAX;
volatile int32_t x294 = -1;
static volatile uint16_t x295 = 3637U;
int16_t x297 = 330;
static uint16_t x304 = UINT16_MAX;
int16_t x310 = INT16_MIN;
int32_t t73 = -23;
int16_t x313 = INT16_MIN;
int8_t x315 = -1;
volatile int32_t t74 = 20938632;
uint64_t x318 = 733741588LLU;
int32_t t76 = 176;
volatile int32_t x346 = INT32_MIN;
volatile int16_t x347 = -62;
volatile int32_t t79 = -294;
int64_t x351 = -1LL;
volatile int32_t t83 = -8;
static volatile uint32_t x366 = 5828252U;
volatile int32_t t84 = -201;
volatile uint16_t x371 = UINT16_MAX;
int16_t x373 = -61;
static int32_t t86 = 123603747;
uint64_t x380 = 127LLU;
int8_t x383 = INT8_MAX;
int8_t x384 = INT8_MAX;
int32_t x388 = 291213;
int64_t x390 = INT64_MAX;
volatile uint32_t x394 = 7608U;
int64_t x395 = -1LL;
static uint32_t x403 = UINT32_MAX;
int32_t x404 = 1;
uint32_t x405 = 34U;
uint32_t x406 = UINT32_MAX;
uint32_t t93 = 85556920U;
static volatile int64_t x413 = 3936680714749LL;
static int16_t x415 = INT16_MIN;


void f0(void) {
	volatile int32_t x1 = -1;
	static int16_t x3 = 360;
	static int32_t x4 = 276;
	int32_t t0 = 2;

	t0 = (x1|(x2<=(x3-x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x6 = INT32_MIN;

	t1 = (x5|(x6<=(x7-x8)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static uint16_t x10 = 400U;
	int8_t x11 = INT8_MAX;
	int8_t x12 = 1;

	t2 = (x9|(x10<=(x11-x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	volatile int8_t x14 = INT8_MIN;
	uint64_t x15 = 391LLU;
	static volatile int64_t x16 = INT64_MAX;
	int64_t t3 = 1LL;

	t3 = (x13|(x14<=(x15-x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 163020644726752LLU;
	volatile uint16_t x18 = 933U;
	static int64_t x19 = INT64_MIN;
	uint64_t x20 = 5247046652908725LLU;

	t4 = (x17|(x18<=(x19-x20)));

	if (t4 != 163020644726753LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = -57092336364LL;
	static int32_t x23 = -732628785;
	static volatile int64_t x24 = INT64_MIN;
	static volatile int32_t t5 = 235;

	t5 = (x21|(x22<=(x23-x24)));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	volatile uint64_t x26 = 111292055260LLU;
	static int8_t x27 = -29;
	uint16_t x28 = UINT16_MAX;
	uint64_t t6 = UINT64_MAX;

	t6 = (x25|(x26<=(x27-x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	uint32_t x31 = 1019U;
	int16_t x32 = -1;
	volatile int32_t t7 = -2042025;

	t7 = (x29|(x30<=(x31-x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int16_t x35 = 2;
	uint8_t x36 = 1U;
	static int32_t t8 = INT32_MIN;

	t8 = (x33|(x34<=(x35-x36)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = INT32_MIN;
	int16_t x38 = -1;
	int32_t x39 = INT32_MIN;
	uint16_t x40 = 0U;
	volatile int32_t t9 = INT32_MIN;

	t9 = (x37|(x38<=(x39-x40)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1500;
	int16_t x42 = -1408;
	int8_t x43 = -1;
	static int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = -302;

	t10 = (x41|(x42<=(x43-x44)));

	if (t10 != -1500) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int8_t x46 = INT8_MAX;
	int16_t x47 = -1;
	uint8_t x48 = 11U;
	int64_t t11 = INT64_MAX;

	t11 = (x45|(x46<=(x47-x48)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MAX;
	int32_t x51 = INT32_MAX;
	uint8_t x52 = 1U;
	volatile int32_t t12 = 76;

	t12 = (x49|(x50<=(x51-x52)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x54 = -1LL;
	uint64_t x55 = 2452962066771099107LLU;
	uint16_t x56 = 3516U;
	int32_t t13 = 3;

	t13 = (x53|(x54<=(x55-x56)));

	if (t13 != -4) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 11;
	static int16_t x58 = -48;
	int64_t x59 = -1LL;
	uint64_t x60 = UINT64_MAX;
	int32_t t14 = 428736;

	t14 = (x57|(x58<=(x59-x60)));

	if (t14 != 11) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	volatile int16_t x62 = INT16_MIN;
	uint16_t x63 = 25551U;
	volatile int32_t t15 = INT32_MAX;

	t15 = (x61|(x62<=(x63-x64)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 910;
	uint64_t x66 = 499135529LLU;
	uint32_t x68 = 95670948U;
	volatile int32_t t16 = 206;

	t16 = (x65|(x66<=(x67-x68)));

	if (t16 != 911) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	uint16_t x70 = 22785U;
	int64_t x71 = -1LL;
	volatile int64_t x72 = INT64_MIN;
	int32_t t17 = INT32_MAX;

	t17 = (x69|(x70<=(x71-x72)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = 977831LL;
	uint8_t x75 = 80U;
	static volatile int64_t t18 = INT64_MIN;

	t18 = (x73|(x74<=(x75-x76)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = -2515;
	int8_t x78 = INT8_MIN;
	static int8_t x80 = -39;
	volatile int32_t t19 = -11020540;

	t19 = (x77|(x78<=(x79-x80)));

	if (t19 != -2515) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x82 = 6968829061913LLU;
	int16_t x83 = INT16_MIN;
	uint32_t x84 = 10740U;
	int32_t t20 = 3;

	t20 = (x81|(x82<=(x83-x84)));

	if (t20 != 10466) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 4560723254172LLU;
	int64_t x86 = 139156752297189182LL;
	uint16_t x87 = 13113U;
	volatile uint64_t t21 = 7719LLU;

	t21 = (x85|(x86<=(x87-x88)));

	if (t21 != 4560723254172LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 3667U;
	static int64_t x90 = INT64_MIN;
	int64_t x91 = -1LL;
	uint16_t x92 = 82U;
	volatile int32_t t22 = -5;

	t22 = (x89|(x90<=(x91-x92)));

	if (t22 != 3667) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -664;
	static int32_t x94 = INT32_MIN;
	int16_t x96 = 16;
	static volatile int32_t t23 = 0;

	t23 = (x93|(x94<=(x95-x96)));

	if (t23 != -663) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	uint64_t x98 = 9058976322125215014LLU;
	int64_t x99 = -1212811273202231LL;
	static uint32_t x100 = UINT32_MAX;
	static volatile int32_t t24 = -212235487;

	t24 = (x97|(x98<=(x99-x100)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x102 = 1272;
	volatile int8_t x103 = -1;
	int32_t x104 = -1;
	volatile int32_t t25 = 3;

	t25 = (x101|(x102<=(x103-x104)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 88U;
	int32_t x106 = 53384;
	int16_t x107 = INT16_MIN;
	volatile uint32_t x108 = 2392267U;
	volatile int32_t t26 = -29;

	t26 = (x105|(x106<=(x107-x108)));

	if (t26 != 89) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x110 = 0;
	int32_t x111 = -113;
	static int16_t x112 = -1;
	int64_t t27 = 154453231LL;

	t27 = (x109|(x110<=(x111-x112)));

	if (t27 != -20LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MAX;
	int32_t x114 = INT32_MIN;
	uint32_t x115 = 7U;
	static volatile int32_t t28 = -123874236;

	t28 = (x113|(x114<=(x115-x116)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -13;
	static uint16_t x118 = 8U;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -33;

	t29 = (x117|(x118<=(x119-x120)));

	if (t29 != -13) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 10388643925510547LLU;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MIN;
	volatile uint64_t t30 = 746726LLU;

	t30 = (x121|(x122<=(x123-x124)));

	if (t30 != 10388643925510547LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 69531LLU;
	uint8_t x126 = 24U;
	int8_t x127 = INT8_MIN;
	volatile int64_t x128 = 1726464372LL;
	volatile uint64_t t31 = 38402293014180LLU;

	t31 = (x125|(x126<=(x127-x128)));

	if (t31 != 69531LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 10037527LLU;
	uint32_t x130 = 8U;
	int16_t x131 = INT16_MIN;
	int32_t x132 = INT32_MIN;
	volatile uint64_t t32 = 431031856832643LLU;

	t32 = (x129|(x130<=(x131-x132)));

	if (t32 != 10037527LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x136 = INT8_MIN;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x133|(x134<=(x135-x136)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = -1;
	uint8_t x140 = 11U;

	t34 = (x137|(x138<=(x139-x140)));

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x142 = -1;
	static volatile int8_t x143 = 0;
	int64_t x144 = INT64_MAX;
	static volatile int32_t t35 = -8;

	t35 = (x141|(x142<=(x143-x144)));

	if (t35 != 970) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = INT16_MIN;
	volatile int64_t x147 = -1085LL;
	volatile int8_t x148 = -1;
	uint32_t t36 = UINT32_MAX;

	t36 = (x145|(x146<=(x147-x148)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 1U;
	uint64_t x151 = 102431181639LLU;
	uint8_t x152 = UINT8_MAX;
	int32_t t37 = 7496;

	t37 = (x149|(x150<=(x151-x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x153 = -1;
	int16_t x154 = INT16_MIN;
	uint16_t x155 = 15452U;
	volatile int32_t t38 = -87;

	t38 = (x153|(x154<=(x155-x156)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = UINT64_MAX;
	static int8_t x158 = 1;
	volatile int64_t x160 = -1LL;
	uint64_t t39 = UINT64_MAX;

	t39 = (x157|(x158<=(x159-x160)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 60U;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = 2660917846652LLU;
	static volatile int16_t x164 = -1558;
	int32_t t40 = 1249;

	t40 = (x161|(x162<=(x163-x164)));

	if (t40 != 60) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 155068308U;
	int16_t x166 = -1;
	static int8_t x167 = 1;
	static volatile int8_t x168 = INT8_MAX;
	uint32_t t41 = 146U;

	t41 = (x165|(x166<=(x167-x168)));

	if (t41 != 155068308U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x170 = UINT16_MAX;
	uint16_t x171 = 6568U;

	t42 = (x169|(x170<=(x171-x172)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 534420538U;
	int32_t x179 = INT32_MIN;
	volatile uint32_t t43 = 77548U;

	t43 = (x177|(x178<=(x179-x180)));

	if (t43 != 534420538U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	volatile int32_t x182 = INT32_MIN;
	uint16_t x183 = 4U;
	uint8_t x184 = 76U;
	static volatile int32_t t44 = 1731389;

	t44 = (x181|(x182<=(x183-x184)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 6U;
	int8_t x186 = -1;
	static volatile uint64_t x187 = 107898945875LLU;
	int16_t x188 = INT16_MIN;

	t45 = (x185|(x186<=(x187-x188)));

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x190 = 76349U;
	volatile int32_t x191 = INT32_MIN;
	int8_t x192 = -1;
	static int32_t t46 = -49;

	t46 = (x189|(x190<=(x191-x192)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	uint64_t x199 = 232061866644LLU;
	volatile int32_t t47 = 88043038;

	t47 = (x197|(x198<=(x199-x200)));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	int32_t x203 = INT32_MIN;
	volatile int32_t t48 = 0;

	t48 = (x201|(x202<=(x203-x204)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -1;
	static volatile int8_t x206 = -1;
	int64_t x207 = 57642494810889LL;
	int8_t x208 = INT8_MIN;

	t49 = (x205|(x206<=(x207-x208)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x209 = INT64_MAX;
	int8_t x210 = 7;
	int8_t x211 = INT8_MIN;

	t50 = (x209|(x210<=(x211-x212)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = UINT8_MAX;
	static volatile uint64_t x215 = 132246LLU;
	int64_t x216 = INT64_MIN;
	volatile int32_t t51 = 1809755;

	t51 = (x213|(x214<=(x215-x216)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	static int8_t x220 = -3;
	int32_t t52 = 1061424;

	t52 = (x217|(x218<=(x219-x220)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x221 = -1;
	int32_t x222 = -10540;
	static int32_t x223 = INT32_MIN;
	int32_t x224 = -1;
	int32_t t53 = -253;

	t53 = (x221|(x222<=(x223-x224)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MIN;
	volatile int8_t x227 = INT8_MAX;
	volatile int32_t x228 = -149454252;
	static volatile int64_t t54 = 1921229934686LL;

	t54 = (x225|(x226<=(x227-x228)));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x230 = 5193868;
	static int16_t x231 = INT16_MIN;
	int32_t t55 = -499;

	t55 = (x229|(x230<=(x231-x232)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 1246U;
	uint64_t x234 = UINT64_MAX;
	volatile int8_t x235 = INT8_MIN;
	uint8_t x236 = 22U;
	volatile int32_t t56 = -11;

	t56 = (x233|(x234<=(x235-x236)));

	if (t56 != 1246) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 1U;
	static volatile uint32_t x242 = UINT32_MAX;
	static uint64_t x243 = UINT64_MAX;
	int32_t t57 = -7;

	t57 = (x241|(x242<=(x243-x244)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = 4582U;
	static uint16_t x246 = 177U;
	uint32_t x247 = 9538026U;
	int8_t x248 = 1;
	volatile uint32_t t58 = 5U;

	t58 = (x245|(x246<=(x247-x248)));

	if (t58 != 4583U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MIN;
	uint8_t x250 = UINT8_MAX;
	volatile int16_t x252 = INT16_MAX;
	static volatile int32_t t59 = -208542407;

	t59 = (x249|(x250<=(x251-x252)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = 869856188264694876LL;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = UINT8_MAX;
	int64_t t60 = -681806802LL;

	t60 = (x253|(x254<=(x255-x256)));

	if (t60 != 869856188264694877LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 133420253006623LLU;
	uint64_t x262 = 16197LLU;
	int32_t x263 = -1;
	uint64_t t61 = 475LLU;

	t61 = (x261|(x262<=(x263-x264)));

	if (t61 != 133420253006623LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x265 = 2081585091U;
	static volatile int16_t x266 = INT16_MAX;
	int64_t x267 = INT64_MIN;
	int8_t x268 = INT8_MIN;
	uint32_t t62 = 1507356351U;

	t62 = (x265|(x266<=(x267-x268)));

	if (t62 != 2081585091U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 8U;
	int16_t x270 = INT16_MAX;
	uint64_t x271 = 412528182345LLU;
	static int32_t x272 = INT32_MIN;

	t63 = (x269|(x270<=(x271-x272)));

	if (t63 != 9) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = 462;
	uint16_t x274 = UINT16_MAX;
	uint64_t x276 = UINT64_MAX;
	static int32_t t64 = -100;

	t64 = (x273|(x274<=(x275-x276)));

	if (t64 != 462) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = -60;
	int16_t x279 = -1;
	int64_t x280 = INT64_MAX;
	static int32_t t65 = 84;

	t65 = (x277|(x278<=(x279-x280)));

	if (t65 != -60) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MAX;
	static uint32_t x282 = 1057688062U;
	uint32_t x283 = UINT32_MAX;
	uint32_t x284 = 4468U;
	volatile int32_t t66 = INT32_MAX;

	t66 = (x281|(x282<=(x283-x284)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = INT64_MAX;
	volatile int32_t x286 = -1;
	volatile int64_t x287 = INT64_MAX;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x285|(x286<=(x287-x288)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MIN;
	int32_t x291 = INT32_MAX;
	volatile int8_t x292 = INT8_MAX;
	int32_t t68 = 15;

	t68 = (x289|(x290<=(x291-x292)));

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x296 = -99072082LL;
	static int64_t t69 = INT64_MAX;

	t69 = (x293|(x294<=(x295-x296)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x298 = 377;
	int16_t x299 = INT16_MAX;
	volatile int16_t x300 = 0;
	volatile int32_t t70 = -60547887;

	t70 = (x297|(x298<=(x299-x300)));

	if (t70 != 331) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MIN;
	volatile int16_t x303 = INT16_MAX;
	int32_t t71 = -4187;

	t71 = (x301|(x302<=(x303-x304)));

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = UINT64_MAX;
	int8_t x306 = 12;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MAX;
	static volatile uint64_t t72 = UINT64_MAX;

	t72 = (x305|(x306<=(x307-x308)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	uint64_t x311 = UINT64_MAX;
	int16_t x312 = INT16_MAX;

	t73 = (x309|(x310<=(x311-x312)));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x314 = -3;
	volatile int32_t x316 = INT32_MIN;

	t74 = (x313|(x314<=(x315-x316)));

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x317 = 1798U;
	uint64_t x319 = UINT64_MAX;
	uint32_t x320 = 280552U;
	int32_t t75 = -87195022;

	t75 = (x317|(x318<=(x319-x320)));

	if (t75 != 1799) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x329 = 21394U;
	int64_t x330 = INT64_MIN;
	int16_t x331 = -16;
	uint16_t x332 = 2343U;

	t76 = (x329|(x330<=(x331-x332)));

	if (t76 != 21395) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	volatile int64_t x338 = -4457509308734LL;
	volatile int32_t x339 = -316899;
	int16_t x340 = INT16_MIN;
	volatile int32_t t77 = -1634;

	t77 = (x337|(x338<=(x339-x340)));

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x342 = -1LL;
	static uint8_t x343 = 36U;
	volatile int64_t x344 = 146965754420706LL;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (x341|(x342<=(x343-x344)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x345 = INT8_MIN;
	volatile uint32_t x348 = UINT32_MAX;

	t79 = (x345|(x346<=(x347-x348)));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x349 = 10U;
	uint64_t x350 = 2866LLU;
	static int16_t x352 = 1;
	int32_t t80 = 24899227;

	t80 = (x349|(x350<=(x351-x352)));

	if (t80 != 11) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = 0U;
	int8_t x354 = INT8_MAX;
	volatile int32_t x355 = -1;
	int8_t x356 = -1;
	int32_t t81 = -32281122;

	t81 = (x353|(x354<=(x355-x356)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = 12U;
	uint16_t x358 = 9258U;
	int16_t x359 = -1;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t82 = 5;

	t82 = (x357|(x358<=(x359-x360)));

	if (t82 != 12) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x362 = -15485;
	int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MIN;

	t83 = (x361|(x362<=(x363-x364)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x365 = UINT8_MAX;
	static int8_t x367 = -1;
	static int8_t x368 = -3;

	t84 = (x365|(x366<=(x367-x368)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	int16_t x372 = 42;
	volatile int32_t t85 = 3395022;

	t85 = (x369|(x370<=(x371-x372)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x374 = 59450;
	volatile int64_t x375 = 0LL;
	static int16_t x376 = -3987;

	t86 = (x373|(x374<=(x375-x376)));

	if (t86 != -61) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x377 = -1;
	int16_t x378 = 3102;
	int32_t x379 = INT32_MIN;
	static volatile int32_t t87 = 1;

	t87 = (x377|(x378<=(x379-x380)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = -8494001669965098LL;
	volatile int16_t x382 = -3650;
	static volatile int64_t t88 = -1643LL;

	t88 = (x381|(x382<=(x383-x384)));

	if (t88 != -8494001669965097LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x385 = 11LL;
	uint16_t x386 = 3U;
	volatile int8_t x387 = INT8_MIN;
	volatile int64_t t89 = -148035300232517114LL;

	t89 = (x385|(x386<=(x387-x388)));

	if (t89 != 11LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x389 = INT32_MIN;
	uint16_t x391 = 0U;
	int16_t x392 = -1;
	int32_t t90 = INT32_MIN;

	t90 = (x389|(x390<=(x391-x392)));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x393 = 0;
	int32_t x396 = -8552;
	volatile int32_t t91 = -992787;

	t91 = (x393|(x394<=(x395-x396)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x401 = 0U;
	static int64_t x402 = -1LL;
	int32_t t92 = -20657634;

	t92 = (x401|(x402<=(x403-x404)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x407 = -655447745LL;
	volatile int8_t x408 = INT8_MIN;

	t93 = (x405|(x406<=(x407-x408)));

	if (t93 != 34U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = 16904511091625462LL;
	int8_t x410 = -1;
	static uint64_t x411 = UINT64_MAX;
	int8_t x412 = -1;
	volatile int64_t t94 = -488009530534226LL;

	t94 = (x409|(x410<=(x411-x412)));

	if (t94 != 16904511091625462LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x414 = -1;
	int64_t x416 = 36183227903660LL;
	static int64_t t95 = -16366222499212LL;

	t95 = (x413|(x414<=(x415-x416)));

	if (t95 != 3936680714749LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x417 = 13549;
	int32_t x418 = -147320116;
	uint64_t x419 = 643284158LLU;
	int16_t x420 = -1619;
	volatile int32_t t96 = 161;

	t96 = (x417|(x418<=(x419-x420)));

	if (t96 != 13549) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = -3855572;
	static int64_t x422 = 130676259790018693LL;
	int64_t x423 = -104LL;
	int8_t x424 = -1;
	int32_t t97 = 707;

	t97 = (x421|(x422<=(x423-x424)));

	if (t97 != -3855572) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x425 = -6320327288288208LL;
	int8_t x426 = -25;
	uint32_t x427 = 1705098606U;
	int64_t x428 = INT64_MAX;
	volatile int64_t t98 = -16299LL;

	t98 = (x425|(x426<=(x427-x428)));

	if (t98 != -6320327288288208LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x433 = 3U;
	int64_t x434 = -70502392LL;
	int16_t x435 = -1;
	uint64_t x436 = 13514718LLU;
	int32_t t99 = -5;

	t99 = (x433|(x434<=(x435-x436)));

	if (t99 != 3) { NG(); } else { ; }
	
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

