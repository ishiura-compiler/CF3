#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = 1;
int64_t x10 = 596783334908655597LL;
int64_t x13 = INT64_MIN;
static uint16_t x18 = UINT16_MAX;
int32_t x19 = INT32_MIN;
volatile int32_t t4 = 513605768;
uint8_t x30 = 62U;
uint64_t t7 = UINT64_MAX;
int16_t x34 = -1;
volatile int64_t t10 = 4240LL;
static volatile int32_t t11 = -1504;
volatile int8_t x53 = INT8_MAX;
int64_t x59 = -1LL;
int32_t x62 = INT32_MIN;
volatile int32_t t15 = -2973;
uint16_t x70 = 21534U;
int64_t x74 = -1LL;
uint8_t x92 = UINT8_MAX;
volatile int32_t x101 = INT32_MAX;
volatile uint8_t x105 = UINT8_MAX;
volatile int32_t x106 = -122832161;
int32_t t26 = 442589;
static int64_t x113 = INT64_MIN;
int32_t x114 = 420;
uint32_t x118 = 1720U;
int64_t t29 = 119395882423863LL;
volatile int16_t x122 = -1;
static int32_t x130 = INT32_MIN;
int8_t x132 = INT8_MAX;
int16_t x134 = INT16_MAX;
int8_t x136 = 11;
volatile int64_t t33 = INT64_MIN;
int64_t x137 = -1LL;
int64_t x144 = -1LL;
static volatile int16_t x145 = -1;
int16_t x147 = 487;
int16_t x150 = 4308;
volatile int32_t x151 = INT32_MIN;
static volatile int64_t t38 = -437010362LL;
static uint16_t x158 = UINT16_MAX;
volatile int32_t t39 = INT32_MAX;
static int32_t t41 = 0;
uint32_t x176 = 349366U;
volatile int8_t x182 = INT8_MAX;
uint16_t x192 = 1562U;
volatile uint16_t x193 = 402U;
int64_t x196 = INT64_MIN;
volatile int8_t x204 = 0;
uint64_t x207 = 25946013627608862LLU;
int64_t x210 = INT64_MAX;
uint32_t x213 = 1031315U;
uint64_t x215 = 21375232LLU;
int8_t x219 = 0;
volatile int32_t x221 = -18;
static int32_t x224 = -4429;
volatile int8_t x235 = -1;
volatile int64_t t58 = INT64_MIN;
uint8_t x244 = 46U;
int32_t x247 = INT32_MIN;
int32_t t62 = INT32_MAX;
int16_t x256 = INT16_MAX;
uint64_t t63 = UINT64_MAX;
static int16_t x257 = INT16_MAX;
static volatile int8_t x259 = INT8_MAX;
uint64_t x265 = UINT64_MAX;
int32_t x270 = 98695322;
uint32_t x272 = 460U;
uint64_t x280 = 21132138182LLU;
uint16_t x283 = 6927U;
uint8_t x295 = 1U;
int8_t x308 = INT8_MIN;
int64_t x313 = INT64_MAX;
uint32_t x319 = UINT32_MAX;
uint64_t x323 = 357209847LLU;
static uint64_t t81 = UINT64_MAX;
int64_t t82 = INT64_MAX;
int16_t x338 = -1;
uint8_t x344 = UINT8_MAX;
volatile uint32_t x346 = 32329884U;
volatile int8_t x361 = INT8_MIN;
static uint64_t x371 = 24883LLU;
static uint32_t x374 = UINT32_MAX;
int32_t t95 = -1734;
volatile int64_t x391 = INT64_MIN;
static uint32_t x394 = 10159U;
static int8_t x398 = INT8_MIN;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	int16_t x2 = 0;
	int64_t x3 = INT64_MAX;
	static int64_t x4 = INT64_MIN;
	volatile int64_t t0 = INT64_MAX;

	t0 = (x1|(x2<(x3&x4)));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -4;
	int64_t x6 = -1LL;
	static volatile int32_t x7 = INT32_MAX;
	int32_t t1 = 1;

	t1 = (x5|(x6<(x7&x8)));

	if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 68U;
	uint8_t x11 = 2U;
	static uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = 66;

	t2 = (x9|(x10<(x11&x12)));

	if (t2 != 68) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MAX;
	static uint8_t x16 = UINT8_MAX;
	volatile int64_t t3 = -311LL;

	t3 = (x13|(x14<(x15&x16)));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile int8_t x20 = 1;

	t4 = (x17|(x18<(x19&x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MIN;
	uint32_t x24 = 110317193U;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x21|(x22<(x23&x24)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int64_t x26 = -1LL;
	static int32_t x27 = INT32_MAX;
	int8_t x28 = -1;
	volatile int32_t t6 = 2714816;

	t6 = (x25|(x26<(x27&x28)));

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	uint16_t x31 = 10279U;
	volatile int64_t x32 = 1017644367041793430LL;

	t7 = (x29|(x30<(x31&x32)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint64_t x35 = 40LLU;
	int32_t x36 = -954057612;
	int32_t t8 = INT32_MAX;

	t8 = (x33|(x34<(x35&x36)));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1896;
	static uint8_t x38 = 2U;
	static int8_t x39 = INT8_MIN;
	static volatile int8_t x40 = -3;
	volatile int32_t t9 = 1018;

	t9 = (x37|(x38<(x39&x40)));

	if (t9 != -1896) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 61218405502986LL;
	uint16_t x42 = UINT16_MAX;
	uint32_t x43 = UINT32_MAX;
	int8_t x44 = -1;

	t10 = (x41|(x42<(x43&x44)));

	if (t10 != 61218405502987LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 223;
	volatile uint64_t x46 = UINT64_MAX;
	static volatile int64_t x47 = -1LL;
	uint8_t x48 = 87U;

	t11 = (x45|(x46<(x47&x48)));

	if (t11 != 223) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MAX;
	int16_t x50 = 12;
	volatile int32_t x51 = INT32_MAX;
	int16_t x52 = 11704;
	int32_t t12 = INT32_MAX;

	t12 = (x49|(x50<(x51&x52)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x54 = 2U;
	int16_t x55 = 7;
	static int32_t x56 = -2771439;
	volatile int32_t t13 = 0;

	t13 = (x53|(x54<(x55&x56)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = 5603;
	volatile int64_t x58 = 1LL;
	uint16_t x60 = 55U;
	volatile int32_t t14 = -686;

	t14 = (x57|(x58<(x59&x60)));

	if (t14 != 5603) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = UINT16_MAX;
	volatile int64_t x63 = INT64_MIN;
	static uint64_t x64 = 7691817774LLU;

	t15 = (x61|(x62<(x63&x64)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 11U;
	int16_t x66 = INT16_MAX;
	int64_t x67 = INT64_MIN;
	int32_t x68 = 17536;
	static int32_t t16 = 344;

	t16 = (x65|(x66<(x67&x68)));

	if (t16 != 11) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	volatile int16_t x71 = -6;
	int16_t x72 = INT16_MIN;
	volatile int64_t t17 = -53744560221LL;

	t17 = (x69|(x70<(x71&x72)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -3;
	uint32_t x75 = 26827453U;
	int8_t x76 = -1;
	int32_t t18 = -212524;

	t18 = (x73|(x74<(x75&x76)));

	if (t18 != -3) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -1;
	static uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	volatile int64_t x80 = -1LL;
	volatile int32_t t19 = 617896;

	t19 = (x77|(x78<(x79&x80)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 0;
	static int64_t x82 = INT64_MAX;
	int32_t x83 = -1;
	int32_t x84 = 46360;
	int32_t t20 = -248295;

	t20 = (x81|(x82<(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 44U;
	int64_t x86 = INT64_MIN;
	uint16_t x87 = 2558U;
	int8_t x88 = 0;
	volatile int32_t t21 = -256;

	t21 = (x85|(x86<(x87&x88)));

	if (t21 != 45) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int16_t x90 = -1;
	int64_t x91 = -158542685LL;
	volatile int32_t t22 = -24870;

	t22 = (x89|(x90<(x91&x92)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1781568;
	int16_t x94 = INT16_MIN;
	static volatile uint64_t x95 = 16642071405LLU;
	int16_t x96 = 0;
	static int32_t t23 = 2;

	t23 = (x93|(x94<(x95&x96)));

	if (t23 != -1781568) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	int16_t x98 = -1;
	uint64_t x99 = 259898282538LLU;
	int32_t x100 = INT32_MAX;
	int32_t t24 = 207928590;

	t24 = (x97|(x98<(x99&x100)));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -1;
	int64_t x103 = INT64_MIN;
	static int32_t x104 = INT32_MIN;
	int32_t t25 = INT32_MAX;

	t25 = (x101|(x102<(x103&x104)));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x107 = 19013U;
	int8_t x108 = -1;

	t26 = (x105|(x106<(x107&x108)));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -20;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = 15724;
	uint16_t x112 = UINT16_MAX;
	int32_t t27 = 17;

	t27 = (x109|(x110<(x111&x112)));

	if (t27 != -20) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x115 = -1LL;
	int8_t x116 = -1;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x113|(x114<(x115&x116)));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -1LL;
	uint64_t x119 = 457641159179425LLU;
	int64_t x120 = -1170328LL;

	t29 = (x117|(x118<(x119&x120)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MAX;
	volatile int32_t x123 = INT32_MIN;
	static int64_t x124 = INT64_MAX;
	int32_t t30 = 65;

	t30 = (x121|(x122<(x123&x124)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x125 = INT64_MIN;
	uint64_t x126 = UINT64_MAX;
	int32_t x127 = -1;
	static int32_t x128 = INT32_MIN;
	volatile int64_t t31 = INT64_MIN;

	t31 = (x125|(x126<(x127&x128)));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 59U;
	int64_t x131 = 1LL;
	volatile int32_t t32 = -1;

	t32 = (x129|(x130<(x131&x132)));

	if (t32 != 59) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	static int32_t x135 = INT32_MIN;

	t33 = (x133|(x134<(x135&x136)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = 2162U;
	int64_t x139 = INT64_MIN;
	volatile uint16_t x140 = 13U;
	volatile int64_t t34 = 41668468074LL;

	t34 = (x137|(x138<(x139&x140)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = 17;
	int32_t x143 = INT32_MIN;
	int64_t t35 = INT64_MAX;

	t35 = (x141|(x142<(x143&x144)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x146 = 838U;
	uint8_t x148 = UINT8_MAX;
	static volatile int32_t t36 = -432268141;

	t36 = (x145|(x146<(x147&x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -7;
	int8_t x152 = INT8_MIN;
	int32_t t37 = -47662;

	t37 = (x149|(x150<(x151&x152)));

	if (t37 != -7) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MIN;
	static int8_t x155 = 0;
	volatile int16_t x156 = -1;

	t38 = (x153|(x154<(x155&x156)));

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int8_t x159 = INT8_MAX;
	int16_t x160 = 967;

	t39 = (x157|(x158<(x159&x160)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 33U;
	int16_t x162 = 0;
	volatile uint16_t x163 = 14257U;
	static uint16_t x164 = 21U;
	volatile int32_t t40 = 13;

	t40 = (x161|(x162<(x163&x164)));

	if (t40 != 33) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x165 = INT16_MIN;
	uint16_t x166 = UINT16_MAX;
	int8_t x167 = 8;
	int16_t x168 = 99;

	t41 = (x165|(x166<(x167&x168)));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -13;
	uint32_t x170 = 57224583U;
	int16_t x171 = INT16_MIN;
	uint8_t x172 = 3U;
	static int32_t t42 = 131;

	t42 = (x169|(x170<(x171&x172)));

	if (t42 != -13) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 25;
	int16_t x174 = INT16_MIN;
	uint64_t x175 = UINT64_MAX;
	static int32_t t43 = -7697;

	t43 = (x173|(x174<(x175&x176)));

	if (t43 != 25) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	volatile int64_t x178 = 17LL;
	int32_t x179 = -18711222;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x177|(x178<(x179&x180)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 1379801229838910293LL;
	uint64_t x183 = 28084253025688LLU;
	uint8_t x184 = 127U;
	volatile int64_t t45 = -921LL;

	t45 = (x181|(x182<(x183&x184)));

	if (t45 != 1379801229838910293LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 2113173U;
	uint8_t x186 = 73U;
	uint8_t x187 = 7U;
	volatile int64_t x188 = INT64_MIN;
	volatile uint32_t t46 = 806744U;

	t46 = (x185|(x186<(x187&x188)));

	if (t46 != 2113173U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	volatile uint8_t x190 = 0U;
	uint32_t x191 = 6085U;
	static int32_t t47 = 33919651;

	t47 = (x189|(x190<(x191&x192)));

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = 1U;
	int64_t x195 = INT64_MAX;
	volatile int32_t t48 = -10948336;

	t48 = (x193|(x194<(x195&x196)));

	if (t48 != 402) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 15599U;
	int64_t x198 = INT64_MAX;
	int64_t x199 = -152658632579545518LL;
	int64_t x200 = INT64_MIN;
	volatile uint32_t t49 = 2845U;

	t49 = (x197|(x198<(x199&x200)));

	if (t49 != 15599U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -67266928369LL;
	int64_t x202 = -5720LL;
	int64_t x203 = INT64_MIN;
	volatile int64_t t50 = -189473LL;

	t50 = (x201|(x202<(x203&x204)));

	if (t50 != -67266928369LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -3;
	uint16_t x206 = 2715U;
	volatile int8_t x208 = INT8_MIN;
	volatile int32_t t51 = 552;

	t51 = (x205|(x206<(x207&x208)));

	if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -184;
	int64_t x211 = -8360195951893LL;
	static uint64_t x212 = UINT64_MAX;
	static int32_t t52 = -18;

	t52 = (x209|(x210<(x211&x212)));

	if (t52 != -183) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	int32_t x216 = INT32_MIN;
	uint32_t t53 = 1U;

	t53 = (x213|(x214<(x215&x216)));

	if (t53 != 1031315U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -7LL;
	int8_t x218 = -3;
	int8_t x220 = -1;
	volatile int64_t t54 = 101358698322740099LL;

	t54 = (x217|(x218<(x219&x220)));

	if (t54 != -7LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = INT8_MIN;
	uint32_t x223 = UINT32_MAX;
	volatile int32_t t55 = -13424460;

	t55 = (x221|(x222<(x223&x224)));

	if (t55 != -18) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	uint8_t x226 = 0U;
	volatile uint16_t x227 = 348U;
	volatile uint16_t x228 = 77U;
	int64_t t56 = 17LL;

	t56 = (x225|(x226<(x227&x228)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -2;
	int64_t x230 = INT64_MIN;
	int32_t x231 = 1593056;
	int64_t x232 = INT64_MAX;
	int32_t t57 = -181258716;

	t57 = (x229|(x230<(x231&x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	volatile int8_t x234 = -1;
	int64_t x236 = -2047948735LL;

	t58 = (x233|(x234<(x235&x236)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	volatile uint32_t x238 = UINT32_MAX;
	volatile int32_t x239 = INT32_MAX;
	uint64_t x240 = 405397035LLU;
	static volatile int32_t t59 = 426557;

	t59 = (x237|(x238<(x239&x240)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 1U;
	volatile int64_t x242 = INT64_MAX;
	static volatile uint32_t x243 = 190355U;
	static int32_t t60 = 15973281;

	t60 = (x241|(x242<(x243&x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = -15894626059080LL;
	int32_t x246 = INT32_MAX;
	uint16_t x248 = UINT16_MAX;
	volatile int64_t t61 = 106421490254413478LL;

	t61 = (x245|(x246<(x247&x248)));

	if (t61 != -15894626059080LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = -4;
	volatile uint16_t x251 = 0U;
	int64_t x252 = -1LL;

	t62 = (x249|(x250<(x251&x252)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int8_t x254 = -2;
	uint16_t x255 = UINT16_MAX;

	t63 = (x253|(x254<(x255&x256)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = -1LL;
	static uint64_t x260 = 21388302024723LLU;
	static int32_t t64 = -512261287;

	t64 = (x257|(x258<(x259&x260)));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 50353;
	static int32_t x262 = -140181;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MAX;
	volatile int32_t t65 = -101;

	t65 = (x261|(x262<(x263&x264)));

	if (t65 != 50353) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = 10U;
	uint32_t x267 = 1U;
	int16_t x268 = -362;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x265|(x266<(x267&x268)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	int64_t x271 = INT64_MIN;
	volatile int32_t t67 = -134920909;

	t67 = (x269|(x270<(x271&x272)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 0U;
	static int64_t x274 = INT64_MIN;
	int32_t x275 = -460743;
	int64_t x276 = INT64_MAX;
	static uint32_t t68 = 0U;

	t68 = (x273|(x274<(x275&x276)));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 43095166811743333LL;
	int8_t x278 = 12;
	int8_t x279 = -3;
	int64_t t69 = 1LL;

	t69 = (x277|(x278<(x279&x280)));

	if (t69 != 43095166811743333LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	uint8_t x282 = 86U;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t70 = -78982;

	t70 = (x281|(x282<(x283&x284)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	volatile int16_t x286 = 1;
	uint64_t x287 = 7309342302LLU;
	int32_t x288 = 32861;
	static volatile int32_t t71 = 8;

	t71 = (x285|(x286<(x287&x288)));

	if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	static volatile int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MAX;
	int16_t x292 = -233;
	int32_t t72 = 5;

	t72 = (x289|(x290<(x291&x292)));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 1390012U;
	static uint32_t x294 = UINT32_MAX;
	int8_t x296 = INT8_MAX;
	volatile uint32_t t73 = 529518U;

	t73 = (x293|(x294<(x295&x296)));

	if (t73 != 1390012U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	static int8_t x298 = INT8_MIN;
	int16_t x299 = 298;
	int32_t x300 = INT32_MAX;
	volatile int32_t t74 = 1578;

	t74 = (x297|(x298<(x299&x300)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int64_t x302 = -1LL;
	static volatile int8_t x303 = -1;
	volatile int32_t x304 = INT32_MAX;
	int32_t t75 = -159993;

	t75 = (x301|(x302<(x303&x304)));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = 13U;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 1LLU;
	int32_t t76 = 504;

	t76 = (x305|(x306<(x307&x308)));

	if (t76 != 13) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MAX;
	uint8_t x310 = 111U;
	int64_t x311 = INT64_MAX;
	uint8_t x312 = UINT8_MAX;
	static int32_t t77 = 6650;

	t77 = (x309|(x310<(x311&x312)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = INT8_MAX;
	int16_t x315 = -1;
	volatile int8_t x316 = 15;
	static int64_t t78 = INT64_MAX;

	t78 = (x313|(x314<(x315&x316)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	static int64_t x318 = INT64_MAX;
	int16_t x320 = INT16_MIN;
	static int32_t t79 = 31070;

	t79 = (x317|(x318<(x319&x320)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 0U;
	int8_t x322 = INT8_MIN;
	static int8_t x324 = INT8_MAX;
	int32_t t80 = -38;

	t80 = (x321|(x322<(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x326 = INT64_MIN;
	static uint16_t x327 = UINT16_MAX;
	int16_t x328 = INT16_MIN;

	t81 = (x325|(x326<(x327&x328)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MAX;
	uint8_t x330 = 88U;
	uint64_t x331 = 438403383422560LLU;
	int16_t x332 = INT16_MAX;

	t82 = (x329|(x330<(x331&x332)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -3902539965287LL;
	int16_t x334 = INT16_MIN;
	uint8_t x335 = 3U;
	int16_t x336 = INT16_MAX;
	int64_t t83 = -3607LL;

	t83 = (x333|(x334<(x335&x336)));

	if (t83 != -3902539965287LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	static int16_t x339 = INT16_MIN;
	static volatile int16_t x340 = -1;
	volatile int64_t t84 = INT64_MIN;

	t84 = (x337|(x338<(x339&x340)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 3317U;
	int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	volatile int32_t t85 = 0;

	t85 = (x341|(x342<(x343&x344)));

	if (t85 != 3317) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t86 = -18224188;

	t86 = (x345|(x346<(x347&x348)));

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 353446LLU;
	int32_t x350 = -1;
	int16_t x351 = 0;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t87 = 5241785876698002186LLU;

	t87 = (x349|(x350<(x351&x352)));

	if (t87 != 353447LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 97725U;
	int16_t x354 = INT16_MIN;
	static int64_t x355 = 2257609985310379LL;
	uint16_t x356 = 31208U;
	uint32_t t88 = 342U;

	t88 = (x353|(x354<(x355&x356)));

	if (t88 != 97725U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = -26095LL;
	int64_t x360 = 18885010405069LL;
	volatile int64_t t89 = 84869040879756LL;

	t89 = (x357|(x358<(x359&x360)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MAX;
	int8_t x363 = INT8_MIN;
	volatile int8_t x364 = -1;
	int32_t t90 = -1915;

	t90 = (x361|(x362<(x363&x364)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	int64_t x366 = INT64_MIN;
	volatile uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t91 = 419351264211332LL;

	t91 = (x365|(x366<(x367&x368)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = 29U;
	int16_t x370 = INT16_MAX;
	int16_t x372 = INT16_MIN;
	volatile uint32_t t92 = 825U;

	t92 = (x369|(x370<(x371&x372)));

	if (t92 != 29U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 220LL;
	int64_t x375 = -1LL;
	volatile uint8_t x376 = 111U;
	volatile int64_t t93 = -1013103095944LL;

	t93 = (x373|(x374<(x375&x376)));

	if (t93 != 220LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MAX;
	volatile uint8_t x378 = 0U;
	int32_t x379 = INT32_MIN;
	static volatile int64_t x380 = -1LL;
	int64_t t94 = INT64_MAX;

	t94 = (x377|(x378<(x379&x380)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = 58;
	int16_t x382 = 7;
	static int8_t x383 = 1;
	static int16_t x384 = INT16_MIN;

	t95 = (x381|(x382<(x383&x384)));

	if (t95 != 58) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int16_t x386 = 0;
	volatile int64_t x387 = INT64_MIN;
	uint8_t x388 = UINT8_MAX;
	static int32_t t96 = 8504;

	t96 = (x385|(x386<(x387&x388)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	static uint16_t x390 = 24015U;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 0;

	t97 = (x389|(x390<(x391&x392)));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	uint64_t x395 = 503515400LLU;
	volatile int16_t x396 = INT16_MAX;
	static volatile uint32_t t98 = UINT32_MAX;

	t98 = (x393|(x394<(x395&x396)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 1U;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MIN;
	uint32_t t99 = 1512365U;

	t99 = (x397|(x398<(x399&x400)));

	if (t99 != 1U) { NG(); } else { ; }
	
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

