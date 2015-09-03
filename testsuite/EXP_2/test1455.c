#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = 1U;
static volatile int32_t x13 = INT32_MIN;
volatile int8_t x16 = INT8_MIN;
static int32_t t3 = 12650;
int64_t x17 = 368LL;
volatile int32_t x20 = -173941;
int16_t x36 = INT16_MAX;
volatile int32_t t9 = 106;
static int32_t x46 = INT32_MIN;
static int64_t x48 = INT64_MIN;
int64_t x52 = -3344083074541LL;
volatile int64_t t12 = 5736152645LL;
static volatile int32_t t13 = -73910;
static volatile int32_t x58 = -1;
int32_t t14 = INT32_MIN;
volatile int32_t x68 = -19031;
int32_t x69 = INT32_MIN;
static int16_t x71 = INT16_MAX;
uint16_t x73 = 53U;
volatile int64_t x74 = INT64_MIN;
volatile int16_t x77 = INT16_MIN;
int64_t x85 = -1LL;
volatile int16_t x87 = INT16_MAX;
volatile int64_t t21 = INT64_MIN;
static volatile int64_t x89 = INT64_MIN;
int64_t x96 = -1LL;
static uint16_t x99 = UINT16_MAX;
int32_t x110 = -1;
int32_t x115 = -1;
volatile int64_t x117 = INT64_MIN;
volatile int64_t x119 = -1LL;
uint64_t x121 = UINT64_MAX;
int8_t x131 = -7;
int8_t x132 = -1;
static int32_t t32 = 32;
int64_t x142 = INT64_MIN;
volatile uint8_t x144 = 15U;
int16_t x147 = INT16_MAX;
uint8_t x155 = 0U;
static int32_t x157 = INT32_MIN;
volatile int32_t t39 = 273064080;
int16_t x163 = INT16_MIN;
volatile int32_t t40 = -162467991;
int64_t x166 = INT64_MIN;
int32_t t41 = 245;
static volatile int64_t t42 = -61702394346473LL;
static int64_t x180 = -5581LL;
volatile int32_t x183 = INT32_MIN;
int8_t x190 = INT8_MIN;
uint64_t x191 = 60417750LLU;
int32_t x194 = INT32_MIN;
volatile uint64_t t49 = UINT64_MAX;
static int16_t x201 = INT16_MAX;
static int32_t x204 = 7328325;
int16_t x207 = 5461;
static uint32_t x209 = 909680553U;
int64_t x215 = INT64_MIN;
static volatile int32_t t53 = -116441247;
uint8_t x217 = UINT8_MAX;
volatile int32_t t54 = INT32_MAX;
uint32_t x221 = 56936884U;
uint32_t x223 = 129057062U;
int64_t x229 = -1LL;
int64_t x230 = INT64_MAX;
volatile int64_t t57 = INT64_MIN;
static int8_t x233 = -57;
volatile uint32_t x235 = UINT32_MAX;
volatile int32_t t58 = -2;
static int32_t x249 = INT32_MAX;
uint16_t x251 = UINT16_MAX;
static int16_t x252 = -3821;
int32_t x253 = -1;
int32_t x257 = 10;
uint8_t x266 = 0U;
uint64_t x269 = 1631863LLU;
int16_t x270 = 9233;
static volatile int32_t t68 = -1;
volatile int64_t t69 = -81131891LL;
int16_t x285 = INT16_MAX;
int16_t x286 = -1;
uint16_t x291 = 31021U;
volatile int16_t x292 = INT16_MAX;
volatile uint64_t x304 = 171668999917LLU;
volatile uint64_t x307 = 62720022LLU;
int64_t x314 = INT64_MIN;
int64_t x316 = 0LL;
int64_t x318 = INT64_MAX;
volatile int32_t x320 = INT32_MIN;
uint8_t x321 = 5U;
volatile int64_t x324 = INT64_MIN;
volatile uint64_t x326 = 459862970LLU;
static int64_t x338 = INT64_MIN;
int16_t x341 = 0;
static uint8_t x346 = UINT8_MAX;
uint8_t x365 = 32U;
volatile int32_t x368 = INT32_MIN;
volatile int8_t x369 = INT8_MAX;
static int32_t x373 = -1;
static uint32_t x380 = UINT32_MAX;
uint16_t x384 = 7U;
int8_t x388 = INT8_MAX;
int16_t x389 = INT16_MIN;
int16_t x391 = INT16_MIN;
int32_t x400 = INT32_MIN;
int32_t t99 = INT32_MIN;


void f0(void) {
	uint64_t x1 = 137046011917935143LLU;
	int64_t x2 = -239LL;
	int32_t x3 = INT32_MIN;
	int64_t x4 = 336771199LL;
	int64_t t0 = 30304LL;

	t0 = ((x1==(x2<x3))|x4);

	if (t0 != 336771199LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 0LL;
	int64_t x6 = -7619484363340528LL;
	uint32_t x7 = 356014898U;
	uint8_t x8 = 0U;
	volatile int32_t t1 = -49913;

	t1 = ((x5==(x6<x7))|x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int64_t x11 = INT64_MIN;
	int64_t x12 = -1LL;
	volatile int64_t t2 = 2108119424LL;

	t2 = ((x9==(x10<x11))|x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = INT16_MIN;

	t3 = ((x13==(x14<x15))|x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 83410318;
	int8_t x19 = INT8_MAX;
	volatile int32_t t4 = 925;

	t4 = ((x17==(x18<x19))|x20);

	if (t4 != -173941) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MAX;
	int32_t t5 = INT32_MAX;

	t5 = ((x21==(x22<x23))|x24);

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 90633268U;
	int16_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	uint8_t x28 = 1U;
	static volatile int32_t t6 = -1707;

	t6 = ((x25==(x26<x27))|x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 1;
	volatile uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MAX;
	static int16_t x32 = 248;
	int32_t t7 = -8483;

	t7 = ((x29==(x30<x31))|x32);

	if (t7 != 249) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	int32_t x34 = INT32_MAX;
	uint8_t x35 = UINT8_MAX;
	volatile int32_t t8 = -2276800;

	t8 = ((x33==(x34<x35))|x36);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	uint16_t x38 = UINT16_MAX;
	int8_t x39 = 0;
	int16_t x40 = -22;

	t9 = ((x37==(x38<x39))|x40);

	if (t9 != -22) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 199924LLU;
	int32_t x42 = -113731718;
	static int64_t x43 = 3066531337607817LL;
	int16_t x44 = -15019;
	volatile int32_t t10 = 4962191;

	t10 = ((x41==(x42<x43))|x44);

	if (t10 != -15019) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -2;
	uint32_t x47 = 671469U;
	int64_t t11 = INT64_MIN;

	t11 = ((x45==(x46<x47))|x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint64_t x50 = UINT64_MAX;
	volatile int32_t x51 = -1;

	t12 = ((x49==(x50<x51))|x52);

	if (t12 != -3344083074541LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static int16_t x54 = -1;
	volatile int32_t x55 = 6793;
	int8_t x56 = 7;

	t13 = ((x53==(x54<x55))|x56);

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x59 = -1LL;
	int32_t x60 = INT32_MIN;

	t14 = ((x57==(x58<x59))|x60);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -134463145345LL;
	volatile uint8_t x62 = 123U;
	int64_t x63 = INT64_MIN;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -643;

	t15 = ((x61==(x62<x63))|x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 16518816760965LLU;
	uint32_t x66 = 42U;
	volatile int64_t x67 = 1141960350689LL;
	static volatile int32_t t16 = -2969;

	t16 = ((x65==(x66<x67))|x68);

	if (t16 != -19031) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x70 = UINT16_MAX;
	int64_t x72 = -1LL;
	static volatile int64_t t17 = -3LL;

	t17 = ((x69==(x70<x71))|x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x75 = UINT64_MAX;
	static int32_t x76 = -1;
	volatile int32_t t18 = -30;

	t18 = ((x73==(x74<x75))|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = 7;
	int8_t x79 = -1;
	int8_t x80 = INT8_MIN;
	int32_t t19 = 13;

	t19 = ((x77==(x78<x79))|x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MIN;
	static volatile uint16_t x82 = 2U;
	uint16_t x83 = 788U;
	uint16_t x84 = 7U;
	int32_t t20 = 870147;

	t20 = ((x81==(x82<x83))|x84);

	if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = UINT64_MAX;
	volatile int64_t x88 = INT64_MIN;

	t21 = ((x85==(x86<x87))|x88);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 1457LLU;
	static int32_t x91 = 7110391;
	volatile uint8_t x92 = 0U;
	static volatile int32_t t22 = -617123237;

	t22 = ((x89==(x90<x91))|x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -1;
	uint16_t x94 = UINT16_MAX;
	static uint8_t x95 = 41U;
	static int64_t t23 = -396105609876637781LL;

	t23 = ((x93==(x94<x95))|x96);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	static uint8_t x98 = 0U;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 1;

	t24 = ((x97==(x98<x99))|x100);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 22U;
	int16_t x102 = INT16_MIN;
	volatile uint64_t x103 = 9912817843978LLU;
	int64_t x104 = -1LL;
	volatile int64_t t25 = -549233865170669114LL;

	t25 = ((x101==(x102<x103))|x104);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int32_t x106 = 651284138;
	volatile uint8_t x107 = UINT8_MAX;
	int16_t x108 = INT16_MAX;
	volatile int32_t t26 = 3;

	t26 = ((x105==(x106<x107))|x108);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int8_t x111 = -4;
	int16_t x112 = 3;
	static volatile int32_t t27 = -26342732;

	t27 = ((x109==(x110<x111))|x112);

	if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 96U;
	uint32_t x114 = UINT32_MAX;
	static uint64_t x116 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x113==(x114<x115))|x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x118 = -1;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 0;

	t29 = ((x117==(x118<x119))|x120);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 59U;
	uint64_t x123 = 18LLU;
	uint64_t x124 = 48009127265LLU;
	static uint64_t t30 = 420LLU;

	t30 = ((x121==(x122<x123))|x124);

	if (t30 != 48009127265LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MAX;
	static int8_t x127 = INT8_MAX;
	static int32_t x128 = 388639517;
	static volatile int32_t t31 = -24085;

	t31 = ((x125==(x126<x127))|x128);

	if (t31 != 388639517) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	uint8_t x130 = 1U;

	t32 = ((x129==(x130<x131))|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	int64_t x134 = -1LL;
	int32_t x135 = -1;
	int8_t x136 = INT8_MAX;
	volatile int32_t t33 = -10233;

	t33 = ((x133==(x134<x135))|x136);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 1242720516U;
	int32_t x138 = -39971;
	uint16_t x139 = UINT16_MAX;
	static int32_t x140 = INT32_MAX;
	int32_t t34 = INT32_MAX;

	t34 = ((x137==(x138<x139))|x140);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 679938638800717566LL;
	int32_t x143 = 14;
	int32_t t35 = 7326800;

	t35 = ((x141==(x142<x143))|x144);

	if (t35 != 15) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -28;
	static int16_t x146 = INT16_MAX;
	static int16_t x148 = 4082;
	volatile int32_t t36 = -2677072;

	t36 = ((x145==(x146<x147))|x148);

	if (t36 != 4082) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = UINT8_MAX;
	uint8_t x150 = 12U;
	int32_t x151 = INT32_MIN;
	volatile int8_t x152 = INT8_MIN;
	int32_t t37 = 1;

	t37 = ((x149==(x150<x151))|x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int8_t x154 = 0;
	static int64_t x156 = 1LL;
	volatile int64_t t38 = -342LL;

	t38 = ((x153==(x154<x155))|x156);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	static volatile int16_t x159 = INT16_MIN;
	int8_t x160 = -34;

	t39 = ((x157==(x158<x159))|x160);

	if (t39 != -34) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int8_t x162 = INT8_MIN;
	uint8_t x164 = 28U;

	t40 = ((x161==(x162<x163))|x164);

	if (t40 != 28) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	uint32_t x167 = 18339374U;
	int32_t x168 = -11118;

	t41 = ((x165==(x166<x167))|x168);

	if (t41 != -11118) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = -5;
	int16_t x170 = INT16_MAX;
	int64_t x171 = -304454890921754604LL;
	int64_t x172 = -1LL;

	t42 = ((x169==(x170<x171))|x172);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	uint8_t x174 = 4U;
	volatile int16_t x175 = INT16_MIN;
	uint16_t x176 = 2U;
	int32_t t43 = -28;

	t43 = ((x173==(x174<x175))|x176);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 2LLU;
	int8_t x178 = 3;
	uint32_t x179 = 41292591U;
	static int64_t t44 = -5036427LL;

	t44 = ((x177==(x178<x179))|x180);

	if (t44 != -5581LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 3227LL;
	volatile int16_t x182 = INT16_MIN;
	int16_t x184 = 0;
	volatile int32_t t45 = -3;

	t45 = ((x181==(x182<x183))|x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	uint32_t x186 = 338590U;
	static uint64_t x187 = 90332941934570LLU;
	int8_t x188 = 59;
	int32_t t46 = -1;

	t46 = ((x185==(x186<x187))|x188);

	if (t46 != 59) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = -1;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t47 = 12518;

	t47 = ((x189==(x190<x191))|x192);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x195 = 32262040348LL;
	int32_t x196 = -1;
	volatile int32_t t48 = -46636;

	t48 = ((x193==(x194<x195))|x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static uint32_t x198 = 881U;
	int16_t x199 = 4;
	static uint64_t x200 = UINT64_MAX;

	t49 = ((x197==(x198<x199))|x200);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = 8158182;
	uint16_t x203 = UINT16_MAX;
	static volatile int32_t t50 = -216;

	t50 = ((x201==(x202<x203))|x204);

	if (t50 != 7328325) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = 0U;
	int16_t x206 = INT16_MIN;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = ((x205==(x206<x207))|x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MIN;
	int16_t x211 = 1;
	uint64_t x212 = 469473LLU;
	uint64_t t52 = 192224558550LLU;

	t52 = ((x209==(x210<x211))|x212);

	if (t52 != 469473LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int64_t x214 = INT64_MIN;
	int8_t x216 = INT8_MIN;

	t53 = ((x213==(x214<x215))|x216);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x218 = INT32_MIN;
	volatile uint8_t x219 = 0U;
	int32_t x220 = INT32_MAX;

	t54 = ((x217==(x218<x219))|x220);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x222 = -36281302LL;
	volatile int64_t x224 = INT64_MAX;
	int64_t t55 = INT64_MAX;

	t55 = ((x221==(x222<x223))|x224);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x225 = 8U;
	uint32_t x226 = 9166U;
	uint32_t x227 = UINT32_MAX;
	uint64_t x228 = 0LLU;
	uint64_t t56 = 117LLU;

	t56 = ((x225==(x226<x227))|x228);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x231 = 50;
	int64_t x232 = INT64_MIN;

	t57 = ((x229==(x230<x231))|x232);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = 1020336;
	int16_t x236 = INT16_MAX;

	t58 = ((x233==(x234<x235))|x236);

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 1LL;
	static uint8_t x238 = UINT8_MAX;
	uint64_t x239 = 55739LLU;
	uint8_t x240 = 25U;
	int32_t t59 = 0;

	t59 = ((x237==(x238<x239))|x240);

	if (t59 != 25) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 205U;
	int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MAX;
	uint8_t x244 = 15U;
	int32_t t60 = 38;

	t60 = ((x241==(x242<x243))|x244);

	if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	int16_t x246 = -3580;
	uint64_t x247 = UINT64_MAX;
	uint32_t x248 = 9993U;
	volatile uint32_t t61 = 318721359U;

	t61 = ((x245==(x246<x247))|x248);

	if (t61 != 9993U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = INT32_MIN;
	static volatile int32_t t62 = 3;

	t62 = ((x249==(x250<x251))|x252);

	if (t62 != -3821) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = UINT16_MAX;
	static volatile int64_t x255 = -1LL;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = 109;

	t63 = ((x253==(x254<x255))|x256);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x258 = -1;
	static int64_t x259 = INT64_MIN;
	int32_t x260 = 1735434;
	static volatile int32_t t64 = -26348706;

	t64 = ((x257==(x258<x259))|x260);

	if (t64 != 1735434) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -1;
	static volatile int16_t x262 = 0;
	uint32_t x263 = 250U;
	volatile int8_t x264 = INT8_MAX;
	volatile int32_t t65 = 5;

	t65 = ((x261==(x262<x263))|x264);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 1193;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MAX;
	int32_t t66 = 1863851;

	t66 = ((x265==(x266<x267))|x268);

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x271 = INT64_MIN;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 29;

	t67 = ((x269==(x270<x271))|x272);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int32_t x274 = INT32_MIN;
	int32_t x275 = INT32_MIN;
	static uint16_t x276 = UINT16_MAX;

	t68 = ((x273==(x274<x275))|x276);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -2136462994435341LL;
	static int32_t x278 = -20;
	uint8_t x279 = 5U;
	int64_t x280 = 528764LL;

	t69 = ((x277==(x278<x279))|x280);

	if (t69 != 528764LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x281 = INT8_MAX;
	static int16_t x282 = 6;
	static volatile int8_t x283 = 1;
	uint64_t x284 = 7225287575772139LLU;
	static volatile uint64_t t70 = 11943299921537LLU;

	t70 = ((x281==(x282<x283))|x284);

	if (t70 != 7225287575772139LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x287 = 108980U;
	static volatile int8_t x288 = 3;
	int32_t t71 = -361810065;

	t71 = ((x285==(x286<x287))|x288);

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	int16_t x290 = -156;
	volatile int32_t t72 = -25195;

	t72 = ((x289==(x290<x291))|x292);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	volatile int16_t x294 = -1;
	static uint32_t x295 = 61U;
	volatile int16_t x296 = -3256;
	volatile int32_t t73 = -191812728;

	t73 = ((x293==(x294<x295))|x296);

	if (t73 != -3256) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 6U;
	int32_t x298 = -100839971;
	int16_t x299 = 1;
	int32_t x300 = -3141;
	volatile int32_t t74 = -64574;

	t74 = ((x297==(x298<x299))|x300);

	if (t74 != -3141) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int64_t x302 = 167020018905500LL;
	uint8_t x303 = UINT8_MAX;
	volatile uint64_t t75 = 359826LLU;

	t75 = ((x301==(x302<x303))|x304);

	if (t75 != 171668999917LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x305 = UINT16_MAX;
	uint32_t x306 = 3575878U;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = 217881;

	t76 = ((x305==(x306<x307))|x308);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	int64_t x310 = -80038734LL;
	int16_t x311 = INT16_MIN;
	static int64_t x312 = INT64_MIN;
	static volatile int64_t t77 = INT64_MIN;

	t77 = ((x309==(x310<x311))|x312);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = 353;
	uint64_t x315 = 4098975LLU;
	volatile int64_t t78 = -136822103197LL;

	t78 = ((x313==(x314<x315))|x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MAX;
	uint16_t x319 = 1221U;
	static int32_t t79 = INT32_MIN;

	t79 = ((x317==(x318<x319))|x320);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = 1;
	int32_t x323 = -3032;
	volatile int64_t t80 = INT64_MIN;

	t80 = ((x321==(x322<x323))|x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -557630924LL;
	uint32_t x327 = 3692U;
	volatile int64_t x328 = -1LL;
	int64_t t81 = -414LL;

	t81 = ((x325==(x326<x327))|x328);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 3244U;
	volatile uint32_t x330 = 0U;
	static int16_t x331 = INT16_MAX;
	int16_t x332 = -38;
	volatile int32_t t82 = -74638739;

	t82 = ((x329==(x330<x331))|x332);

	if (t82 != -38) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 1U;
	uint32_t x334 = 3U;
	int64_t x335 = INT64_MIN;
	uint8_t x336 = 5U;
	int32_t t83 = 7257446;

	t83 = ((x333==(x334<x335))|x336);

	if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 21622258753773LLU;
	uint16_t x339 = UINT16_MAX;
	static int64_t x340 = 272142532073660022LL;
	int64_t t84 = 68878370204036892LL;

	t84 = ((x337==(x338<x339))|x340);

	if (t84 != 272142532073660022LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x342 = INT64_MAX;
	static uint16_t x343 = 1U;
	static uint32_t x344 = 1481772U;
	uint32_t t85 = 3012U;

	t85 = ((x341==(x342<x343))|x344);

	if (t85 != 1481773U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile int64_t x347 = INT64_MIN;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = -7318577;

	t86 = ((x345==(x346<x347))|x348);

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = UINT8_MAX;
	volatile int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 366978251684LLU;
	volatile uint64_t t87 = 0LLU;

	t87 = ((x349==(x350<x351))|x352);

	if (t87 != 366978251684LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile int32_t x354 = -1;
	int64_t x355 = -9596080877058259LL;
	int8_t x356 = -1;
	int32_t t88 = -8208642;

	t88 = ((x353==(x354<x355))|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 10549U;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = 995133U;
	int64_t x360 = INT64_MAX;
	volatile int64_t t89 = INT64_MAX;

	t89 = ((x357==(x358<x359))|x360);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	static volatile int16_t x362 = INT16_MIN;
	int64_t x363 = 2870653277LL;
	uint32_t x364 = 115773U;
	volatile uint32_t t90 = 7906U;

	t90 = ((x361==(x362<x363))|x364);

	if (t90 != 115773U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = 1962960LL;
	volatile int16_t x367 = -53;
	volatile int32_t t91 = INT32_MIN;

	t91 = ((x365==(x366<x367))|x368);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x370 = 759582911U;
	uint8_t x371 = UINT8_MAX;
	volatile uint64_t x372 = UINT64_MAX;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = ((x369==(x370<x371))|x372);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MAX;
	static int8_t x375 = INT8_MIN;
	uint64_t x376 = 114LLU;
	uint64_t t93 = 0LLU;

	t93 = ((x373==(x374<x375))|x376);

	if (t93 != 114LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	uint32_t x378 = UINT32_MAX;
	uint64_t x379 = 2973452666568410685LLU;
	uint32_t t94 = UINT32_MAX;

	t94 = ((x377==(x378<x379))|x380);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	uint64_t x382 = 2668LLU;
	uint8_t x383 = UINT8_MAX;
	volatile int32_t t95 = -3;

	t95 = ((x381==(x382<x383))|x384);

	if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -7;
	static uint32_t x386 = UINT32_MAX;
	uint8_t x387 = 4U;
	static int32_t t96 = -986;

	t96 = ((x385==(x386<x387))|x388);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x390 = UINT32_MAX;
	static volatile int8_t x392 = INT8_MIN;
	int32_t t97 = 218773;

	t97 = ((x389==(x390<x391))|x392);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -548800;
	static int8_t x394 = -9;
	int8_t x395 = INT8_MIN;
	int32_t x396 = -49805;
	volatile int32_t t98 = -12185;

	t98 = ((x393==(x394<x395))|x396);

	if (t98 != -49805) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x398 = INT64_MIN;
	uint32_t x399 = 312772056U;

	t99 = ((x397==(x398<x399))|x400);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

