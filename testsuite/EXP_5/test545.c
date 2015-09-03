#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x11 = 2302;
int64_t x14 = -1LL;
int64_t x15 = INT64_MIN;
int16_t x23 = INT16_MIN;
int64_t t5 = -580165831538LL;
static int64_t x43 = -458132870LL;
int16_t x44 = -1;
int16_t x54 = -991;
int8_t x56 = INT8_MIN;
int64_t x58 = -1LL;
volatile int64_t t11 = 178280549396513565LL;
int32_t t14 = INT32_MIN;
int8_t x77 = -1;
volatile int64_t x83 = INT64_MAX;
static int16_t x93 = INT16_MIN;
int16_t x99 = INT16_MAX;
volatile int32_t t21 = 5;
static int32_t x106 = INT32_MIN;
int64_t x107 = -329305340138318LL;
int64_t x111 = 3812647673LL;
int64_t x116 = INT64_MIN;
static int32_t x118 = INT32_MIN;
static volatile uint64_t x119 = 91872320LLU;
volatile int16_t x120 = INT16_MAX;
static uint64_t t29 = 6377483697LLU;
int16_t x136 = INT16_MIN;
static int32_t x143 = -248723052;
static uint32_t t33 = 889091U;
int16_t x150 = INT16_MIN;
int16_t x151 = INT16_MIN;
static int32_t x154 = 4621;
int8_t x159 = -59;
static uint64_t t36 = 12550619194423LLU;
int16_t x161 = -1;
static volatile int32_t t38 = -16559227;
static int8_t x176 = -1;
static int16_t x180 = INT16_MIN;
static volatile int64_t t41 = INT64_MAX;
volatile uint32_t x186 = 195720U;
uint32_t x188 = 7241112U;
volatile uint64_t x191 = UINT64_MAX;
uint64_t x194 = 2018LLU;
static int16_t x199 = 107;
uint16_t x214 = 2003U;
int64_t x215 = 2731038267025803721LL;
uint64_t x219 = 2001367265487723288LLU;
int8_t x231 = INT8_MIN;
uint16_t x242 = 57U;
uint32_t x250 = 74317U;
int8_t x251 = INT8_MIN;
int16_t x255 = -43;
int64_t x256 = 3LL;
int64_t t56 = -81LL;
int32_t x259 = -514772148;
static uint8_t x260 = 19U;
volatile int8_t x261 = INT8_MIN;
volatile uint32_t t58 = 304890U;
volatile int64_t t59 = -93789574005530LL;
static int64_t x273 = INT64_MIN;
int64_t t63 = -7856765549LL;
uint64_t x296 = 1717820946715655203LLU;
int16_t x298 = INT16_MAX;
int64_t x302 = 31LL;
volatile uint32_t x304 = 61121233U;
int64_t x323 = INT64_MIN;
int8_t x333 = INT8_MIN;
volatile uint8_t x336 = 22U;
int32_t x346 = -11;
int16_t x374 = INT16_MIN;
int64_t x375 = -1LL;
uint8_t x378 = 100U;
int8_t x391 = INT8_MIN;
volatile int8_t x394 = INT8_MAX;
int16_t x396 = INT16_MAX;
static volatile int8_t x408 = 3;
int8_t x411 = -1;
uint64_t x412 = UINT64_MAX;
uint64_t t86 = 28LLU;
static int64_t t87 = 213776643185LL;
static uint64_t x434 = 404342201796955LLU;
int64_t t91 = 5275970LL;
uint8_t x443 = 7U;
uint8_t x449 = 33U;
uint16_t x456 = 7U;
int32_t x463 = INT32_MIN;
int16_t x464 = -457;


void f0(void) {
	uint16_t x1 = 3817U;
	uint32_t x2 = 7843742U;
	volatile int64_t x3 = -5533834592LL;
	volatile int32_t x4 = INT32_MIN;
	static int64_t t0 = 129319904008828LL;

	t0 = (x1|((x2/x3)*x4));

	if (t0 != 3817LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;
	static uint32_t x8 = UINT32_MAX;
	uint64_t t1 = 37501238LLU;

	t1 = (x5|((x6/x7)*x8));

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 5U;
	int32_t x10 = -7881632;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -112;

	t2 = (x9|((x10/x11)*x12));

	if (t2 != 438149) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x16 = 8768;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13|((x14/x15)*x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	int8_t x22 = INT8_MIN;
	uint32_t x24 = 1U;
	static int64_t t4 = -1118395740664LL;

	t4 = (x21|((x22/x23)*x24));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 116U;
	int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;
	volatile uint16_t x32 = UINT16_MAX;

	t5 = (x29|((x30/x31)*x32));

	if (t5 != 116LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = UINT8_MAX;
	static int64_t x38 = 3108975300LL;
	static uint8_t x39 = 61U;
	volatile int64_t x40 = -1LL;
	volatile int64_t t6 = 760000118564007LL;

	t6 = (x37|((x38/x39)*x40));

	if (t6 != -50966785LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 39;
	int32_t x42 = -1;
	int64_t t7 = 1817350LL;

	t7 = (x41|((x42/x43)*x44));

	if (t7 != 39LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	int64_t x46 = -1LL;
	volatile uint16_t x47 = 15581U;
	int32_t x48 = INT32_MIN;
	static int64_t t8 = -1640377LL;

	t8 = (x45|((x46/x47)*x48));

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x50 = UINT64_MAX;
	volatile int64_t x51 = -1LL;
	int64_t x52 = INT64_MAX;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (x49|((x50/x51)*x52));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	static int8_t x55 = INT8_MAX;
	volatile int32_t t10 = 3444;

	t10 = (x53|((x54/x55)*x56));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = UINT32_MAX;
	static int64_t x59 = INT64_MIN;
	int8_t x60 = INT8_MIN;

	t11 = (x57|((x58/x59)*x60));

	if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 1037733128770149538LLU;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = -1;
	uint64_t x64 = 3567351255250LLU;
	volatile uint64_t t12 = 7830500983LLU;

	t12 = (x61|((x62/x63)*x64));

	if (t12 != 18446397658558889714LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	static int32_t x66 = INT32_MIN;
	volatile int64_t x67 = INT64_MIN;
	static uint8_t x68 = 9U;
	volatile int64_t t13 = -457LL;

	t13 = (x65|((x66/x67)*x68));

	if (t13 != 255LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = INT32_MIN;
	int16_t x70 = 113;
	static volatile int16_t x71 = INT16_MIN;
	int16_t x72 = 1;

	t14 = (x69|((x70/x71)*x72));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = 1;
	int32_t x74 = INT32_MIN;
	static int8_t x75 = INT8_MIN;
	uint16_t x76 = 15U;
	static volatile int32_t t15 = -313765624;

	t15 = (x73|((x74/x75)*x76));

	if (t15 != 251658241) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x78 = 1924;
	static volatile int16_t x79 = INT16_MAX;
	int64_t x80 = INT64_MAX;
	int64_t t16 = 6LL;

	t16 = (x77|((x78/x79)*x80));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x81 = 28U;
	static int32_t x82 = INT32_MIN;
	int8_t x84 = -5;
	static int64_t t17 = -29873LL;

	t17 = (x81|((x82/x83)*x84));

	if (t17 != 28LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x85 = UINT32_MAX;
	volatile int64_t x86 = INT64_MAX;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MAX;
	volatile uint64_t t18 = 221919120LLU;

	t18 = (x85|((x86/x87)*x88));

	if (t18 != 4294967295LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MAX;
	uint64_t x91 = 2973LLU;
	uint64_t x92 = 738016122LLU;
	uint64_t t19 = 39494897159704684LLU;

	t19 = (x89|((x90/x91)*x92));

	if (t19 != 18446744073158749098LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x94 = 13U;
	volatile int16_t x95 = INT16_MAX;
	int32_t x96 = -56272;
	volatile int32_t t20 = -49;

	t20 = (x93|((x94/x95)*x96));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = 42;
	int16_t x98 = -1;
	uint8_t x100 = 20U;

	t21 = (x97|((x98/x99)*x100));

	if (t21 != 42) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x101 = UINT16_MAX;
	uint8_t x102 = 0U;
	uint64_t x103 = 1276376702857898LLU;
	volatile int8_t x104 = -1;
	uint64_t t22 = 214739636266528894LLU;

	t22 = (x101|((x102/x103)*x104));

	if (t22 != 65535LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 458U;
	static uint16_t x108 = 626U;
	int64_t t23 = 16335664LL;

	t23 = (x105|((x106/x107)*x108));

	if (t23 != 458LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -1;
	volatile int16_t x110 = -1;
	static volatile int8_t x112 = -1;
	static int64_t t24 = 94LL;

	t24 = (x109|((x110/x111)*x112));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MAX;
	volatile int16_t x114 = INT16_MAX;
	uint64_t x115 = UINT64_MAX;
	volatile uint64_t t25 = 260870521631LLU;

	t25 = (x113|((x114/x115)*x116));

	if (t25 != 2147483647LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = 303LL;
	static uint64_t t26 = 7351698LLU;

	t26 = (x117|((x118/x119)*x120));

	if (t26 != 6579179267386175LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 6970U;
	int64_t x122 = 130310356LL;
	volatile uint8_t x123 = 78U;
	volatile int32_t x124 = INT32_MAX;
	volatile int64_t t27 = -178881077626363794LL;

	t27 = (x121|((x122/x123)*x124));

	if (t27 != 3587682817448763LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x125 = -6349199;
	int32_t x126 = 6;
	volatile uint16_t x127 = UINT16_MAX;
	volatile uint8_t x128 = 0U;
	int32_t t28 = 1336;

	t28 = (x125|((x126/x127)*x128));

	if (t28 != -6349199) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 2U;
	int8_t x130 = INT8_MAX;
	uint64_t x131 = UINT64_MAX;
	int8_t x132 = 0;

	t29 = (x129|((x130/x131)*x132));

	if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MAX;
	uint64_t x135 = UINT64_MAX;
	volatile uint64_t t30 = 267LLU;

	t30 = (x133|((x134/x135)*x136));

	if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = 3865263U;
	int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MAX;
	volatile uint32_t t31 = 767U;

	t31 = (x137|((x138/x139)*x140));

	if (t31 != 3865263U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = 23726169208168235LL;
	int8_t x142 = 9;
	int16_t x144 = -1;
	int64_t t32 = -15873LL;

	t32 = (x141|((x142/x143)*x144));

	if (t32 != 23726169208168235LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = -274609264;
	static uint32_t x146 = 4U;
	volatile uint32_t x147 = UINT32_MAX;
	int8_t x148 = 0;

	t33 = (x145|((x146/x147)*x148));

	if (t33 != 4020358032U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MIN;
	static int64_t x152 = -1LL;
	volatile int64_t t34 = 3LL;

	t34 = (x149|((x150/x151)*x152));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = 0;
	volatile int16_t x155 = -1;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t35 = 10509426;

	t35 = (x153|((x154/x155)*x156));

	if (t35 != 591488) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = 1;
	uint64_t x158 = 2156251389LLU;
	static int32_t x160 = INT32_MAX;

	t36 = (x157|((x158/x159)*x160));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x162 = -1;
	int64_t x163 = -1LL;
	int8_t x164 = INT8_MIN;
	volatile int64_t t37 = -10965737128870069LL;

	t37 = (x161|((x162/x163)*x164));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -234;
	uint8_t x170 = 43U;
	int32_t x171 = -1;
	static int8_t x172 = INT8_MAX;

	t38 = (x169|((x170/x171)*x172));

	if (t38 != -65) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = -53LL;
	static volatile uint8_t x175 = 94U;
	int64_t t39 = 73340038398LL;

	t39 = (x173|((x174/x175)*x176));

	if (t39 != 255LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = UINT32_MAX;
	static int32_t x178 = -34;
	static int64_t x179 = INT64_MAX;
	volatile int64_t t40 = -1LL;

	t40 = (x177|((x178/x179)*x180));

	if (t40 != 4294967295LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x181 = INT64_MAX;
	int16_t x182 = -37;
	uint32_t x183 = 59383U;
	int32_t x184 = -1;

	t41 = (x181|((x182/x183)*x184));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -472;
	uint8_t x187 = UINT8_MAX;
	uint32_t t42 = 641793015U;

	t42 = (x185|((x186/x187)*x188));

	if (t42 != 4294966888U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = 4;
	uint16_t x190 = UINT16_MAX;
	int16_t x192 = INT16_MIN;
	static volatile uint64_t t43 = 964659603420238152LLU;

	t43 = (x189|((x190/x191)*x192));

	if (t43 != 4LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 37U;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = UINT8_MAX;
	uint64_t t44 = 54863810LLU;

	t44 = (x193|((x194/x195)*x196));

	if (t44 != 37LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x197 = UINT16_MAX;
	uint16_t x198 = 17247U;
	static uint16_t x200 = UINT16_MAX;
	int32_t t45 = -1;

	t45 = (x197|((x198/x199)*x200));

	if (t45 != 10551295) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = UINT64_MAX;
	uint32_t x202 = 5124088U;
	int16_t x203 = INT16_MIN;
	volatile int16_t x204 = INT16_MIN;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = (x201|((x202/x203)*x204));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = 0;
	volatile int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MAX;
	uint32_t x208 = 1466961U;
	volatile int64_t t47 = -4479118004567704LL;

	t47 = (x205|((x206/x207)*x208));

	if (t47 != -6300549522441378LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x213 = INT8_MIN;
	int16_t x216 = 22;
	int64_t t48 = 161380556539700LL;

	t48 = (x213|((x214/x215)*x216));

	if (t48 != -128LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = 47;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t49 = 1223LLU;

	t49 = (x217|((x218/x219)*x220));

	if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x221 = 10233LLU;
	volatile int64_t x222 = 158594445753287LL;
	uint8_t x223 = UINT8_MAX;
	volatile int8_t x224 = 20;
	volatile uint64_t t50 = 130915144LLU;

	t50 = (x221|((x222/x223)*x224));

	if (t50 != 12438780067833LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MAX;
	uint64_t x226 = 6867558859472000LLU;
	int32_t x227 = INT32_MIN;
	static int8_t x228 = INT8_MAX;
	static volatile uint64_t t51 = 29842LLU;

	t51 = (x225|((x226/x227)*x228));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = 1223349965549LL;
	uint8_t x230 = 104U;
	int16_t x232 = 4427;
	static volatile int64_t t52 = 83737086170LL;

	t52 = (x229|((x230/x231)*x232));

	if (t52 != 1223349965549LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x233 = INT8_MAX;
	int8_t x234 = 1;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t53 = 13863;

	t53 = (x233|((x234/x235)*x236));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = 257974340418248LLU;
	static volatile int32_t x243 = INT32_MAX;
	uint32_t x244 = UINT32_MAX;
	volatile uint64_t t54 = 3620972819142LLU;

	t54 = (x241|((x242/x243)*x244));

	if (t54 != 257974340418248LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x249 = INT32_MIN;
	int64_t x252 = 0LL;
	static int64_t t55 = -26486380873LL;

	t55 = (x249|((x250/x251)*x252));

	if (t55 != -2147483648LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x253 = 218;
	volatile int64_t x254 = -1LL;

	t56 = (x253|((x254/x255)*x256));

	if (t56 != 218LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MIN;
	volatile int32_t t57 = 55;

	t57 = (x257|((x258/x259)*x260));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x262 = -1692;
	static uint8_t x263 = 93U;
	uint32_t x264 = 59637U;

	t58 = (x261|((x262/x263)*x264));

	if (t58 != 4294967238U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x265 = 17U;
	int64_t x266 = 156246LL;
	static int64_t x267 = INT64_MAX;
	volatile int8_t x268 = INT8_MIN;

	t59 = (x265|((x266/x267)*x268));

	if (t59 != 17LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x269 = 212;
	uint8_t x270 = UINT8_MAX;
	uint64_t x271 = 196227LLU;
	int8_t x272 = INT8_MAX;
	uint64_t t60 = 26338987522262008LLU;

	t60 = (x269|((x270/x271)*x272));

	if (t60 != 212LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x274 = INT32_MIN;
	int32_t x275 = INT32_MIN;
	volatile int32_t x276 = INT32_MIN;
	volatile int64_t t61 = -489999386614134LL;

	t61 = (x273|((x274/x275)*x276));

	if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MIN;
	volatile uint8_t x279 = UINT8_MAX;
	int8_t x280 = 34;
	volatile int64_t t62 = 323150812530LL;

	t62 = (x277|((x278/x279)*x280));

	if (t62 != -4352LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = -1;
	static uint16_t x286 = UINT16_MAX;
	int64_t x287 = 5613020LL;
	int16_t x288 = -1;

	t63 = (x285|((x286/x287)*x288));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = -1;
	uint32_t x290 = 710402U;
	int16_t x291 = -1;
	uint8_t x292 = 93U;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = (x289|((x290/x291)*x292));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = -1;
	uint8_t x294 = 4U;
	static volatile int64_t x295 = INT64_MAX;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x293|((x294/x295)*x296));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MAX;
	int32_t x299 = 126805;
	volatile int32_t x300 = INT32_MIN;
	int32_t t66 = 15006768;

	t66 = (x297|((x298/x299)*x300));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = UINT32_MAX;
	static volatile uint16_t x303 = 112U;
	volatile int64_t t67 = 32873LL;

	t67 = (x301|((x302/x303)*x304));

	if (t67 != 4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x305 = INT8_MIN;
	int64_t x306 = -1LL;
	volatile int64_t x307 = -1LL;
	int64_t x308 = INT64_MIN;
	volatile int64_t t68 = -11LL;

	t68 = (x305|((x306/x307)*x308));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x309 = -2;
	static int32_t x310 = INT32_MIN;
	int64_t x311 = 25908390994776LL;
	volatile uint32_t x312 = UINT32_MAX;
	volatile int64_t t69 = -255082271693LL;

	t69 = (x309|((x310/x311)*x312));

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = INT8_MIN;
	volatile int16_t x322 = 0;
	uint16_t x324 = 3822U;
	volatile int64_t t70 = -912208888982LL;

	t70 = (x321|((x322/x323)*x324));

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x334 = 12LLU;
	int32_t x335 = INT32_MAX;
	uint64_t t71 = 4549LLU;

	t71 = (x333|((x334/x335)*x336));

	if (t71 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x337 = 7810874355LLU;
	int32_t x338 = INT32_MIN;
	uint16_t x339 = 1258U;
	uint32_t x340 = 3U;
	volatile uint64_t t72 = 14899284LLU;

	t72 = (x337|((x338/x339)*x340));

	if (t72 != 8584821747LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x341 = 3811736;
	int8_t x342 = 1;
	uint32_t x343 = 362U;
	volatile uint16_t x344 = 0U;
	volatile uint32_t t73 = 285029U;

	t73 = (x341|((x342/x343)*x344));

	if (t73 != 3811736U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x345 = UINT16_MAX;
	static uint32_t x347 = 17766U;
	int8_t x348 = -12;
	uint32_t t74 = 990087U;

	t74 = (x345|((x346/x347)*x348));

	if (t74 != 4292083711U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	static volatile uint16_t x350 = 183U;
	static uint64_t x351 = UINT64_MAX;
	uint8_t x352 = 14U;
	volatile uint64_t t75 = 5038952357LLU;

	t75 = (x349|((x350/x351)*x352));

	if (t75 != 4294967295LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = -1;
	int64_t x355 = INT64_MAX;
	static uint16_t x356 = UINT16_MAX;
	volatile int64_t t76 = INT64_MIN;

	t76 = (x353|((x354/x355)*x356));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = -1LL;
	int32_t x362 = INT32_MIN;
	static volatile int64_t x363 = INT64_MIN;
	static uint32_t x364 = UINT32_MAX;
	volatile int64_t t77 = 791LL;

	t77 = (x361|((x362/x363)*x364));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = -1LL;
	uint64_t x370 = 54LLU;
	int64_t x371 = INT64_MAX;
	uint8_t x372 = 6U;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (x369|((x370/x371)*x372));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x373 = UINT64_MAX;
	static int8_t x376 = -1;
	uint64_t t79 = UINT64_MAX;

	t79 = (x373|((x374/x375)*x376));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = -1;
	int16_t x379 = INT16_MIN;
	static int8_t x380 = INT8_MIN;
	volatile int32_t t80 = 0;

	t80 = (x377|((x378/x379)*x380));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = -1;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t81 = -1512;

	t81 = (x389|((x390/x391)*x392));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x393 = 1;
	uint8_t x395 = UINT8_MAX;
	static int32_t t82 = 36;

	t82 = (x393|((x394/x395)*x396));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = 134182U;
	int8_t x400 = -1;
	static volatile uint32_t t83 = UINT32_MAX;

	t83 = (x397|((x398/x399)*x400));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x401 = -1LL;
	int64_t x402 = 5052510550631LL;
	int32_t x403 = 3;
	uint8_t x404 = 4U;
	static volatile int64_t t84 = 43LL;

	t84 = (x401|((x402/x403)*x404));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x405 = UINT16_MAX;
	static int64_t x406 = INT64_MIN;
	int32_t x407 = INT32_MIN;
	volatile int64_t t85 = 2136027260624142LL;

	t85 = (x405|((x406/x407)*x408));

	if (t85 != 12884967423LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = 0;

	t86 = (x409|((x410/x411)*x412));

	if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = INT16_MIN;
	int8_t x414 = INT8_MIN;
	volatile uint32_t x415 = UINT32_MAX;
	int64_t x416 = INT64_MIN;

	t87 = (x413|((x414/x415)*x416));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x417 = -1;
	int32_t x418 = INT32_MAX;
	static uint16_t x419 = UINT16_MAX;
	volatile int8_t x420 = INT8_MIN;
	volatile int32_t t88 = -194129514;

	t88 = (x417|((x418/x419)*x420));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x429 = INT16_MIN;
	uint64_t x430 = 3133314671731131LLU;
	uint8_t x431 = 48U;
	static volatile uint32_t x432 = 12U;
	volatile uint64_t t89 = 282836LLU;

	t89 = (x429|((x430/x431)*x432));

	if (t89 != 18446744073709525096LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x433 = INT16_MAX;
	int8_t x435 = INT8_MIN;
	uint32_t x436 = 32801054U;
	uint64_t t90 = 525813696080820502LLU;

	t90 = (x433|((x434/x435)*x436));

	if (t90 != 32767LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x437 = -97877274360LL;
	int16_t x438 = -1;
	int8_t x439 = INT8_MAX;
	uint16_t x440 = 31U;

	t91 = (x437|((x438/x439)*x440));

	if (t91 != -97877274360LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x441 = INT64_MIN;
	volatile int16_t x442 = -14782;
	volatile uint64_t x444 = 1721035512029756LLU;
	volatile uint64_t t92 = 130924527663118540LLU;

	t92 = (x441|((x442/x443)*x444));

	if (t92 != 14813638107814736700LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x450 = INT16_MIN;
	int8_t x451 = INT8_MAX;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t93 = 244775;

	t93 = (x449|((x450/x451)*x452));

	if (t93 != -65757) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x453 = INT32_MIN;
	static int16_t x454 = -1;
	int8_t x455 = INT8_MAX;
	int32_t t94 = INT32_MIN;

	t94 = (x453|((x454/x455)*x456));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x457 = INT64_MAX;
	int16_t x458 = 19;
	volatile int8_t x459 = -7;
	int8_t x460 = INT8_MAX;
	volatile int64_t t95 = -1912178573453484089LL;

	t95 = (x457|((x458/x459)*x460));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x461 = -62248258LL;
	int32_t x462 = INT32_MIN;
	static int64_t t96 = -39737484LL;

	t96 = (x461|((x462/x463)*x464));

	if (t96 != -321LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x465 = INT32_MIN;
	int32_t x466 = -1;
	static uint8_t x467 = 26U;
	volatile uint8_t x468 = 22U;
	volatile int32_t t97 = INT32_MIN;

	t97 = (x465|((x466/x467)*x468));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x469 = -286;
	int8_t x470 = INT8_MIN;
	int16_t x471 = -1;
	int64_t x472 = -1LL;
	volatile int64_t t98 = -6LL;

	t98 = (x469|((x470/x471)*x472));

	if (t98 != -30LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x477 = 99;
	int64_t x478 = INT64_MIN;
	static uint32_t x479 = UINT32_MAX;
	static uint8_t x480 = 1U;
	int64_t t99 = 235541485LL;

	t99 = (x477|((x478/x479)*x480));

	if (t99 != -2147483549LL) { NG(); } else { ; }
	
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

