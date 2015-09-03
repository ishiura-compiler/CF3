#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MAX;
int32_t t0 = 53839;
uint32_t x5 = 50670U;
uint64_t x7 = 9LLU;
uint64_t x9 = 3LLU;
uint64_t t2 = 33LLU;
volatile int32_t t3 = -720610965;
int16_t x24 = INT16_MIN;
uint8_t x39 = 2U;
volatile int64_t x50 = INT64_MIN;
int64_t x52 = 434990634LL;
volatile int64_t t12 = 10042LL;
static int64_t x68 = INT64_MIN;
int64_t t16 = -3950757047LL;
uint64_t x72 = UINT64_MAX;
uint64_t t17 = UINT64_MAX;
int8_t x73 = -22;
volatile int64_t t19 = 1786186177689LL;
int64_t x82 = 712586079299LL;
volatile int32_t t20 = -3151197;
uint16_t x86 = 0U;
static uint8_t x90 = UINT8_MAX;
int32_t x97 = -1;
int32_t x100 = INT32_MAX;
int16_t x101 = INT16_MIN;
volatile int32_t x107 = INT32_MAX;
static int64_t x108 = 953208285605256LL;
int32_t x128 = INT32_MIN;
static volatile int64_t t36 = 108LL;
volatile int8_t x151 = 1;
static uint32_t x155 = 13U;
int16_t x165 = INT16_MAX;
int32_t t41 = 454;
int8_t x170 = INT8_MAX;
uint32_t x171 = 13036461U;
static int64_t x172 = 131506346LL;
int16_t x181 = INT16_MAX;
volatile int32_t t45 = 191938871;
int16_t x193 = INT16_MIN;
int8_t x203 = INT8_MIN;
static int16_t x212 = -1;
int64_t x215 = -1LL;
uint8_t x217 = UINT8_MAX;
volatile uint8_t x221 = 90U;
int16_t x223 = INT16_MIN;
volatile uint32_t t57 = UINT32_MAX;
int32_t x233 = INT32_MIN;
volatile int64_t x234 = 66433596473LL;
uint64_t x235 = 41186LLU;
volatile int32_t t58 = 355;
int8_t x238 = -12;
volatile int64_t t60 = 258647120179180LL;
static int16_t x248 = -1;
volatile uint64_t t64 = UINT64_MAX;
int32_t x270 = 828965;
int32_t x276 = INT32_MIN;
int16_t x278 = -127;
volatile int8_t x279 = INT8_MAX;
int64_t x280 = 198188367295LL;
int64_t t69 = -127736740251759LL;
volatile int32_t t70 = 104;
uint32_t x296 = 231U;
uint32_t t73 = 5969657U;
volatile int16_t x297 = INT16_MIN;
int8_t x303 = INT8_MAX;
static uint64_t x304 = 2396121093447908LLU;
int16_t x310 = 0;
static int16_t x311 = -1;
int64_t x313 = -1446090434604723LL;
int32_t x316 = INT32_MIN;
int16_t x329 = INT16_MIN;
static uint16_t x337 = 159U;
static volatile int64_t x338 = INT64_MIN;
int16_t x341 = INT16_MAX;
int64_t x347 = INT64_MIN;
static volatile int16_t x350 = INT16_MIN;
int32_t t87 = -148620852;
static int16_t x355 = INT16_MIN;
volatile uint32_t t90 = UINT32_MAX;
int32_t x367 = -1;
int64_t x369 = 28169193LL;
static int8_t x370 = 15;
volatile int64_t t92 = -394235406501LL;
volatile int64_t x383 = INT64_MAX;
int8_t x388 = INT8_MIN;
int32_t t96 = 0;
int64_t t97 = -31075642LL;
int16_t x393 = INT16_MIN;
int32_t x397 = INT32_MIN;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	int32_t x3 = INT32_MIN;
	int8_t x4 = -1;

	t0 = ((x1|(x2<x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MAX;
	static int64_t x8 = -1576347LL;
	volatile int64_t t1 = -1479136946LL;

	t1 = ((x5|(x6<x7))|x8);

	if (t1 != -1574929LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = 132820171178LLU;
	int64_t x11 = INT64_MIN;
	int64_t x12 = -99531LL;

	t2 = ((x9|(x10<x11))|x12);

	if (t2 != 18446744073709452087LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 6542;
	int8_t x14 = 14;
	static int64_t x15 = INT64_MAX;
	int32_t x16 = INT32_MIN;

	t3 = ((x13|(x14<x15))|x16);

	if (t3 != -2147477105) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint32_t x18 = 77U;
	volatile int16_t x19 = -1;
	static int8_t x20 = INT8_MAX;
	int32_t t4 = -14259566;

	t4 = ((x17|(x18<x19))|x20);

	if (t4 != -32641) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	static uint64_t x22 = 708030790580992005LLU;
	int8_t x23 = 0;
	int32_t t5 = -3702;

	t5 = ((x21|(x22<x23))|x24);

	if (t5 != -32641) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = 312;
	int16_t x26 = -1;
	int16_t x27 = INT16_MIN;
	int64_t x28 = -36576125247LL;
	int64_t t6 = 2211LL;

	t6 = ((x25|(x26<x27))|x28);

	if (t6 != -36576124935LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x30 = 108U;
	static volatile int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 14797;

	t7 = ((x29|(x30<x31))|x32);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 634703664445678LL;
	int64_t x34 = INT64_MIN;
	volatile uint8_t x35 = 13U;
	int16_t x36 = -21;
	volatile int64_t t8 = 4974336880503279LL;

	t8 = ((x33|(x34<x35))|x36);

	if (t8 != -17LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MIN;
	int8_t x40 = -1;
	volatile int32_t t9 = -37;

	t9 = ((x37|(x38<x39))|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 1U;
	int16_t x42 = 3332;
	volatile int64_t x43 = 136119450LL;
	static int64_t x44 = 189747262LL;
	int64_t t10 = 55751709960255476LL;

	t10 = ((x41|(x42<x43))|x44);

	if (t10 != 189747263LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	int16_t x46 = -100;
	int8_t x47 = INT8_MIN;
	int8_t x48 = -1;
	static int32_t t11 = -51;

	t11 = ((x45|(x46<x47))|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	int8_t x51 = -1;

	t12 = ((x49|(x50<x51))|x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MIN;
	int64_t x56 = 430003547LL;
	volatile int64_t t13 = 407394465703917248LL;

	t13 = ((x53|(x54<x55))|x56);

	if (t13 != 430014463LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 7227U;
	volatile int64_t x58 = INT64_MAX;
	int64_t x59 = 822808765LL;
	static volatile uint8_t x60 = 14U;
	static int32_t t14 = -458;

	t14 = ((x57|(x58<x59))|x60);

	if (t14 != 7231) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int64_t x62 = INT64_MIN;
	static volatile uint8_t x63 = UINT8_MAX;
	int64_t x64 = INT64_MAX;
	int64_t t15 = INT64_MAX;

	t15 = ((x61|(x62<x63))|x64);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	int32_t x66 = 11651;
	int32_t x67 = -168079;

	t16 = ((x65|(x66<x67))|x68);

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = -15;
	static int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MAX;

	t17 = ((x69|(x70<x71))|x72);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x74 = -1;
	static volatile int32_t x75 = -1;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -12854645;

	t18 = ((x73|(x74<x75))|x76);

	if (t18 != -22) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	uint8_t x78 = 8U;
	int64_t x79 = INT64_MIN;
	int64_t x80 = -1LL;

	t19 = ((x77|(x78<x79))|x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	uint16_t x83 = UINT16_MAX;
	static volatile int8_t x84 = INT8_MIN;

	t20 = ((x81|(x82<x83))|x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int64_t x87 = -11392626977299LL;
	int32_t x88 = -1;
	volatile int32_t t21 = 1199;

	t21 = ((x85|(x86<x87))|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = INT32_MIN;
	int64_t x91 = INT64_MIN;
	static int32_t x92 = INT32_MIN;
	int32_t t22 = INT32_MIN;

	t22 = ((x89|(x90<x91))|x92);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = 3U;
	int64_t x95 = -54LL;
	int32_t x96 = -1;
	volatile int32_t t23 = 2;

	t23 = ((x93|(x94<x95))|x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -7;
	int64_t x99 = INT64_MAX;
	int32_t t24 = 1049191672;

	t24 = ((x97|(x98<x99))|x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = -1;
	volatile int8_t x103 = INT8_MIN;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = -297278;

	t25 = ((x101|(x102<x103))|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = 354;
	int64_t x106 = 719941LL;
	int64_t t26 = -1338282917065000941LL;

	t26 = ((x105|(x106<x107))|x108);

	if (t26 != 953208285605355LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	static int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MIN;
	static volatile int64_t x112 = INT64_MAX;
	int64_t t27 = -11418LL;

	t27 = ((x109|(x110<x111))|x112);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = -1LL;
	int16_t x115 = -1;
	int64_t x116 = -56LL;
	int64_t t28 = 171253LL;

	t28 = ((x113|(x114<x115))|x116);

	if (t28 != -56LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MIN;
	int32_t x118 = INT32_MIN;
	int64_t x119 = INT64_MIN;
	static volatile uint16_t x120 = 171U;
	int64_t t29 = 108LL;

	t29 = ((x117|(x118<x119))|x120);

	if (t29 != -9223372036854775637LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	volatile int16_t x122 = 0;
	int64_t x123 = 0LL;
	int64_t x124 = INT64_MAX;
	volatile int64_t t30 = -555501182561LL;

	t30 = ((x121|(x122<x123))|x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = UINT16_MAX;
	volatile int32_t x126 = -1;
	uint32_t x127 = 580066748U;
	static volatile int32_t t31 = -266;

	t31 = ((x125|(x126<x127))|x128);

	if (t31 != -2147418113) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x130 = 630U;
	volatile int8_t x131 = -3;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -5988;

	t32 = ((x129|(x130<x131))|x132);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 1;
	int8_t x134 = 28;
	int32_t x135 = INT32_MAX;
	volatile uint8_t x136 = 5U;
	static int32_t t33 = 6539;

	t33 = ((x133|(x134<x135))|x136);

	if (t33 != 5) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x138 = -2568166;
	volatile int64_t x139 = 384882LL;
	uint64_t x140 = 3LLU;
	uint64_t t34 = UINT64_MAX;

	t34 = ((x137|(x138<x139))|x140);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	volatile int64_t x142 = -1LL;
	int16_t x143 = 2781;
	int16_t x144 = -1;
	static volatile int32_t t35 = 24;

	t35 = ((x141|(x142<x143))|x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	uint8_t x146 = UINT8_MAX;
	volatile int64_t x147 = INT64_MIN;
	int32_t x148 = -404;

	t36 = ((x145|(x146<x147))|x148);

	if (t36 != -404LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MIN;
	volatile int32_t x150 = -259578;
	uint32_t x152 = 52930U;
	uint32_t t37 = 2U;

	t37 = ((x149|(x150<x151))|x152);

	if (t37 != 4294967235U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int32_t x154 = -1;
	static int32_t x156 = INT32_MIN;
	static volatile int32_t t38 = -12189248;

	t38 = ((x153|(x154<x155))|x156);

	if (t38 != -2147418113) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -17830;
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = INT64_MAX;
	volatile uint8_t x160 = 60U;
	int32_t t39 = -2055;

	t39 = ((x157|(x158<x159))|x160);

	if (t39 != -17793) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 1598295LLU;
	int32_t x162 = INT32_MIN;
	int64_t x163 = 1LL;
	int64_t x164 = 12375087577681951LL;
	static uint64_t t40 = 12LLU;

	t40 = ((x161|(x162<x163))|x164);

	if (t40 != 12375087579263839LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x166 = -25;
	static int32_t x167 = INT32_MAX;
	int8_t x168 = INT8_MIN;

	t41 = ((x165|(x166<x167))|x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 1038146796LLU;
	volatile uint64_t t42 = 670757002LLU;

	t42 = ((x169|(x170<x171))|x172);

	if (t42 != 1073151215LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MIN;
	static volatile uint16_t x175 = UINT16_MAX;
	int32_t x176 = INT32_MIN;
	int32_t t43 = 6068;

	t43 = ((x173|(x174<x175))|x176);

	if (t43 != -2147483393) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -457438LL;
	volatile int8_t x178 = -33;
	volatile int32_t x179 = INT32_MIN;
	int16_t x180 = -114;
	int64_t t44 = -139961LL;

	t44 = ((x177|(x178<x179))|x180);

	if (t44 != -82LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = 35;
	int16_t x183 = -1;
	int32_t x184 = INT32_MIN;

	t45 = ((x181|(x182<x183))|x184);

	if (t45 != -2147450881) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int32_t x186 = INT32_MIN;
	static int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;
	static int32_t t46 = INT32_MIN;

	t46 = ((x185|(x186<x187))|x188);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 467882210U;
	int32_t x190 = 1053101785;
	static int64_t x191 = -1LL;
	int32_t x192 = -1;
	uint32_t t47 = UINT32_MAX;

	t47 = ((x189|(x190<x191))|x192);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MIN;
	uint32_t x195 = 476U;
	int64_t x196 = INT64_MAX;
	int64_t t48 = 179441175869744104LL;

	t48 = ((x193|(x194<x195))|x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1435832980770LL;
	volatile int64_t x198 = 3346LL;
	int64_t x199 = INT64_MIN;
	volatile int32_t x200 = -1;
	volatile int64_t t49 = 5715986581513LL;

	t49 = ((x197|(x198<x199))|x200);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	static int8_t x202 = 1;
	volatile uint32_t x204 = 145U;
	int64_t t50 = 518826316LL;

	t50 = ((x201|(x202<x203))|x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 295;

	t51 = ((x205|(x206<x207))|x208);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = 45584LLU;
	static int64_t x210 = INT64_MIN;
	static uint32_t x211 = UINT32_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = ((x209|(x210<x211))|x212);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	volatile int16_t x214 = -1;
	static int64_t x216 = -264933094610481LL;
	int64_t t53 = 1128LL;

	t53 = ((x213|(x214<x215))|x216);

	if (t53 != -22065LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 3122U;
	volatile int64_t x219 = 53843LL;
	int8_t x220 = -1;
	volatile int32_t t54 = -77;

	t54 = ((x217|(x218<x219))|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x222 = INT16_MAX;
	volatile int32_t x224 = -1;
	volatile int32_t t55 = -366;

	t55 = ((x221|(x222<x223))|x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	uint32_t x226 = 54U;
	int64_t x227 = INT64_MAX;
	int8_t x228 = INT8_MIN;
	int64_t t56 = -228014461784LL;

	t56 = ((x225|(x226<x227))|x228);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	volatile int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MIN;

	t57 = ((x229|(x230<x231))|x232);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x236 = INT8_MIN;

	t58 = ((x233|(x234<x235))|x236);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	volatile uint16_t x239 = 7U;
	volatile int32_t x240 = INT32_MAX;
	int32_t t59 = 35115;

	t59 = ((x237|(x238<x239))|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	int16_t x242 = INT16_MAX;
	volatile uint16_t x243 = 101U;
	volatile int32_t x244 = INT32_MIN;

	t60 = ((x241|(x242<x243))|x244);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 2482881852153820LLU;
	uint16_t x246 = UINT16_MAX;
	volatile int16_t x247 = INT16_MIN;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = ((x245|(x246<x247))|x248);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 6472310LL;
	uint16_t x250 = 1U;
	int8_t x251 = -7;
	int16_t x252 = -1;
	int64_t t62 = -34822LL;

	t62 = ((x249|(x250<x251))|x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 3U;
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t63 = -120;

	t63 = ((x253|(x254<x255))|x256);

	if (t63 != -2147483645) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	int8_t x258 = 1;
	int32_t x259 = -839235;
	uint8_t x260 = 78U;

	t64 = ((x257|(x258<x259))|x260);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint32_t x262 = 1014554U;
	volatile int64_t x263 = 4606174059854425LL;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t65 = 318;

	t65 = ((x261|(x262<x263))|x264);

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -38093;
	volatile uint32_t x266 = 3293467U;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MAX;
	int32_t t66 = 0;

	t66 = ((x265|(x266<x267))|x268);

	if (t66 != -32769) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	int8_t x271 = -1;
	uint64_t x272 = 35005469435LLU;
	uint64_t t67 = 63105202937LLU;

	t67 = ((x269|(x270<x271))|x272);

	if (t67 != 18446744072207799035LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 2303373834080245196LL;
	static int64_t x274 = INT64_MAX;
	uint8_t x275 = 2U;
	int64_t t68 = -7892438560518LL;

	t68 = ((x273|(x274<x275))|x276);

	if (t68 != -582462004LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;

	t69 = ((x277|(x278<x279))|x280);

	if (t69 != -577LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	uint8_t x282 = UINT8_MAX;
	static uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MIN;

	t70 = ((x281|(x282<x283))|x284);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	uint16_t x286 = UINT16_MAX;
	uint64_t x287 = 147217159LLU;
	uint16_t x288 = 1U;
	static volatile int64_t t71 = -1158702204564990LL;

	t71 = ((x285|(x286<x287))|x288);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	uint64_t x290 = 55847003812531673LLU;
	volatile int16_t x291 = 1490;
	int8_t x292 = INT8_MIN;
	int64_t t72 = -3415178933LL;

	t72 = ((x289|(x290<x291))|x292);

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = 71U;
	int16_t x294 = -1;
	int32_t x295 = -650998071;

	t73 = ((x293|(x294<x295))|x296);

	if (t73 != 231U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MAX;
	static int8_t x299 = INT8_MIN;
	volatile int16_t x300 = 55;
	volatile int32_t t74 = 1;

	t74 = ((x297|(x298<x299))|x300);

	if (t74 != -32713) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = 1212;
	uint16_t x302 = UINT16_MAX;
	static volatile uint64_t t75 = 1490650847698094LLU;

	t75 = ((x301|(x302<x303))|x304);

	if (t75 != 2396121093448956LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	static int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	int8_t x308 = -1;
	volatile int64_t t76 = -999030LL;

	t76 = ((x305|(x306<x307))|x308);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile uint64_t x312 = UINT64_MAX;
	static uint64_t t77 = UINT64_MAX;

	t77 = ((x309|(x310<x311))|x312);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x314 = -1;
	static int16_t x315 = -1;
	static volatile int64_t t78 = 265331086693LL;

	t78 = ((x313|(x314<x315))|x316);

	if (t78 != -715845299LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	static int32_t x318 = INT32_MIN;
	int8_t x319 = 0;
	int32_t x320 = -1;
	static int32_t t79 = -1;

	t79 = ((x317|(x318<x319))|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	static int16_t x322 = -1;
	volatile uint16_t x323 = 191U;
	int16_t x324 = 547;
	int64_t t80 = -2269945661LL;

	t80 = ((x321|(x322<x323))|x324);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = 24809686560156789LL;
	volatile int8_t x326 = INT8_MIN;
	static int16_t x327 = 6;
	volatile int16_t x328 = INT16_MIN;
	volatile int64_t t81 = 0LL;

	t81 = ((x325|(x326<x327))|x328);

	if (t81 != -21387LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 123152LLU;
	static volatile uint64_t x331 = 188461589666LLU;
	int16_t x332 = -1;
	static volatile int32_t t82 = -58301757;

	t82 = ((x329|(x330<x331))|x332);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MAX;
	uint16_t x336 = 24546U;
	int64_t t83 = INT64_MAX;

	t83 = ((x333|(x334<x335))|x336);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x339 = -1;
	int16_t x340 = INT16_MAX;
	int32_t t84 = -17459923;

	t84 = ((x337|(x338<x339))|x340);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x342 = UINT32_MAX;
	static uint32_t x343 = 334816U;
	int64_t x344 = INT64_MIN;
	volatile int64_t t85 = 84469934156383LL;

	t85 = ((x341|(x342<x343))|x344);

	if (t85 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	uint8_t x346 = 7U;
	uint16_t x348 = 81U;
	volatile int64_t t86 = INT64_MAX;

	t86 = ((x345|(x346<x347))|x348);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = -239;
	static volatile int16_t x351 = -1;
	int32_t x352 = INT32_MAX;

	t87 = ((x349|(x350<x351))|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MAX;
	static volatile int64_t x354 = INT64_MIN;
	volatile int16_t x356 = -1;
	volatile int64_t t88 = 31151705752650177LL;

	t88 = ((x353|(x354<x355))|x356);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MAX;
	static volatile int8_t x359 = INT8_MIN;
	volatile int64_t x360 = -2318751178748866833LL;
	volatile int64_t t89 = 162972LL;

	t89 = ((x357|(x358<x359))|x360);

	if (t89 != -12561LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x362 = -1;
	int16_t x363 = -19;
	uint32_t x364 = UINT32_MAX;

	t90 = ((x361|(x362<x363))|x364);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = 1934408;
	static int64_t x366 = INT64_MIN;
	int32_t x368 = -1;
	static int32_t t91 = -197190;

	t91 = ((x365|(x366<x367))|x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x371 = 3U;
	volatile int32_t x372 = 91395;

	t92 = ((x369|(x370<x371))|x372);

	if (t92 != 28178411LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = UINT32_MAX;
	static int8_t x374 = -1;
	volatile int64_t x375 = 0LL;
	volatile int8_t x376 = -2;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = ((x373|(x374<x375))|x376);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	int16_t x378 = INT16_MIN;
	uint64_t x379 = 23002360386643664LLU;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 188578821;

	t94 = ((x377|(x378<x379))|x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MAX;
	int64_t x384 = INT64_MIN;
	int64_t t95 = 23519LL;

	t95 = ((x381|(x382<x383))|x384);

	if (t95 != -32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = INT32_MIN;
	volatile int32_t x386 = INT32_MAX;
	volatile uint8_t x387 = UINT8_MAX;

	t96 = ((x385|(x386<x387))|x388);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 1U;
	int8_t x390 = -1;
	int16_t x391 = 9001;
	int64_t x392 = -1LL;

	t97 = ((x389|(x390<x391))|x392);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x394 = -23;
	volatile int32_t x395 = 331905;
	uint16_t x396 = 18U;
	int32_t t98 = 0;

	t98 = ((x393|(x394<x395))|x396);

	if (t98 != -32749) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MAX;
	uint16_t x399 = UINT16_MAX;
	volatile int16_t x400 = 1914;
	static int32_t t99 = 6418;

	t99 = ((x397|(x398<x399))|x400);

	if (t99 != -2147481734) { NG(); } else { ; }
	
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

