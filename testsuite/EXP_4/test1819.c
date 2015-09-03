#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = -1415;
int16_t x12 = -1;
int64_t x16 = -1805763662185778421LL;
volatile uint64_t t5 = 202259LLU;
int64_t x29 = -2871986430198364LL;
volatile uint32_t x31 = UINT32_MAX;
int32_t x35 = 32435766;
int32_t t8 = -102164;
int64_t x37 = 314843LL;
volatile int64_t t10 = -15LL;
int8_t x50 = 0;
int16_t x54 = INT16_MIN;
static volatile uint16_t x55 = UINT16_MAX;
static int64_t t13 = 405240563931645LL;
int64_t x57 = INT64_MIN;
volatile int8_t x58 = INT8_MIN;
int8_t x59 = -1;
int64_t x60 = INT64_MAX;
int32_t x64 = 654885100;
static int32_t x68 = INT32_MAX;
int8_t x69 = 13;
uint64_t t20 = UINT64_MAX;
static int16_t x86 = 1261;
uint8_t x87 = 6U;
static int16_t x91 = INT16_MAX;
uint32_t x92 = UINT32_MAX;
volatile uint16_t x93 = UINT16_MAX;
static uint64_t x96 = 982829083584006LLU;
uint64_t x104 = 21357106862706452LLU;
int64_t x108 = -1LL;
int16_t x114 = INT16_MIN;
uint64_t x117 = 201663755133355769LLU;
int16_t x124 = -1;
int32_t x130 = -8173914;
int32_t t33 = 607589;
int16_t x137 = INT16_MAX;
volatile int32_t t34 = -1062437;
static int16_t x150 = INT16_MIN;
uint16_t x158 = 0U;
static int64_t x161 = INT64_MIN;
volatile int8_t x162 = INT8_MAX;
volatile int32_t t42 = 415855937;
int32_t x173 = INT32_MIN;
int16_t x179 = 2116;
int64_t x180 = -1060255LL;
int8_t x181 = INT8_MAX;
int8_t x189 = INT8_MAX;
int32_t x191 = -772168971;
static uint16_t x203 = UINT16_MAX;
int32_t t51 = -13;
int64_t x219 = INT64_MIN;
int32_t x220 = -1;
uint32_t t55 = UINT32_MAX;
volatile int64_t x225 = INT64_MAX;
int64_t t56 = INT64_MAX;
int64_t x232 = INT64_MAX;
int16_t x233 = 19;
int32_t x235 = INT32_MAX;
int32_t t58 = 6835262;
int64_t x246 = INT64_MAX;
volatile uint16_t x252 = 2314U;
volatile int64_t x256 = -1LL;
volatile uint8_t x258 = 12U;
uint64_t x261 = UINT64_MAX;
uint32_t x264 = 14071918U;
int8_t x270 = 36;
static uint64_t x280 = 1999576977295LLU;
static uint16_t x281 = UINT16_MAX;
static uint16_t x284 = 12270U;
static int32_t x285 = 14;
int16_t x287 = -1;
uint32_t x291 = UINT32_MAX;
uint8_t x295 = 61U;
uint16_t x296 = 271U;
int64_t x298 = -19578026009LL;
uint64_t x303 = UINT64_MAX;
volatile int32_t x308 = INT32_MIN;
int16_t x310 = INT16_MIN;
static int32_t x312 = -106165388;
int8_t x315 = 0;
volatile int32_t t78 = 3;
int64_t x317 = INT64_MIN;
static int64_t x322 = INT64_MAX;
volatile uint8_t x327 = 3U;
int64_t x329 = INT64_MAX;
int8_t x332 = INT8_MAX;
int32_t x335 = -30432143;
static int32_t t83 = 114;
int16_t x339 = 1332;
int8_t x340 = INT8_MIN;
int8_t x343 = -1;
int64_t x345 = -1LL;
volatile uint16_t x351 = 5U;
uint16_t x353 = UINT16_MAX;
volatile int32_t t89 = -16798874;
uint8_t x361 = 3U;
int8_t x370 = -1;
int8_t x374 = -1;
volatile int32_t t94 = -42270;
uint64_t x382 = 5898682530LLU;
static volatile int32_t t96 = INT32_MAX;
int16_t x390 = INT16_MIN;
static int32_t t97 = 65857331;
int8_t x398 = -1;
int64_t x399 = -237687LL;
volatile int32_t t99 = -89215;


void f0(void) {
	int8_t x1 = -8;
	int32_t x2 = -221655;
	int8_t x3 = INT8_MAX;
	int64_t x4 = INT64_MIN;
	static volatile int32_t t0 = 488;

	t0 = (x1|(x2<=(x3&x4)));

	if (t0 != -7) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	uint64_t x6 = 3476128303087847953LLU;
	uint16_t x7 = 160U;
	static uint64_t x8 = 383208929820LLU;
	int32_t t1 = 4;

	t1 = (x5|(x6<=(x7&x8)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	volatile int32_t x11 = INT32_MAX;
	static int32_t t2 = -6812850;

	t2 = (x9|(x10<=(x11&x12)));

	if (t2 != -1415) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 682443668U;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = 62U;
	static uint32_t t3 = 1322547357U;

	t3 = (x13|(x14<=(x15&x16)));

	if (t3 != 682443668U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	uint16_t x19 = 1898U;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 260352273;

	t4 = (x17|(x18<=(x19&x20)));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 12LLU;
	volatile uint32_t x22 = UINT32_MAX;
	int8_t x23 = INT8_MIN;
	uint8_t x24 = UINT8_MAX;

	t5 = (x21|(x22<=(x23&x24)));

	if (t5 != 12LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 4300721881732LLU;
	uint32_t x26 = 911U;
	int32_t x27 = -12498034;
	int16_t x28 = INT16_MAX;
	static volatile uint64_t t6 = 812930622LLU;

	t6 = (x25|(x26<=(x27&x28)));

	if (t6 != 4300721881733LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	uint32_t x32 = UINT32_MAX;
	static volatile int64_t t7 = -4235164647764LL;

	t7 = (x29|(x30<=(x31&x32)));

	if (t7 != -2871986430198363LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 23U;
	int64_t x34 = -1LL;
	static int16_t x36 = INT16_MAX;

	t8 = (x33|(x34<=(x35&x36)));

	if (t8 != 23) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = -1LL;
	int64_t x39 = INT64_MIN;
	uint8_t x40 = 6U;
	volatile int64_t t9 = -180948079LL;

	t9 = (x37|(x38<=(x39&x40)));

	if (t9 != 314843LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	volatile uint8_t x42 = 1U;
	uint64_t x43 = 14390163174LLU;
	uint16_t x44 = UINT16_MAX;

	t10 = (x41|(x42<=(x43&x44)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	volatile uint8_t x46 = 2U;
	static int32_t x47 = -1;
	volatile int8_t x48 = INT8_MIN;
	volatile int32_t t11 = INT32_MIN;

	t11 = (x45|(x46<=(x47&x48)));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile int16_t x51 = INT16_MAX;
	static int16_t x52 = 7;
	static int32_t t12 = -33855;

	t12 = (x49|(x50<=(x51&x52)));

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	volatile int32_t x56 = -248154;

	t13 = (x53|(x54<=(x55&x56)));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t t14 = 88663LL;

	t14 = (x57|(x58<=(x59&x60)));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	int8_t x62 = -29;
	int8_t x63 = INT8_MIN;
	int32_t t15 = -14164891;

	t15 = (x61|(x62<=(x63&x64)));

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -122240;
	uint64_t x66 = 127534412273LLU;
	int16_t x67 = -1;
	volatile int32_t t16 = -261954289;

	t16 = (x65|(x66<=(x67&x68)));

	if (t16 != -122240) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x70 = INT8_MAX;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 26930622;

	t17 = (x69|(x70<=(x71&x72)));

	if (t17 != 13) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -1;
	int32_t x74 = 30855966;
	int32_t x75 = -1;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = 700832;

	t18 = (x73|(x74<=(x75&x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -1;
	int8_t x78 = 42;
	static int8_t x79 = 0;
	int8_t x80 = -1;
	int32_t t19 = -177771;

	t19 = (x77|(x78<=(x79&x80)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	static volatile int8_t x82 = -24;
	uint8_t x83 = 0U;
	int16_t x84 = INT16_MIN;

	t20 = (x81|(x82<=(x83&x84)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	uint8_t x88 = 1U;
	static volatile int32_t t21 = INT32_MAX;

	t21 = (x85|(x86<=(x87&x88)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 3195937345302LLU;
	uint32_t x90 = 7893147U;
	uint64_t t22 = 425772748955578LLU;

	t22 = (x89|(x90<=(x91&x92)));

	if (t22 != 3195937345302LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = 6U;
	int64_t x95 = -1LL;
	static volatile int32_t t23 = 28;

	t23 = (x93|(x94<=(x95&x96)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x98 = INT64_MIN;
	uint16_t x99 = 520U;
	int32_t x100 = 641217;
	int32_t t24 = 969282;

	t24 = (x97|(x98<=(x99&x100)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	static int64_t x102 = -3996065021LL;
	int64_t x103 = INT64_MIN;
	int32_t t25 = INT32_MIN;

	t25 = (x101|(x102<=(x103&x104)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MAX;
	static uint32_t x107 = 1400U;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x105|(x106<=(x107&x108)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -25614937LL;
	static volatile uint8_t x110 = 124U;
	static int64_t x111 = INT64_MIN;
	uint64_t x112 = 3127LLU;
	int64_t t27 = 7LL;

	t27 = (x109|(x110<=(x111&x112)));

	if (t27 != -25614937LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	int8_t x115 = 0;
	int32_t x116 = 42902;
	int32_t t28 = -1;

	t28 = (x113|(x114<=(x115&x116)));

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MIN;
	int64_t x119 = -1LL;
	int32_t x120 = -1;
	static volatile uint64_t t29 = 235286LLU;

	t29 = (x117|(x118<=(x119&x120)));

	if (t29 != 201663755133355769LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 51;
	int16_t x122 = -1;
	static int16_t x123 = INT16_MAX;
	static int32_t t30 = -38991;

	t30 = (x121|(x122<=(x123&x124)));

	if (t30 != 51) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	volatile int16_t x126 = 3;
	static volatile int8_t x127 = INT8_MIN;
	volatile int16_t x128 = -1;
	int32_t t31 = 1;

	t31 = (x125|(x126<=(x127&x128)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	volatile int8_t x131 = INT8_MIN;
	static uint16_t x132 = 57U;
	volatile int32_t t32 = 337823434;

	t32 = (x129|(x130<=(x131&x132)));

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 8669;
	volatile int32_t x134 = INT32_MIN;
	int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MIN;

	t33 = (x133|(x134<=(x135&x136)));

	if (t33 != 8669) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = INT8_MIN;
	uint16_t x139 = UINT16_MAX;
	uint16_t x140 = 3U;

	t34 = (x137|(x138<=(x139&x140)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 14046713;
	uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	volatile uint8_t x144 = 15U;
	volatile int32_t t35 = -852289449;

	t35 = (x141|(x142<=(x143&x144)));

	if (t35 != 14046713) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 380;
	uint64_t x146 = 82LLU;
	uint32_t x147 = 439U;
	int64_t x148 = INT64_MAX;
	volatile int32_t t36 = 390630131;

	t36 = (x145|(x146<=(x147&x148)));

	if (t36 != 381) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	volatile int32_t x152 = INT32_MIN;
	static volatile int64_t t37 = INT64_MIN;

	t37 = (x149|(x150<=(x151&x152)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 1700636500U;
	int64_t x154 = 4924LL;
	uint16_t x155 = UINT16_MAX;
	int16_t x156 = -1;
	uint32_t t38 = 149U;

	t38 = (x153|(x154<=(x155&x156)));

	if (t38 != 1700636501U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 0;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = 12295U;
	static int32_t t39 = 245;

	t39 = (x157|(x158<=(x159&x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x163 = 125425U;
	uint64_t x164 = 4LLU;
	static volatile int64_t t40 = INT64_MIN;

	t40 = (x161|(x162<=(x163&x164)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 3202U;
	int16_t x166 = -1;
	uint16_t x167 = 9992U;
	volatile int16_t x168 = -1;
	uint32_t t41 = 374126U;

	t41 = (x165|(x166<=(x167&x168)));

	if (t41 != 3203U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 3U;
	int16_t x170 = INT16_MIN;
	static int64_t x171 = INT64_MAX;
	volatile int8_t x172 = INT8_MIN;

	t42 = (x169|(x170<=(x171&x172)));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = 22;
	int64_t x175 = -1LL;
	volatile int32_t x176 = INT32_MIN;
	static int32_t t43 = INT32_MIN;

	t43 = (x173|(x174<=(x175&x176)));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -53LL;
	volatile uint8_t x178 = 2U;
	volatile int64_t t44 = -58977LL;

	t44 = (x177|(x178<=(x179&x180)));

	if (t44 != -53LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x182 = INT16_MIN;
	volatile uint8_t x183 = 12U;
	uint32_t x184 = 12U;
	volatile int32_t t45 = -28;

	t45 = (x181|(x182<=(x183&x184)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 23;
	volatile int64_t x186 = INT64_MAX;
	int64_t x187 = INT64_MIN;
	uint8_t x188 = 3U;
	volatile int32_t t46 = -797007;

	t46 = (x185|(x186<=(x187&x188)));

	if (t46 != 23) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MIN;
	static volatile uint8_t x192 = 93U;
	volatile int32_t t47 = 6;

	t47 = (x189|(x190<=(x191&x192)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MAX;
	static int8_t x195 = -1;
	volatile int16_t x196 = INT16_MIN;
	int32_t t48 = -12;

	t48 = (x193|(x194<=(x195&x196)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -1LL;
	int64_t x200 = INT64_MIN;
	uint32_t t49 = UINT32_MAX;

	t49 = (x197|(x198<=(x199&x200)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = -1;
	int16_t x204 = 1;
	int32_t t50 = 11916;

	t50 = (x201|(x202<=(x203&x204)));

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MAX;
	static int16_t x206 = INT16_MIN;
	static volatile int64_t x207 = -1LL;
	int64_t x208 = -344884449288LL;

	t51 = (x205|(x206<=(x207&x208)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x209 = 15113U;
	int32_t x210 = INT32_MIN;
	int64_t x211 = -1LL;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -6368;

	t52 = (x209|(x210<=(x211&x212)));

	if (t52 != 15113) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -63;
	uint64_t x214 = UINT64_MAX;
	static int8_t x215 = 12;
	uint8_t x216 = 101U;
	int32_t t53 = 19;

	t53 = (x213|(x214<=(x215&x216)));

	if (t53 != -63) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 14U;
	volatile int64_t x218 = INT64_MIN;
	int32_t t54 = 156483259;

	t54 = (x217|(x218<=(x219&x220)));

	if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = UINT32_MAX;
	int64_t x222 = INT64_MAX;
	uint64_t x223 = 22210566LLU;
	int32_t x224 = INT32_MAX;

	t55 = (x221|(x222<=(x223&x224)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x226 = INT32_MAX;
	int16_t x227 = INT16_MIN;
	static int64_t x228 = 152611466LL;

	t56 = (x225|(x226<=(x227&x228)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = INT32_MIN;
	static uint64_t x230 = UINT64_MAX;
	int32_t x231 = -1;
	int32_t t57 = INT32_MIN;

	t57 = (x229|(x230<=(x231&x232)));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = 215U;
	int16_t x236 = -3595;

	t58 = (x233|(x234<=(x235&x236)));

	if (t58 != 19) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x238 = -1LL;
	int32_t x239 = 1261;
	int16_t x240 = -5519;
	static volatile uint64_t t59 = UINT64_MAX;

	t59 = (x237|(x238<=(x239&x240)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile int32_t x242 = INT32_MAX;
	int64_t x243 = -1LL;
	int16_t x244 = INT16_MAX;
	static volatile int32_t t60 = 120113179;

	t60 = (x241|(x242<=(x243&x244)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int16_t x247 = -1;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 5;

	t61 = (x245|(x246<=(x247&x248)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x249 = 2U;
	int32_t x250 = -45935220;
	int32_t x251 = -973;
	int32_t t62 = -62469;

	t62 = (x249|(x250<=(x251&x252)));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x254 = -42;
	static int16_t x255 = -13988;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x253|(x254<=(x255&x256)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x257 = -1LL;
	volatile uint16_t x259 = 844U;
	int16_t x260 = -1;
	int64_t t64 = 1501769LL;

	t64 = (x257|(x258<=(x259&x260)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x262 = 40U;
	int64_t x263 = -1LL;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x261|(x262<=(x263&x264)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	static volatile int32_t x266 = -1;
	int32_t x267 = INT32_MIN;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 0;

	t66 = (x265|(x266<=(x267&x268)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	uint16_t x271 = UINT16_MAX;
	uint16_t x272 = 13U;
	uint64_t t67 = UINT64_MAX;

	t67 = (x269|(x270<=(x271&x272)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MAX;
	uint64_t x274 = UINT64_MAX;
	uint16_t x275 = UINT16_MAX;
	volatile int32_t x276 = -21;
	volatile int32_t t68 = 0;

	t68 = (x273|(x274<=(x275&x276)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 1750590U;
	int8_t x278 = -46;
	uint8_t x279 = 8U;
	volatile uint32_t t69 = 6U;

	t69 = (x277|(x278<=(x279&x280)));

	if (t69 != 1750590U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MAX;
	volatile int32_t t70 = -1;

	t70 = (x281|(x282<=(x283&x284)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = UINT8_MAX;
	volatile int8_t x288 = INT8_MAX;
	volatile int32_t t71 = 9;

	t71 = (x285|(x286<=(x287&x288)));

	if (t71 != 14) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	static uint64_t x290 = 14696143314LLU;
	int32_t x292 = INT32_MIN;
	int32_t t72 = 8539879;

	t72 = (x289|(x290<=(x291&x292)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MIN;
	int32_t t73 = -800159888;

	t73 = (x293|(x294<=(x295&x296)));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = 3;
	uint16_t x299 = 0U;
	int32_t x300 = 0;
	int32_t t74 = 7639;

	t74 = (x297|(x298<=(x299&x300)));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	volatile uint16_t x302 = 1866U;
	uint8_t x304 = 9U;
	int32_t t75 = 939;

	t75 = (x301|(x302<=(x303&x304)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 5;
	static uint32_t x306 = UINT32_MAX;
	int8_t x307 = INT8_MIN;
	volatile int32_t t76 = -61173;

	t76 = (x305|(x306<=(x307&x308)));

	if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = 64388;
	static volatile uint16_t x311 = UINT16_MAX;
	static int32_t t77 = 12542;

	t77 = (x309|(x310<=(x311&x312)));

	if (t77 != 64389) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = INT16_MAX;
	uint32_t x314 = UINT32_MAX;
	int32_t x316 = INT32_MAX;

	t78 = (x313|(x314<=(x315&x316)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x318 = 0U;
	static int8_t x319 = INT8_MIN;
	uint8_t x320 = 2U;
	volatile int64_t t79 = -4385973393603783LL;

	t79 = (x317|(x318<=(x319&x320)));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 32007U;
	static int16_t x323 = INT16_MAX;
	int16_t x324 = -6;
	int32_t t80 = 51837122;

	t80 = (x321|(x322<=(x323&x324)));

	if (t80 != 32007) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MAX;
	uint64_t x326 = UINT64_MAX;
	static volatile uint64_t x328 = 29016440155369674LLU;
	int64_t t81 = INT64_MAX;

	t81 = (x325|(x326<=(x327&x328)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MAX;
	static int16_t x331 = INT16_MIN;
	int64_t t82 = INT64_MAX;

	t82 = (x329|(x330<=(x331&x332)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = 0;
	int16_t x334 = INT16_MIN;
	int64_t x336 = -1LL;

	t83 = (x333|(x334<=(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile uint64_t x338 = 47894548154LLU;
	int32_t t84 = -546613;

	t84 = (x337|(x338<=(x339&x340)));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 1;
	int8_t x342 = INT8_MAX;
	static int16_t x344 = -14707;
	int32_t t85 = -638980809;

	t85 = (x341|(x342<=(x343&x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x346 = 2108U;
	volatile uint16_t x347 = 0U;
	int64_t x348 = INT64_MIN;
	int64_t t86 = 2559222613116105909LL;

	t86 = (x345|(x346<=(x347&x348)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 6982827880836662LLU;
	static int16_t x350 = -311;
	int32_t x352 = INT32_MIN;
	uint64_t t87 = 149322790985958089LLU;

	t87 = (x349|(x350<=(x351&x352)));

	if (t87 != 6982827880836663LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = -100973319;

	t88 = (x353|(x354<=(x355&x356)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 45U;
	volatile int8_t x358 = INT8_MAX;
	uint64_t x359 = UINT64_MAX;
	uint32_t x360 = UINT32_MAX;

	t89 = (x357|(x358<=(x359&x360)));

	if (t89 != 45) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x362 = 331630317442343LLU;
	static volatile int64_t x363 = INT64_MAX;
	uint64_t x364 = UINT64_MAX;
	int32_t t90 = 30684812;

	t90 = (x361|(x362<=(x363&x364)));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint8_t x366 = 19U;
	static uint32_t x367 = UINT32_MAX;
	int64_t x368 = INT64_MIN;
	int32_t t91 = 82003749;

	t91 = (x365|(x366<=(x367&x368)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int64_t x371 = -1LL;
	int8_t x372 = INT8_MIN;
	uint64_t t92 = UINT64_MAX;

	t92 = (x369|(x370<=(x371&x372)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int64_t x375 = 61698966273916404LL;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -14;

	t93 = (x373|(x374<=(x375&x376)));

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	volatile int64_t x378 = -1LL;
	int8_t x379 = INT8_MAX;
	int8_t x380 = -1;

	t94 = (x377|(x378<=(x379&x380)));

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int8_t x383 = -1;
	volatile int8_t x384 = INT8_MAX;
	int32_t t95 = INT32_MIN;

	t95 = (x381|(x382<=(x383&x384)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MAX;
	static uint32_t x386 = UINT32_MAX;
	volatile uint8_t x387 = 0U;
	uint8_t x388 = 52U;

	t96 = (x385|(x386<=(x387&x388)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 808;
	int8_t x391 = -3;
	uint8_t x392 = UINT8_MAX;

	t97 = (x389|(x390<=(x391&x392)));

	if (t97 != 809) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = -1;
	int16_t x394 = 1;
	int8_t x395 = -6;
	static int64_t x396 = -242LL;
	static int32_t t98 = -628801;

	t98 = (x393|(x394<=(x395&x396)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = UINT16_MAX;
	static uint8_t x400 = 1U;

	t99 = (x397|(x398<=(x399&x400)));

	if (t99 != 65535) { NG(); } else { ; }
	
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

