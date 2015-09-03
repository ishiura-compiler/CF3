#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MIN;
uint64_t x7 = UINT64_MAX;
int32_t t1 = 1;
static volatile int32_t x9 = -1;
int64_t x16 = INT64_MIN;
static uint16_t x19 = 0U;
int64_t x20 = -1LL;
int64_t x28 = INT64_MIN;
int32_t x30 = -19504;
volatile uint32_t x32 = UINT32_MAX;
uint8_t x34 = 0U;
uint8_t x41 = 21U;
volatile int8_t x44 = INT8_MIN;
uint8_t x49 = 104U;
uint64_t x50 = 119859227163482859LLU;
int16_t x51 = INT16_MIN;
uint64_t x57 = UINT64_MAX;
uint32_t x59 = 31171302U;
static volatile uint32_t t15 = 494U;
int32_t t16 = 10900;
static int64_t x71 = 1LL;
int16_t x76 = 1;
uint32_t x79 = 1U;
int64_t x84 = 4136431212678289738LL;
int64_t t20 = 2742LL;
static uint8_t x85 = 104U;
volatile uint64_t x88 = 825816608485709LLU;
static int64_t x92 = -1LL;
static uint8_t x96 = 1U;
int8_t x98 = 0;
int64_t t24 = -1894349616069383LL;
uint32_t x103 = 101542U;
volatile int32_t t26 = 9429;
int8_t x110 = INT8_MIN;
int32_t x112 = INT32_MAX;
volatile uint8_t x113 = 103U;
static int32_t x120 = -1;
volatile int32_t t29 = 887308347;
int64_t x126 = -1LL;
static volatile int32_t x139 = 225;
int32_t x141 = 4;
volatile uint32_t x152 = 62628U;
uint64_t t37 = 6126272099456172LLU;
volatile int32_t t38 = -2552;
int64_t t39 = 2941545418331212979LL;
int32_t t40 = 79;
int32_t t45 = -1;
int16_t x185 = -1;
int64_t x186 = INT64_MIN;
int16_t x195 = 21;
uint64_t t48 = 5LLU;
uint64_t x201 = 570499025459LLU;
static int8_t x203 = 1;
volatile uint64_t t50 = UINT64_MAX;
volatile int8_t x207 = INT8_MIN;
uint32_t x211 = 163943U;
int32_t x217 = INT32_MIN;
int16_t x220 = -22;
static int16_t x224 = INT16_MIN;
int64_t x225 = 12369776583361LL;
int8_t x226 = -1;
volatile int32_t x227 = -52563102;
int64_t x230 = 4514019LL;
static int64_t x239 = INT64_MIN;
static int16_t x240 = -645;
static volatile int32_t t60 = 1;
uint8_t x253 = 17U;
int64_t x254 = INT64_MIN;
int64_t x255 = 24080544986121LL;
uint8_t x256 = UINT8_MAX;
static int8_t x261 = 0;
static int8_t x266 = INT8_MIN;
int8_t x267 = 3;
volatile int64_t x268 = -1560547870LL;
volatile int64_t t66 = -6473LL;
int64_t x270 = 23185LL;
uint64_t x274 = UINT64_MAX;
int8_t x276 = -3;
int32_t t68 = 775485;
int8_t x277 = INT8_MAX;
uint64_t x283 = 247109633143875LLU;
int64_t x284 = 55392134401136881LL;
volatile int8_t x287 = -1;
static uint64_t t72 = UINT64_MAX;
uint64_t x293 = UINT64_MAX;
static int32_t x302 = -4904;
uint64_t x303 = 186928469941LLU;
volatile int16_t x307 = INT16_MIN;
int64_t x308 = -12987LL;
int64_t t76 = 131940157979LL;
uint32_t x310 = UINT32_MAX;
int32_t x311 = -1;
static volatile int64_t t78 = INT64_MAX;
int32_t x319 = INT32_MIN;
static int32_t x325 = INT32_MIN;
int16_t x328 = INT16_MAX;
uint64_t x330 = UINT64_MAX;
int64_t x334 = INT64_MIN;
volatile uint32_t t83 = 88389U;
static int8_t x339 = INT8_MAX;
uint64_t x343 = 9508963LLU;
volatile int16_t x358 = -1;
volatile uint64_t t90 = UINT64_MAX;
uint32_t x368 = 23U;
static int32_t x369 = INT32_MAX;
int32_t x377 = -1;
int32_t x383 = -126;
int8_t x384 = INT8_MIN;
uint32_t x386 = 3964456U;
int8_t x390 = -1;
int8_t x391 = INT8_MIN;
int32_t x396 = 418;
int16_t x398 = INT16_MIN;
int32_t t99 = -5408;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	volatile int16_t x2 = 4;
	int64_t x3 = INT64_MIN;
	volatile int32_t x4 = -5757;
	volatile int64_t t0 = 28541967356LL;

	t0 = ((x1|(x2==x3))|x4);

	if (t0 != -5757LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint16_t x8 = 42U;

	t1 = ((x5|(x6==x7))|x8);

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 169;
	static int8_t x11 = 26;
	int8_t x12 = -1;
	volatile int32_t t2 = 0;

	t2 = ((x9|(x10==x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	static uint64_t x14 = UINT64_MAX;
	static int8_t x15 = INT8_MIN;
	volatile int64_t t3 = -46478610137567LL;

	t3 = ((x13|(x14==x15))|x16);

	if (t3 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static int64_t x18 = INT64_MIN;
	int64_t t4 = 294139854555489LL;

	t4 = ((x17|(x18==x19))|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int16_t x22 = INT16_MIN;
	static int8_t x23 = -4;
	uint64_t x24 = 11797327781333146LLU;
	volatile uint64_t t5 = 40509400LLU;

	t5 = ((x21|(x22==x23))|x24);

	if (t5 != 11797328121823231LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 6424694U;
	static int32_t x26 = INT32_MIN;
	uint8_t x27 = 14U;
	static volatile int64_t t6 = -170824899016230149LL;

	t6 = ((x25|(x26==x27))|x28);

	if (t6 != -9223372036848351114LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = ((x29|(x30==x31))|x32);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = -1;
	volatile int32_t t8 = 152488;

	t8 = ((x33|(x34==x35))|x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 26144008U;
	static int32_t x38 = -1;
	volatile int8_t x39 = 8;
	static int32_t x40 = -1;
	static volatile uint32_t t9 = UINT32_MAX;

	t9 = ((x37|(x38==x39))|x40);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -1;
	int8_t x43 = -3;
	int32_t t10 = -825;

	t10 = ((x41|(x42==x43))|x44);

	if (t10 != -107) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -369602629;
	int8_t x46 = INT8_MAX;
	int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;
	int64_t t11 = -4698845462LL;

	t11 = ((x45|(x46==x47))|x48);

	if (t11 != -369602629LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x52 = 56499028U;
	volatile uint32_t t12 = 1U;

	t12 = ((x49|(x50==x51))|x52);

	if (t12 != 56499068U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MAX;
	int32_t x54 = 3401433;
	int16_t x55 = -1385;
	static uint8_t x56 = 5U;
	int32_t t13 = 114665;

	t13 = ((x53|(x54==x55))|x56);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = UINT32_MAX;
	volatile int64_t x60 = -1LL;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x57|(x58==x59))|x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 277208205U;
	volatile int32_t x62 = -1;
	static int32_t x63 = INT32_MAX;
	volatile int32_t x64 = INT32_MIN;

	t15 = ((x61|(x62==x63))|x64);

	if (t15 != 2424691853U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	static int32_t x68 = INT32_MAX;

	t16 = ((x65|(x66==x67))|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = UINT32_MAX;
	volatile int64_t x70 = INT64_MIN;
	uint32_t x72 = 697643U;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = ((x69|(x70==x71))|x72);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -6;
	uint16_t x74 = 1U;
	int64_t x75 = 153LL;
	static volatile int32_t t18 = 31019;

	t18 = ((x73|(x74==x75))|x76);

	if (t18 != -5) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = 495;
	volatile int8_t x78 = INT8_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = ((x77|(x78==x79))|x80);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = INT32_MIN;
	static uint32_t x82 = 33991780U;
	static uint64_t x83 = 61955486LLU;

	t20 = ((x81|(x82==x83))|x84);

	if (t20 != -1383655094LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 0U;
	int64_t x87 = -1LL;
	uint64_t t21 = 237697LLU;

	t21 = ((x85|(x86==x87))|x88);

	if (t21 != 825816608485741LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -530554948;
	static int32_t x90 = INT32_MIN;
	int8_t x91 = INT8_MIN;
	volatile int64_t t22 = 1109401093LL;

	t22 = ((x89|(x90==x91))|x92);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 0U;
	int32_t x94 = 3667;
	int32_t x95 = INT32_MIN;
	static int32_t t23 = -5514;

	t23 = ((x93|(x94==x95))|x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -716LL;

	t24 = ((x97|(x98==x99))|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -44LL;
	int32_t x102 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile int64_t t25 = -1LL;

	t25 = ((x101|(x102==x103))|x104);

	if (t25 != -44LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 91;
	volatile int16_t x106 = INT16_MAX;
	static int16_t x107 = INT16_MIN;
	int8_t x108 = 0;

	t26 = ((x105|(x106==x107))|x108);

	if (t26 != 91) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x109 = -1;
	uint16_t x111 = 13U;
	int32_t t27 = -783262342;

	t27 = ((x109|(x110==x111))|x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = INT8_MIN;
	int8_t x115 = 0;
	int64_t x116 = INT64_MAX;
	int64_t t28 = INT64_MAX;

	t28 = ((x113|(x114==x115))|x116);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 2018U;
	volatile int32_t x118 = INT32_MIN;
	volatile int8_t x119 = 0;

	t29 = ((x117|(x118==x119))|x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 78U;
	int8_t x122 = -1;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	int32_t t30 = 4651;

	t30 = ((x121|(x122==x123))|x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 235150926LLU;
	static int32_t x127 = INT32_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x125|(x126==x127))|x128);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	int8_t x130 = 9;
	uint64_t x131 = 596991278192786LLU;
	volatile uint64_t x132 = 18345676434102LLU;
	uint64_t t32 = 412104702485LLU;

	t32 = ((x129|(x130==x131))|x132);

	if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = UINT8_MAX;
	static uint8_t x134 = 2U;
	uint32_t x135 = 2041622U;
	int32_t x136 = -1;
	volatile int32_t t33 = -101896;

	t33 = ((x133|(x134==x135))|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 3U;
	volatile int64_t x138 = -1LL;
	volatile int32_t x140 = 88069318;
	volatile int32_t t34 = 660;

	t34 = ((x137|(x138==x139))|x140);

	if (t34 != 88069319) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x142 = 6101;
	uint16_t x143 = 814U;
	int64_t x144 = 688540883430942LL;
	volatile int64_t t35 = 4882934470LL;

	t35 = ((x141|(x142==x143))|x144);

	if (t35 != 688540883430942LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x145 = 12U;
	volatile uint64_t x146 = 217784752508798LLU;
	static volatile int8_t x147 = INT8_MAX;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 2302;

	t36 = ((x145|(x146==x147))|x148);

	if (t36 != -2147483636) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 27590109LLU;
	int8_t x150 = 31;
	static int16_t x151 = 97;

	t37 = ((x149|(x150==x151))|x152);

	if (t37 != 27590141LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = 30;
	static int8_t x154 = INT8_MIN;
	volatile int16_t x155 = 46;
	int8_t x156 = INT8_MIN;

	t38 = ((x153|(x154==x155))|x156);

	if (t38 != -98) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	uint32_t x158 = UINT32_MAX;
	static int8_t x159 = 3;
	volatile int64_t x160 = INT64_MIN;

	t39 = ((x157|(x158==x159))|x160);

	if (t39 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static uint64_t x162 = UINT64_MAX;
	uint8_t x163 = UINT8_MAX;
	static int16_t x164 = INT16_MAX;

	t40 = ((x161|(x162==x163))|x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 30;
	int16_t x166 = 1;
	volatile int16_t x167 = -1;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = 65947155;

	t41 = ((x165|(x166==x167))|x168);

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	uint32_t x170 = 176299017U;
	int64_t x171 = 49683480LL;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = 655;

	t42 = ((x169|(x170==x171))|x172);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 11874;
	int64_t x174 = INT64_MIN;
	int64_t x175 = 1251285596639710679LL;
	int64_t x176 = INT64_MIN;
	volatile int64_t t43 = -32100461240421937LL;

	t43 = ((x173|(x174==x175))|x176);

	if (t43 != -9223372036854763934LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	uint64_t x178 = UINT64_MAX;
	volatile int32_t x179 = INT32_MAX;
	int8_t x180 = 1;
	volatile int32_t t44 = -15321;

	t44 = ((x177|(x178==x179))|x180);

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	volatile int16_t x182 = 13982;
	uint64_t x183 = 30492499637471966LLU;
	uint16_t x184 = 168U;

	t45 = ((x181|(x182==x183))|x184);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x187 = -1;
	int8_t x188 = -1;
	int32_t t46 = 2476001;

	t46 = ((x185|(x186==x187))|x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 171965322LLU;
	volatile uint16_t x190 = 2U;
	static volatile int16_t x191 = INT16_MAX;
	int16_t x192 = INT16_MIN;
	volatile uint64_t t47 = 4LLU;

	t47 = ((x189|(x190==x191))|x192);

	if (t47 != 18446744073709550474LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = 47764LLU;
	int32_t x194 = INT32_MIN;
	int16_t x196 = INT16_MAX;

	t48 = ((x193|(x194==x195))|x196);

	if (t48 != 65535LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 6418U;
	int8_t x198 = INT8_MIN;
	int32_t x199 = -1;
	int64_t x200 = INT64_MAX;
	volatile int64_t t49 = INT64_MAX;

	t49 = ((x197|(x198==x199))|x200);

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -1;
	int32_t x204 = -1;

	t50 = ((x201|(x202==x203))|x204);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MAX;
	volatile int8_t x206 = -5;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -6470;

	t51 = ((x205|(x206==x207))|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	static int64_t x210 = 76243934040308301LL;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = -3621;

	t52 = ((x209|(x210==x211))|x212);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int64_t x214 = -1LL;
	volatile int64_t x215 = 24029866930003LL;
	int16_t x216 = INT16_MAX;
	static volatile int32_t t53 = -94680;

	t53 = ((x213|(x214==x215))|x216);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x218 = INT8_MAX;
	int64_t x219 = INT64_MIN;
	volatile int32_t t54 = 8824;

	t54 = ((x217|(x218==x219))|x220);

	if (t54 != -22) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 0;
	static volatile int64_t x222 = INT64_MIN;
	int8_t x223 = 0;
	static int32_t t55 = 5298;

	t55 = ((x221|(x222==x223))|x224);

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x228 = INT64_MIN;
	int64_t t56 = 222639643LL;

	t56 = ((x225|(x226==x227))|x228);

	if (t56 != -9223359667078192447LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int8_t x231 = INT8_MAX;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 124378594;

	t57 = ((x229|(x230==x231))|x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	uint64_t x234 = UINT64_MAX;
	static uint16_t x235 = 61U;
	static int8_t x236 = -1;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = ((x233|(x234==x235))|x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MAX;
	int64_t x238 = INT64_MAX;
	volatile int64_t t59 = 33720405593LL;

	t59 = ((x237|(x238==x239))|x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -66;
	int64_t x242 = INT64_MAX;
	volatile int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MIN;

	t60 = ((x241|(x242==x243))|x244);

	if (t60 != -66) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 6904U;
	volatile int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	uint16_t x248 = 14U;
	volatile uint32_t t61 = 175773753U;

	t61 = ((x245|(x246==x247))|x248);

	if (t61 != 6911U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -11;
	int16_t x250 = -1;
	int8_t x251 = INT8_MAX;
	static uint32_t x252 = 3715U;
	uint32_t t62 = 106U;

	t62 = ((x249|(x250==x251))|x252);

	if (t62 != 4294967287U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t t63 = 1671143;

	t63 = ((x253|(x254==x255))|x256);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = -3403;
	static volatile int32_t x259 = -1;
	static volatile int64_t x260 = INT64_MAX;
	volatile int64_t t64 = 535797LL;

	t64 = ((x257|(x258==x259))|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = 791579;
	int16_t x263 = INT16_MIN;
	int16_t x264 = -47;
	int32_t t65 = -77;

	t65 = ((x261|(x262==x263))|x264);

	if (t65 != -47) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MIN;

	t66 = ((x265|(x266==x267))|x268);

	if (t66 != -1560547870LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1043549LL;
	static volatile uint32_t x271 = 52U;
	int8_t x272 = -1;
	int64_t t67 = -75137023214297902LL;

	t67 = ((x269|(x270==x271))|x272);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	volatile uint64_t x275 = 134437457550219LLU;

	t68 = ((x273|(x274==x275))|x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = 12888LLU;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = INT32_MAX;

	t69 = ((x277|(x278==x279))|x280);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = 0;
	volatile int64_t x282 = INT64_MAX;
	volatile int64_t t70 = -1039831LL;

	t70 = ((x281|(x282==x283))|x284);

	if (t70 != 55392134401136881LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	uint32_t x286 = UINT32_MAX;
	int64_t x288 = 17826067224LL;
	volatile int64_t t71 = -15696LL;

	t71 = ((x285|(x286==x287))|x288);

	if (t71 != 17826119679LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	uint64_t x290 = 373812LLU;
	static int8_t x291 = 4;
	static uint64_t x292 = UINT64_MAX;

	t72 = ((x289|(x290==x291))|x292);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x294 = INT64_MIN;
	int8_t x295 = -1;
	volatile uint32_t x296 = UINT32_MAX;
	uint64_t t73 = UINT64_MAX;

	t73 = ((x293|(x294==x295))|x296);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	int64_t x298 = INT64_MAX;
	volatile int64_t x299 = -295LL;
	volatile int64_t x300 = INT64_MIN;
	volatile int64_t t74 = 5283LL;

	t74 = ((x297|(x298==x299))|x300);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 467428580624695515LLU;
	static int64_t x304 = INT64_MAX;
	volatile uint64_t t75 = 13253LLU;

	t75 = ((x301|(x302==x303))|x304);

	if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -431;
	volatile uint16_t x306 = UINT16_MAX;

	t76 = ((x305|(x306==x307))|x308);

	if (t76 != -171LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 2862U;
	int64_t x312 = -1LL;
	int64_t t77 = -4404777199561LL;

	t77 = ((x309|(x310==x311))|x312);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 6857;
	int32_t x314 = -12424666;
	volatile int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MAX;

	t78 = ((x313|(x314==x315))|x316);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	static volatile uint32_t x318 = UINT32_MAX;
	int8_t x320 = INT8_MIN;
	int32_t t79 = -318035;

	t79 = ((x317|(x318==x319))|x320);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 1U;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = -1;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = 4398318028547127839LL;

	t80 = ((x321|(x322==x323))|x324);

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	static int32_t t81 = 5869;

	t81 = ((x325|(x326==x327))|x328);

	if (t81 != -2147450881) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = 352278;
	int32_t x331 = 0;
	volatile uint16_t x332 = 112U;
	static volatile int32_t t82 = 455017048;

	t82 = ((x329|(x330==x331))|x332);

	if (t82 != 352374) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 57717420U;
	int16_t x335 = -1;
	int32_t x336 = INT32_MIN;

	t83 = ((x333|(x334==x335))|x336);

	if (t83 != 2205201068U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int16_t x338 = 3280;
	int64_t x340 = 22823210LL;
	int64_t t84 = -70388560LL;

	t84 = ((x337|(x338==x339))|x340);

	if (t84 != -9223372036831952598LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -1;
	int32_t x342 = 2920382;
	static volatile int16_t x344 = -1;
	int32_t t85 = -21;

	t85 = ((x341|(x342==x343))|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MIN;
	int64_t x347 = 25630204943446LL;
	static int32_t x348 = INT32_MAX;
	volatile int32_t t86 = -1;

	t86 = ((x345|(x346==x347))|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int16_t x350 = INT16_MIN;
	static int8_t x351 = INT8_MIN;
	int8_t x352 = 1;
	int64_t t87 = 614512596738994325LL;

	t87 = ((x349|(x350==x351))|x352);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x353 = 710818197444LL;
	int64_t x354 = 3838009491536204842LL;
	uint32_t x355 = UINT32_MAX;
	int32_t x356 = -162388;
	static volatile int64_t t88 = 882892787150LL;

	t88 = ((x353|(x354==x355))|x356);

	if (t88 != -135188LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 3432648U;
	volatile int64_t x359 = -1LL;
	static uint8_t x360 = 3U;
	uint32_t t89 = 1796721249U;

	t89 = ((x357|(x358==x359))|x360);

	if (t89 != 3432651U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = UINT64_MAX;
	int16_t x362 = INT16_MIN;
	uint32_t x363 = 0U;
	int8_t x364 = -1;

	t90 = ((x361|(x362==x363))|x364);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	static uint8_t x366 = 3U;
	static uint32_t x367 = 37293U;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = ((x365|(x366==x367))|x368);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x370 = -1;
	int16_t x371 = 1;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = INT32_MAX;

	t92 = ((x369|(x370==x371))|x372);

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x373 = 14U;
	static int32_t x374 = INT32_MAX;
	int64_t x375 = INT64_MAX;
	volatile uint16_t x376 = 0U;
	static int32_t t93 = -54;

	t93 = ((x373|(x374==x375))|x376);

	if (t93 != 14) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 481U;
	int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MIN;
	volatile int64_t t94 = 1413144425146011LL;

	t94 = ((x377|(x378==x379))|x380);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 2436842556976LL;
	int16_t x382 = INT16_MIN;
	static volatile int64_t t95 = -4214LL;

	t95 = ((x381|(x382==x383))|x384);

	if (t95 != -80LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MIN;
	int32_t x387 = INT32_MAX;
	uint16_t x388 = 1008U;
	volatile int64_t t96 = 10202970162879120LL;

	t96 = ((x385|(x386==x387))|x388);

	if (t96 != -9223372036854774800LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 0;
	uint64_t x392 = UINT64_MAX;
	static volatile uint64_t t97 = UINT64_MAX;

	t97 = ((x389|(x390==x391))|x392);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = -1;
	int32_t x394 = -2319232;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t t98 = 1994736;

	t98 = ((x393|(x394==x395))|x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = 121U;
	uint32_t x399 = UINT32_MAX;
	static int8_t x400 = 1;

	t99 = ((x397|(x398==x399))|x400);

	if (t99 != 121) { NG(); } else { ; }
	
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

